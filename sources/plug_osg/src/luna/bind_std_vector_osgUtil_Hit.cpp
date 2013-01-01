#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osgUtil_Hit {
public:
	typedef Luna< std::vector< osgUtil::Hit > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91520745) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osgUtil::Hit >*)");
		}

		std::vector< osgUtil::Hit >* rhs =(Luna< std::vector< osgUtil::Hit > >::check(L,2));
		std::vector< osgUtil::Hit >* self=(Luna< std::vector< osgUtil::Hit > >::check(L,1));
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

		std::vector< osgUtil::Hit >* self=(Luna< std::vector< osgUtil::Hit > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osgUtil::Hit >");
		
		return luna_dynamicCast(L,converters,"std::vector< osgUtil::Hit >",name);
	}

};

std::vector< osgUtil::Hit >* LunaTraits< std::vector< osgUtil::Hit > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< osgUtil::Hit > >::_bind_dtor(std::vector< osgUtil::Hit >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< osgUtil::Hit > >::className[] = "std_vector_osgUtil_Hit";
const char LunaTraits< std::vector< osgUtil::Hit > >::fullName[] = "std::vector< osgUtil::Hit >";
const char LunaTraits< std::vector< osgUtil::Hit > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osgUtil::Hit > >::parents[] = {0};
const int LunaTraits< std::vector< osgUtil::Hit > >::hash = 91520745;
const int LunaTraits< std::vector< osgUtil::Hit > >::uniqueIDs[] = {91520745,0};

luna_RegType LunaTraits< std::vector< osgUtil::Hit > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osgUtil_Hit::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osgUtil_Hit::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osgUtil::Hit > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osgUtil::Hit > >::enumValues[] = {
	{0,0}
};


