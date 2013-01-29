#include <plug_common.h>

class luna_wrapper_mglThreadG {
public:
	typedef Luna< mglThreadG > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40878747) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglThreadG*)");
		}

		mglThreadG* rhs =(Luna< mglThreadG >::check(L,2));
		mglThreadG* self=(Luna< mglThreadG >::check(L,1));
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

		mglThreadG* self= (mglThreadG*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglThreadG >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40878747) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglThreadG >::check(L,1));
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

		mglThreadG* self=(Luna< mglThreadG >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglThreadG");
		
		return luna_dynamicCast(L,converters,"mglThreadG",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getGr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setN(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// mglCanvas * mglThreadG::gr()
	static int _bind_getGr(lua_State *L) {
		if (!_lg_typecheck_getGr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglCanvas * mglThreadG::gr() function, expected prototype:\nmglCanvas * mglThreadG::gr()\nClass arguments details:\n");
		}


		mglThreadG* self=(Luna< mglThreadG >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglCanvas * mglThreadG::gr(). Got : '%s'",typeid(Luna< mglThreadG >::check(L,1)).name());
		}
		mglCanvas * lret = self->gr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglCanvas >::push(L,lret,false);

		return 1;
	}

	// unsigned int mglThreadG::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int mglThreadG::id() function, expected prototype:\nunsigned int mglThreadG::id()\nClass arguments details:\n");
		}


		mglThreadG* self=(Luna< mglThreadG >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int mglThreadG::id(). Got : '%s'",typeid(Luna< mglThreadG >::check(L,1)).name());
		}
		unsigned int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t mglThreadG::n()
	static int _bind_getN(lua_State *L) {
		if (!_lg_typecheck_getN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t mglThreadG::n() function, expected prototype:\nsize_t mglThreadG::n()\nClass arguments details:\n");
		}


		mglThreadG* self=(Luna< mglThreadG >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t mglThreadG::n(). Got : '%s'",typeid(Luna< mglThreadG >::check(L,1)).name());
		}
		size_t lret = self->n;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const void * mglThreadG::p()
	static int _bind_getP(lua_State *L) {
		if (!_lg_typecheck_getP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * mglThreadG::p() function, expected prototype:\nconst void * mglThreadG::p()\nClass arguments details:\n");
		}


		mglThreadG* self=(Luna< mglThreadG >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * mglThreadG::p(). Got : '%s'",typeid(Luna< mglThreadG >::check(L,1)).name());
		}
		const void * lret = self->p;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void mglThreadG::gr(mglCanvas * value)
	static int _bind_setGr(lua_State *L) {
		if (!_lg_typecheck_setGr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglThreadG::gr(mglCanvas * value) function, expected prototype:\nvoid mglThreadG::gr(mglCanvas * value)\nClass arguments details:\narg 1 ID = 88502113\n");
		}

		mglCanvas* value=(Luna< mglBase >::checkSubType< mglCanvas >(L,2));

		mglThreadG* self=(Luna< mglThreadG >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglThreadG::gr(mglCanvas *). Got : '%s'",typeid(Luna< mglThreadG >::check(L,1)).name());
		}
		self->gr = value;

		return 0;
	}

	// void mglThreadG::id(unsigned int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglThreadG::id(unsigned int value) function, expected prototype:\nvoid mglThreadG::id(unsigned int value)\nClass arguments details:\n");
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		mglThreadG* self=(Luna< mglThreadG >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglThreadG::id(unsigned int). Got : '%s'",typeid(Luna< mglThreadG >::check(L,1)).name());
		}
		self->id = value;

		return 0;
	}

	// void mglThreadG::n(size_t value)
	static int _bind_setN(lua_State *L) {
		if (!_lg_typecheck_setN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglThreadG::n(size_t value) function, expected prototype:\nvoid mglThreadG::n(size_t value)\nClass arguments details:\n");
		}

		size_t value=(size_t)lua_tointeger(L,2);

		mglThreadG* self=(Luna< mglThreadG >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglThreadG::n(size_t). Got : '%s'",typeid(Luna< mglThreadG >::check(L,1)).name());
		}
		self->n = value;

		return 0;
	}


	// Operator binds:

};

mglThreadG* LunaTraits< mglThreadG >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< mglThreadG >::_bind_dtor(mglThreadG* obj) {
	delete obj;
}

const char LunaTraits< mglThreadG >::className[] = "mglThreadG";
const char LunaTraits< mglThreadG >::fullName[] = "mglThreadG";
const char LunaTraits< mglThreadG >::moduleName[] = "mathgl";
const char* LunaTraits< mglThreadG >::parents[] = {0};
const int LunaTraits< mglThreadG >::hash = 40878747;
const int LunaTraits< mglThreadG >::uniqueIDs[] = {40878747,0};

luna_RegType LunaTraits< mglThreadG >::methods[] = {
	{"getGr", &luna_wrapper_mglThreadG::_bind_getGr},
	{"getId", &luna_wrapper_mglThreadG::_bind_getId},
	{"getN", &luna_wrapper_mglThreadG::_bind_getN},
	{"getP", &luna_wrapper_mglThreadG::_bind_getP},
	{"setGr", &luna_wrapper_mglThreadG::_bind_setGr},
	{"setId", &luna_wrapper_mglThreadG::_bind_setId},
	{"setN", &luna_wrapper_mglThreadG::_bind_setN},
	{"dynCast", &luna_wrapper_mglThreadG::_bind_dynCast},
	{"__eq", &luna_wrapper_mglThreadG::_bind___eq},
	{"fromVoid", &luna_wrapper_mglThreadG::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglThreadG::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglThreadG >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglThreadG >::enumValues[] = {
	{0,0}
};


