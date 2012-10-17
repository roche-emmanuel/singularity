#include <plug_common.h>

class luna_wrapper_osg_BoolValueObject {
public:
	typedef Luna< osg::BoolValueObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77400297) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::BoolValueObject*)");
		}

		osg::BoolValueObject* rhs =(Luna< osg::BoolValueObject >::check(L,2));
		osg::BoolValueObject* self=(Luna< osg::BoolValueObject >::check(L,1));
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

		osg::BoolValueObject* self=(Luna< osg::BoolValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::BoolValueObject");
		
		return luna_dynamicCast(L,converters,"osg::BoolValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::BoolValueObject* LunaTraits< osg::BoolValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::BoolValueObject >::_bind_dtor(osg::BoolValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::BoolValueObject >::className[] = "BoolValueObject";
const char LunaTraits< osg::BoolValueObject >::fullName[] = "osg::BoolValueObject";
const char LunaTraits< osg::BoolValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::BoolValueObject >::parents[] = {0};
const int LunaTraits< osg::BoolValueObject >::hash = 77400297;
const int LunaTraits< osg::BoolValueObject >::uniqueIDs[] = {77400297,0};

luna_RegType LunaTraits< osg::BoolValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_BoolValueObject::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_BoolValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BoolValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BoolValueObject >::enumValues[] = {
	{0,0}
};


