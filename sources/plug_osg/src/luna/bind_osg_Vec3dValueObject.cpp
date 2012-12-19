#include <plug_common.h>

class luna_wrapper_osg_Vec3dValueObject {
public:
	typedef Luna< osg::Vec3dValueObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99776782) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Vec3dValueObject*)");
		}

		osg::Vec3dValueObject* rhs =(Luna< osg::Vec3dValueObject >::check(L,2));
		osg::Vec3dValueObject* self=(Luna< osg::Vec3dValueObject >::check(L,1));
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

		osg::Vec3dValueObject* self=(Luna< osg::Vec3dValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec3dValueObject");
		
		return luna_dynamicCast(L,converters,"osg::Vec3dValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec3dValueObject* LunaTraits< osg::Vec3dValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Vec3dValueObject >::_bind_dtor(osg::Vec3dValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec3dValueObject >::className[] = "Vec3dValueObject";
const char LunaTraits< osg::Vec3dValueObject >::fullName[] = "osg::Vec3dValueObject";
const char LunaTraits< osg::Vec3dValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec3dValueObject >::parents[] = {0};
const int LunaTraits< osg::Vec3dValueObject >::hash = 99776782;
const int LunaTraits< osg::Vec3dValueObject >::uniqueIDs[] = {99776782,0};

luna_RegType LunaTraits< osg::Vec3dValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec3dValueObject::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Vec3dValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec3dValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec3dValueObject >::enumValues[] = {
	{0,0}
};


