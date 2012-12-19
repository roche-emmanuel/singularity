#include <plug_common.h>

class luna_wrapper_osg_UIntValueObject {
public:
	typedef Luna< osg::UIntValueObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62642718) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::UIntValueObject*)");
		}

		osg::UIntValueObject* rhs =(Luna< osg::UIntValueObject >::check(L,2));
		osg::UIntValueObject* self=(Luna< osg::UIntValueObject >::check(L,1));
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

		osg::UIntValueObject* self=(Luna< osg::UIntValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::UIntValueObject");
		
		return luna_dynamicCast(L,converters,"osg::UIntValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::UIntValueObject* LunaTraits< osg::UIntValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::UIntValueObject >::_bind_dtor(osg::UIntValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::UIntValueObject >::className[] = "UIntValueObject";
const char LunaTraits< osg::UIntValueObject >::fullName[] = "osg::UIntValueObject";
const char LunaTraits< osg::UIntValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::UIntValueObject >::parents[] = {0};
const int LunaTraits< osg::UIntValueObject >::hash = 62642718;
const int LunaTraits< osg::UIntValueObject >::uniqueIDs[] = {62642718,0};

luna_RegType LunaTraits< osg::UIntValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_UIntValueObject::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_UIntValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::UIntValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::UIntValueObject >::enumValues[] = {
	{0,0}
};


