#include <plug_common.h>

class luna_wrapper_osg_FloatArray {
public:
	typedef Luna< osg::FloatArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,43730923) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::FloatArray*)");
		}

		osg::FloatArray* rhs =(Luna< osg::FloatArray >::check(L,2));
		osg::FloatArray* self=(Luna< osg::FloatArray >::check(L,1));
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

		osg::FloatArray* self=(Luna< osg::FloatArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::FloatArray");
		
		return luna_dynamicCast(L,converters,"osg::FloatArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::FloatArray* LunaTraits< osg::FloatArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::FloatArray >::_bind_dtor(osg::FloatArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::FloatArray >::className[] = "FloatArray";
const char LunaTraits< osg::FloatArray >::fullName[] = "osg::FloatArray";
const char LunaTraits< osg::FloatArray >::moduleName[] = "osg";
const char* LunaTraits< osg::FloatArray >::parents[] = {0};
const int LunaTraits< osg::FloatArray >::hash = 43730923;
const int LunaTraits< osg::FloatArray >::uniqueIDs[] = {43730923,0};

luna_RegType LunaTraits< osg::FloatArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_FloatArray::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_FloatArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FloatArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FloatArray >::enumValues[] = {
	{0,0}
};


