#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<osgGA::GUIEventHandler,dstType> {
	static inline dstType* cast(osgGA::GUIEventHandler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<NUI_IMAGE_FRAME,dstType> {
	static inline dstType* cast(NUI_IMAGE_FRAME* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<NUI_SKELETON_DATA,dstType> {
	static inline dstType* cast(NUI_SKELETON_DATA* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

