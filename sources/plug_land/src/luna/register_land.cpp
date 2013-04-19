#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_land(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"sgt");
	Luna< sgt::Buffer::Parameters >::Register(L);
	Luna< std::set< sgtPtr< sgt::Task > > >::Register(L);
	Luna< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::Register(L);
	Luna< sgt::Buffer >::Register(L);
	Luna< sgt::CPUBuffer >::Register(L);
	Luna< sgt::Timer >::Register(L);
	Luna< sgt::half >::Register(L);
	Luna< sgt::Scheduler >::Register(L);
	Luna< sgt::MultithreadScheduler >::Register(L);
	Luna< sgt::Task >::Register(L);
	Luna< sgt::TaskListener >::Register(L);
	Luna< sgt::TaskGraph >::Register(L);
	Luna< sgt::SetIterator< sgtPtr< sgt::Task > > >::Register(L);
	Luna< sgt::LandManager >::Register(L);
	Luna< sgt::Deformation >::Register(L);
	Luna< sgt::TerrainNode >::Register(L);
	Luna< sgt::TerrainQuad >::Register(L);
	Luna< sgt::TileStorage >::Register(L);
	Luna< sgt::GPUTileStorage >::Register(L);
	Luna< sgt::GPUTileStorage::GPUSlot >::Register(L);
	Luna< sgt::TileCache >::Register(L);
	Luna< sgt::TileCache::Tile >::Register(L);
	Luna< std::pair< int, std::pair< int, int > > >::Register(L);
	Luna< std::pair< int, sgt::TileCache::Tile::Id > >::Register(L);
	Luna< sgt::TileLayer >::Register(L);
	Luna< sgt::TileProducer >::Register(L);
	Luna< sgt::TileStorage::Slot >::Register(L);
	Luna< sgt::vec2h >::Register(L);
	Luna< sgt::vec2f >::Register(L);
	Luna< sgt::vec2d >::Register(L);
	Luna< sgt::vec2i >::Register(L);
	Luna< sgt::vec3h >::Register(L);
	Luna< sgt::vec3f >::Register(L);
	Luna< sgt::vec3d >::Register(L);
	Luna< sgt::vec3i >::Register(L);
	Luna< sgt::vec4h >::Register(L);
	Luna< sgt::vec4f >::Register(L);
	Luna< sgt::vec4d >::Register(L);
	Luna< sgt::vec4i >::Register(L);
	Luna< sgt::box2f >::Register(L);
	Luna< sgt::box2d >::Register(L);
	Luna< sgt::box2i >::Register(L);
	Luna< sgt::box3f >::Register(L);
	Luna< sgt::box3d >::Register(L);
	Luna< sgt::box3i >::Register(L);
	Luna< sgt::mat2f >::Register(L);
	Luna< sgt::mat2d >::Register(L);
	Luna< sgt::mat3f >::Register(L);
	Luna< sgt::mat3d >::Register(L);
	Luna< sgt::mat4f >::Register(L);
	Luna< sgt::mat4d >::Register(L);
	Luna< sgt::quatf >::Register(L);
	Luna< sgt::quatd >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"land");
	Luna< sgtPtr< sgt::Task > >::Register(L);
	Luna< sgtPtr< sgt::TaskGraph > >::Register(L);
	Luna< osg::BoundingSphere >::Register(L);
	Luna< sgtPtr< sgt::Deformation > >::Register(L);
	Luna< sgtPtr< sgt::TerrainQuad > >::Register(L);
	Luna< sgtObserver< sgt::TerrainQuad > >::Register(L);
	Luna< sgtPtr< osg::Texture2DArray > >::Register(L);
	Luna< std::vector< sgtPtr< sgt::TileProducer > > >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"land");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"sgt");
	luna_copyParents(L,"land");

	luna_pushModule(L,"land");
	return 1;
}

#ifdef __cplusplus
}
#endif

