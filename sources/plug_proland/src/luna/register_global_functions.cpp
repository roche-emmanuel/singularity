#include <plug_common.h>

#include <ork/math/half.h>
#include <ork/render/Types.h>

// Function checkers:
inline static bool _lg_typecheck_isNaN(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isFinite(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isInf(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isSubnormal(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}


// Function binds:
// bool isNaN(double x)
static int _bind_isNaN(lua_State *L) {
	if (!_lg_typecheck_isNaN(L)) {
		luaL_error(L, "luna typecheck failed in bool isNaN(double x) function, expected prototype:\nbool isNaN(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isNaN(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isFinite(double x)
static int _bind_isFinite(lua_State *L) {
	if (!_lg_typecheck_isFinite(L)) {
		luaL_error(L, "luna typecheck failed in bool isFinite(double x) function, expected prototype:\nbool isFinite(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isFinite(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isInf(double x)
static int _bind_isInf(lua_State *L) {
	if (!_lg_typecheck_isInf(L)) {
		luaL_error(L, "luna typecheck failed in bool isInf(double x) function, expected prototype:\nbool isInf(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isInf(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isSubnormal(double x)
static int _bind_isSubnormal(lua_State *L) {
	if (!_lg_typecheck_isSubnormal(L)) {
		luaL_error(L, "luna typecheck failed in bool isSubnormal(double x) function, expected prototype:\nbool isSubnormal(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isSubnormal(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}


// Function checkers:
inline static bool _lg_typecheck_floatToHalf(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_halfToFloat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getTextureInternalFormat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getFormatSize(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getTextureFormat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getPixelType(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getTextureWrap(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getTextureFilter(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getFunction(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getTextureSwizzle(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getTextureComponents(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}


// Function binds:
// unsigned short ork::floatToHalf(float x)
static int _bind_floatToHalf(lua_State *L) {
	if (!_lg_typecheck_floatToHalf(L)) {
		luaL_error(L, "luna typecheck failed in unsigned short ork::floatToHalf(float x) function, expected prototype:\nunsigned short ork::floatToHalf(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	unsigned short lret = ork::floatToHalf(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float ork::halfToFloat(unsigned short h)
static int _bind_halfToFloat(lua_State *L) {
	if (!_lg_typecheck_halfToFloat(L)) {
		luaL_error(L, "luna typecheck failed in float ork::halfToFloat(unsigned short h) function, expected prototype:\nfloat ork::halfToFloat(unsigned short h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned short h=(unsigned short)lua_tointeger(L,1);

	float lret = ork::halfToFloat(h);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int ork::getTextureInternalFormat(ork::TextureInternalFormat f)
static int _bind_getTextureInternalFormat(lua_State *L) {
	if (!_lg_typecheck_getTextureInternalFormat(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int ork::getTextureInternalFormat(ork::TextureInternalFormat f) function, expected prototype:\nunsigned int ork::getTextureInternalFormat(ork::TextureInternalFormat f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	ork::TextureInternalFormat f=(ork::TextureInternalFormat)lua_tointeger(L,1);

	unsigned int lret = ork::getTextureInternalFormat(f);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int ork::getFormatSize(ork::TextureFormat f, ork::PixelType t)
static int _bind_getFormatSize(lua_State *L) {
	if (!_lg_typecheck_getFormatSize(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int ork::getFormatSize(ork::TextureFormat f, ork::PixelType t) function, expected prototype:\nunsigned int ork::getFormatSize(ork::TextureFormat f, ork::PixelType t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,1);
	ork::PixelType t=(ork::PixelType)lua_tointeger(L,2);

	unsigned int lret = ork::getFormatSize(f, t);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int ork::getTextureFormat(ork::TextureFormat f)
static int _bind_getTextureFormat(lua_State *L) {
	if (!_lg_typecheck_getTextureFormat(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int ork::getTextureFormat(ork::TextureFormat f) function, expected prototype:\nunsigned int ork::getTextureFormat(ork::TextureFormat f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,1);

	unsigned int lret = ork::getTextureFormat(f);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int ork::getPixelType(ork::PixelType t)
static int _bind_getPixelType(lua_State *L) {
	if (!_lg_typecheck_getPixelType(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int ork::getPixelType(ork::PixelType t) function, expected prototype:\nunsigned int ork::getPixelType(ork::PixelType t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	ork::PixelType t=(ork::PixelType)lua_tointeger(L,1);

	unsigned int lret = ork::getPixelType(t);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int ork::getTextureWrap(ork::TextureWrap w)
static int _bind_getTextureWrap(lua_State *L) {
	if (!_lg_typecheck_getTextureWrap(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int ork::getTextureWrap(ork::TextureWrap w) function, expected prototype:\nunsigned int ork::getTextureWrap(ork::TextureWrap w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	ork::TextureWrap w=(ork::TextureWrap)lua_tointeger(L,1);

	unsigned int lret = ork::getTextureWrap(w);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int ork::getTextureFilter(ork::TextureFilter f)
static int _bind_getTextureFilter(lua_State *L) {
	if (!_lg_typecheck_getTextureFilter(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int ork::getTextureFilter(ork::TextureFilter f) function, expected prototype:\nunsigned int ork::getTextureFilter(ork::TextureFilter f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	ork::TextureFilter f=(ork::TextureFilter)lua_tointeger(L,1);

	unsigned int lret = ork::getTextureFilter(f);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int ork::getFunction(ork::Function f)
static int _bind_getFunction(lua_State *L) {
	if (!_lg_typecheck_getFunction(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int ork::getFunction(ork::Function f) function, expected prototype:\nunsigned int ork::getFunction(ork::Function f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	ork::Function f=(ork::Function)lua_tointeger(L,1);

	unsigned int lret = ork::getFunction(f);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int ork::getTextureSwizzle(char c)
static int _bind_getTextureSwizzle(lua_State *L) {
	if (!_lg_typecheck_getTextureSwizzle(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int ork::getTextureSwizzle(char c) function, expected prototype:\nunsigned int ork::getTextureSwizzle(char c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	char c=(char)lua_tointeger(L,1);

	unsigned int lret = ork::getTextureSwizzle(c);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int ork::getTextureComponents(ork::TextureFormat f)
static int _bind_getTextureComponents(lua_State *L) {
	if (!_lg_typecheck_getTextureComponents(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int ork::getTextureComponents(ork::TextureFormat f) function, expected prototype:\nunsigned int ork::getTextureComponents(ork::TextureFormat f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,1);

	unsigned int lret = ork::getTextureComponents(f);
	lua_pushnumber(L,lret);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"proland");
	lua_pushcfunction(L, _bind_isNaN); lua_setfield(L,-2,"isNaN");
	lua_pushcfunction(L, _bind_isFinite); lua_setfield(L,-2,"isFinite");
	lua_pushcfunction(L, _bind_isInf); lua_setfield(L,-2,"isInf");
	lua_pushcfunction(L, _bind_isSubnormal); lua_setfield(L,-2,"isSubnormal");
	luna_popModule(L);
	luna_pushModule(L,"ork");
	lua_pushcfunction(L, _bind_floatToHalf); lua_setfield(L,-2,"floatToHalf");
	lua_pushcfunction(L, _bind_halfToFloat); lua_setfield(L,-2,"halfToFloat");
	lua_pushcfunction(L, _bind_getTextureInternalFormat); lua_setfield(L,-2,"getTextureInternalFormat");
	lua_pushcfunction(L, _bind_getFormatSize); lua_setfield(L,-2,"getFormatSize");
	lua_pushcfunction(L, _bind_getTextureFormat); lua_setfield(L,-2,"getTextureFormat");
	lua_pushcfunction(L, _bind_getPixelType); lua_setfield(L,-2,"getPixelType");
	lua_pushcfunction(L, _bind_getTextureWrap); lua_setfield(L,-2,"getTextureWrap");
	lua_pushcfunction(L, _bind_getTextureFilter); lua_setfield(L,-2,"getTextureFilter");
	lua_pushcfunction(L, _bind_getFunction); lua_setfield(L,-2,"getFunction");
	lua_pushcfunction(L, _bind_getTextureSwizzle); lua_setfield(L,-2,"getTextureSwizzle");
	lua_pushcfunction(L, _bind_getTextureComponents); lua_setfield(L,-2,"getTextureComponents");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

