#include <plug_common.h>

class luna_wrapper_b2TOIInput {
public:
	typedef Luna< b2TOIInput > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98031472) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2TOIInput*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2TOIInput* rhs =(Luna< b2TOIInput >::check(L,2));
		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
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

		b2TOIInput* self= (b2TOIInput*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2TOIInput >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98031472) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2TOIInput >::check(L,1));
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

		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2TOIInput");
		
		return luna_dynamicCast(L,converters,"b2TOIInput",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getProxyA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProxyB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSweepA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSweepB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setProxyA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57523462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProxyB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57523462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSweepA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87110644) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSweepB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87110644) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2DistanceProxy b2TOIInput::proxyA()
	static int _bind_getProxyA(lua_State *L) {
		if (!_lg_typecheck_getProxyA(L)) {
			luaL_error(L, "luna typecheck failed in b2DistanceProxy b2TOIInput::proxyA() function, expected prototype:\nb2DistanceProxy b2TOIInput::proxyA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2DistanceProxy b2TOIInput::proxyA(). Got : '%s'\n%s",typeid(Luna< b2TOIInput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2DistanceProxy* lret = &self->proxyA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2DistanceProxy >::push(L,lret,false);

		return 1;
	}

	// b2DistanceProxy b2TOIInput::proxyB()
	static int _bind_getProxyB(lua_State *L) {
		if (!_lg_typecheck_getProxyB(L)) {
			luaL_error(L, "luna typecheck failed in b2DistanceProxy b2TOIInput::proxyB() function, expected prototype:\nb2DistanceProxy b2TOIInput::proxyB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2DistanceProxy b2TOIInput::proxyB(). Got : '%s'\n%s",typeid(Luna< b2TOIInput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2DistanceProxy* lret = &self->proxyB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2DistanceProxy >::push(L,lret,false);

		return 1;
	}

	// b2Sweep b2TOIInput::sweepA()
	static int _bind_getSweepA(lua_State *L) {
		if (!_lg_typecheck_getSweepA(L)) {
			luaL_error(L, "luna typecheck failed in b2Sweep b2TOIInput::sweepA() function, expected prototype:\nb2Sweep b2TOIInput::sweepA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Sweep b2TOIInput::sweepA(). Got : '%s'\n%s",typeid(Luna< b2TOIInput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Sweep* lret = &self->sweepA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Sweep >::push(L,lret,false);

		return 1;
	}

	// b2Sweep b2TOIInput::sweepB()
	static int _bind_getSweepB(lua_State *L) {
		if (!_lg_typecheck_getSweepB(L)) {
			luaL_error(L, "luna typecheck failed in b2Sweep b2TOIInput::sweepB() function, expected prototype:\nb2Sweep b2TOIInput::sweepB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Sweep b2TOIInput::sweepB(). Got : '%s'\n%s",typeid(Luna< b2TOIInput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Sweep* lret = &self->sweepB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Sweep >::push(L,lret,false);

		return 1;
	}

	// float b2TOIInput::tMax()
	static int _bind_getTMax(lua_State *L) {
		if (!_lg_typecheck_getTMax(L)) {
			luaL_error(L, "luna typecheck failed in float b2TOIInput::tMax() function, expected prototype:\nfloat b2TOIInput::tMax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2TOIInput::tMax(). Got : '%s'\n%s",typeid(Luna< b2TOIInput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->tMax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2TOIInput::proxyA(b2DistanceProxy value)
	static int _bind_setProxyA(lua_State *L) {
		if (!_lg_typecheck_setProxyA(L)) {
			luaL_error(L, "luna typecheck failed in void b2TOIInput::proxyA(b2DistanceProxy value) function, expected prototype:\nvoid b2TOIInput::proxyA(b2DistanceProxy value)\nClass arguments details:\narg 1 ID = 57523462\n\n%s",luna_dumpStack(L).c_str());
		}

		b2DistanceProxy* value_ptr=(Luna< b2DistanceProxy >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2TOIInput::proxyA function");
		}
		b2DistanceProxy value=*value_ptr;

		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2TOIInput::proxyA(b2DistanceProxy). Got : '%s'\n%s",typeid(Luna< b2TOIInput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->proxyA = value;

		return 0;
	}

	// void b2TOIInput::proxyB(b2DistanceProxy value)
	static int _bind_setProxyB(lua_State *L) {
		if (!_lg_typecheck_setProxyB(L)) {
			luaL_error(L, "luna typecheck failed in void b2TOIInput::proxyB(b2DistanceProxy value) function, expected prototype:\nvoid b2TOIInput::proxyB(b2DistanceProxy value)\nClass arguments details:\narg 1 ID = 57523462\n\n%s",luna_dumpStack(L).c_str());
		}

		b2DistanceProxy* value_ptr=(Luna< b2DistanceProxy >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2TOIInput::proxyB function");
		}
		b2DistanceProxy value=*value_ptr;

		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2TOIInput::proxyB(b2DistanceProxy). Got : '%s'\n%s",typeid(Luna< b2TOIInput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->proxyB = value;

		return 0;
	}

	// void b2TOIInput::sweepA(b2Sweep value)
	static int _bind_setSweepA(lua_State *L) {
		if (!_lg_typecheck_setSweepA(L)) {
			luaL_error(L, "luna typecheck failed in void b2TOIInput::sweepA(b2Sweep value) function, expected prototype:\nvoid b2TOIInput::sweepA(b2Sweep value)\nClass arguments details:\narg 1 ID = 87110644\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Sweep* value_ptr=(Luna< b2Sweep >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2TOIInput::sweepA function");
		}
		b2Sweep value=*value_ptr;

		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2TOIInput::sweepA(b2Sweep). Got : '%s'\n%s",typeid(Luna< b2TOIInput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sweepA = value;

		return 0;
	}

	// void b2TOIInput::sweepB(b2Sweep value)
	static int _bind_setSweepB(lua_State *L) {
		if (!_lg_typecheck_setSweepB(L)) {
			luaL_error(L, "luna typecheck failed in void b2TOIInput::sweepB(b2Sweep value) function, expected prototype:\nvoid b2TOIInput::sweepB(b2Sweep value)\nClass arguments details:\narg 1 ID = 87110644\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Sweep* value_ptr=(Luna< b2Sweep >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2TOIInput::sweepB function");
		}
		b2Sweep value=*value_ptr;

		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2TOIInput::sweepB(b2Sweep). Got : '%s'\n%s",typeid(Luna< b2TOIInput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sweepB = value;

		return 0;
	}

	// void b2TOIInput::tMax(float value)
	static int _bind_setTMax(lua_State *L) {
		if (!_lg_typecheck_setTMax(L)) {
			luaL_error(L, "luna typecheck failed in void b2TOIInput::tMax(float value) function, expected prototype:\nvoid b2TOIInput::tMax(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2TOIInput* self=(Luna< b2TOIInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2TOIInput::tMax(float). Got : '%s'\n%s",typeid(Luna< b2TOIInput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tMax = value;

		return 0;
	}


	// Operator binds:

};

b2TOIInput* LunaTraits< b2TOIInput >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2TOIInput >::_bind_dtor(b2TOIInput* obj) {
	delete obj;
}

const char LunaTraits< b2TOIInput >::className[] = "b2TOIInput";
const char LunaTraits< b2TOIInput >::fullName[] = "b2TOIInput";
const char LunaTraits< b2TOIInput >::moduleName[] = "box2d";
const char* LunaTraits< b2TOIInput >::parents[] = {0};
const int LunaTraits< b2TOIInput >::hash = 98031472;
const int LunaTraits< b2TOIInput >::uniqueIDs[] = {98031472,0};

luna_RegType LunaTraits< b2TOIInput >::methods[] = {
	{"getProxyA", &luna_wrapper_b2TOIInput::_bind_getProxyA},
	{"getProxyB", &luna_wrapper_b2TOIInput::_bind_getProxyB},
	{"getSweepA", &luna_wrapper_b2TOIInput::_bind_getSweepA},
	{"getSweepB", &luna_wrapper_b2TOIInput::_bind_getSweepB},
	{"getTMax", &luna_wrapper_b2TOIInput::_bind_getTMax},
	{"setProxyA", &luna_wrapper_b2TOIInput::_bind_setProxyA},
	{"setProxyB", &luna_wrapper_b2TOIInput::_bind_setProxyB},
	{"setSweepA", &luna_wrapper_b2TOIInput::_bind_setSweepA},
	{"setSweepB", &luna_wrapper_b2TOIInput::_bind_setSweepB},
	{"setTMax", &luna_wrapper_b2TOIInput::_bind_setTMax},
	{"dynCast", &luna_wrapper_b2TOIInput::_bind_dynCast},
	{"__eq", &luna_wrapper_b2TOIInput::_bind___eq},
	{"fromVoid", &luna_wrapper_b2TOIInput::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2TOIInput::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2TOIInput >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2TOIInput >::enumValues[] = {
	{0,0}
};


