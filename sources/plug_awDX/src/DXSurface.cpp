
#include "DXSurface.h"
#include <osg/Timer>

void DXSurface::setTargetSurface(IDirect3DSurface9* surface)
{
	_surface = surface;
	_surfaceWidth = 0;
	_surfaceHeight = 0;
	
	if(!_surface)
		return;
		
	// The surface is valid, we should update its size:
	D3DSURFACE_DESC desc;
	CHECK_RESULT(_surface->GetDesc(&desc),"Cannot get surface desc.");

	_surfaceWidth = desc.Width;
	_surfaceHeight = desc.Height;	
}

void DXSurface::validateClipRect(int dx, int dy, const Awesomium::Rect &clip_rect, Awesomium::Rect& result) {
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
	
void DXSurface::Paint(unsigned char *src_buffer, int src_row_span, const Awesomium::Rect &src_rect, const Awesomium::Rect &dest_rect) {
	// logINFO("Painting rect: x="<<dest_rect.x<<", y="<<dest_rect.y<<", w="<<dest_rect.width<<", h="<<dest_rect.height);
	
	osg::Timer_t startTick = osg::Timer::instance()->tick();
	
	CHECK(_surface,"Invalid DirectX Surface in DXSurface::Paint()")
	
	CHECK(src_rect.width==dest_rect.width,"mismatch in src and dest width: src_ww="<<src_rect.width<<", dest_ww="<<dest_rect.width);
	CHECK(src_rect.height==dest_rect.height,"mismatch in src and dest height: src_hh="<<src_rect.height<<", dest_hh="<<dest_rect.height);


	D3DLOCKED_RECT locked;
	RECT rect;
	rect.left = dest_rect.x;
	rect.top = dest_rect.y;
	rect.right = dest_rect.x+dest_rect.width;
	rect.bottom = dest_rect.y+dest_rect.height;
	
	CHECK_RESULT(_surface->LockRect(&locked,&rect,D3DLOCK_NOSYSLOCK),"Could not lock surface data");
	
	CHECK(locked.Pitch==_surfaceWidth*4,"Invalid Pitch value, expected:"<< _surfaceWidth*4<<", got: "<<locked.Pitch);
	
	unsigned char* src = src_buffer + src_rect.y * src_row_span + src_rect.x * 4;
	unsigned char* dest = (unsigned char *)locked.pBits;
	unsigned char* line;

	int height = src_rect.height;
	int width = src_rect.width;
	int offset = (_surfaceWidth-width)*4;
	
	for(int row=0; row<height; ++row) {
		line = src + src_row_span*row;
		for(int i=0; i<width; ++i) {
			*dest++ = *line++;
			*dest++ = *line++;
			*dest++ = *line++;
			*dest++ = *line++;
		}
		dest += offset;		
	}
	
	CHECK_RESULT(_surface->UnlockRect(),"Could not unlock surface data");
	
	double elapsed = osg::Timer::instance()->delta_s(startTick,osg::Timer::instance()->tick());
	// logINFO("Painted in " << elapsed*1000 << " ms");
};

void DXSurface::Scroll(int dx, int dy, const Awesomium::Rect &clip_rect) {
	CHECK(_surface,"Invalid DirectX Surface in DXSurface::Scroll()")

	CHECK(false,"DXSurface::Scroll() is not implemented yet.");
	
#if 0
	Awesomium::Rect area;
	validateClipRect(dx,dy,clip_rect,area);
	
	// first copy the source area in a temp buffer:	
	D3DLOCKED_RECT locked;
	RECT rect;
	rect.left = clip_rect.x;
	rect.top = clip_rect.y;
	rect.right = clip_rect.x+area.width;
	rect.bottom = clip_rect.y+area.height;
	
	CHECK_RESULT(_surface->LockRect(&locked,&rect,0),"Could not lock surface data");
	
	CHECK(locked.Pitch==_surfaceWidth*4,"Invalid Pitch value, expected:"<< _surfaceWidth*4<<", got: "<<locked.Pitch);
	
	unsigned char* buf = new unsigned char[area.width*area.height*4];
	
	unsigned char* src = locked.pBits; 
	unsigned char* dest = buf;
	unsigned char* line;

	int height = src_rect.height;
	int width = src_rect.width*4;
	int offset = (_surfaceWidth-width)*4;
	
	for(int row=0; row<height; ++row) {
		line = src + src_row_span*row;
		for(int i=0; i<width; ++i) {
			*dest++ = line++;
		}
		dest += offset;		
	}
	
	CHECK_RESULT(_surface->UnlockRect(),"Could not unlock surface data");
	
	

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
#endif
};
