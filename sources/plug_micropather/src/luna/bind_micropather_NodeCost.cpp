#include <plug_common.h>

class luna_wrapper_micropather_NodeCost {
public:
	typedef Luna< micropather::NodeCost > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11696051) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(micropather::NodeCost*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		micropather::NodeCost* rhs =(Luna< micropather::NodeCost >::check(L,2));
		micropather::NodeCost* self=(Luna< micropather::NodeCost >::check(L,1));
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

		micropather::NodeCost* self= (micropather::NodeCost*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< micropather::NodeCost >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11696051) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< micropather::NodeCost >::check(L,1));
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

		micropather::NodeCost* self=(Luna< micropather::NodeCost >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("micropather::NodeCost");
		
		return luna_dynamicCast(L,converters,"micropather::NodeCost",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCost(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,73028343)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCost(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// micropather::PathNode * micropather::NodeCost::node()
	static int _bind_getNode(lua_State *L) {
		if (!_lg_typecheck_getNode(L)) {
			luaL_error(L, "luna typecheck failed in micropather::PathNode * micropather::NodeCost::node() function, expected prototype:\nmicropather::PathNode * micropather::NodeCost::node()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		micropather::NodeCost* self=(Luna< micropather::NodeCost >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call micropather::PathNode * micropather::NodeCost::node(). Got : '%s'\n%s",typeid(Luna< micropather::NodeCost >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		micropather::PathNode * lret = self->node;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< micropather::PathNode >::push(L,lret,false);

		return 1;
	}

	// float micropather::NodeCost::cost()
	static int _bind_getCost(lua_State *L) {
		if (!_lg_typecheck_getCost(L)) {
			luaL_error(L, "luna typecheck failed in float micropather::NodeCost::cost() function, expected prototype:\nfloat micropather::NodeCost::cost()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		micropather::NodeCost* self=(Luna< micropather::NodeCost >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float micropather::NodeCost::cost(). Got : '%s'\n%s",typeid(Luna< micropather::NodeCost >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->cost;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void micropather::NodeCost::node(micropather::PathNode * value)
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void micropather::NodeCost::node(micropather::PathNode * value) function, expected prototype:\nvoid micropather::NodeCost::node(micropather::PathNode * value)\nClass arguments details:\narg 1 ID = 73028343\n\n%s",luna_dumpStack(L).c_str());
		}

		micropather::PathNode* value=(Luna< micropather::PathNode >::check(L,2));

		micropather::NodeCost* self=(Luna< micropather::NodeCost >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void micropather::NodeCost::node(micropather::PathNode *). Got : '%s'\n%s",typeid(Luna< micropather::NodeCost >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->node = value;

		return 0;
	}

	// void micropather::NodeCost::cost(float value)
	static int _bind_setCost(lua_State *L) {
		if (!_lg_typecheck_setCost(L)) {
			luaL_error(L, "luna typecheck failed in void micropather::NodeCost::cost(float value) function, expected prototype:\nvoid micropather::NodeCost::cost(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		micropather::NodeCost* self=(Luna< micropather::NodeCost >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void micropather::NodeCost::cost(float). Got : '%s'\n%s",typeid(Luna< micropather::NodeCost >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cost = value;

		return 0;
	}


	// Operator binds:

};

micropather::NodeCost* LunaTraits< micropather::NodeCost >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< micropather::NodeCost >::_bind_dtor(micropather::NodeCost* obj) {
	delete obj;
}

const char LunaTraits< micropather::NodeCost >::className[] = "NodeCost";
const char LunaTraits< micropather::NodeCost >::fullName[] = "micropather::NodeCost";
const char LunaTraits< micropather::NodeCost >::moduleName[] = "micropather";
const char* LunaTraits< micropather::NodeCost >::parents[] = {0};
const int LunaTraits< micropather::NodeCost >::hash = 11696051;
const int LunaTraits< micropather::NodeCost >::uniqueIDs[] = {11696051,0};

luna_RegType LunaTraits< micropather::NodeCost >::methods[] = {
	{"getNode", &luna_wrapper_micropather_NodeCost::_bind_getNode},
	{"getCost", &luna_wrapper_micropather_NodeCost::_bind_getCost},
	{"setNode", &luna_wrapper_micropather_NodeCost::_bind_setNode},
	{"setCost", &luna_wrapper_micropather_NodeCost::_bind_setCost},
	{"dynCast", &luna_wrapper_micropather_NodeCost::_bind_dynCast},
	{"__eq", &luna_wrapper_micropather_NodeCost::_bind___eq},
	{"fromVoid", &luna_wrapper_micropather_NodeCost::_bind_fromVoid},
	{"asVoid", &luna_wrapper_micropather_NodeCost::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< micropather::NodeCost >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< micropather::NodeCost >::enumValues[] = {
	{0,0}
};


