#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btDbvtProxy_ptr {
public:
	typedef Luna< btAlignedObjectArray< btDbvtProxy * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74064597) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btDbvtProxy * >*)");
		}

		btAlignedObjectArray< btDbvtProxy * >* rhs =(Luna< btAlignedObjectArray< btDbvtProxy * > >::check(L,2));
		btAlignedObjectArray< btDbvtProxy * >* self=(Luna< btAlignedObjectArray< btDbvtProxy * > >::check(L,1));
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

		btAlignedObjectArray< btDbvtProxy * >* self=(Luna< btAlignedObjectArray< btDbvtProxy * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btDbvtProxy * >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btDbvtProxy * >",name);
	}

};

btAlignedObjectArray< btDbvtProxy * >* LunaTraits< btAlignedObjectArray< btDbvtProxy * > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btDbvtProxy * >();
}

void LunaTraits< btAlignedObjectArray< btDbvtProxy * > >::_bind_dtor(btAlignedObjectArray< btDbvtProxy * >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btDbvtProxy * > >::className[] = "btAlignedObjectArray_btDbvtProxy_ptr";
const char LunaTraits< btAlignedObjectArray< btDbvtProxy * > >::fullName[] = "btAlignedObjectArray< btDbvtProxy * >";
const char LunaTraits< btAlignedObjectArray< btDbvtProxy * > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btDbvtProxy * > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btDbvtProxy * > >::hash = 74064597;
const int LunaTraits< btAlignedObjectArray< btDbvtProxy * > >::uniqueIDs[] = {74064597,0};

luna_RegType LunaTraits< btAlignedObjectArray< btDbvtProxy * > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btDbvtProxy_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btDbvtProxy_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btDbvtProxy * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btDbvtProxy * > >::enumValues[] = {
	{0,0}
};


