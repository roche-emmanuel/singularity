#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_std_string_osg_ArgumentParser_ErrorSeverity {
public:
	typedef Luna< std::map< std::string, osg::ArgumentParser::ErrorSeverity > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56481134) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< std::string, osg::ArgumentParser::ErrorSeverity >*)");
		}

		std::map< std::string, osg::ArgumentParser::ErrorSeverity >* rhs =(Luna< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::check(L,2));
		std::map< std::string, osg::ArgumentParser::ErrorSeverity >* self=(Luna< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::check(L,1));
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

		std::map< std::string, osg::ArgumentParser::ErrorSeverity >* self=(Luna< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< std::string, osg::ArgumentParser::ErrorSeverity >");
		
		return luna_dynamicCast(L,converters,"std::map< std::string, osg::ArgumentParser::ErrorSeverity >",name);
	}
};

std::map< std::string, osg::ArgumentParser::ErrorSeverity >* LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::_bind_dtor(std::map< std::string, osg::ArgumentParser::ErrorSeverity >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::className[] = "std_map_std_string_osg_ArgumentParser_ErrorSeverity";
const char LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::fullName[] = "std::map< std::string, osg::ArgumentParser::ErrorSeverity >";
const char LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::moduleName[] = "osg";
const char* LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::parents[] = {0};
const int LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::hash = 56481134;
const int LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::uniqueIDs[] = {56481134,0};

luna_RegType LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_std_string_osg_ArgumentParser_ErrorSeverity::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_std_string_osg_ArgumentParser_ErrorSeverity::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >::enumValues[] = {
	{0,0}
};

