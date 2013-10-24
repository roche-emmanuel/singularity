#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_PointMass.h>

class luna_wrapper_SPK_PointMass {
public:
	typedef Luna< SPK::PointMass > luna_t;

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

		SPK::PointMass* self= (SPK::PointMass*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::PointMass >::push(L,self,false);
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
		//SPK::PointMass* ptr= dynamic_cast< SPK::PointMass* >(Luna< SPK::Registerable >::check(L,1));
		SPK::PointMass* ptr= luna_caster< SPK::Registerable, SPK::PointMass >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::PointMass >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::PointMass* ptr= dynamic_cast< SPK::PointMass* >(Luna< SPK::Transformable >::check(L,1));
		SPK::PointMass* ptr= luna_caster< SPK::Transformable, SPK::PointMass >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::PointMass >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::PointMass* ptr= dynamic_cast< SPK::PointMass* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::PointMass* ptr= luna_caster< SPK::BufferHandler, SPK::PointMass >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::PointMass >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMass(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransformedPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,31337102)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::PointMass::PointMass(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, float mass = 1.0f, float minDistance = 0.05f)
	static SPK::PointMass* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in SPK::PointMass::PointMass(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, float mass = 1.0f, float minDistance = 0.05f) function, expected prototype:\nSPK::PointMass::PointMass(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, float mass = 1.0f, float minDistance = 0.05f)\nClass arguments details:\narg 2 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=luatop>1 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,2)) : (SPK::Zone*)NULL;
		SPK::ModifierTrigger trigger=luatop>2 ? (SPK::ModifierTrigger)lua_tointeger(L,3) : (SPK::ModifierTrigger)SPK::INSIDE_ZONE;
		float mass=luatop>3 ? (float)lua_tonumber(L,4) : (float)1.0f;
		float minDistance=luatop>4 ? (float)lua_tonumber(L,5) : (float)0.05f;

		return new wrapper_SPK_PointMass(L,NULL, zone, trigger, mass, minDistance);
	}


	// Function binds:
	// std::string SPK::PointMass::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::PointMass::getClassName() const function, expected prototype:\nstd::string SPK::PointMass::getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::PointMass::getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::PointMass::setPosition(const SPK::Vector3D & pos)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::PointMass::setPosition(const SPK::Vector3D & pos) function, expected prototype:\nvoid SPK::PointMass::setPosition(const SPK::Vector3D & pos)\nClass arguments details:\narg 1 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Vector3D* pos_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in SPK::PointMass::setPosition function");
		}
		const SPK::Vector3D & pos=*pos_ptr;

		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::PointMass::setPosition(const SPK::Vector3D &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(pos);

		return 0;
	}

	// void SPK::PointMass::setMass(float mass)
	static int _bind_setMass(lua_State *L) {
		if (!_lg_typecheck_setMass(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::PointMass::setMass(float mass) function, expected prototype:\nvoid SPK::PointMass::setMass(float mass)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);

		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::PointMass::setMass(float). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMass(mass);

		return 0;
	}

	// void SPK::PointMass::setMinDistance(float minDistance)
	static int _bind_setMinDistance(lua_State *L) {
		if (!_lg_typecheck_setMinDistance(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::PointMass::setMinDistance(float minDistance) function, expected prototype:\nvoid SPK::PointMass::setMinDistance(float minDistance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float minDistance=(float)lua_tonumber(L,2);

		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::PointMass::setMinDistance(float). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMinDistance(minDistance);

		return 0;
	}

	// const SPK::Vector3D & SPK::PointMass::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::PointMass::getPosition() const function, expected prototype:\nconst SPK::Vector3D & SPK::PointMass::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::PointMass::getPosition() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SPK::Vector3D* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::PointMass::getTransformedPosition() const
	static int _bind_getTransformedPosition(lua_State *L) {
		if (!_lg_typecheck_getTransformedPosition(L)) {
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::PointMass::getTransformedPosition() const function, expected prototype:\nconst SPK::Vector3D & SPK::PointMass::getTransformedPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::PointMass::getTransformedPosition() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SPK::Vector3D* lret = &self->getTransformedPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// float SPK::PointMass::getMass() const
	static int _bind_getMass(lua_State *L) {
		if (!_lg_typecheck_getMass(L)) {
			luaL_error(L, "luna typecheck failed in float SPK::PointMass::getMass() const function, expected prototype:\nfloat SPK::PointMass::getMass() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float SPK::PointMass::getMass() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMass();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::PointMass::getMinDistance() const
	static int _bind_getMinDistance(lua_State *L) {
		if (!_lg_typecheck_getMinDistance(L)) {
			luaL_error(L, "luna typecheck failed in float SPK::PointMass::getMinDistance() const function, expected prototype:\nfloat SPK::PointMass::getMinDistance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float SPK::PointMass::getMinDistance() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMinDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static SPK::PointMass * SPK::PointMass::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, float mass = 1.0f, float minDistance = 0.05f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luaL_error(L, "luna typecheck failed in static SPK::PointMass * SPK::PointMass::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, float mass = 1.0f, float minDistance = 0.05f) function, expected prototype:\nstatic SPK::PointMass * SPK::PointMass::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, float mass = 1.0f, float minDistance = 0.05f)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=luatop>0 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1)) : (SPK::Zone*)NULL;
		SPK::ModifierTrigger trigger=luatop>1 ? (SPK::ModifierTrigger)lua_tointeger(L,2) : (SPK::ModifierTrigger)SPK::INSIDE_ZONE;
		float mass=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;
		float minDistance=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.05f;

		SPK::PointMass * lret = SPK::PointMass::create(zone, trigger, mass, minDistance);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::PointMass >::push(L,lret,false);

		return 1;
	}

	// void SPK::PointMass::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::PointMass::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::PointMass::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::PointMass::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::PointMass::base_createBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PointMass::createBuffers(group);

		return 0;
	}

	// void SPK::PointMass::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::PointMass::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::PointMass::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::PointMass::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::PointMass::base_destroyBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PointMass::destroyBuffers(group);

		return 0;
	}

	// SPK::Registerable * SPK::PointMass::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::PointMass::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::PointMass::base_findByName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::PointMass::base_findByName(const std::string &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Registerable * lret = self->PointMass::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::PointMass::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::PointMass::base_getClassName() const function, expected prototype:\nstd::string SPK::PointMass::base_getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::PointMass* self=Luna< SPK::Registerable >::checkSubType< SPK::PointMass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::PointMass::base_getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->PointMass::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::PointMass* LunaTraits< SPK::PointMass >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_PointMass::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::PointMass >::_bind_dtor(SPK::PointMass* obj) {
	delete obj;
}

const char LunaTraits< SPK::PointMass >::className[] = "PointMass";
const char LunaTraits< SPK::PointMass >::fullName[] = "SPK::PointMass";
const char LunaTraits< SPK::PointMass >::moduleName[] = "spark";
const char* LunaTraits< SPK::PointMass >::parents[] = {"spark.Modifier", 0};
const int LunaTraits< SPK::PointMass >::hash = 10120873;
const int LunaTraits< SPK::PointMass >::uniqueIDs[] = {31337102, 41560017, 81662222,0};

luna_RegType LunaTraits< SPK::PointMass >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_PointMass::_bind_getClassName},
	{"setPosition", &luna_wrapper_SPK_PointMass::_bind_setPosition},
	{"setMass", &luna_wrapper_SPK_PointMass::_bind_setMass},
	{"setMinDistance", &luna_wrapper_SPK_PointMass::_bind_setMinDistance},
	{"getPosition", &luna_wrapper_SPK_PointMass::_bind_getPosition},
	{"getTransformedPosition", &luna_wrapper_SPK_PointMass::_bind_getTransformedPosition},
	{"getMass", &luna_wrapper_SPK_PointMass::_bind_getMass},
	{"getMinDistance", &luna_wrapper_SPK_PointMass::_bind_getMinDistance},
	{"create", &luna_wrapper_SPK_PointMass::_bind_create},
	{"base_createBuffers", &luna_wrapper_SPK_PointMass::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_PointMass::_bind_base_destroyBuffers},
	{"base_findByName", &luna_wrapper_SPK_PointMass::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_PointMass::_bind_base_getClassName},
	{"fromVoid", &luna_wrapper_SPK_PointMass::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_PointMass::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_PointMass::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::PointMass >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_PointMass::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_PointMass::_cast_from_Transformable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_PointMass::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::PointMass >::enumValues[] = {
	{0,0}
};


