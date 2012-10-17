#include <plug_common.h>

class luna_wrapper_osg_ShortValueObject {
public:
	typedef Luna< osg::ShortValueObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7581487) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ShortValueObject*)");
		}

		osg::ShortValueObject* rhs =(Luna< osg::ShortValueObject >::check(L,2));
		osg::ShortValueObject* self=(Luna< osg::ShortValueObject >::check(L,1));
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

		osg::ShortValueObject* self=(Luna< osg::ShortValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ShortValueObject");
		
		return luna_dynamicCast(L,converters,"osg::ShortValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ShortValueObject* LunaTraits< osg::ShortValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ShortValueObject >::_bind_dtor(osg::ShortValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::ShortValueObject >::className[] = "ShortValueObject";
const char LunaTraits< osg::ShortValueObject >::fullName[] = "osg::ShortValueObject";
const char LunaTraits< osg::ShortValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::ShortValueObject >::parents[] = {0};
const int LunaTraits< osg::ShortValueObject >::hash = 7581487;
const int LunaTraits< osg::ShortValueObject >::uniqueIDs[] = {7581487,0};

luna_RegType LunaTraits< osg::ShortValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ShortValueObject::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ShortValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShortValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShortValueObject >::enumValues[] = {
	{0,0}
};


