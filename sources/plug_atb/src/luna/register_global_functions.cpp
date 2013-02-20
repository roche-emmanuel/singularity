#include <plug_common.h>

#include <AntTweakBar.h>
#include <plug_extensions.h>

// Function checkers:
inline static bool _lg_typecheck_TwNewBar(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwDeleteBar(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwDeleteAllBars(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_TwSetTopBar(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwGetTopBar(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_TwSetBottomBar(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwGetBottomBar(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

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

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwAddSeparator(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwRemoveVar(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwRemoveAllVars(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
	return true;
}

inline static bool _lg_typecheck_TwDefine(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwDefineEnumFromString(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_TwInit(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

inline static bool _lg_typecheck_setupErrorHandler(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_setupStringCopy(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// TwBar * TwNewBar(const char * barName)
static int _bind_TwNewBar(lua_State *L) {
	if (!_lg_typecheck_TwNewBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in TwBar * TwNewBar(const char * barName) function, expected prototype:\nTwBar * TwNewBar(const char * barName)\nClass arguments details:\n");
	}

	const char * barName=(const char *)lua_tostring(L,1);

	TwBar * lret = ::TwNewBar(barName);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< TwBar >::push(L,lret,false);

	return 1;
}

// int TwDeleteBar(TwBar * bar)
static int _bind_TwDeleteBar(lua_State *L) {
	if (!_lg_typecheck_TwDeleteBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwDeleteBar(TwBar * bar) function, expected prototype:\nint TwDeleteBar(TwBar * bar)\nClass arguments details:\narg 1 ID = 81187440\n");
	}

	TwBar* bar=(Luna< TwBar >::check(L,1));

	int lret = ::TwDeleteBar(bar);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwDeleteAllBars()
static int _bind_TwDeleteAllBars(lua_State *L) {
	if (!_lg_typecheck_TwDeleteAllBars(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwDeleteAllBars() function, expected prototype:\nint TwDeleteAllBars()\nClass arguments details:\n");
	}


	int lret = ::TwDeleteAllBars();
	lua_pushnumber(L,lret);

	return 1;
}

// int TwSetTopBar(const TwBar * bar)
static int _bind_TwSetTopBar(lua_State *L) {
	if (!_lg_typecheck_TwSetTopBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwSetTopBar(const TwBar * bar) function, expected prototype:\nint TwSetTopBar(const TwBar * bar)\nClass arguments details:\narg 1 ID = 81187440\n");
	}

	const TwBar* bar=(Luna< TwBar >::check(L,1));

	int lret = ::TwSetTopBar(bar);
	lua_pushnumber(L,lret);

	return 1;
}

// TwBar * TwGetTopBar()
static int _bind_TwGetTopBar(lua_State *L) {
	if (!_lg_typecheck_TwGetTopBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in TwBar * TwGetTopBar() function, expected prototype:\nTwBar * TwGetTopBar()\nClass arguments details:\n");
	}


	TwBar * lret = ::TwGetTopBar();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< TwBar >::push(L,lret,false);

	return 1;
}

// int TwSetBottomBar(const TwBar * bar)
static int _bind_TwSetBottomBar(lua_State *L) {
	if (!_lg_typecheck_TwSetBottomBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwSetBottomBar(const TwBar * bar) function, expected prototype:\nint TwSetBottomBar(const TwBar * bar)\nClass arguments details:\narg 1 ID = 81187440\n");
	}

	const TwBar* bar=(Luna< TwBar >::check(L,1));

	int lret = ::TwSetBottomBar(bar);
	lua_pushnumber(L,lret);

	return 1;
}

// TwBar * TwGetBottomBar()
static int _bind_TwGetBottomBar(lua_State *L) {
	if (!_lg_typecheck_TwGetBottomBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in TwBar * TwGetBottomBar() function, expected prototype:\nTwBar * TwGetBottomBar()\nClass arguments details:\n");
	}


	TwBar * lret = ::TwGetBottomBar();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< TwBar >::push(L,lret,false);

	return 1;
}

// int TwGetBarCount()
static int _bind_TwGetBarCount(lua_State *L) {
	if (!_lg_typecheck_TwGetBarCount(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwGetBarCount() function, expected prototype:\nint TwGetBarCount()\nClass arguments details:\n");
	}


	int lret = ::TwGetBarCount();
	lua_pushnumber(L,lret);

	return 1;
}

// TwBar * TwGetBarByIndex(int barIndex)
static int _bind_TwGetBarByIndex(lua_State *L) {
	if (!_lg_typecheck_TwGetBarByIndex(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in TwBar * TwGetBarByIndex(int barIndex) function, expected prototype:\nTwBar * TwGetBarByIndex(int barIndex)\nClass arguments details:\n");
	}

	int barIndex=(int)lua_tointeger(L,1);

	TwBar * lret = ::TwGetBarByIndex(barIndex);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< TwBar >::push(L,lret,false);

	return 1;
}

// TwBar * TwGetBarByName(const char * barName)
static int _bind_TwGetBarByName(lua_State *L) {
	if (!_lg_typecheck_TwGetBarByName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in TwBar * TwGetBarByName(const char * barName) function, expected prototype:\nTwBar * TwGetBarByName(const char * barName)\nClass arguments details:\n");
	}

	const char * barName=(const char *)lua_tostring(L,1);

	TwBar * lret = ::TwGetBarByName(barName);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< TwBar >::push(L,lret,false);

	return 1;
}

// int TwRefreshBar(TwBar * bar)
static int _bind_TwRefreshBar(lua_State *L) {
	if (!_lg_typecheck_TwRefreshBar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwRefreshBar(TwBar * bar) function, expected prototype:\nint TwRefreshBar(TwBar * bar)\nClass arguments details:\narg 1 ID = 81187440\n");
	}

	TwBar* bar=(Luna< TwBar >::check(L,1));

	int lret = ::TwRefreshBar(bar);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwAddSeparator(TwBar * bar, const char * name, const char * def)
static int _bind_TwAddSeparator(lua_State *L) {
	if (!_lg_typecheck_TwAddSeparator(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwAddSeparator(TwBar * bar, const char * name, const char * def) function, expected prototype:\nint TwAddSeparator(TwBar * bar, const char * name, const char * def)\nClass arguments details:\narg 1 ID = 81187440\n");
	}

	TwBar* bar=(Luna< TwBar >::check(L,1));
	const char * name=(const char *)lua_tostring(L,2);
	const char * def=(const char *)lua_tostring(L,3);

	int lret = ::TwAddSeparator(bar, name, def);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwRemoveVar(TwBar * bar, const char * name)
static int _bind_TwRemoveVar(lua_State *L) {
	if (!_lg_typecheck_TwRemoveVar(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwRemoveVar(TwBar * bar, const char * name) function, expected prototype:\nint TwRemoveVar(TwBar * bar, const char * name)\nClass arguments details:\narg 1 ID = 81187440\n");
	}

	TwBar* bar=(Luna< TwBar >::check(L,1));
	const char * name=(const char *)lua_tostring(L,2);

	int lret = ::TwRemoveVar(bar, name);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwRemoveAllVars(TwBar * bar)
static int _bind_TwRemoveAllVars(lua_State *L) {
	if (!_lg_typecheck_TwRemoveAllVars(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwRemoveAllVars(TwBar * bar) function, expected prototype:\nint TwRemoveAllVars(TwBar * bar)\nClass arguments details:\narg 1 ID = 81187440\n");
	}

	TwBar* bar=(Luna< TwBar >::check(L,1));

	int lret = ::TwRemoveAllVars(bar);
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

	int lret = ::TwDefine(def);
	lua_pushnumber(L,lret);

	return 1;
}

// TwType TwDefineEnumFromString(const char * name, const char * enumString)
static int _bind_TwDefineEnumFromString(lua_State *L) {
	if (!_lg_typecheck_TwDefineEnumFromString(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in TwType TwDefineEnumFromString(const char * name, const char * enumString) function, expected prototype:\nTwType TwDefineEnumFromString(const char * name, const char * enumString)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	const char * enumString=(const char *)lua_tostring(L,2);

	TwType lret = ::TwDefineEnumFromString(name, enumString);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwInit(TwGraphAPI graphAPI, void * device)
static int _bind_TwInit(lua_State *L) {
	if (!_lg_typecheck_TwInit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwInit(TwGraphAPI graphAPI, void * device) function, expected prototype:\nint TwInit(TwGraphAPI graphAPI, void * device)\nClass arguments details:\n");
	}

	TwGraphAPI graphAPI=(TwGraphAPI)lua_tointeger(L,1);
	void* device=(Luna< void >::check(L,2));

	int lret = ::TwInit(graphAPI, device);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwTerminate()
static int _bind_TwTerminate(lua_State *L) {
	if (!_lg_typecheck_TwTerminate(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwTerminate() function, expected prototype:\nint TwTerminate()\nClass arguments details:\n");
	}


	int lret = ::TwTerminate();
	lua_pushnumber(L,lret);

	return 1;
}

// int TwDraw()
static int _bind_TwDraw(lua_State *L) {
	if (!_lg_typecheck_TwDraw(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwDraw() function, expected prototype:\nint TwDraw()\nClass arguments details:\n");
	}


	int lret = ::TwDraw();
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

	int lret = ::TwWindowSize(width, height);
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

	int lret = ::TwSetCurrentWindow(windowID);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwGetCurrentWindow()
static int _bind_TwGetCurrentWindow(lua_State *L) {
	if (!_lg_typecheck_TwGetCurrentWindow(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwGetCurrentWindow() function, expected prototype:\nint TwGetCurrentWindow()\nClass arguments details:\n");
	}


	int lret = ::TwGetCurrentWindow();
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

	int lret = ::TwWindowExists(windowID);
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

	int lret = ::TwKeyPressed(key, modifiers);
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

	int lret = ::TwKeyTest(key, modifiers);
	lua_pushnumber(L,lret);

	return 1;
}

// int TwMouseButton(TwMouseAction action, TwMouseButtonID button)
static int _bind_TwMouseButton(lua_State *L) {
	if (!_lg_typecheck_TwMouseButton(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int TwMouseButton(TwMouseAction action, TwMouseButtonID button) function, expected prototype:\nint TwMouseButton(TwMouseAction action, TwMouseButtonID button)\nClass arguments details:\n");
	}

	TwMouseAction action=(TwMouseAction)lua_tointeger(L,1);
	TwMouseButtonID button=(TwMouseButtonID)lua_tointeger(L,2);

	int lret = ::TwMouseButton(action, button);
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

	int lret = ::TwMouseMotion(mouseX, mouseY);
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

	int lret = ::TwMouseWheel(pos);
	lua_pushnumber(L,lret);

	return 1;
}

// const char * TwGetLastError()
static int _bind_TwGetLastError(lua_State *L) {
	if (!_lg_typecheck_TwGetLastError(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * TwGetLastError() function, expected prototype:\nconst char * TwGetLastError()\nClass arguments details:\n");
	}


	const char * lret = ::TwGetLastError();
	lua_pushstring(L,lret);

	return 1;
}

// void setupErrorHandler()
static int _bind_setupErrorHandler(lua_State *L) {
	if (!_lg_typecheck_setupErrorHandler(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void setupErrorHandler() function, expected prototype:\nvoid setupErrorHandler()\nClass arguments details:\n");
	}


	::setupErrorHandler();

	return 0;
}

// void setupStringCopy()
static int _bind_setupStringCopy(lua_State *L) {
	if (!_lg_typecheck_setupStringCopy(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void setupStringCopy() function, expected prototype:\nvoid setupStringCopy()\nClass arguments details:\n");
	}


	::setupStringCopy();

	return 0;
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
	lua_pushcfunction(L, _bind_TwGetBarCount); lua_setfield(L,-2,"TwGetBarCount");
	lua_pushcfunction(L, _bind_TwGetBarByIndex); lua_setfield(L,-2,"TwGetBarByIndex");
	lua_pushcfunction(L, _bind_TwGetBarByName); lua_setfield(L,-2,"TwGetBarByName");
	lua_pushcfunction(L, _bind_TwRefreshBar); lua_setfield(L,-2,"TwRefreshBar");
	lua_pushcfunction(L, _bind_TwAddSeparator); lua_setfield(L,-2,"TwAddSeparator");
	lua_pushcfunction(L, _bind_TwRemoveVar); lua_setfield(L,-2,"TwRemoveVar");
	lua_pushcfunction(L, _bind_TwRemoveAllVars); lua_setfield(L,-2,"TwRemoveAllVars");
	lua_pushcfunction(L, _bind_TwDefine); lua_setfield(L,-2,"TwDefine");
	lua_pushcfunction(L, _bind_TwDefineEnumFromString); lua_setfield(L,-2,"TwDefineEnumFromString");
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
	lua_pushcfunction(L, _bind_setupErrorHandler); lua_setfield(L,-2,"setupErrorHandler");
	lua_pushcfunction(L, _bind_setupStringCopy); lua_setfield(L,-2,"setupStringCopy");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

