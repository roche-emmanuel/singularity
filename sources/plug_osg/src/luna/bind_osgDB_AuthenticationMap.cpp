#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_AuthenticationMap.h>

class luna_wrapper_osgDB_AuthenticationMap {
public:
	typedef Luna< osgDB::AuthenticationMap > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		osgDB::AuthenticationMap* self= (osgDB::AuthenticationMap*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::AuthenticationMap >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgDB::AuthenticationMap* ptr= dynamic_cast< osgDB::AuthenticationMap* >(Luna< osg::Referenced >::check(L,1));
		osgDB::AuthenticationMap* ptr= luna_caster< osg::Referenced, osgDB::AuthenticationMap >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::AuthenticationMap >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addAuthenticationDetails(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAuthenticationDetails(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addAuthenticationDetails(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAuthenticationDetails(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::AuthenticationMap::AuthenticationMap()
	static osgDB::AuthenticationMap* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::AuthenticationMap::AuthenticationMap() function, expected prototype:\nosgDB::AuthenticationMap::AuthenticationMap()\nClass arguments details:\n");
		}


		return new osgDB::AuthenticationMap();
	}

	// osgDB::AuthenticationMap::AuthenticationMap(lua_Table * data)
	static osgDB::AuthenticationMap* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::AuthenticationMap::AuthenticationMap(lua_Table * data) function, expected prototype:\nosgDB::AuthenticationMap::AuthenticationMap(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgDB_AuthenticationMap(L,NULL);
	}

	// Overload binder for osgDB::AuthenticationMap::AuthenticationMap
	static osgDB::AuthenticationMap* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AuthenticationMap, cannot match any of the overloads for function AuthenticationMap:\n  AuthenticationMap()\n  AuthenticationMap(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::AuthenticationMap::addAuthenticationDetails(const std::string & path, osgDB::AuthenticationDetails * details)
	static int _bind_addAuthenticationDetails(lua_State *L) {
		if (!_lg_typecheck_addAuthenticationDetails(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::AuthenticationMap::addAuthenticationDetails(const std::string & path, osgDB::AuthenticationDetails * details) function, expected prototype:\nvoid osgDB::AuthenticationMap::addAuthenticationDetails(const std::string & path, osgDB::AuthenticationDetails * details)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::AuthenticationDetails* details=(Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationDetails >(L,3));

		osgDB::AuthenticationMap* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationMap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::AuthenticationMap::addAuthenticationDetails(const std::string &, osgDB::AuthenticationDetails *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addAuthenticationDetails(path, details);

		return 0;
	}

	// const osgDB::AuthenticationDetails * osgDB::AuthenticationMap::getAuthenticationDetails(const std::string & path) const
	static int _bind_getAuthenticationDetails(lua_State *L) {
		if (!_lg_typecheck_getAuthenticationDetails(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::AuthenticationDetails * osgDB::AuthenticationMap::getAuthenticationDetails(const std::string & path) const function, expected prototype:\nconst osgDB::AuthenticationDetails * osgDB::AuthenticationMap::getAuthenticationDetails(const std::string & path) const\nClass arguments details:\n");
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::AuthenticationMap* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationMap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::AuthenticationDetails * osgDB::AuthenticationMap::getAuthenticationDetails(const std::string &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgDB::AuthenticationDetails * lret = self->getAuthenticationDetails(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::AuthenticationDetails >::push(L,lret,false);

		return 1;
	}

	// void osgDB::AuthenticationMap::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::AuthenticationMap::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::AuthenticationMap::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::AuthenticationMap* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationMap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::AuthenticationMap::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->AuthenticationMap::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgDB::AuthenticationMap::base_addAuthenticationDetails(const std::string & path, osgDB::AuthenticationDetails * details)
	static int _bind_base_addAuthenticationDetails(lua_State *L) {
		if (!_lg_typecheck_base_addAuthenticationDetails(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::AuthenticationMap::base_addAuthenticationDetails(const std::string & path, osgDB::AuthenticationDetails * details) function, expected prototype:\nvoid osgDB::AuthenticationMap::base_addAuthenticationDetails(const std::string & path, osgDB::AuthenticationDetails * details)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::AuthenticationDetails* details=(Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationDetails >(L,3));

		osgDB::AuthenticationMap* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationMap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::AuthenticationMap::base_addAuthenticationDetails(const std::string &, osgDB::AuthenticationDetails *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->AuthenticationMap::addAuthenticationDetails(path, details);

		return 0;
	}

	// const osgDB::AuthenticationDetails * osgDB::AuthenticationMap::base_getAuthenticationDetails(const std::string & path) const
	static int _bind_base_getAuthenticationDetails(lua_State *L) {
		if (!_lg_typecheck_base_getAuthenticationDetails(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::AuthenticationDetails * osgDB::AuthenticationMap::base_getAuthenticationDetails(const std::string & path) const function, expected prototype:\nconst osgDB::AuthenticationDetails * osgDB::AuthenticationMap::base_getAuthenticationDetails(const std::string & path) const\nClass arguments details:\n");
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::AuthenticationMap* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationMap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::AuthenticationDetails * osgDB::AuthenticationMap::base_getAuthenticationDetails(const std::string &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgDB::AuthenticationDetails * lret = self->AuthenticationMap::getAuthenticationDetails(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::AuthenticationDetails >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgDB::AuthenticationMap* LunaTraits< osgDB::AuthenticationMap >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_AuthenticationMap::_bind_ctor(L);
}

void LunaTraits< osgDB::AuthenticationMap >::_bind_dtor(osgDB::AuthenticationMap* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::AuthenticationMap >::className[] = "AuthenticationMap";
const char LunaTraits< osgDB::AuthenticationMap >::fullName[] = "osgDB::AuthenticationMap";
const char LunaTraits< osgDB::AuthenticationMap >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::AuthenticationMap >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::AuthenticationMap >::hash = 18580289;
const int LunaTraits< osgDB::AuthenticationMap >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::AuthenticationMap >::methods[] = {
	{"addAuthenticationDetails", &luna_wrapper_osgDB_AuthenticationMap::_bind_addAuthenticationDetails},
	{"getAuthenticationDetails", &luna_wrapper_osgDB_AuthenticationMap::_bind_getAuthenticationDetails},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_AuthenticationMap::_bind_base_setThreadSafeRefUnref},
	{"base_addAuthenticationDetails", &luna_wrapper_osgDB_AuthenticationMap::_bind_base_addAuthenticationDetails},
	{"base_getAuthenticationDetails", &luna_wrapper_osgDB_AuthenticationMap::_bind_base_getAuthenticationDetails},
	{"__eq", &luna_wrapper_osgDB_AuthenticationMap::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_AuthenticationMap::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_AuthenticationMap::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_AuthenticationMap::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::AuthenticationMap >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_AuthenticationMap::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::AuthenticationMap >::enumValues[] = {
	{0,0}
};


