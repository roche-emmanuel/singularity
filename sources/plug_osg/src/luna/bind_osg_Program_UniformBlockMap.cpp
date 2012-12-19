#include <plug_common.h>

class luna_wrapper_osg_Program_UniformBlockMap {
public:
	typedef Luna< osg::Program::UniformBlockMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70732441) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Program::UniformBlockMap*)");
		}

		osg::Program::UniformBlockMap* rhs =(Luna< osg::Program::UniformBlockMap >::check(L,2));
		osg::Program::UniformBlockMap* self=(Luna< osg::Program::UniformBlockMap >::check(L,1));
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

		osg::Program::UniformBlockMap* self=(Luna< osg::Program::UniformBlockMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Program::UniformBlockMap");
		
		return luna_dynamicCast(L,converters,"osg::Program::UniformBlockMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Program::UniformBlockMap* LunaTraits< osg::Program::UniformBlockMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Program::UniformBlockMap >::_bind_dtor(osg::Program::UniformBlockMap* obj) {
	delete obj;
}

const char LunaTraits< osg::Program::UniformBlockMap >::className[] = "UniformBlockMap";
const char LunaTraits< osg::Program::UniformBlockMap >::fullName[] = "osg::Program::UniformBlockMap";
const char LunaTraits< osg::Program::UniformBlockMap >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::UniformBlockMap >::parents[] = {0};
const int LunaTraits< osg::Program::UniformBlockMap >::hash = 70732441;
const int LunaTraits< osg::Program::UniformBlockMap >::uniqueIDs[] = {70732441,0};

luna_RegType LunaTraits< osg::Program::UniformBlockMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Program_UniformBlockMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Program_UniformBlockMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::UniformBlockMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::UniformBlockMap >::enumValues[] = {
	{0,0}
};


