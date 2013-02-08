#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"

#include <Awesomium/BitmapSurface.h>
#include <Awesomium/WebConfig.h>
#include <Awesomium/WebPreferences.h>
#include <Awesomium/WebKeyboardEvent.h>
#include <osg/Image>
#include <osg/Texture2D>

/** LUNA_CLASS_EXTENSION */
void copyTo(Awesomium::BitmapSurface* surface, osg::Image* img, bool to_rgba = true, bool flip_y = true);

/** LUNA_CLASS_EXTENSION */
void addAdditionalOption(Awesomium::WebConfig* config, std::string& option);

/** LUNA_CLASS_EXTENSION */
inline void setType(Awesomium::WebKeyboardEvent* ke, int type) {
	ke->type = (WebKeyboardEvent::Type)type;
};

/** LUNA_CLASS_EXTENSION */
inline void setModifiers(Awesomium::WebKeyboardEvent* ke, int mod) {
	ke->modifiers = mod;
};

/** LUNA_CLASS_EXTENSION */
inline std::string setVirtualKeyCode(Awesomium::WebKeyboardEvent* ke, int code) {
	ke->virtual_key_code = code;
	char* buf = new char[20];
	Awesomium::GetKeyIdentifierFromVirtualKeyCode(code,&buf);
	strcpy(ke->key_identifier, buf);
	delete[] buf;	
	return ke->key_identifier ? std::string(ke->key_identifier) : "NULL";
};

/** LUNA_CLASS_EXTENSION */
inline void setNativeKeyCode(Awesomium::WebKeyboardEvent* ke, int code) {
	ke->native_key_code = code;
};

/** LUNA_CLASS_EXTENSION */
inline void setText(Awesomium::WebKeyboardEvent* ke, int character) {
	ke->text[0] = character;
	ke->unmodified_text[0] = character;
};


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
