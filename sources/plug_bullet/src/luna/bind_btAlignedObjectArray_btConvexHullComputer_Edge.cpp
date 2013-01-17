#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btConvexHullComputer_Edge {
public:
	typedef Luna< btAlignedObjectArray< btConvexHullComputer::Edge > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4979927) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btConvexHullComputer::Edge >*)");
		}

		btAlignedObjectArray< btConvexHullComputer::Edge >* rhs =(Luna< btAlignedObjectArray< btConvexHullComputer::Edge > >::check(L,2));
		btAlignedObjectArray< btConvexHullComputer::Edge >* self=(Luna< btAlignedObjectArray< btConvexHullComputer::Edge > >::check(L,1));
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

		btAlignedObjectArray< btConvexHullComputer::Edge >* self=(Luna< btAlignedObjectArray< btConvexHullComputer::Edge > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btConvexHullComputer::Edge >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btConvexHullComputer::Edge >",name);
	}

};

btAlignedObjectArray< btConvexHullComputer::Edge >* LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btConvexHullComputer::Edge >();
}

void LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > >::_bind_dtor(btAlignedObjectArray< btConvexHullComputer::Edge >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > >::className[] = "btAlignedObjectArray_btConvexHullComputer_Edge";
const char LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > >::fullName[] = "btAlignedObjectArray< btConvexHullComputer::Edge >";
const char LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > >::hash = 4979927;
const int LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > >::uniqueIDs[] = {4979927,0};

luna_RegType LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btConvexHullComputer_Edge::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btConvexHullComputer_Edge::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btConvexHullComputer::Edge > >::enumValues[] = {
	{0,0}
};


