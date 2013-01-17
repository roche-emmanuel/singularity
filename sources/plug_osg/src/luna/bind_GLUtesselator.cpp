#include <plug_common.h>

class luna_wrapper_GLUtesselator {
public:
	typedef Luna< GLUtesselator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37525689) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(GLUtesselator*)");
		}

		GLUtesselator* rhs =(Luna< GLUtesselator >::check(L,2));
		GLUtesselator* self=(Luna< GLUtesselator >::check(L,1));
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

		GLUtesselator* self=(Luna< GLUtesselator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("GLUtesselator");
		
		return luna_dynamicCast(L,converters,"GLUtesselator",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

GLUtesselator* LunaTraits< GLUtesselator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< GLUtesselator >::_bind_dtor(GLUtesselator* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< GLUtesselator >::className[] = "GLUtesselator";
const char LunaTraits< GLUtesselator >::fullName[] = "GLUtesselator";
const char LunaTraits< GLUtesselator >::moduleName[] = "osg";
const char* LunaTraits< GLUtesselator >::parents[] = {0};
const int LunaTraits< GLUtesselator >::hash = 37525689;
const int LunaTraits< GLUtesselator >::uniqueIDs[] = {37525689,0};

luna_RegType LunaTraits< GLUtesselator >::methods[] = {
	{"dynCast", &luna_wrapper_GLUtesselator::_bind_dynCast},
	{"__eq", &luna_wrapper_GLUtesselator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< GLUtesselator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< GLUtesselator >::enumValues[] = {
	{0,0}
};


