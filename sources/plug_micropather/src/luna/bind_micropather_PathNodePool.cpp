#include <plug_common.h>

class luna_wrapper_micropather_PathNodePool {
public:
	typedef Luna< micropather::PathNodePool > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95991896) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(micropather::PathNodePool*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		micropather::PathNodePool* rhs =(Luna< micropather::PathNodePool >::check(L,2));
		micropather::PathNodePool* self=(Luna< micropather::PathNodePool >::check(L,1));
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

		micropather::PathNodePool* self= (micropather::PathNodePool*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< micropather::PathNodePool >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95991896) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< micropather::PathNodePool >::check(L,1));
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

		micropather::PathNodePool* self=(Luna< micropather::PathNodePool >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("micropather::PathNodePool");
		
		return luna_dynamicCast(L,converters,"micropather::PathNodePool",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPathNode(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,73028343)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PushCache(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,11696051)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCache(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,11696051)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AllStates(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,87530881)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// micropather::PathNodePool::PathNodePool(unsigned int allocate, unsigned int typicalAdjacent)
	static micropather::PathNodePool* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in micropather::PathNodePool::PathNodePool(unsigned int allocate, unsigned int typicalAdjacent) function, expected prototype:\nmicropather::PathNodePool::PathNodePool(unsigned int allocate, unsigned int typicalAdjacent)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned allocate=(unsigned)lua_tointeger(L,1);
		unsigned typicalAdjacent=(unsigned)lua_tointeger(L,2);

		return new micropather::PathNodePool(allocate, typicalAdjacent);
	}


	// Function binds:
	// void micropather::PathNodePool::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void micropather::PathNodePool::Clear() function, expected prototype:\nvoid micropather::PathNodePool::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		micropather::PathNodePool* self=(Luna< micropather::PathNodePool >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void micropather::PathNodePool::Clear(). Got : '%s'\n%s",typeid(Luna< micropather::PathNodePool >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// micropather::PathNode * micropather::PathNodePool::GetPathNode(unsigned int frame, void * _state, float _costFromStart, float _estToGoal, micropather::PathNode * _parent)
	static int _bind_GetPathNode(lua_State *L) {
		if (!_lg_typecheck_GetPathNode(L)) {
			luaL_error(L, "luna typecheck failed in micropather::PathNode * micropather::PathNodePool::GetPathNode(unsigned int frame, void * _state, float _costFromStart, float _estToGoal, micropather::PathNode * _parent) function, expected prototype:\nmicropather::PathNode * micropather::PathNodePool::GetPathNode(unsigned int frame, void * _state, float _costFromStart, float _estToGoal, micropather::PathNode * _parent)\nClass arguments details:\narg 5 ID = 73028343\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned frame=(unsigned)lua_tointeger(L,2);
		void* _state=(Luna< void >::check(L,3));
		float _costFromStart=(float)lua_tonumber(L,4);
		float _estToGoal=(float)lua_tonumber(L,5);
		micropather::PathNode* _parent=(Luna< micropather::PathNode >::check(L,6));

		micropather::PathNodePool* self=(Luna< micropather::PathNodePool >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call micropather::PathNode * micropather::PathNodePool::GetPathNode(unsigned int, void *, float, float, micropather::PathNode *). Got : '%s'\n%s",typeid(Luna< micropather::PathNodePool >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		micropather::PathNode * lret = self->GetPathNode(frame, _state, _costFromStart, _estToGoal, _parent);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< micropather::PathNode >::push(L,lret,false);

		return 1;
	}

	// bool micropather::PathNodePool::PushCache(const micropather::NodeCost * nodes, int nNodes, int * start)
	static int _bind_PushCache(lua_State *L) {
		if (!_lg_typecheck_PushCache(L)) {
			luaL_error(L, "luna typecheck failed in bool micropather::PathNodePool::PushCache(const micropather::NodeCost * nodes, int nNodes, int * start) function, expected prototype:\nbool micropather::PathNodePool::PushCache(const micropather::NodeCost * nodes, int nNodes, int * start)\nClass arguments details:\narg 1 ID = 11696051\n\n%s",luna_dumpStack(L).c_str());
		}

		const micropather::NodeCost* nodes=(Luna< micropather::NodeCost >::check(L,2));
		int nNodes=(int)lua_tointeger(L,3);
		int* start=(int*)Luna< void >::check(L,4);

		micropather::PathNodePool* self=(Luna< micropather::PathNodePool >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool micropather::PathNodePool::PushCache(const micropather::NodeCost *, int, int *). Got : '%s'\n%s",typeid(Luna< micropather::PathNodePool >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PushCache(nodes, nNodes, start);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void micropather::PathNodePool::GetCache(int start, int nNodes, micropather::NodeCost * nodes)
	static int _bind_GetCache(lua_State *L) {
		if (!_lg_typecheck_GetCache(L)) {
			luaL_error(L, "luna typecheck failed in void micropather::PathNodePool::GetCache(int start, int nNodes, micropather::NodeCost * nodes) function, expected prototype:\nvoid micropather::PathNodePool::GetCache(int start, int nNodes, micropather::NodeCost * nodes)\nClass arguments details:\narg 3 ID = 11696051\n\n%s",luna_dumpStack(L).c_str());
		}

		int start=(int)lua_tointeger(L,2);
		int nNodes=(int)lua_tointeger(L,3);
		micropather::NodeCost* nodes=(Luna< micropather::NodeCost >::check(L,4));

		micropather::PathNodePool* self=(Luna< micropather::PathNodePool >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void micropather::PathNodePool::GetCache(int, int, micropather::NodeCost *). Got : '%s'\n%s",typeid(Luna< micropather::PathNodePool >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetCache(start, nNodes, nodes);

		return 0;
	}

	// void micropather::PathNodePool::AllStates(unsigned int frame, std::vector< void * > * stateVec)
	static int _bind_AllStates(lua_State *L) {
		if (!_lg_typecheck_AllStates(L)) {
			luaL_error(L, "luna typecheck failed in void micropather::PathNodePool::AllStates(unsigned int frame, std::vector< void * > * stateVec) function, expected prototype:\nvoid micropather::PathNodePool::AllStates(unsigned int frame, std::vector< void * > * stateVec)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned frame=(unsigned)lua_tointeger(L,2);
		std::vector< void * >* stateVec=(Luna< std::vector< void * > >::check(L,3));

		micropather::PathNodePool* self=(Luna< micropather::PathNodePool >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void micropather::PathNodePool::AllStates(unsigned int, std::vector< void * > *). Got : '%s'\n%s",typeid(Luna< micropather::PathNodePool >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AllStates(frame, stateVec);

		return 0;
	}


	// Operator binds:

};

micropather::PathNodePool* LunaTraits< micropather::PathNodePool >::_bind_ctor(lua_State *L) {
	return luna_wrapper_micropather_PathNodePool::_bind_ctor(L);
}

void LunaTraits< micropather::PathNodePool >::_bind_dtor(micropather::PathNodePool* obj) {
	delete obj;
}

const char LunaTraits< micropather::PathNodePool >::className[] = "PathNodePool";
const char LunaTraits< micropather::PathNodePool >::fullName[] = "micropather::PathNodePool";
const char LunaTraits< micropather::PathNodePool >::moduleName[] = "micropather";
const char* LunaTraits< micropather::PathNodePool >::parents[] = {0};
const int LunaTraits< micropather::PathNodePool >::hash = 95991896;
const int LunaTraits< micropather::PathNodePool >::uniqueIDs[] = {95991896,0};

luna_RegType LunaTraits< micropather::PathNodePool >::methods[] = {
	{"Clear", &luna_wrapper_micropather_PathNodePool::_bind_Clear},
	{"GetPathNode", &luna_wrapper_micropather_PathNodePool::_bind_GetPathNode},
	{"PushCache", &luna_wrapper_micropather_PathNodePool::_bind_PushCache},
	{"GetCache", &luna_wrapper_micropather_PathNodePool::_bind_GetCache},
	{"AllStates", &luna_wrapper_micropather_PathNodePool::_bind_AllStates},
	{"dynCast", &luna_wrapper_micropather_PathNodePool::_bind_dynCast},
	{"__eq", &luna_wrapper_micropather_PathNodePool::_bind___eq},
	{"fromVoid", &luna_wrapper_micropather_PathNodePool::_bind_fromVoid},
	{"asVoid", &luna_wrapper_micropather_PathNodePool::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< micropather::PathNodePool >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< micropather::PathNodePool >::enumValues[] = {
	{0,0}
};


