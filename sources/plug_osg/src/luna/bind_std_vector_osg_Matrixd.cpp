#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_Matrixd {
public:
	typedef Luna< std::vector< osg::Matrixd > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70215012) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::Matrixd >*)");
		}

		std::vector< osg::Matrixd >* rhs =(Luna< std::vector< osg::Matrixd > >::check(L,2));
		std::vector< osg::Matrixd >* self=(Luna< std::vector< osg::Matrixd > >::check(L,1));
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

		std::vector< osg::Matrixd >* self=(Luna< std::vector< osg::Matrixd > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::Matrixd >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::Matrixd >",name);
	}

};

std::vector< osg::Matrixd >* LunaTraits< std::vector< osg::Matrixd > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< osg::Matrixd > >::_bind_dtor(std::vector< osg::Matrixd >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< osg::Matrixd > >::className[] = "std_vector_osg_Matrixd";
const char LunaTraits< std::vector< osg::Matrixd > >::fullName[] = "std::vector< osg::Matrixd >";
const char LunaTraits< std::vector< osg::Matrixd > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::Matrixd > >::parents[] = {0};
const int LunaTraits< std::vector< osg::Matrixd > >::hash = 70215012;
const int LunaTraits< std::vector< osg::Matrixd > >::uniqueIDs[] = {70215012,0};

luna_RegType LunaTraits< std::vector< osg::Matrixd > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_Matrixd::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_Matrixd::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::Matrixd > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::Matrixd > >::enumValues[] = {
	{0,0}
};


