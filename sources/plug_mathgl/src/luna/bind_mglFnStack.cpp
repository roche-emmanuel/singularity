#include <plug_common.h>

class luna_wrapper_mglFnStack {
public:
	typedef Luna< mglFnStack > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59420944) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglFnStack*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglFnStack* rhs =(Luna< mglFnStack >::check(L,2));
		mglFnStack* self=(Luna< mglFnStack >::check(L,1));
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

		mglFnStack* self= (mglFnStack*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglFnStack >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59420944) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglFnStack >::check(L,1));
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

		mglFnStack* self=(Luna< mglFnStack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglFnStack");
		
		return luna_dynamicCast(L,converters,"mglFnStack",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglFnStack::mglFnStack()
	static mglFnStack* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in mglFnStack::mglFnStack() function, expected prototype:\nmglFnStack::mglFnStack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new mglFnStack();
	}


	// Function binds:
	// long mglFnStack::pos()
	static int _bind_getPos(lua_State *L) {
		if (!_lg_typecheck_getPos(L)) {
			luaL_error(L, "luna typecheck failed in long mglFnStack::pos() function, expected prototype:\nlong mglFnStack::pos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglFnStack* self=(Luna< mglFnStack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglFnStack::pos(). Got : '%s'\n%s",typeid(Luna< mglFnStack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->pos;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglFnStack::pos(long value)
	static int _bind_setPos(lua_State *L) {
		if (!_lg_typecheck_setPos(L)) {
			luaL_error(L, "luna typecheck failed in void mglFnStack::pos(long value) function, expected prototype:\nvoid mglFnStack::pos(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglFnStack* self=(Luna< mglFnStack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglFnStack::pos(long). Got : '%s'\n%s",typeid(Luna< mglFnStack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pos = value;

		return 0;
	}


	// Operator binds:

};

mglFnStack* LunaTraits< mglFnStack >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglFnStack::_bind_ctor(L);
}

void LunaTraits< mglFnStack >::_bind_dtor(mglFnStack* obj) {
	delete obj;
}

const char LunaTraits< mglFnStack >::className[] = "mglFnStack";
const char LunaTraits< mglFnStack >::fullName[] = "mglFnStack";
const char LunaTraits< mglFnStack >::moduleName[] = "mathgl";
const char* LunaTraits< mglFnStack >::parents[] = {0};
const int LunaTraits< mglFnStack >::hash = 59420944;
const int LunaTraits< mglFnStack >::uniqueIDs[] = {59420944,0};

luna_RegType LunaTraits< mglFnStack >::methods[] = {
	{"getPos", &luna_wrapper_mglFnStack::_bind_getPos},
	{"setPos", &luna_wrapper_mglFnStack::_bind_setPos},
	{"dynCast", &luna_wrapper_mglFnStack::_bind_dynCast},
	{"__eq", &luna_wrapper_mglFnStack::_bind___eq},
	{"fromVoid", &luna_wrapper_mglFnStack::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglFnStack::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglFnStack >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglFnStack >::enumValues[] = {
	{0,0}
};


