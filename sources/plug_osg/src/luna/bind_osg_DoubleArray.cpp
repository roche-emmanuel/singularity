#include <plug_common.h>

class luna_wrapper_osg_DoubleArray {
public:
	typedef Luna< osg::DoubleArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50192637) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::DoubleArray*)");
		}

		osg::DoubleArray* rhs =(Luna< osg::DoubleArray >::check(L,2));
		osg::DoubleArray* self=(Luna< osg::DoubleArray >::check(L,1));
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

		osg::DoubleArray* self=(Luna< osg::DoubleArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::DoubleArray");
		
		return luna_dynamicCast(L,converters,"osg::DoubleArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::DoubleArray* LunaTraits< osg::DoubleArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::DoubleArray >::_bind_dtor(osg::DoubleArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::DoubleArray >::className[] = "DoubleArray";
const char LunaTraits< osg::DoubleArray >::fullName[] = "osg::DoubleArray";
const char LunaTraits< osg::DoubleArray >::moduleName[] = "osg";
const char* LunaTraits< osg::DoubleArray >::parents[] = {0};
const int LunaTraits< osg::DoubleArray >::hash = 50192637;
const int LunaTraits< osg::DoubleArray >::uniqueIDs[] = {50192637,0};

luna_RegType LunaTraits< osg::DoubleArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_DoubleArray::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_DoubleArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DoubleArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DoubleArray >::enumValues[] = {
	{0,0}
};


