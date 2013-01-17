#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btCollisionObject_ptr {
public:
	typedef Luna< btAlignedObjectArray< btCollisionObject * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68676713) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btCollisionObject * >*)");
		}

		btAlignedObjectArray< btCollisionObject * >* rhs =(Luna< btAlignedObjectArray< btCollisionObject * > >::check(L,2));
		btAlignedObjectArray< btCollisionObject * >* self=(Luna< btAlignedObjectArray< btCollisionObject * > >::check(L,1));
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

		btAlignedObjectArray< btCollisionObject * >* self=(Luna< btAlignedObjectArray< btCollisionObject * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btCollisionObject * >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btCollisionObject * >",name);
	}

};

btAlignedObjectArray< btCollisionObject * >* LunaTraits< btAlignedObjectArray< btCollisionObject * > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btCollisionObject * >();
}

void LunaTraits< btAlignedObjectArray< btCollisionObject * > >::_bind_dtor(btAlignedObjectArray< btCollisionObject * >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btCollisionObject * > >::className[] = "btAlignedObjectArray_btCollisionObject_ptr";
const char LunaTraits< btAlignedObjectArray< btCollisionObject * > >::fullName[] = "btAlignedObjectArray< btCollisionObject * >";
const char LunaTraits< btAlignedObjectArray< btCollisionObject * > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btCollisionObject * > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btCollisionObject * > >::hash = 68676713;
const int LunaTraits< btAlignedObjectArray< btCollisionObject * > >::uniqueIDs[] = {68676713,0};

luna_RegType LunaTraits< btAlignedObjectArray< btCollisionObject * > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btCollisionObject_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btCollisionObject_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btCollisionObject * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btCollisionObject * > >::enumValues[] = {
	{0,0}
};


