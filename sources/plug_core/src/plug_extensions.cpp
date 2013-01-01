#include "plug_extensions.h"

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

/*
int datamap_get(sgt::DataMap* dmap, String& name, lua_Any* dummy, lua_State* L) {
	// if there is already a value push it:
	int result = datamap_get(dmap,name,L);
	if(result>0)
		return result;
		
	// value not found, assign default:
	int index = 3;

	int ltype = lua_type(L,index);
	if(ltype == LUA_TNIL) {
		return 0; // nothing to save.
	}
	else if(ltype==LUA_TNUMBER && lua_tointeger(L,index) == lua_tonumber(L,index)) {
		// this is an integer:
		int val = lua_tointeger(L,index);
		dmap->setAny(name,val);
		lua_pushnumber(L,val);
		return 1;
	}
	else if(ltype==LUA_TNUMBER) {
		double val = lua_tonumber(L,index);
		dmap->setAny(name,val);
		lua_pushnumber(L,val);
		return 1;
	}
	else if(ltype==LUA_TBOOLEAN) {
		int val = lua_toboolean(L,index);
		dmap->setAny(name,(val==1));
		lua_pushboolean(L,val);
		return 1;
	}
	else if(ltype==LUA_TSTRING) {
		std::string val = lua_tostring(L,index);
		dmap->setAny(name,val);
		lua_pushstring(L,val.c_str());
		return 1;
	}
	else if(ltype==LUA_TTABLE || ltype==LUA_TFUNCTION || ltype==LUA_TTHREAD || ltype==LUA_TLIGHTUSERDATA) {
		luaL_error(L,"Invalid lua data type in DataMap:get() method, type=%d",ltype);
		return 0;
	}
	else {
		// this is a userdata.
		sgtReferenced* obj = Luna< sgtReferenced >::check(L,index);
		if(obj) {
			dmap->setAny(name, sgtRefPtr(obj));
			Luna< sgtReferenced >::push(L,obj,false);
			return 1;
		}
	}
	
	return 0;
}

int datamap_get(sgt::DataMap* dmap, String& name, lua_State* L) {
	// getter with no default value:
	if(dmap->hasDouble(name)) {
		lua_pushnumber(L,dmap->getDouble(name));
		return 1;
	}
	else if(dmap->hasBool(name)) {
		lua_pushboolean(L,dmap->getBool(name)?1:0);
		return 1;
	}
	else if(dmap->hasString(name)) {
		lua_pushstring(L,dmap->getString(name).c_str());
		return 1;
	}
	else {
		sgtReferenced* obj = dmap->getObject<sgtReferenced>(name);
		if(obj) {
			// use Luna to push the object:
			Luna< sgtReferenced >::push(L,obj,false);
			return 1;
		}
	}
	
	return 0;
}

*/
