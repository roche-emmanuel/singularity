#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btMaterialProperties {
public:
	typedef Luna< btAlignedObjectArray< btMaterialProperties > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81043876) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btMaterialProperties >*)");
		}

		btAlignedObjectArray< btMaterialProperties >* rhs =(Luna< btAlignedObjectArray< btMaterialProperties > >::check(L,2));
		btAlignedObjectArray< btMaterialProperties >* self=(Luna< btAlignedObjectArray< btMaterialProperties > >::check(L,1));
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

		btAlignedObjectArray< btMaterialProperties >* self=(Luna< btAlignedObjectArray< btMaterialProperties > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btMaterialProperties >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btMaterialProperties >",name);
	}

};

btAlignedObjectArray< btMaterialProperties >* LunaTraits< btAlignedObjectArray< btMaterialProperties > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btMaterialProperties >();
}

void LunaTraits< btAlignedObjectArray< btMaterialProperties > >::_bind_dtor(btAlignedObjectArray< btMaterialProperties >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btMaterialProperties > >::className[] = "btAlignedObjectArray_btMaterialProperties";
const char LunaTraits< btAlignedObjectArray< btMaterialProperties > >::fullName[] = "btAlignedObjectArray< btMaterialProperties >";
const char LunaTraits< btAlignedObjectArray< btMaterialProperties > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btMaterialProperties > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btMaterialProperties > >::hash = 81043876;
const int LunaTraits< btAlignedObjectArray< btMaterialProperties > >::uniqueIDs[] = {81043876,0};

luna_RegType LunaTraits< btAlignedObjectArray< btMaterialProperties > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btMaterialProperties::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btMaterialProperties::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btMaterialProperties > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btMaterialProperties > >::enumValues[] = {
	{0,0}
};


