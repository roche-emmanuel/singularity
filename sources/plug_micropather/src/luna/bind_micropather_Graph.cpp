#include <plug_common.h>

#include <luna/wrappers/wrapper_micropather_Graph.h>

class luna_wrapper_micropather_Graph {
public:
	typedef Luna< micropather::Graph > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		micropather::Graph* self=(Luna< micropather::Graph >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<micropather::Graph,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78970550) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(micropather::Graph*)");
		}

		micropather::Graph* rhs =(Luna< micropather::Graph >::check(L,2));
		micropather::Graph* self=(Luna< micropather::Graph >::check(L,1));
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

		micropather::Graph* self= (micropather::Graph*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< micropather::Graph >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78970550) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< micropather::Graph >::check(L,1));
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

		micropather::Graph* self=(Luna< micropather::Graph >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("micropather::Graph");
		
		return luna_dynamicCast(L,converters,"micropather::Graph",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_LeastCostEstimate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AdjacentCost(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,74098665)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrintStateInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// micropather::Graph::Graph(lua_Table * data)
	static micropather::Graph* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in micropather::Graph::Graph(lua_Table * data) function, expected prototype:\nmicropather::Graph::Graph(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_micropather_Graph(L,NULL);
	}


	// Function binds:
	// float micropather::Graph::LeastCostEstimate(void * stateStart, void * stateEnd)
	static int _bind_LeastCostEstimate(lua_State *L) {
		if (!_lg_typecheck_LeastCostEstimate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float micropather::Graph::LeastCostEstimate(void * stateStart, void * stateEnd) function, expected prototype:\nfloat micropather::Graph::LeastCostEstimate(void * stateStart, void * stateEnd)\nClass arguments details:\n");
		}

		void* stateStart=(Luna< void >::check(L,2));
		void* stateEnd=(Luna< void >::check(L,3));

		micropather::Graph* self=(Luna< micropather::Graph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float micropather::Graph::LeastCostEstimate(void *, void *). Got : '%s'",typeid(Luna< micropather::Graph >::check(L,1)).name());
		}
		float lret = self->LeastCostEstimate(stateStart, stateEnd);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void micropather::Graph::AdjacentCost(void * state, std::vector< micropather::StateCost > * adjacent)
	static int _bind_AdjacentCost(lua_State *L) {
		if (!_lg_typecheck_AdjacentCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::Graph::AdjacentCost(void * state, std::vector< micropather::StateCost > * adjacent) function, expected prototype:\nvoid micropather::Graph::AdjacentCost(void * state, std::vector< micropather::StateCost > * adjacent)\nClass arguments details:\narg 2 ID = [unknown]\n");
		}

		void* state=(Luna< void >::check(L,2));
		std::vector< micropather::StateCost >* adjacent=(Luna< std::vector< micropather::StateCost > >::check(L,3));

		micropather::Graph* self=(Luna< micropather::Graph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::Graph::AdjacentCost(void *, std::vector< micropather::StateCost > *). Got : '%s'",typeid(Luna< micropather::Graph >::check(L,1)).name());
		}
		self->AdjacentCost(state, adjacent);

		return 0;
	}

	// void micropather::Graph::PrintStateInfo(void * state)
	static int _bind_PrintStateInfo(lua_State *L) {
		if (!_lg_typecheck_PrintStateInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::Graph::PrintStateInfo(void * state) function, expected prototype:\nvoid micropather::Graph::PrintStateInfo(void * state)\nClass arguments details:\n");
		}

		void* state=(Luna< void >::check(L,2));

		micropather::Graph* self=(Luna< micropather::Graph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::Graph::PrintStateInfo(void *). Got : '%s'",typeid(Luna< micropather::Graph >::check(L,1)).name());
		}
		self->PrintStateInfo(state);

		return 0;
	}


	// Operator binds:

};

micropather::Graph* LunaTraits< micropather::Graph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_micropather_Graph::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float micropather::Graph::LeastCostEstimate(void * stateStart, void * stateEnd)
	// void micropather::Graph::AdjacentCost(void * state, std::vector< micropather::StateCost > * adjacent)
	// void micropather::Graph::PrintStateInfo(void * state)
}

void LunaTraits< micropather::Graph >::_bind_dtor(micropather::Graph* obj) {
	delete obj;
}

const char LunaTraits< micropather::Graph >::className[] = "Graph";
const char LunaTraits< micropather::Graph >::fullName[] = "micropather::Graph";
const char LunaTraits< micropather::Graph >::moduleName[] = "micropather";
const char* LunaTraits< micropather::Graph >::parents[] = {0};
const int LunaTraits< micropather::Graph >::hash = 78970550;
const int LunaTraits< micropather::Graph >::uniqueIDs[] = {78970550,0};

luna_RegType LunaTraits< micropather::Graph >::methods[] = {
	{"LeastCostEstimate", &luna_wrapper_micropather_Graph::_bind_LeastCostEstimate},
	{"AdjacentCost", &luna_wrapper_micropather_Graph::_bind_AdjacentCost},
	{"PrintStateInfo", &luna_wrapper_micropather_Graph::_bind_PrintStateInfo},
	{"dynCast", &luna_wrapper_micropather_Graph::_bind_dynCast},
	{"__eq", &luna_wrapper_micropather_Graph::_bind___eq},
	{"fromVoid", &luna_wrapper_micropather_Graph::_bind_fromVoid},
	{"asVoid", &luna_wrapper_micropather_Graph::_bind_asVoid},
	{"getTable", &luna_wrapper_micropather_Graph::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< micropather::Graph >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< micropather::Graph >::enumValues[] = {
	{0,0}
};


