#ifndef _OSGSURFACE_H_
#define _OSGSURFACE_H_

#include <sgtCommon.h>
#include <Awesomium/Surface.h>
#include <osg/Texture2D>

using namespace osg;
using namespace Awesomium;

class Area : public osg::Referenced {
public:
	int x;
	int y;
	int width;
	int height;
	unsigned char* data;
	
	Area() : x(0),y(0),width(0),height(0),data(NULL) {};
	Area(int xx, int yy, int ww, int hh, unsigned char* ptr) : x(xx), y(yy), width(ww), height(hh), data(ptr) {};
	
	~Area() {
		if(data)
			delete [] data;
	};
};

class SubLoader : public osg::Texture2D::SubloadCallback {
public:
	typedef std::vector<osg::ref_ptr<Area> > AreaList;
	
protected:
	unsigned char* _data;
	int _surfaceWidth;
	int _surfaceHeight;
	int _internalFormat;
	mutable AreaList _areas;
	
public:
	SubLoader() : _data(NULL), _surfaceWidth(-1), _surfaceHeight(-1), _internalFormat(GL_RGBA) {};
	
	bool textureObjectValid (const Texture2D &texture, State &state) const;
	//osg::Texture::TextureObject* generateTextureObject (const Texture2D &texture, State &state) const;
	void load (const Texture2D &texture, State &state) const;
	void subload (const Texture2D &texture, State &state) const;
	
	void setSurfaceSize(int width, int height);
	
	void addArea(int xx, int yy, int ww, int hh, unsigned char* ptr);
	
	inline unsigned char* getData(int xx, int yy) {
		return _data + (xx + yy*_surfaceWidth)*4;
	};
	
	~SubLoader() {
		if(_data)
			delete [] _data;
	}
};

class OSGSurface : public Awesomium::Surface {
protected:
	Awesomium::WebView* _view;
	osg::ref_ptr<osg::Texture2D> _texture;
	osg::ref_ptr<SubLoader> _cb;
	int _surfaceWidth;
	int _surfaceHeight;
	
public:
	OSGSurface(Awesomium::WebView* view) : _view(view) {
		_texture = new osg::Texture2D();
		_texture->setInternalFormat(GL_RGBA);
		logINFO("Initializing OSGSurface with texture: " << (const void*)_texture.get());
		
		_cb = new SubLoader();
		_texture->setSubloadCallback(_cb.get());
		
		setSize(600,400);
	};
	
	inline Awesomium::WebView* getWebView() {
		return _view;
	};
	
	void setSize(int width, int height) {
		_surfaceWidth = width;
		_surfaceHeight = height;
	
		_texture->setTextureSize(width,height);
		_cb->setSurfaceSize(width,height);
	}
	
	inline osg::Texture2D* getTexture() {
		return _texture.get();
	};
	
	void validateClipRect(int dx, int dy, const Awesomium::Rect &clip_rect, Area& result);
	
	void Paint(unsigned char *src_buffer, int src_row_span, const Awesomium::Rect &src_rect, const Awesomium::Rect &dest_rect);
	void Scroll(int dx, int dy, const Awesomium::Rect &clip_rect);
	
	~OSGSurface() {
		trDEBUG("OSGSurface","Deleting surface.");
	}
	
};

#endif
