#include <plug_common.h>

#include <math/half.h>
#include <plug_extensions.h>
#include <core/Types.h>

// Function checkers:
inline static bool _lg_typecheck_isNaN_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,31071002) ) return false;
	if( (!(Luna< sgt::half >::check(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_isNaN_overload_2(lua_State *L) {
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

inline static bool _lg_typecheck_getInfinity(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// bool isNaN(sgt::half x)
static int _bind_isNaN_overload_1(lua_State *L) {
	if (!_lg_typecheck_isNaN_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool isNaN(sgt::half x) function, expected prototype:\nbool isNaN(sgt::half x)\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
	}

	sgt::half* x_ptr=(Luna< sgt::half >::check(L,1));
	if( !x_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg x in isNaN function");
	}
	sgt::half x=*x_ptr;

	bool lret = ::isNaN(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isNaN(double x)
static int _bind_isNaN_overload_2(lua_State *L) {
	if (!_lg_typecheck_isNaN_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool isNaN(double x) function, expected prototype:\nbool isNaN(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isNaN(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for isNaN
static int _bind_isNaN(lua_State *L) {
	if (_lg_typecheck_isNaN_overload_1(L)) return _bind_isNaN_overload_1(L);
	if (_lg_typecheck_isNaN_overload_2(L)) return _bind_isNaN_overload_2(L);

	luaL_error(L, "error in function isNaN, cannot match any of the overloads for function isNaN:\n  isNaN(sgt::half)\n  isNaN(double)\n");
	return 0;
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

// double getInfinity()
static int _bind_getInfinity(lua_State *L) {
	if (!_lg_typecheck_getInfinity(L)) {
		luaL_error(L, "luna typecheck failed in double getInfinity() function, expected prototype:\ndouble getInfinity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	double lret = ::getInfinity();
	lua_pushnumber(L,lret);

	return 1;
}


// Function checkers:
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


// Function binds:
// unsigned int sgt::getTextureInternalFormat(sgt::TextureInternalFormat f)
static int _bind_getTextureInternalFormat(lua_State *L) {
	if (!_lg_typecheck_getTextureInternalFormat(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int sgt::getTextureInternalFormat(sgt::TextureInternalFormat f) function, expected prototype:\nunsigned int sgt::getTextureInternalFormat(sgt::TextureInternalFormat f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	sgt::TextureInternalFormat f=(sgt::TextureInternalFormat)lua_tointeger(L,1);

	unsigned int lret = sgt::getTextureInternalFormat(f);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int sgt::getFormatSize(sgt::TextureFormat f, sgt::PixelType t)
static int _bind_getFormatSize(lua_State *L) {
	if (!_lg_typecheck_getFormatSize(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int sgt::getFormatSize(sgt::TextureFormat f, sgt::PixelType t) function, expected prototype:\nunsigned int sgt::getFormatSize(sgt::TextureFormat f, sgt::PixelType t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	sgt::TextureFormat f=(sgt::TextureFormat)lua_tointeger(L,1);
	sgt::PixelType t=(sgt::PixelType)lua_tointeger(L,2);

	unsigned int lret = sgt::getFormatSize(f, t);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int sgt::getTextureFormat(sgt::TextureFormat f)
static int _bind_getTextureFormat(lua_State *L) {
	if (!_lg_typecheck_getTextureFormat(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int sgt::getTextureFormat(sgt::TextureFormat f) function, expected prototype:\nunsigned int sgt::getTextureFormat(sgt::TextureFormat f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	sgt::TextureFormat f=(sgt::TextureFormat)lua_tointeger(L,1);

	unsigned int lret = sgt::getTextureFormat(f);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int sgt::getPixelType(sgt::PixelType t)
static int _bind_getPixelType(lua_State *L) {
	if (!_lg_typecheck_getPixelType(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int sgt::getPixelType(sgt::PixelType t) function, expected prototype:\nunsigned int sgt::getPixelType(sgt::PixelType t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	sgt::PixelType t=(sgt::PixelType)lua_tointeger(L,1);

	unsigned int lret = sgt::getPixelType(t);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int sgt::getTextureWrap(sgt::TextureWrap w)
static int _bind_getTextureWrap(lua_State *L) {
	if (!_lg_typecheck_getTextureWrap(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int sgt::getTextureWrap(sgt::TextureWrap w) function, expected prototype:\nunsigned int sgt::getTextureWrap(sgt::TextureWrap w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	sgt::TextureWrap w=(sgt::TextureWrap)lua_tointeger(L,1);

	unsigned int lret = sgt::getTextureWrap(w);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int sgt::getTextureFilter(sgt::TextureFilter f)
static int _bind_getTextureFilter(lua_State *L) {
	if (!_lg_typecheck_getTextureFilter(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int sgt::getTextureFilter(sgt::TextureFilter f) function, expected prototype:\nunsigned int sgt::getTextureFilter(sgt::TextureFilter f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	sgt::TextureFilter f=(sgt::TextureFilter)lua_tointeger(L,1);

	unsigned int lret = sgt::getTextureFilter(f);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int sgt::getFunction(sgt::Function f)
static int _bind_getFunction(lua_State *L) {
	if (!_lg_typecheck_getFunction(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int sgt::getFunction(sgt::Function f) function, expected prototype:\nunsigned int sgt::getFunction(sgt::Function f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	sgt::Function f=(sgt::Function)lua_tointeger(L,1);

	unsigned int lret = sgt::getFunction(f);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int sgt::getTextureSwizzle(char c)
static int _bind_getTextureSwizzle(lua_State *L) {
	if (!_lg_typecheck_getTextureSwizzle(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int sgt::getTextureSwizzle(char c) function, expected prototype:\nunsigned int sgt::getTextureSwizzle(char c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	char c=(char)lua_tointeger(L,1);

	unsigned int lret = sgt::getTextureSwizzle(c);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int sgt::getTextureComponents(sgt::TextureFormat f)
static int _bind_getTextureComponents(lua_State *L) {
	if (!_lg_typecheck_getTextureComponents(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int sgt::getTextureComponents(sgt::TextureFormat f) function, expected prototype:\nunsigned int sgt::getTextureComponents(sgt::TextureFormat f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	sgt::TextureFormat f=(sgt::TextureFormat)lua_tointeger(L,1);

	unsigned int lret = sgt::getTextureComponents(f);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned short sgt::floatToHalf(float x)
static int _bind_floatToHalf(lua_State *L) {
	if (!_lg_typecheck_floatToHalf(L)) {
		luaL_error(L, "luna typecheck failed in unsigned short sgt::floatToHalf(float x) function, expected prototype:\nunsigned short sgt::floatToHalf(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	unsigned short lret = sgt::floatToHalf(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float sgt::halfToFloat(unsigned short h)
static int _bind_halfToFloat(lua_State *L) {
	if (!_lg_typecheck_halfToFloat(L)) {
		luaL_error(L, "luna typecheck failed in float sgt::halfToFloat(unsigned short h) function, expected prototype:\nfloat sgt::halfToFloat(unsigned short h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned short h=(unsigned short)lua_tointeger(L,1);

	float lret = sgt::halfToFloat(h);
	lua_pushnumber(L,lret);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"sgt");
	lua_pushcfunction(L, _bind_isNaN); lua_setfield(L,-2,"isNaN");
	lua_pushcfunction(L, _bind_isFinite); lua_setfield(L,-2,"isFinite");
	lua_pushcfunction(L, _bind_isInf); lua_setfield(L,-2,"isInf");
	lua_pushcfunction(L, _bind_isSubnormal); lua_setfield(L,-2,"isSubnormal");
	lua_pushcfunction(L, _bind_getInfinity); lua_setfield(L,-2,"getInfinity");
	lua_pushcfunction(L, _bind_getTextureInternalFormat); lua_setfield(L,-2,"getTextureInternalFormat");
	lua_pushcfunction(L, _bind_getFormatSize); lua_setfield(L,-2,"getFormatSize");
	lua_pushcfunction(L, _bind_getTextureFormat); lua_setfield(L,-2,"getTextureFormat");
	lua_pushcfunction(L, _bind_getPixelType); lua_setfield(L,-2,"getPixelType");
	lua_pushcfunction(L, _bind_getTextureWrap); lua_setfield(L,-2,"getTextureWrap");
	lua_pushcfunction(L, _bind_getTextureFilter); lua_setfield(L,-2,"getTextureFilter");
	lua_pushcfunction(L, _bind_getFunction); lua_setfield(L,-2,"getFunction");
	lua_pushcfunction(L, _bind_getTextureSwizzle); lua_setfield(L,-2,"getTextureSwizzle");
	lua_pushcfunction(L, _bind_getTextureComponents); lua_setfield(L,-2,"getTextureComponents");
	lua_pushcfunction(L, _bind_floatToHalf); lua_setfield(L,-2,"floatToHalf");
	lua_pushcfunction(L, _bind_halfToFloat); lua_setfield(L,-2,"halfToFloat");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

