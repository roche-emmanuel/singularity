#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_proland(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"ork");
	Luna< ork::Buffer::Parameters >::Register(L);
	Luna< ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, value1f > >::Register(L);
	Luna< ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, value1d > >::Register(L);
	Luna< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, value1i > >::Register(L);
	Luna< ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, value1ui > >::Register(L);
	Luna< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, value1b > >::Register(L);
	Luna< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, value2f > >::Register(L);
	Luna< ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, value2d > >::Register(L);
	Luna< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, value2i > >::Register(L);
	Luna< ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, value2ui > >::Register(L);
	Luna< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, value2b > >::Register(L);
	Luna< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, value3f > >::Register(L);
	Luna< ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, value3d > >::Register(L);
	Luna< ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, value3i > >::Register(L);
	Luna< ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, value3ui > >::Register(L);
	Luna< ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, value3b > >::Register(L);
	Luna< ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, value4f > >::Register(L);
	Luna< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, value4d > >::Register(L);
	Luna< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, value4i > >::Register(L);
	Luna< ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, value4ui > >::Register(L);
	Luna< ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, value4b > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, valueMatrix2f > >::Register(L);
	Luna< ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, valueMatrix3f > >::Register(L);
	Luna< ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, valueMatrix4f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, valueMatrix2x3f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, valueMatrix2x4f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, valueMatrix3x2f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, valueMatrix3x4f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, valueMatrix4x2f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, valueMatrix4x3f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::Register(L);
	Luna< ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, valueMatrix3d > >::Register(L);
	Luna< ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, valueMatrix4d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, valueMatrix2x3d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, valueMatrix2x4d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, valueMatrix3x2d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, valueMatrix3x4d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, valueMatrix4x2d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, valueMatrix4x3d > >::Register(L);
	Luna< ork::Object >::Register(L);
	Luna< ork::vec2h >::Register(L);
	Luna< ork::vec2f >::Register(L);
	Luna< ork::vec2d >::Register(L);
	Luna< ork::vec2i >::Register(L);
	Luna< ork::vec3h >::Register(L);
	Luna< ork::vec3f >::Register(L);
	Luna< ork::vec3d >::Register(L);
	Luna< ork::vec3i >::Register(L);
	Luna< ork::vec4h >::Register(L);
	Luna< ork::vec4f >::Register(L);
	Luna< ork::vec4d >::Register(L);
	Luna< ork::vec4i >::Register(L);
	Luna< ork::box2f >::Register(L);
	Luna< ork::box2d >::Register(L);
	Luna< ork::box2i >::Register(L);
	Luna< ork::box3f >::Register(L);
	Luna< ork::box3d >::Register(L);
	Luna< ork::box3i >::Register(L);
	Luna< ork::mat2f >::Register(L);
	Luna< ork::mat2d >::Register(L);
	Luna< ork::mat3f >::Register(L);
	Luna< ork::mat3d >::Register(L);
	Luna< ork::mat4f >::Register(L);
	Luna< ork::mat4d >::Register(L);
	Luna< ork::quatf >::Register(L);
	Luna< ork::quatd >::Register(L);
	Luna< ork::SceneManager >::Register(L);
	Luna< ork::ptr< ork::Texture > >::Register(L);
	Luna< ork::Scheduler >::Register(L);
	Luna< ork::MultithreadScheduler >::Register(L);
	Luna< ork::ptr< proland::TileSampler > >::Register(L);
	Luna< ork::half >::Register(L);
	Luna< ork::Buffer >::Register(L);
	Luna< ork::CPUBuffer >::Register(L);
	Luna< ork::GPUBuffer >::Register(L);
	Luna< ork::Sampler >::Register(L);
	Luna< ork::Sampler::Parameters >::Register(L);
	Luna< ork::Texture >::Register(L);
	Luna< ork::Texture::Parameters >::Register(L);
	Luna< ork::Texture2D >::Register(L);
	Luna< ork::Module >::Register(L);
	Luna< ork::Program >::Register(L);
	Luna< ork::Uniform >::Register(L);
	Luna< ork::UniformSampler >::Register(L);
	Luna< ork::UniformSubroutine >::Register(L);
	Luna< ork::UniformBlock >::Register(L);
	Luna< ork::Task >::Register(L);
	Luna< ork::TaskListener >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"proland");
	Luna< proland::LandManager >::Register(L);
	Luna< proland::TileStorage >::Register(L);
	Luna< proland::GPUTileStorage >::Register(L);
	Luna< proland::TileCache >::Register(L);
	Luna< proland::TileProducer >::Register(L);
	Luna< proland::ElevationProducer >::Register(L);
	Luna< proland::NormalProducer >::Register(L);
	Luna< proland::Deformation >::Register(L);
	Luna< proland::TerrainNode >::Register(L);
	Luna< proland::TileSampler >::Register(L);
	Luna< proland::TileSampler::TileFilter >::Register(L);
	Luna< proland::TileSamplerZ >::Register(L);
	Luna< proland::TerrainQuad >::Register(L);
	Luna< std::vector< ptr< ork::Module > > >::Register(L);
	Luna< std::set< ork::Program * > >::Register(L);
	Luna< std::vector< ptr< ork::Uniform > > >::Register(L);
	Luna< std::set< ork::Task * > >::Register(L);
	Luna< osg::BoundingSphere >::Register(L);
	Luna< sgtPtr< proland::Deformation > >::Register(L);
	Luna< sgtPtr< proland::TerrainQuad > >::Register(L);
	Luna< sgtObserver< proland::TerrainQuad > >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"proland");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"ork");
	luna_copyParents(L,"proland");

	luna_pushModule(L,"proland");
	return 1;
}

#ifdef __cplusplus
}
#endif

