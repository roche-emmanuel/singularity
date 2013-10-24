#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btPersistentManifold_ptr {
public:
	typedef Luna< btAlignedObjectArray< btPersistentManifold * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9763203) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btPersistentManifold * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btAlignedObjectArray< btPersistentManifold * >* rhs =(Luna< btAlignedObjectArray< btPersistentManifold * > >::check(L,2));
		btAlignedObjectArray< btPersistentManifold * >* self=(Luna< btAlignedObjectArray< btPersistentManifold * > >::check(L,1));
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

		btAlignedObjectArray< btPersistentManifold * >* self=(Luna< btAlignedObjectArray< btPersistentManifold * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btPersistentManifold * >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btPersistentManifold * >",name);
	}

};

btAlignedObjectArray< btPersistentManifold * >* LunaTraits< btAlignedObjectArray< btPersistentManifold * > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btPersistentManifold * >();
}

void LunaTraits< btAlignedObjectArray< btPersistentManifold * > >::_bind_dtor(btAlignedObjectArray< btPersistentManifold * >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btPersistentManifold * > >::className[] = "btAlignedObjectArray_btPersistentManifold_ptr";
const char LunaTraits< btAlignedObjectArray< btPersistentManifold * > >::fullName[] = "btAlignedObjectArray< btPersistentManifold * >";
const char LunaTraits< btAlignedObjectArray< btPersistentManifold * > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btPersistentManifold * > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btPersistentManifold * > >::hash = 9763203;
const int LunaTraits< btAlignedObjectArray< btPersistentManifold * > >::uniqueIDs[] = {9763203,0};

luna_RegType LunaTraits< btAlignedObjectArray< btPersistentManifold * > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btPersistentManifold_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btPersistentManifold_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btPersistentManifold * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btPersistentManifold * > >::enumValues[] = {
	{0,0}
};


