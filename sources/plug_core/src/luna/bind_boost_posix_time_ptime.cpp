#include <plug_common.h>

class luna_wrapper_boost_posix_time_ptime {
public:
	typedef Luna< boost::posix_time::ptime > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16567808) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(boost::posix_time::ptime*)");
		}

		boost::posix_time::ptime* rhs =(Luna< boost::posix_time::ptime >::check(L,2));
		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
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

		boost::posix_time::ptime* self= (boost::posix_time::ptime*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< boost::posix_time::ptime >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16567808) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< boost::posix_time::ptime >::check(L,1));
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

		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("boost::posix_time::ptime");
		
		return luna_dynamicCast(L,converters,"boost::posix_time::ptime",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck___tostring(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,16567808)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int boost::posix_time::ptime::ptime_tostring(boost::posix_time::ptime * val, lua_State * L)
	static int _bind___tostring(lua_State *L) {
		if (!_lg_typecheck___tostring(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int boost::posix_time::ptime::ptime_tostring(boost::posix_time::ptime * val, lua_State * L) function, expected prototype:\nint boost::posix_time::ptime::ptime_tostring(boost::posix_time::ptime * val, lua_State * L)\nClass arguments details:\narg 1 ID = 16567808\n");
		}

		boost::posix_time::ptime* val=(Luna< boost::posix_time::ptime >::check(L,1));

		return ptime_tostring(val, L);
	}


	// Operator binds:

};

boost::posix_time::ptime* LunaTraits< boost::posix_time::ptime >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< boost::posix_time::ptime >::_bind_dtor(boost::posix_time::ptime* obj) {
	delete obj;
}

const char LunaTraits< boost::posix_time::ptime >::className[] = "ptime";
const char LunaTraits< boost::posix_time::ptime >::fullName[] = "boost::posix_time::ptime";
const char LunaTraits< boost::posix_time::ptime >::moduleName[] = "boost";
const char* LunaTraits< boost::posix_time::ptime >::parents[] = {0};
const int LunaTraits< boost::posix_time::ptime >::hash = 16567808;
const int LunaTraits< boost::posix_time::ptime >::uniqueIDs[] = {16567808,0};

luna_RegType LunaTraits< boost::posix_time::ptime >::methods[] = {
	{"__tostring", &luna_wrapper_boost_posix_time_ptime::_bind___tostring},
	{"dynCast", &luna_wrapper_boost_posix_time_ptime::_bind_dynCast},
	{"__eq", &luna_wrapper_boost_posix_time_ptime::_bind___eq},
	{"fromVoid", &luna_wrapper_boost_posix_time_ptime::_bind_fromVoid},
	{"asVoid", &luna_wrapper_boost_posix_time_ptime::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< boost::posix_time::ptime >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< boost::posix_time::ptime >::enumValues[] = {
	{0,0}
};


