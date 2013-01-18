#include <plug_common.h>

class luna_wrapper_btSubSimplexClosestResult {
public:
	typedef Luna< btSubSimplexClosestResult > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75923500) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btSubSimplexClosestResult*)");
		}

		btSubSimplexClosestResult* rhs =(Luna< btSubSimplexClosestResult >::check(L,2));
		btSubSimplexClosestResult* self=(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btSubSimplexClosestResult* self= (btSubSimplexClosestResult*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSubSimplexClosestResult >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75923500) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		btSubSimplexClosestResult* self=(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btSubSimplexClosestResult");
		
		return luna_dynamicCast(L,converters,"btSubSimplexClosestResult",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBarycentricCoordinates(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClosestPointOnSimplex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsedVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDegenerate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClosestPointOnSimplex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUsedVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61938597) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDegenerate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void btSubSimplexClosestResult::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSubSimplexClosestResult::reset() function, expected prototype:\nvoid btSubSimplexClosestResult::reset()\nClass arguments details:\n");
		}


		btSubSimplexClosestResult* self=(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSubSimplexClosestResult::reset(). Got : '%s'",typeid(Luna< btSubSimplexClosestResult >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// bool btSubSimplexClosestResult::isValid()
	static int _bind_isValid(lua_State *L) {
		if (!_lg_typecheck_isValid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSubSimplexClosestResult::isValid() function, expected prototype:\nbool btSubSimplexClosestResult::isValid()\nClass arguments details:\n");
		}


		btSubSimplexClosestResult* self=(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSubSimplexClosestResult::isValid(). Got : '%s'",typeid(Luna< btSubSimplexClosestResult >::check(L,1)).name());
		}
		bool lret = self->isValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btSubSimplexClosestResult::setBarycentricCoordinates(float a = float (0.), float b = float (0.), float c = float (0.), float d = float (0.))
	static int _bind_setBarycentricCoordinates(lua_State *L) {
		if (!_lg_typecheck_setBarycentricCoordinates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSubSimplexClosestResult::setBarycentricCoordinates(float a = float (0.), float b = float (0.), float c = float (0.), float d = float (0.)) function, expected prototype:\nvoid btSubSimplexClosestResult::setBarycentricCoordinates(float a = float (0.), float b = float (0.), float c = float (0.), float d = float (0.))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float a=luatop>1 ? (float)lua_tonumber(L,2) : float (0.);
		float b=luatop>2 ? (float)lua_tonumber(L,3) : float (0.);
		float c=luatop>3 ? (float)lua_tonumber(L,4) : float (0.);
		float d=luatop>4 ? (float)lua_tonumber(L,5) : float (0.);

		btSubSimplexClosestResult* self=(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSubSimplexClosestResult::setBarycentricCoordinates(float, float, float, float). Got : '%s'",typeid(Luna< btSubSimplexClosestResult >::check(L,1)).name());
		}
		self->setBarycentricCoordinates(a, b, c, d);

		return 0;
	}

	// btVector3 btSubSimplexClosestResult::m_closestPointOnSimplex()
	static int _bind_getClosestPointOnSimplex(lua_State *L) {
		if (!_lg_typecheck_getClosestPointOnSimplex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSubSimplexClosestResult::m_closestPointOnSimplex() function, expected prototype:\nbtVector3 btSubSimplexClosestResult::m_closestPointOnSimplex()\nClass arguments details:\n");
		}


		btSubSimplexClosestResult* self=(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSubSimplexClosestResult::m_closestPointOnSimplex(). Got : '%s'",typeid(Luna< btSubSimplexClosestResult >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_closestPointOnSimplex;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btUsageBitfield btSubSimplexClosestResult::m_usedVertices()
	static int _bind_getUsedVertices(lua_State *L) {
		if (!_lg_typecheck_getUsedVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btUsageBitfield btSubSimplexClosestResult::m_usedVertices() function, expected prototype:\nbtUsageBitfield btSubSimplexClosestResult::m_usedVertices()\nClass arguments details:\n");
		}


		btSubSimplexClosestResult* self=(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btUsageBitfield btSubSimplexClosestResult::m_usedVertices(). Got : '%s'",typeid(Luna< btSubSimplexClosestResult >::check(L,1)).name());
		}
		const btUsageBitfield* lret = &self->m_usedVertices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btUsageBitfield >::push(L,lret,false);

		return 1;
	}

	// bool btSubSimplexClosestResult::m_degenerate()
	static int _bind_getDegenerate(lua_State *L) {
		if (!_lg_typecheck_getDegenerate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSubSimplexClosestResult::m_degenerate() function, expected prototype:\nbool btSubSimplexClosestResult::m_degenerate()\nClass arguments details:\n");
		}


		btSubSimplexClosestResult* self=(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSubSimplexClosestResult::m_degenerate(). Got : '%s'",typeid(Luna< btSubSimplexClosestResult >::check(L,1)).name());
		}
		bool lret = self->m_degenerate;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btSubSimplexClosestResult::m_closestPointOnSimplex(btVector3 value)
	static int _bind_setClosestPointOnSimplex(lua_State *L) {
		if (!_lg_typecheck_setClosestPointOnSimplex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSubSimplexClosestResult::m_closestPointOnSimplex(btVector3 value) function, expected prototype:\nvoid btSubSimplexClosestResult::m_closestPointOnSimplex(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSubSimplexClosestResult::m_closestPointOnSimplex function");
		}
		btVector3 value=*value_ptr;

		btSubSimplexClosestResult* self=(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSubSimplexClosestResult::m_closestPointOnSimplex(btVector3). Got : '%s'",typeid(Luna< btSubSimplexClosestResult >::check(L,1)).name());
		}
		self->m_closestPointOnSimplex = value;

		return 0;
	}

	// void btSubSimplexClosestResult::m_usedVertices(btUsageBitfield value)
	static int _bind_setUsedVertices(lua_State *L) {
		if (!_lg_typecheck_setUsedVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSubSimplexClosestResult::m_usedVertices(btUsageBitfield value) function, expected prototype:\nvoid btSubSimplexClosestResult::m_usedVertices(btUsageBitfield value)\nClass arguments details:\narg 1 ID = 61938597\n");
		}

		btUsageBitfield* value_ptr=(Luna< btUsageBitfield >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSubSimplexClosestResult::m_usedVertices function");
		}
		btUsageBitfield value=*value_ptr;

		btSubSimplexClosestResult* self=(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSubSimplexClosestResult::m_usedVertices(btUsageBitfield). Got : '%s'",typeid(Luna< btSubSimplexClosestResult >::check(L,1)).name());
		}
		self->m_usedVertices = value;

		return 0;
	}

	// void btSubSimplexClosestResult::m_degenerate(bool value)
	static int _bind_setDegenerate(lua_State *L) {
		if (!_lg_typecheck_setDegenerate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSubSimplexClosestResult::m_degenerate(bool value) function, expected prototype:\nvoid btSubSimplexClosestResult::m_degenerate(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btSubSimplexClosestResult* self=(Luna< btSubSimplexClosestResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSubSimplexClosestResult::m_degenerate(bool). Got : '%s'",typeid(Luna< btSubSimplexClosestResult >::check(L,1)).name());
		}
		self->m_degenerate = value;

		return 0;
	}


	// Operator binds:

};

btSubSimplexClosestResult* LunaTraits< btSubSimplexClosestResult >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btSubSimplexClosestResult >::_bind_dtor(btSubSimplexClosestResult* obj) {
	delete obj;
}

const char LunaTraits< btSubSimplexClosestResult >::className[] = "btSubSimplexClosestResult";
const char LunaTraits< btSubSimplexClosestResult >::fullName[] = "btSubSimplexClosestResult";
const char LunaTraits< btSubSimplexClosestResult >::moduleName[] = "bullet";
const char* LunaTraits< btSubSimplexClosestResult >::parents[] = {0};
const int LunaTraits< btSubSimplexClosestResult >::hash = 75923500;
const int LunaTraits< btSubSimplexClosestResult >::uniqueIDs[] = {75923500,0};

luna_RegType LunaTraits< btSubSimplexClosestResult >::methods[] = {
	{"reset", &luna_wrapper_btSubSimplexClosestResult::_bind_reset},
	{"isValid", &luna_wrapper_btSubSimplexClosestResult::_bind_isValid},
	{"setBarycentricCoordinates", &luna_wrapper_btSubSimplexClosestResult::_bind_setBarycentricCoordinates},
	{"getClosestPointOnSimplex", &luna_wrapper_btSubSimplexClosestResult::_bind_getClosestPointOnSimplex},
	{"getUsedVertices", &luna_wrapper_btSubSimplexClosestResult::_bind_getUsedVertices},
	{"getDegenerate", &luna_wrapper_btSubSimplexClosestResult::_bind_getDegenerate},
	{"setClosestPointOnSimplex", &luna_wrapper_btSubSimplexClosestResult::_bind_setClosestPointOnSimplex},
	{"setUsedVertices", &luna_wrapper_btSubSimplexClosestResult::_bind_setUsedVertices},
	{"setDegenerate", &luna_wrapper_btSubSimplexClosestResult::_bind_setDegenerate},
	{"dynCast", &luna_wrapper_btSubSimplexClosestResult::_bind_dynCast},
	{"__eq", &luna_wrapper_btSubSimplexClosestResult::_bind___eq},
	{"fromVoid", &luna_wrapper_btSubSimplexClosestResult::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSubSimplexClosestResult::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btSubSimplexClosestResult >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btSubSimplexClosestResult >::enumValues[] = {
	{0,0}
};


