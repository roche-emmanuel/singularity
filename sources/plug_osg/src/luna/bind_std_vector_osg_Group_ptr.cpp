#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_Group_ptr {
public:
	typedef Luna< std::vector< osg::Group * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91690910) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::Group * >*)");
		}

		std::vector< osg::Group * >* rhs =(Luna< std::vector< osg::Group * > >::check(L,2));
		std::vector< osg::Group * >* self=(Luna< std::vector< osg::Group * > >::check(L,1));
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

		std::vector< osg::Group * >* self=(Luna< std::vector< osg::Group * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::Group * >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::Group * >",name);
	}

};

std::vector< osg::Group * >* LunaTraits< std::vector< osg::Group * > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< osg::Group * > >::_bind_dtor(std::vector< osg::Group * >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< osg::Group * > >::className[] = "std_vector_osg_Group_ptr";
const char LunaTraits< std::vector< osg::Group * > >::fullName[] = "std::vector< osg::Group * >";
const char LunaTraits< std::vector< osg::Group * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::Group * > >::parents[] = {0};
const int LunaTraits< std::vector< osg::Group * > >::hash = 91690910;
const int LunaTraits< std::vector< osg::Group * > >::uniqueIDs[] = {91690910,0};

luna_RegType LunaTraits< std::vector< osg::Group * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_Group_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_Group_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::Group * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::Group * > >::enumValues[] = {
	{0,0}
};


