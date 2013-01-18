#include <plug_common.h>

class luna_wrapper_micropather_StateCost {
public:
	typedef Luna< micropather::StateCost > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76995717) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(micropather::StateCost*)");
		}

		micropather::StateCost* rhs =(Luna< micropather::StateCost >::check(L,2));
		micropather::StateCost* self=(Luna< micropather::StateCost >::check(L,1));
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

		micropather::StateCost* self= (micropather::StateCost*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< micropather::StateCost >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76995717) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< micropather::StateCost >::check(L,1));
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

		micropather::StateCost* self=(Luna< micropather::StateCost >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("micropather::StateCost");
		
		return luna_dynamicCast(L,converters,"micropather::StateCost",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCost(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCost(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void * micropather::StateCost::state()
	static int _bind_getState(lua_State *L) {
		if (!_lg_typecheck_getState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * micropather::StateCost::state() function, expected prototype:\nvoid * micropather::StateCost::state()\nClass arguments details:\n");
		}


		micropather::StateCost* self=(Luna< micropather::StateCost >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * micropather::StateCost::state(). Got : '%s'",typeid(Luna< micropather::StateCost >::check(L,1)).name());
		}
		void * lret = self->state;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// float micropather::StateCost::cost()
	static int _bind_getCost(lua_State *L) {
		if (!_lg_typecheck_getCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float micropather::StateCost::cost() function, expected prototype:\nfloat micropather::StateCost::cost()\nClass arguments details:\n");
		}


		micropather::StateCost* self=(Luna< micropather::StateCost >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float micropather::StateCost::cost(). Got : '%s'",typeid(Luna< micropather::StateCost >::check(L,1)).name());
		}
		float lret = self->cost;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void micropather::StateCost::state(void * value)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::StateCost::state(void * value) function, expected prototype:\nvoid micropather::StateCost::state(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		micropather::StateCost* self=(Luna< micropather::StateCost >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::StateCost::state(void *). Got : '%s'",typeid(Luna< micropather::StateCost >::check(L,1)).name());
		}
		self->state = value;

		return 0;
	}

	// void micropather::StateCost::cost(float value)
	static int _bind_setCost(lua_State *L) {
		if (!_lg_typecheck_setCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::StateCost::cost(float value) function, expected prototype:\nvoid micropather::StateCost::cost(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		micropather::StateCost* self=(Luna< micropather::StateCost >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::StateCost::cost(float). Got : '%s'",typeid(Luna< micropather::StateCost >::check(L,1)).name());
		}
		self->cost = value;

		return 0;
	}


	// Operator binds:

};

micropather::StateCost* LunaTraits< micropather::StateCost >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< micropather::StateCost >::_bind_dtor(micropather::StateCost* obj) {
	delete obj;
}

const char LunaTraits< micropather::StateCost >::className[] = "StateCost";
const char LunaTraits< micropather::StateCost >::fullName[] = "micropather::StateCost";
const char LunaTraits< micropather::StateCost >::moduleName[] = "micropather";
const char* LunaTraits< micropather::StateCost >::parents[] = {0};
const int LunaTraits< micropather::StateCost >::hash = 76995717;
const int LunaTraits< micropather::StateCost >::uniqueIDs[] = {76995717,0};

luna_RegType LunaTraits< micropather::StateCost >::methods[] = {
	{"getState", &luna_wrapper_micropather_StateCost::_bind_getState},
	{"getCost", &luna_wrapper_micropather_StateCost::_bind_getCost},
	{"setState", &luna_wrapper_micropather_StateCost::_bind_setState},
	{"setCost", &luna_wrapper_micropather_StateCost::_bind_setCost},
	{"dynCast", &luna_wrapper_micropather_StateCost::_bind_dynCast},
	{"__eq", &luna_wrapper_micropather_StateCost::_bind___eq},
	{"fromVoid", &luna_wrapper_micropather_StateCost::_bind_fromVoid},
	{"asVoid", &luna_wrapper_micropather_StateCost::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< micropather::StateCost >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< micropather::StateCost >::enumValues[] = {
	{0,0}
};


