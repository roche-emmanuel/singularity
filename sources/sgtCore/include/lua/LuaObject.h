/*
 * LuaObject.h
 *
 *  Created on: 30 nov. 2012
 *      Author: kenshin
 */

#ifndef LUAOBJECT_H_
#define LUAOBJECT_H_

#include "sgtCommon.h"
#include "lua/LuaRef.h"

namespace sgt {

class LuaObject : public sgt::LuaRef {
protected:
	int _nargs;

public:
	LuaObject(lua_State* L, int index) : LuaRef(L,index) {
		THROW_IF(!pushLuaItem(),"Cannot push lua item.");

		// ensure this object is a table:
		THROW_IF(lua_type(_state,-1)!=LUA_TTABLE,"Invalid non table base for luaObject.");

		// remove from stack:
		lua_pop(_state,1);
		
		reset();
	}

	void reset() {
		_nargs = 0;
	}

	virtual ~LuaObject() {
	};

	// Will push the function and table on the stack if found and return true in that case.
	// returns false otherwise.
	bool pushFunction(String name);

	template <typename ArgType>
	void pushArg(ArgType* arg) {
		++_nargs;
		Luna< ArgType >::push(_state,arg,false);
	};

	void pushArg(int arg) {
		++_nargs;
		lua_pushinteger(_state,arg);
	}

	void pushArg(double arg) {
		++_nargs;
		lua_pushnumber(_state,arg);
	}

	void pushArg(String arg) {
		++_nargs;
		lua_pushlstring(_state,arg.data(),arg.size());
	}

	template < typename ResultType >
	ResultType callFunction() {
		THROW_IF(false,"This call is not implemented.");
	}

	template < typename ResultType >
	ResultType* callFunction() {
		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		ResultType* res =(Luna< ResultType >::check(_state,-1));
		lua_pop(_state,1);
		return res;
	}

	template <>
	int callFunction() {
		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		int res = lua_tointeger(_state,-1);
		lua_pop(_state,1);
		return res;
	}

	template <>
	double callFunction() {
		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		double res = lua_tonumber(_state,-1);
		lua_pop(_state,1);
		return res;
	}

	template <>
	String callFunction() {
		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		String res = lua_tostring(_state,-1);
		lua_pop(_state,1);
		return res;
	}
};

};


#endif /* LUAOBJECT_H_ */
