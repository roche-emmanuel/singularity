#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_NodePath {
public:
	typedef Luna< std::vector< osg::NodePath > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88076696) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::NodePath >*)");
		}

		std::vector< osg::NodePath >* rhs =(Luna< std::vector< osg::NodePath > >::check(L,2));
		std::vector< osg::NodePath >* self=(Luna< std::vector< osg::NodePath > >::check(L,1));
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

		std::vector< osg::NodePath >* self=(Luna< std::vector< osg::NodePath > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::NodePath >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::NodePath >",name);
	}

};

std::vector< osg::NodePath >* LunaTraits< std::vector< osg::NodePath > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::NodePath >();
}

void LunaTraits< std::vector< osg::NodePath > >::_bind_dtor(std::vector< osg::NodePath >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::NodePath > >::className[] = "std_vector_osg_NodePath";
const char LunaTraits< std::vector< osg::NodePath > >::fullName[] = "std::vector< osg::NodePath >";
const char LunaTraits< std::vector< osg::NodePath > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::NodePath > >::parents[] = {0};
const int LunaTraits< std::vector< osg::NodePath > >::hash = 88076696;
const int LunaTraits< std::vector< osg::NodePath > >::uniqueIDs[] = {88076696,0};

luna_RegType LunaTraits< std::vector< osg::NodePath > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_NodePath::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_NodePath::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::NodePath > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::NodePath > >::enumValues[] = {
	{0,0}
};


