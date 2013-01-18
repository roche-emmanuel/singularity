#include <plug_common.h>

class luna_wrapper_btDbvt_sStkNPS {
public:
	typedef Luna< btDbvt::sStkNPS > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12671008) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDbvt::sStkNPS*)");
		}

		btDbvt::sStkNPS* rhs =(Luna< btDbvt::sStkNPS >::check(L,2));
		btDbvt::sStkNPS* self=(Luna< btDbvt::sStkNPS >::check(L,1));
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

		btDbvt::sStkNPS* self= (btDbvt::sStkNPS*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDbvt::sStkNPS >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12671008) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btDbvt::sStkNPS >::check(L,1));
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

		btDbvt::sStkNPS* self=(Luna< btDbvt::sStkNPS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDbvt::sStkNPS");
		
		return luna_dynamicCast(L,converters,"btDbvt::sStkNPS",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btDbvtNode >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDbvt::sStkNPS::sStkNPS()
	static btDbvt::sStkNPS* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvt::sStkNPS::sStkNPS() function, expected prototype:\nbtDbvt::sStkNPS::sStkNPS()\nClass arguments details:\n");
		}


		return new btDbvt::sStkNPS();
	}

	// btDbvt::sStkNPS::sStkNPS(const btDbvtNode * n, unsigned int m, float v)
	static btDbvt::sStkNPS* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvt::sStkNPS::sStkNPS(const btDbvtNode * n, unsigned int m, float v) function, expected prototype:\nbtDbvt::sStkNPS::sStkNPS(const btDbvtNode * n, unsigned int m, float v)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		const btDbvtNode* n=(Luna< btDbvtNode >::check(L,1));
		unsigned m=(unsigned)lua_tointeger(L,2);
		float v=(float)lua_tonumber(L,3);

		return new btDbvt::sStkNPS(n, m, v);
	}

	// Overload binder for btDbvt::sStkNPS::sStkNPS
	static btDbvt::sStkNPS* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function sStkNPS, cannot match any of the overloads for function sStkNPS:\n  sStkNPS()\n  sStkNPS(const btDbvtNode *, unsigned int, float)\n");
		return NULL;
	}


	// Function binds:
	// const btDbvtNode * btDbvt::sStkNPS::node()
	static int _bind_getNode(lua_State *L) {
		if (!_lg_typecheck_getNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btDbvtNode * btDbvt::sStkNPS::node() function, expected prototype:\nconst btDbvtNode * btDbvt::sStkNPS::node()\nClass arguments details:\n");
		}


		btDbvt::sStkNPS* self=(Luna< btDbvt::sStkNPS >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btDbvtNode * btDbvt::sStkNPS::node(). Got : '%s'",typeid(Luna< btDbvt::sStkNPS >::check(L,1)).name());
		}
		const btDbvtNode * lret = self->node;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}

	// int btDbvt::sStkNPS::mask()
	static int _bind_getMask(lua_State *L) {
		if (!_lg_typecheck_getMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvt::sStkNPS::mask() function, expected prototype:\nint btDbvt::sStkNPS::mask()\nClass arguments details:\n");
		}


		btDbvt::sStkNPS* self=(Luna< btDbvt::sStkNPS >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvt::sStkNPS::mask(). Got : '%s'",typeid(Luna< btDbvt::sStkNPS >::check(L,1)).name());
		}
		int lret = self->mask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btDbvt::sStkNPS::value()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btDbvt::sStkNPS::value() function, expected prototype:\nfloat btDbvt::sStkNPS::value()\nClass arguments details:\n");
		}


		btDbvt::sStkNPS* self=(Luna< btDbvt::sStkNPS >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btDbvt::sStkNPS::value(). Got : '%s'",typeid(Luna< btDbvt::sStkNPS >::check(L,1)).name());
		}
		float lret = self->value;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDbvt::sStkNPS::mask(int value)
	static int _bind_setMask(lua_State *L) {
		if (!_lg_typecheck_setMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::sStkNPS::mask(int value) function, expected prototype:\nvoid btDbvt::sStkNPS::mask(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvt::sStkNPS* self=(Luna< btDbvt::sStkNPS >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::sStkNPS::mask(int). Got : '%s'",typeid(Luna< btDbvt::sStkNPS >::check(L,1)).name());
		}
		self->mask = value;

		return 0;
	}

	// void btDbvt::sStkNPS::value(float value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::sStkNPS::value(float value) function, expected prototype:\nvoid btDbvt::sStkNPS::value(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btDbvt::sStkNPS* self=(Luna< btDbvt::sStkNPS >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::sStkNPS::value(float). Got : '%s'",typeid(Luna< btDbvt::sStkNPS >::check(L,1)).name());
		}
		self->value = value;

		return 0;
	}


	// Operator binds:

};

btDbvt::sStkNPS* LunaTraits< btDbvt::sStkNPS >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDbvt_sStkNPS::_bind_ctor(L);
}

void LunaTraits< btDbvt::sStkNPS >::_bind_dtor(btDbvt::sStkNPS* obj) {
	delete obj;
}

const char LunaTraits< btDbvt::sStkNPS >::className[] = "btDbvt_sStkNPS";
const char LunaTraits< btDbvt::sStkNPS >::fullName[] = "btDbvt::sStkNPS";
const char LunaTraits< btDbvt::sStkNPS >::moduleName[] = "bullet";
const char* LunaTraits< btDbvt::sStkNPS >::parents[] = {0};
const int LunaTraits< btDbvt::sStkNPS >::hash = 12671008;
const int LunaTraits< btDbvt::sStkNPS >::uniqueIDs[] = {12671008,0};

luna_RegType LunaTraits< btDbvt::sStkNPS >::methods[] = {
	{"getNode", &luna_wrapper_btDbvt_sStkNPS::_bind_getNode},
	{"getMask", &luna_wrapper_btDbvt_sStkNPS::_bind_getMask},
	{"getValue", &luna_wrapper_btDbvt_sStkNPS::_bind_getValue},
	{"setMask", &luna_wrapper_btDbvt_sStkNPS::_bind_setMask},
	{"setValue", &luna_wrapper_btDbvt_sStkNPS::_bind_setValue},
	{"dynCast", &luna_wrapper_btDbvt_sStkNPS::_bind_dynCast},
	{"__eq", &luna_wrapper_btDbvt_sStkNPS::_bind___eq},
	{"fromVoid", &luna_wrapper_btDbvt_sStkNPS::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDbvt_sStkNPS::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvt::sStkNPS >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvt::sStkNPS >::enumValues[] = {
	{0,0}
};


