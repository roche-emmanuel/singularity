#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<sgt::half,dstType> {
	static inline dstType* cast(sgt::half* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

