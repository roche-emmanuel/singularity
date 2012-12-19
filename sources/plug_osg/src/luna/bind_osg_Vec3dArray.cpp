#include <plug_common.h>

class luna_wrapper_osg_Vec3dArray {
public:
	typedef Luna< osg::Vec3dArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80129315) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Vec3dArray*)");
		}

		osg::Vec3dArray* rhs =(Luna< osg::Vec3dArray >::check(L,2));
		osg::Vec3dArray* self=(Luna< osg::Vec3dArray >::check(L,1));
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

		osg::Vec3dArray* self=(Luna< osg::Vec3dArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec3dArray");
		
		return luna_dynamicCast(L,converters,"osg::Vec3dArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec3dArray* LunaTraits< osg::Vec3dArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Vec3dArray >::_bind_dtor(osg::Vec3dArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Vec3dArray >::className[] = "Vec3dArray";
const char LunaTraits< osg::Vec3dArray >::fullName[] = "osg::Vec3dArray";
const char LunaTraits< osg::Vec3dArray >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec3dArray >::parents[] = {0};
const int LunaTraits< osg::Vec3dArray >::hash = 80129315;
const int LunaTraits< osg::Vec3dArray >::uniqueIDs[] = {80129315,0};

luna_RegType LunaTraits< osg::Vec3dArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec3dArray::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Vec3dArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec3dArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec3dArray >::enumValues[] = {
	{0,0}
};


