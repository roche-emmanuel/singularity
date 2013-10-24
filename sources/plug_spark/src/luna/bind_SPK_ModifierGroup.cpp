#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_ModifierGroup.h>

class luna_wrapper_SPK_ModifierGroup {
public:
	typedef Luna< SPK::ModifierGroup > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<SPK::Registerable,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		SPK::ModifierGroup* self= (SPK::ModifierGroup*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::ModifierGroup >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Registerable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::ModifierGroup* ptr= dynamic_cast< SPK::ModifierGroup* >(Luna< SPK::Registerable >::check(L,1));
		SPK::ModifierGroup* ptr= luna_caster< SPK::Registerable, SPK::ModifierGroup >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::ModifierGroup >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::ModifierGroup* ptr= dynamic_cast< SPK::ModifierGroup* >(Luna< SPK::Transformable >::check(L,1));
		SPK::ModifierGroup* ptr= luna_caster< SPK::Transformable, SPK::ModifierGroup >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::ModifierGroup >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::ModifierGroup* ptr= dynamic_cast< SPK::ModifierGroup* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::ModifierGroup* ptr= luna_caster< SPK::BufferHandler, SPK::ModifierGroup >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::ModifierGroup >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_useGlobalGroup(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_usePartitionGroup(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNb(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isGlobalGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isPartitionGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_handlesWrongSide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_usesIntersection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_usesNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addModifier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeModifier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroyBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,31337102)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::ModifierGroup::ModifierGroup(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE)
	static SPK::ModifierGroup* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in SPK::ModifierGroup::ModifierGroup(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE) function, expected prototype:\nSPK::ModifierGroup::ModifierGroup(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE)\nClass arguments details:\narg 2 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=luatop>1 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,2)) : (SPK::Zone*)NULL;
		SPK::ModifierTrigger trigger=luatop>2 ? (SPK::ModifierTrigger)lua_tointeger(L,3) : (SPK::ModifierTrigger)SPK::INSIDE_ZONE;

		return new wrapper_SPK_ModifierGroup(L,NULL, zone, trigger);
	}


	// Function binds:
	// std::string SPK::ModifierGroup::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::ModifierGroup::getClassName() const function, expected prototype:\nstd::string SPK::ModifierGroup::getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::ModifierGroup::getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::ModifierGroup::useGlobalGroup(bool useIntersection = false, bool useNormal = false)
	static int _bind_useGlobalGroup(lua_State *L) {
		if (!_lg_typecheck_useGlobalGroup(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::ModifierGroup::useGlobalGroup(bool useIntersection = false, bool useNormal = false) function, expected prototype:\nvoid SPK::ModifierGroup::useGlobalGroup(bool useIntersection = false, bool useNormal = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool useIntersection=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;
		bool useNormal=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::ModifierGroup::useGlobalGroup(bool, bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->useGlobalGroup(useIntersection, useNormal);

		return 0;
	}

	// void SPK::ModifierGroup::usePartitionGroup(bool handleWrongSide = false)
	static int _bind_usePartitionGroup(lua_State *L) {
		if (!_lg_typecheck_usePartitionGroup(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::ModifierGroup::usePartitionGroup(bool handleWrongSide = false) function, expected prototype:\nvoid SPK::ModifierGroup::usePartitionGroup(bool handleWrongSide = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool handleWrongSide=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::ModifierGroup::usePartitionGroup(bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->usePartitionGroup(handleWrongSide);

		return 0;
	}

	// size_t SPK::ModifierGroup::getNb() const
	static int _bind_getNb(lua_State *L) {
		if (!_lg_typecheck_getNb(L)) {
			luaL_error(L, "luna typecheck failed in size_t SPK::ModifierGroup::getNb() const function, expected prototype:\nsize_t SPK::ModifierGroup::getNb() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t SPK::ModifierGroup::getNb() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->getNb();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::ModifierGroup::isGlobalGroup() const
	static int _bind_isGlobalGroup(lua_State *L) {
		if (!_lg_typecheck_isGlobalGroup(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::ModifierGroup::isGlobalGroup() const function, expected prototype:\nbool SPK::ModifierGroup::isGlobalGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::ModifierGroup::isGlobalGroup() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isGlobalGroup();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::ModifierGroup::isPartitionGroup() const
	static int _bind_isPartitionGroup(lua_State *L) {
		if (!_lg_typecheck_isPartitionGroup(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::ModifierGroup::isPartitionGroup() const function, expected prototype:\nbool SPK::ModifierGroup::isPartitionGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::ModifierGroup::isPartitionGroup() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isPartitionGroup();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::ModifierGroup::handlesWrongSide() const
	static int _bind_handlesWrongSide(lua_State *L) {
		if (!_lg_typecheck_handlesWrongSide(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::ModifierGroup::handlesWrongSide() const function, expected prototype:\nbool SPK::ModifierGroup::handlesWrongSide() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::ModifierGroup::handlesWrongSide() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handlesWrongSide();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::ModifierGroup::usesIntersection() const
	static int _bind_usesIntersection(lua_State *L) {
		if (!_lg_typecheck_usesIntersection(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::ModifierGroup::usesIntersection() const function, expected prototype:\nbool SPK::ModifierGroup::usesIntersection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::ModifierGroup::usesIntersection() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->usesIntersection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::ModifierGroup::usesNormal() const
	static int _bind_usesNormal(lua_State *L) {
		if (!_lg_typecheck_usesNormal(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::ModifierGroup::usesNormal() const function, expected prototype:\nbool SPK::ModifierGroup::usesNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::ModifierGroup::usesNormal() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->usesNormal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::ModifierGroup::addModifier(SPK::Modifier * modifier)
	static int _bind_addModifier(lua_State *L) {
		if (!_lg_typecheck_addModifier(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::ModifierGroup::addModifier(SPK::Modifier * modifier) function, expected prototype:\nvoid SPK::ModifierGroup::addModifier(SPK::Modifier * modifier)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Modifier* modifier=(Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,2));

		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::ModifierGroup::addModifier(SPK::Modifier *). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addModifier(modifier);

		return 0;
	}

	// bool SPK::ModifierGroup::removeModifier(const SPK::Modifier * modifier)
	static int _bind_removeModifier(lua_State *L) {
		if (!_lg_typecheck_removeModifier(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::ModifierGroup::removeModifier(const SPK::Modifier * modifier) function, expected prototype:\nbool SPK::ModifierGroup::removeModifier(const SPK::Modifier * modifier)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Modifier* modifier=(Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,2));

		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::ModifierGroup::removeModifier(const SPK::Modifier *). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeModifier(modifier);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::ModifierGroup::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::ModifierGroup::clear() function, expected prototype:\nvoid SPK::ModifierGroup::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::ModifierGroup::clear(). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// void SPK::ModifierGroup::createBuffers(const SPK::Group & group)
	static int _bind_createBuffers(lua_State *L) {
		if (!_lg_typecheck_createBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::ModifierGroup::createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::ModifierGroup::createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::ModifierGroup::createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::ModifierGroup::createBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->createBuffers(group);

		return 0;
	}

	// void SPK::ModifierGroup::destroyBuffers(const SPK::Group & group)
	static int _bind_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_destroyBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::ModifierGroup::destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::ModifierGroup::destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::ModifierGroup::destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::ModifierGroup::destroyBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->destroyBuffers(group);

		return 0;
	}

	// SPK::Registerable * SPK::ModifierGroup::findByName(const std::string & name)
	static int _bind_findByName(lua_State *L) {
		if (!_lg_typecheck_findByName(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::ModifierGroup::findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::ModifierGroup::findByName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::ModifierGroup::findByName(const std::string &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Registerable * lret = self->findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// static SPK::ModifierGroup * SPK::ModifierGroup::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luaL_error(L, "luna typecheck failed in static SPK::ModifierGroup * SPK::ModifierGroup::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE) function, expected prototype:\nstatic SPK::ModifierGroup * SPK::ModifierGroup::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=luatop>0 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1)) : (SPK::Zone*)NULL;
		SPK::ModifierTrigger trigger=luatop>1 ? (SPK::ModifierTrigger)lua_tointeger(L,2) : (SPK::ModifierTrigger)SPK::INSIDE_ZONE;

		SPK::ModifierGroup * lret = SPK::ModifierGroup::create(zone, trigger);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::ModifierGroup >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::ModifierGroup::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::ModifierGroup::base_getClassName() const function, expected prototype:\nstd::string SPK::ModifierGroup::base_getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::ModifierGroup::base_getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->ModifierGroup::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::ModifierGroup::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::ModifierGroup::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::ModifierGroup::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::ModifierGroup::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::ModifierGroup::base_createBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ModifierGroup::createBuffers(group);

		return 0;
	}

	// void SPK::ModifierGroup::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::ModifierGroup::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::ModifierGroup::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::ModifierGroup::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::ModifierGroup::base_destroyBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ModifierGroup::destroyBuffers(group);

		return 0;
	}

	// SPK::Registerable * SPK::ModifierGroup::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::ModifierGroup::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::ModifierGroup::base_findByName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::ModifierGroup* self=Luna< SPK::Registerable >::checkSubType< SPK::ModifierGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::ModifierGroup::base_findByName(const std::string &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Registerable * lret = self->ModifierGroup::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

SPK::ModifierGroup* LunaTraits< SPK::ModifierGroup >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_ModifierGroup::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::ModifierGroup >::_bind_dtor(SPK::ModifierGroup* obj) {
	delete obj;
}

const char LunaTraits< SPK::ModifierGroup >::className[] = "ModifierGroup";
const char LunaTraits< SPK::ModifierGroup >::fullName[] = "SPK::ModifierGroup";
const char LunaTraits< SPK::ModifierGroup >::moduleName[] = "spark";
const char* LunaTraits< SPK::ModifierGroup >::parents[] = {"spark.Modifier", 0};
const int LunaTraits< SPK::ModifierGroup >::hash = 61813866;
const int LunaTraits< SPK::ModifierGroup >::uniqueIDs[] = {31337102, 41560017, 81662222,0};

luna_RegType LunaTraits< SPK::ModifierGroup >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_ModifierGroup::_bind_getClassName},
	{"useGlobalGroup", &luna_wrapper_SPK_ModifierGroup::_bind_useGlobalGroup},
	{"usePartitionGroup", &luna_wrapper_SPK_ModifierGroup::_bind_usePartitionGroup},
	{"getNb", &luna_wrapper_SPK_ModifierGroup::_bind_getNb},
	{"isGlobalGroup", &luna_wrapper_SPK_ModifierGroup::_bind_isGlobalGroup},
	{"isPartitionGroup", &luna_wrapper_SPK_ModifierGroup::_bind_isPartitionGroup},
	{"handlesWrongSide", &luna_wrapper_SPK_ModifierGroup::_bind_handlesWrongSide},
	{"usesIntersection", &luna_wrapper_SPK_ModifierGroup::_bind_usesIntersection},
	{"usesNormal", &luna_wrapper_SPK_ModifierGroup::_bind_usesNormal},
	{"addModifier", &luna_wrapper_SPK_ModifierGroup::_bind_addModifier},
	{"removeModifier", &luna_wrapper_SPK_ModifierGroup::_bind_removeModifier},
	{"clear", &luna_wrapper_SPK_ModifierGroup::_bind_clear},
	{"createBuffers", &luna_wrapper_SPK_ModifierGroup::_bind_createBuffers},
	{"destroyBuffers", &luna_wrapper_SPK_ModifierGroup::_bind_destroyBuffers},
	{"findByName", &luna_wrapper_SPK_ModifierGroup::_bind_findByName},
	{"create", &luna_wrapper_SPK_ModifierGroup::_bind_create},
	{"base_getClassName", &luna_wrapper_SPK_ModifierGroup::_bind_base_getClassName},
	{"base_createBuffers", &luna_wrapper_SPK_ModifierGroup::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_ModifierGroup::_bind_base_destroyBuffers},
	{"base_findByName", &luna_wrapper_SPK_ModifierGroup::_bind_base_findByName},
	{"fromVoid", &luna_wrapper_SPK_ModifierGroup::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_ModifierGroup::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_ModifierGroup::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::ModifierGroup >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_ModifierGroup::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_ModifierGroup::_cast_from_Transformable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_ModifierGroup::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::ModifierGroup >::enumValues[] = {
	{0,0}
};


