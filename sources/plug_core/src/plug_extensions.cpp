#include "plug_extensions.h"

/*

int datamap_set(sgt::DataMap* dmap, String& name, lua_Any* dummy, lua_State* L) {
	// value not found, assign default:
	int index = 3;
	
	int ltype = lua_type(L,index);
	
	if(ltype == LUA_TNIL) {
		// nothing to save:
		return 0;
	}
	else if(ltype == LUA_TNUMBER && lua_tointeger(L,index) == lua_tonumber(L,index)) { 		
		// this is an integer:
		int val = lua_tointeger(L,index);
		dmap->setAny(name,val);
	}
	else if(ltype == LUA_TNUMBER) {
		double val = lua_tonumber(L,index);
		dmap->setAny(name,val);
	}
	else if(ltype == LUA_TBOOLEAN) {
		int val = lua_toboolean(L,index);
		dmap->setAny(name,(val==1));
	}
	else if(ltype == LUA_TSTRING) {
		std::string val = lua_tostring(L,index);
		dmap->setAny(name,val);
	}
	else if(ltype==LUA_TTABLE || ltype==LUA_TFUNCTION || ltype==LUA_TTHREAD || ltype==LUA_TLIGHTUSERDATA) {
		luaL_error(L,"Invalid lua data type in DataMap:set() method, type=%d",ltype);
		return 0;
	}
	else {
		// userdata
		sgtReferenced* obj = Luna< sgtReferenced >::check(L,index);
		if(obj) {
			dmap->setAny(name, sgtRefPtr(obj));
		}
	}

	return 0;
}

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
