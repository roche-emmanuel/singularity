#include <plug_common.h>

class luna_wrapper_osg_Vec3fValueObject {
public:
	typedef Luna< osg::Vec3fValueObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56306081) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Vec3fValueObject*)");
		}

		osg::Vec3fValueObject* rhs =(Luna< osg::Vec3fValueObject >::check(L,2));
		osg::Vec3fValueObject* self=(Luna< osg::Vec3fValueObject >::check(L,1));
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

		osg::Vec3fValueObject* self=(Luna< osg::Vec3fValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec3fValueObject");
		
		return luna_dynamicCast(L,converters,"osg::Vec3fValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec3fValueObject* LunaTraits< osg::Vec3fValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Vec3fValueObject >::_bind_dtor(osg::Vec3fValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec3fValueObject >::className[] = "Vec3fValueObject";
const char LunaTraits< osg::Vec3fValueObject >::fullName[] = "osg::Vec3fValueObject";
const char LunaTraits< osg::Vec3fValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec3fValueObject >::parents[] = {0};
const int LunaTraits< osg::Vec3fValueObject >::hash = 56306081;
const int LunaTraits< osg::Vec3fValueObject >::uniqueIDs[] = {56306081,0};

luna_RegType LunaTraits< osg::Vec3fValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec3fValueObject::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Vec3fValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec3fValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec3fValueObject >::enumValues[] = {
	{0,0}
};


