#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<Awesomium::JSArray,dstType> {
	static inline dstType* cast(Awesomium::JSArray* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::JSObject,dstType> {
	static inline dstType* cast(Awesomium::JSObject* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::JSValue,dstType> {
	static inline dstType* cast(Awesomium::JSValue* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::Rect,dstType> {
	static inline dstType* cast(Awesomium::Rect* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::PrintConfig,dstType> {
	static inline dstType* cast(Awesomium::PrintConfig* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::ResourceResponse,dstType> {
	static inline dstType* cast(Awesomium::ResourceResponse* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebConfig,dstType> {
	static inline dstType* cast(Awesomium::WebConfig* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebKeyboardEvent,dstType> {
	static inline dstType* cast(Awesomium::WebKeyboardEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebMenuItem,dstType> {
	static inline dstType* cast(Awesomium::WebMenuItem* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebMenuItemArray,dstType> {
	static inline dstType* cast(Awesomium::WebMenuItemArray* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebPreferences,dstType> {
	static inline dstType* cast(Awesomium::WebPreferences* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebString,dstType> {
	static inline dstType* cast(Awesomium::WebString* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebStringArray,dstType> {
	static inline dstType* cast(Awesomium::WebStringArray* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebTouchPoint,dstType> {
	static inline dstType* cast(Awesomium::WebTouchPoint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebTouchEvent,dstType> {
	static inline dstType* cast(Awesomium::WebTouchEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebURL,dstType> {
	static inline dstType* cast(Awesomium::WebURL* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebFileChooserInfo,dstType> {
	static inline dstType* cast(Awesomium::WebFileChooserInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebPopupMenuInfo,dstType> {
	static inline dstType* cast(Awesomium::WebPopupMenuInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebContextMenuInfo,dstType> {
	static inline dstType* cast(Awesomium::WebContextMenuInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Awesomium::WebLoginDialogInfo,dstType> {
	static inline dstType* cast(Awesomium::WebLoginDialogInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Referenced,dstType> {
	static inline dstType* cast(osg::Referenced* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Image,dstType> {
	static inline dstType* cast(osg::Image* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Texture2D,dstType> {
	static inline dstType* cast(osg::Texture2D* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::State,dstType> {
	static inline dstType* cast(osg::State* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

