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
struct luna_caster<ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, value1f >,dstType> {
	static inline dstType* cast(ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, value1f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, value1d >,dstType> {
	static inline dstType* cast(ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, value1d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, value1i >,dstType> {
	static inline dstType* cast(ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, value1i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, value1ui >,dstType> {
	static inline dstType* cast(ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, value1ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, value1b >,dstType> {
	static inline dstType* cast(ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, value1b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, value2f >,dstType> {
	static inline dstType* cast(ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, value2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, value2d >,dstType> {
	static inline dstType* cast(ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, value2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, value2i >,dstType> {
	static inline dstType* cast(ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, value2i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, value2ui >,dstType> {
	static inline dstType* cast(ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, value2ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, value2b >,dstType> {
	static inline dstType* cast(ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, value2b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, value3f >,dstType> {
	static inline dstType* cast(ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, value3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, value3d >,dstType> {
	static inline dstType* cast(ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, value3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, value3i >,dstType> {
	static inline dstType* cast(ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, value3i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, value3ui >,dstType> {
	static inline dstType* cast(ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, value3ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, value3b >,dstType> {
	static inline dstType* cast(ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, value3b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, value4f >,dstType> {
	static inline dstType* cast(ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, value4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, value4d >,dstType> {
	static inline dstType* cast(ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, value4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, value4i >,dstType> {
	static inline dstType* cast(ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, value4i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, value4ui >,dstType> {
	static inline dstType* cast(ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, value4ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, value4b >,dstType> {
	static inline dstType* cast(ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, value4b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, valueMatrix2f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, valueMatrix2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, valueMatrix3f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, valueMatrix3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, valueMatrix4f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, valueMatrix4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, valueMatrix2x3f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, valueMatrix2x3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, valueMatrix2x4f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, valueMatrix2x4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, valueMatrix3x2f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, valueMatrix3x2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, valueMatrix3x4f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, valueMatrix3x4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, valueMatrix4x2f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, valueMatrix4x2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, valueMatrix4x3f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, valueMatrix4x3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, valueMatrix3d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, valueMatrix3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, valueMatrix4d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, valueMatrix4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, valueMatrix2x3d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, valueMatrix2x3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, valueMatrix2x4d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, valueMatrix2x4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, valueMatrix3x2d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, valueMatrix3x2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, valueMatrix3x4d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, valueMatrix3x4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, valueMatrix4x2d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, valueMatrix4x2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, valueMatrix4x3d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, valueMatrix4x3d >* ptr) {
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
struct luna_caster<ork::Sampler,dstType> {
	static inline dstType* cast(ork::Sampler* ptr) {
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

