#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_VertexAttribAlias {
public:
	typedef Luna< std::vector< osg::VertexAttribAlias > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89957242) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::VertexAttribAlias >*)");
		}

		std::vector< osg::VertexAttribAlias >* rhs =(Luna< std::vector< osg::VertexAttribAlias > >::check(L,2));
		std::vector< osg::VertexAttribAlias >* self=(Luna< std::vector< osg::VertexAttribAlias > >::check(L,1));
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

		std::vector< osg::VertexAttribAlias >* self=(Luna< std::vector< osg::VertexAttribAlias > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::VertexAttribAlias >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::VertexAttribAlias >",name);
	}

};

std::vector< osg::VertexAttribAlias >* LunaTraits< std::vector< osg::VertexAttribAlias > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< osg::VertexAttribAlias > >::_bind_dtor(std::vector< osg::VertexAttribAlias >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< osg::VertexAttribAlias > >::className[] = "std_vector_osg_VertexAttribAlias";
const char LunaTraits< std::vector< osg::VertexAttribAlias > >::fullName[] = "std::vector< osg::VertexAttribAlias >";
const char LunaTraits< std::vector< osg::VertexAttribAlias > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::VertexAttribAlias > >::parents[] = {0};
const int LunaTraits< std::vector< osg::VertexAttribAlias > >::hash = 89957242;
const int LunaTraits< std::vector< osg::VertexAttribAlias > >::uniqueIDs[] = {89957242,0};

luna_RegType LunaTraits< std::vector< osg::VertexAttribAlias > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_VertexAttribAlias::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_VertexAttribAlias::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::VertexAttribAlias > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::VertexAttribAlias > >::enumValues[] = {
	{0,0}
};


