#include <plug_common.h>

class luna_wrapper_osgDB_AuthenticationDetails {
public:
	typedef Luna< osgDB::AuthenticationDetails > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::AuthenticationDetails* ptr= dynamic_cast< osgDB::AuthenticationDetails* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::AuthenticationDetails >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::AuthenticationDetails::AuthenticationDetails(const std::string & u, const std::string & p, osgDB::AuthenticationDetails::HttpAuthentication auth = osgDB::AuthenticationDetails::BASIC)
	static osgDB::AuthenticationDetails* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::AuthenticationDetails::AuthenticationDetails(const std::string & u, const std::string & p, osgDB::AuthenticationDetails::HttpAuthentication auth = osgDB::AuthenticationDetails::BASIC) function, expected prototype:\nosgDB::AuthenticationDetails::AuthenticationDetails(const std::string & u, const std::string & p, osgDB::AuthenticationDetails::HttpAuthentication auth = osgDB::AuthenticationDetails::BASIC)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string u(lua_tostring(L,1),lua_objlen(L,1));
		std::string p(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::AuthenticationDetails::HttpAuthentication auth=luatop>2 ? (osgDB::AuthenticationDetails::HttpAuthentication)lua_tointeger(L,3) : osgDB::AuthenticationDetails::BASIC;

		return new osgDB::AuthenticationDetails(u, p, auth);
	}


	// Function binds:

	// Operator binds:

};

osgDB::AuthenticationDetails* LunaTraits< osgDB::AuthenticationDetails >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_AuthenticationDetails::_bind_ctor(L);
}

void LunaTraits< osgDB::AuthenticationDetails >::_bind_dtor(osgDB::AuthenticationDetails* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::AuthenticationDetails >::className[] = "AuthenticationDetails";
const char LunaTraits< osgDB::AuthenticationDetails >::fullName[] = "osgDB::AuthenticationDetails";
const char LunaTraits< osgDB::AuthenticationDetails >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::AuthenticationDetails >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::AuthenticationDetails >::hash = 16438336;
const int LunaTraits< osgDB::AuthenticationDetails >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::AuthenticationDetails >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::AuthenticationDetails >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_AuthenticationDetails::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::AuthenticationDetails >::enumValues[] = {
	{"BASIC", osgDB::AuthenticationDetails::BASIC},
	{"DIGEST", osgDB::AuthenticationDetails::DIGEST},
	{"NTLM", osgDB::AuthenticationDetails::NTLM},
	{"GSSNegotiate", osgDB::AuthenticationDetails::GSSNegotiate},
	{"ANY", osgDB::AuthenticationDetails::ANY},
	{"ANYSAFE", osgDB::AuthenticationDetails::ANYSAFE},
	{0,0}
};


