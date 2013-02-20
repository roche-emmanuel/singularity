#include "plug_extensions.h"

#include <stdlib.h>
#include "base/Variant.h"

using namespace sgt;

sgt::Any luaToAny(lua_State* L, int index) {
	int ltype = lua_type(L,index);

	if(ltype == LUA_TNUMBER && lua_tointeger(L,index) == lua_tonumber(L,index)) { 		
		// this is an integer:
		int val = lua_tointeger(L,index);
		return sgt::Any(val);
	}
	else if(ltype == LUA_TNUMBER) {
		double val = lua_tonumber(L,index);
		return sgt::Any(val);
	}
	else if(ltype == LUA_TBOOLEAN) {
		int val = lua_toboolean(L,index);
		return sgt::Any(val==1);
	}
	else if(ltype == LUA_TSTRING) {
		std::string val = lua_tostring(L,index);
		return sgt::Any(val);
	}
	else if(ltype==LUA_TUSERDATA) {
		// userdata
		sgtReferencedBase* obj = Luna< sgtReferencedBase >::check(L,index);
		if(obj) {
			return sgt::Any(sgtRefPtr(obj));
		}
	}
	else { //(ltype==LUA_TTABLE || ltype==LUA_TFUNCTION || ltype==LUA_TTHREAD || ltype==LUA_TLIGHTUSERDATA) {
		luaL_error(L,"Invalid lua data type in luaToAny(), type=%d",ltype);
		return sgt::Any();
	}
};

int anyToLua(lua_State* L, const sgt::Any& val) {
	int type = val.getType();
	//logINFO("Retrieved any type is: "<<type);

	String str;

	switch(type) {
	case sgt::VARIANT_BOOL:
		lua_pushboolean(L,val.get<Bool>()?1:0);
		return 1;
	case sgt::VARIANT_DOUBLE:
		lua_pushnumber(L,val.get<Double>());
		return 1;
	case sgt::VARIANT_EMPTY:
		return 0;
	case sgt::VARIANT_INT32:
		lua_pushnumber(L,val.get<Int32>());
		return 1;
	case sgt::VARIANT_STRING:
		str = val.get<String>();
		lua_pushlstring(L,str.data(),str.size());
		return 1;
	default:
		luaL_error(L,"Invalid variant data type in luaToAny(), type=%d",type);
		break;
	}
	return 0;
};

int ptime_tostring(boost::posix_time::ptime* val, lua_State* L) {
	// convert the value to a string:
	std::string timestr = boost::posix_time::to_iso_extended_string(*val);
	lua_pushstring(L,timestr.c_str());
	return 1;
};

int vector_push_back(sgt::AnyVector* vec, lua_Any* dummy, lua_State* L) {
	sgt::Any val = luaToAny(L,2);
	
	vec->push_back(val);
	return 0;
};

int vector_get(sgt::AnyVector* vec, unsigned int index, lua_State* L) {
	if(index>=vec->size()) {
		luaL_error(L,"out of range access in vector_get() index=%d, vec_size=%d",index,vec->size());
		return 0;
	}

	//logINFO("Retrieving vector item at index="<<index);
	return anyToLua(L,vec->at(index));	
}

int map_get(std::map< std::string, int >* data, const std::string& id) {
	std::map< std::string, int >::iterator it = data->find(id);
	if(it != data->end())
		return it->second;
	return 0;
}


unsigned int map_uint_get(std::map< std::string, unsigned int >* data, const std::string& id) {
	std::map< std::string, unsigned int >::iterator it = data->find(id);
	if(it != data->end())
		return it->second;
	return 0;
}

void setEnv(const std::string& var, const std::string& value) {
#ifdef WIN32
	// SetEnvironmentVariable(var.c_str(),value.c_str());
	std::string str = var + "=" + value;
	_putenv(str.c_str());
#else
	std::string str = var + "=" + value;
	putenv((char*)str.c_str());
#endif
};

void* fromLightUserdata(lua_Any* dum, lua_State* L) {
	// Check if we have a light userdata:
	CHECK_RET(lua_islightuserdata(L,1)==1,NULL,"Invalid light user data. Type is:"<<lua_typename(L,lua_type(L,1)));
	
	return lua_touserdata(L,1);
};

int toLightUserdata(void* obj, lua_State* L) {
	if(!obj)
		return 0;
		
	lua_pushlightuserdata(L,obj);
	return 1;
};



