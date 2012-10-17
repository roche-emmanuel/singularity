#include <plug_common.h>

class luna_wrapper_osg_StateSet_UniformList {
public:
	typedef Luna< osg::StateSet::UniformList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47344864) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::StateSet::UniformList*)");
		}

		osg::StateSet::UniformList* rhs =(Luna< osg::StateSet::UniformList >::check(L,2));
		osg::StateSet::UniformList* self=(Luna< osg::StateSet::UniformList >::check(L,1));
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

		osg::StateSet::UniformList* self=(Luna< osg::StateSet::UniformList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateSet::UniformList");
		
		return luna_dynamicCast(L,converters,"osg::StateSet::UniformList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StateSet::UniformList* LunaTraits< osg::StateSet::UniformList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::StateSet::UniformList >::_bind_dtor(osg::StateSet::UniformList* obj) {
	delete obj;
}

const char LunaTraits< osg::StateSet::UniformList >::className[] = "UniformList";
const char LunaTraits< osg::StateSet::UniformList >::fullName[] = "osg::StateSet::UniformList";
const char LunaTraits< osg::StateSet::UniformList >::moduleName[] = "osg";
const char* LunaTraits< osg::StateSet::UniformList >::parents[] = {0};
const int LunaTraits< osg::StateSet::UniformList >::hash = 47344864;
const int LunaTraits< osg::StateSet::UniformList >::uniqueIDs[] = {47344864,0};

luna_RegType LunaTraits< osg::StateSet::UniformList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StateSet_UniformList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_StateSet_UniformList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateSet::UniformList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateSet::UniformList >::enumValues[] = {
	{0,0}
};


