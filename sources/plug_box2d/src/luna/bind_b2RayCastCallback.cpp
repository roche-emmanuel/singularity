#include <plug_common.h>

#include <luna/wrappers/wrapper_b2RayCastCallback.h>

class luna_wrapper_b2RayCastCallback {
public:
	typedef Luna< b2RayCastCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		b2RayCastCallback* self=(Luna< b2RayCastCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2RayCastCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29620235) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2RayCastCallback*)");
		}

		b2RayCastCallback* rhs =(Luna< b2RayCastCallback >::check(L,2));
		b2RayCastCallback* self=(Luna< b2RayCastCallback >::check(L,1));
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

		b2RayCastCallback* self= (b2RayCastCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2RayCastCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29620235) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2RayCastCallback >::check(L,1));
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

		b2RayCastCallback* self=(Luna< b2RayCastCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2RayCastCallback");
		
		return luna_dynamicCast(L,converters,"b2RayCastCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ReportFixture(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92969381)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,54494886) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2RayCastCallback::b2RayCastCallback(lua_Table * data)
	static b2RayCastCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2RayCastCallback::b2RayCastCallback(lua_Table * data) function, expected prototype:\nb2RayCastCallback::b2RayCastCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_b2RayCastCallback(L,NULL);
	}


	// Function binds:
	// float b2RayCastCallback::ReportFixture(b2Fixture * fixture, const b2Vec2 & point, const b2Vec2 & normal, float fraction)
	static int _bind_ReportFixture(lua_State *L) {
		if (!_lg_typecheck_ReportFixture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RayCastCallback::ReportFixture(b2Fixture * fixture, const b2Vec2 & point, const b2Vec2 & normal, float fraction) function, expected prototype:\nfloat b2RayCastCallback::ReportFixture(b2Fixture * fixture, const b2Vec2 & point, const b2Vec2 & normal, float fraction)\nClass arguments details:\narg 1 ID = 92969381\narg 2 ID = 54494886\narg 3 ID = 54494886\n");
		}

		b2Fixture* fixture=(Luna< b2Fixture >::check(L,2));
		const b2Vec2* point_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in b2RayCastCallback::ReportFixture function");
		}
		const b2Vec2 & point=*point_ptr;
		const b2Vec2* normal_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in b2RayCastCallback::ReportFixture function");
		}
		const b2Vec2 & normal=*normal_ptr;
		float fraction=(float)lua_tonumber(L,5);

		b2RayCastCallback* self=(Luna< b2RayCastCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RayCastCallback::ReportFixture(b2Fixture *, const b2Vec2 &, const b2Vec2 &, float). Got : '%s'",typeid(Luna< b2RayCastCallback >::check(L,1)).name());
		}
		float lret = self->ReportFixture(fixture, point, normal, fraction);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

b2RayCastCallback* LunaTraits< b2RayCastCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2RayCastCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float b2RayCastCallback::ReportFixture(b2Fixture * fixture, const b2Vec2 & point, const b2Vec2 & normal, float fraction)
}

void LunaTraits< b2RayCastCallback >::_bind_dtor(b2RayCastCallback* obj) {
	delete obj;
}

const char LunaTraits< b2RayCastCallback >::className[] = "b2RayCastCallback";
const char LunaTraits< b2RayCastCallback >::fullName[] = "b2RayCastCallback";
const char LunaTraits< b2RayCastCallback >::moduleName[] = "box2d";
const char* LunaTraits< b2RayCastCallback >::parents[] = {0};
const int LunaTraits< b2RayCastCallback >::hash = 29620235;
const int LunaTraits< b2RayCastCallback >::uniqueIDs[] = {29620235,0};

luna_RegType LunaTraits< b2RayCastCallback >::methods[] = {
	{"ReportFixture", &luna_wrapper_b2RayCastCallback::_bind_ReportFixture},
	{"dynCast", &luna_wrapper_b2RayCastCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_b2RayCastCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_b2RayCastCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2RayCastCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_b2RayCastCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2RayCastCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2RayCastCallback >::enumValues[] = {
	{0,0}
};


