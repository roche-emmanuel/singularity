#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_CullingSet {
public:
	typedef Luna< std::vector< osg::CullingSet > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3779006) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::CullingSet >*)");
		}

		std::vector< osg::CullingSet >* rhs =(Luna< std::vector< osg::CullingSet > >::check(L,2));
		std::vector< osg::CullingSet >* self=(Luna< std::vector< osg::CullingSet > >::check(L,1));
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

		std::vector< osg::CullingSet >* self=(Luna< std::vector< osg::CullingSet > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::CullingSet >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::CullingSet >",name);
	}

};

std::vector< osg::CullingSet >* LunaTraits< std::vector< osg::CullingSet > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< osg::CullingSet > >::_bind_dtor(std::vector< osg::CullingSet >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< osg::CullingSet > >::className[] = "std_vector_osg_CullingSet";
const char LunaTraits< std::vector< osg::CullingSet > >::fullName[] = "std::vector< osg::CullingSet >";
const char LunaTraits< std::vector< osg::CullingSet > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::CullingSet > >::parents[] = {0};
const int LunaTraits< std::vector< osg::CullingSet > >::hash = 3779006;
const int LunaTraits< std::vector< osg::CullingSet > >::uniqueIDs[] = {3779006,0};

luna_RegType LunaTraits< std::vector< osg::CullingSet > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_CullingSet::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_CullingSet::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::CullingSet > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::CullingSet > >::enumValues[] = {
	{0,0}
};


