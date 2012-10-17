#include <plug_common.h>

class luna_wrapper_osg_HeightField_HeightList {
public:
	typedef Luna< osg::HeightField::HeightList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93979646) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::HeightField::HeightList*)");
		}

		osg::HeightField::HeightList* rhs =(Luna< osg::HeightField::HeightList >::check(L,2));
		osg::HeightField::HeightList* self=(Luna< osg::HeightField::HeightList >::check(L,1));
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

		osg::HeightField::HeightList* self=(Luna< osg::HeightField::HeightList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::HeightField::HeightList");
		
		return luna_dynamicCast(L,converters,"osg::HeightField::HeightList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::HeightField::HeightList* LunaTraits< osg::HeightField::HeightList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::HeightField::HeightList >::_bind_dtor(osg::HeightField::HeightList* obj) {
	delete obj;
}

const char LunaTraits< osg::HeightField::HeightList >::className[] = "HeightList";
const char LunaTraits< osg::HeightField::HeightList >::fullName[] = "osg::HeightField::HeightList";
const char LunaTraits< osg::HeightField::HeightList >::moduleName[] = "osg";
const char* LunaTraits< osg::HeightField::HeightList >::parents[] = {0};
const int LunaTraits< osg::HeightField::HeightList >::hash = 93979646;
const int LunaTraits< osg::HeightField::HeightList >::uniqueIDs[] = {93979646,0};

luna_RegType LunaTraits< osg::HeightField::HeightList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_HeightField_HeightList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_HeightField_HeightList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::HeightField::HeightList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::HeightField::HeightList >::enumValues[] = {
	{0,0}
};


