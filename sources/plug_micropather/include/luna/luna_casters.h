#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<micropather::StateCost,dstType> {
	static inline dstType* cast(micropather::StateCost* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<micropather::NodeCost,dstType> {
	static inline dstType* cast(micropather::NodeCost* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<micropather::PathNode,dstType> {
	static inline dstType* cast(micropather::PathNode* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<micropather::PathNodePool,dstType> {
	static inline dstType* cast(micropather::PathNodePool* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<micropather::MicroPather,dstType> {
	static inline dstType* cast(micropather::MicroPather* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec2f,dstType> {
	static inline dstType* cast(osg::Vec2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

