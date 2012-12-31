#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Modifier.h>

class luna_wrapper_SPK_Modifier {
public:
	typedef Luna< SPK::Modifier > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Registerable*)");
		}

		SPK::Registerable* rhs =(Luna< SPK::Registerable >::check(L,2));
		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Registerable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Modifier* ptr= dynamic_cast< SPK::Modifier* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Modifier* ptr= luna_caster< SPK::Registerable, SPK::Modifier >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Modifier >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Modifier* ptr= dynamic_cast< SPK::Modifier* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Modifier* ptr= luna_caster< SPK::Transformable, SPK::Modifier >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Modifier >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Modifier* ptr= dynamic_cast< SPK::Modifier* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::Modifier* ptr= luna_caster< SPK::BufferHandler, SPK::Modifier >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Modifier >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,31337102)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZone(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTrigger(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalToSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTrigger(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAvailableTriggers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFullZone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLocalToSystem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_createBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_destroyBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::Modifier::Modifier(lua_Table * data, int availableTriggers = SPK::ALWAYS, SPK::ModifierTrigger trigger = SPK::ALWAYS, bool needsIntersection = false, bool needsNormal = false, SPK::Zone * zone = NULL)
	static SPK::Modifier* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Modifier::Modifier(lua_Table * data, int availableTriggers = SPK::ALWAYS, SPK::ModifierTrigger trigger = SPK::ALWAYS, bool needsIntersection = false, bool needsNormal = false, SPK::Zone * zone = NULL) function, expected prototype:\nSPK::Modifier::Modifier(lua_Table * data, int availableTriggers = SPK::ALWAYS, SPK::ModifierTrigger trigger = SPK::ALWAYS, bool needsIntersection = false, bool needsNormal = false, SPK::Zone * zone = NULL)\nClass arguments details:\narg 6 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		int availableTriggers=luatop>1 ? (int)lua_tointeger(L,2) : SPK::ALWAYS;
		SPK::ModifierTrigger trigger=luatop>2 ? (SPK::ModifierTrigger)lua_tointeger(L,3) : SPK::ALWAYS;
		bool needsIntersection=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;
		bool needsNormal=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;
		SPK::Zone* zone=luatop>5 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,6)) : (SPK::Zone*)NULL;

		return new wrapper_SPK_Modifier(L,NULL, availableTriggers, trigger, needsIntersection, needsNormal, zone);
	}


	// Function binds:
	// void SPK::Modifier::setActive(bool active)
	static int _bind_setActive(lua_State *L) {
		if (!_lg_typecheck_setActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Modifier::setActive(bool active) function, expected prototype:\nvoid SPK::Modifier::setActive(bool active)\nClass arguments details:\n");
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Modifier::setActive(bool)");
		}
		self->setActive(active);

		return 0;
	}

	// void SPK::Modifier::setZone(SPK::Zone * zone, bool full = false)
	static int _bind_setZone(lua_State *L) {
		if (!_lg_typecheck_setZone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Modifier::setZone(SPK::Zone * zone, bool full = false) function, expected prototype:\nvoid SPK::Modifier::setZone(SPK::Zone * zone, bool full = false)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=(Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,2));
		bool full=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Modifier::setZone(SPK::Zone *, bool)");
		}
		self->setZone(zone, full);

		return 0;
	}

	// bool SPK::Modifier::setTrigger(SPK::ModifierTrigger trigger)
	static int _bind_setTrigger(lua_State *L) {
		if (!_lg_typecheck_setTrigger(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Modifier::setTrigger(SPK::ModifierTrigger trigger) function, expected prototype:\nbool SPK::Modifier::setTrigger(SPK::ModifierTrigger trigger)\nClass arguments details:\n");
		}

		SPK::ModifierTrigger trigger=(SPK::ModifierTrigger)lua_tointeger(L,2);

		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Modifier::setTrigger(SPK::ModifierTrigger)");
		}
		bool lret = self->setTrigger(trigger);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Modifier::setLocalToSystem(bool local)
	static int _bind_setLocalToSystem(lua_State *L) {
		if (!_lg_typecheck_setLocalToSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Modifier::setLocalToSystem(bool local) function, expected prototype:\nvoid SPK::Modifier::setLocalToSystem(bool local)\nClass arguments details:\n");
		}

		bool local=(bool)(lua_toboolean(L,2)==1);

		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Modifier::setLocalToSystem(bool)");
		}
		self->setLocalToSystem(local);

		return 0;
	}

	// bool SPK::Modifier::isActive() const
	static int _bind_isActive(lua_State *L) {
		if (!_lg_typecheck_isActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Modifier::isActive() const function, expected prototype:\nbool SPK::Modifier::isActive() const\nClass arguments details:\n");
		}


		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Modifier::isActive() const");
		}
		bool lret = self->isActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// SPK::Zone * SPK::Modifier::getZone() const
	static int _bind_getZone(lua_State *L) {
		if (!_lg_typecheck_getZone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Zone * SPK::Modifier::getZone() const function, expected prototype:\nSPK::Zone * SPK::Modifier::getZone() const\nClass arguments details:\n");
		}


		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Zone * SPK::Modifier::getZone() const");
		}
		SPK::Zone * lret = self->getZone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Zone >::push(L,lret,false);

		return 1;
	}

	// SPK::ModifierTrigger SPK::Modifier::getTrigger() const
	static int _bind_getTrigger(lua_State *L) {
		if (!_lg_typecheck_getTrigger(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::ModifierTrigger SPK::Modifier::getTrigger() const function, expected prototype:\nSPK::ModifierTrigger SPK::Modifier::getTrigger() const\nClass arguments details:\n");
		}


		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::ModifierTrigger SPK::Modifier::getTrigger() const");
		}
		SPK::ModifierTrigger lret = self->getTrigger();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SPK::Modifier::getAvailableTriggers() const
	static int _bind_getAvailableTriggers(lua_State *L) {
		if (!_lg_typecheck_getAvailableTriggers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int SPK::Modifier::getAvailableTriggers() const function, expected prototype:\nint SPK::Modifier::getAvailableTriggers() const\nClass arguments details:\n");
		}


		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int SPK::Modifier::getAvailableTriggers() const");
		}
		int lret = self->getAvailableTriggers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Modifier::isFullZone() const
	static int _bind_isFullZone(lua_State *L) {
		if (!_lg_typecheck_isFullZone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Modifier::isFullZone() const function, expected prototype:\nbool SPK::Modifier::isFullZone() const\nClass arguments details:\n");
		}


		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Modifier::isFullZone() const");
		}
		bool lret = self->isFullZone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Modifier::isLocalToSystem() const
	static int _bind_isLocalToSystem(lua_State *L) {
		if (!_lg_typecheck_isLocalToSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Modifier::isLocalToSystem() const function, expected prototype:\nbool SPK::Modifier::isLocalToSystem() const\nClass arguments details:\n");
		}


		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Modifier::isLocalToSystem() const");
		}
		bool lret = self->isLocalToSystem();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// SPK::Registerable * SPK::Modifier::findByName(const std::string & name)
	static int _bind_findByName(lua_State *L) {
		if (!_lg_typecheck_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Modifier::findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Modifier::findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Modifier::findByName(const std::string &)");
		}
		SPK::Registerable * lret = self->findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::Modifier::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Modifier::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Modifier::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Modifier::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Modifier::base_createBuffers(const SPK::Group &)");
		}
		self->Modifier::createBuffers(group);

		return 0;
	}

	// void SPK::Modifier::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Modifier::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Modifier::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Modifier::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Modifier::base_destroyBuffers(const SPK::Group &)");
		}
		self->Modifier::destroyBuffers(group);

		return 0;
	}

	// SPK::Registerable * SPK::Modifier::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Modifier::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Modifier::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Modifier* self=Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Modifier::base_findByName(const std::string &)");
		}
		SPK::Registerable * lret = self->Modifier::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

SPK::Modifier* LunaTraits< SPK::Modifier >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Modifier::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void SPK::Modifier::modify(SPK::Particle & particle, float deltaTime) const
	// std::string SPK::Registerable::getClassName() const
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Modifier >::_bind_dtor(SPK::Modifier* obj) {
	delete obj;
}

const char LunaTraits< SPK::Modifier >::className[] = "Modifier";
const char LunaTraits< SPK::Modifier >::fullName[] = "SPK::Modifier";
const char LunaTraits< SPK::Modifier >::moduleName[] = "spark";
const char* LunaTraits< SPK::Modifier >::parents[] = {"spark.Registerable", "spark.Transformable", "spark.BufferHandler", 0};
const int LunaTraits< SPK::Modifier >::hash = 49824530;
const int LunaTraits< SPK::Modifier >::uniqueIDs[] = {31337102, 41560017, 81662222,0};

luna_RegType LunaTraits< SPK::Modifier >::methods[] = {
	{"setActive", &luna_wrapper_SPK_Modifier::_bind_setActive},
	{"setZone", &luna_wrapper_SPK_Modifier::_bind_setZone},
	{"setTrigger", &luna_wrapper_SPK_Modifier::_bind_setTrigger},
	{"setLocalToSystem", &luna_wrapper_SPK_Modifier::_bind_setLocalToSystem},
	{"isActive", &luna_wrapper_SPK_Modifier::_bind_isActive},
	{"getZone", &luna_wrapper_SPK_Modifier::_bind_getZone},
	{"getTrigger", &luna_wrapper_SPK_Modifier::_bind_getTrigger},
	{"getAvailableTriggers", &luna_wrapper_SPK_Modifier::_bind_getAvailableTriggers},
	{"isFullZone", &luna_wrapper_SPK_Modifier::_bind_isFullZone},
	{"isLocalToSystem", &luna_wrapper_SPK_Modifier::_bind_isLocalToSystem},
	{"findByName", &luna_wrapper_SPK_Modifier::_bind_findByName},
	{"base_createBuffers", &luna_wrapper_SPK_Modifier::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_Modifier::_bind_base_destroyBuffers},
	{"base_findByName", &luna_wrapper_SPK_Modifier::_bind_base_findByName},
	{"__eq", &luna_wrapper_SPK_Modifier::_bind___eq},
	{"getTable", &luna_wrapper_SPK_Modifier::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Modifier >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Modifier::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Modifier::_cast_from_Transformable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_Modifier::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Modifier >::enumValues[] = {
	{0,0}
};


