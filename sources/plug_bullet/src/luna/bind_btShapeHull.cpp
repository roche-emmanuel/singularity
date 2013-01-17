#include <plug_common.h>

class luna_wrapper_btShapeHull {
public:
	typedef Luna< btShapeHull > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39611939) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btShapeHull*)");
		}

		btShapeHull* rhs =(Luna< btShapeHull >::check(L,2));
		btShapeHull* self=(Luna< btShapeHull >::check(L,1));
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

		btShapeHull* self=(Luna< btShapeHull >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btShapeHull");
		
		return luna_dynamicCast(L,converters,"btShapeHull",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_buildHull(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_numTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_numVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_numIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndexPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btShapeHull::btShapeHull(const btConvexShape * shape)
	static btShapeHull* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btShapeHull::btShapeHull(const btConvexShape * shape) function, expected prototype:\nbtShapeHull::btShapeHull(const btConvexShape * shape)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		const btConvexShape* shape=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));

		return new btShapeHull(shape);
	}


	// Function binds:
	// bool btShapeHull::buildHull(float margin)
	static int _bind_buildHull(lua_State *L) {
		if (!_lg_typecheck_buildHull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btShapeHull::buildHull(float margin) function, expected prototype:\nbool btShapeHull::buildHull(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btShapeHull* self=(Luna< btShapeHull >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btShapeHull::buildHull(float). Got : '%s'",typeid(Luna< btShapeHull >::check(L,1)).name());
		}
		bool lret = self->buildHull(margin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btShapeHull::numTriangles() const
	static int _bind_numTriangles(lua_State *L) {
		if (!_lg_typecheck_numTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btShapeHull::numTriangles() const function, expected prototype:\nint btShapeHull::numTriangles() const\nClass arguments details:\n");
		}


		btShapeHull* self=(Luna< btShapeHull >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btShapeHull::numTriangles() const. Got : '%s'",typeid(Luna< btShapeHull >::check(L,1)).name());
		}
		int lret = self->numTriangles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btShapeHull::numVertices() const
	static int _bind_numVertices(lua_State *L) {
		if (!_lg_typecheck_numVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btShapeHull::numVertices() const function, expected prototype:\nint btShapeHull::numVertices() const\nClass arguments details:\n");
		}


		btShapeHull* self=(Luna< btShapeHull >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btShapeHull::numVertices() const. Got : '%s'",typeid(Luna< btShapeHull >::check(L,1)).name());
		}
		int lret = self->numVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btShapeHull::numIndices() const
	static int _bind_numIndices(lua_State *L) {
		if (!_lg_typecheck_numIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btShapeHull::numIndices() const function, expected prototype:\nint btShapeHull::numIndices() const\nClass arguments details:\n");
		}


		btShapeHull* self=(Luna< btShapeHull >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btShapeHull::numIndices() const. Got : '%s'",typeid(Luna< btShapeHull >::check(L,1)).name());
		}
		int lret = self->numIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btVector3 * btShapeHull::getVertexPointer() const
	static int _bind_getVertexPointer(lua_State *L) {
		if (!_lg_typecheck_getVertexPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 * btShapeHull::getVertexPointer() const function, expected prototype:\nconst btVector3 * btShapeHull::getVertexPointer() const\nClass arguments details:\n");
		}


		btShapeHull* self=(Luna< btShapeHull >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 * btShapeHull::getVertexPointer() const. Got : '%s'",typeid(Luna< btShapeHull >::check(L,1)).name());
		}
		const btVector3 * lret = self->getVertexPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const unsigned int * btShapeHull::getIndexPointer() const
	static int _bind_getIndexPointer(lua_State *L) {
		if (!_lg_typecheck_getIndexPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned int * btShapeHull::getIndexPointer() const function, expected prototype:\nconst unsigned int * btShapeHull::getIndexPointer() const\nClass arguments details:\n");
		}


		btShapeHull* self=(Luna< btShapeHull >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned int * btShapeHull::getIndexPointer() const. Got : '%s'",typeid(Luna< btShapeHull >::check(L,1)).name());
		}
		const unsigned int * lret = self->getIndexPointer();
		lua_pushnumber(L,*lret);

		return 1;
	}


	// Operator binds:

};

btShapeHull* LunaTraits< btShapeHull >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btShapeHull::_bind_ctor(L);
}

void LunaTraits< btShapeHull >::_bind_dtor(btShapeHull* obj) {
	delete obj;
}

const char LunaTraits< btShapeHull >::className[] = "btShapeHull";
const char LunaTraits< btShapeHull >::fullName[] = "btShapeHull";
const char LunaTraits< btShapeHull >::moduleName[] = "bullet";
const char* LunaTraits< btShapeHull >::parents[] = {0};
const int LunaTraits< btShapeHull >::hash = 39611939;
const int LunaTraits< btShapeHull >::uniqueIDs[] = {39611939,0};

luna_RegType LunaTraits< btShapeHull >::methods[] = {
	{"buildHull", &luna_wrapper_btShapeHull::_bind_buildHull},
	{"numTriangles", &luna_wrapper_btShapeHull::_bind_numTriangles},
	{"numVertices", &luna_wrapper_btShapeHull::_bind_numVertices},
	{"numIndices", &luna_wrapper_btShapeHull::_bind_numIndices},
	{"getVertexPointer", &luna_wrapper_btShapeHull::_bind_getVertexPointer},
	{"getIndexPointer", &luna_wrapper_btShapeHull::_bind_getIndexPointer},
	{"dynCast", &luna_wrapper_btShapeHull::_bind_dynCast},
	{"__eq", &luna_wrapper_btShapeHull::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btShapeHull >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btShapeHull >::enumValues[] = {
	{0,0}
};


