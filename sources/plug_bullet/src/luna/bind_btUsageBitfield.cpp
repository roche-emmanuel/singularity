#include <plug_common.h>

class luna_wrapper_btUsageBitfield {
public:
	typedef Luna< btUsageBitfield > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61938597) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btUsageBitfield*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btUsageBitfield* rhs =(Luna< btUsageBitfield >::check(L,2));
		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
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

		btUsageBitfield* self= (btUsageBitfield*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btUsageBitfield >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61938597) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btUsageBitfield >::check(L,1));
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

		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btUsageBitfield");
		
		return luna_dynamicCast(L,converters,"btUsageBitfield",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsedVertexA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsedVertexB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsedVertexC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsedVertexD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnused1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnused2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnused3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnused4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUsedVertexA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUsedVertexB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUsedVertexC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUsedVertexD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnused1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnused2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnused3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnused4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btUsageBitfield::btUsageBitfield()
	static btUsageBitfield* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btUsageBitfield::btUsageBitfield() function, expected prototype:\nbtUsageBitfield::btUsageBitfield()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btUsageBitfield();
	}


	// Function binds:
	// void btUsageBitfield::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void btUsageBitfield::reset() function, expected prototype:\nvoid btUsageBitfield::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUsageBitfield::reset(). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// unsigned short btUsageBitfield::usedVertexA()
	static int _bind_getUsedVertexA(lua_State *L) {
		if (!_lg_typecheck_getUsedVertexA(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short btUsageBitfield::usedVertexA() function, expected prototype:\nunsigned short btUsageBitfield::usedVertexA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short btUsageBitfield::usedVertexA(). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->usedVertexA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short btUsageBitfield::usedVertexB()
	static int _bind_getUsedVertexB(lua_State *L) {
		if (!_lg_typecheck_getUsedVertexB(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short btUsageBitfield::usedVertexB() function, expected prototype:\nunsigned short btUsageBitfield::usedVertexB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short btUsageBitfield::usedVertexB(). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->usedVertexB;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short btUsageBitfield::usedVertexC()
	static int _bind_getUsedVertexC(lua_State *L) {
		if (!_lg_typecheck_getUsedVertexC(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short btUsageBitfield::usedVertexC() function, expected prototype:\nunsigned short btUsageBitfield::usedVertexC()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short btUsageBitfield::usedVertexC(). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->usedVertexC;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short btUsageBitfield::usedVertexD()
	static int _bind_getUsedVertexD(lua_State *L) {
		if (!_lg_typecheck_getUsedVertexD(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short btUsageBitfield::usedVertexD() function, expected prototype:\nunsigned short btUsageBitfield::usedVertexD()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short btUsageBitfield::usedVertexD(). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->usedVertexD;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short btUsageBitfield::unused1()
	static int _bind_getUnused1(lua_State *L) {
		if (!_lg_typecheck_getUnused1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short btUsageBitfield::unused1() function, expected prototype:\nunsigned short btUsageBitfield::unused1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short btUsageBitfield::unused1(). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->unused1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short btUsageBitfield::unused2()
	static int _bind_getUnused2(lua_State *L) {
		if (!_lg_typecheck_getUnused2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short btUsageBitfield::unused2() function, expected prototype:\nunsigned short btUsageBitfield::unused2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short btUsageBitfield::unused2(). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->unused2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short btUsageBitfield::unused3()
	static int _bind_getUnused3(lua_State *L) {
		if (!_lg_typecheck_getUnused3(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short btUsageBitfield::unused3() function, expected prototype:\nunsigned short btUsageBitfield::unused3()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short btUsageBitfield::unused3(). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->unused3;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short btUsageBitfield::unused4()
	static int _bind_getUnused4(lua_State *L) {
		if (!_lg_typecheck_getUnused4(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short btUsageBitfield::unused4() function, expected prototype:\nunsigned short btUsageBitfield::unused4()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short btUsageBitfield::unused4(). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->unused4;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btUsageBitfield::usedVertexA(unsigned short value)
	static int _bind_setUsedVertexA(lua_State *L) {
		if (!_lg_typecheck_setUsedVertexA(L)) {
			luaL_error(L, "luna typecheck failed in void btUsageBitfield::usedVertexA(unsigned short value) function, expected prototype:\nvoid btUsageBitfield::usedVertexA(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUsageBitfield::usedVertexA(unsigned short). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->usedVertexA = value;

		return 0;
	}

	// void btUsageBitfield::usedVertexB(unsigned short value)
	static int _bind_setUsedVertexB(lua_State *L) {
		if (!_lg_typecheck_setUsedVertexB(L)) {
			luaL_error(L, "luna typecheck failed in void btUsageBitfield::usedVertexB(unsigned short value) function, expected prototype:\nvoid btUsageBitfield::usedVertexB(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUsageBitfield::usedVertexB(unsigned short). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->usedVertexB = value;

		return 0;
	}

	// void btUsageBitfield::usedVertexC(unsigned short value)
	static int _bind_setUsedVertexC(lua_State *L) {
		if (!_lg_typecheck_setUsedVertexC(L)) {
			luaL_error(L, "luna typecheck failed in void btUsageBitfield::usedVertexC(unsigned short value) function, expected prototype:\nvoid btUsageBitfield::usedVertexC(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUsageBitfield::usedVertexC(unsigned short). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->usedVertexC = value;

		return 0;
	}

	// void btUsageBitfield::usedVertexD(unsigned short value)
	static int _bind_setUsedVertexD(lua_State *L) {
		if (!_lg_typecheck_setUsedVertexD(L)) {
			luaL_error(L, "luna typecheck failed in void btUsageBitfield::usedVertexD(unsigned short value) function, expected prototype:\nvoid btUsageBitfield::usedVertexD(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUsageBitfield::usedVertexD(unsigned short). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->usedVertexD = value;

		return 0;
	}

	// void btUsageBitfield::unused1(unsigned short value)
	static int _bind_setUnused1(lua_State *L) {
		if (!_lg_typecheck_setUnused1(L)) {
			luaL_error(L, "luna typecheck failed in void btUsageBitfield::unused1(unsigned short value) function, expected prototype:\nvoid btUsageBitfield::unused1(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUsageBitfield::unused1(unsigned short). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unused1 = value;

		return 0;
	}

	// void btUsageBitfield::unused2(unsigned short value)
	static int _bind_setUnused2(lua_State *L) {
		if (!_lg_typecheck_setUnused2(L)) {
			luaL_error(L, "luna typecheck failed in void btUsageBitfield::unused2(unsigned short value) function, expected prototype:\nvoid btUsageBitfield::unused2(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUsageBitfield::unused2(unsigned short). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unused2 = value;

		return 0;
	}

	// void btUsageBitfield::unused3(unsigned short value)
	static int _bind_setUnused3(lua_State *L) {
		if (!_lg_typecheck_setUnused3(L)) {
			luaL_error(L, "luna typecheck failed in void btUsageBitfield::unused3(unsigned short value) function, expected prototype:\nvoid btUsageBitfield::unused3(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUsageBitfield::unused3(unsigned short). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unused3 = value;

		return 0;
	}

	// void btUsageBitfield::unused4(unsigned short value)
	static int _bind_setUnused4(lua_State *L) {
		if (!_lg_typecheck_setUnused4(L)) {
			luaL_error(L, "luna typecheck failed in void btUsageBitfield::unused4(unsigned short value) function, expected prototype:\nvoid btUsageBitfield::unused4(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		btUsageBitfield* self=(Luna< btUsageBitfield >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btUsageBitfield::unused4(unsigned short). Got : '%s'\n%s",typeid(Luna< btUsageBitfield >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unused4 = value;

		return 0;
	}


	// Operator binds:

};

btUsageBitfield* LunaTraits< btUsageBitfield >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btUsageBitfield::_bind_ctor(L);
}

void LunaTraits< btUsageBitfield >::_bind_dtor(btUsageBitfield* obj) {
	delete obj;
}

const char LunaTraits< btUsageBitfield >::className[] = "btUsageBitfield";
const char LunaTraits< btUsageBitfield >::fullName[] = "btUsageBitfield";
const char LunaTraits< btUsageBitfield >::moduleName[] = "bullet";
const char* LunaTraits< btUsageBitfield >::parents[] = {0};
const int LunaTraits< btUsageBitfield >::hash = 61938597;
const int LunaTraits< btUsageBitfield >::uniqueIDs[] = {61938597,0};

luna_RegType LunaTraits< btUsageBitfield >::methods[] = {
	{"reset", &luna_wrapper_btUsageBitfield::_bind_reset},
	{"getUsedVertexA", &luna_wrapper_btUsageBitfield::_bind_getUsedVertexA},
	{"getUsedVertexB", &luna_wrapper_btUsageBitfield::_bind_getUsedVertexB},
	{"getUsedVertexC", &luna_wrapper_btUsageBitfield::_bind_getUsedVertexC},
	{"getUsedVertexD", &luna_wrapper_btUsageBitfield::_bind_getUsedVertexD},
	{"getUnused1", &luna_wrapper_btUsageBitfield::_bind_getUnused1},
	{"getUnused2", &luna_wrapper_btUsageBitfield::_bind_getUnused2},
	{"getUnused3", &luna_wrapper_btUsageBitfield::_bind_getUnused3},
	{"getUnused4", &luna_wrapper_btUsageBitfield::_bind_getUnused4},
	{"setUsedVertexA", &luna_wrapper_btUsageBitfield::_bind_setUsedVertexA},
	{"setUsedVertexB", &luna_wrapper_btUsageBitfield::_bind_setUsedVertexB},
	{"setUsedVertexC", &luna_wrapper_btUsageBitfield::_bind_setUsedVertexC},
	{"setUsedVertexD", &luna_wrapper_btUsageBitfield::_bind_setUsedVertexD},
	{"setUnused1", &luna_wrapper_btUsageBitfield::_bind_setUnused1},
	{"setUnused2", &luna_wrapper_btUsageBitfield::_bind_setUnused2},
	{"setUnused3", &luna_wrapper_btUsageBitfield::_bind_setUnused3},
	{"setUnused4", &luna_wrapper_btUsageBitfield::_bind_setUnused4},
	{"dynCast", &luna_wrapper_btUsageBitfield::_bind_dynCast},
	{"__eq", &luna_wrapper_btUsageBitfield::_bind___eq},
	{"fromVoid", &luna_wrapper_btUsageBitfield::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btUsageBitfield::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btUsageBitfield >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btUsageBitfield >::enumValues[] = {
	{0,0}
};


