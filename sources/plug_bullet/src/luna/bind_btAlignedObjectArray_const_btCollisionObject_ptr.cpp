#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_const_btCollisionObject_ptr {
public:
	typedef Luna< btAlignedObjectArray< const btCollisionObject * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48517590) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< const btCollisionObject * >*)");
		}

		btAlignedObjectArray< const btCollisionObject * >* rhs =(Luna< btAlignedObjectArray< const btCollisionObject * > >::check(L,2));
		btAlignedObjectArray< const btCollisionObject * >* self=(Luna< btAlignedObjectArray< const btCollisionObject * > >::check(L,1));
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

		btAlignedObjectArray< const btCollisionObject * >* self=(Luna< btAlignedObjectArray< const btCollisionObject * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< const btCollisionObject * >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< const btCollisionObject * >",name);
	}

};

btAlignedObjectArray< const btCollisionObject * >* LunaTraits< btAlignedObjectArray< const btCollisionObject * > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< const btCollisionObject * >();
}

void LunaTraits< btAlignedObjectArray< const btCollisionObject * > >::_bind_dtor(btAlignedObjectArray< const btCollisionObject * >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< const btCollisionObject * > >::className[] = "btAlignedObjectArray_const_btCollisionObject_ptr";
const char LunaTraits< btAlignedObjectArray< const btCollisionObject * > >::fullName[] = "btAlignedObjectArray< const btCollisionObject * >";
const char LunaTraits< btAlignedObjectArray< const btCollisionObject * > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< const btCollisionObject * > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< const btCollisionObject * > >::hash = 48517590;
const int LunaTraits< btAlignedObjectArray< const btCollisionObject * > >::uniqueIDs[] = {48517590,0};

luna_RegType LunaTraits< btAlignedObjectArray< const btCollisionObject * > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_const_btCollisionObject_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_const_btCollisionObject_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< const btCollisionObject * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< const btCollisionObject * > >::enumValues[] = {
	{0,0}
};


