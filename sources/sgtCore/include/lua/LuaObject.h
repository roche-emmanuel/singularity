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
		THROW_IF(lua_type(_state,index)!=LUA_TTABLE,"Invalid non table base for luaObject, type is: "<<lua_type(_state,index));

		// remove from stack:
		lua_pop(_state,1);
		
		reset();
	}

	inline lua_State* getState() {
		return _state;
	}

	inline void reset() const {
		_nargs = 1;
	}

	inline void incrementNArgs() {
		++_nargs;
	}

	virtual ~LuaObject() {
	};

	// Will push the function and table on the stack if found and return true in that case.
	// returns false otherwise.
	bool pushFunction(String name) const;

	template <typename ArgType>
	void pushArg(ArgType arg) const {
		++_nargs;
		sgt::pushValue(_state,arg);
	};

	template < typename ResultType>
	ResultType callFunction() const {
		lua_call(_state,_nargs,1);
		reset();

		ResultType res = sgt::getValue<ResultType>(_state,-1);
		lua_pop(_state,1);
		return res;
	}

	template <>
	void callFunction() const {
		lua_call(_state,_nargs,0);
		reset();
	}
};

template <typename ArgType>
void pushValue(lua_State* L, ArgType* arg) {
	Luna< ArgType >::push(L,arg,false);
};

template <typename ArgType>
void pushValue(lua_State* L, const ArgType* arg) {
	Luna< ArgType >::push(L,arg,false);
};

template <typename ArgType>
void pushValue(lua_State* L, const osg::ref_ptr<ArgType>* arg) {
	Luna< ArgType >::push(L,arg->get(),false);
};

template <typename ArgType>
void pushValue(lua_State* L, const osg::observer_ptr<ArgType>* arg) {
	Luna< ArgType >::push(L,arg->get(),false);
};

template <typename ArgType>
void pushValue(lua_State* L, const osg::ref_ptr<ArgType>& arg) {
	Luna< ArgType >::push(L,arg.get(),false);
};

template <typename ArgType>
void pushValue(lua_State* L,const osg::observer_ptr<ArgType>& arg) {
	Luna< ArgType >::push(L,arg.get(),false);
};

inline void pushValue(lua_State* L, bool arg) {
	lua_pushboolean(L,arg?1:0);
}

inline void pushValue(lua_State* L, char arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, unsigned char arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, short arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, unsigned short arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, long arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, int arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, unsigned long arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, unsigned int arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, long long arg) {
	logWARN("LuaObject: pushing long long as integer.");
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, unsigned long long arg) {
	logWARN("LuaObject: pushing unsigned long long as integer.");
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, float arg) {
	lua_pushnumber(L,arg);
}

inline void pushValue(lua_State* L, double arg) {
	lua_pushnumber(L,arg);
}

//template <>
inline void pushValue(lua_State* L, unsigned int * arg) {
	lua_pushnil(L);
	//Luna< void >::push(L,(void*)arg,false);
}

//template <>
inline void pushValue(lua_State* L, long * arg) {
	lua_pushnil(L);
	//Luna< void >::push(L,(void*)arg,false);
}

//template <>
inline void pushValue(lua_State* L, bool * arg) {
	lua_pushnil(L);
	//Luna< void >::push(L,(void*)arg,false);
}

inline void pushValue(lua_State* L, char* arg) {
	lua_pushstring(L,arg);
}

inline void pushValue(lua_State* L, const char* arg) {
	lua_pushstring(L,arg);
}

inline void pushValue(lua_State* L, const String& arg) {
	lua_pushlstring(L,arg.data(),arg.size());
}

template < typename ResultType>
inline ResultType getValue(lua_State* L, int index) {
	typedef typename remove_pointer<ResultType>::type RealType;
	
	// Retrieve the result from the stack:
	return (Luna< RealType >::check(L,index));
};

template <>
inline int getValue(lua_State* L, int index) {
	return lua_tointeger(L,index);
}


/*template <>
inline char getValue(lua_State* L, int index) {
	return lua_tointeger(L,index);
}*/

template <>
inline char getValue(lua_State* L, int index) {
	return (char)lua_tointeger(L,index);
}

template <>
inline long getValue(lua_State* L, int index) {
	return lua_tointeger(L,index);
}

template <>
inline unsigned int getValue(lua_State* L, int index) {
	return (unsigned int)lua_tointeger(L,index);
}

template <>
inline unsigned char getValue(lua_State* L, int index) {
	return (unsigned char)lua_tointeger(L,index);
}

template <>
inline long long getValue(lua_State* L, int index) {
	return (long long)lua_tonumber(L,index);
}

template <>
inline bool getValue(lua_State* L, int index) {
	return lua_toboolean(L,index)==1;
}

template <>
inline double getValue(lua_State* L, int index) {
	return lua_tonumber(L,index);
}

template <>
inline float getValue(lua_State* L, int index) {
	return (float)lua_tonumber(L,index);
}

template <>
inline String getValue(lua_State* L, int index) {
	return String(lua_tostring(L,index));
}

template <>
inline const char* getValue(lua_State* L, int index) {
	return lua_tostring(L,index);
}

};


#endif /* LUAOBJECT_H_ */
