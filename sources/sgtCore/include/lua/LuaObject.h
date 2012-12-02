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

template<typename T>
struct remove_pointer
{
	typedef T type;
};

template<typename T>
struct remove_pointer<T*>
{
	typedef typename remove_pointer<T>::type type;
};


class SGTCORE_EXPORT LuaObject : public sgt::LuaRef {
protected:
	mutable int _nargs;

public:
	LuaObject(lua_State* L, int index) : LuaRef(L,index) {
		THROW_IF(!pushLuaItem(),"Cannot push lua item.");

		// ensure this object is a table:
		THROW_IF(lua_type(_state,-1)!=LUA_TTABLE,"Invalid non table base for luaObject.");

		// remove from stack:
		lua_pop(_state,1);
		
		reset();
	}

	void reset() const {
		_nargs = 0;
	}

	virtual ~LuaObject() {
	};

	// Will push the function and table on the stack if found and return true in that case.
	// returns false otherwise.
	bool pushFunction(String name) const;

	template <typename ArgType>
	void pushArg(ArgType* arg) const {
		++_nargs;
		Luna< ArgType >::push(_state,arg,false);
	};

	template <typename ArgType>
	void pushArg(const ArgType* arg) const {
		++_nargs;
		Luna< ArgType >::push(_state,arg,false);
	};

	void pushArg(bool arg) const {
		++_nargs;
		lua_pushboolean(_state,arg?1:0);
	}

	void pushArg(int arg) const {
		++_nargs;
		lua_pushinteger(_state,arg);
	}

	void pushArg(unsigned int arg) const {
		++_nargs;
		lua_pushinteger(_state,arg);
	}

	void pushArg(long long arg) const {
		++_nargs;
		lua_pushinteger(_state,arg);
	}

	void pushArg(double arg) const {
		++_nargs;
		lua_pushnumber(_state,arg);
	}

	void pushArg(const String& arg) const {
		++_nargs;
		lua_pushlstring(_state,arg.data(),arg.size());
	}

	/*template < typename ResultType >
	ResultType callFunction() {
		THROW_IF(false,"this call is not implemented.");
	}*/

	template < typename ResultType>
	ResultType callFunction() const {
		typedef typename remove_pointer<ResultType>::type RealType;

		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		RealType* res =(Luna< RealType >::check(_state,-1));
		lua_pop(_state,1);
		return res;
	}

	template <>
	void callFunction() const {
		lua_call(_state,_nargs,0);
		reset();
	}

	template <>
	int callFunction() const {
		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		int res = lua_tointeger(_state,-1);
		lua_pop(_state,1);
		return res;
	}

	template <>
	unsigned int callFunction() const {
		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		unsigned int res = (unsigned int)lua_tointeger(_state,-1);
		lua_pop(_state,1);
		return res;
	}

	template <>
	long long callFunction() const {
		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		long long res = (long long)lua_tonumber(_state,-1);
		lua_pop(_state,1);
		return res;
	}

	template <>
	bool callFunction() const {
		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		bool res = lua_toboolean(_state,-1)==1;
		lua_pop(_state,1);
		return res;
	}

	template <>
	double callFunction() const {
		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		double res = lua_tonumber(_state,-1);
		lua_pop(_state,1);
		return res;
	}

	template <>
	String callFunction() const {
		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		String res = lua_tostring(_state,-1);
		lua_pop(_state,1);
		return res;
	}

	template <>
	const char* callFunction() const {
		lua_call(_state,_nargs,1);
		reset();

		// Retrieve the result from the stack:
		String res = lua_tostring(_state,-1);
		lua_pop(_state,1);
		return res.c_str();
	}
};

};


#endif /* LUAOBJECT_H_ */
