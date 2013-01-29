#include <plug_common.h>

class luna_wrapper_mglCommand {
public:
	typedef Luna< mglCommand > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49342624) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglCommand*)");
		}

		mglCommand* rhs =(Luna< mglCommand >::check(L,2));
		mglCommand* self=(Luna< mglCommand >::check(L,1));
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

		mglCommand* self= (mglCommand*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglCommand >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49342624) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglCommand >::check(L,1));
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

		mglCommand* self=(Luna< mglCommand >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglCommand");
		
		return luna_dynamicCast(L,converters,"mglCommand",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDesc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getForm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const char * mglCommand::name()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * mglCommand::name() function, expected prototype:\nconst char * mglCommand::name()\nClass arguments details:\n");
		}


		mglCommand* self=(Luna< mglCommand >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * mglCommand::name(). Got : '%s'",typeid(Luna< mglCommand >::check(L,1)).name());
		}
		const char * lret = self->name;
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * mglCommand::desc()
	static int _bind_getDesc(lua_State *L) {
		if (!_lg_typecheck_getDesc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * mglCommand::desc() function, expected prototype:\nconst char * mglCommand::desc()\nClass arguments details:\n");
		}


		mglCommand* self=(Luna< mglCommand >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * mglCommand::desc(). Got : '%s'",typeid(Luna< mglCommand >::check(L,1)).name());
		}
		const char * lret = self->desc;
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * mglCommand::form()
	static int _bind_getForm(lua_State *L) {
		if (!_lg_typecheck_getForm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * mglCommand::form() function, expected prototype:\nconst char * mglCommand::form()\nClass arguments details:\n");
		}


		mglCommand* self=(Luna< mglCommand >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * mglCommand::form(). Got : '%s'",typeid(Luna< mglCommand >::check(L,1)).name());
		}
		const char * lret = self->form;
		lua_pushstring(L,lret);

		return 1;
	}

	// int mglCommand::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCommand::type() function, expected prototype:\nint mglCommand::type()\nClass arguments details:\n");
		}


		mglCommand* self=(Luna< mglCommand >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCommand::type(). Got : '%s'",typeid(Luna< mglCommand >::check(L,1)).name());
		}
		int lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCommand::type(int value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCommand::type(int value) function, expected prototype:\nvoid mglCommand::type(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglCommand* self=(Luna< mglCommand >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCommand::type(int). Got : '%s'",typeid(Luna< mglCommand >::check(L,1)).name());
		}
		self->type = value;

		return 0;
	}


	// Operator binds:

};

mglCommand* LunaTraits< mglCommand >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< mglCommand >::_bind_dtor(mglCommand* obj) {
	delete obj;
}

const char LunaTraits< mglCommand >::className[] = "mglCommand";
const char LunaTraits< mglCommand >::fullName[] = "mglCommand";
const char LunaTraits< mglCommand >::moduleName[] = "mathgl";
const char* LunaTraits< mglCommand >::parents[] = {0};
const int LunaTraits< mglCommand >::hash = 49342624;
const int LunaTraits< mglCommand >::uniqueIDs[] = {49342624,0};

luna_RegType LunaTraits< mglCommand >::methods[] = {
	{"getName", &luna_wrapper_mglCommand::_bind_getName},
	{"getDesc", &luna_wrapper_mglCommand::_bind_getDesc},
	{"getForm", &luna_wrapper_mglCommand::_bind_getForm},
	{"getType", &luna_wrapper_mglCommand::_bind_getType},
	{"setType", &luna_wrapper_mglCommand::_bind_setType},
	{"dynCast", &luna_wrapper_mglCommand::_bind_dynCast},
	{"__eq", &luna_wrapper_mglCommand::_bind___eq},
	{"fromVoid", &luna_wrapper_mglCommand::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglCommand::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglCommand >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglCommand >::enumValues[] = {
	{0,0}
};


