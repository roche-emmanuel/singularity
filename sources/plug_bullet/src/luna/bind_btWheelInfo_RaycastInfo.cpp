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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btWheelInfo::RaycastInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btWheelInfo::RaycastInfo* rhs =(Luna< btWheelInfo::RaycastInfo >::check(L,2));
		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btWheelInfo::RaycastInfo* self= (btWheelInfo::RaycastInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btWheelInfo::RaycastInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75375071) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
	inline static bool _lg_typecheck_getContactNormalWS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContactPointWS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSuspensionLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHardPointWS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWheelDirectionWS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWheelAxleWS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIsInContact(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGroundObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setContactNormalWS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContactPointWS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSuspensionLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHardPointWS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWheelDirectionWS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWheelAxleWS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIsInContact(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGroundObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btWheelInfo::RaycastInfo::m_contactNormalWS()
	static int _bind_getContactNormalWS(lua_State *L) {
		if (!_lg_typecheck_getContactNormalWS(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::RaycastInfo::m_contactNormalWS() function, expected prototype:\nbtVector3 btWheelInfo::RaycastInfo::m_contactNormalWS()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::RaycastInfo::m_contactNormalWS(). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_contactNormalWS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfo::RaycastInfo::m_contactPointWS()
	static int _bind_getContactPointWS(lua_State *L) {
		if (!_lg_typecheck_getContactPointWS(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::RaycastInfo::m_contactPointWS() function, expected prototype:\nbtVector3 btWheelInfo::RaycastInfo::m_contactPointWS()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::RaycastInfo::m_contactPointWS(). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_contactPointWS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btWheelInfo::RaycastInfo::m_suspensionLength()
	static int _bind_getSuspensionLength(lua_State *L) {
		if (!_lg_typecheck_getSuspensionLength(L)) {
			luaL_error(L, "luna typecheck failed in float btWheelInfo::RaycastInfo::m_suspensionLength() function, expected prototype:\nfloat btWheelInfo::RaycastInfo::m_suspensionLength()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btWheelInfo::RaycastInfo::m_suspensionLength(). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_suspensionLength;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btWheelInfo::RaycastInfo::m_hardPointWS()
	static int _bind_getHardPointWS(lua_State *L) {
		if (!_lg_typecheck_getHardPointWS(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::RaycastInfo::m_hardPointWS() function, expected prototype:\nbtVector3 btWheelInfo::RaycastInfo::m_hardPointWS()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::RaycastInfo::m_hardPointWS(). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_hardPointWS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfo::RaycastInfo::m_wheelDirectionWS()
	static int _bind_getWheelDirectionWS(lua_State *L) {
		if (!_lg_typecheck_getWheelDirectionWS(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::RaycastInfo::m_wheelDirectionWS() function, expected prototype:\nbtVector3 btWheelInfo::RaycastInfo::m_wheelDirectionWS()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::RaycastInfo::m_wheelDirectionWS(). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_wheelDirectionWS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btWheelInfo::RaycastInfo::m_wheelAxleWS()
	static int _bind_getWheelAxleWS(lua_State *L) {
		if (!_lg_typecheck_getWheelAxleWS(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btWheelInfo::RaycastInfo::m_wheelAxleWS() function, expected prototype:\nbtVector3 btWheelInfo::RaycastInfo::m_wheelAxleWS()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btWheelInfo::RaycastInfo::m_wheelAxleWS(). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_wheelAxleWS;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// bool btWheelInfo::RaycastInfo::m_isInContact()
	static int _bind_getIsInContact(lua_State *L) {
		if (!_lg_typecheck_getIsInContact(L)) {
			luaL_error(L, "luna typecheck failed in bool btWheelInfo::RaycastInfo::m_isInContact() function, expected prototype:\nbool btWheelInfo::RaycastInfo::m_isInContact()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btWheelInfo::RaycastInfo::m_isInContact(). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->m_isInContact;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * btWheelInfo::RaycastInfo::m_groundObject()
	static int _bind_getGroundObject(lua_State *L) {
		if (!_lg_typecheck_getGroundObject(L)) {
			luaL_error(L, "luna typecheck failed in void * btWheelInfo::RaycastInfo::m_groundObject() function, expected prototype:\nvoid * btWheelInfo::RaycastInfo::m_groundObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * btWheelInfo::RaycastInfo::m_groundObject(). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->m_groundObject;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btWheelInfo::RaycastInfo::m_contactNormalWS(btVector3 value)
	static int _bind_setContactNormalWS(lua_State *L) {
		if (!_lg_typecheck_setContactNormalWS(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_contactNormalWS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_contactNormalWS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::RaycastInfo::m_contactNormalWS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_contactNormalWS(btVector3). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_contactNormalWS = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_contactPointWS(btVector3 value)
	static int _bind_setContactPointWS(lua_State *L) {
		if (!_lg_typecheck_setContactPointWS(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_contactPointWS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_contactPointWS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::RaycastInfo::m_contactPointWS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_contactPointWS(btVector3). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_contactPointWS = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_suspensionLength(float value)
	static int _bind_setSuspensionLength(lua_State *L) {
		if (!_lg_typecheck_setSuspensionLength(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_suspensionLength(float value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_suspensionLength(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_suspensionLength(float). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_suspensionLength = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_hardPointWS(btVector3 value)
	static int _bind_setHardPointWS(lua_State *L) {
		if (!_lg_typecheck_setHardPointWS(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_hardPointWS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_hardPointWS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::RaycastInfo::m_hardPointWS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_hardPointWS(btVector3). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_hardPointWS = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_wheelDirectionWS(btVector3 value)
	static int _bind_setWheelDirectionWS(lua_State *L) {
		if (!_lg_typecheck_setWheelDirectionWS(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_wheelDirectionWS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_wheelDirectionWS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::RaycastInfo::m_wheelDirectionWS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_wheelDirectionWS(btVector3). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_wheelDirectionWS = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_wheelAxleWS(btVector3 value)
	static int _bind_setWheelAxleWS(lua_State *L) {
		if (!_lg_typecheck_setWheelAxleWS(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_wheelAxleWS(btVector3 value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_wheelAxleWS(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btWheelInfo::RaycastInfo::m_wheelAxleWS function");
		}
		btVector3 value=*value_ptr;

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_wheelAxleWS(btVector3). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_wheelAxleWS = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_isInContact(bool value)
	static int _bind_setIsInContact(lua_State *L) {
		if (!_lg_typecheck_setIsInContact(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_isInContact(bool value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_isInContact(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_isInContact(bool). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_isInContact = value;

		return 0;
	}

	// void btWheelInfo::RaycastInfo::m_groundObject(void * value)
	static int _bind_setGroundObject(lua_State *L) {
		if (!_lg_typecheck_setGroundObject(L)) {
			luaL_error(L, "luna typecheck failed in void btWheelInfo::RaycastInfo::m_groundObject(void * value) function, expected prototype:\nvoid btWheelInfo::RaycastInfo::m_groundObject(void * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* value=(Luna< void >::check(L,2));

		btWheelInfo::RaycastInfo* self=(Luna< btWheelInfo::RaycastInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btWheelInfo::RaycastInfo::m_groundObject(void *). Got : '%s'\n%s",typeid(Luna< btWheelInfo::RaycastInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
const char LunaTraits< btWheelInfo::RaycastInfo >::moduleName[] = "bullet";
const char* LunaTraits< btWheelInfo::RaycastInfo >::parents[] = {0};
const int LunaTraits< btWheelInfo::RaycastInfo >::hash = 75375071;
const int LunaTraits< btWheelInfo::RaycastInfo >::uniqueIDs[] = {75375071,0};

luna_RegType LunaTraits< btWheelInfo::RaycastInfo >::methods[] = {
	{"getContactNormalWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getContactNormalWS},
	{"getContactPointWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getContactPointWS},
	{"getSuspensionLength", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getSuspensionLength},
	{"getHardPointWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getHardPointWS},
	{"getWheelDirectionWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getWheelDirectionWS},
	{"getWheelAxleWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getWheelAxleWS},
	{"getIsInContact", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getIsInContact},
	{"getGroundObject", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_getGroundObject},
	{"setContactNormalWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setContactNormalWS},
	{"setContactPointWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setContactPointWS},
	{"setSuspensionLength", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setSuspensionLength},
	{"setHardPointWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setHardPointWS},
	{"setWheelDirectionWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setWheelDirectionWS},
	{"setWheelAxleWS", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setWheelAxleWS},
	{"setIsInContact", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setIsInContact},
	{"setGroundObject", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_setGroundObject},
	{"dynCast", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btWheelInfo_RaycastInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btWheelInfo_RaycastInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btWheelInfo::RaycastInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btWheelInfo::RaycastInfo >::enumValues[] = {
	{0,0}
};


