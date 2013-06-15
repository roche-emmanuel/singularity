#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<ork::Buffer::Parameters,dstType> {
	static inline dstType* cast(ork::Buffer::Parameters* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Object,dstType> {
	static inline dstType* cast(ork::Object* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2h,dstType> {
	static inline dstType* cast(ork::vec2h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2f,dstType> {
	static inline dstType* cast(ork::vec2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2d,dstType> {
	static inline dstType* cast(ork::vec2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2i,dstType> {
	static inline dstType* cast(ork::vec2i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3h,dstType> {
	static inline dstType* cast(ork::vec3h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3f,dstType> {
	static inline dstType* cast(ork::vec3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3d,dstType> {
	static inline dstType* cast(ork::vec3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3i,dstType> {
	static inline dstType* cast(ork::vec3i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4h,dstType> {
	static inline dstType* cast(ork::vec4h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4f,dstType> {
	static inline dstType* cast(ork::vec4f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4d,dstType> {
	static inline dstType* cast(ork::vec4d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4i,dstType> {
	static inline dstType* cast(ork::vec4i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box2f,dstType> {
	static inline dstType* cast(ork::box2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box2d,dstType> {
	static inline dstType* cast(ork::box2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box2i,dstType> {
	static inline dstType* cast(ork::box2i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box3f,dstType> {
	static inline dstType* cast(ork::box3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box3d,dstType> {
	static inline dstType* cast(ork::box3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box3i,dstType> {
	static inline dstType* cast(ork::box3i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat2f,dstType> {
	static inline dstType* cast(ork::mat2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat2d,dstType> {
	static inline dstType* cast(ork::mat2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat3f,dstType> {
	static inline dstType* cast(ork::mat3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat3d,dstType> {
	static inline dstType* cast(ork::mat3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat4f,dstType> {
	static inline dstType* cast(ork::mat4f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat4d,dstType> {
	static inline dstType* cast(ork::mat4d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::quatf,dstType> {
	static inline dstType* cast(ork::quatf* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::quatd,dstType> {
	static inline dstType* cast(ork::quatd* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::SceneManager,dstType> {
	static inline dstType* cast(ork::SceneManager* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ptr< ork::Texture >,dstType> {
	static inline dstType* cast(ork::ptr< ork::Texture >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Scheduler,dstType> {
	static inline dstType* cast(ork::Scheduler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::MultithreadScheduler,dstType> {
	static inline dstType* cast(ork::MultithreadScheduler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ptr< proland::TileSampler >,dstType> {
	static inline dstType* cast(ork::ptr< proland::TileSampler >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::half,dstType> {
	static inline dstType* cast(ork::half* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrixd,dstType> {
	static inline dstType* cast(osg::Matrixd* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix3,dstType> {
	static inline dstType* cast(osg::Matrix3* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Uniform,dstType> {
	static inline dstType* cast(osg::Uniform* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Node,dstType> {
	static inline dstType* cast(osg::Node* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<proland::LandManager,dstType> {
	static inline dstType* cast(proland::LandManager* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<proland::TileStorage,dstType> {
	static inline dstType* cast(proland::TileStorage* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<proland::GPUTileStorage,dstType> {
	static inline dstType* cast(proland::GPUTileStorage* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<proland::TileCache,dstType> {
	static inline dstType* cast(proland::TileCache* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<proland::TileProducer,dstType> {
	static inline dstType* cast(proland::TileProducer* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<proland::ElevationProducer,dstType> {
	static inline dstType* cast(proland::ElevationProducer* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<proland::NormalProducer,dstType> {
	static inline dstType* cast(proland::NormalProducer* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::Object,dstType> {
	static inline dstType* cast(sgt::Object* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

