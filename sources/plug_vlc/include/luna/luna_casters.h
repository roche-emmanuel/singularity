#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<osg::ImageStream,dstType> {
	static inline dstType* cast(osg::ImageStream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

