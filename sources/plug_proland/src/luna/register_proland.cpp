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
	Luna< ork::Texture >::Register(L);
	Luna< ork::Texture::Parameters >::Register(L);
	Luna< ork::Texture2D >::Register(L);
	Luna< ork::Module >::Register(L);
	Luna< ork::Program >::Register(L);
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
	Luna< ptr< Sampler > >::Register(L);
	Luna< std::vector< ptr< ork::Module > > >::Register(L);
	Luna< std::set< ork::Program * > >::Register(L);
	Luna< ptr< Value > >::Register(L);
	Luna< ptr< ork::Module > >::Register(L);
	Luna< ptr< ork::Program > >::Register(L);
	Luna< std::vector< ptr< Uniform > > >::Register(L);
	Luna< ptr< Uniform > >::Register(L);
	Luna< ptr< Uniform1f > >::Register(L);
	Luna< ptr< Uniform1d > >::Register(L);
	Luna< ptr< Uniform1i > >::Register(L);
	Luna< ptr< Uniform1ui > >::Register(L);
	Luna< ptr< Uniform1b > >::Register(L);
	Luna< ptr< Uniform2f > >::Register(L);
	Luna< ptr< Uniform2d > >::Register(L);
	Luna< ptr< Uniform2i > >::Register(L);
	Luna< ptr< Uniform2ui > >::Register(L);
	Luna< ptr< Uniform2b > >::Register(L);
	Luna< ptr< Uniform3f > >::Register(L);
	Luna< ptr< Uniform3d > >::Register(L);
	Luna< ptr< Uniform3i > >::Register(L);
	Luna< ptr< Uniform3ui > >::Register(L);
	Luna< ptr< Uniform3b > >::Register(L);
	Luna< ptr< Uniform4f > >::Register(L);
	Luna< ptr< Uniform4d > >::Register(L);
	Luna< ptr< Uniform4i > >::Register(L);
	Luna< ptr< Uniform4ui > >::Register(L);
	Luna< ptr< Uniform4b > >::Register(L);
	Luna< ptr< UniformMatrix2f > >::Register(L);
	Luna< ptr< UniformMatrix2d > >::Register(L);
	Luna< ptr< UniformMatrix3f > >::Register(L);
	Luna< ptr< UniformMatrix3d > >::Register(L);
	Luna< ptr< UniformMatrix4f > >::Register(L);
	Luna< ptr< UniformMatrix4d > >::Register(L);
	Luna< ptr< UniformMatrix2x3f > >::Register(L);
	Luna< ptr< UniformMatrix2x3d > >::Register(L);
	Luna< ptr< UniformMatrix2x4f > >::Register(L);
	Luna< ptr< UniformMatrix2x4d > >::Register(L);
	Luna< ptr< UniformMatrix3x2f > >::Register(L);
	Luna< ptr< UniformMatrix3x2d > >::Register(L);
	Luna< ptr< UniformMatrix3x4f > >::Register(L);
	Luna< ptr< UniformMatrix3x4d > >::Register(L);
	Luna< ptr< UniformMatrix4x2f > >::Register(L);
	Luna< ptr< UniformMatrix4x2d > >::Register(L);
	Luna< ptr< UniformMatrix4x3f > >::Register(L);
	Luna< ptr< UniformMatrix4x3d > >::Register(L);
	Luna< ptr< UniformSampler > >::Register(L);
	Luna< ptr< UniformSubroutine > >::Register(L);
	Luna< ptr< UniformBlock > >::Register(L);
	Luna< SceneManager::visibility >::Register(L);
	Luna< osg::BoundingSphere >::Register(L);
	Luna< sgtPtr< proland::Deformation > >::Register(L);
	Luna< sgtPtr< proland::TerrainQuad > >::Register(L);
	Luna< ptr< proland::TileProducer > >::Register(L);
	Luna< ptr< proland::TerrainNode > >::Register(L);
	Luna< ptr< ork::SceneManager > >::Register(L);
	Luna< ptr< TerrainQuad > >::Register(L);
	Luna< ptr< Task > >::Register(L);
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

