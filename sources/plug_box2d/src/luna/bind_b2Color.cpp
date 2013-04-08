#include <plug_common.h>

class luna_wrapper_b2Color {
public:
	typedef Luna< b2Color > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72103019) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Color*)");
		}

		b2Color* rhs =(Luna< b2Color >::check(L,2));
		b2Color* self=(Luna< b2Color >::check(L,1));
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

		b2Color* self= (b2Color*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Color >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72103019) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Color >::check(L,1));
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

		b2Color* self=(Luna< b2Color >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Color");
		
		return luna_dynamicCast(L,converters,"b2Color",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getG(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setG(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2Color::b2Color()
	static b2Color* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Color::b2Color() function, expected prototype:\nb2Color::b2Color()\nClass arguments details:\n");
		}


		return new b2Color();
	}

	// b2Color::b2Color(float r, float g, float b)
	static b2Color* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Color::b2Color(float r, float g, float b) function, expected prototype:\nb2Color::b2Color(float r, float g, float b)\nClass arguments details:\n");
		}

		float r=(float)lua_tonumber(L,1);
		float g=(float)lua_tonumber(L,2);
		float b=(float)lua_tonumber(L,3);

		return new b2Color(r, g, b);
	}

	// Overload binder for b2Color::b2Color
	static b2Color* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2Color, cannot match any of the overloads for function b2Color:\n  b2Color()\n  b2Color(float, float, float)\n");
		return NULL;
	}


	// Function binds:
	// void b2Color::Set(float ri, float gi, float bi)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Color::Set(float ri, float gi, float bi) function, expected prototype:\nvoid b2Color::Set(float ri, float gi, float bi)\nClass arguments details:\n");
		}

		float ri=(float)lua_tonumber(L,2);
		float gi=(float)lua_tonumber(L,3);
		float bi=(float)lua_tonumber(L,4);

		b2Color* self=(Luna< b2Color >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Color::Set(float, float, float). Got : '%s'",typeid(Luna< b2Color >::check(L,1)).name());
		}
		self->Set(ri, gi, bi);

		return 0;
	}

	// float b2Color::r()
	static int _bind_getR(lua_State *L) {
		if (!_lg_typecheck_getR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Color::r() function, expected prototype:\nfloat b2Color::r()\nClass arguments details:\n");
		}


		b2Color* self=(Luna< b2Color >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Color::r(). Got : '%s'",typeid(Luna< b2Color >::check(L,1)).name());
		}
		float lret = self->r;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Color::g()
	static int _bind_getG(lua_State *L) {
		if (!_lg_typecheck_getG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Color::g() function, expected prototype:\nfloat b2Color::g()\nClass arguments details:\n");
		}


		b2Color* self=(Luna< b2Color >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Color::g(). Got : '%s'",typeid(Luna< b2Color >::check(L,1)).name());
		}
		float lret = self->g;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Color::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Color::b() function, expected prototype:\nfloat b2Color::b()\nClass arguments details:\n");
		}


		b2Color* self=(Luna< b2Color >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Color::b(). Got : '%s'",typeid(Luna< b2Color >::check(L,1)).name());
		}
		float lret = self->b;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Color::r(float value)
	static int _bind_setR(lua_State *L) {
		if (!_lg_typecheck_setR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Color::r(float value) function, expected prototype:\nvoid b2Color::r(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Color* self=(Luna< b2Color >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Color::r(float). Got : '%s'",typeid(Luna< b2Color >::check(L,1)).name());
		}
		self->r = value;

		return 0;
	}

	// void b2Color::g(float value)
	static int _bind_setG(lua_State *L) {
		if (!_lg_typecheck_setG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Color::g(float value) function, expected prototype:\nvoid b2Color::g(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Color* self=(Luna< b2Color >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Color::g(float). Got : '%s'",typeid(Luna< b2Color >::check(L,1)).name());
		}
		self->g = value;

		return 0;
	}

	// void b2Color::b(float value)
	static int _bind_setB(lua_State *L) {
		if (!_lg_typecheck_setB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Color::b(float value) function, expected prototype:\nvoid b2Color::b(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Color* self=(Luna< b2Color >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Color::b(float). Got : '%s'",typeid(Luna< b2Color >::check(L,1)).name());
		}
		self->b = value;

		return 0;
	}


	// Operator binds:

};

b2Color* LunaTraits< b2Color >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Color::_bind_ctor(L);
}

void LunaTraits< b2Color >::_bind_dtor(b2Color* obj) {
	delete obj;
}

const char LunaTraits< b2Color >::className[] = "b2Color";
const char LunaTraits< b2Color >::fullName[] = "b2Color";
const char LunaTraits< b2Color >::moduleName[] = "box2d";
const char* LunaTraits< b2Color >::parents[] = {0};
const int LunaTraits< b2Color >::hash = 72103019;
const int LunaTraits< b2Color >::uniqueIDs[] = {72103019,0};

luna_RegType LunaTraits< b2Color >::methods[] = {
	{"Set", &luna_wrapper_b2Color::_bind_Set},
	{"getR", &luna_wrapper_b2Color::_bind_getR},
	{"getG", &luna_wrapper_b2Color::_bind_getG},
	{"getB", &luna_wrapper_b2Color::_bind_getB},
	{"setR", &luna_wrapper_b2Color::_bind_setR},
	{"setG", &luna_wrapper_b2Color::_bind_setG},
	{"setB", &luna_wrapper_b2Color::_bind_setB},
	{"dynCast", &luna_wrapper_b2Color::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Color::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Color::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Color::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Color >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Color >::enumValues[] = {
	{0,0}
};


