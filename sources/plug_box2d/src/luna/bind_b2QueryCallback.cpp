#include <plug_common.h>

#include <luna/wrappers/wrapper_b2QueryCallback.h>

class luna_wrapper_b2QueryCallback {
public:
	typedef Luna< b2QueryCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		b2QueryCallback* self=(Luna< b2QueryCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2QueryCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67660073) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2QueryCallback*)");
		}

		b2QueryCallback* rhs =(Luna< b2QueryCallback >::check(L,2));
		b2QueryCallback* self=(Luna< b2QueryCallback >::check(L,1));
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

		b2QueryCallback* self= (b2QueryCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2QueryCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67660073) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2QueryCallback >::check(L,1));
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

		b2QueryCallback* self=(Luna< b2QueryCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2QueryCallback");
		
		return luna_dynamicCast(L,converters,"b2QueryCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ReportFixture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92969381)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2QueryCallback::b2QueryCallback(lua_Table * data)
	static b2QueryCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2QueryCallback::b2QueryCallback(lua_Table * data) function, expected prototype:\nb2QueryCallback::b2QueryCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_b2QueryCallback(L,NULL);
	}


	// Function binds:
	// bool b2QueryCallback::ReportFixture(b2Fixture * fixture)
	static int _bind_ReportFixture(lua_State *L) {
		if (!_lg_typecheck_ReportFixture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2QueryCallback::ReportFixture(b2Fixture * fixture) function, expected prototype:\nbool b2QueryCallback::ReportFixture(b2Fixture * fixture)\nClass arguments details:\narg 1 ID = 92969381\n");
		}

		b2Fixture* fixture=(Luna< b2Fixture >::check(L,2));

		b2QueryCallback* self=(Luna< b2QueryCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2QueryCallback::ReportFixture(b2Fixture *). Got : '%s'",typeid(Luna< b2QueryCallback >::check(L,1)).name());
		}
		bool lret = self->ReportFixture(fixture);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

b2QueryCallback* LunaTraits< b2QueryCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2QueryCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool b2QueryCallback::ReportFixture(b2Fixture * fixture)
}

void LunaTraits< b2QueryCallback >::_bind_dtor(b2QueryCallback* obj) {
	delete obj;
}

const char LunaTraits< b2QueryCallback >::className[] = "b2QueryCallback";
const char LunaTraits< b2QueryCallback >::fullName[] = "b2QueryCallback";
const char LunaTraits< b2QueryCallback >::moduleName[] = "box2d";
const char* LunaTraits< b2QueryCallback >::parents[] = {0};
const int LunaTraits< b2QueryCallback >::hash = 67660073;
const int LunaTraits< b2QueryCallback >::uniqueIDs[] = {67660073,0};

luna_RegType LunaTraits< b2QueryCallback >::methods[] = {
	{"ReportFixture", &luna_wrapper_b2QueryCallback::_bind_ReportFixture},
	{"dynCast", &luna_wrapper_b2QueryCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_b2QueryCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_b2QueryCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2QueryCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_b2QueryCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2QueryCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2QueryCallback >::enumValues[] = {
	{0,0}
};


