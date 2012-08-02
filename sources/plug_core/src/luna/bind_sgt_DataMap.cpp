#include <plug_common.h>

class luna_wrapper_sgt_DataMap {
public:
	typedef Luna< sgt::DataMap > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		sgt::DataMap* ptr= dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::DataMap >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_erase(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrCreateMap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasBool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBool(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInt(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasDouble(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDouble(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSeparator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSubContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::DataMap::DataMap()
	static sgt::DataMap* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::DataMap::DataMap() function, expected prototype:\nsgt::DataMap::DataMap()\nClass arguments details:\n");
		}


		return new sgt::DataMap();
	}


	// Function binds:
	// unsigned int sgt::DataMap::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int sgt::DataMap::size() function, expected prototype:\nunsigned int sgt::DataMap::size()\nClass arguments details:\n");
		}


		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int sgt::DataMap::size()");
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::DataMap::erase(const std::string & key)
	static int _bind_erase(lua_State *L) {
		if (!_lg_typecheck_erase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::DataMap::erase(const std::string & key) function, expected prototype:\nbool sgt::DataMap::erase(const std::string & key)\nClass arguments details:\n");
		}

		std::string key(lua_tostring(L,2),lua_objlen(L,2));

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::DataMap::erase(const std::string &)");
		}
		bool lret = self->erase(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::DataMap::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::DataMap::clear() function, expected prototype:\nvoid sgt::DataMap::clear()\nClass arguments details:\n");
		}


		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::DataMap::clear()");
		}
		self->clear();

		return 0;
	}

	// bool sgt::DataMap::hasKey(const std::string & key)
	static int _bind_hasKey(lua_State *L) {
		if (!_lg_typecheck_hasKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::DataMap::hasKey(const std::string & key) function, expected prototype:\nbool sgt::DataMap::hasKey(const std::string & key)\nClass arguments details:\n");
		}

		std::string key(lua_tostring(L,2),lua_objlen(L,2));

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::DataMap::hasKey(const std::string &)");
		}
		bool lret = self->hasKey(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::DataMap::MapType & sgt::DataMap::getData()
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::DataMap::MapType & sgt::DataMap::getData() function, expected prototype:\nsgt::DataMap::MapType & sgt::DataMap::getData()\nClass arguments details:\n");
		}


		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::DataMap::MapType & sgt::DataMap::getData()");
		}
		const sgt::DataMap::MapType* lret = &self->getData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::DataMap::MapType >::push(L,lret,false);

		return 1;
	}

	// std::string sgt::DataMap::getKey(unsigned int index)
	static int _bind_getKey(lua_State *L) {
		if (!_lg_typecheck_getKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string sgt::DataMap::getKey(unsigned int index) function, expected prototype:\nstd::string sgt::DataMap::getKey(unsigned int index)\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string sgt::DataMap::getKey(unsigned int)");
		}
		std::string lret = self->getKey(index);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// sgt::DataMap * sgt::DataMap::getOrCreateMap(const std::string & key)
	static int _bind_getOrCreateMap(lua_State *L) {
		if (!_lg_typecheck_getOrCreateMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::DataMap * sgt::DataMap::getOrCreateMap(const std::string & key) function, expected prototype:\nsgt::DataMap * sgt::DataMap::getOrCreateMap(const std::string & key)\nClass arguments details:\n");
		}

		std::string key(lua_tostring(L,2),lua_objlen(L,2));

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::DataMap * sgt::DataMap::getOrCreateMap(const std::string &)");
		}
		sgt::DataMap * lret = self->getOrCreateMap(key);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::DataMap >::push(L,lret,false);

		return 1;
	}

	// bool sgt::DataMap::hasBool(const std::string & key)
	static int _bind_hasBool(lua_State *L) {
		if (!_lg_typecheck_hasBool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::DataMap::hasBool(const std::string & key) function, expected prototype:\nbool sgt::DataMap::hasBool(const std::string & key)\nClass arguments details:\n");
		}

		std::string key(lua_tostring(L,2),lua_objlen(L,2));

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::DataMap::hasBool(const std::string &)");
		}
		bool lret = self->hasBool(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::DataMap::getBool(const std::string & key, bool defVal = false)
	static int _bind_getBool(lua_State *L) {
		if (!_lg_typecheck_getBool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::DataMap::getBool(const std::string & key, bool defVal = false) function, expected prototype:\nbool sgt::DataMap::getBool(const std::string & key, bool defVal = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string key(lua_tostring(L,2),lua_objlen(L,2));
		bool defVal=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::DataMap::getBool(const std::string &, bool)");
		}
		bool lret = self->getBool(key, defVal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::DataMap::hasString(const std::string & key)
	static int _bind_hasString(lua_State *L) {
		if (!_lg_typecheck_hasString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::DataMap::hasString(const std::string & key) function, expected prototype:\nbool sgt::DataMap::hasString(const std::string & key)\nClass arguments details:\n");
		}

		std::string key(lua_tostring(L,2),lua_objlen(L,2));

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::DataMap::hasString(const std::string &)");
		}
		bool lret = self->hasString(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// std::string sgt::DataMap::getString(const std::string & key, std::string defVal = "")
	static int _bind_getString(lua_State *L) {
		if (!_lg_typecheck_getString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string sgt::DataMap::getString(const std::string & key, std::string defVal = \"\") function, expected prototype:\nstd::string sgt::DataMap::getString(const std::string & key, std::string defVal = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string key(lua_tostring(L,2),lua_objlen(L,2));
		std::string defVal(lua_tostring(L,3),lua_objlen(L,3));

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string sgt::DataMap::getString(const std::string &, std::string)");
		}
		std::string lret = self->getString(key, defVal);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool sgt::DataMap::hasInt(const std::string & key)
	static int _bind_hasInt(lua_State *L) {
		if (!_lg_typecheck_hasInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::DataMap::hasInt(const std::string & key) function, expected prototype:\nbool sgt::DataMap::hasInt(const std::string & key)\nClass arguments details:\n");
		}

		std::string key(lua_tostring(L,2),lua_objlen(L,2));

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::DataMap::hasInt(const std::string &)");
		}
		bool lret = self->hasInt(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int sgt::DataMap::getInt(const std::string & key, int defVal = 0)
	static int _bind_getInt(lua_State *L) {
		if (!_lg_typecheck_getInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::DataMap::getInt(const std::string & key, int defVal = 0) function, expected prototype:\nint sgt::DataMap::getInt(const std::string & key, int defVal = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string key(lua_tostring(L,2),lua_objlen(L,2));
		int defVal=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::DataMap::getInt(const std::string &, int)");
		}
		int lret = self->getInt(key, defVal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::DataMap::hasDouble(const std::string & key)
	static int _bind_hasDouble(lua_State *L) {
		if (!_lg_typecheck_hasDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::DataMap::hasDouble(const std::string & key) function, expected prototype:\nbool sgt::DataMap::hasDouble(const std::string & key)\nClass arguments details:\n");
		}

		std::string key(lua_tostring(L,2),lua_objlen(L,2));

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::DataMap::hasDouble(const std::string &)");
		}
		bool lret = self->hasDouble(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double sgt::DataMap::getDouble(const std::string & key, double defVal = 0.0)
	static int _bind_getDouble(lua_State *L) {
		if (!_lg_typecheck_getDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::DataMap::getDouble(const std::string & key, double defVal = 0.0) function, expected prototype:\ndouble sgt::DataMap::getDouble(const std::string & key, double defVal = 0.0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string key(lua_tostring(L,2),lua_objlen(L,2));
		double defVal=luatop>2 ? (double)lua_tonumber(L,3) : 0.0;

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::DataMap::getDouble(const std::string &, double)");
		}
		double lret = self->getDouble(key, defVal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string sgt::DataMap::dump()
	static int _bind_dump(lua_State *L) {
		if (!_lg_typecheck_dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string sgt::DataMap::dump() function, expected prototype:\nstd::string sgt::DataMap::dump()\nClass arguments details:\n");
		}


		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string sgt::DataMap::dump()");
		}
		std::string lret = self->dump();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void sgt::DataMap::setSeparator(const std::string sep)
	static int _bind_setSeparator(lua_State *L) {
		if (!_lg_typecheck_setSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::DataMap::setSeparator(const std::string sep) function, expected prototype:\nvoid sgt::DataMap::setSeparator(const std::string sep)\nClass arguments details:\n");
		}

		std::string sep(lua_tostring(L,2),lua_objlen(L,2));

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::DataMap::setSeparator(const std::string)");
		}
		self->setSeparator(sep);

		return 0;
	}

	// sgt::DataMap * sgt::DataMap::getSubContainer(std::string & key, bool createIfNeeded = true)
	static int _bind_getSubContainer(lua_State *L) {
		if (!_lg_typecheck_getSubContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::DataMap * sgt::DataMap::getSubContainer(std::string & key, bool createIfNeeded = true) function, expected prototype:\nsgt::DataMap * sgt::DataMap::getSubContainer(std::string & key, bool createIfNeeded = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string key(lua_tostring(L,2),lua_objlen(L,2));
		bool createIfNeeded=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		sgt::DataMap* self=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::DataMap * sgt::DataMap::getSubContainer(std::string &, bool)");
		}
		sgt::DataMap * lret = self->getSubContainer(key, createIfNeeded);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::DataMap >::push(L,lret,false);

		return 1;
	}

	// int sgt::DataMap::datamap_get(sgt::DataMap * dmap, std::string & name, lua_State * L)
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::DataMap::datamap_get(sgt::DataMap * dmap, std::string & name, lua_State * L) function, expected prototype:\nint sgt::DataMap::datamap_get(sgt::DataMap * dmap, std::string & name, lua_State * L)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		sgt::DataMap* dmap=dynamic_cast< sgt::DataMap* >(Luna< osg::Referenced >::check(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		return datamap_get(dmap, name, L);
	}


	// Operator binds:

};

sgt::DataMap* LunaTraits< sgt::DataMap >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_DataMap::_bind_ctor(L);
}

void LunaTraits< sgt::DataMap >::_bind_dtor(sgt::DataMap* obj) {
	delete obj;
}

const char LunaTraits< sgt::DataMap >::className[] = "DataMap";
const char LunaTraits< sgt::DataMap >::fullName[] = "sgt::DataMap";
const char LunaTraits< sgt::DataMap >::moduleName[] = "core";
const char* LunaTraits< sgt::DataMap >::parents[] = {"core.Object", 0};
const int LunaTraits< sgt::DataMap >::hash = 93314740;
const int LunaTraits< sgt::DataMap >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::DataMap >::methods[] = {
	{"size", &luna_wrapper_sgt_DataMap::_bind_size},
	{"erase", &luna_wrapper_sgt_DataMap::_bind_erase},
	{"clear", &luna_wrapper_sgt_DataMap::_bind_clear},
	{"hasKey", &luna_wrapper_sgt_DataMap::_bind_hasKey},
	{"getData", &luna_wrapper_sgt_DataMap::_bind_getData},
	{"getKey", &luna_wrapper_sgt_DataMap::_bind_getKey},
	{"getOrCreateMap", &luna_wrapper_sgt_DataMap::_bind_getOrCreateMap},
	{"hasBool", &luna_wrapper_sgt_DataMap::_bind_hasBool},
	{"getBool", &luna_wrapper_sgt_DataMap::_bind_getBool},
	{"hasString", &luna_wrapper_sgt_DataMap::_bind_hasString},
	{"getString", &luna_wrapper_sgt_DataMap::_bind_getString},
	{"hasInt", &luna_wrapper_sgt_DataMap::_bind_hasInt},
	{"getInt", &luna_wrapper_sgt_DataMap::_bind_getInt},
	{"hasDouble", &luna_wrapper_sgt_DataMap::_bind_hasDouble},
	{"getDouble", &luna_wrapper_sgt_DataMap::_bind_getDouble},
	{"dump", &luna_wrapper_sgt_DataMap::_bind_dump},
	{"setSeparator", &luna_wrapper_sgt_DataMap::_bind_setSeparator},
	{"getSubContainer", &luna_wrapper_sgt_DataMap::_bind_getSubContainer},
	{"get", &luna_wrapper_sgt_DataMap::_bind_get},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::DataMap >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_DataMap::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::DataMap >::enumValues[] = {
	{0,0}
};


