#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <ork/render/Buffer.h>
#include <ork/math/half.h>
#include <ork/render/CPUBuffer.h>
#include <ork/render/Texture.h>
#include <ork/render/Texture2D.h>
#include <ork/render/Module.h>
#include <ork/render/Program.h>
#include <core/proland/terrain/Deformation.h>
#include <core/proland/terrain/TerrainNode.h>
#include <core/proland/terrain/TileSampler.h>
#include <core/proland/terrain/TileSamplerZ.h>

// Class: ork::Buffer::Parameters
template<>
class LunaTraits< ork::Buffer::Parameters > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Buffer::Parameters* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Buffer::Parameters* obj);
	typedef ork::Buffer::Parameters parent_t;
	typedef ork::Buffer::Parameters base_t;
	static luna_ConverterType converters[];
};

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

// Class: ork::ptr< ork::Texture >
template<>
class LunaTraits< ork::ptr< ork::Texture > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ptr< ork::Texture >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ptr< ork::Texture >* obj);
	typedef ork::ptr< ork::Texture > parent_t;
	typedef ork::ptr< ork::Texture > base_t;
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

// Class: ork::ptr< proland::TileSampler >
template<>
class LunaTraits< ork::ptr< proland::TileSampler > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ptr< proland::TileSampler >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ptr< proland::TileSampler >* obj);
	typedef ork::ptr< proland::TileSampler > parent_t;
	typedef ork::ptr< proland::TileSampler > base_t;
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

// Class: ork::Buffer
template<>
class LunaTraits< ork::Buffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Buffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Buffer* obj);
	typedef ork::Object parent_t;
	typedef ork::Buffer base_t;
	static luna_ConverterType converters[];
};

// Class: ork::CPUBuffer
template<>
class LunaTraits< ork::CPUBuffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::CPUBuffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::CPUBuffer* obj);
	typedef ork::Object parent_t;
	typedef ork::CPUBuffer base_t;
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

// Class: ork::Texture2D
template<>
class LunaTraits< ork::Texture2D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture2D* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture2D* obj);
	typedef ork::Object parent_t;
	typedef ork::Texture2D base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Module
template<>
class LunaTraits< ork::Module > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Module* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Module* obj);
	typedef ork::Object parent_t;
	typedef ork::Module base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Program
template<>
class LunaTraits< ork::Program > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Program* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Program* obj);
	typedef ork::Object parent_t;
	typedef ork::Program base_t;
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

// Class: proland::LandManager
template<>
class LunaTraits< proland::LandManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LandManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LandManager* obj);
	typedef proland::LandManager parent_t;
	typedef proland::LandManager base_t;
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

// Class: proland::TileProducer
template<>
class LunaTraits< proland::TileProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::TileProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ElevationProducer
template<>
class LunaTraits< proland::ElevationProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ElevationProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ElevationProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::ElevationProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::NormalProducer
template<>
class LunaTraits< proland::NormalProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::NormalProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::NormalProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::NormalProducer base_t;
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

// Class: proland::TileSampler
template<>
class LunaTraits< proland::TileSampler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileSampler* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileSampler* obj);
	typedef ork::Object parent_t;
	typedef proland::TileSampler base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileSampler::TileFilter
template<>
class LunaTraits< proland::TileSampler::TileFilter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileSampler::TileFilter* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileSampler::TileFilter* obj);
	typedef proland::TileSampler::TileFilter parent_t;
	typedef proland::TileSampler::TileFilter base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileSamplerZ
template<>
class LunaTraits< proland::TileSamplerZ > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileSamplerZ* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileSamplerZ* obj);
	typedef ork::Object parent_t;
	typedef proland::TileSamplerZ base_t;
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

// Mapped type: std::vector< ptr< ork::Module > >
template<>
class LunaTraits< std::vector< ptr< ork::Module > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< ptr< ork::Module > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< ptr< ork::Module > >* obj);
	typedef std::vector< ptr< ork::Module > > parent_t;
	typedef std::vector< ptr< ork::Module > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::set< ork::Program * >
template<>
class LunaTraits< std::set< ork::Program * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< ork::Program * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< ork::Program * >* obj);
	typedef std::set< ork::Program * > parent_t;
	typedef std::set< ork::Program * > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Value >
template<>
class LunaTraits< ptr< Value > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Value >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Value >* obj);
	typedef ptr< Value > parent_t;
	typedef ptr< Value > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< ork::Module >
template<>
class LunaTraits< ptr< ork::Module > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< ork::Module >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< ork::Module >* obj);
	typedef ptr< ork::Module > parent_t;
	typedef ptr< ork::Module > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< ork::Program >
template<>
class LunaTraits< ptr< ork::Program > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< ork::Program >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< ork::Program >* obj);
	typedef ptr< ork::Program > parent_t;
	typedef ptr< ork::Program > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< ptr< Uniform > >
template<>
class LunaTraits< std::vector< ptr< Uniform > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< ptr< Uniform > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< ptr< Uniform > >* obj);
	typedef std::vector< ptr< Uniform > > parent_t;
	typedef std::vector< ptr< Uniform > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform >
template<>
class LunaTraits< ptr< Uniform > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform >* obj);
	typedef ptr< Uniform > parent_t;
	typedef ptr< Uniform > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform1f >
template<>
class LunaTraits< ptr< Uniform1f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform1f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform1f >* obj);
	typedef ptr< Uniform1f > parent_t;
	typedef ptr< Uniform1f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform1d >
template<>
class LunaTraits< ptr< Uniform1d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform1d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform1d >* obj);
	typedef ptr< Uniform1d > parent_t;
	typedef ptr< Uniform1d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform1i >
template<>
class LunaTraits< ptr< Uniform1i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform1i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform1i >* obj);
	typedef ptr< Uniform1i > parent_t;
	typedef ptr< Uniform1i > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform1ui >
template<>
class LunaTraits< ptr< Uniform1ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform1ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform1ui >* obj);
	typedef ptr< Uniform1ui > parent_t;
	typedef ptr< Uniform1ui > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform1b >
template<>
class LunaTraits< ptr< Uniform1b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform1b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform1b >* obj);
	typedef ptr< Uniform1b > parent_t;
	typedef ptr< Uniform1b > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform2f >
template<>
class LunaTraits< ptr< Uniform2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform2f >* obj);
	typedef ptr< Uniform2f > parent_t;
	typedef ptr< Uniform2f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform2d >
template<>
class LunaTraits< ptr< Uniform2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform2d >* obj);
	typedef ptr< Uniform2d > parent_t;
	typedef ptr< Uniform2d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform2i >
template<>
class LunaTraits< ptr< Uniform2i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform2i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform2i >* obj);
	typedef ptr< Uniform2i > parent_t;
	typedef ptr< Uniform2i > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform2ui >
template<>
class LunaTraits< ptr< Uniform2ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform2ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform2ui >* obj);
	typedef ptr< Uniform2ui > parent_t;
	typedef ptr< Uniform2ui > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform2b >
template<>
class LunaTraits< ptr< Uniform2b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform2b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform2b >* obj);
	typedef ptr< Uniform2b > parent_t;
	typedef ptr< Uniform2b > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform3f >
template<>
class LunaTraits< ptr< Uniform3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform3f >* obj);
	typedef ptr< Uniform3f > parent_t;
	typedef ptr< Uniform3f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform3d >
template<>
class LunaTraits< ptr< Uniform3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform3d >* obj);
	typedef ptr< Uniform3d > parent_t;
	typedef ptr< Uniform3d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform3i >
template<>
class LunaTraits< ptr< Uniform3i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform3i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform3i >* obj);
	typedef ptr< Uniform3i > parent_t;
	typedef ptr< Uniform3i > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform3ui >
template<>
class LunaTraits< ptr< Uniform3ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform3ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform3ui >* obj);
	typedef ptr< Uniform3ui > parent_t;
	typedef ptr< Uniform3ui > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform3b >
template<>
class LunaTraits< ptr< Uniform3b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform3b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform3b >* obj);
	typedef ptr< Uniform3b > parent_t;
	typedef ptr< Uniform3b > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform4f >
template<>
class LunaTraits< ptr< Uniform4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform4f >* obj);
	typedef ptr< Uniform4f > parent_t;
	typedef ptr< Uniform4f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform4d >
template<>
class LunaTraits< ptr< Uniform4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform4d >* obj);
	typedef ptr< Uniform4d > parent_t;
	typedef ptr< Uniform4d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform4i >
template<>
class LunaTraits< ptr< Uniform4i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform4i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform4i >* obj);
	typedef ptr< Uniform4i > parent_t;
	typedef ptr< Uniform4i > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform4ui >
template<>
class LunaTraits< ptr< Uniform4ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform4ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform4ui >* obj);
	typedef ptr< Uniform4ui > parent_t;
	typedef ptr< Uniform4ui > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Uniform4b >
template<>
class LunaTraits< ptr< Uniform4b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Uniform4b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Uniform4b >* obj);
	typedef ptr< Uniform4b > parent_t;
	typedef ptr< Uniform4b > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix2f >
template<>
class LunaTraits< ptr< UniformMatrix2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix2f >* obj);
	typedef ptr< UniformMatrix2f > parent_t;
	typedef ptr< UniformMatrix2f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix2d >
template<>
class LunaTraits< ptr< UniformMatrix2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix2d >* obj);
	typedef ptr< UniformMatrix2d > parent_t;
	typedef ptr< UniformMatrix2d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix3f >
template<>
class LunaTraits< ptr< UniformMatrix3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix3f >* obj);
	typedef ptr< UniformMatrix3f > parent_t;
	typedef ptr< UniformMatrix3f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix3d >
template<>
class LunaTraits< ptr< UniformMatrix3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix3d >* obj);
	typedef ptr< UniformMatrix3d > parent_t;
	typedef ptr< UniformMatrix3d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix4f >
template<>
class LunaTraits< ptr< UniformMatrix4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix4f >* obj);
	typedef ptr< UniformMatrix4f > parent_t;
	typedef ptr< UniformMatrix4f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix4d >
template<>
class LunaTraits< ptr< UniformMatrix4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix4d >* obj);
	typedef ptr< UniformMatrix4d > parent_t;
	typedef ptr< UniformMatrix4d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix2x3f >
template<>
class LunaTraits< ptr< UniformMatrix2x3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix2x3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix2x3f >* obj);
	typedef ptr< UniformMatrix2x3f > parent_t;
	typedef ptr< UniformMatrix2x3f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix2x3d >
template<>
class LunaTraits< ptr< UniformMatrix2x3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix2x3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix2x3d >* obj);
	typedef ptr< UniformMatrix2x3d > parent_t;
	typedef ptr< UniformMatrix2x3d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix2x4f >
template<>
class LunaTraits< ptr< UniformMatrix2x4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix2x4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix2x4f >* obj);
	typedef ptr< UniformMatrix2x4f > parent_t;
	typedef ptr< UniformMatrix2x4f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix2x4d >
template<>
class LunaTraits< ptr< UniformMatrix2x4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix2x4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix2x4d >* obj);
	typedef ptr< UniformMatrix2x4d > parent_t;
	typedef ptr< UniformMatrix2x4d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix3x2f >
template<>
class LunaTraits< ptr< UniformMatrix3x2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix3x2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix3x2f >* obj);
	typedef ptr< UniformMatrix3x2f > parent_t;
	typedef ptr< UniformMatrix3x2f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix3x2d >
template<>
class LunaTraits< ptr< UniformMatrix3x2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix3x2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix3x2d >* obj);
	typedef ptr< UniformMatrix3x2d > parent_t;
	typedef ptr< UniformMatrix3x2d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix3x4f >
template<>
class LunaTraits< ptr< UniformMatrix3x4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix3x4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix3x4f >* obj);
	typedef ptr< UniformMatrix3x4f > parent_t;
	typedef ptr< UniformMatrix3x4f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix3x4d >
template<>
class LunaTraits< ptr< UniformMatrix3x4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix3x4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix3x4d >* obj);
	typedef ptr< UniformMatrix3x4d > parent_t;
	typedef ptr< UniformMatrix3x4d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix4x2f >
template<>
class LunaTraits< ptr< UniformMatrix4x2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix4x2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix4x2f >* obj);
	typedef ptr< UniformMatrix4x2f > parent_t;
	typedef ptr< UniformMatrix4x2f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix4x2d >
template<>
class LunaTraits< ptr< UniformMatrix4x2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix4x2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix4x2d >* obj);
	typedef ptr< UniformMatrix4x2d > parent_t;
	typedef ptr< UniformMatrix4x2d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix4x3f >
template<>
class LunaTraits< ptr< UniformMatrix4x3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix4x3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix4x3f >* obj);
	typedef ptr< UniformMatrix4x3f > parent_t;
	typedef ptr< UniformMatrix4x3f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformMatrix4x3d >
template<>
class LunaTraits< ptr< UniformMatrix4x3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformMatrix4x3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformMatrix4x3d >* obj);
	typedef ptr< UniformMatrix4x3d > parent_t;
	typedef ptr< UniformMatrix4x3d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformSampler >
template<>
class LunaTraits< ptr< UniformSampler > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformSampler >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformSampler >* obj);
	typedef ptr< UniformSampler > parent_t;
	typedef ptr< UniformSampler > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformSubroutine >
template<>
class LunaTraits< ptr< UniformSubroutine > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformSubroutine >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformSubroutine >* obj);
	typedef ptr< UniformSubroutine > parent_t;
	typedef ptr< UniformSubroutine > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< UniformBlock >
template<>
class LunaTraits< ptr< UniformBlock > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< UniformBlock >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< UniformBlock >* obj);
	typedef ptr< UniformBlock > parent_t;
	typedef ptr< UniformBlock > base_t;
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

// Mapped type: ptr< proland::TileProducer >
template<>
class LunaTraits< ptr< proland::TileProducer > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< proland::TileProducer >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< proland::TileProducer >* obj);
	typedef ptr< proland::TileProducer > parent_t;
	typedef ptr< proland::TileProducer > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< proland::TerrainNode >
template<>
class LunaTraits< ptr< proland::TerrainNode > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< proland::TerrainNode >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< proland::TerrainNode >* obj);
	typedef ptr< proland::TerrainNode > parent_t;
	typedef ptr< proland::TerrainNode > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< ork::SceneManager >
template<>
class LunaTraits< ptr< ork::SceneManager > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< ork::SceneManager >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< ork::SceneManager >* obj);
	typedef ptr< ork::SceneManager > parent_t;
	typedef ptr< ork::SceneManager > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< TerrainQuad >
template<>
class LunaTraits< ptr< TerrainQuad > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< TerrainQuad >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< TerrainQuad >* obj);
	typedef ptr< TerrainQuad > parent_t;
	typedef ptr< TerrainQuad > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ptr< Task >
template<>
class LunaTraits< ptr< Task > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ptr< Task >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ptr< Task >* obj);
	typedef ptr< Task > parent_t;
	typedef ptr< Task > base_t;
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
class LunaType< 85004853 > {
public:
	typedef ork::Buffer::Parameters type;
	
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
class LunaType< 7995598 > {
public:
	typedef ork::ptr< ork::Texture > type;
	
};

template<>
class LunaType< 12192224 > {
public:
	typedef ork::ptr< proland::TileSampler > type;
	
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
class LunaType< 22298504 > {
public:
	typedef proland::LandManager type;
	
};

template<>
class LunaType< 44367388 > {
public:
	typedef sgt::Object type;
	
};

template<>
class LunaType< 89838339 > {
public:
	typedef proland::TileSampler::TileFilter type;
	
};

template<>
class LunaType< 46184206 > {
public:
	typedef ptr< Sampler > type;
	
};

template<>
class LunaType< 16940072 > {
public:
	typedef std::vector< ptr< ork::Module > > type;
	
};

template<>
class LunaType< 31285358 > {
public:
	typedef std::set< ork::Program * > type;
	
};

template<>
class LunaType< 3814840 > {
public:
	typedef ptr< Value > type;
	
};

template<>
class LunaType< 98748177 > {
public:
	typedef ptr< ork::Module > type;
	
};

template<>
class LunaType< 38954662 > {
public:
	typedef ptr< ork::Program > type;
	
};

template<>
class LunaType< 79520723 > {
public:
	typedef std::vector< ptr< Uniform > > type;
	
};

template<>
class LunaType< 58841759 > {
public:
	typedef ptr< Uniform > type;
	
};

template<>
class LunaType< 47467858 > {
public:
	typedef ptr< Uniform1f > type;
	
};

template<>
class LunaType< 47465936 > {
public:
	typedef ptr< Uniform1d > type;
	
};

template<>
class LunaType< 47470741 > {
public:
	typedef ptr< Uniform1i > type;
	
};

template<>
class LunaType< 72019510 > {
public:
	typedef ptr< Uniform1ui > type;
	
};

template<>
class LunaType< 47464014 > {
public:
	typedef ptr< Uniform1b > type;
	
};

template<>
class LunaType< 47497649 > {
public:
	typedef ptr< Uniform2f > type;
	
};

template<>
class LunaType< 47495727 > {
public:
	typedef ptr< Uniform2d > type;
	
};

template<>
class LunaType< 47500532 > {
public:
	typedef ptr< Uniform2i > type;
	
};

template<>
class LunaType< 72943031 > {
public:
	typedef ptr< Uniform2ui > type;
	
};

template<>
class LunaType< 47493805 > {
public:
	typedef ptr< Uniform2b > type;
	
};

template<>
class LunaType< 47527440 > {
public:
	typedef ptr< Uniform3f > type;
	
};

template<>
class LunaType< 47525518 > {
public:
	typedef ptr< Uniform3d > type;
	
};

template<>
class LunaType< 47530323 > {
public:
	typedef ptr< Uniform3i > type;
	
};

template<>
class LunaType< 73866552 > {
public:
	typedef ptr< Uniform3ui > type;
	
};

template<>
class LunaType< 47523596 > {
public:
	typedef ptr< Uniform3b > type;
	
};

template<>
class LunaType< 47557231 > {
public:
	typedef ptr< Uniform4f > type;
	
};

template<>
class LunaType< 47555309 > {
public:
	typedef ptr< Uniform4d > type;
	
};

template<>
class LunaType< 47560114 > {
public:
	typedef ptr< Uniform4i > type;
	
};

template<>
class LunaType< 74790073 > {
public:
	typedef ptr< Uniform4ui > type;
	
};

template<>
class LunaType< 47553387 > {
public:
	typedef ptr< Uniform4b > type;
	
};

template<>
class LunaType< 82470569 > {
public:
	typedef ptr< UniformMatrix2f > type;
	
};

template<>
class LunaType< 82468647 > {
public:
	typedef ptr< UniformMatrix2d > type;
	
};

template<>
class LunaType< 82500360 > {
public:
	typedef ptr< UniformMatrix3f > type;
	
};

template<>
class LunaType< 82498438 > {
public:
	typedef ptr< UniformMatrix3d > type;
	
};

template<>
class LunaType< 82530151 > {
public:
	typedef ptr< UniformMatrix4f > type;
	
};

template<>
class LunaType< 82528229 > {
public:
	typedef ptr< UniformMatrix4d > type;
	
};

template<>
class LunaType< 71427477 > {
public:
	typedef ptr< UniformMatrix2x3f > type;
	
};

template<>
class LunaType< 71425555 > {
public:
	typedef ptr< UniformMatrix2x3d > type;
	
};

template<>
class LunaType< 71457268 > {
public:
	typedef ptr< UniformMatrix2x4f > type;
	
};

template<>
class LunaType< 71455346 > {
public:
	typedef ptr< UniformMatrix2x4d > type;
	
};

template<>
class LunaType< 26813 > {
public:
	typedef ptr< UniformMatrix3x2f > type;
	
};

template<>
class LunaType< 24891 > {
public:
	typedef ptr< UniformMatrix3x2d > type;
	
};

template<>
class LunaType< 86395 > {
public:
	typedef ptr< UniformMatrix3x4f > type;
	
};

template<>
class LunaType< 84473 > {
public:
	typedef ptr< UniformMatrix3x4d > type;
	
};

template<>
class LunaType< 28655964 > {
public:
	typedef ptr< UniformMatrix4x2f > type;
	
};

template<>
class LunaType< 28654042 > {
public:
	typedef ptr< UniformMatrix4x2d > type;
	
};

template<>
class LunaType< 28685755 > {
public:
	typedef ptr< UniformMatrix4x3f > type;
	
};

template<>
class LunaType< 28683833 > {
public:
	typedef ptr< UniformMatrix4x3d > type;
	
};

template<>
class LunaType< 42637183 > {
public:
	typedef ptr< UniformSampler > type;
	
};

template<>
class LunaType< 55652485 > {
public:
	typedef ptr< UniformSubroutine > type;
	
};

template<>
class LunaType< 48215627 > {
public:
	typedef ptr< UniformBlock > type;
	
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
class LunaType< 45761065 > {
public:
	typedef ptr< proland::TileProducer > type;
	
};

template<>
class LunaType< 9465964 > {
public:
	typedef ptr< proland::TerrainNode > type;
	
};

template<>
class LunaType< 47272914 > {
public:
	typedef ptr< ork::SceneManager > type;
	
};

template<>
class LunaType< 12456143 > {
public:
	typedef ptr< TerrainQuad > type;
	
};

template<>
class LunaType< 30158358 > {
public:
	typedef ptr< Task > type;
	
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

