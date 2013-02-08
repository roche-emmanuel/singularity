#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btQuantizedBvhNode {
public:
	typedef Luna< btAlignedObjectArray< btQuantizedBvhNode > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98719195) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btQuantizedBvhNode >*)");
		}

		btAlignedObjectArray< btQuantizedBvhNode >* rhs =(Luna< btAlignedObjectArray< btQuantizedBvhNode > >::check(L,2));
		btAlignedObjectArray< btQuantizedBvhNode >* self=(Luna< btAlignedObjectArray< btQuantizedBvhNode > >::check(L,1));
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

		btAlignedObjectArray< btQuantizedBvhNode >* self=(Luna< btAlignedObjectArray< btQuantizedBvhNode > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btQuantizedBvhNode >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btQuantizedBvhNode >",name);
	}

};

btAlignedObjectArray< btQuantizedBvhNode >* LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btQuantizedBvhNode >();
}

void LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > >::_bind_dtor(btAlignedObjectArray< btQuantizedBvhNode >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > >::className[] = "btAlignedObjectArray_btQuantizedBvhNode";
const char LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > >::fullName[] = "btAlignedObjectArray< btQuantizedBvhNode >";
const char LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > >::hash = 98719195;
const int LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > >::uniqueIDs[] = {98719195,0};

luna_RegType LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btQuantizedBvhNode::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btQuantizedBvhNode::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btQuantizedBvhNode > >::enumValues[] = {
	{0,0}
};


