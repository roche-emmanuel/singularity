#include <plug_common.h>

#include <IGizmo.h>

// Function checkers:
inline static bool _lg_typecheck_CreateMoveGizmo(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_CreateRotateGizmo(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_CreateScaleGizmo(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// IGizmo * CreateMoveGizmo()
static int _bind_CreateMoveGizmo(lua_State *L) {
	if (!_lg_typecheck_CreateMoveGizmo(L)) {
		luaL_error(L, "luna typecheck failed in IGizmo * CreateMoveGizmo() function, expected prototype:\nIGizmo * CreateMoveGizmo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	IGizmo * lret = ::CreateMoveGizmo();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IGizmo >::push(L,lret,false);

	return 1;
}

// IGizmo * CreateRotateGizmo()
static int _bind_CreateRotateGizmo(lua_State *L) {
	if (!_lg_typecheck_CreateRotateGizmo(L)) {
		luaL_error(L, "luna typecheck failed in IGizmo * CreateRotateGizmo() function, expected prototype:\nIGizmo * CreateRotateGizmo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	IGizmo * lret = ::CreateRotateGizmo();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IGizmo >::push(L,lret,false);

	return 1;
}

// IGizmo * CreateScaleGizmo()
static int _bind_CreateScaleGizmo(lua_State *L) {
	if (!_lg_typecheck_CreateScaleGizmo(L)) {
		luaL_error(L, "luna typecheck failed in IGizmo * CreateScaleGizmo() function, expected prototype:\nIGizmo * CreateScaleGizmo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	IGizmo * lret = ::CreateScaleGizmo();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IGizmo >::push(L,lret,false);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"gizmo");
	lua_pushcfunction(L, _bind_CreateMoveGizmo); lua_setfield(L,-2,"CreateMoveGizmo");
	lua_pushcfunction(L, _bind_CreateRotateGizmo); lua_setfield(L,-2,"CreateRotateGizmo");
	lua_pushcfunction(L, _bind_CreateScaleGizmo); lua_setfield(L,-2,"CreateScaleGizmo");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

