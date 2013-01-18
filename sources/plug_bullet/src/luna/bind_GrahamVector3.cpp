#include <plug_common.h>

class luna_wrapper_GrahamVector3 {
public:
	typedef Luna< GrahamVector3 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btVector3*)");
		}

		btVector3* rhs =(Luna< btVector3 >::check(L,2));
		btVector3* self=(Luna< btVector3 >::check(L,1));
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

		GrahamVector3* self= (GrahamVector3*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< GrahamVector3 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btVector3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btVector3(lua_State *L) {
		// all checked are already performed before reaching this point.
		//GrahamVector3* ptr= dynamic_cast< GrahamVector3* >(Luna< btVector3 >::check(L,1));
		GrahamVector3* ptr= luna_caster< btVector3, GrahamVector3 >::cast(Luna< btVector3 >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GrahamVector3 >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrgIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOrgIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// GrahamVector3::GrahamVector3(const btVector3 & org, int orgIndex)
	static GrahamVector3* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GrahamVector3::GrahamVector3(const btVector3 & org, int orgIndex) function, expected prototype:\nGrahamVector3::GrahamVector3(const btVector3 & org, int orgIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* org_ptr=(Luna< btVector3 >::check(L,1));
		if( !org_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg org in GrahamVector3::GrahamVector3 function");
		}
		const btVector3 & org=*org_ptr;
		int orgIndex=(int)lua_tointeger(L,2);

		return new GrahamVector3(org, orgIndex);
	}


	// Function binds:
	// float GrahamVector3::m_angle()
	static int _bind_getAngle(lua_State *L) {
		if (!_lg_typecheck_getAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float GrahamVector3::m_angle() function, expected prototype:\nfloat GrahamVector3::m_angle()\nClass arguments details:\n");
		}


		GrahamVector3* self=Luna< btVector3 >::checkSubType< GrahamVector3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float GrahamVector3::m_angle(). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		float lret = self->m_angle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int GrahamVector3::m_orgIndex()
	static int _bind_getOrgIndex(lua_State *L) {
		if (!_lg_typecheck_getOrgIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int GrahamVector3::m_orgIndex() function, expected prototype:\nint GrahamVector3::m_orgIndex()\nClass arguments details:\n");
		}


		GrahamVector3* self=Luna< btVector3 >::checkSubType< GrahamVector3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int GrahamVector3::m_orgIndex(). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		int lret = self->m_orgIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void GrahamVector3::m_angle(float value)
	static int _bind_setAngle(lua_State *L) {
		if (!_lg_typecheck_setAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GrahamVector3::m_angle(float value) function, expected prototype:\nvoid GrahamVector3::m_angle(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		GrahamVector3* self=Luna< btVector3 >::checkSubType< GrahamVector3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GrahamVector3::m_angle(float). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->m_angle = value;

		return 0;
	}

	// void GrahamVector3::m_orgIndex(int value)
	static int _bind_setOrgIndex(lua_State *L) {
		if (!_lg_typecheck_setOrgIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GrahamVector3::m_orgIndex(int value) function, expected prototype:\nvoid GrahamVector3::m_orgIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		GrahamVector3* self=Luna< btVector3 >::checkSubType< GrahamVector3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GrahamVector3::m_orgIndex(int). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->m_orgIndex = value;

		return 0;
	}


	// Operator binds:

};

GrahamVector3* LunaTraits< GrahamVector3 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_GrahamVector3::_bind_ctor(L);
}

void LunaTraits< GrahamVector3 >::_bind_dtor(GrahamVector3* obj) {
	delete obj;
}

const char LunaTraits< GrahamVector3 >::className[] = "GrahamVector3";
const char LunaTraits< GrahamVector3 >::fullName[] = "GrahamVector3";
const char LunaTraits< GrahamVector3 >::moduleName[] = "bullet";
const char* LunaTraits< GrahamVector3 >::parents[] = {"bullet.btVector3", 0};
const int LunaTraits< GrahamVector3 >::hash = 65522341;
const int LunaTraits< GrahamVector3 >::uniqueIDs[] = {91544891,0};

luna_RegType LunaTraits< GrahamVector3 >::methods[] = {
	{"getAngle", &luna_wrapper_GrahamVector3::_bind_getAngle},
	{"getOrgIndex", &luna_wrapper_GrahamVector3::_bind_getOrgIndex},
	{"setAngle", &luna_wrapper_GrahamVector3::_bind_setAngle},
	{"setOrgIndex", &luna_wrapper_GrahamVector3::_bind_setOrgIndex},
	{"__eq", &luna_wrapper_GrahamVector3::_bind___eq},
	{"fromVoid", &luna_wrapper_GrahamVector3::_bind_fromVoid},
	{"asVoid", &luna_wrapper_GrahamVector3::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< GrahamVector3 >::converters[] = {
	{"btVector3", &luna_wrapper_GrahamVector3::_cast_from_btVector3},
	{0,0}
};

luna_RegEnumType LunaTraits< GrahamVector3 >::enumValues[] = {
	{0,0}
};


