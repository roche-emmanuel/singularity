#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_ConvexH_HalfEdge {
public:
	typedef Luna< btAlignedObjectArray< ConvexH::HalfEdge > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99531310) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< ConvexH::HalfEdge >*)");
		}

		btAlignedObjectArray< ConvexH::HalfEdge >* rhs =(Luna< btAlignedObjectArray< ConvexH::HalfEdge > >::check(L,2));
		btAlignedObjectArray< ConvexH::HalfEdge >* self=(Luna< btAlignedObjectArray< ConvexH::HalfEdge > >::check(L,1));
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

		btAlignedObjectArray< ConvexH::HalfEdge >* self=(Luna< btAlignedObjectArray< ConvexH::HalfEdge > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< ConvexH::HalfEdge >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< ConvexH::HalfEdge >",name);
	}

};

btAlignedObjectArray< ConvexH::HalfEdge >* LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< ConvexH::HalfEdge >();
}

void LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > >::_bind_dtor(btAlignedObjectArray< ConvexH::HalfEdge >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > >::className[] = "btAlignedObjectArray_ConvexH_HalfEdge";
const char LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > >::fullName[] = "btAlignedObjectArray< ConvexH::HalfEdge >";
const char LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > >::hash = 99531310;
const int LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > >::uniqueIDs[] = {99531310,0};

luna_RegType LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_ConvexH_HalfEdge::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_ConvexH_HalfEdge::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< ConvexH::HalfEdge > >::enumValues[] = {
	{0,0}
};


