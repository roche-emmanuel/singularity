#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<osg::Referenced,dstType> {
	static inline dstType* cast(osg::Referenced* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<TwBar,dstType> {
	static inline dstType* cast(TwBar* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<TwEnumVal,dstType> {
	static inline dstType* cast(TwEnumVal* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<TwStructMember,dstType> {
	static inline dstType* cast(TwStructMember* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

