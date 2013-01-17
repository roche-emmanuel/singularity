#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btHashMap_btHashInt_btTriangleInfo {
public:
	typedef Luna< btHashMap< btHashInt, btTriangleInfo > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67655647) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btHashMap< btHashInt, btTriangleInfo >*)");
		}

		btHashMap< btHashInt, btTriangleInfo >* rhs =(Luna< btHashMap< btHashInt, btTriangleInfo > >::check(L,2));
		btHashMap< btHashInt, btTriangleInfo >* self=(Luna< btHashMap< btHashInt, btTriangleInfo > >::check(L,1));
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

		btHashMap< btHashInt, btTriangleInfo >* self=(Luna< btHashMap< btHashInt, btTriangleInfo > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btHashMap< btHashInt, btTriangleInfo >");
		
		return luna_dynamicCast(L,converters,"btHashMap< btHashInt, btTriangleInfo >",name);
	}

};

btHashMap< btHashInt, btTriangleInfo >* LunaTraits< btHashMap< btHashInt, btTriangleInfo > >::_bind_ctor(lua_State *L) {
	return new btHashMap< btHashInt, btTriangleInfo >();
}

void LunaTraits< btHashMap< btHashInt, btTriangleInfo > >::_bind_dtor(btHashMap< btHashInt, btTriangleInfo >* obj) {
	delete obj;
}

const char LunaTraits< btHashMap< btHashInt, btTriangleInfo > >::className[] = "btHashMap_btHashInt_btTriangleInfo";
const char LunaTraits< btHashMap< btHashInt, btTriangleInfo > >::fullName[] = "btHashMap< btHashInt, btTriangleInfo >";
const char LunaTraits< btHashMap< btHashInt, btTriangleInfo > >::moduleName[] = "bullet";
const char* LunaTraits< btHashMap< btHashInt, btTriangleInfo > >::parents[] = {0};
const int LunaTraits< btHashMap< btHashInt, btTriangleInfo > >::hash = 67655647;
const int LunaTraits< btHashMap< btHashInt, btTriangleInfo > >::uniqueIDs[] = {67655647,0};

luna_RegType LunaTraits< btHashMap< btHashInt, btTriangleInfo > >::methods[] = {
	{"dynCast", &luna_wrapper_btHashMap_btHashInt_btTriangleInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btHashMap_btHashInt_btTriangleInfo::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btHashMap< btHashInt, btTriangleInfo > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btHashMap< btHashInt, btTriangleInfo > >::enumValues[] = {
	{0,0}
};


