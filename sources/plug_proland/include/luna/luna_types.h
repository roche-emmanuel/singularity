#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <ork/render/Buffer.h>
#include <ork/render/Uniform.h>
#include <ork/math/half.h>
#include <ork/render/CPUBuffer.h>
#include <ork/render/GPUBuffer.h>
#include <ork/render/Sampler.h>
#include <ork/render/Texture.h>
#include <ork/render/Texture2D.h>
#include <ork/render/Module.h>
#include <ork/render/Program.h>
#include <ork/taskgraph/Task.h>
#include <core/proland/terrain/Deformation.h>
#include <core/proland/terrain/TerrainNode.h>
#include <core/proland/terrain/TileSampler.h>
#include <core/proland/terrain/TileSamplerZ.h>
#include <core/proland/terrain/TerrainQuad.h>

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

// Class: ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, value1f >
template<>
class LunaTraits< ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, value1f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, value1f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, value1f >* obj);
	typedef ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, value1f > parent_t;
	typedef ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, value1f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, value1d >
template<>
class LunaTraits< ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, value1d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, value1d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, value1d >* obj);
	typedef ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, value1d > parent_t;
	typedef ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, value1d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, value1i >
template<>
class LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, value1i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, value1i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, value1i >* obj);
	typedef ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, value1i > parent_t;
	typedef ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, value1i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, value1ui >
template<>
class LunaTraits< ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, value1ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, value1ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, value1ui >* obj);
	typedef ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, value1ui > parent_t;
	typedef ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, value1ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, value1b >
template<>
class LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, value1b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, value1b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, value1b >* obj);
	typedef ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, value1b > parent_t;
	typedef ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, value1b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, value2f >
template<>
class LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, value2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, value2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, value2f >* obj);
	typedef ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, value2f > parent_t;
	typedef ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, value2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, value2d >
template<>
class LunaTraits< ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, value2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, value2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, value2d >* obj);
	typedef ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, value2d > parent_t;
	typedef ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, value2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, value2i >
template<>
class LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, value2i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, value2i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, value2i >* obj);
	typedef ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, value2i > parent_t;
	typedef ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, value2i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, value2ui >
template<>
class LunaTraits< ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, value2ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, value2ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, value2ui >* obj);
	typedef ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, value2ui > parent_t;
	typedef ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, value2ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, value2b >
template<>
class LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, value2b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, value2b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, value2b >* obj);
	typedef ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, value2b > parent_t;
	typedef ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, value2b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, value3f >
template<>
class LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, value3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, value3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, value3f >* obj);
	typedef ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, value3f > parent_t;
	typedef ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, value3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, value3d >
template<>
class LunaTraits< ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, value3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, value3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, value3d >* obj);
	typedef ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, value3d > parent_t;
	typedef ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, value3d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, value3i >
template<>
class LunaTraits< ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, value3i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, value3i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, value3i >* obj);
	typedef ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, value3i > parent_t;
	typedef ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, value3i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, value3ui >
template<>
class LunaTraits< ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, value3ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, value3ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, value3ui >* obj);
	typedef ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, value3ui > parent_t;
	typedef ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, value3ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, value3b >
template<>
class LunaTraits< ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, value3b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, value3b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, value3b >* obj);
	typedef ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, value3b > parent_t;
	typedef ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, value3b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, value4f >
template<>
class LunaTraits< ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, value4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, value4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, value4f >* obj);
	typedef ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, value4f > parent_t;
	typedef ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, value4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, value4d >
template<>
class LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, value4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, value4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, value4d >* obj);
	typedef ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, value4d > parent_t;
	typedef ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, value4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, value4i >
template<>
class LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, value4i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, value4i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, value4i >* obj);
	typedef ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, value4i > parent_t;
	typedef ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, value4i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, value4ui >
template<>
class LunaTraits< ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, value4ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, value4ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, value4ui >* obj);
	typedef ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, value4ui > parent_t;
	typedef ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, value4ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, value4b >
template<>
class LunaTraits< ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, value4b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, value4b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, value4b >* obj);
	typedef ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, value4b > parent_t;
	typedef ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, value4b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, valueMatrix2f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, valueMatrix2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, valueMatrix2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, valueMatrix2f >* obj);
	typedef ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, valueMatrix2f > parent_t;
	typedef ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, valueMatrix2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, valueMatrix3f >
template<>
class LunaTraits< ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, valueMatrix3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, valueMatrix3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, valueMatrix3f >* obj);
	typedef ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, valueMatrix3f > parent_t;
	typedef ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, valueMatrix3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, valueMatrix4f >
template<>
class LunaTraits< ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, valueMatrix4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, valueMatrix4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, valueMatrix4f >* obj);
	typedef ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, valueMatrix4f > parent_t;
	typedef ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, valueMatrix4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, valueMatrix2x3f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, valueMatrix2x3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, valueMatrix2x3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, valueMatrix2x3f >* obj);
	typedef ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, valueMatrix2x3f > parent_t;
	typedef ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, valueMatrix2x3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, valueMatrix2x4f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, valueMatrix2x4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, valueMatrix2x4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, valueMatrix2x4f >* obj);
	typedef ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, valueMatrix2x4f > parent_t;
	typedef ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, valueMatrix2x4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, valueMatrix3x2f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, valueMatrix3x2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, valueMatrix3x2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, valueMatrix3x2f >* obj);
	typedef ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, valueMatrix3x2f > parent_t;
	typedef ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, valueMatrix3x2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, valueMatrix3x4f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, valueMatrix3x4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, valueMatrix3x4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, valueMatrix3x4f >* obj);
	typedef ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, valueMatrix3x4f > parent_t;
	typedef ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, valueMatrix3x4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, valueMatrix4x2f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, valueMatrix4x2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, valueMatrix4x2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, valueMatrix4x2f >* obj);
	typedef ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, valueMatrix4x2f > parent_t;
	typedef ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, valueMatrix4x2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, valueMatrix4x3f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, valueMatrix4x3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, valueMatrix4x3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, valueMatrix4x3f >* obj);
	typedef ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, valueMatrix4x3f > parent_t;
	typedef ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, valueMatrix4x3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >* obj);
	typedef ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > parent_t;
	typedef ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, valueMatrix3d >
template<>
class LunaTraits< ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, valueMatrix3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, valueMatrix3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, valueMatrix3d >* obj);
	typedef ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, valueMatrix3d > parent_t;
	typedef ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, valueMatrix3d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, valueMatrix4d >
template<>
class LunaTraits< ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, valueMatrix4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, valueMatrix4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, valueMatrix4d >* obj);
	typedef ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, valueMatrix4d > parent_t;
	typedef ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, valueMatrix4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, valueMatrix2x3d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, valueMatrix2x3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, valueMatrix2x3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, valueMatrix2x3d >* obj);
	typedef ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, valueMatrix2x3d > parent_t;
	typedef ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, valueMatrix2x3d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, valueMatrix2x4d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, valueMatrix2x4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, valueMatrix2x4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, valueMatrix2x4d >* obj);
	typedef ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, valueMatrix2x4d > parent_t;
	typedef ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, valueMatrix2x4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, valueMatrix3x2d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, valueMatrix3x2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, valueMatrix3x2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, valueMatrix3x2d >* obj);
	typedef ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, valueMatrix3x2d > parent_t;
	typedef ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, valueMatrix3x2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, valueMatrix3x4d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, valueMatrix3x4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, valueMatrix3x4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, valueMatrix3x4d >* obj);
	typedef ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, valueMatrix3x4d > parent_t;
	typedef ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, valueMatrix3x4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, valueMatrix4x2d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, valueMatrix4x2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, valueMatrix4x2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, valueMatrix4x2d >* obj);
	typedef ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, valueMatrix4x2d > parent_t;
	typedef ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, valueMatrix4x2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, valueMatrix4x3d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, valueMatrix4x3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, valueMatrix4x3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, valueMatrix4x3d >* obj);
	typedef ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, valueMatrix4x3d > parent_t;
	typedef ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, valueMatrix4x3d > base_t;
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
	typedef ork::Object parent_t;
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

// Class: ork::GPUBuffer
template<>
class LunaTraits< ork::GPUBuffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::GPUBuffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::GPUBuffer* obj);
	typedef ork::Object parent_t;
	typedef ork::GPUBuffer base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Sampler
template<>
class LunaTraits< ork::Sampler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Sampler* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Sampler* obj);
	typedef ork::Object parent_t;
	typedef ork::Sampler base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Sampler::Parameters
template<>
class LunaTraits< ork::Sampler::Parameters > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Sampler::Parameters* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Sampler::Parameters* obj);
	typedef ork::Sampler::Parameters parent_t;
	typedef ork::Sampler::Parameters base_t;
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
	typedef ork::Sampler::Parameters parent_t;
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

// Class: ork::Uniform
template<>
class LunaTraits< ork::Uniform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform* obj);
	typedef ork::Object parent_t;
	typedef ork::Uniform base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformSampler
template<>
class LunaTraits< ork::UniformSampler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformSampler* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformSampler* obj);
	typedef ork::Object parent_t;
	typedef ork::UniformSampler base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformSubroutine
template<>
class LunaTraits< ork::UniformSubroutine > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformSubroutine* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformSubroutine* obj);
	typedef ork::Object parent_t;
	typedef ork::UniformSubroutine base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformBlock
template<>
class LunaTraits< ork::UniformBlock > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformBlock* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformBlock* obj);
	typedef ork::Object parent_t;
	typedef ork::UniformBlock base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Task
template<>
class LunaTraits< ork::Task > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Task* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Task* obj);
	typedef ork::Object parent_t;
	typedef ork::Task base_t;
	static luna_ConverterType converters[];
};

// Class: ork::TaskListener
template<>
class LunaTraits< ork::TaskListener > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::TaskListener* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::TaskListener* obj);
	typedef ork::TaskListener parent_t;
	typedef ork::TaskListener base_t;
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

// Class: proland::TerrainQuad
template<>
class LunaTraits< proland::TerrainQuad > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TerrainQuad* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TerrainQuad* obj);
	typedef osg::Referenced parent_t;
	typedef proland::TerrainQuad base_t;
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

// Mapped type: std::vector< ptr< ork::Uniform > >
template<>
class LunaTraits< std::vector< ptr< ork::Uniform > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< ptr< ork::Uniform > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< ptr< ork::Uniform > >* obj);
	typedef std::vector< ptr< ork::Uniform > > parent_t;
	typedef std::vector< ptr< ork::Uniform > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::set< ork::Task * >
template<>
class LunaTraits< std::set< ork::Task * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< ork::Task * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< ork::Task * >* obj);
	typedef std::set< ork::Task * > parent_t;
	typedef std::set< ork::Task * > base_t;
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

// Mapped type: sgtObserver< proland::TerrainQuad >
template<>
class LunaTraits< sgtObserver< proland::TerrainQuad > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgtObserver< proland::TerrainQuad >* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgtObserver< proland::TerrainQuad >* obj);
	typedef sgtObserver< proland::TerrainQuad > parent_t;
	typedef sgtObserver< proland::TerrainQuad > base_t;
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

// Referenced external: std::vector< std::string >
template<>
class LunaTraits< std::vector< std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< std::string >* obj);
	typedef std::vector< std::string > parent_t;
	typedef std::vector< std::string > base_t;
	static luna_ConverterType converters[];
};

// Referenced external: std::vector< float >
template<>
class LunaTraits< std::vector< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< float >* obj);
	typedef std::vector< float > parent_t;
	typedef std::vector< float > base_t;
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
class LunaType< 2655989 > {
public:
	typedef ork::Uniform1f type;
	
};

template<>
class LunaType< 2655987 > {
public:
	typedef ork::Uniform1d type;
	
};

template<>
class LunaType< 2655992 > {
public:
	typedef ork::Uniform1i type;
	
};

template<>
class LunaType< 82336229 > {
public:
	typedef ork::Uniform1ui type;
	
};

template<>
class LunaType< 2655985 > {
public:
	typedef ork::Uniform1b type;
	
};

template<>
class LunaType< 2656020 > {
public:
	typedef ork::Uniform2f type;
	
};

template<>
class LunaType< 2656018 > {
public:
	typedef ork::Uniform2d type;
	
};

template<>
class LunaType< 2656023 > {
public:
	typedef ork::Uniform2i type;
	
};

template<>
class LunaType< 82337190 > {
public:
	typedef ork::Uniform2ui type;
	
};

template<>
class LunaType< 2656016 > {
public:
	typedef ork::Uniform2b type;
	
};

template<>
class LunaType< 2656051 > {
public:
	typedef ork::Uniform3f type;
	
};

template<>
class LunaType< 2656049 > {
public:
	typedef ork::Uniform3d type;
	
};

template<>
class LunaType< 2656054 > {
public:
	typedef ork::Uniform3i type;
	
};

template<>
class LunaType< 82338151 > {
public:
	typedef ork::Uniform3ui type;
	
};

template<>
class LunaType< 2656047 > {
public:
	typedef ork::Uniform3b type;
	
};

template<>
class LunaType< 2656082 > {
public:
	typedef ork::Uniform4f type;
	
};

template<>
class LunaType< 2656080 > {
public:
	typedef ork::Uniform4d type;
	
};

template<>
class LunaType< 2656085 > {
public:
	typedef ork::Uniform4i type;
	
};

template<>
class LunaType< 82339112 > {
public:
	typedef ork::Uniform4ui type;
	
};

template<>
class LunaType< 2656078 > {
public:
	typedef ork::Uniform4b type;
	
};

template<>
class LunaType< 81597856 > {
public:
	typedef ork::UniformMatrix2f type;
	
};

template<>
class LunaType< 81597887 > {
public:
	typedef ork::UniformMatrix3f type;
	
};

template<>
class LunaType< 81597918 > {
public:
	typedef ork::UniformMatrix4f type;
	
};

template<>
class LunaType< 15542124 > {
public:
	typedef ork::UniformMatrix2x3f type;
	
};

template<>
class LunaType< 15542155 > {
public:
	typedef ork::UniformMatrix2x4f type;
	
};

template<>
class LunaType< 15571884 > {
public:
	typedef ork::UniformMatrix3x2f type;
	
};

template<>
class LunaType< 15571946 > {
public:
	typedef ork::UniformMatrix3x4f type;
	
};

template<>
class LunaType< 15601675 > {
public:
	typedef ork::UniformMatrix4x2f type;
	
};

template<>
class LunaType< 15601706 > {
public:
	typedef ork::UniformMatrix4x3f type;
	
};

template<>
class LunaType< 81597854 > {
public:
	typedef ork::UniformMatrix2d type;
	
};

template<>
class LunaType< 81597885 > {
public:
	typedef ork::UniformMatrix3d type;
	
};

template<>
class LunaType< 81597916 > {
public:
	typedef ork::UniformMatrix4d type;
	
};

template<>
class LunaType< 15542122 > {
public:
	typedef ork::UniformMatrix2x3d type;
	
};

template<>
class LunaType< 15542153 > {
public:
	typedef ork::UniformMatrix2x4d type;
	
};

template<>
class LunaType< 15571882 > {
public:
	typedef ork::UniformMatrix3x2d type;
	
};

template<>
class LunaType< 15571944 > {
public:
	typedef ork::UniformMatrix3x4d type;
	
};

template<>
class LunaType< 15601673 > {
public:
	typedef ork::UniformMatrix4x2d type;
	
};

template<>
class LunaType< 15601704 > {
public:
	typedef ork::UniformMatrix4x3d type;
	
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
class LunaType< 84580371 > {
public:
	typedef ork::Sampler::Parameters type;
	
};

template<>
class LunaType< 59816505 > {
public:
	typedef ork::TaskListener type;
	
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
class LunaType< 62396700 > {
public:
	typedef ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, value1f > type;
	
};

template<>
class LunaType< 41802394 > {
public:
	typedef ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, value1d > type;
	
};

template<>
class LunaType< 66245173 > {
public:
	typedef ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, value1i > type;
	
};

template<>
class LunaType< 35814474 > {
public:
	typedef ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, value1ui > type;
	
};

template<>
class LunaType< 87533460 > {
public:
	typedef ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, value1b > type;
	
};

template<>
class LunaType< 68045811 > {
public:
	typedef ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, value2f > type;
	
};

template<>
class LunaType< 45543824 > {
public:
	typedef ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, value2d > type;
	
};

template<>
class LunaType< 18999108 > {
public:
	typedef ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, value2i > type;
	
};

template<>
class LunaType< 28506115 > {
public:
	typedef ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, value2ui > type;
	
};

template<>
class LunaType< 98042603 > {
public:
	typedef ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, value2b > type;
	
};

template<>
class LunaType< 67663799 > {
public:
	typedef ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, value3f > type;
	
};

template<>
class LunaType< 42604694 > {
public:
	typedef ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, value3d > type;
	
};

template<>
class LunaType< 34625537 > {
public:
	typedef ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, value3i > type;
	
};

template<>
class LunaType< 17560642 > {
public:
	typedef ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, value3ui > type;
	
};

template<>
class LunaType< 81807342 > {
public:
	typedef ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, value3b > type;
	
};

template<>
class LunaType< 51505983 > {
public:
	typedef ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, value4f > type;
	
};

template<>
class LunaType< 25232354 > {
public:
	typedef ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, value4d > type;
	
};

template<>
class LunaType< 60834338 > {
public:
	typedef ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, value4i > type;
	
};

template<>
class LunaType< 68999146 > {
public:
	typedef ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, value4ui > type;
	
};

template<>
class LunaType< 58696464 > {
public:
	typedef ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, value4b > type;
	
};

template<>
class LunaType< 70521752 > {
public:
	typedef ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, valueMatrix2f > type;
	
};

template<>
class LunaType< 83168142 > {
public:
	typedef ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, valueMatrix3f > type;
	
};

template<>
class LunaType< 24302492 > {
public:
	typedef ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, valueMatrix4f > type;
	
};

template<>
class LunaType< 41425156 > {
public:
	typedef ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, valueMatrix2x3f > type;
	
};

template<>
class LunaType< 17831149 > {
public:
	typedef ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, valueMatrix2x4f > type;
	
};

template<>
class LunaType< 88566241 > {
public:
	typedef ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, valueMatrix3x2f > type;
	
};

template<>
class LunaType< 59033452 > {
public:
	typedef ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, valueMatrix3x4f > type;
	
};

template<>
class LunaType< 47037192 > {
public:
	typedef ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, valueMatrix4x2f > type;
	
};

template<>
class LunaType< 77939336 > {
public:
	typedef ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, valueMatrix4x3f > type;
	
};

template<>
class LunaType< 20431084 > {
public:
	typedef ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > type;
	
};

template<>
class LunaType< 14604861 > {
public:
	typedef ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, valueMatrix3d > type;
	
};

template<>
class LunaType< 86419929 > {
public:
	typedef ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, valueMatrix4d > type;
	
};

template<>
class LunaType< 27841661 > {
public:
	typedef ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, valueMatrix2x3d > type;
	
};

template<>
class LunaType< 2187379 > {
public:
	typedef ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, valueMatrix2x4d > type;
	
};

template<>
class LunaType< 30100986 > {
public:
	typedef ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, valueMatrix3x2d > type;
	
};

template<>
class LunaType< 42553402 > {
public:
	typedef ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, valueMatrix3x4d > type;
	
};

template<>
class LunaType< 39625065 > {
public:
	typedef ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, valueMatrix4x2d > type;
	
};

template<>
class LunaType< 74560307 > {
public:
	typedef ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, valueMatrix4x3d > type;
	
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
class LunaType< 94583345 > {
public:
	typedef std::vector< ptr< ork::Uniform > > type;
	
};

template<>
class LunaType< 86321452 > {
public:
	typedef std::set< ork::Task * > type;
	
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
class LunaType< 929176 > {
public:
	typedef sgtObserver< proland::TerrainQuad > type;
	
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
class LunaType< 95416160 > {
public:
	typedef std::vector< std::string > type;
	
};

template<>
class LunaType< 77249888 > {
public:
	typedef std::vector< float > type;
	
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

