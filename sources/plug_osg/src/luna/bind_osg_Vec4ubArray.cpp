#include <plug_common.h>

class luna_wrapper_osg_Vec4ubArray {
public:
	typedef Luna< osg::Vec4ubArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83703711) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Vec4ubArray*)");
		}

		osg::Vec4ubArray* rhs =(Luna< osg::Vec4ubArray >::check(L,2));
		osg::Vec4ubArray* self=(Luna< osg::Vec4ubArray >::check(L,1));
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

		osg::Vec4ubArray* self=(Luna< osg::Vec4ubArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec4ubArray");
		
		return luna_dynamicCast(L,converters,"osg::Vec4ubArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec4ubArray* LunaTraits< osg::Vec4ubArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Vec4ubArray >::_bind_dtor(osg::Vec4ubArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Vec4ubArray >::className[] = "Vec4ubArray";
const char LunaTraits< osg::Vec4ubArray >::fullName[] = "osg::Vec4ubArray";
const char LunaTraits< osg::Vec4ubArray >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec4ubArray >::parents[] = {0};
const int LunaTraits< osg::Vec4ubArray >::hash = 83703711;
const int LunaTraits< osg::Vec4ubArray >::uniqueIDs[] = {83703711,0};

luna_RegType LunaTraits< osg::Vec4ubArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec4ubArray::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Vec4ubArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec4ubArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec4ubArray >::enumValues[] = {
	{0,0}
};


