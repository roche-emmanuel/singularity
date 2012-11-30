/*
 * LuaObject.cpp
 *
 *  Created on: 30 nov. 2012
 *      Author: kenshin
 */

#include "lua/LuaObject.h"

using namespace sgt;

bool LuaObject::pushFunction(String name) {
	CHECK_RET(pushLuaItem(),false,"Cannot push lua item when calling "<<name);

	CHECK_RET(lua_type(_state,-1)==LUA_TTABLE,false,"Invalid non table base for luaObject.");

	// table is on the stack:
	// retrieve the function by name:
	lua_pushstring(_state,name.c_str()); // pushing key
	lua_gettable(_state,-2);			 // pop key and push value.

	if(lua_type(_state,-1)!=LUA_TFUNCTION) {
		lua_pop(_state,2); // pop the non function value and this table.
		return false;
	}
	
	// Both table and function to call are on the stack:
	// move the table at the top of the stack:
	lua_pushvalue(_state,-2); // table is now at the top, function is just under.
	lua_remove(_state,-3); // remove the original copy of the table under the function.

	return true;
}
