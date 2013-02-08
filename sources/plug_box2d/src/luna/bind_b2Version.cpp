#include <plug_common.h>

class luna_wrapper_b2Version {
public:
	typedef Luna< b2Version > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72927995) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Version*)");
		}

		b2Version* rhs =(Luna< b2Version >::check(L,2));
		b2Version* self=(Luna< b2Version >::check(L,1));
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

		b2Version* self= (b2Version*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Version >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72927995) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Version >::check(L,1));
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

		b2Version* self=(Luna< b2Version >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Version");
		
		return luna_dynamicCast(L,converters,"b2Version",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getMajor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRevision(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMajor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRevision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// signed int b2Version::major()
	static int _bind_getMajor(lua_State *L) {
		if (!_lg_typecheck_getMajor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Version::major() function, expected prototype:\nsigned int b2Version::major()\nClass arguments details:\n");
		}


		b2Version* self=(Luna< b2Version >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Version::major(). Got : '%s'",typeid(Luna< b2Version >::check(L,1)).name());
		}
		signed int lret = self->major;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2Version::minor()
	static int _bind_getMinor(lua_State *L) {
		if (!_lg_typecheck_getMinor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Version::minor() function, expected prototype:\nsigned int b2Version::minor()\nClass arguments details:\n");
		}


		b2Version* self=(Luna< b2Version >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Version::minor(). Got : '%s'",typeid(Luna< b2Version >::check(L,1)).name());
		}
		signed int lret = self->minor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2Version::revision()
	static int _bind_getRevision(lua_State *L) {
		if (!_lg_typecheck_getRevision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Version::revision() function, expected prototype:\nsigned int b2Version::revision()\nClass arguments details:\n");
		}


		b2Version* self=(Luna< b2Version >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Version::revision(). Got : '%s'",typeid(Luna< b2Version >::check(L,1)).name());
		}
		signed int lret = self->revision;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Version::major(signed int value)
	static int _bind_setMajor(lua_State *L) {
		if (!_lg_typecheck_setMajor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Version::major(signed int value) function, expected prototype:\nvoid b2Version::major(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Version* self=(Luna< b2Version >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Version::major(signed int). Got : '%s'",typeid(Luna< b2Version >::check(L,1)).name());
		}
		self->major = value;

		return 0;
	}

	// void b2Version::minor(signed int value)
	static int _bind_setMinor(lua_State *L) {
		if (!_lg_typecheck_setMinor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Version::minor(signed int value) function, expected prototype:\nvoid b2Version::minor(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Version* self=(Luna< b2Version >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Version::minor(signed int). Got : '%s'",typeid(Luna< b2Version >::check(L,1)).name());
		}
		self->minor = value;

		return 0;
	}

	// void b2Version::revision(signed int value)
	static int _bind_setRevision(lua_State *L) {
		if (!_lg_typecheck_setRevision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Version::revision(signed int value) function, expected prototype:\nvoid b2Version::revision(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Version* self=(Luna< b2Version >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Version::revision(signed int). Got : '%s'",typeid(Luna< b2Version >::check(L,1)).name());
		}
		self->revision = value;

		return 0;
	}


	// Operator binds:

};

b2Version* LunaTraits< b2Version >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2Version >::_bind_dtor(b2Version* obj) {
	delete obj;
}

const char LunaTraits< b2Version >::className[] = "b2Version";
const char LunaTraits< b2Version >::fullName[] = "b2Version";
const char LunaTraits< b2Version >::moduleName[] = "box2d";
const char* LunaTraits< b2Version >::parents[] = {0};
const int LunaTraits< b2Version >::hash = 72927995;
const int LunaTraits< b2Version >::uniqueIDs[] = {72927995,0};

luna_RegType LunaTraits< b2Version >::methods[] = {
	{"getMajor", &luna_wrapper_b2Version::_bind_getMajor},
	{"getMinor", &luna_wrapper_b2Version::_bind_getMinor},
	{"getRevision", &luna_wrapper_b2Version::_bind_getRevision},
	{"setMajor", &luna_wrapper_b2Version::_bind_setMajor},
	{"setMinor", &luna_wrapper_b2Version::_bind_setMinor},
	{"setRevision", &luna_wrapper_b2Version::_bind_setRevision},
	{"dynCast", &luna_wrapper_b2Version::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Version::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Version::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Version::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Version >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Version >::enumValues[] = {
	{0,0}
};


