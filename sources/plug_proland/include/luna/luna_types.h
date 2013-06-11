#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <ork/math/half.h>
#include <ork/render/Texture.h>
#include <core/proland/terrain/Deformation.h>
#include <core/proland/terrain/TerrainNode.h>

// Class: ork::Object
template<>
class LunaTraits< ork::Object > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Object* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Object* obj);
	typedef ork::Object parent_t;
	typedef ork::Object base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec2h
template<>
class LunaTraits< ork::vec2h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec2h* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec2h* obj);
	typedef ork::vec2h parent_t;
	typedef ork::vec2h base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec2f
template<>
class LunaTraits< ork::vec2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec2f* obj);
	typedef ork::vec2f parent_t;
	typedef ork::vec2f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec2d
template<>
class LunaTraits< ork::vec2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec2d* obj);
	typedef ork::vec2d parent_t;
	typedef ork::vec2d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec2i
template<>
class LunaTraits< ork::vec2i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec2i* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec2i* obj);
	typedef ork::vec2i parent_t;
	typedef ork::vec2i base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec3h
template<>
class LunaTraits< ork::vec3h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec3h* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec3h* obj);
	typedef ork::vec3h parent_t;
	typedef ork::vec3h base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec3f
template<>
class LunaTraits< ork::vec3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec3f* obj);
	typedef ork::vec3f parent_t;
	typedef ork::vec3f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec3d
template<>
class LunaTraits< ork::vec3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec3d* obj);
	typedef ork::vec3d parent_t;
	typedef ork::vec3d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec3i
template<>
class LunaTraits< ork::vec3i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec3i* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec3i* obj);
	typedef ork::vec3i parent_t;
	typedef ork::vec3i base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec4h
template<>
class LunaTraits< ork::vec4h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec4h* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec4h* obj);
	typedef ork::vec4h parent_t;
	typedef ork::vec4h base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec4f
template<>
class LunaTraits< ork::vec4f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec4f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec4f* obj);
	typedef ork::vec4f parent_t;
	typedef ork::vec4f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec4d
template<>
class LunaTraits< ork::vec4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec4d* obj);
	typedef ork::vec4d parent_t;
	typedef ork::vec4d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec4i
template<>
class LunaTraits< ork::vec4i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec4i* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec4i* obj);
	typedef ork::vec4i parent_t;
	typedef ork::vec4i base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box2f
template<>
class LunaTraits< ork::box2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box2f* obj);
	typedef ork::box2f parent_t;
	typedef ork::box2f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box2d
template<>
class LunaTraits< ork::box2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box2d* obj);
	typedef ork::box2d parent_t;
	typedef ork::box2d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box2i
template<>
class LunaTraits< ork::box2i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box2i* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box2i* obj);
	typedef ork::box2i parent_t;
	typedef ork::box2i base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box3f
template<>
class LunaTraits< ork::box3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box3f* obj);
	typedef ork::box3f parent_t;
	typedef ork::box3f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box3d
template<>
class LunaTraits< ork::box3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box3d* obj);
	typedef ork::box3d parent_t;
	typedef ork::box3d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box3i
template<>
class LunaTraits< ork::box3i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box3i* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box3i* obj);
	typedef ork::box3i parent_t;
	typedef ork::box3i base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat2f
template<>
class LunaTraits< ork::mat2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat2f* obj);
	typedef ork::mat2f parent_t;
	typedef ork::mat2f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat2d
template<>
class LunaTraits< ork::mat2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat2d* obj);
	typedef ork::mat2d parent_t;
	typedef ork::mat2d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat3f
template<>
class LunaTraits< ork::mat3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat3f* obj);
	typedef ork::mat3f parent_t;
	typedef ork::mat3f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat3d
template<>
class LunaTraits< ork::mat3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat3d* obj);
	typedef ork::mat3d parent_t;
	typedef ork::mat3d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat4f
template<>
class LunaTraits< ork::mat4f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat4f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat4f* obj);
	typedef ork::mat4f parent_t;
	typedef ork::mat4f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat4d
template<>
class LunaTraits< ork::mat4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat4d* obj);
	typedef ork::mat4d parent_t;
	typedef ork::mat4d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::quatf
template<>
class LunaTraits< ork::quatf > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::quatf* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::quatf* obj);
	typedef ork::quatf parent_t;
	typedef ork::quatf base_t;
	static luna_ConverterType converters[];
};

// Class: ork::quatd
template<>
class LunaTraits< ork::quatd > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::quatd* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::quatd* obj);
	typedef ork::quatd parent_t;
	typedef ork::quatd base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SceneManager
template<>
class LunaTraits< ork::SceneManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SceneManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SceneManager* obj);
	typedef ork::SceneManager parent_t;
	typedef ork::SceneManager base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Scheduler
template<>
class LunaTraits< ork::Scheduler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Scheduler* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Scheduler* obj);
	typedef ork::Object parent_t;
	typedef ork::Scheduler base_t;
	static luna_ConverterType converters[];
};

// Class: ork::MultithreadScheduler
template<>
class LunaTraits< ork::MultithreadScheduler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::MultithreadScheduler* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::MultithreadScheduler* obj);
	typedef ork::Object parent_t;
	typedef ork::MultithreadScheduler base_t;
	static luna_ConverterType converters[];
};

// Class: ork::half
template<>
class LunaTraits< ork::half > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::half* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::half* obj);
	typedef ork::half parent_t;
	typedef ork::half base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Texture
template<>
class LunaTraits< ork::Texture > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture* obj);
	typedef ork::Object parent_t;
	typedef ork::Texture base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Texture::Parameters
template<>
class LunaTraits< ork::Texture::Parameters > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture::Parameters* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture::Parameters* obj);
	typedef ork::Texture::Parameters parent_t;
	typedef ork::Texture::Parameters base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrixd
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

// Class: osg::Matrix3
template<>
class LunaTraits< osg::Matrix3 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix3* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix3* obj);
	typedef osg::Matrix3 parent_t;
	typedef osg::Matrix3 base_t;
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

// Class: proland::TileStorage
template<>
class LunaTraits< proland::TileStorage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileStorage* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileStorage* obj);
	typedef ork::Object parent_t;
	typedef proland::TileStorage base_t;
	static luna_ConverterType converters[];
};

// Class: proland::GPUTileStorage
template<>
class LunaTraits< proland::GPUTileStorage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::GPUTileStorage* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::GPUTileStorage* obj);
	typedef ork::Object parent_t;
	typedef proland::GPUTileStorage base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileCache
template<>
class LunaTraits< proland::TileCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileCache* obj);
	typedef ork::Object parent_t;
	typedef proland::TileCache base_t;
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

// Class: proland::Deformation
template<>
class LunaTraits< proland::Deformation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Deformation* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Deformation* obj);
	typedef osg::Referenced parent_t;
	typedef proland::Deformation base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TerrainNode
template<>
class LunaTraits< proland::TerrainNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TerrainNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TerrainNode* obj);
	typedef osg::Referenced parent_t;
	typedef proland::TerrainNode base_t;
	static luna_ConverterType converters[];
};


// Mapped type: ptr< Sampler >
template<>
class LunaTraits< ptr< Sampler > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Sampler >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Sampler >* obj);
	typedef ptr< Sampler > parent_t;
	typedef ptr< Sampler > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: SceneManager::visibility
template<>
class LunaTraits< SceneManager::visibility > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SceneManager::visibility* _bind_ctor(lua_State *L);
	static void _bind_dtor(SceneManager::visibility* obj);
	typedef SceneManager::visibility parent_t;
	typedef SceneManager::visibility base_t;
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

// Mapped type: sgtPtr< proland::Deformation >
template<>
class LunaTraits< sgtPtr< proland::Deformation > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgtPtr< proland::Deformation >* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgtPtr< proland::Deformation >* obj);
	typedef sgtPtr< proland::Deformation > parent_t;
	typedef sgtPtr< proland::Deformation > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: sgtPtr< proland::TerrainQuad >
template<>
class LunaTraits< sgtPtr< proland::TerrainQuad > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgtPtr< proland::TerrainQuad >* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgtPtr< proland::TerrainQuad >* obj);
	typedef sgtPtr< proland::TerrainQuad > parent_t;
	typedef sgtPtr< proland::TerrainQuad > base_t;
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

// Referenced external: std::vector< unsigned int >
template<>
class LunaTraits< std::vector< unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< unsigned int >* obj);
	typedef std::vector< unsigned int > parent_t;
	typedef std::vector< unsigned int > base_t;
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

template<>
class LunaType< 1381405 > {
public:
	typedef ork::Object type;
	
};

template<>
class LunaType< 81304242 > {
public:
	typedef ork::vec2h type;
	
};

template<>
class LunaType< 81304240 > {
public:
	typedef ork::vec2f type;
	
};

template<>
class LunaType< 81304238 > {
public:
	typedef ork::vec2d type;
	
};

template<>
class LunaType< 81304243 > {
public:
	typedef ork::vec2i type;
	
};

template<>
class LunaType< 81304273 > {
public:
	typedef ork::vec3h type;
	
};

template<>
class LunaType< 81304271 > {
public:
	typedef ork::vec3f type;
	
};

template<>
class LunaType< 81304269 > {
public:
	typedef ork::vec3d type;
	
};

template<>
class LunaType< 81304274 > {
public:
	typedef ork::vec3i type;
	
};

template<>
class LunaType< 81304304 > {
public:
	typedef ork::vec4h type;
	
};

template<>
class LunaType< 81304302 > {
public:
	typedef ork::vec4f type;
	
};

template<>
class LunaType< 81304300 > {
public:
	typedef ork::vec4d type;
	
};

template<>
class LunaType< 81304305 > {
public:
	typedef ork::vec4i type;
	
};

template<>
class LunaType< 63151911 > {
public:
	typedef ork::box2f type;
	
};

template<>
class LunaType< 63151909 > {
public:
	typedef ork::box2d type;
	
};

template<>
class LunaType< 63151914 > {
public:
	typedef ork::box2i type;
	
};

template<>
class LunaType< 63151942 > {
public:
	typedef ork::box3f type;
	
};

template<>
class LunaType< 63151940 > {
public:
	typedef ork::box3d type;
	
};

template<>
class LunaType< 63151945 > {
public:
	typedef ork::box3i type;
	
};

template<>
class LunaType< 72889724 > {
public:
	typedef ork::mat2f type;
	
};

template<>
class LunaType< 72889722 > {
public:
	typedef ork::mat2d type;
	
};

template<>
class LunaType< 72889755 > {
public:
	typedef ork::mat3f type;
	
};

template<>
class LunaType< 72889753 > {
public:
	typedef ork::mat3d type;
	
};

template<>
class LunaType< 72889786 > {
public:
	typedef ork::mat4f type;
	
};

template<>
class LunaType< 72889784 > {
public:
	typedef ork::mat4d type;
	
};

template<>
class LunaType< 77163415 > {
public:
	typedef ork::quatf type;
	
};

template<>
class LunaType< 77163413 > {
public:
	typedef ork::quatd type;
	
};

template<>
class LunaType< 53477594 > {
public:
	typedef ork::SceneManager type;
	
};

template<>
class LunaType< 18331161 > {
public:
	typedef ork::half type;
	
};

template<>
class LunaType< 11747408 > {
public:
	typedef ork::Texture::Parameters type;
	
};

template<>
class LunaType< 18903838 > {
public:
	typedef osg::Matrixd type;
	
};

template<>
class LunaType< 18903789 > {
public:
	typedef osg::Matrix3 type;
	
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
class LunaType< 44367388 > {
public:
	typedef sgt::Object type;
	
};

template<>
class LunaType< 46184206 > {
public:
	typedef ptr< Sampler > type;
	
};

template<>
class LunaType< 39027497 > {
public:
	typedef SceneManager::visibility type;
	
};

template<>
class LunaType< 4978620 > {
public:
	typedef osg::BoundingSphere type;
	
};

template<>
class LunaType< 38901418 > {
public:
	typedef sgtPtr< proland::Deformation > type;
	
};

template<>
class LunaType< 41173863 > {
public:
	typedef sgtPtr< proland::TerrainQuad > type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 27834872 > {
public:
	typedef std::vector< unsigned int > type;
	
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
class LunaType< 33161232 > {
public:
	typedef osg::Polytope::PlaneList type;
	
};


#endif

