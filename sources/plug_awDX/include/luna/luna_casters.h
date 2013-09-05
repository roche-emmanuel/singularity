#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<Awesomium::Surface,dstType> {
	static inline dstType* cast(Awesomium::Surface* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<DXSurface,dstType> {
	static inline dstType* cast(DXSurface* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

