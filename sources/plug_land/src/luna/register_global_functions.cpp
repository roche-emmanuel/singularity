#include <plug_common.h>

#include <math/half.h>

// Function checkers:

// Function binds:

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

inline static bool _lg_typecheck_isNaN(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,31071002) ) return false;
	return true;
}


// Function binds:
// unsigned short sgt::floatToHalf(float x)
static int _bind_floatToHalf(lua_State *L) {
	if (!_lg_typecheck_floatToHalf(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned short sgt::floatToHalf(float x) function, expected prototype:\nunsigned short sgt::floatToHalf(float x)\nClass arguments details:\n");
	}

	float x=(float)lua_tonumber(L,1);

	unsigned short lret = sgt::floatToHalf(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float sgt::halfToFloat(unsigned short h)
static int _bind_halfToFloat(lua_State *L) {
	if (!_lg_typecheck_halfToFloat(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float sgt::halfToFloat(unsigned short h) function, expected prototype:\nfloat sgt::halfToFloat(unsigned short h)\nClass arguments details:\n");
	}

	unsigned short h=(unsigned short)lua_tointeger(L,1);

	float lret = sgt::halfToFloat(h);
	lua_pushnumber(L,lret);

	return 1;
}

// bool sgt::isNaN(sgt::half x)
static int _bind_isNaN(lua_State *L) {
	if (!_lg_typecheck_isNaN(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool sgt::isNaN(sgt::half x) function, expected prototype:\nbool sgt::isNaN(sgt::half x)\nClass arguments details:\narg 1 ID = 31071002\n");
	}

	sgt::half* x_ptr=(Luna< sgt::half >::check(L,1));
	if( !x_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg x in sgt::isNaN function");
	}
	sgt::half x=*x_ptr;

	bool lret = sgt::isNaN(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"sgt");
	lua_pushcfunction(L, _bind_floatToHalf); lua_setfield(L,-2,"floatToHalf");
	lua_pushcfunction(L, _bind_halfToFloat); lua_setfield(L,-2,"halfToFloat");
	lua_pushcfunction(L, _bind_isNaN); lua_setfield(L,-2,"isNaN");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

