#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btIndexedMesh {
public:
	typedef Luna< btAlignedObjectArray< btIndexedMesh > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93970761) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btIndexedMesh >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btAlignedObjectArray< btIndexedMesh >* rhs =(Luna< btAlignedObjectArray< btIndexedMesh > >::check(L,2));
		btAlignedObjectArray< btIndexedMesh >* self=(Luna< btAlignedObjectArray< btIndexedMesh > >::check(L,1));
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

		btAlignedObjectArray< btIndexedMesh >* self=(Luna< btAlignedObjectArray< btIndexedMesh > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btIndexedMesh >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btIndexedMesh >",name);
	}

};

btAlignedObjectArray< btIndexedMesh >* LunaTraits< btAlignedObjectArray< btIndexedMesh > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btIndexedMesh >();
}

void LunaTraits< btAlignedObjectArray< btIndexedMesh > >::_bind_dtor(btAlignedObjectArray< btIndexedMesh >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btIndexedMesh > >::className[] = "btAlignedObjectArray_btIndexedMesh";
const char LunaTraits< btAlignedObjectArray< btIndexedMesh > >::fullName[] = "btAlignedObjectArray< btIndexedMesh >";
const char LunaTraits< btAlignedObjectArray< btIndexedMesh > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btIndexedMesh > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btIndexedMesh > >::hash = 93970761;
const int LunaTraits< btAlignedObjectArray< btIndexedMesh > >::uniqueIDs[] = {93970761,0};

luna_RegType LunaTraits< btAlignedObjectArray< btIndexedMesh > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btIndexedMesh::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btIndexedMesh::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btIndexedMesh > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btIndexedMesh > >::enumValues[] = {
	{0,0}
};


