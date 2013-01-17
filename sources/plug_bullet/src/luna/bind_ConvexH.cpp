#include <plug_common.h>

class luna_wrapper_ConvexH {
public:
	typedef Luna< ConvexH > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45782120) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ConvexH*)");
		}

		ConvexH* rhs =(Luna< ConvexH >::check(L,2));
		ConvexH* self=(Luna< ConvexH >::check(L,1));
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

		ConvexH* self=(Luna< ConvexH >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ConvexH");
		
		return luna_dynamicCast(L,converters,"ConvexH",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEdges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFacets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89770050) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEdges(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,99531310) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFacets(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47216343) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ConvexH::ConvexH()
	static ConvexH* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ConvexH::ConvexH() function, expected prototype:\nConvexH::ConvexH()\nClass arguments details:\n");
		}


		return new ConvexH();
	}

	// ConvexH::ConvexH(int vertices_size, int edges_size, int facets_size)
	static ConvexH* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ConvexH::ConvexH(int vertices_size, int edges_size, int facets_size) function, expected prototype:\nConvexH::ConvexH(int vertices_size, int edges_size, int facets_size)\nClass arguments details:\n");
		}

		int vertices_size=(int)lua_tointeger(L,1);
		int edges_size=(int)lua_tointeger(L,2);
		int facets_size=(int)lua_tointeger(L,3);

		return new ConvexH(vertices_size, edges_size, facets_size);
	}

	// Overload binder for ConvexH::ConvexH
	static ConvexH* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ConvexH, cannot match any of the overloads for function ConvexH:\n  ConvexH()\n  ConvexH(int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// btAlignedObjectArray< btVector3 > ConvexH::vertices()
	static int _bind_getVertices(lua_State *L) {
		if (!_lg_typecheck_getVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btVector3 > ConvexH::vertices() function, expected prototype:\nbtAlignedObjectArray< btVector3 > ConvexH::vertices()\nClass arguments details:\n");
		}


		ConvexH* self=(Luna< ConvexH >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btVector3 > ConvexH::vertices(). Got : '%s'",typeid(Luna< ConvexH >::check(L,1)).name());
		}
		const btAlignedObjectArray< btVector3 >* lret = &self->vertices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btVector3 > >::push(L,lret,false);

		return 1;
	}

	// btAlignedObjectArray< ConvexH::HalfEdge > ConvexH::edges()
	static int _bind_getEdges(lua_State *L) {
		if (!_lg_typecheck_getEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< ConvexH::HalfEdge > ConvexH::edges() function, expected prototype:\nbtAlignedObjectArray< ConvexH::HalfEdge > ConvexH::edges()\nClass arguments details:\n");
		}


		ConvexH* self=(Luna< ConvexH >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< ConvexH::HalfEdge > ConvexH::edges(). Got : '%s'",typeid(Luna< ConvexH >::check(L,1)).name());
		}
		const btAlignedObjectArray< ConvexH::HalfEdge >* lret = &self->edges;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< ConvexH::HalfEdge > >::push(L,lret,false);

		return 1;
	}

	// btAlignedObjectArray< btPlane > ConvexH::facets()
	static int _bind_getFacets(lua_State *L) {
		if (!_lg_typecheck_getFacets(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btPlane > ConvexH::facets() function, expected prototype:\nbtAlignedObjectArray< btPlane > ConvexH::facets()\nClass arguments details:\n");
		}


		ConvexH* self=(Luna< ConvexH >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btPlane > ConvexH::facets(). Got : '%s'",typeid(Luna< ConvexH >::check(L,1)).name());
		}
		const btAlignedObjectArray< btPlane >* lret = &self->facets;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btPlane > >::push(L,lret,false);

		return 1;
	}

	// void ConvexH::vertices(btAlignedObjectArray< btVector3 > value)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ConvexH::vertices(btAlignedObjectArray< btVector3 > value) function, expected prototype:\nvoid ConvexH::vertices(btAlignedObjectArray< btVector3 > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< btVector3 >* value_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ConvexH::vertices function");
		}
		btAlignedObjectArray< btVector3 > value=*value_ptr;

		ConvexH* self=(Luna< ConvexH >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ConvexH::vertices(btAlignedObjectArray< btVector3 >). Got : '%s'",typeid(Luna< ConvexH >::check(L,1)).name());
		}
		self->vertices = value;

		return 0;
	}

	// void ConvexH::edges(btAlignedObjectArray< ConvexH::HalfEdge > value)
	static int _bind_setEdges(lua_State *L) {
		if (!_lg_typecheck_setEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ConvexH::edges(btAlignedObjectArray< ConvexH::HalfEdge > value) function, expected prototype:\nvoid ConvexH::edges(btAlignedObjectArray< ConvexH::HalfEdge > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< ConvexH::HalfEdge >* value_ptr=(Luna< btAlignedObjectArray< ConvexH::HalfEdge > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ConvexH::edges function");
		}
		btAlignedObjectArray< ConvexH::HalfEdge > value=*value_ptr;

		ConvexH* self=(Luna< ConvexH >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ConvexH::edges(btAlignedObjectArray< ConvexH::HalfEdge >). Got : '%s'",typeid(Luna< ConvexH >::check(L,1)).name());
		}
		self->edges = value;

		return 0;
	}

	// void ConvexH::facets(btAlignedObjectArray< btPlane > value)
	static int _bind_setFacets(lua_State *L) {
		if (!_lg_typecheck_setFacets(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ConvexH::facets(btAlignedObjectArray< btPlane > value) function, expected prototype:\nvoid ConvexH::facets(btAlignedObjectArray< btPlane > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< btPlane >* value_ptr=(Luna< btAlignedObjectArray< btPlane > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ConvexH::facets function");
		}
		btAlignedObjectArray< btPlane > value=*value_ptr;

		ConvexH* self=(Luna< ConvexH >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ConvexH::facets(btAlignedObjectArray< btPlane >). Got : '%s'",typeid(Luna< ConvexH >::check(L,1)).name());
		}
		self->facets = value;

		return 0;
	}


	// Operator binds:

};

ConvexH* LunaTraits< ConvexH >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ConvexH::_bind_ctor(L);
}

void LunaTraits< ConvexH >::_bind_dtor(ConvexH* obj) {
	delete obj;
}

const char LunaTraits< ConvexH >::className[] = "ConvexH";
const char LunaTraits< ConvexH >::fullName[] = "ConvexH";
const char LunaTraits< ConvexH >::moduleName[] = "bullet";
const char* LunaTraits< ConvexH >::parents[] = {0};
const int LunaTraits< ConvexH >::hash = 45782120;
const int LunaTraits< ConvexH >::uniqueIDs[] = {45782120,0};

luna_RegType LunaTraits< ConvexH >::methods[] = {
	{"getVertices", &luna_wrapper_ConvexH::_bind_getVertices},
	{"getEdges", &luna_wrapper_ConvexH::_bind_getEdges},
	{"getFacets", &luna_wrapper_ConvexH::_bind_getFacets},
	{"setVertices", &luna_wrapper_ConvexH::_bind_setVertices},
	{"setEdges", &luna_wrapper_ConvexH::_bind_setEdges},
	{"setFacets", &luna_wrapper_ConvexH::_bind_setFacets},
	{"dynCast", &luna_wrapper_ConvexH::_bind_dynCast},
	{"__eq", &luna_wrapper_ConvexH::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< ConvexH >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ConvexH >::enumValues[] = {
	{0,0}
};


