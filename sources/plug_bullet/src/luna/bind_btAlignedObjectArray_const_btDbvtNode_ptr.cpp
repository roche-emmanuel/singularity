#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_const_btDbvtNode_ptr {
public:
	typedef Luna< btAlignedObjectArray< const btDbvtNode * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,275816) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< const btDbvtNode * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btAlignedObjectArray< const btDbvtNode * >* rhs =(Luna< btAlignedObjectArray< const btDbvtNode * > >::check(L,2));
		btAlignedObjectArray< const btDbvtNode * >* self=(Luna< btAlignedObjectArray< const btDbvtNode * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btAlignedObjectArray< const btDbvtNode * >* self=(Luna< btAlignedObjectArray< const btDbvtNode * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< const btDbvtNode * >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< const btDbvtNode * >",name);
	}

};

btAlignedObjectArray< const btDbvtNode * >* LunaTraits< btAlignedObjectArray< const btDbvtNode * > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< const btDbvtNode * >();
}

void LunaTraits< btAlignedObjectArray< const btDbvtNode * > >::_bind_dtor(btAlignedObjectArray< const btDbvtNode * >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< const btDbvtNode * > >::className[] = "btAlignedObjectArray_const_btDbvtNode_ptr";
const char LunaTraits< btAlignedObjectArray< const btDbvtNode * > >::fullName[] = "btAlignedObjectArray< const btDbvtNode * >";
const char LunaTraits< btAlignedObjectArray< const btDbvtNode * > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< const btDbvtNode * > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< const btDbvtNode * > >::hash = 275816;
const int LunaTraits< btAlignedObjectArray< const btDbvtNode * > >::uniqueIDs[] = {275816,0};

luna_RegType LunaTraits< btAlignedObjectArray< const btDbvtNode * > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_const_btDbvtNode_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_const_btDbvtNode_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< const btDbvtNode * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< const btDbvtNode * > >::enumValues[] = {
	{0,0}
};


