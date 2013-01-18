#include <plug_common.h>

class luna_wrapper_b2MassData {
public:
	typedef Luna< b2MassData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24760292) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2MassData*)");
		}

		b2MassData* rhs =(Luna< b2MassData >::check(L,2));
		b2MassData* self=(Luna< b2MassData >::check(L,1));
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

		b2MassData* self= (b2MassData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2MassData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24760292) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2MassData >::check(L,1));
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

		b2MassData* self=(Luna< b2MassData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2MassData");
		
		return luna_dynamicCast(L,converters,"b2MassData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getMass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMass(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float b2MassData::mass()
	static int _bind_getMass(lua_State *L) {
		if (!_lg_typecheck_getMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2MassData::mass() function, expected prototype:\nfloat b2MassData::mass()\nClass arguments details:\n");
		}


		b2MassData* self=(Luna< b2MassData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2MassData::mass(). Got : '%s'",typeid(Luna< b2MassData >::check(L,1)).name());
		}
		float lret = self->mass;
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Vec2 b2MassData::center()
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2MassData::center() function, expected prototype:\nb2Vec2 b2MassData::center()\nClass arguments details:\n");
		}


		b2MassData* self=(Luna< b2MassData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2MassData::center(). Got : '%s'",typeid(Luna< b2MassData >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->center;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2MassData::I()
	static int _bind_getI(lua_State *L) {
		if (!_lg_typecheck_getI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2MassData::I() function, expected prototype:\nfloat b2MassData::I()\nClass arguments details:\n");
		}


		b2MassData* self=(Luna< b2MassData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2MassData::I(). Got : '%s'",typeid(Luna< b2MassData >::check(L,1)).name());
		}
		float lret = self->I;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2MassData::mass(float value)
	static int _bind_setMass(lua_State *L) {
		if (!_lg_typecheck_setMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MassData::mass(float value) function, expected prototype:\nvoid b2MassData::mass(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2MassData* self=(Luna< b2MassData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MassData::mass(float). Got : '%s'",typeid(Luna< b2MassData >::check(L,1)).name());
		}
		self->mass = value;

		return 0;
	}

	// void b2MassData::center(b2Vec2 value)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MassData::center(b2Vec2 value) function, expected prototype:\nvoid b2MassData::center(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2MassData::center function");
		}
		b2Vec2 value=*value_ptr;

		b2MassData* self=(Luna< b2MassData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MassData::center(b2Vec2). Got : '%s'",typeid(Luna< b2MassData >::check(L,1)).name());
		}
		self->center = value;

		return 0;
	}

	// void b2MassData::I(float value)
	static int _bind_setI(lua_State *L) {
		if (!_lg_typecheck_setI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MassData::I(float value) function, expected prototype:\nvoid b2MassData::I(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2MassData* self=(Luna< b2MassData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MassData::I(float). Got : '%s'",typeid(Luna< b2MassData >::check(L,1)).name());
		}
		self->I = value;

		return 0;
	}


	// Operator binds:

};

b2MassData* LunaTraits< b2MassData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2MassData >::_bind_dtor(b2MassData* obj) {
	delete obj;
}

const char LunaTraits< b2MassData >::className[] = "b2MassData";
const char LunaTraits< b2MassData >::fullName[] = "b2MassData";
const char LunaTraits< b2MassData >::moduleName[] = "box2d";
const char* LunaTraits< b2MassData >::parents[] = {0};
const int LunaTraits< b2MassData >::hash = 24760292;
const int LunaTraits< b2MassData >::uniqueIDs[] = {24760292,0};

luna_RegType LunaTraits< b2MassData >::methods[] = {
	{"getMass", &luna_wrapper_b2MassData::_bind_getMass},
	{"getCenter", &luna_wrapper_b2MassData::_bind_getCenter},
	{"getI", &luna_wrapper_b2MassData::_bind_getI},
	{"setMass", &luna_wrapper_b2MassData::_bind_setMass},
	{"setCenter", &luna_wrapper_b2MassData::_bind_setCenter},
	{"setI", &luna_wrapper_b2MassData::_bind_setI},
	{"dynCast", &luna_wrapper_b2MassData::_bind_dynCast},
	{"__eq", &luna_wrapper_b2MassData::_bind___eq},
	{"fromVoid", &luna_wrapper_b2MassData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2MassData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2MassData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2MassData >::enumValues[] = {
	{0,0}
};


