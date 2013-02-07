
#include "OSGSurface.h"

bool SubLoader::textureObjectValid (const Texture2D &texture, State &state) const {
    // logINFO("Checking texture object validity with w="<<_surfaceWidth<<", h="<<_surfaceHeight);
	Texture::TextureObject* textureObject = texture.getTextureObject(state.getContextID());
    if (!textureObject) return false;

	bool res = textureObject->match(GL_TEXTURE_2D, 0, _internalFormat, _surfaceWidth, _surfaceHeight, 1, 0);
	// logINFO("Returning validity "<< res);
	// logINFO("Returning mipmaps= "<< textureObject->_profile._numMipmapLevels);
    return res;
};

/*
Texture::TextureObject* SubLoader::generateTextureObject (const Texture2D &texture, State &state) const {
	logINFO("Generating texture object with w="<<_surfaceWidth<<", h="<<_surfaceHeight);
	Texture::TextureObject* obj = osg::Texture::generateTextureObject(&texture,state.getContextID(), GL_TEXTURE_2D, 1,_internalFormat,_surfaceWidth,_surfaceHeight,1,0);	
	CHECK_RET(obj,NULL,"Invalid TextureObject created.");
	obj->setAllocated(true);
	
	return obj;
};
*/
	
void SubLoader::load(const Texture2D &texture, State &state) const {
	// copy the complete image:
	// logINFO("Performing complete load...");
	glTexImage2D( GL_TEXTURE_2D, 0, _internalFormat,
                     _surfaceWidth, _surfaceHeight, 0,
                     _internalFormat,
                     GL_UNSIGNED_BYTE,
                     _data);
		
	// clear all the areas:
	_areas.clear();
};

void SubLoader::subload (const Texture2D &texture, State &state) const {
	if(_areas.empty())
		return;
			 
	// logINFO("Performing " << _areas.size() << " subloadings...");
	for(AreaList::iterator it = _areas.begin(); it!=_areas.end(); ++it) {
		glTexSubImage2D( GL_TEXTURE_2D, 0,
						 (*it)->x, (*it)->y,
						 (*it)->width, (*it)->height,
						 _internalFormat,
						 GL_UNSIGNED_BYTE,
						 (*it)->data);		
	}

	// clear all the areas:
	_areas.clear();
};

void SubLoader::setSurfaceSize(int width, int height) {
	if(width==_surfaceWidth && height==_surfaceHeight) {
		return;
	}
	
	logDEBUG("Updating subloader dimensions to " << width << "x" << height);

	if(_data)
		delete [] _data;
	
	_surfaceWidth = width;
	_surfaceHeight = height;
	
	_data = new unsigned char[_surfaceWidth*_surfaceHeight*4];
	memset(_data,0,_surfaceWidth*_surfaceHeight*4);
};

void SubLoader::addArea(int xx, int yy, int ww, int hh, unsigned char* ptr) {
	_areas.push_back(new Area(xx,yy,ww,hh,ptr));
};

void OSGSurface::validateClipRect(int dx, int dy, const Awesomium::Rect &clip_rect, Area& result) {
	// logINFO("Initial rect: x="<<clip_rect.x<<", y="<<clip_rect.y<<", w="<<clip_rect.width<<", h="<<clip_rect.height<<", with dx="<<dx<<", dy="<<dy);

	int left = clip_rect.x+dx;
	int right = clip_rect.x+dx+clip_rect.width;
	int top = clip_rect.y+dy;
	int bottom = clip_rect.y+dy+clip_rect.height;
	
	result.x = osg::minimum(osg::maximum(left,0),_surfaceWidth);
	right = osg::minimum(osg::maximum(right,0),_surfaceWidth);
	result.y = osg::minimum(osg::maximum(top,0),_surfaceHeight);
	bottom = osg::minimum(osg::maximum(bottom,0),_surfaceHeight);
	result.width = right - result.x;
	result.height = bottom - result.y;
	result.x -= dx;
	result.y -= dy;
	
	// logINFO("Validated rect: x="<<result.x<<", y="<<result.y<<", w="<<result.width<<", h="<<result.height);
};
	
void OSGSurface::Paint(unsigned char *src_buffer, int src_row_span, const Awesomium::Rect &src_rect, const Awesomium::Rect &dest_rect) {
	// logINFO("Painting rect: x="<<dest_rect.x<<", y="<<dest_rect.y<<", w="<<dest_rect.width<<", h="<<dest_rect.height);
	
	int xx = dest_rect.x;
	int yy = dest_rect.y;
	int height = src_rect.height;
	int width = src_rect.width;
	
	CHECK(src_rect.width==dest_rect.width,"mismatch in src and dest width: src_ww="<<src_rect.width<<", dest_ww="<<dest_rect.width);
	CHECK(src_rect.height==dest_rect.height,"mismatch in src and dest height: src_hh="<<src_rect.height<<", dest_hh="<<dest_rect.height);
	
	//CHECK(src_row_span==4*width,"Invalid row_span="<<src_row_span<<" with witdh="<<width);
	
	int offset = (_surfaceWidth-width)*4;
	unsigned char* buf = new unsigned char[width*height*4];
	unsigned char* subptr = buf;
	unsigned char* line;
	
	unsigned char* src = src_buffer + src_rect.y * src_row_span + + src_rect.x * 4;
	
	unsigned char* ptr = _cb->getData(xx,yy);
	for(int row=0; row<height; ++row) {
		line = src + src_row_span*row;
		for(int i=0; i<width; ++i) {
			*ptr++ = line[2];
			*ptr++ = line[1];
			*ptr++ = line[0];
			*ptr++ = line[3];
			*subptr++ = line[2];
			*subptr++ = line[1];
			*subptr++ = line[0];
			*subptr++ = line[3];
			line+=4;
		}
		ptr += offset;
	}
	
	_cb->addArea(xx,yy,width,height,buf);
};

void OSGSurface::Scroll(int dx, int dy, const Awesomium::Rect &clip_rect) {
	Area area;
	validateClipRect(dx,dy,clip_rect,area);
	//logINFO("Scrolling rect: x="<<clip_rect.x<<", y="<<clip_rect.y<<", w="<<clip_rect.width<<", h="<<clip_rect.height<<", with dx="<<dx<<", dy="<<dy);
	
	int xx = area.x;
	int yy = area.y;
	int height = area.height;
	int width = area.width;

	int offset = (_surfaceWidth - width)*4;
	
	unsigned char* buf = new unsigned char[width*height*4];
	
	unsigned char* ptr = _cb->getData(xx,yy);
	
	unsigned char* orig = buf;
	
	for(int row=0;row<height;++row) {
		for(int i=0;i< width; ++i) {
			*buf++ = *ptr++;
			*buf++ = *ptr++;
			*buf++ = *ptr++;
			*buf++ = *ptr++;
		}
		ptr += offset;
	};
	
	// copy to the destination:
	ptr = _cb->getData(xx+dx,yy+dy);
	buf = orig;
	
	for(int row=0;row<height;++row) {
		for(int i=0;i< width; ++i) {
			*ptr++ = *buf++;
			*ptr++ = *buf++;
			*ptr++ = *buf++;
			*ptr++ = *buf++;
		}
		ptr += offset;
	};	
	
	_cb->addArea(xx+dx,yy+dy,width,height,orig);
};
