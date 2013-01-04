#include <plug_common.h>

#include <AntTweakBar.h>

// Function checkers:
inline static bool _lg_typecheck_TwNewBar(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwDeleteBar(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	return true;
}

inline static bool _lg_typecheck_TwDeleteAllBars(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_TwSetTopBar(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'const struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	return true;
}

inline static bool _lg_typecheck_TwGetTopBar(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_TwSetBottomBar(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'const struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	return true;
}

inline static bool _lg_typecheck_TwGetBottomBar(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_TwGetBarName(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	return true;
}

inline static bool _lg_typecheck_TwGetBarCount(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_TwGetBarByIndex(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwGetBarByName(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwRefreshBar(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	return true;
}

inline static bool _lg_typecheck_TwAddVarRW(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	if( lua_isstring(L,2)==0 ) return false;
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwType'
	////////////////////////////////////////////////////////////////////
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( lua_isstring(L,5)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwAddVarRO(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	if( lua_isstring(L,2)==0 ) return false;
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwType'
	////////////////////////////////////////////////////////////////////
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( lua_isstring(L,5)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwAddSeparator(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwRemoveVar(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwRemoveAllVars(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	return true;
}

inline static bool _lg_typecheck_TwDefine(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwDefineEnum(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'const struct CTwEnumVal *'
	////////////////////////////////////////////////////////////////////
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwDefineEnumFromString(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwGetParam(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwParamValueType'
	////////////////////////////////////////////////////////////////////
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwSetParam(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *'
	////////////////////////////////////////////////////////////////////
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwParamValueType'
	////////////////////////////////////////////////////////////////////
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwInit(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwGraphAPI'
	////////////////////////////////////////////////////////////////////
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwTerminate(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_TwDraw(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_TwWindowSize(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwSetCurrentWindow(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwGetCurrentWindow(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_TwWindowExists(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwKeyPressed(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwKeyTest(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwMouseButton(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwMouseAction'
	////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwMouseButtonID'
	////////////////////////////////////////////////////////////////////
	return true;
}

inline static bool _lg_typecheck_TwMouseMotion(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwMouseWheel(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwGetLastError(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_TwEventWin(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwEventSDL(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwEventMouseButtonGLFW(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwEventKeyGLFW(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwEventCharGLFW(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwEventMouseButtonGLUT(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwEventMouseMotionGLUT(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwEventKeyboardGLUT(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwEventSpecialGLUT(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwEventSFML(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}


// Function binds:
// struct CTwBar * TwNewBar(const char * barName)
static int _bind_TwNewBar(lua_State *L) {
	if (!_lg_typecheck_TwNewBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in struct CTwBar * TwNewBar(const char * barName) function, expected prototype:\nstruct CTwBar * TwNewBar(const char * barName)\nClass arguments details:\n");
	}

	const char * barName=(const char *)lua_tostring(L,1);

	struct CTwBar * lret = TwNewBar(barName);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< struct CTwBar >::push(L,lret,false);

	return 1;
}

// int TwDeleteBar(struct CTwBar * bar)
static int _bind_TwDeleteBar(lua_State *L) {
	if (!_lg_typecheck_TwDeleteBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwDeleteBar(struct CTwBar * bar) function, expected prototype:\nint TwDeleteBar(struct CTwBar * bar)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////

	int lret = TwDeleteBar(&bar);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwDeleteAllBars()
static int _bind_TwDeleteAllBars(lua_State *L) {
	if (!_lg_typecheck_TwDeleteAllBars(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwDeleteAllBars() function, expected prototype:\nint TwDeleteAllBars()\nClass arguments details:\n");
	}


	int lret = TwDeleteAllBars();
	lua_pushnumber(L,lret);

	return 1;
}

// int TwSetTopBar(const struct CTwBar * bar)
static int _bind_TwSetTopBar(lua_State *L) {
	if (!_lg_typecheck_TwSetTopBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwSetTopBar(const struct CTwBar * bar) function, expected prototype:\nint TwSetTopBar(const struct CTwBar * bar)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'const struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////

	int lret = TwSetTopBar(&bar);
	lua_pushnumber(L,lret);

	return 1;
}

// struct CTwBar * TwGetTopBar()
static int _bind_TwGetTopBar(lua_State *L) {
	if (!_lg_typecheck_TwGetTopBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in struct CTwBar * TwGetTopBar() function, expected prototype:\nstruct CTwBar * TwGetTopBar()\nClass arguments details:\n");
	}


	struct CTwBar * lret = TwGetTopBar();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< struct CTwBar >::push(L,lret,false);

	return 1;
}

// int TwSetBottomBar(const struct CTwBar * bar)
static int _bind_TwSetBottomBar(lua_State *L) {
	if (!_lg_typecheck_TwSetBottomBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwSetBottomBar(const struct CTwBar * bar) function, expected prototype:\nint TwSetBottomBar(const struct CTwBar * bar)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'const struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////

	int lret = TwSetBottomBar(&bar);
	lua_pushnumber(L,lret);

	return 1;
}

// struct CTwBar * TwGetBottomBar()
static int _bind_TwGetBottomBar(lua_State *L) {
	if (!_lg_typecheck_TwGetBottomBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in struct CTwBar * TwGetBottomBar() function, expected prototype:\nstruct CTwBar * TwGetBottomBar()\nClass arguments details:\n");
	}


	struct CTwBar * lret = TwGetBottomBar();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< struct CTwBar >::push(L,lret,false);

	return 1;
}

// const char * TwGetBarName(struct CTwBar * bar)
static int _bind_TwGetBarName(lua_State *L) {
	if (!_lg_typecheck_TwGetBarName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * TwGetBarName(struct CTwBar * bar) function, expected prototype:\nconst char * TwGetBarName(struct CTwBar * bar)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////

	const char * lret = TwGetBarName(&bar);
	lua_pushstring(L,lret);

	return 1;
}

// int TwGetBarCount()
static int _bind_TwGetBarCount(lua_State *L) {
	if (!_lg_typecheck_TwGetBarCount(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwGetBarCount() function, expected prototype:\nint TwGetBarCount()\nClass arguments details:\n");
	}


	int lret = TwGetBarCount();
	lua_pushnumber(L,lret);

	return 1;
}

// struct CTwBar * TwGetBarByIndex(int barIndex)
static int _bind_TwGetBarByIndex(lua_State *L) {
	if (!_lg_typecheck_TwGetBarByIndex(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in struct CTwBar * TwGetBarByIndex(int barIndex) function, expected prototype:\nstruct CTwBar * TwGetBarByIndex(int barIndex)\nClass arguments details:\n");
	}

	int barIndex=(int)lua_tointeger(L,1);

	struct CTwBar * lret = TwGetBarByIndex(barIndex);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< struct CTwBar >::push(L,lret,false);

	return 1;
}

// struct CTwBar * TwGetBarByName(const char * barName)
static int _bind_TwGetBarByName(lua_State *L) {
	if (!_lg_typecheck_TwGetBarByName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in struct CTwBar * TwGetBarByName(const char * barName) function, expected prototype:\nstruct CTwBar * TwGetBarByName(const char * barName)\nClass arguments details:\n");
	}

	const char * barName=(const char *)lua_tostring(L,1);

	struct CTwBar * lret = TwGetBarByName(barName);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< struct CTwBar >::push(L,lret,false);

	return 1;
}

// int TwRefreshBar(struct CTwBar * bar)
static int _bind_TwRefreshBar(lua_State *L) {
	if (!_lg_typecheck_TwRefreshBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwRefreshBar(struct CTwBar * bar) function, expected prototype:\nint TwRefreshBar(struct CTwBar * bar)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////

	int lret = TwRefreshBar(&bar);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwAddVarRW(struct CTwBar * bar, const char * name, enum ETwType type, void * var, const char * def)
static int _bind_TwAddVarRW(lua_State *L) {
	if (!_lg_typecheck_TwAddVarRW(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwAddVarRW(struct CTwBar * bar, const char * name, enum ETwType type, void * var, const char * def) function, expected prototype:\nint TwAddVarRW(struct CTwBar * bar, const char * name, enum ETwType type, void * var, const char * def)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////
	const char * name=(const char *)lua_tostring(L,2);
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwType' baseTypeName is 'enum '
	////////////////////////////////////////////////////////////////////
	void* var=(Luna< void >::check(L,4));
	const char * def=(const char *)lua_tostring(L,5);

	int lret = TwAddVarRW(&bar, name, type, var, def);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwAddVarRO(struct CTwBar * bar, const char * name, enum ETwType type, const void * var, const char * def)
static int _bind_TwAddVarRO(lua_State *L) {
	if (!_lg_typecheck_TwAddVarRO(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwAddVarRO(struct CTwBar * bar, const char * name, enum ETwType type, const void * var, const char * def) function, expected prototype:\nint TwAddVarRO(struct CTwBar * bar, const char * name, enum ETwType type, const void * var, const char * def)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////
	const char * name=(const char *)lua_tostring(L,2);
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwType' baseTypeName is 'enum '
	////////////////////////////////////////////////////////////////////
	void* var=(Luna< void >::check(L,4));
	const char * def=(const char *)lua_tostring(L,5);

	int lret = TwAddVarRO(&bar, name, type, var, def);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwAddSeparator(struct CTwBar * bar, const char * name, const char * def)
static int _bind_TwAddSeparator(lua_State *L) {
	if (!_lg_typecheck_TwAddSeparator(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwAddSeparator(struct CTwBar * bar, const char * name, const char * def) function, expected prototype:\nint TwAddSeparator(struct CTwBar * bar, const char * name, const char * def)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////
	const char * name=(const char *)lua_tostring(L,2);
	const char * def=(const char *)lua_tostring(L,3);

	int lret = TwAddSeparator(&bar, name, def);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwRemoveVar(struct CTwBar * bar, const char * name)
static int _bind_TwRemoveVar(lua_State *L) {
	if (!_lg_typecheck_TwRemoveVar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwRemoveVar(struct CTwBar * bar, const char * name) function, expected prototype:\nint TwRemoveVar(struct CTwBar * bar, const char * name)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////
	const char * name=(const char *)lua_tostring(L,2);

	int lret = TwRemoveVar(&bar, name);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwRemoveAllVars(struct CTwBar * bar)
static int _bind_TwRemoveAllVars(lua_State *L) {
	if (!_lg_typecheck_TwRemoveAllVars(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwRemoveAllVars(struct CTwBar * bar) function, expected prototype:\nint TwRemoveAllVars(struct CTwBar * bar)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////

	int lret = TwRemoveAllVars(&bar);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwDefine(const char * def)
static int _bind_TwDefine(lua_State *L) {
	if (!_lg_typecheck_TwDefine(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwDefine(const char * def) function, expected prototype:\nint TwDefine(const char * def)\nClass arguments details:\n");
	}

	const char * def=(const char *)lua_tostring(L,1);

	int lret = TwDefine(def);
	lua_pushnumber(L,lret);

	return 1;
}

// enum ETwType TwDefineEnum(const char * name, const struct CTwEnumVal * enumValues, unsigned int nbValues)
static int _bind_TwDefineEnum(lua_State *L) {
	if (!_lg_typecheck_TwDefineEnum(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in enum ETwType TwDefineEnum(const char * name, const struct CTwEnumVal * enumValues, unsigned int nbValues) function, expected prototype:\nenum ETwType TwDefineEnum(const char * name, const struct CTwEnumVal * enumValues, unsigned int nbValues)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'const struct CTwEnumVal *' baseTypeName is 'struct '
	////////////////////////////////////////////////////////////////////
	unsigned int nbValues=(unsigned int)lua_tointeger(L,3);

	enum ETwType stack_lret = TwDefineEnum(name, &enumValues, nbValues);
	enum ETwType* lret = new enum ETwType(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< enum  >::push(L,lret,true);

	return 1;
}

// enum ETwType TwDefineEnumFromString(const char * name, const char * enumString)
static int _bind_TwDefineEnumFromString(lua_State *L) {
	if (!_lg_typecheck_TwDefineEnumFromString(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in enum ETwType TwDefineEnumFromString(const char * name, const char * enumString) function, expected prototype:\nenum ETwType TwDefineEnumFromString(const char * name, const char * enumString)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	const char * enumString=(const char *)lua_tostring(L,2);

	enum ETwType stack_lret = TwDefineEnumFromString(name, enumString);
	enum ETwType* lret = new enum ETwType(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< enum  >::push(L,lret,true);

	return 1;
}

// int TwGetParam(struct CTwBar * bar, const char * varName, const char * paramName, enum ETwParamValueType paramValueType, unsigned int outValueMaxCount, void * outValues)
static int _bind_TwGetParam(lua_State *L) {
	if (!_lg_typecheck_TwGetParam(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwGetParam(struct CTwBar * bar, const char * varName, const char * paramName, enum ETwParamValueType paramValueType, unsigned int outValueMaxCount, void * outValues) function, expected prototype:\nint TwGetParam(struct CTwBar * bar, const char * varName, const char * paramName, enum ETwParamValueType paramValueType, unsigned int outValueMaxCount, void * outValues)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////
	const char * varName=(const char *)lua_tostring(L,2);
	const char * paramName=(const char *)lua_tostring(L,3);
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwParamValueType' baseTypeName is 'enum '
	////////////////////////////////////////////////////////////////////
	unsigned int outValueMaxCount=(unsigned int)lua_tointeger(L,5);
	void* outValues=(Luna< void >::check(L,6));

	int lret = TwGetParam(&bar, varName, paramName, paramValueType, outValueMaxCount, outValues);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwSetParam(struct CTwBar * bar, const char * varName, const char * paramName, enum ETwParamValueType paramValueType, unsigned int inValueCount, const void * inValues)
static int _bind_TwSetParam(lua_State *L) {
	if (!_lg_typecheck_TwSetParam(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwSetParam(struct CTwBar * bar, const char * varName, const char * paramName, enum ETwParamValueType paramValueType, unsigned int inValueCount, const void * inValues) function, expected prototype:\nint TwSetParam(struct CTwBar * bar, const char * varName, const char * paramName, enum ETwParamValueType paramValueType, unsigned int inValueCount, const void * inValues)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'struct CTwBar *' baseTypeName is 'struct CTwBar'
	////////////////////////////////////////////////////////////////////
	const char * varName=(const char *)lua_tostring(L,2);
	const char * paramName=(const char *)lua_tostring(L,3);
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwParamValueType' baseTypeName is 'enum '
	////////////////////////////////////////////////////////////////////
	unsigned int inValueCount=(unsigned int)lua_tointeger(L,5);
	void* inValues=(Luna< void >::check(L,6));

	int lret = TwSetParam(&bar, varName, paramName, paramValueType, inValueCount, inValues);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwInit(enum ETwGraphAPI graphAPI, void * device)
static int _bind_TwInit(lua_State *L) {
	if (!_lg_typecheck_TwInit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwInit(enum ETwGraphAPI graphAPI, void * device) function, expected prototype:\nint TwInit(enum ETwGraphAPI graphAPI, void * device)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwGraphAPI' baseTypeName is 'enum '
	////////////////////////////////////////////////////////////////////
	void* device=(Luna< void >::check(L,2));

	int lret = TwInit(graphAPI, device);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwTerminate()
static int _bind_TwTerminate(lua_State *L) {
	if (!_lg_typecheck_TwTerminate(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwTerminate() function, expected prototype:\nint TwTerminate()\nClass arguments details:\n");
	}


	int lret = TwTerminate();
	lua_pushnumber(L,lret);

	return 1;
}

// int TwDraw()
static int _bind_TwDraw(lua_State *L) {
	if (!_lg_typecheck_TwDraw(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwDraw() function, expected prototype:\nint TwDraw()\nClass arguments details:\n");
	}


	int lret = TwDraw();
	lua_pushnumber(L,lret);

	return 1;
}

// int TwWindowSize(int width, int height)
static int _bind_TwWindowSize(lua_State *L) {
	if (!_lg_typecheck_TwWindowSize(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwWindowSize(int width, int height) function, expected prototype:\nint TwWindowSize(int width, int height)\nClass arguments details:\n");
	}

	int width=(int)lua_tointeger(L,1);
	int height=(int)lua_tointeger(L,2);

	int lret = TwWindowSize(width, height);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwSetCurrentWindow(int windowID)
static int _bind_TwSetCurrentWindow(lua_State *L) {
	if (!_lg_typecheck_TwSetCurrentWindow(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwSetCurrentWindow(int windowID) function, expected prototype:\nint TwSetCurrentWindow(int windowID)\nClass arguments details:\n");
	}

	int windowID=(int)lua_tointeger(L,1);

	int lret = TwSetCurrentWindow(windowID);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwGetCurrentWindow()
static int _bind_TwGetCurrentWindow(lua_State *L) {
	if (!_lg_typecheck_TwGetCurrentWindow(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwGetCurrentWindow() function, expected prototype:\nint TwGetCurrentWindow()\nClass arguments details:\n");
	}


	int lret = TwGetCurrentWindow();
	lua_pushnumber(L,lret);

	return 1;
}

// int TwWindowExists(int windowID)
static int _bind_TwWindowExists(lua_State *L) {
	if (!_lg_typecheck_TwWindowExists(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwWindowExists(int windowID) function, expected prototype:\nint TwWindowExists(int windowID)\nClass arguments details:\n");
	}

	int windowID=(int)lua_tointeger(L,1);

	int lret = TwWindowExists(windowID);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwKeyPressed(int key, int modifiers)
static int _bind_TwKeyPressed(lua_State *L) {
	if (!_lg_typecheck_TwKeyPressed(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwKeyPressed(int key, int modifiers) function, expected prototype:\nint TwKeyPressed(int key, int modifiers)\nClass arguments details:\n");
	}

	int key=(int)lua_tointeger(L,1);
	int modifiers=(int)lua_tointeger(L,2);

	int lret = TwKeyPressed(key, modifiers);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwKeyTest(int key, int modifiers)
static int _bind_TwKeyTest(lua_State *L) {
	if (!_lg_typecheck_TwKeyTest(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwKeyTest(int key, int modifiers) function, expected prototype:\nint TwKeyTest(int key, int modifiers)\nClass arguments details:\n");
	}

	int key=(int)lua_tointeger(L,1);
	int modifiers=(int)lua_tointeger(L,2);

	int lret = TwKeyTest(key, modifiers);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwMouseButton(enum ETwMouseAction action, enum ETwMouseButtonID button)
static int _bind_TwMouseButton(lua_State *L) {
	if (!_lg_typecheck_TwMouseButton(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwMouseButton(enum ETwMouseAction action, enum ETwMouseButtonID button) function, expected prototype:\nint TwMouseButton(enum ETwMouseAction action, enum ETwMouseButtonID button)\nClass arguments details:\n");
	}

	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwMouseAction' baseTypeName is 'enum '
	////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////
	// ERROR: Cannot decide the argument type for 'enum ETwMouseButtonID' baseTypeName is 'enum '
	////////////////////////////////////////////////////////////////////

	int lret = TwMouseButton(action, button);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwMouseMotion(int mouseX, int mouseY)
static int _bind_TwMouseMotion(lua_State *L) {
	if (!_lg_typecheck_TwMouseMotion(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwMouseMotion(int mouseX, int mouseY) function, expected prototype:\nint TwMouseMotion(int mouseX, int mouseY)\nClass arguments details:\n");
	}

	int mouseX=(int)lua_tointeger(L,1);
	int mouseY=(int)lua_tointeger(L,2);

	int lret = TwMouseMotion(mouseX, mouseY);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwMouseWheel(int pos)
static int _bind_TwMouseWheel(lua_State *L) {
	if (!_lg_typecheck_TwMouseWheel(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwMouseWheel(int pos) function, expected prototype:\nint TwMouseWheel(int pos)\nClass arguments details:\n");
	}

	int pos=(int)lua_tointeger(L,1);

	int lret = TwMouseWheel(pos);
	lua_pushnumber(L,lret);

	return 1;
}

// const char * TwGetLastError()
static int _bind_TwGetLastError(lua_State *L) {
	if (!_lg_typecheck_TwGetLastError(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * TwGetLastError() function, expected prototype:\nconst char * TwGetLastError()\nClass arguments details:\n");
	}


	const char * lret = TwGetLastError();
	lua_pushstring(L,lret);

	return 1;
}

// int TwEventWin(void * wnd, unsigned int msg, unsigned int wParam, int lParam)
static int _bind_TwEventWin(lua_State *L) {
	if (!_lg_typecheck_TwEventWin(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwEventWin(void * wnd, unsigned int msg, unsigned int wParam, int lParam) function, expected prototype:\nint TwEventWin(void * wnd, unsigned int msg, unsigned int wParam, int lParam)\nClass arguments details:\n");
	}

	void* wnd=(Luna< void >::check(L,1));
	unsigned int msg=(unsigned int)lua_tointeger(L,2);
	unsigned int wParam=(unsigned int)lua_tointeger(L,3);
	int lParam=(int)lua_tointeger(L,4);

	int lret = TwEventWin(wnd, msg, wParam, lParam);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwEventSDL(const void * sdlEvent, unsigned char sdlMajorVersion, unsigned char sdlMinorVersion)
static int _bind_TwEventSDL(lua_State *L) {
	if (!_lg_typecheck_TwEventSDL(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwEventSDL(const void * sdlEvent, unsigned char sdlMajorVersion, unsigned char sdlMinorVersion) function, expected prototype:\nint TwEventSDL(const void * sdlEvent, unsigned char sdlMajorVersion, unsigned char sdlMinorVersion)\nClass arguments details:\n");
	}

	void* sdlEvent=(Luna< void >::check(L,1));
	unsigned char sdlMajorVersion = (unsigned char)(lua_tointeger(L,2));
	unsigned char sdlMinorVersion = (unsigned char)(lua_tointeger(L,3));

	int lret = TwEventSDL(sdlEvent, sdlMajorVersion, sdlMinorVersion);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwEventMouseButtonGLFW(int glfwButton, int glfwAction)
static int _bind_TwEventMouseButtonGLFW(lua_State *L) {
	if (!_lg_typecheck_TwEventMouseButtonGLFW(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwEventMouseButtonGLFW(int glfwButton, int glfwAction) function, expected prototype:\nint TwEventMouseButtonGLFW(int glfwButton, int glfwAction)\nClass arguments details:\n");
	}

	int glfwButton=(int)lua_tointeger(L,1);
	int glfwAction=(int)lua_tointeger(L,2);

	int lret = TwEventMouseButtonGLFW(glfwButton, glfwAction);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwEventKeyGLFW(int glfwKey, int glfwAction)
static int _bind_TwEventKeyGLFW(lua_State *L) {
	if (!_lg_typecheck_TwEventKeyGLFW(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwEventKeyGLFW(int glfwKey, int glfwAction) function, expected prototype:\nint TwEventKeyGLFW(int glfwKey, int glfwAction)\nClass arguments details:\n");
	}

	int glfwKey=(int)lua_tointeger(L,1);
	int glfwAction=(int)lua_tointeger(L,2);

	int lret = TwEventKeyGLFW(glfwKey, glfwAction);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwEventCharGLFW(int glfwChar, int glfwAction)
static int _bind_TwEventCharGLFW(lua_State *L) {
	if (!_lg_typecheck_TwEventCharGLFW(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwEventCharGLFW(int glfwChar, int glfwAction) function, expected prototype:\nint TwEventCharGLFW(int glfwChar, int glfwAction)\nClass arguments details:\n");
	}

	int glfwChar=(int)lua_tointeger(L,1);
	int glfwAction=(int)lua_tointeger(L,2);

	int lret = TwEventCharGLFW(glfwChar, glfwAction);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwEventMouseButtonGLUT(int glutButton, int glutState, int mouseX, int mouseY)
static int _bind_TwEventMouseButtonGLUT(lua_State *L) {
	if (!_lg_typecheck_TwEventMouseButtonGLUT(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwEventMouseButtonGLUT(int glutButton, int glutState, int mouseX, int mouseY) function, expected prototype:\nint TwEventMouseButtonGLUT(int glutButton, int glutState, int mouseX, int mouseY)\nClass arguments details:\n");
	}

	int glutButton=(int)lua_tointeger(L,1);
	int glutState=(int)lua_tointeger(L,2);
	int mouseX=(int)lua_tointeger(L,3);
	int mouseY=(int)lua_tointeger(L,4);

	int lret = TwEventMouseButtonGLUT(glutButton, glutState, mouseX, mouseY);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwEventMouseMotionGLUT(int mouseX, int mouseY)
static int _bind_TwEventMouseMotionGLUT(lua_State *L) {
	if (!_lg_typecheck_TwEventMouseMotionGLUT(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwEventMouseMotionGLUT(int mouseX, int mouseY) function, expected prototype:\nint TwEventMouseMotionGLUT(int mouseX, int mouseY)\nClass arguments details:\n");
	}

	int mouseX=(int)lua_tointeger(L,1);
	int mouseY=(int)lua_tointeger(L,2);

	int lret = TwEventMouseMotionGLUT(mouseX, mouseY);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwEventKeyboardGLUT(unsigned char glutKey, int mouseX, int mouseY)
static int _bind_TwEventKeyboardGLUT(lua_State *L) {
	if (!_lg_typecheck_TwEventKeyboardGLUT(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwEventKeyboardGLUT(unsigned char glutKey, int mouseX, int mouseY) function, expected prototype:\nint TwEventKeyboardGLUT(unsigned char glutKey, int mouseX, int mouseY)\nClass arguments details:\n");
	}

	unsigned char glutKey = (unsigned char)(lua_tointeger(L,1));
	int mouseX=(int)lua_tointeger(L,2);
	int mouseY=(int)lua_tointeger(L,3);

	int lret = TwEventKeyboardGLUT(glutKey, mouseX, mouseY);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwEventSpecialGLUT(int glutKey, int mouseX, int mouseY)
static int _bind_TwEventSpecialGLUT(lua_State *L) {
	if (!_lg_typecheck_TwEventSpecialGLUT(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwEventSpecialGLUT(int glutKey, int mouseX, int mouseY) function, expected prototype:\nint TwEventSpecialGLUT(int glutKey, int mouseX, int mouseY)\nClass arguments details:\n");
	}

	int glutKey=(int)lua_tointeger(L,1);
	int mouseX=(int)lua_tointeger(L,2);
	int mouseY=(int)lua_tointeger(L,3);

	int lret = TwEventSpecialGLUT(glutKey, mouseX, mouseY);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwEventSFML(const void * sfmlEvent, unsigned char sfmlMajorVersion, unsigned char sfmlMinorVersion)
static int _bind_TwEventSFML(lua_State *L) {
	if (!_lg_typecheck_TwEventSFML(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwEventSFML(const void * sfmlEvent, unsigned char sfmlMajorVersion, unsigned char sfmlMinorVersion) function, expected prototype:\nint TwEventSFML(const void * sfmlEvent, unsigned char sfmlMajorVersion, unsigned char sfmlMinorVersion)\nClass arguments details:\n");
	}

	void* sfmlEvent=(Luna< void >::check(L,1));
	unsigned char sfmlMajorVersion = (unsigned char)(lua_tointeger(L,2));
	unsigned char sfmlMinorVersion = (unsigned char)(lua_tointeger(L,3));

	int lret = TwEventSFML(sfmlEvent, sfmlMajorVersion, sfmlMinorVersion);
	lua_pushnumber(L,lret);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"atb");
	lua_pushcfunction(L, _bind_TwNewBar); lua_setfield(L,-2,"TwNewBar");
	lua_pushcfunction(L, _bind_TwDeleteBar); lua_setfield(L,-2,"TwDeleteBar");
	lua_pushcfunction(L, _bind_TwDeleteAllBars); lua_setfield(L,-2,"TwDeleteAllBars");
	lua_pushcfunction(L, _bind_TwSetTopBar); lua_setfield(L,-2,"TwSetTopBar");
	lua_pushcfunction(L, _bind_TwGetTopBar); lua_setfield(L,-2,"TwGetTopBar");
	lua_pushcfunction(L, _bind_TwSetBottomBar); lua_setfield(L,-2,"TwSetBottomBar");
	lua_pushcfunction(L, _bind_TwGetBottomBar); lua_setfield(L,-2,"TwGetBottomBar");
	lua_pushcfunction(L, _bind_TwGetBarName); lua_setfield(L,-2,"TwGetBarName");
	lua_pushcfunction(L, _bind_TwGetBarCount); lua_setfield(L,-2,"TwGetBarCount");
	lua_pushcfunction(L, _bind_TwGetBarByIndex); lua_setfield(L,-2,"TwGetBarByIndex");
	lua_pushcfunction(L, _bind_TwGetBarByName); lua_setfield(L,-2,"TwGetBarByName");
	lua_pushcfunction(L, _bind_TwRefreshBar); lua_setfield(L,-2,"TwRefreshBar");
	lua_pushcfunction(L, _bind_TwAddVarRW); lua_setfield(L,-2,"TwAddVarRW");
	lua_pushcfunction(L, _bind_TwAddVarRO); lua_setfield(L,-2,"TwAddVarRO");
	lua_pushcfunction(L, _bind_TwAddSeparator); lua_setfield(L,-2,"TwAddSeparator");
	lua_pushcfunction(L, _bind_TwRemoveVar); lua_setfield(L,-2,"TwRemoveVar");
	lua_pushcfunction(L, _bind_TwRemoveAllVars); lua_setfield(L,-2,"TwRemoveAllVars");
	lua_pushcfunction(L, _bind_TwDefine); lua_setfield(L,-2,"TwDefine");
	lua_pushcfunction(L, _bind_TwDefineEnum); lua_setfield(L,-2,"TwDefineEnum");
	lua_pushcfunction(L, _bind_TwDefineEnumFromString); lua_setfield(L,-2,"TwDefineEnumFromString");
	lua_pushcfunction(L, _bind_TwGetParam); lua_setfield(L,-2,"TwGetParam");
	lua_pushcfunction(L, _bind_TwSetParam); lua_setfield(L,-2,"TwSetParam");
	lua_pushcfunction(L, _bind_TwInit); lua_setfield(L,-2,"TwInit");
	lua_pushcfunction(L, _bind_TwTerminate); lua_setfield(L,-2,"TwTerminate");
	lua_pushcfunction(L, _bind_TwDraw); lua_setfield(L,-2,"TwDraw");
	lua_pushcfunction(L, _bind_TwWindowSize); lua_setfield(L,-2,"TwWindowSize");
	lua_pushcfunction(L, _bind_TwSetCurrentWindow); lua_setfield(L,-2,"TwSetCurrentWindow");
	lua_pushcfunction(L, _bind_TwGetCurrentWindow); lua_setfield(L,-2,"TwGetCurrentWindow");
	lua_pushcfunction(L, _bind_TwWindowExists); lua_setfield(L,-2,"TwWindowExists");
	lua_pushcfunction(L, _bind_TwKeyPressed); lua_setfield(L,-2,"TwKeyPressed");
	lua_pushcfunction(L, _bind_TwKeyTest); lua_setfield(L,-2,"TwKeyTest");
	lua_pushcfunction(L, _bind_TwMouseButton); lua_setfield(L,-2,"TwMouseButton");
	lua_pushcfunction(L, _bind_TwMouseMotion); lua_setfield(L,-2,"TwMouseMotion");
	lua_pushcfunction(L, _bind_TwMouseWheel); lua_setfield(L,-2,"TwMouseWheel");
	lua_pushcfunction(L, _bind_TwGetLastError); lua_setfield(L,-2,"TwGetLastError");
	lua_pushcfunction(L, _bind_TwEventWin); lua_setfield(L,-2,"TwEventWin");
	lua_pushcfunction(L, _bind_TwEventSDL); lua_setfield(L,-2,"TwEventSDL");
	lua_pushcfunction(L, _bind_TwEventMouseButtonGLFW); lua_setfield(L,-2,"TwEventMouseButtonGLFW");
	lua_pushcfunction(L, _bind_TwEventKeyGLFW); lua_setfield(L,-2,"TwEventKeyGLFW");
	lua_pushcfunction(L, _bind_TwEventCharGLFW); lua_setfield(L,-2,"TwEventCharGLFW");
	lua_pushcfunction(L, _bind_TwEventMouseButtonGLUT); lua_setfield(L,-2,"TwEventMouseButtonGLUT");
	lua_pushcfunction(L, _bind_TwEventMouseMotionGLUT); lua_setfield(L,-2,"TwEventMouseMotionGLUT");
	lua_pushcfunction(L, _bind_TwEventKeyboardGLUT); lua_setfield(L,-2,"TwEventKeyboardGLUT");
	lua_pushcfunction(L, _bind_TwEventSpecialGLUT); lua_setfield(L,-2,"TwEventSpecialGLUT");
	lua_pushcfunction(L, _bind_TwEventSFML); lua_setfield(L,-2,"TwEventSFML");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

