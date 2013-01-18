#include <plug_common.h>

class luna_wrapper_micropather_MicroPather {
public:
	typedef Luna< micropather::MicroPather > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31476824) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(micropather::MicroPather*)");
		}

		micropather::MicroPather* rhs =(Luna< micropather::MicroPather >::check(L,2));
		micropather::MicroPather* self=(Luna< micropather::MicroPather >::check(L,1));
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

		micropather::MicroPather* self=(Luna< micropather::MicroPather >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("micropather::MicroPather");
		
		return luna_dynamicCast(L,converters,"micropather::MicroPather",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,78970550)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Solve(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,87530881)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SolveForNearStates(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,74098665)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Checksum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StatesInPool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,87530881)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// micropather::MicroPather::MicroPather(micropather::Graph * graph, unsigned int allocate = 250, unsigned int typicalAdjacent = 6)
	static micropather::MicroPather* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in micropather::MicroPather::MicroPather(micropather::Graph * graph, unsigned int allocate = 250, unsigned int typicalAdjacent = 6) function, expected prototype:\nmicropather::MicroPather::MicroPather(micropather::Graph * graph, unsigned int allocate = 250, unsigned int typicalAdjacent = 6)\nClass arguments details:\narg 1 ID = 78970550\n");
		}

		int luatop = lua_gettop(L);

		micropather::Graph* graph=(Luna< micropather::Graph >::check(L,1));
		unsigned allocate=luatop>1 ? (unsigned)lua_tointeger(L,2) : 250;
		unsigned typicalAdjacent=luatop>2 ? (unsigned)lua_tointeger(L,3) : 6;

		return new micropather::MicroPather(graph, allocate, typicalAdjacent);
	}


	// Function binds:
	// int micropather::MicroPather::Solve(void * startState, void * endState, std::vector< void * > * path, float * totalCost)
	static int _bind_Solve(lua_State *L) {
		if (!_lg_typecheck_Solve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int micropather::MicroPather::Solve(void * startState, void * endState, std::vector< void * > * path, float * totalCost) function, expected prototype:\nint micropather::MicroPather::Solve(void * startState, void * endState, std::vector< void * > * path, float * totalCost)\nClass arguments details:\narg 3 ID = [unknown]\n");
		}

		void* startState=(Luna< void >::check(L,2));
		void* endState=(Luna< void >::check(L,3));
		std::vector< void * >* path=(Luna< std::vector< void * > >::check(L,4));
		float totalCost=(float)lua_tonumber(L,5);

		micropather::MicroPather* self=(Luna< micropather::MicroPather >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int micropather::MicroPather::Solve(void *, void *, std::vector< void * > *, float *). Got : '%s'",typeid(Luna< micropather::MicroPather >::check(L,1)).name());
		}
		int lret = self->Solve(startState, endState, path, &totalCost);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int micropather::MicroPather::SolveForNearStates(void * startState, std::vector< micropather::StateCost > * nears, float maxCost)
	static int _bind_SolveForNearStates(lua_State *L) {
		if (!_lg_typecheck_SolveForNearStates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int micropather::MicroPather::SolveForNearStates(void * startState, std::vector< micropather::StateCost > * nears, float maxCost) function, expected prototype:\nint micropather::MicroPather::SolveForNearStates(void * startState, std::vector< micropather::StateCost > * nears, float maxCost)\nClass arguments details:\narg 2 ID = [unknown]\n");
		}

		void* startState=(Luna< void >::check(L,2));
		std::vector< micropather::StateCost >* nears=(Luna< std::vector< micropather::StateCost > >::check(L,3));
		float maxCost=(float)lua_tonumber(L,4);

		micropather::MicroPather* self=(Luna< micropather::MicroPather >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int micropather::MicroPather::SolveForNearStates(void *, std::vector< micropather::StateCost > *, float). Got : '%s'",typeid(Luna< micropather::MicroPather >::check(L,1)).name());
		}
		int lret = self->SolveForNearStates(startState, nears, maxCost);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void micropather::MicroPather::Reset()
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::MicroPather::Reset() function, expected prototype:\nvoid micropather::MicroPather::Reset()\nClass arguments details:\n");
		}


		micropather::MicroPather* self=(Luna< micropather::MicroPather >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::MicroPather::Reset(). Got : '%s'",typeid(Luna< micropather::MicroPather >::check(L,1)).name());
		}
		self->Reset();

		return 0;
	}

	// unsigned int micropather::MicroPather::Checksum()
	static int _bind_Checksum(lua_State *L) {
		if (!_lg_typecheck_Checksum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int micropather::MicroPather::Checksum() function, expected prototype:\nunsigned int micropather::MicroPather::Checksum()\nClass arguments details:\n");
		}


		micropather::MicroPather* self=(Luna< micropather::MicroPather >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int micropather::MicroPather::Checksum(). Got : '%s'",typeid(Luna< micropather::MicroPather >::check(L,1)).name());
		}
		unsigned int lret = self->Checksum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void micropather::MicroPather::StatesInPool(std::vector< void * > * stateVec)
	static int _bind_StatesInPool(lua_State *L) {
		if (!_lg_typecheck_StatesInPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::MicroPather::StatesInPool(std::vector< void * > * stateVec) function, expected prototype:\nvoid micropather::MicroPather::StatesInPool(std::vector< void * > * stateVec)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::vector< void * >* stateVec=(Luna< std::vector< void * > >::check(L,2));

		micropather::MicroPather* self=(Luna< micropather::MicroPather >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::MicroPather::StatesInPool(std::vector< void * > *). Got : '%s'",typeid(Luna< micropather::MicroPather >::check(L,1)).name());
		}
		self->StatesInPool(stateVec);

		return 0;
	}


	// Operator binds:

};

micropather::MicroPather* LunaTraits< micropather::MicroPather >::_bind_ctor(lua_State *L) {
	return luna_wrapper_micropather_MicroPather::_bind_ctor(L);
}

void LunaTraits< micropather::MicroPather >::_bind_dtor(micropather::MicroPather* obj) {
	delete obj;
}

const char LunaTraits< micropather::MicroPather >::className[] = "MicroPather";
const char LunaTraits< micropather::MicroPather >::fullName[] = "micropather::MicroPather";
const char LunaTraits< micropather::MicroPather >::moduleName[] = "micropather";
const char* LunaTraits< micropather::MicroPather >::parents[] = {0};
const int LunaTraits< micropather::MicroPather >::hash = 31476824;
const int LunaTraits< micropather::MicroPather >::uniqueIDs[] = {31476824,0};

luna_RegType LunaTraits< micropather::MicroPather >::methods[] = {
	{"Solve", &luna_wrapper_micropather_MicroPather::_bind_Solve},
	{"SolveForNearStates", &luna_wrapper_micropather_MicroPather::_bind_SolveForNearStates},
	{"Reset", &luna_wrapper_micropather_MicroPather::_bind_Reset},
	{"Checksum", &luna_wrapper_micropather_MicroPather::_bind_Checksum},
	{"StatesInPool", &luna_wrapper_micropather_MicroPather::_bind_StatesInPool},
	{"dynCast", &luna_wrapper_micropather_MicroPather::_bind_dynCast},
	{"__eq", &luna_wrapper_micropather_MicroPather::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< micropather::MicroPather >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< micropather::MicroPather >::enumValues[] = {
	{"SOLVED", micropather::MicroPather::SOLVED},
	{"NO_SOLUTION", micropather::MicroPather::NO_SOLUTION},
	{"START_END_SAME", micropather::MicroPather::START_END_SAME},
	{0,0}
};


