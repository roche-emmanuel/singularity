#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<sgt::half,dstType> {
	static inline dstType* cast(sgt::half* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::vec2h,dstType> {
	static inline dstType* cast(sgt::vec2h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::vec2f,dstType> {
	static inline dstType* cast(sgt::vec2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::vec2d,dstType> {
	static inline dstType* cast(sgt::vec2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::vec2i,dstType> {
	static inline dstType* cast(sgt::vec2i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::vec3h,dstType> {
	static inline dstType* cast(sgt::vec3h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::vec3f,dstType> {
	static inline dstType* cast(sgt::vec3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::vec3d,dstType> {
	static inline dstType* cast(sgt::vec3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::vec3i,dstType> {
	static inline dstType* cast(sgt::vec3i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

