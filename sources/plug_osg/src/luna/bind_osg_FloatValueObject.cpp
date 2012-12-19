#include <plug_common.h>

class luna_wrapper_osg_FloatValueObject {
public:
	typedef Luna< osg::FloatValueObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93822108) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::FloatValueObject*)");
		}

		osg::FloatValueObject* rhs =(Luna< osg::FloatValueObject >::check(L,2));
		osg::FloatValueObject* self=(Luna< osg::FloatValueObject >::check(L,1));
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

		osg::FloatValueObject* self=(Luna< osg::FloatValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::FloatValueObject");
		
		return luna_dynamicCast(L,converters,"osg::FloatValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::FloatValueObject* LunaTraits< osg::FloatValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::FloatValueObject >::_bind_dtor(osg::FloatValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::FloatValueObject >::className[] = "FloatValueObject";
const char LunaTraits< osg::FloatValueObject >::fullName[] = "osg::FloatValueObject";
const char LunaTraits< osg::FloatValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::FloatValueObject >::parents[] = {0};
const int LunaTraits< osg::FloatValueObject >::hash = 93822108;
const int LunaTraits< osg::FloatValueObject >::uniqueIDs[] = {93822108,0};

luna_RegType LunaTraits< osg::FloatValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_FloatValueObject::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_FloatValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FloatValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FloatValueObject >::enumValues[] = {
	{0,0}
};


