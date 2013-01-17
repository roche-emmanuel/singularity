#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btBroadphaseInterface_ptr {
public:
	typedef Luna< btAlignedObjectArray< btBroadphaseInterface * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42019633) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btBroadphaseInterface * >*)");
		}

		btAlignedObjectArray< btBroadphaseInterface * >* rhs =(Luna< btAlignedObjectArray< btBroadphaseInterface * > >::check(L,2));
		btAlignedObjectArray< btBroadphaseInterface * >* self=(Luna< btAlignedObjectArray< btBroadphaseInterface * > >::check(L,1));
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

		btAlignedObjectArray< btBroadphaseInterface * >* self=(Luna< btAlignedObjectArray< btBroadphaseInterface * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btBroadphaseInterface * >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btBroadphaseInterface * >",name);
	}

};

btAlignedObjectArray< btBroadphaseInterface * >* LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btBroadphaseInterface * >();
}

void LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > >::_bind_dtor(btAlignedObjectArray< btBroadphaseInterface * >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > >::className[] = "btAlignedObjectArray_btBroadphaseInterface_ptr";
const char LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > >::fullName[] = "btAlignedObjectArray< btBroadphaseInterface * >";
const char LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > >::hash = 42019633;
const int LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > >::uniqueIDs[] = {42019633,0};

luna_RegType LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btBroadphaseInterface_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btBroadphaseInterface_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btBroadphaseInterface * > >::enumValues[] = {
	{0,0}
};


