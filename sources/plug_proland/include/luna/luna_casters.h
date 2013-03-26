#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<osg::Drawable,dstType> {
	static inline dstType* cast(osg::Drawable* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<proland::ProlandDrawable,dstType> {
	static inline dstType* cast(proland::ProlandDrawable* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<proland::ProlandTest,dstType> {
	static inline dstType* cast(proland::ProlandTest* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

