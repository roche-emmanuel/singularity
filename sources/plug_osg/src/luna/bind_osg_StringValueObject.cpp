#include <plug_common.h>

class luna_wrapper_osg_StringValueObject {
public:
	typedef Luna< osg::StringValueObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3539396) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::StringValueObject*)");
		}

		osg::StringValueObject* rhs =(Luna< osg::StringValueObject >::check(L,2));
		osg::StringValueObject* self=(Luna< osg::StringValueObject >::check(L,1));
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

		osg::StringValueObject* self=(Luna< osg::StringValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StringValueObject");
		
		return luna_dynamicCast(L,converters,"osg::StringValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StringValueObject* LunaTraits< osg::StringValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::StringValueObject >::_bind_dtor(osg::StringValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::StringValueObject >::className[] = "StringValueObject";
const char LunaTraits< osg::StringValueObject >::fullName[] = "osg::StringValueObject";
const char LunaTraits< osg::StringValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::StringValueObject >::parents[] = {0};
const int LunaTraits< osg::StringValueObject >::hash = 3539396;
const int LunaTraits< osg::StringValueObject >::uniqueIDs[] = {3539396,0};

luna_RegType LunaTraits< osg::StringValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StringValueObject::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_StringValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StringValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StringValueObject >::enumValues[] = {
	{0,0}
};


