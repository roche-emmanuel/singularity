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

template <typename dstType>
struct luna_caster<sgt::vec4h,dstType> {
	static inline dstType* cast(sgt::vec4h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::vec4f,dstType> {
	static inline dstType* cast(sgt::vec4f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::vec4d,dstType> {
	static inline dstType* cast(sgt::vec4d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::vec4i,dstType> {
	static inline dstType* cast(sgt::vec4i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::box2f,dstType> {
	static inline dstType* cast(sgt::box2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::box2d,dstType> {
	static inline dstType* cast(sgt::box2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::box2i,dstType> {
	static inline dstType* cast(sgt::box2i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::box3f,dstType> {
	static inline dstType* cast(sgt::box3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::box3d,dstType> {
	static inline dstType* cast(sgt::box3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::box3i,dstType> {
	static inline dstType* cast(sgt::box3i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::mat2f,dstType> {
	static inline dstType* cast(sgt::mat2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::mat2d,dstType> {
	static inline dstType* cast(sgt::mat2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::mat3f,dstType> {
	static inline dstType* cast(sgt::mat3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::mat3d,dstType> {
	static inline dstType* cast(sgt::mat3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::mat4f,dstType> {
	static inline dstType* cast(sgt::mat4f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::mat4d,dstType> {
	static inline dstType* cast(sgt::mat4d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

