#include <plug_common.h>

class luna_wrapper_b2Rot {
public:
	typedef Luna< b2Rot > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92076967) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Rot*)");
		}

		b2Rot* rhs =(Luna< b2Rot >::check(L,2));
		b2Rot* self=(Luna< b2Rot >::check(L,1));
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

		b2Rot* self= (b2Rot*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Rot >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92076967) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Rot >::check(L,1));
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

		b2Rot* self=(Luna< b2Rot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Rot");
		
		return luna_dynamicCast(L,converters,"b2Rot",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetXAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetYAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2Rot::b2Rot()
	static b2Rot* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Rot::b2Rot() function, expected prototype:\nb2Rot::b2Rot()\nClass arguments details:\n");
		}


		return new b2Rot();
	}

	// b2Rot::b2Rot(float angle)
	static b2Rot* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Rot::b2Rot(float angle) function, expected prototype:\nb2Rot::b2Rot(float angle)\nClass arguments details:\n");
		}

		float angle=(float)lua_tonumber(L,1);

		return new b2Rot(angle);
	}

	// Overload binder for b2Rot::b2Rot
	static b2Rot* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2Rot, cannot match any of the overloads for function b2Rot:\n  b2Rot()\n  b2Rot(float)\n");
		return NULL;
	}


	// Function binds:
	// void b2Rot::Set(float angle)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Rot::Set(float angle) function, expected prototype:\nvoid b2Rot::Set(float angle)\nClass arguments details:\n");
		}

		float angle=(float)lua_tonumber(L,2);

		b2Rot* self=(Luna< b2Rot >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Rot::Set(float). Got : '%s'",typeid(Luna< b2Rot >::check(L,1)).name());
		}
		self->Set(angle);

		return 0;
	}

	// void b2Rot::SetIdentity()
	static int _bind_SetIdentity(lua_State *L) {
		if (!_lg_typecheck_SetIdentity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Rot::SetIdentity() function, expected prototype:\nvoid b2Rot::SetIdentity()\nClass arguments details:\n");
		}


		b2Rot* self=(Luna< b2Rot >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Rot::SetIdentity(). Got : '%s'",typeid(Luna< b2Rot >::check(L,1)).name());
		}
		self->SetIdentity();

		return 0;
	}

	// float b2Rot::GetAngle() const
	static int _bind_GetAngle(lua_State *L) {
		if (!_lg_typecheck_GetAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Rot::GetAngle() const function, expected prototype:\nfloat b2Rot::GetAngle() const\nClass arguments details:\n");
		}


		b2Rot* self=(Luna< b2Rot >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Rot::GetAngle() const. Got : '%s'",typeid(Luna< b2Rot >::check(L,1)).name());
		}
		float lret = self->GetAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Vec2 b2Rot::GetXAxis() const
	static int _bind_GetXAxis(lua_State *L) {
		if (!_lg_typecheck_GetXAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Rot::GetXAxis() const function, expected prototype:\nb2Vec2 b2Rot::GetXAxis() const\nClass arguments details:\n");
		}


		b2Rot* self=(Luna< b2Rot >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Rot::GetXAxis() const. Got : '%s'",typeid(Luna< b2Rot >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetXAxis();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2Rot::GetYAxis() const
	static int _bind_GetYAxis(lua_State *L) {
		if (!_lg_typecheck_GetYAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Rot::GetYAxis() const function, expected prototype:\nb2Vec2 b2Rot::GetYAxis() const\nClass arguments details:\n");
		}


		b2Rot* self=(Luna< b2Rot >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Rot::GetYAxis() const. Got : '%s'",typeid(Luna< b2Rot >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetYAxis();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2Rot::s()
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Rot::s() function, expected prototype:\nfloat b2Rot::s()\nClass arguments details:\n");
		}


		b2Rot* self=(Luna< b2Rot >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Rot::s(). Got : '%s'",typeid(Luna< b2Rot >::check(L,1)).name());
		}
		float lret = self->s;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Rot::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Rot::c() function, expected prototype:\nfloat b2Rot::c()\nClass arguments details:\n");
		}


		b2Rot* self=(Luna< b2Rot >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Rot::c(). Got : '%s'",typeid(Luna< b2Rot >::check(L,1)).name());
		}
		float lret = self->c;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Rot::s(float value)
	static int _bind_setS(lua_State *L) {
		if (!_lg_typecheck_setS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Rot::s(float value) function, expected prototype:\nvoid b2Rot::s(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Rot* self=(Luna< b2Rot >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Rot::s(float). Got : '%s'",typeid(Luna< b2Rot >::check(L,1)).name());
		}
		self->s = value;

		return 0;
	}

	// void b2Rot::c(float value)
	static int _bind_setC(lua_State *L) {
		if (!_lg_typecheck_setC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Rot::c(float value) function, expected prototype:\nvoid b2Rot::c(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Rot* self=(Luna< b2Rot >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Rot::c(float). Got : '%s'",typeid(Luna< b2Rot >::check(L,1)).name());
		}
		self->c = value;

		return 0;
	}


	// Operator binds:

};

b2Rot* LunaTraits< b2Rot >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Rot::_bind_ctor(L);
}

void LunaTraits< b2Rot >::_bind_dtor(b2Rot* obj) {
	delete obj;
}

const char LunaTraits< b2Rot >::className[] = "b2Rot";
const char LunaTraits< b2Rot >::fullName[] = "b2Rot";
const char LunaTraits< b2Rot >::moduleName[] = "box2d";
const char* LunaTraits< b2Rot >::parents[] = {0};
const int LunaTraits< b2Rot >::hash = 92076967;
const int LunaTraits< b2Rot >::uniqueIDs[] = {92076967,0};

luna_RegType LunaTraits< b2Rot >::methods[] = {
	{"Set", &luna_wrapper_b2Rot::_bind_Set},
	{"SetIdentity", &luna_wrapper_b2Rot::_bind_SetIdentity},
	{"GetAngle", &luna_wrapper_b2Rot::_bind_GetAngle},
	{"GetXAxis", &luna_wrapper_b2Rot::_bind_GetXAxis},
	{"GetYAxis", &luna_wrapper_b2Rot::_bind_GetYAxis},
	{"getS", &luna_wrapper_b2Rot::_bind_getS},
	{"getC", &luna_wrapper_b2Rot::_bind_getC},
	{"setS", &luna_wrapper_b2Rot::_bind_setS},
	{"setC", &luna_wrapper_b2Rot::_bind_setC},
	{"dynCast", &luna_wrapper_b2Rot::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Rot::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Rot::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Rot::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Rot >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Rot >::enumValues[] = {
	{0,0}
};


