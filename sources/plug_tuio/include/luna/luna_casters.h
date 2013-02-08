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
struct luna_caster<tuio::TUIOClientHandler,dstType> {
	static inline dstType* cast(tuio::TUIOClientHandler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

