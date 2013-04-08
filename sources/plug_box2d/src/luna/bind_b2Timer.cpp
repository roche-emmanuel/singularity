#include <plug_common.h>

class luna_wrapper_b2Timer {
public:
	typedef Luna< b2Timer > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87624781) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Timer*)");
		}

		b2Timer* rhs =(Luna< b2Timer >::check(L,2));
		b2Timer* self=(Luna< b2Timer >::check(L,1));
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

		b2Timer* self= (b2Timer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Timer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87624781) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Timer >::check(L,1));
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

		b2Timer* self=(Luna< b2Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Timer");
		
		return luna_dynamicCast(L,converters,"b2Timer",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMilliseconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2Timer::b2Timer()
	static b2Timer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Timer::b2Timer() function, expected prototype:\nb2Timer::b2Timer()\nClass arguments details:\n");
		}


		return new b2Timer();
	}


	// Function binds:
	// void b2Timer::Reset()
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Timer::Reset() function, expected prototype:\nvoid b2Timer::Reset()\nClass arguments details:\n");
		}


		b2Timer* self=(Luna< b2Timer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Timer::Reset(). Got : '%s'",typeid(Luna< b2Timer >::check(L,1)).name());
		}
		self->Reset();

		return 0;
	}

	// float b2Timer::GetMilliseconds() const
	static int _bind_GetMilliseconds(lua_State *L) {
		if (!_lg_typecheck_GetMilliseconds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Timer::GetMilliseconds() const function, expected prototype:\nfloat b2Timer::GetMilliseconds() const\nClass arguments details:\n");
		}


		b2Timer* self=(Luna< b2Timer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Timer::GetMilliseconds() const. Got : '%s'",typeid(Luna< b2Timer >::check(L,1)).name());
		}
		float lret = self->GetMilliseconds();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

b2Timer* LunaTraits< b2Timer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Timer::_bind_ctor(L);
}

void LunaTraits< b2Timer >::_bind_dtor(b2Timer* obj) {
	delete obj;
}

const char LunaTraits< b2Timer >::className[] = "b2Timer";
const char LunaTraits< b2Timer >::fullName[] = "b2Timer";
const char LunaTraits< b2Timer >::moduleName[] = "box2d";
const char* LunaTraits< b2Timer >::parents[] = {0};
const int LunaTraits< b2Timer >::hash = 87624781;
const int LunaTraits< b2Timer >::uniqueIDs[] = {87624781,0};

luna_RegType LunaTraits< b2Timer >::methods[] = {
	{"Reset", &luna_wrapper_b2Timer::_bind_Reset},
	{"GetMilliseconds", &luna_wrapper_b2Timer::_bind_GetMilliseconds},
	{"dynCast", &luna_wrapper_b2Timer::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Timer::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Timer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Timer::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Timer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Timer >::enumValues[] = {
	{0,0}
};


