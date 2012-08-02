#include <plug_common.h>

class luna_wrapper_osgDB_AuthenticationMap {
public:
	typedef Luna< osgDB::AuthenticationMap > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::AuthenticationMap* ptr= dynamic_cast< osgDB::AuthenticationMap* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::AuthenticationMap >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::AuthenticationMap::AuthenticationMap()
	static osgDB::AuthenticationMap* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::AuthenticationMap::AuthenticationMap() function, expected prototype:\nosgDB::AuthenticationMap::AuthenticationMap()\nClass arguments details:\n");
		}


		return new osgDB::AuthenticationMap();
	}


	// Function binds:
	// void osgDB::AuthenticationMap::addAuthenticationDetails(const std::string & path, osgDB::AuthenticationDetails * details)
	static int _bind_addAuthenticationDetails(lua_State *L) {
		if (!_lg_typecheck_addAuthenticationDetails(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::AuthenticationMap::addAuthenticationDetails(const std::string & path, osgDB::AuthenticationDetails * details) function, expected prototype:\nvoid osgDB::AuthenticationMap::addAuthenticationDetails(const std::string & path, osgDB::AuthenticationDetails * details)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::AuthenticationDetails* details=dynamic_cast< osgDB::AuthenticationDetails* >(Luna< osg::Referenced >::check(L,3));

		osgDB::AuthenticationMap* self=dynamic_cast< osgDB::AuthenticationMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::AuthenticationMap::addAuthenticationDetails(const std::string &, osgDB::AuthenticationDetails *)");
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

		osgDB::AuthenticationMap* self=dynamic_cast< osgDB::AuthenticationMap* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::AuthenticationDetails * osgDB::AuthenticationMap::getAuthenticationDetails(const std::string &) const");
		}
		const osgDB::AuthenticationDetails * lret = self->getAuthenticationDetails(path);
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
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::AuthenticationMap >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_AuthenticationMap::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::AuthenticationMap >::enumValues[] = {
	{0,0}
};


