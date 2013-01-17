#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btBvhSubtreeInfo {
public:
	typedef Luna< btAlignedObjectArray< btBvhSubtreeInfo > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82300513) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btBvhSubtreeInfo >*)");
		}

		btAlignedObjectArray< btBvhSubtreeInfo >* rhs =(Luna< btAlignedObjectArray< btBvhSubtreeInfo > >::check(L,2));
		btAlignedObjectArray< btBvhSubtreeInfo >* self=(Luna< btAlignedObjectArray< btBvhSubtreeInfo > >::check(L,1));
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

		btAlignedObjectArray< btBvhSubtreeInfo >* self=(Luna< btAlignedObjectArray< btBvhSubtreeInfo > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btBvhSubtreeInfo >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btBvhSubtreeInfo >",name);
	}

};

btAlignedObjectArray< btBvhSubtreeInfo >* LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btBvhSubtreeInfo >();
}

void LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > >::_bind_dtor(btAlignedObjectArray< btBvhSubtreeInfo >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > >::className[] = "btAlignedObjectArray_btBvhSubtreeInfo";
const char LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > >::fullName[] = "btAlignedObjectArray< btBvhSubtreeInfo >";
const char LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > >::hash = 82300513;
const int LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > >::uniqueIDs[] = {82300513,0};

luna_RegType LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btBvhSubtreeInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btBvhSubtreeInfo::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btBvhSubtreeInfo > >::enumValues[] = {
	{0,0}
};


