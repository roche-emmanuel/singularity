#include <plug_common.h>

#include <luna/wrappers/wrapper_b2DestructionListener.h>

class luna_wrapper_b2DestructionListener {
public:
	typedef Luna< b2DestructionListener > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		b2DestructionListener* self=(Luna< b2DestructionListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2DestructionListener,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39920564) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2DestructionListener*)");
		}

		b2DestructionListener* rhs =(Luna< b2DestructionListener >::check(L,2));
		b2DestructionListener* self=(Luna< b2DestructionListener >::check(L,1));
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

		b2DestructionListener* self= (b2DestructionListener*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2DestructionListener >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39920564) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2DestructionListener >::check(L,1));
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

		b2DestructionListener* self=(Luna< b2DestructionListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2DestructionListener");
		
		return luna_dynamicCast(L,converters,"b2DestructionListener",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SayGoodbye_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78564754)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< b2Joint >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SayGoodbye_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92969381)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< b2Fixture >::check(L,2)) ) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2DestructionListener::b2DestructionListener(lua_Table * data)
	static b2DestructionListener* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2DestructionListener::b2DestructionListener(lua_Table * data) function, expected prototype:\nb2DestructionListener::b2DestructionListener(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_b2DestructionListener(L,NULL);
	}


	// Function binds:
	// void b2DestructionListener::SayGoodbye(b2Joint * joint)
	static int _bind_SayGoodbye_overload_1(lua_State *L) {
		if (!_lg_typecheck_SayGoodbye_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2DestructionListener::SayGoodbye(b2Joint * joint) function, expected prototype:\nvoid b2DestructionListener::SayGoodbye(b2Joint * joint)\nClass arguments details:\narg 1 ID = 78564754\n");
		}

		b2Joint* joint=(Luna< b2Joint >::check(L,2));

		b2DestructionListener* self=(Luna< b2DestructionListener >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2DestructionListener::SayGoodbye(b2Joint *). Got : '%s'",typeid(Luna< b2DestructionListener >::check(L,1)).name());
		}
		self->SayGoodbye(joint);

		return 0;
	}

	// void b2DestructionListener::SayGoodbye(b2Fixture * fixture)
	static int _bind_SayGoodbye_overload_2(lua_State *L) {
		if (!_lg_typecheck_SayGoodbye_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2DestructionListener::SayGoodbye(b2Fixture * fixture) function, expected prototype:\nvoid b2DestructionListener::SayGoodbye(b2Fixture * fixture)\nClass arguments details:\narg 1 ID = 92969381\n");
		}

		b2Fixture* fixture=(Luna< b2Fixture >::check(L,2));

		b2DestructionListener* self=(Luna< b2DestructionListener >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2DestructionListener::SayGoodbye(b2Fixture *). Got : '%s'",typeid(Luna< b2DestructionListener >::check(L,1)).name());
		}
		self->SayGoodbye(fixture);

		return 0;
	}

	// Overload binder for b2DestructionListener::SayGoodbye
	static int _bind_SayGoodbye(lua_State *L) {
		if (_lg_typecheck_SayGoodbye_overload_1(L)) return _bind_SayGoodbye_overload_1(L);
		if (_lg_typecheck_SayGoodbye_overload_2(L)) return _bind_SayGoodbye_overload_2(L);

		luaL_error(L, "error in function SayGoodbye, cannot match any of the overloads for function SayGoodbye:\n  SayGoodbye(b2Joint *)\n  SayGoodbye(b2Fixture *)\n");
		return 0;
	}


	// Operator binds:

};

b2DestructionListener* LunaTraits< b2DestructionListener >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2DestructionListener::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void b2DestructionListener::SayGoodbye(b2Joint * joint)
	// void b2DestructionListener::SayGoodbye(b2Fixture * fixture)
}

void LunaTraits< b2DestructionListener >::_bind_dtor(b2DestructionListener* obj) {
	delete obj;
}

const char LunaTraits< b2DestructionListener >::className[] = "b2DestructionListener";
const char LunaTraits< b2DestructionListener >::fullName[] = "b2DestructionListener";
const char LunaTraits< b2DestructionListener >::moduleName[] = "box2d";
const char* LunaTraits< b2DestructionListener >::parents[] = {0};
const int LunaTraits< b2DestructionListener >::hash = 39920564;
const int LunaTraits< b2DestructionListener >::uniqueIDs[] = {39920564,0};

luna_RegType LunaTraits< b2DestructionListener >::methods[] = {
	{"SayGoodbye", &luna_wrapper_b2DestructionListener::_bind_SayGoodbye},
	{"dynCast", &luna_wrapper_b2DestructionListener::_bind_dynCast},
	{"__eq", &luna_wrapper_b2DestructionListener::_bind___eq},
	{"fromVoid", &luna_wrapper_b2DestructionListener::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2DestructionListener::_bind_asVoid},
	{"getTable", &luna_wrapper_b2DestructionListener::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2DestructionListener >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2DestructionListener >::enumValues[] = {
	{0,0}
};


