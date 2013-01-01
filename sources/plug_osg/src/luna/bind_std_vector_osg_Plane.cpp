#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_Plane {
public:
	typedef Luna< std::vector< osg::Plane > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5512969) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::Plane >*)");
		}

		std::vector< osg::Plane >* rhs =(Luna< std::vector< osg::Plane > >::check(L,2));
		std::vector< osg::Plane >* self=(Luna< std::vector< osg::Plane > >::check(L,1));
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

		std::vector< osg::Plane >* self=(Luna< std::vector< osg::Plane > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::Plane >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::Plane >",name);
	}

};

std::vector< osg::Plane >* LunaTraits< std::vector< osg::Plane > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< osg::Plane > >::_bind_dtor(std::vector< osg::Plane >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< osg::Plane > >::className[] = "std_vector_osg_Plane";
const char LunaTraits< std::vector< osg::Plane > >::fullName[] = "std::vector< osg::Plane >";
const char LunaTraits< std::vector< osg::Plane > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::Plane > >::parents[] = {0};
const int LunaTraits< std::vector< osg::Plane > >::hash = 5512969;
const int LunaTraits< std::vector< osg::Plane > >::uniqueIDs[] = {5512969,0};

luna_RegType LunaTraits< std::vector< osg::Plane > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_Plane::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_Plane::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::Plane > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::Plane > >::enumValues[] = {
	{0,0}
};


