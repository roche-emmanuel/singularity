#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btOptimizedBvhNode {
public:
	typedef Luna< btAlignedObjectArray< btOptimizedBvhNode > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66511587) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btOptimizedBvhNode >*)");
		}

		btAlignedObjectArray< btOptimizedBvhNode >* rhs =(Luna< btAlignedObjectArray< btOptimizedBvhNode > >::check(L,2));
		btAlignedObjectArray< btOptimizedBvhNode >* self=(Luna< btAlignedObjectArray< btOptimizedBvhNode > >::check(L,1));
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

		btAlignedObjectArray< btOptimizedBvhNode >* self=(Luna< btAlignedObjectArray< btOptimizedBvhNode > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btOptimizedBvhNode >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btOptimizedBvhNode >",name);
	}

};

btAlignedObjectArray< btOptimizedBvhNode >* LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btOptimizedBvhNode >();
}

void LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > >::_bind_dtor(btAlignedObjectArray< btOptimizedBvhNode >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > >::className[] = "btAlignedObjectArray_btOptimizedBvhNode";
const char LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > >::fullName[] = "btAlignedObjectArray< btOptimizedBvhNode >";
const char LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > >::hash = 66511587;
const int LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > >::uniqueIDs[] = {66511587,0};

luna_RegType LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btOptimizedBvhNode::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btOptimizedBvhNode::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btOptimizedBvhNode > >::enumValues[] = {
	{0,0}
};


