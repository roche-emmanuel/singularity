#include <plug_common.h>

class luna_wrapper_ork_Object {
public:
	typedef Luna< ork::Object > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Object*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* rhs =(Luna< ork::Object >::check(L,2));
		ork::Object* self=(Luna< ork::Object >::check(L,1));
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

		ork::Object* self= (ork::Object*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Object >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Object");
		
		return luna_dynamicCast(L,converters,"ork::Object",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

ork::Object* LunaTraits< ork::Object >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::Object >::_bind_dtor(ork::Object* obj) {
	delete obj;
}

const char LunaTraits< ork::Object >::className[] = "Object";
const char LunaTraits< ork::Object >::fullName[] = "ork::Object";
const char LunaTraits< ork::Object >::moduleName[] = "ork";
const char* LunaTraits< ork::Object >::parents[] = {0};
const int LunaTraits< ork::Object >::hash = 1381405;
const int LunaTraits< ork::Object >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Object >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Object::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Object::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_Object::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Object::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Object >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Object >::enumValues[] = {
	{0,0}
};


