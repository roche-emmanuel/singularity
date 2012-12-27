#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"

#include <Awesomium/BitmapSurface.h>
#include <Awesomium/WebConfig.h>
#include <Awesomium/WebPreferences.h>
#include <osg/Image>
#include <osg/Texture2D>

/** LUNA_CLASS_EXTENSION */
void copyTo(Awesomium::BitmapSurface* surface, osg::Image* img, bool to_rgba = true, bool flip_y = true);

/** LUNA_CLASS_EXTENSION */
void addAdditionalOption(Awesomium::WebConfig* config, std::string& option);

/** LUNA_CLASS_EXTENSION */
void useWebGL(Awesomium::WebPreferences* prefs, bool enabled);


class SurfaceSubloadCallback : public osg::Texture2D::SubloadCallback {
protected:
	Awesomium::WebView* _view;
	mutable int _width;
	mutable int _height;
	mutable unsigned char* _buffer;
	
	bool copySurface() const;
	
public:
	SurfaceSubloadCallback(Awesomium::WebView* view);

	void load(const osg::Texture2D & texture, osg::State & state) const;
	void subload(const osg::Texture2D & texture, osg::State & state) const;
	virtual ~SurfaceSubloadCallback() {
		if(_buffer) {
			delete [] _buffer;
			_buffer = NULL;
		}
	};
};


#endif
