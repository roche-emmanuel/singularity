#include <plug_common.h>

class luna_wrapper_mglTeXsymb {
public:
	typedef Luna< mglTeXsymb > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31420202) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglTeXsymb*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglTeXsymb* rhs =(Luna< mglTeXsymb >::check(L,2));
		mglTeXsymb* self=(Luna< mglTeXsymb >::check(L,1));
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

		mglTeXsymb* self= (mglTeXsymb*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglTeXsymb >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31420202) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglTeXsymb >::check(L,1));
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

		mglTeXsymb* self=(Luna< mglTeXsymb >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglTeXsymb");
		
		return luna_dynamicCast(L,converters,"mglTeXsymb",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getKod(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKod(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int mglTeXsymb::kod()
	static int _bind_getKod(lua_State *L) {
		if (!_lg_typecheck_getKod(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int mglTeXsymb::kod() function, expected prototype:\nunsigned int mglTeXsymb::kod()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglTeXsymb* self=(Luna< mglTeXsymb >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int mglTeXsymb::kod(). Got : '%s'\n%s",typeid(Luna< mglTeXsymb >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->kod;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglTeXsymb::kod(unsigned int value)
	static int _bind_setKod(lua_State *L) {
		if (!_lg_typecheck_setKod(L)) {
			luaL_error(L, "luna typecheck failed in void mglTeXsymb::kod(unsigned int value) function, expected prototype:\nvoid mglTeXsymb::kod(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		mglTeXsymb* self=(Luna< mglTeXsymb >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglTeXsymb::kod(unsigned int). Got : '%s'\n%s",typeid(Luna< mglTeXsymb >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->kod = value;

		return 0;
	}


	// Operator binds:

};

mglTeXsymb* LunaTraits< mglTeXsymb >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< mglTeXsymb >::_bind_dtor(mglTeXsymb* obj) {
	delete obj;
}

const char LunaTraits< mglTeXsymb >::className[] = "mglTeXsymb";
const char LunaTraits< mglTeXsymb >::fullName[] = "mglTeXsymb";
const char LunaTraits< mglTeXsymb >::moduleName[] = "mathgl";
const char* LunaTraits< mglTeXsymb >::parents[] = {0};
const int LunaTraits< mglTeXsymb >::hash = 31420202;
const int LunaTraits< mglTeXsymb >::uniqueIDs[] = {31420202,0};

luna_RegType LunaTraits< mglTeXsymb >::methods[] = {
	{"getKod", &luna_wrapper_mglTeXsymb::_bind_getKod},
	{"setKod", &luna_wrapper_mglTeXsymb::_bind_setKod},
	{"dynCast", &luna_wrapper_mglTeXsymb::_bind_dynCast},
	{"__eq", &luna_wrapper_mglTeXsymb::_bind___eq},
	{"fromVoid", &luna_wrapper_mglTeXsymb::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglTeXsymb::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglTeXsymb >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglTeXsymb >::enumValues[] = {
	{0,0}
};


