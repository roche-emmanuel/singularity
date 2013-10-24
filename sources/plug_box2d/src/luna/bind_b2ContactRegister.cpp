#include <plug_common.h>

class luna_wrapper_b2ContactRegister {
public:
	typedef Luna< b2ContactRegister > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27612713) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactRegister*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2ContactRegister* rhs =(Luna< b2ContactRegister >::check(L,2));
		b2ContactRegister* self=(Luna< b2ContactRegister >::check(L,1));
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

		b2ContactRegister* self= (b2ContactRegister*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2ContactRegister >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27612713) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2ContactRegister >::check(L,1));
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

		b2ContactRegister* self=(Luna< b2ContactRegister >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ContactRegister");
		
		return luna_dynamicCast(L,converters,"b2ContactRegister",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getPrimary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPrimary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool b2ContactRegister::primary()
	static int _bind_getPrimary(lua_State *L) {
		if (!_lg_typecheck_getPrimary(L)) {
			luaL_error(L, "luna typecheck failed in bool b2ContactRegister::primary() function, expected prototype:\nbool b2ContactRegister::primary()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactRegister* self=(Luna< b2ContactRegister >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2ContactRegister::primary(). Got : '%s'\n%s",typeid(Luna< b2ContactRegister >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->primary;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2ContactRegister::primary(bool value)
	static int _bind_setPrimary(lua_State *L) {
		if (!_lg_typecheck_setPrimary(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactRegister::primary(bool value) function, expected prototype:\nvoid b2ContactRegister::primary(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2ContactRegister* self=(Luna< b2ContactRegister >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactRegister::primary(bool). Got : '%s'\n%s",typeid(Luna< b2ContactRegister >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->primary = value;

		return 0;
	}


	// Operator binds:

};

b2ContactRegister* LunaTraits< b2ContactRegister >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2ContactRegister >::_bind_dtor(b2ContactRegister* obj) {
	delete obj;
}

const char LunaTraits< b2ContactRegister >::className[] = "b2ContactRegister";
const char LunaTraits< b2ContactRegister >::fullName[] = "b2ContactRegister";
const char LunaTraits< b2ContactRegister >::moduleName[] = "box2d";
const char* LunaTraits< b2ContactRegister >::parents[] = {0};
const int LunaTraits< b2ContactRegister >::hash = 27612713;
const int LunaTraits< b2ContactRegister >::uniqueIDs[] = {27612713,0};

luna_RegType LunaTraits< b2ContactRegister >::methods[] = {
	{"getPrimary", &luna_wrapper_b2ContactRegister::_bind_getPrimary},
	{"setPrimary", &luna_wrapper_b2ContactRegister::_bind_setPrimary},
	{"dynCast", &luna_wrapper_b2ContactRegister::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ContactRegister::_bind___eq},
	{"fromVoid", &luna_wrapper_b2ContactRegister::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2ContactRegister::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactRegister >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactRegister >::enumValues[] = {
	{0,0}
};


