#include <plug_common.h>

class luna_wrapper_btWheelInfo_RaycastInfo {
public:
	typedef Luna< btWheelInfo::RaycastInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75375071) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btWheelInfo::RaycastInfo*)");
		}

		btWheelInfo::RaycastInfo* rhs =(Luna< btWheelInfo::RaycastInfo >::check(L,2));
		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btWheelInfo::RaycastInfo");
		
		return luna_dynamicCast(L,converters,"btWheelInfo::RaycastInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_contactNormalWS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactPointWS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_suspensionLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hardPointWS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_wheelDirectionWS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_wheelAxleWS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_isInContact(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_groundObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_contactNormalWS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactPointWS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_suspensionLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hardPointWS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_wheelDirectionWS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_wheelAxleWS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_isInContact(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_groundObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btWheelInfo::RaycastInfo::m_contactNormalWS()
	static int _bind_getM_contactNormalWS(lua_State *L) {
		if (!_lg_typecheck_getM_contactNormalWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::RaycastInfo::m_contactNormalWS() function, expected prototype:\nbtVector3 btWheelInfo::RaycastInfo::m_contactNormalWS()\nClass arguments details:\n");
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::RaycastInfo::m_contactNormalWS(). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_contactNormalWS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfo::RaycastInfo::m_contactPointWS()
	static int _bind_getM_contactPointWS(lua_State *L) {
		if (!_lg_typecheck_getM_contactPointWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::RaycastInfo::m_contactPointWS() function, expected prototype:\nbtVector3 btWheelInfo::RaycastInfo::m_contactPointWS()\nClass arguments details:\n");
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::RaycastInfo::m_contactPointWS(). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_contactPointWS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btWheelInfo::RaycastInfo::m_suspensionLength()
	static int _bind_getM_suspensionLength(lua_State *L) {
		if (!_lg_typecheck_getM_suspensionLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btWheelInfo::RaycastInfo::m_suspensionLength() function, expected prototype:\nfloat btWheelInfo::RaycastInfo::m_suspensionLength()\nClass arguments details:\n");
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btWheelInfo::RaycastInfo::m_suspensionLength(). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		float lret = self->m_suspensionLength;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btWheelInfo::RaycastInfo::m_hardPointWS()
	static int _bind_getM_hardPointWS(lua_State *L) {
		if (!_lg_typecheck_getM_hardPointWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::RaycastInfo::m_hardPointWS() function, expected prototype:\nbtVector3 btWheelInfo::RaycastInfo::m_hardPointWS()\nClass arguments details:\n");
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::RaycastInfo::m_hardPointWS(). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_hardPointWS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfo::RaycastInfo::m_wheelDirectionWS()
	static int _bind_getM_wheelDirectionWS(lua_State *L) {
		if (!_lg_typecheck_getM_wheelDirectionWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::RaycastInfo::m_wheelDirectionWS() function, expected prototype:\nbtVector3 btWheelInfo::RaycastInfo::m_wheelDirectionWS()\nClass arguments details:\n");
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::RaycastInfo::m_wheelDirectionWS(). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_wheelDirectionWS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfo::RaycastInfo::m_wheelAxleWS()
	static int _bind_getM_wheelAxleWS(lua_State *L) {
		if (!_lg_typecheck_getM_wheelAxleWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::RaycastInfo::m_wheelAxleWS() function, expected prototype:\nbtVector3 btWheelInfo::RaycastInfo::m_wheelAxleWS()\nClass arguments details:\n");
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::RaycastInfo::m_wheelAxleWS(). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_wheelAxleWS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// bool btWheelInfo::RaycastInfo::m_isInContact()
	static int _bind_getM_isInContact(lua_State *L) {
		if (!_lg_typecheck_getM_isInContact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btWheelInfo::RaycastInfo::m_isInContact() function, expected prototype:\nbool btWheelInfo::RaycastInfo::m_isInContact()\nClass arguments details:\n");
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btWheelInfo::RaycastInfo::m_isInContact(). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		bool lret = self->m_isInContact;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * btWheelInfo::RaycastInfo::m_groundObject()
	static int _bind_getM_groundObject(lua_State *L) {
		if (!_lg_typecheck_getM_groundObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btWheelInfo::RaycastInfo::m_groundObject() function, expected prototype:\nvoid * btWheelInfo::RaycastInfo::m_groundObject()\nClass arguments details:\n");
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btWheelInfo::RaycastInfo::m_groundObject(). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		void * lret = self->m_groundObject;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btWheelInfo::RaycastInfo::m_contactNormalWS(btVector3 value)
	static int _bind_setM_contactNormalWS(lua_State *L) {
		if (!_lg_typecheck_setM_contactNormalWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_contactNormalWS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_contactNormalWS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::RaycastInfo::m_contactNormalWS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_contactNormalWS(btVector3). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		self->m_contactNormalWS = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_contactPointWS(btVector3 value)
	static int _bind_setM_contactPointWS(lua_State *L) {
		if (!_lg_typecheck_setM_contactPointWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_contactPointWS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_contactPointWS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::RaycastInfo::m_contactPointWS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_contactPointWS(btVector3). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		self->m_contactPointWS = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_suspensionLength(float value)
	static int _bind_setM_suspensionLength(lua_State *L) {
		if (!_lg_typecheck_setM_suspensionLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_suspensionLength(float value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_suspensionLength(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_suspensionLength(float). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		self->m_suspensionLength = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_hardPointWS(btVector3 value)
	static int _bind_setM_hardPointWS(lua_State *L) {
		if (!_lg_typecheck_setM_hardPointWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_hardPointWS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_hardPointWS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::RaycastInfo::m_hardPointWS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_hardPointWS(btVector3). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		self->m_hardPointWS = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_wheelDirectionWS(btVector3 value)
	static int _bind_setM_wheelDirectionWS(lua_State *L) {
		if (!_lg_typecheck_setM_wheelDirectionWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_wheelDirectionWS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_wheelDirectionWS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::RaycastInfo::m_wheelDirectionWS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_wheelDirectionWS(btVector3). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		self->m_wheelDirectionWS = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_wheelAxleWS(btVector3 value)
	static int _bind_setM_wheelAxleWS(lua_State *L) {
		if (!_lg_typecheck_setM_wheelAxleWS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_wheelAxleWS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_wheelAxleWS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::RaycastInfo::m_wheelAxleWS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_wheelAxleWS(btVector3). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		self->m_wheelAxleWS = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_isInContact(bool value)
	static int _bind_setM_isInContact(lua_State *L) {
		if (!_lg_typecheck_setM_isInContact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_isInContact(bool value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_isInContact(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_isInContact(bool). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		self->m_isInContact = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_groundObject(void * value)
	static int _bind_setM_groundObject(lua_State *L) {
		if (!_lg_typecheck_setM_groundObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_groundObject(void * value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_groundObject(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_groundObject(void *). Got : '%s'",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name());
		}
		self->m_groundObject = value;

		return 0;
	}


	// Operator binds:

};

btWheelInfo::RaycastInfo* LunaTraits< btWheelInfo::RaycastInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btWheelInfo::RaycastInfo >::_bind_dtor(btWheelInfo::RaycastInfo* obj) {
	delete obj;
}

const char LunaTraits< btWheelInfo::RaycastInfo >::className[] = "btWheelInfo_RaycastInfo";
const char LunaTraits< btWheelInfo::RaycastInfo >::fullName[] = "btWheelInfo::RaycastInfo";
const char LunaTraits< btWheelInfo::RaycastInfo >::moduleName[] = "btWheelInfo";
const char* LunaTraits< btWheelInfo::RaycastInfo >::parents[] = {0};
const int LunaTraits< btWheelInfo::RaycastInfo >::hash = 75375071;
const int LunaTraits< btWheelInfo::RaycastInfo >::uniqueIDs[] = {75375071,0};

luna_RegType LunaTraits< btWheelInfo::RaycastInfo >::methods[] = {
	{"getM_contactNormalWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getM_contactNormalWS},
	{"getM_contactPointWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getM_contactPointWS},
	{"getM_suspensionLength", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getM_suspensionLength},
	{"getM_hardPointWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getM_hardPointWS},
	{"getM_wheelDirectionWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getM_wheelDirectionWS},
	{"getM_wheelAxleWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getM_wheelAxleWS},
	{"getM_isInContact", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getM_isInContact},
	{"getM_groundObject", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getM_groundObject},
	{"setM_contactNormalWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setM_contactNormalWS},
	{"setM_contactPointWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setM_contactPointWS},
	{"setM_suspensionLength", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setM_suspensionLength},
	{"setM_hardPointWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setM_hardPointWS},
	{"setM_wheelDirectionWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setM_wheelDirectionWS},
	{"setM_wheelAxleWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setM_wheelAxleWS},
	{"setM_isInContact", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setM_isInContact},
	{"setM_groundObject", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setM_groundObject},
	{"dynCast", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btWheelInfo_RaycastInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btWheelInfo::RaycastInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btWheelInfo::RaycastInfo >::enumValues[] = {
	{0,0}
};


