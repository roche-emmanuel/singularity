#include <plug_common.h>

class luna_wrapper_proland_ProlandTest {
public:
	typedef Luna< proland::ProlandTest > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84089864) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::ProlandTest*)");
		}

		proland::ProlandTest* rhs =(Luna< proland::ProlandTest >::check(L,2));
		proland::ProlandTest* self=(Luna< proland::ProlandTest >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		proland::ProlandTest* self= (proland::ProlandTest*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ProlandTest >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84089864) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< proland::ProlandTest >::check(L,1));
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

		proland::ProlandTest* self=(Luna< proland::ProlandTest >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::ProlandTest");
		
		return luna_dynamicCast(L,converters,"proland::ProlandTest",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_hello(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ProlandTest::ProlandTest()
	static proland::ProlandTest* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in proland::ProlandTest::ProlandTest() function, expected prototype:\nproland::ProlandTest::ProlandTest()\nClass arguments details:\n");
		}


		return new proland::ProlandTest();
	}


	// Function binds:
	// int proland::ProlandTest::hello()
	static int _bind_hello(lua_State *L) {
		if (!_lg_typecheck_hello(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int proland::ProlandTest::hello() function, expected prototype:\nint proland::ProlandTest::hello()\nClass arguments details:\n");
		}


		proland::ProlandTest* self=(Luna< proland::ProlandTest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int proland::ProlandTest::hello(). Got : '%s'",typeid(Luna< proland::ProlandTest >::check(L,1)).name());
		}
		int lret = self->hello();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::ProlandTest* LunaTraits< proland::ProlandTest >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ProlandTest::_bind_ctor(L);
}

void LunaTraits< proland::ProlandTest >::_bind_dtor(proland::ProlandTest* obj) {
	delete obj;
}

const char LunaTraits< proland::ProlandTest >::className[] = "ProlandTest";
const char LunaTraits< proland::ProlandTest >::fullName[] = "proland::ProlandTest";
const char LunaTraits< proland::ProlandTest >::moduleName[] = "proland";
const char* LunaTraits< proland::ProlandTest >::parents[] = {0};
const int LunaTraits< proland::ProlandTest >::hash = 84089864;
const int LunaTraits< proland::ProlandTest >::uniqueIDs[] = {84089864,0};

luna_RegType LunaTraits< proland::ProlandTest >::methods[] = {
	{"hello", &luna_wrapper_proland_ProlandTest::_bind_hello},
	{"dynCast", &luna_wrapper_proland_ProlandTest::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_ProlandTest::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_ProlandTest::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ProlandTest::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ProlandTest >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ProlandTest >::enumValues[] = {
	{0,0}
};


