#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btBroadphasePair {
public:
	typedef Luna< btAlignedObjectArray< btBroadphasePair > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25976098) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btBroadphasePair >*)");
		}

		btAlignedObjectArray< btBroadphasePair >* rhs =(Luna< btAlignedObjectArray< btBroadphasePair > >::check(L,2));
		btAlignedObjectArray< btBroadphasePair >* self=(Luna< btAlignedObjectArray< btBroadphasePair > >::check(L,1));
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

		btAlignedObjectArray< btBroadphasePair >* self=(Luna< btAlignedObjectArray< btBroadphasePair > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btBroadphasePair >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btBroadphasePair >",name);
	}

};

btAlignedObjectArray< btBroadphasePair >* LunaTraits< btAlignedObjectArray< btBroadphasePair > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btBroadphasePair >();
}

void LunaTraits< btAlignedObjectArray< btBroadphasePair > >::_bind_dtor(btAlignedObjectArray< btBroadphasePair >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btBroadphasePair > >::className[] = "btAlignedObjectArray_btBroadphasePair";
const char LunaTraits< btAlignedObjectArray< btBroadphasePair > >::fullName[] = "btAlignedObjectArray< btBroadphasePair >";
const char LunaTraits< btAlignedObjectArray< btBroadphasePair > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btBroadphasePair > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btBroadphasePair > >::hash = 25976098;
const int LunaTraits< btAlignedObjectArray< btBroadphasePair > >::uniqueIDs[] = {25976098,0};

luna_RegType LunaTraits< btAlignedObjectArray< btBroadphasePair > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btBroadphasePair::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btBroadphasePair::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btBroadphasePair > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btBroadphasePair > >::enumValues[] = {
	{0,0}
};


