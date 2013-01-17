#include <plug_common.h>

class luna_wrapper_btConvexHullComputer {
public:
	typedef Luna< btConvexHullComputer > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73459805) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConvexHullComputer*)");
		}

		btConvexHullComputer* rhs =(Luna< btConvexHullComputer >::check(L,2));
		btConvexHullComputer* self=(Luna< btConvexHullComputer >::check(L,1));
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

		btConvexHullComputer* self=(Luna< btConvexHullComputer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConvexHullComputer");
		
		return luna_dynamicCast(L,converters,"btConvexHullComputer",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_compute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEdges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFaces(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,4979927) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFaces(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41950488) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float btConvexHullComputer::compute(const float * coords, int stride, int count, float shrink, float shrinkClamp)
	static int _bind_compute_overload_1(lua_State *L) {
		if (!_lg_typecheck_compute_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexHullComputer::compute(const float * coords, int stride, int count, float shrink, float shrinkClamp) function, expected prototype:\nfloat btConvexHullComputer::compute(const float * coords, int stride, int count, float shrink, float shrinkClamp)\nClass arguments details:\n");
		}

		float coords=(float)lua_tonumber(L,2);
		int stride=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);
		float shrink=(float)lua_tonumber(L,5);
		float shrinkClamp=(float)lua_tonumber(L,6);

		btConvexHullComputer* self=(Luna< btConvexHullComputer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexHullComputer::compute(const float *, int, int, float, float). Got : '%s'",typeid(Luna< btConvexHullComputer >::check(L,1)).name());
		}
		float lret = self->compute(&coords, stride, count, shrink, shrinkClamp);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConvexHullComputer::compute(const double * coords, int stride, int count, float shrink, float shrinkClamp)
	static int _bind_compute_overload_2(lua_State *L) {
		if (!_lg_typecheck_compute_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexHullComputer::compute(const double * coords, int stride, int count, float shrink, float shrinkClamp) function, expected prototype:\nfloat btConvexHullComputer::compute(const double * coords, int stride, int count, float shrink, float shrinkClamp)\nClass arguments details:\n");
		}

		double coords=(double)lua_tonumber(L,2);
		int stride=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);
		float shrink=(float)lua_tonumber(L,5);
		float shrinkClamp=(float)lua_tonumber(L,6);

		btConvexHullComputer* self=(Luna< btConvexHullComputer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexHullComputer::compute(const double *, int, int, float, float). Got : '%s'",typeid(Luna< btConvexHullComputer >::check(L,1)).name());
		}
		float lret = self->compute(&coords, stride, count, shrink, shrinkClamp);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for btConvexHullComputer::compute
	static int _bind_compute(lua_State *L) {
		if (_lg_typecheck_compute_overload_1(L)) return _bind_compute_overload_1(L);
		if (_lg_typecheck_compute_overload_2(L)) return _bind_compute_overload_2(L);

		luaL_error(L, "error in function compute, cannot match any of the overloads for function compute:\n  compute(const float *, int, int, float, float)\n  compute(const double *, int, int, float, float)\n");
		return 0;
	}

	// btAlignedObjectArray< btVector3 > btConvexHullComputer::vertices()
	static int _bind_getVertices(lua_State *L) {
		if (!_lg_typecheck_getVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btVector3 > btConvexHullComputer::vertices() function, expected prototype:\nbtAlignedObjectArray< btVector3 > btConvexHullComputer::vertices()\nClass arguments details:\n");
		}


		btConvexHullComputer* self=(Luna< btConvexHullComputer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btVector3 > btConvexHullComputer::vertices(). Got : '%s'",typeid(Luna< btConvexHullComputer >::check(L,1)).name());
		}
		const btAlignedObjectArray< btVector3 >* lret = &self->vertices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btVector3 > >::push(L,lret,false);

		return 1;
	}

	// btAlignedObjectArray< btConvexHullComputer::Edge > btConvexHullComputer::edges()
	static int _bind_getEdges(lua_State *L) {
		if (!_lg_typecheck_getEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btConvexHullComputer::Edge > btConvexHullComputer::edges() function, expected prototype:\nbtAlignedObjectArray< btConvexHullComputer::Edge > btConvexHullComputer::edges()\nClass arguments details:\n");
		}


		btConvexHullComputer* self=(Luna< btConvexHullComputer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btConvexHullComputer::Edge > btConvexHullComputer::edges(). Got : '%s'",typeid(Luna< btConvexHullComputer >::check(L,1)).name());
		}
		const btAlignedObjectArray< btConvexHullComputer::Edge >* lret = &self->edges;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btConvexHullComputer::Edge > >::push(L,lret,false);

		return 1;
	}

	// btAlignedObjectArray< int > btConvexHullComputer::faces()
	static int _bind_getFaces(lua_State *L) {
		if (!_lg_typecheck_getFaces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< int > btConvexHullComputer::faces() function, expected prototype:\nbtAlignedObjectArray< int > btConvexHullComputer::faces()\nClass arguments details:\n");
		}


		btConvexHullComputer* self=(Luna< btConvexHullComputer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< int > btConvexHullComputer::faces(). Got : '%s'",typeid(Luna< btConvexHullComputer >::check(L,1)).name());
		}
		const btAlignedObjectArray< int >* lret = &self->faces;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< int > >::push(L,lret,false);

		return 1;
	}

	// void btConvexHullComputer::vertices(btAlignedObjectArray< btVector3 > value)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullComputer::vertices(btAlignedObjectArray< btVector3 > value) function, expected prototype:\nvoid btConvexHullComputer::vertices(btAlignedObjectArray< btVector3 > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< btVector3 >* value_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexHullComputer::vertices function");
		}
		btAlignedObjectArray< btVector3 > value=*value_ptr;

		btConvexHullComputer* self=(Luna< btConvexHullComputer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullComputer::vertices(btAlignedObjectArray< btVector3 >). Got : '%s'",typeid(Luna< btConvexHullComputer >::check(L,1)).name());
		}
		self->vertices = value;

		return 0;
	}

	// void btConvexHullComputer::edges(btAlignedObjectArray< btConvexHullComputer::Edge > value)
	static int _bind_setEdges(lua_State *L) {
		if (!_lg_typecheck_setEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullComputer::edges(btAlignedObjectArray< btConvexHullComputer::Edge > value) function, expected prototype:\nvoid btConvexHullComputer::edges(btAlignedObjectArray< btConvexHullComputer::Edge > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< btConvexHullComputer::Edge >* value_ptr=(Luna< btAlignedObjectArray< btConvexHullComputer::Edge > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexHullComputer::edges function");
		}
		btAlignedObjectArray< btConvexHullComputer::Edge > value=*value_ptr;

		btConvexHullComputer* self=(Luna< btConvexHullComputer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullComputer::edges(btAlignedObjectArray< btConvexHullComputer::Edge >). Got : '%s'",typeid(Luna< btConvexHullComputer >::check(L,1)).name());
		}
		self->edges = value;

		return 0;
	}

	// void btConvexHullComputer::faces(btAlignedObjectArray< int > value)
	static int _bind_setFaces(lua_State *L) {
		if (!_lg_typecheck_setFaces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexHullComputer::faces(btAlignedObjectArray< int > value) function, expected prototype:\nvoid btConvexHullComputer::faces(btAlignedObjectArray< int > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< int >* value_ptr=(Luna< btAlignedObjectArray< int > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexHullComputer::faces function");
		}
		btAlignedObjectArray< int > value=*value_ptr;

		btConvexHullComputer* self=(Luna< btConvexHullComputer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexHullComputer::faces(btAlignedObjectArray< int >). Got : '%s'",typeid(Luna< btConvexHullComputer >::check(L,1)).name());
		}
		self->faces = value;

		return 0;
	}


	// Operator binds:

};

btConvexHullComputer* LunaTraits< btConvexHullComputer >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btConvexHullComputer >::_bind_dtor(btConvexHullComputer* obj) {
	delete obj;
}

const char LunaTraits< btConvexHullComputer >::className[] = "btConvexHullComputer";
const char LunaTraits< btConvexHullComputer >::fullName[] = "btConvexHullComputer";
const char LunaTraits< btConvexHullComputer >::moduleName[] = "bullet";
const char* LunaTraits< btConvexHullComputer >::parents[] = {0};
const int LunaTraits< btConvexHullComputer >::hash = 73459805;
const int LunaTraits< btConvexHullComputer >::uniqueIDs[] = {73459805,0};

luna_RegType LunaTraits< btConvexHullComputer >::methods[] = {
	{"compute", &luna_wrapper_btConvexHullComputer::_bind_compute},
	{"getVertices", &luna_wrapper_btConvexHullComputer::_bind_getVertices},
	{"getEdges", &luna_wrapper_btConvexHullComputer::_bind_getEdges},
	{"getFaces", &luna_wrapper_btConvexHullComputer::_bind_getFaces},
	{"setVertices", &luna_wrapper_btConvexHullComputer::_bind_setVertices},
	{"setEdges", &luna_wrapper_btConvexHullComputer::_bind_setEdges},
	{"setFaces", &luna_wrapper_btConvexHullComputer::_bind_setFaces},
	{"dynCast", &luna_wrapper_btConvexHullComputer::_bind_dynCast},
	{"__eq", &luna_wrapper_btConvexHullComputer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexHullComputer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexHullComputer >::enumValues[] = {
	{0,0}
};


