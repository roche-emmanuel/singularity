#include <plug_common.h>

class luna_wrapper_btPositionAndRadius {
public:
	typedef Luna< btPositionAndRadius > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22563878) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btPositionAndRadius*)");
		}

		btPositionAndRadius* rhs =(Luna< btPositionAndRadius >::check(L,2));
		btPositionAndRadius* self=(Luna< btPositionAndRadius >::check(L,1));
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

		btPositionAndRadius* self= (btPositionAndRadius*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btPositionAndRadius >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22563878) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btPositionAndRadius >::check(L,1));
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

		btPositionAndRadius* self=(Luna< btPositionAndRadius >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btPositionAndRadius");
		
		return luna_dynamicCast(L,converters,"btPositionAndRadius",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3FloatData btPositionAndRadius::m_pos()
	static int _bind_getPos(lua_State *L) {
		if (!_lg_typecheck_getPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btPositionAndRadius::m_pos() function, expected prototype:\nbtVector3FloatData btPositionAndRadius::m_pos()\nClass arguments details:\n");
		}


		btPositionAndRadius* self=(Luna< btPositionAndRadius >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btPositionAndRadius::m_pos(). Got : '%s'",typeid(Luna< btPositionAndRadius >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_pos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// float btPositionAndRadius::m_radius()
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btPositionAndRadius::m_radius() function, expected prototype:\nfloat btPositionAndRadius::m_radius()\nClass arguments details:\n");
		}


		btPositionAndRadius* self=(Luna< btPositionAndRadius >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btPositionAndRadius::m_radius(). Got : '%s'",typeid(Luna< btPositionAndRadius >::check(L,1)).name());
		}
		float lret = self->m_radius;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btPositionAndRadius::m_pos(btVector3FloatData value)
	static int _bind_setPos(lua_State *L) {
		if (!_lg_typecheck_setPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPositionAndRadius::m_pos(btVector3FloatData value) function, expected prototype:\nvoid btPositionAndRadius::m_pos(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPositionAndRadius::m_pos function");
		}
		btVector3FloatData value=*value_ptr;

		btPositionAndRadius* self=(Luna< btPositionAndRadius >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPositionAndRadius::m_pos(btVector3FloatData). Got : '%s'",typeid(Luna< btPositionAndRadius >::check(L,1)).name());
		}
		self->m_pos = value;

		return 0;
	}

	// void btPositionAndRadius::m_radius(float value)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPositionAndRadius::m_radius(float value) function, expected prototype:\nvoid btPositionAndRadius::m_radius(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btPositionAndRadius* self=(Luna< btPositionAndRadius >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPositionAndRadius::m_radius(float). Got : '%s'",typeid(Luna< btPositionAndRadius >::check(L,1)).name());
		}
		self->m_radius = value;

		return 0;
	}


	// Operator binds:

};

btPositionAndRadius* LunaTraits< btPositionAndRadius >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btPositionAndRadius >::_bind_dtor(btPositionAndRadius* obj) {
	delete obj;
}

const char LunaTraits< btPositionAndRadius >::className[] = "btPositionAndRadius";
const char LunaTraits< btPositionAndRadius >::fullName[] = "btPositionAndRadius";
const char LunaTraits< btPositionAndRadius >::moduleName[] = "bullet";
const char* LunaTraits< btPositionAndRadius >::parents[] = {0};
const int LunaTraits< btPositionAndRadius >::hash = 22563878;
const int LunaTraits< btPositionAndRadius >::uniqueIDs[] = {22563878,0};

luna_RegType LunaTraits< btPositionAndRadius >::methods[] = {
	{"getPos", &luna_wrapper_btPositionAndRadius::_bind_getPos},
	{"getRadius", &luna_wrapper_btPositionAndRadius::_bind_getRadius},
	{"setPos", &luna_wrapper_btPositionAndRadius::_bind_setPos},
	{"setRadius", &luna_wrapper_btPositionAndRadius::_bind_setRadius},
	{"dynCast", &luna_wrapper_btPositionAndRadius::_bind_dynCast},
	{"__eq", &luna_wrapper_btPositionAndRadius::_bind___eq},
	{"fromVoid", &luna_wrapper_btPositionAndRadius::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btPositionAndRadius::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btPositionAndRadius >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btPositionAndRadius >::enumValues[] = {
	{0,0}
};


