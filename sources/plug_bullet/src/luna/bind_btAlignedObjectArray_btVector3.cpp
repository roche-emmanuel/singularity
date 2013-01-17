#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btVector3 {
public:
	typedef Luna< btAlignedObjectArray< btVector3 > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89770050) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btVector3 >*)");
		}

		btAlignedObjectArray< btVector3 >* rhs =(Luna< btAlignedObjectArray< btVector3 > >::check(L,2));
		btAlignedObjectArray< btVector3 >* self=(Luna< btAlignedObjectArray< btVector3 > >::check(L,1));
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

		btAlignedObjectArray< btVector3 >* self=(Luna< btAlignedObjectArray< btVector3 > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btVector3 >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btVector3 >",name);
	}

};

btAlignedObjectArray< btVector3 >* LunaTraits< btAlignedObjectArray< btVector3 > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btVector3 >();
}

void LunaTraits< btAlignedObjectArray< btVector3 > >::_bind_dtor(btAlignedObjectArray< btVector3 >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btVector3 > >::className[] = "btAlignedObjectArray_btVector3";
const char LunaTraits< btAlignedObjectArray< btVector3 > >::fullName[] = "btAlignedObjectArray< btVector3 >";
const char LunaTraits< btAlignedObjectArray< btVector3 > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btVector3 > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btVector3 > >::hash = 89770050;
const int LunaTraits< btAlignedObjectArray< btVector3 > >::uniqueIDs[] = {89770050,0};

luna_RegType LunaTraits< btAlignedObjectArray< btVector3 > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btVector3::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btVector3::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btVector3 > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btVector3 > >::enumValues[] = {
	{0,0}
};


