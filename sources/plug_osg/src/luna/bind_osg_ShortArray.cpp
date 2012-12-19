#include <plug_common.h>

class luna_wrapper_osg_ShortArray {
public:
	typedef Luna< osg::ShortArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17157487) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ShortArray*)");
		}

		osg::ShortArray* rhs =(Luna< osg::ShortArray >::check(L,2));
		osg::ShortArray* self=(Luna< osg::ShortArray >::check(L,1));
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

		osg::ShortArray* self=(Luna< osg::ShortArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ShortArray");
		
		return luna_dynamicCast(L,converters,"osg::ShortArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ShortArray* LunaTraits< osg::ShortArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ShortArray >::_bind_dtor(osg::ShortArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::ShortArray >::className[] = "ShortArray";
const char LunaTraits< osg::ShortArray >::fullName[] = "osg::ShortArray";
const char LunaTraits< osg::ShortArray >::moduleName[] = "osg";
const char* LunaTraits< osg::ShortArray >::parents[] = {0};
const int LunaTraits< osg::ShortArray >::hash = 17157487;
const int LunaTraits< osg::ShortArray >::uniqueIDs[] = {17157487,0};

luna_RegType LunaTraits< osg::ShortArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ShortArray::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ShortArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShortArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShortArray >::enumValues[] = {
	{0,0}
};


