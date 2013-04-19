#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <core/Buffer.h>
#include <math/box2.h>
#include <math/box3.h>
#include <math/mat2.h>
#include <math/mat3.h>
#include <math/mat4.h>
#include <math/quat.h>
#include <math/vec2.h>
#include <math/vec3.h>
#include <math/vec4.h>
#include <taskgraph/Task.h>
#include <core/CPUBuffer.h>
#include <core/Timer.h>
#include <math/half.h>
#include <taskgraph/Scheduler.h>
#include <taskgraph/MultithreadScheduler.h>
#include <taskgraph/TaskGraph.h>
#include <scene/LandManager.h>
#include <terrain/Deformation.h>
#include <terrain/TerrainNode.h>
#include <terrain/TerrainQuad.h>
#include <producer/TileStorage.h>
#include <producer/GPUTileStorage.h>
#include <producer/TileCache.h>
#include <producer/TileLayer.h>
#include <producer/TileProducer.h>

// Class: sgt::Buffer::Parameters
template<>
class LunaTraits< sgt::Buffer::Parameters > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Buffer::Parameters* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Buffer::Parameters* obj);
	typedef sgt::Buffer::Parameters parent_t;
	typedef sgt::Buffer::Parameters base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Uniform
template<>
class LunaTraits< osg::Uniform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Uniform* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Uniform* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Uniform base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Node
template<>
class LunaTraits< osg::Node > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Node* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Node* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Node base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< sgtPtr< sgt::Task > >
template<>
class LunaTraits< std::set< sgtPtr< sgt::Task > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< sgtPtr< sgt::Task > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< sgtPtr< sgt::Task > >* obj);
	typedef std::set< sgtPtr< sgt::Task > > parent_t;
	typedef std::set< sgtPtr< sgt::Task > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< sgtPtr< sgt::Task >, sgt::TaskSet >
template<>
class LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< sgtPtr< sgt::Task >, sgt::TaskSet >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< sgtPtr< sgt::Task >, sgt::TaskSet >* obj);
	typedef std::map< sgtPtr< sgt::Task >, sgt::TaskSet > parent_t;
	typedef std::map< sgtPtr< sgt::Task >, sgt::TaskSet > base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Object
template<>
class LunaTraits< sgt::Object > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Object* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Object* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::Object base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Buffer
template<>
class LunaTraits< sgt::Buffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Buffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Buffer* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::Buffer base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::CPUBuffer
template<>
class LunaTraits< sgt::CPUBuffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::CPUBuffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::CPUBuffer* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::CPUBuffer base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Timer
template<>
class LunaTraits< sgt::Timer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Timer* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Timer* obj);
	typedef sgt::Timer parent_t;
	typedef sgt::Timer base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::half
template<>
class LunaTraits< sgt::half > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::half* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::half* obj);
	typedef sgt::half parent_t;
	typedef sgt::half base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Scheduler
template<>
class LunaTraits< sgt::Scheduler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Scheduler* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Scheduler* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::Scheduler base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::MultithreadScheduler
template<>
class LunaTraits< sgt::MultithreadScheduler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::MultithreadScheduler* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::MultithreadScheduler* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::MultithreadScheduler base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Task
template<>
class LunaTraits< sgt::Task > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Task* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Task* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::Task base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TaskListener
template<>
class LunaTraits< sgt::TaskListener > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TaskListener* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TaskListener* obj);
	typedef sgt::TaskListener parent_t;
	typedef sgt::TaskListener base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TaskGraph
template<>
class LunaTraits< sgt::TaskGraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TaskGraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TaskGraph* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::TaskGraph base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::SetIterator< sgtPtr< sgt::Task > >
template<>
class LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::SetIterator< sgtPtr< sgt::Task > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::SetIterator< sgtPtr< sgt::Task > >* obj);
	typedef sgt::SetIterator< sgtPtr< sgt::Task > > parent_t;
	typedef sgt::SetIterator< sgtPtr< sgt::Task > > base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::LandManager
template<>
class LunaTraits< sgt::LandManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::LandManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::LandManager* obj);
	typedef sgt::LandManager parent_t;
	typedef sgt::LandManager base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Deformation
template<>
class LunaTraits< sgt::Deformation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Deformation* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Deformation* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::Deformation base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TerrainNode
template<>
class LunaTraits< sgt::TerrainNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TerrainNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TerrainNode* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::TerrainNode base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TerrainQuad
template<>
class LunaTraits< sgt::TerrainQuad > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TerrainQuad* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TerrainQuad* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::TerrainQuad base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TileStorage
template<>
class LunaTraits< sgt::TileStorage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TileStorage* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TileStorage* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::TileStorage base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::GPUTileStorage
template<>
class LunaTraits< sgt::GPUTileStorage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::GPUTileStorage* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::GPUTileStorage* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::GPUTileStorage base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::GPUTileStorage::GPUSlot
template<>
class LunaTraits< sgt::GPUTileStorage::GPUSlot > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::GPUTileStorage::GPUSlot* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::GPUTileStorage::GPUSlot* obj);
	typedef sgt::GPUTileStorage::GPUSlot parent_t;
	typedef sgt::GPUTileStorage::GPUSlot base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TileCache
template<>
class LunaTraits< sgt::TileCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TileCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TileCache* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::TileCache base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TileCache::Tile
template<>
class LunaTraits< sgt::TileCache::Tile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TileCache::Tile* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TileCache::Tile* obj);
	typedef sgt::TileCache::Tile parent_t;
	typedef sgt::TileCache::Tile base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< int, std::pair< int, int > >
template<>
class LunaTraits< std::pair< int, std::pair< int, int > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< int, std::pair< int, int > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< int, std::pair< int, int > >* obj);
	typedef std::pair< int, std::pair< int, int > > parent_t;
	typedef std::pair< int, std::pair< int, int > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< int, sgt::TileCache::Tile::Id >
template<>
class LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< int, sgt::TileCache::Tile::Id >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< int, sgt::TileCache::Tile::Id >* obj);
	typedef std::pair< int, sgt::TileCache::Tile::Id > parent_t;
	typedef std::pair< int, sgt::TileCache::Tile::Id > base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TileLayer
template<>
class LunaTraits< sgt::TileLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TileLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TileLayer* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::TileLayer base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TileProducer
template<>
class LunaTraits< sgt::TileProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TileProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TileProducer* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::TileProducer base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TileStorage::Slot
template<>
class LunaTraits< sgt::TileStorage::Slot > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TileStorage::Slot* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TileStorage::Slot* obj);
	typedef sgt::TileStorage::Slot parent_t;
	typedef sgt::TileStorage::Slot base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2h
template<>
class LunaTraits< sgt::vec2h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2h* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2h* obj);
	typedef sgt::vec2h parent_t;
	typedef sgt::vec2h base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2f
template<>
class LunaTraits< sgt::vec2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2f* obj);
	typedef sgt::vec2f parent_t;
	typedef sgt::vec2f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2d
template<>
class LunaTraits< sgt::vec2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2d* obj);
	typedef sgt::vec2d parent_t;
	typedef sgt::vec2d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2i
template<>
class LunaTraits< sgt::vec2i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2i* obj);
	typedef sgt::vec2i parent_t;
	typedef sgt::vec2i base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3h
template<>
class LunaTraits< sgt::vec3h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3h* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3h* obj);
	typedef sgt::vec3h parent_t;
	typedef sgt::vec3h base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3f
template<>
class LunaTraits< sgt::vec3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3f* obj);
	typedef sgt::vec3f parent_t;
	typedef sgt::vec3f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3d
template<>
class LunaTraits< sgt::vec3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3d* obj);
	typedef sgt::vec3d parent_t;
	typedef sgt::vec3d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3i
template<>
class LunaTraits< sgt::vec3i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3i* obj);
	typedef sgt::vec3i parent_t;
	typedef sgt::vec3i base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec4h
template<>
class LunaTraits< sgt::vec4h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec4h* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec4h* obj);
	typedef sgt::vec4h parent_t;
	typedef sgt::vec4h base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec4f
template<>
class LunaTraits< sgt::vec4f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec4f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec4f* obj);
	typedef sgt::vec4f parent_t;
	typedef sgt::vec4f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec4d
template<>
class LunaTraits< sgt::vec4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec4d* obj);
	typedef sgt::vec4d parent_t;
	typedef sgt::vec4d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec4i
template<>
class LunaTraits< sgt::vec4i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec4i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec4i* obj);
	typedef sgt::vec4i parent_t;
	typedef sgt::vec4i base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box2f
template<>
class LunaTraits< sgt::box2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box2f* obj);
	typedef sgt::box2f parent_t;
	typedef sgt::box2f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box2d
template<>
class LunaTraits< sgt::box2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box2d* obj);
	typedef sgt::box2d parent_t;
	typedef sgt::box2d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box2i
template<>
class LunaTraits< sgt::box2i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box2i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box2i* obj);
	typedef sgt::box2i parent_t;
	typedef sgt::box2i base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box3f
template<>
class LunaTraits< sgt::box3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box3f* obj);
	typedef sgt::box3f parent_t;
	typedef sgt::box3f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box3d
template<>
class LunaTraits< sgt::box3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box3d* obj);
	typedef sgt::box3d parent_t;
	typedef sgt::box3d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box3i
template<>
class LunaTraits< sgt::box3i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box3i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box3i* obj);
	typedef sgt::box3i parent_t;
	typedef sgt::box3i base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat2f
template<>
class LunaTraits< sgt::mat2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat2f* obj);
	typedef sgt::mat2f parent_t;
	typedef sgt::mat2f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat2d
template<>
class LunaTraits< sgt::mat2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat2d* obj);
	typedef sgt::mat2d parent_t;
	typedef sgt::mat2d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat3f
template<>
class LunaTraits< sgt::mat3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat3f* obj);
	typedef sgt::mat3f parent_t;
	typedef sgt::mat3f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat3d
template<>
class LunaTraits< sgt::mat3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat3d* obj);
	typedef sgt::mat3d parent_t;
	typedef sgt::mat3d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat4f
template<>
class LunaTraits< sgt::mat4f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat4f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat4f* obj);
	typedef sgt::mat4f parent_t;
	typedef sgt::mat4f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat4d
template<>
class LunaTraits< sgt::mat4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat4d* obj);
	typedef sgt::mat4d parent_t;
	typedef sgt::mat4d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::quatf
template<>
class LunaTraits< sgt::quatf > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::quatf* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::quatf* obj);
	typedef sgt::quatf parent_t;
	typedef sgt::quatf base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::quatd
template<>
class LunaTraits< sgt::quatd > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::quatd* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::quatd* obj);
	typedef sgt::quatd parent_t;
	typedef sgt::quatd base_t;
	static luna_ConverterType converters[];
};


// Mapped type: sgtPtr< sgt::Task >
template<>
class LunaTraits< sgtPtr< sgt::Task > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgtPtr< sgt::Task >* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgtPtr< sgt::Task >* obj);
	typedef sgtPtr< sgt::Task > parent_t;
	typedef sgtPtr< sgt::Task > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: sgtPtr< sgt::TaskGraph >
template<>
class LunaTraits< sgtPtr< sgt::TaskGraph > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgtPtr< sgt::TaskGraph >* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgtPtr< sgt::TaskGraph >* obj);
	typedef sgtPtr< sgt::TaskGraph > parent_t;
	typedef sgtPtr< sgt::TaskGraph > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: osg::BoundingSphere
template<>
class LunaTraits< osg::BoundingSphere > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BoundingSphere* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BoundingSphere* obj);
	typedef osg::BoundingSphere parent_t;
	typedef osg::BoundingSphere base_t;
	static luna_ConverterType converters[];
};

// Mapped type: sgtPtr< sgt::Deformation >
template<>
class LunaTraits< sgtPtr< sgt::Deformation > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgtPtr< sgt::Deformation >* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgtPtr< sgt::Deformation >* obj);
	typedef sgtPtr< sgt::Deformation > parent_t;
	typedef sgtPtr< sgt::Deformation > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: sgtPtr< sgt::TerrainQuad >
template<>
class LunaTraits< sgtPtr< sgt::TerrainQuad > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgtPtr< sgt::TerrainQuad >* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgtPtr< sgt::TerrainQuad >* obj);
	typedef sgtPtr< sgt::TerrainQuad > parent_t;
	typedef sgtPtr< sgt::TerrainQuad > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: sgtObserver< sgt::TerrainQuad >
template<>
class LunaTraits< sgtObserver< sgt::TerrainQuad > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgtObserver< sgt::TerrainQuad >* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgtObserver< sgt::TerrainQuad >* obj);
	typedef sgtObserver< sgt::TerrainQuad > parent_t;
	typedef sgtObserver< sgt::TerrainQuad > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: sgtPtr< osg::Texture2DArray >
template<>
class LunaTraits< sgtPtr< osg::Texture2DArray > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgtPtr< osg::Texture2DArray >* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgtPtr< osg::Texture2DArray >* obj);
	typedef sgtPtr< osg::Texture2DArray > parent_t;
	typedef sgtPtr< osg::Texture2DArray > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< sgtPtr< sgt::TileProducer > >
template<>
class LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< sgtPtr< sgt::TileProducer > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< sgtPtr< sgt::TileProducer > >* obj);
	typedef std::vector< sgtPtr< sgt::TileProducer > > parent_t;
	typedef std::vector< sgtPtr< sgt::TileProducer > > base_t;
	static luna_ConverterType converters[];
};


// Referenced external: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Referenced
template<>
class LunaTraits< osg::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::NodeVisitor
template<>
class LunaTraits< osg::NodeVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::NodeVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::NodeVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osg::NodeVisitor base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Polytope::PlaneList
template<>
class LunaTraits< osg::Polytope::PlaneList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Polytope::PlaneList* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Polytope::PlaneList* obj);
	typedef osg::Polytope::PlaneList parent_t;
	typedef osg::Polytope::PlaneList base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Vec4d
template<>
class LunaTraits< osg::Vec4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec4d* obj);
	typedef osg::Vec4d parent_t;
	typedef osg::Vec4d base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Texture2D
template<>
class LunaTraits< osg::Texture2D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture2D* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture2D* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture2D base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Geode
template<>
class LunaTraits< osg::Geode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Geode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Geode* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Geode base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Viewport
template<>
class LunaTraits< osg::Viewport > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Viewport* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Viewport* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Viewport base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Texture2DArray
template<>
class LunaTraits< osg::Texture2DArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture2DArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture2DArray* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture2DArray base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Matrixd
template<>
class LunaTraits< osg::Matrixd > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrixd* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrixd* obj);
	typedef osg::Matrixd parent_t;
	typedef osg::Matrixd base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 82342378 > {
public:
	typedef sgt::Buffer::Parameters type;
	
};

template<>
class LunaType< 80600789 > {
public:
	typedef osg::Uniform type;
	
};

template<>
class LunaType< 80168245 > {
public:
	typedef osg::Node type;
	
};

template<>
class LunaType< 58086945 > {
public:
	typedef sgt::box2i type;
	
};

template<>
class LunaType< 58086942 > {
public:
	typedef sgt::box2f type;
	
};

template<>
class LunaType< 58086940 > {
public:
	typedef sgt::box2d type;
	
};

template<>
class LunaType< 58086976 > {
public:
	typedef sgt::box3i type;
	
};

template<>
class LunaType< 58086973 > {
public:
	typedef sgt::box3f type;
	
};

template<>
class LunaType< 58086971 > {
public:
	typedef sgt::box3d type;
	
};

template<>
class LunaType< 67824755 > {
public:
	typedef sgt::mat2f type;
	
};

template<>
class LunaType< 67824753 > {
public:
	typedef sgt::mat2d type;
	
};

template<>
class LunaType< 67824786 > {
public:
	typedef sgt::mat3f type;
	
};

template<>
class LunaType< 67824784 > {
public:
	typedef sgt::mat3d type;
	
};

template<>
class LunaType< 67824817 > {
public:
	typedef sgt::mat4f type;
	
};

template<>
class LunaType< 67824815 > {
public:
	typedef sgt::mat4d type;
	
};

template<>
class LunaType< 72098446 > {
public:
	typedef sgt::quatf type;
	
};

template<>
class LunaType< 72098444 > {
public:
	typedef sgt::quatd type;
	
};

template<>
class LunaType< 76239273 > {
public:
	typedef sgt::vec2h type;
	
};

template<>
class LunaType< 76239271 > {
public:
	typedef sgt::vec2f type;
	
};

template<>
class LunaType< 76239269 > {
public:
	typedef sgt::vec2d type;
	
};

template<>
class LunaType< 76239274 > {
public:
	typedef sgt::vec2i type;
	
};

template<>
class LunaType< 76239304 > {
public:
	typedef sgt::vec3h type;
	
};

template<>
class LunaType< 76239302 > {
public:
	typedef sgt::vec3f type;
	
};

template<>
class LunaType< 76239300 > {
public:
	typedef sgt::vec3d type;
	
};

template<>
class LunaType< 76239305 > {
public:
	typedef sgt::vec3i type;
	
};

template<>
class LunaType< 76239335 > {
public:
	typedef sgt::vec4h type;
	
};

template<>
class LunaType< 76239333 > {
public:
	typedef sgt::vec4f type;
	
};

template<>
class LunaType< 76239331 > {
public:
	typedef sgt::vec4d type;
	
};

template<>
class LunaType< 76239336 > {
public:
	typedef sgt::vec4i type;
	
};

template<>
class LunaType< 92752339 > {
public:
	typedef sgt::TaskSet type;
	
};

template<>
class LunaType< 30363468 > {
public:
	typedef sgt::TaskDependencyMap type;
	
};

template<>
class LunaType< 44367388 > {
public:
	typedef sgt::Object type;
	
};

template<>
class LunaType< 44969924 > {
public:
	typedef sgt::Timer type;
	
};

template<>
class LunaType< 31071002 > {
public:
	typedef sgt::half type;
	
};

template<>
class LunaType< 16284073 > {
public:
	typedef sgt::TaskListener type;
	
};

template<>
class LunaType< 76306638 > {
public:
	typedef sgt::TaskGraph::TaskIterator type;
	
};

template<>
class LunaType< 70466920 > {
public:
	typedef sgt::LandManager type;
	
};

template<>
class LunaType< 34060158 > {
public:
	typedef sgt::GPUTileStorage::GPUSlot type;
	
};

template<>
class LunaType< 38575498 > {
public:
	typedef sgt::TileCache::Tile type;
	
};

template<>
class LunaType< 76763912 > {
public:
	typedef sgt::TileCache::Tile::Id type;
	
};

template<>
class LunaType< 79690531 > {
public:
	typedef sgt::TileCache::Tile::TId type;
	
};

template<>
class LunaType< 84645042 > {
public:
	typedef sgt::TileStorage::Slot type;
	
};

template<>
class LunaType< 24456226 > {
public:
	typedef std::set< sgtPtr< sgt::Task > > type;
	
};

template<>
class LunaType< 61782390 > {
public:
	typedef std::map< sgtPtr< sgt::Task >, sgt::TaskSet > type;
	
};

template<>
class LunaType< 25781455 > {
public:
	typedef sgt::SetIterator< sgtPtr< sgt::Task > > type;
	
};

template<>
class LunaType< 67383368 > {
public:
	typedef std::pair< int, std::pair< int, int > > type;
	
};

template<>
class LunaType< 29265223 > {
public:
	typedef std::pair< int, sgt::TileCache::Tile::Id > type;
	
};

template<>
class LunaType< 6988042 > {
public:
	typedef sgtPtr< sgt::Task > type;
	
};

template<>
class LunaType< 63812206 > {
public:
	typedef sgtPtr< sgt::TaskGraph > type;
	
};

template<>
class LunaType< 4978620 > {
public:
	typedef osg::BoundingSphere type;
	
};

template<>
class LunaType< 6233128 > {
public:
	typedef sgtPtr< sgt::Deformation > type;
	
};

template<>
class LunaType< 59711174 > {
public:
	typedef sgtPtr< sgt::TerrainQuad > type;
	
};

template<>
class LunaType< 39952981 > {
public:
	typedef sgtObserver< sgt::TerrainQuad > type;
	
};

template<>
class LunaType< 92078672 > {
public:
	typedef sgtPtr< osg::Texture2DArray > type;
	
};

template<>
class LunaType< 23986170 > {
public:
	typedef std::vector< sgtPtr< sgt::TileProducer > > type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 49057446 > {
public:
	typedef osg::NodeVisitor type;
	
};

template<>
class LunaType< 33161232 > {
public:
	typedef osg::Polytope::PlaneList type;
	
};

template<>
class LunaType< 92303233 > {
public:
	typedef osg::Vec4d type;
	
};

template<>
class LunaType< 71812813 > {
public:
	typedef osg::Texture2D type;
	
};

template<>
class LunaType< 78463439 > {
public:
	typedef osg::Geode type;
	
};

template<>
class LunaType< 74927543 > {
public:
	typedef osg::Viewport type;
	
};

template<>
class LunaType< 22012271 > {
public:
	typedef osg::Texture2DArray type;
	
};

template<>
class LunaType< 18903838 > {
public:
	typedef osg::Matrixd type;
	
};


#endif

