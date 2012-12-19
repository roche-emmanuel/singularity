#include <plug_common.h>

class luna_wrapper_osg_ByteArray {
public:
	typedef Luna< osg::ByteArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59587824) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ByteArray*)");
		}

		osg::ByteArray* rhs =(Luna< osg::ByteArray >::check(L,2));
		osg::ByteArray* self=(Luna< osg::ByteArray >::check(L,1));
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

		osg::ByteArray* self=(Luna< osg::ByteArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ByteArray");
		
		return luna_dynamicCast(L,converters,"osg::ByteArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ByteArray* LunaTraits< osg::ByteArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ByteArray >::_bind_dtor(osg::ByteArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::ByteArray >::className[] = "ByteArray";
const char LunaTraits< osg::ByteArray >::fullName[] = "osg::ByteArray";
const char LunaTraits< osg::ByteArray >::moduleName[] = "osg";
const char* LunaTraits< osg::ByteArray >::parents[] = {0};
const int LunaTraits< osg::ByteArray >::hash = 59587824;
const int LunaTraits< osg::ByteArray >::uniqueIDs[] = {59587824,0};

luna_RegType LunaTraits< osg::ByteArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ByteArray::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ByteArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ByteArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ByteArray >::enumValues[] = {
	{0,0}
};


