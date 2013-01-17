#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btPlane {
public:
	typedef Luna< btAlignedObjectArray< btPlane > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47216343) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btPlane >*)");
		}

		btAlignedObjectArray< btPlane >* rhs =(Luna< btAlignedObjectArray< btPlane > >::check(L,2));
		btAlignedObjectArray< btPlane >* self=(Luna< btAlignedObjectArray< btPlane > >::check(L,1));
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

		btAlignedObjectArray< btPlane >* self=(Luna< btAlignedObjectArray< btPlane > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btPlane >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btPlane >",name);
	}

};

btAlignedObjectArray< btPlane >* LunaTraits< btAlignedObjectArray< btPlane > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btPlane >();
}

void LunaTraits< btAlignedObjectArray< btPlane > >::_bind_dtor(btAlignedObjectArray< btPlane >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btPlane > >::className[] = "btAlignedObjectArray_btPlane";
const char LunaTraits< btAlignedObjectArray< btPlane > >::fullName[] = "btAlignedObjectArray< btPlane >";
const char LunaTraits< btAlignedObjectArray< btPlane > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btPlane > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btPlane > >::hash = 47216343;
const int LunaTraits< btAlignedObjectArray< btPlane > >::uniqueIDs[] = {47216343,0};

luna_RegType LunaTraits< btAlignedObjectArray< btPlane > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btPlane::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btPlane::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btPlane > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btPlane > >::enumValues[] = {
	{0,0}
};


