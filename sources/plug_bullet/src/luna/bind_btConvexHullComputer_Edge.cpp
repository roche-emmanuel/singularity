#include <plug_common.h>

class luna_wrapper_btConvexHullComputer_Edge {
public:
	typedef Luna< btConvexHullComputer::Edge > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45120957) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConvexHullComputer::Edge*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btConvexHullComputer::Edge* rhs =(Luna< btConvexHullComputer::Edge >::check(L,2));
		btConvexHullComputer::Edge* self=(Luna< btConvexHullComputer::Edge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btConvexHullComputer::Edge* self= (btConvexHullComputer::Edge*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexHullComputer::Edge >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45120957) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btConvexHullComputer::Edge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btConvexHullComputer::Edge* self=(Luna< btConvexHullComputer::Edge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConvexHullComputer::Edge");
		
		return luna_dynamicCast(L,converters,"btConvexHullComputer::Edge",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getSourceVertex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTargetVertex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNextEdgeOfVertex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNextEdgeOfFace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReverseEdge(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int btConvexHullComputer::Edge::getSourceVertex() const
	static int _bind_getSourceVertex(lua_State *L) {
		if (!_lg_typecheck_getSourceVertex(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexHullComputer::Edge::getSourceVertex() const function, expected prototype:\nint btConvexHullComputer::Edge::getSourceVertex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexHullComputer::Edge* self=(Luna< btConvexHullComputer::Edge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexHullComputer::Edge::getSourceVertex() const. Got : '%s'\n%s",typeid(Luna< btConvexHullComputer::Edge >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSourceVertex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexHullComputer::Edge::getTargetVertex() const
	static int _bind_getTargetVertex(lua_State *L) {
		if (!_lg_typecheck_getTargetVertex(L)) {
			luaL_error(L, "luna typecheck failed in int btConvexHullComputer::Edge::getTargetVertex() const function, expected prototype:\nint btConvexHullComputer::Edge::getTargetVertex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexHullComputer::Edge* self=(Luna< btConvexHullComputer::Edge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btConvexHullComputer::Edge::getTargetVertex() const. Got : '%s'\n%s",typeid(Luna< btConvexHullComputer::Edge >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTargetVertex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btConvexHullComputer::Edge * btConvexHullComputer::Edge::getNextEdgeOfVertex() const
	static int _bind_getNextEdgeOfVertex(lua_State *L) {
		if (!_lg_typecheck_getNextEdgeOfVertex(L)) {
			luaL_error(L, "luna typecheck failed in const btConvexHullComputer::Edge * btConvexHullComputer::Edge::getNextEdgeOfVertex() const function, expected prototype:\nconst btConvexHullComputer::Edge * btConvexHullComputer::Edge::getNextEdgeOfVertex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexHullComputer::Edge* self=(Luna< btConvexHullComputer::Edge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const btConvexHullComputer::Edge * btConvexHullComputer::Edge::getNextEdgeOfVertex() const. Got : '%s'\n%s",typeid(Luna< btConvexHullComputer::Edge >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btConvexHullComputer::Edge * lret = self->getNextEdgeOfVertex();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexHullComputer::Edge >::push(L,lret,false);

		return 1;
	}

	// const btConvexHullComputer::Edge * btConvexHullComputer::Edge::getNextEdgeOfFace() const
	static int _bind_getNextEdgeOfFace(lua_State *L) {
		if (!_lg_typecheck_getNextEdgeOfFace(L)) {
			luaL_error(L, "luna typecheck failed in const btConvexHullComputer::Edge * btConvexHullComputer::Edge::getNextEdgeOfFace() const function, expected prototype:\nconst btConvexHullComputer::Edge * btConvexHullComputer::Edge::getNextEdgeOfFace() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexHullComputer::Edge* self=(Luna< btConvexHullComputer::Edge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const btConvexHullComputer::Edge * btConvexHullComputer::Edge::getNextEdgeOfFace() const. Got : '%s'\n%s",typeid(Luna< btConvexHullComputer::Edge >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btConvexHullComputer::Edge * lret = self->getNextEdgeOfFace();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexHullComputer::Edge >::push(L,lret,false);

		return 1;
	}

	// const btConvexHullComputer::Edge * btConvexHullComputer::Edge::getReverseEdge() const
	static int _bind_getReverseEdge(lua_State *L) {
		if (!_lg_typecheck_getReverseEdge(L)) {
			luaL_error(L, "luna typecheck failed in const btConvexHullComputer::Edge * btConvexHullComputer::Edge::getReverseEdge() const function, expected prototype:\nconst btConvexHullComputer::Edge * btConvexHullComputer::Edge::getReverseEdge() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btConvexHullComputer::Edge* self=(Luna< btConvexHullComputer::Edge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const btConvexHullComputer::Edge * btConvexHullComputer::Edge::getReverseEdge() const. Got : '%s'\n%s",typeid(Luna< btConvexHullComputer::Edge >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btConvexHullComputer::Edge * lret = self->getReverseEdge();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexHullComputer::Edge >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btConvexHullComputer::Edge* LunaTraits< btConvexHullComputer::Edge >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btConvexHullComputer::Edge >::_bind_dtor(btConvexHullComputer::Edge* obj) {
	delete obj;
}

const char LunaTraits< btConvexHullComputer::Edge >::className[] = "btConvexHullComputer_Edge";
const char LunaTraits< btConvexHullComputer::Edge >::fullName[] = "btConvexHullComputer::Edge";
const char LunaTraits< btConvexHullComputer::Edge >::moduleName[] = "bullet";
const char* LunaTraits< btConvexHullComputer::Edge >::parents[] = {0};
const int LunaTraits< btConvexHullComputer::Edge >::hash = 45120957;
const int LunaTraits< btConvexHullComputer::Edge >::uniqueIDs[] = {45120957,0};

luna_RegType LunaTraits< btConvexHullComputer::Edge >::methods[] = {
	{"getSourceVertex", &luna_wrapper_btConvexHullComputer_Edge::_bind_getSourceVertex},
	{"getTargetVertex", &luna_wrapper_btConvexHullComputer_Edge::_bind_getTargetVertex},
	{"getNextEdgeOfVertex", &luna_wrapper_btConvexHullComputer_Edge::_bind_getNextEdgeOfVertex},
	{"getNextEdgeOfFace", &luna_wrapper_btConvexHullComputer_Edge::_bind_getNextEdgeOfFace},
	{"getReverseEdge", &luna_wrapper_btConvexHullComputer_Edge::_bind_getReverseEdge},
	{"dynCast", &luna_wrapper_btConvexHullComputer_Edge::_bind_dynCast},
	{"__eq", &luna_wrapper_btConvexHullComputer_Edge::_bind___eq},
	{"fromVoid", &luna_wrapper_btConvexHullComputer_Edge::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexHullComputer_Edge::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexHullComputer::Edge >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexHullComputer::Edge >::enumValues[] = {
	{0,0}
};


