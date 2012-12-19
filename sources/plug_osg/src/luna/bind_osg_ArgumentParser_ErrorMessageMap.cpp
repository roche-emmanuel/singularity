#include <plug_common.h>

class luna_wrapper_osg_ArgumentParser_ErrorMessageMap {
public:
	typedef Luna< osg::ArgumentParser::ErrorMessageMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92019184) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ArgumentParser::ErrorMessageMap*)");
		}

		osg::ArgumentParser::ErrorMessageMap* rhs =(Luna< osg::ArgumentParser::ErrorMessageMap >::check(L,2));
		osg::ArgumentParser::ErrorMessageMap* self=(Luna< osg::ArgumentParser::ErrorMessageMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ArgumentParser::ErrorMessageMap* self=(Luna< osg::ArgumentParser::ErrorMessageMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ArgumentParser::ErrorMessageMap");
		
		return luna_dynamicCast(L,converters,"osg::ArgumentParser::ErrorMessageMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ArgumentParser::ErrorMessageMap* LunaTraits< osg::ArgumentParser::ErrorMessageMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ArgumentParser::ErrorMessageMap >::_bind_dtor(osg::ArgumentParser::ErrorMessageMap* obj) {
	delete obj;
}

const char LunaTraits< osg::ArgumentParser::ErrorMessageMap >::className[] = "ErrorMessageMap";
const char LunaTraits< osg::ArgumentParser::ErrorMessageMap >::fullName[] = "osg::ArgumentParser::ErrorMessageMap";
const char LunaTraits< osg::ArgumentParser::ErrorMessageMap >::moduleName[] = "osg";
const char* LunaTraits< osg::ArgumentParser::ErrorMessageMap >::parents[] = {0};
const int LunaTraits< osg::ArgumentParser::ErrorMessageMap >::hash = 92019184;
const int LunaTraits< osg::ArgumentParser::ErrorMessageMap >::uniqueIDs[] = {92019184,0};

luna_RegType LunaTraits< osg::ArgumentParser::ErrorMessageMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ArgumentParser_ErrorMessageMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ArgumentParser_ErrorMessageMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ArgumentParser::ErrorMessageMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ArgumentParser::ErrorMessageMap >::enumValues[] = {
	{0,0}
};


