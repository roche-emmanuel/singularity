#include <plug_common.h>

class luna_wrapper_mglColorID {
public:
	typedef Luna< mglColorID > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48493843) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglColorID*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglColorID* rhs =(Luna< mglColorID >::check(L,2));
		mglColorID* self=(Luna< mglColorID >::check(L,1));
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

		mglColorID* self= (mglColorID*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglColorID >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48493843) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglColorID >::check(L,1));
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

		mglColorID* self=(Luna< mglColorID >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglColorID");
		
		return luna_dynamicCast(L,converters,"mglColorID",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// char mglColorID::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in char mglColorID::id() function, expected prototype:\nchar mglColorID::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglColorID* self=(Luna< mglColorID >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call char mglColorID::id(). Got : '%s'\n%s",typeid(Luna< mglColorID >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		char lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// mglColor mglColorID::col()
	static int _bind_getCol(lua_State *L) {
		if (!_lg_typecheck_getCol(L)) {
			luaL_error(L, "luna typecheck failed in mglColor mglColorID::col() function, expected prototype:\nmglColor mglColorID::col()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglColorID* self=(Luna< mglColorID >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call mglColor mglColorID::col(). Got : '%s'\n%s",typeid(Luna< mglColorID >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const mglColor* lret = &self->col;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglColor >::push(L,lret,false);

		return 1;
	}

	// void mglColorID::id(char value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void mglColorID::id(char value) function, expected prototype:\nvoid mglColorID::id(char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char value=(char)lua_tointeger(L,2);

		mglColorID* self=(Luna< mglColorID >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglColorID::id(char). Got : '%s'\n%s",typeid(Luna< mglColorID >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void mglColorID::col(mglColor value)
	static int _bind_setCol(lua_State *L) {
		if (!_lg_typecheck_setCol(L)) {
			luaL_error(L, "luna typecheck failed in void mglColorID::col(mglColor value) function, expected prototype:\nvoid mglColorID::col(mglColor value)\nClass arguments details:\narg 1 ID = 44899579\n\n%s",luna_dumpStack(L).c_str());
		}

		mglColor* value_ptr=(Luna< mglColor >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglColorID::col function");
		}
		mglColor value=*value_ptr;

		mglColorID* self=(Luna< mglColorID >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglColorID::col(mglColor). Got : '%s'\n%s",typeid(Luna< mglColorID >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->col = value;

		return 0;
	}


	// Operator binds:

};

mglColorID* LunaTraits< mglColorID >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< mglColorID >::_bind_dtor(mglColorID* obj) {
	delete obj;
}

const char LunaTraits< mglColorID >::className[] = "mglColorID";
const char LunaTraits< mglColorID >::fullName[] = "mglColorID";
const char LunaTraits< mglColorID >::moduleName[] = "mathgl";
const char* LunaTraits< mglColorID >::parents[] = {0};
const int LunaTraits< mglColorID >::hash = 48493843;
const int LunaTraits< mglColorID >::uniqueIDs[] = {48493843,0};

luna_RegType LunaTraits< mglColorID >::methods[] = {
	{"getId", &luna_wrapper_mglColorID::_bind_getId},
	{"getCol", &luna_wrapper_mglColorID::_bind_getCol},
	{"setId", &luna_wrapper_mglColorID::_bind_setId},
	{"setCol", &luna_wrapper_mglColorID::_bind_setCol},
	{"dynCast", &luna_wrapper_mglColorID::_bind_dynCast},
	{"__eq", &luna_wrapper_mglColorID::_bind___eq},
	{"fromVoid", &luna_wrapper_mglColorID::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglColorID::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglColorID >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglColorID >::enumValues[] = {
	{0,0}
};


