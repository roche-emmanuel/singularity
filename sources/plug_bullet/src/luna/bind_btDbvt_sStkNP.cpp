#include <plug_common.h>

class luna_wrapper_btDbvt_sStkNP {
public:
	typedef Luna< btDbvt::sStkNP > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26215195) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDbvt::sStkNP*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btDbvt::sStkNP* rhs =(Luna< btDbvt::sStkNP >::check(L,2));
		btDbvt::sStkNP* self=(Luna< btDbvt::sStkNP >::check(L,1));
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

		btDbvt::sStkNP* self= (btDbvt::sStkNP*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDbvt::sStkNP >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26215195) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btDbvt::sStkNP >::check(L,1));
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

		btDbvt::sStkNP* self=(Luna< btDbvt::sStkNP >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDbvt::sStkNP");
		
		return luna_dynamicCast(L,converters,"btDbvt::sStkNP",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDbvt::sStkNP::sStkNP(const btDbvtNode * n, unsigned int m)
	static btDbvt::sStkNP* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btDbvt::sStkNP::sStkNP(const btDbvtNode * n, unsigned int m) function, expected prototype:\nbtDbvt::sStkNP::sStkNP(const btDbvtNode * n, unsigned int m)\nClass arguments details:\narg 1 ID = 91335778\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtNode* n=(Luna< btDbvtNode >::check(L,1));
		unsigned m=(unsigned)lua_tointeger(L,2);

		return new btDbvt::sStkNP(n, m);
	}


	// Function binds:
	// const btDbvtNode * btDbvt::sStkNP::node()
	static int _bind_getNode(lua_State *L) {
		if (!_lg_typecheck_getNode(L)) {
			luaL_error(L, "luna typecheck failed in const btDbvtNode * btDbvt::sStkNP::node() function, expected prototype:\nconst btDbvtNode * btDbvt::sStkNP::node()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btDbvt::sStkNP* self=(Luna< btDbvt::sStkNP >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const btDbvtNode * btDbvt::sStkNP::node(). Got : '%s'\n%s",typeid(Luna< btDbvt::sStkNP >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btDbvtNode * lret = self->node;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}

	// int btDbvt::sStkNP::mask()
	static int _bind_getMask(lua_State *L) {
		if (!_lg_typecheck_getMask(L)) {
			luaL_error(L, "luna typecheck failed in int btDbvt::sStkNP::mask() function, expected prototype:\nint btDbvt::sStkNP::mask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btDbvt::sStkNP* self=(Luna< btDbvt::sStkNP >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btDbvt::sStkNP::mask(). Got : '%s'\n%s",typeid(Luna< btDbvt::sStkNP >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->mask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDbvt::sStkNP::mask(int value)
	static int _bind_setMask(lua_State *L) {
		if (!_lg_typecheck_setMask(L)) {
			luaL_error(L, "luna typecheck failed in void btDbvt::sStkNP::mask(int value) function, expected prototype:\nvoid btDbvt::sStkNP::mask(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btDbvt::sStkNP* self=(Luna< btDbvt::sStkNP >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDbvt::sStkNP::mask(int). Got : '%s'\n%s",typeid(Luna< btDbvt::sStkNP >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mask = value;

		return 0;
	}


	// Operator binds:

};

btDbvt::sStkNP* LunaTraits< btDbvt::sStkNP >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDbvt_sStkNP::_bind_ctor(L);
}

void LunaTraits< btDbvt::sStkNP >::_bind_dtor(btDbvt::sStkNP* obj) {
	delete obj;
}

const char LunaTraits< btDbvt::sStkNP >::className[] = "btDbvt_sStkNP";
const char LunaTraits< btDbvt::sStkNP >::fullName[] = "btDbvt::sStkNP";
const char LunaTraits< btDbvt::sStkNP >::moduleName[] = "bullet";
const char* LunaTraits< btDbvt::sStkNP >::parents[] = {0};
const int LunaTraits< btDbvt::sStkNP >::hash = 26215195;
const int LunaTraits< btDbvt::sStkNP >::uniqueIDs[] = {26215195,0};

luna_RegType LunaTraits< btDbvt::sStkNP >::methods[] = {
	{"getNode", &luna_wrapper_btDbvt_sStkNP::_bind_getNode},
	{"getMask", &luna_wrapper_btDbvt_sStkNP::_bind_getMask},
	{"setMask", &luna_wrapper_btDbvt_sStkNP::_bind_setMask},
	{"dynCast", &luna_wrapper_btDbvt_sStkNP::_bind_dynCast},
	{"__eq", &luna_wrapper_btDbvt_sStkNP::_bind___eq},
	{"fromVoid", &luna_wrapper_btDbvt_sStkNP::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDbvt_sStkNP::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvt::sStkNP >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvt::sStkNP >::enumValues[] = {
	{0,0}
};


