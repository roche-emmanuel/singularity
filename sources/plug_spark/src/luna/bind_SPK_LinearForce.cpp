#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_LinearForce.h>

class luna_wrapper_SPK_LinearForce {
public:
	typedef Luna< SPK::LinearForce > luna_t;

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
		//SPK::LinearForce* ptr= dynamic_cast< SPK::LinearForce* >(Luna< SPK::Registerable >::check(L,1));
		SPK::LinearForce* ptr= luna_caster< SPK::Registerable, SPK::LinearForce >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::LinearForce >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::LinearForce* ptr= dynamic_cast< SPK::LinearForce* >(Luna< SPK::Transformable >::check(L,1));
		SPK::LinearForce* ptr= luna_caster< SPK::Transformable, SPK::LinearForce >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::LinearForce >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::LinearForce* ptr= dynamic_cast< SPK::LinearForce* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::LinearForce* ptr= luna_caster< SPK::BufferHandler, SPK::LinearForce >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::LinearForce >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,70092749) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFactor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransformedForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFactorType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFactorParam(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>5 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,31337102)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::LinearForce::LinearForce(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, const SPK::Vector3D & force = SPK::Vector3D (), SPK::ForceFactor type = SPK::FACTOR_NONE, SPK::ModelParam param = SPK::PARAM_SIZE)
	static SPK::LinearForce* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::LinearForce::LinearForce(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, const SPK::Vector3D & force = SPK::Vector3D (), SPK::ForceFactor type = SPK::FACTOR_NONE, SPK::ModelParam param = SPK::PARAM_SIZE) function, expected prototype:\nSPK::LinearForce::LinearForce(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, const SPK::Vector3D & force = SPK::Vector3D (), SPK::ForceFactor type = SPK::FACTOR_NONE, SPK::ModelParam param = SPK::PARAM_SIZE)\nClass arguments details:\narg 2 ID = 31337102\narg 4 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=luatop>1 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,2)) : (SPK::Zone*)NULL;
		SPK::ModifierTrigger trigger=luatop>2 ? (SPK::ModifierTrigger)lua_tointeger(L,3) : SPK::INSIDE_ZONE;
		const SPK::Vector3D* force_ptr=luatop>3 ? (Luna< SPK::Vector3D >::check(L,4)) : NULL;
		if( luatop>3 && !force_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg force in SPK::LinearForce::LinearForce function");
		}
		const SPK::Vector3D & force=luatop>3 ? *force_ptr : SPK::Vector3D ();
		SPK::ForceFactor type=luatop>4 ? (SPK::ForceFactor)lua_tointeger(L,5) : SPK::FACTOR_NONE;
		SPK::ModelParam param=luatop>5 ? (SPK::ModelParam)lua_tointeger(L,6) : SPK::PARAM_SIZE;

		return new wrapper_SPK_LinearForce(L,NULL, zone, trigger, force, type, param);
	}


	// Function binds:
	// std::string SPK::LinearForce::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::LinearForce::getClassName() const function, expected prototype:\nstd::string SPK::LinearForce::getClassName() const\nClass arguments details:\n");
		}


		SPK::LinearForce* self=Luna< SPK::Registerable >::checkSubType< SPK::LinearForce >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::LinearForce::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::LinearForce::setForce(const SPK::Vector3D & force)
	static int _bind_setForce(lua_State *L) {
		if (!_lg_typecheck_setForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::LinearForce::setForce(const SPK::Vector3D & force) function, expected prototype:\nvoid SPK::LinearForce::setForce(const SPK::Vector3D & force)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* force_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !force_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg force in SPK::LinearForce::setForce function");
		}
		const SPK::Vector3D & force=*force_ptr;

		SPK::LinearForce* self=Luna< SPK::Registerable >::checkSubType< SPK::LinearForce >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::LinearForce::setForce(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setForce(force);

		return 0;
	}

	// void SPK::LinearForce::setFactor(SPK::ForceFactor type, SPK::ModelParam param = SPK::PARAM_SIZE)
	static int _bind_setFactor(lua_State *L) {
		if (!_lg_typecheck_setFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::LinearForce::setFactor(SPK::ForceFactor type, SPK::ModelParam param = SPK::PARAM_SIZE) function, expected prototype:\nvoid SPK::LinearForce::setFactor(SPK::ForceFactor type, SPK::ModelParam param = SPK::PARAM_SIZE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		SPK::ForceFactor type=(SPK::ForceFactor)lua_tointeger(L,2);
		SPK::ModelParam param=luatop>2 ? (SPK::ModelParam)lua_tointeger(L,3) : SPK::PARAM_SIZE;

		SPK::LinearForce* self=Luna< SPK::Registerable >::checkSubType< SPK::LinearForce >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::LinearForce::setFactor(SPK::ForceFactor, SPK::ModelParam). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setFactor(type, param);

		return 0;
	}

	// const SPK::Vector3D & SPK::LinearForce::getForce() const
	static int _bind_getForce(lua_State *L) {
		if (!_lg_typecheck_getForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::LinearForce::getForce() const function, expected prototype:\nconst SPK::Vector3D & SPK::LinearForce::getForce() const\nClass arguments details:\n");
		}


		SPK::LinearForce* self=Luna< SPK::Registerable >::checkSubType< SPK::LinearForce >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::LinearForce::getForce() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getForce();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::LinearForce::getTransformedForce() const
	static int _bind_getTransformedForce(lua_State *L) {
		if (!_lg_typecheck_getTransformedForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::LinearForce::getTransformedForce() const function, expected prototype:\nconst SPK::Vector3D & SPK::LinearForce::getTransformedForce() const\nClass arguments details:\n");
		}


		SPK::LinearForce* self=Luna< SPK::Registerable >::checkSubType< SPK::LinearForce >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::LinearForce::getTransformedForce() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getTransformedForce();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// SPK::ForceFactor SPK::LinearForce::getFactorType() const
	static int _bind_getFactorType(lua_State *L) {
		if (!_lg_typecheck_getFactorType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::ForceFactor SPK::LinearForce::getFactorType() const function, expected prototype:\nSPK::ForceFactor SPK::LinearForce::getFactorType() const\nClass arguments details:\n");
		}


		SPK::LinearForce* self=Luna< SPK::Registerable >::checkSubType< SPK::LinearForce >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::ForceFactor SPK::LinearForce::getFactorType() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::ForceFactor lret = self->getFactorType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::ModelParam SPK::LinearForce::getFactorParam() const
	static int _bind_getFactorParam(lua_State *L) {
		if (!_lg_typecheck_getFactorParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::ModelParam SPK::LinearForce::getFactorParam() const function, expected prototype:\nSPK::ModelParam SPK::LinearForce::getFactorParam() const\nClass arguments details:\n");
		}


		SPK::LinearForce* self=Luna< SPK::Registerable >::checkSubType< SPK::LinearForce >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::ModelParam SPK::LinearForce::getFactorParam() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::ModelParam lret = self->getFactorParam();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static SPK::LinearForce * SPK::LinearForce::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, const SPK::Vector3D & force = SPK::Vector3D (), SPK::ForceFactor type = SPK::FACTOR_NONE, SPK::ModelParam param = SPK::PARAM_SIZE)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::LinearForce * SPK::LinearForce::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, const SPK::Vector3D & force = SPK::Vector3D (), SPK::ForceFactor type = SPK::FACTOR_NONE, SPK::ModelParam param = SPK::PARAM_SIZE) function, expected prototype:\nstatic SPK::LinearForce * SPK::LinearForce::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, const SPK::Vector3D & force = SPK::Vector3D (), SPK::ForceFactor type = SPK::FACTOR_NONE, SPK::ModelParam param = SPK::PARAM_SIZE)\nClass arguments details:\narg 1 ID = 31337102\narg 3 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=luatop>0 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1)) : (SPK::Zone*)NULL;
		SPK::ModifierTrigger trigger=luatop>1 ? (SPK::ModifierTrigger)lua_tointeger(L,2) : SPK::INSIDE_ZONE;
		const SPK::Vector3D* force_ptr=luatop>2 ? (Luna< SPK::Vector3D >::check(L,3)) : NULL;
		if( luatop>2 && !force_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg force in SPK::LinearForce::create function");
		}
		const SPK::Vector3D & force=luatop>2 ? *force_ptr : SPK::Vector3D ();
		SPK::ForceFactor type=luatop>3 ? (SPK::ForceFactor)lua_tointeger(L,4) : SPK::FACTOR_NONE;
		SPK::ModelParam param=luatop>4 ? (SPK::ModelParam)lua_tointeger(L,5) : SPK::PARAM_SIZE;

		SPK::LinearForce * lret = SPK::LinearForce::create(zone, trigger, force, type, param);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::LinearForce >::push(L,lret,false);

		return 1;
	}

	// void SPK::LinearForce::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::LinearForce::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::LinearForce::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::LinearForce::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::LinearForce* self=Luna< SPK::Registerable >::checkSubType< SPK::LinearForce >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::LinearForce::base_createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->LinearForce::createBuffers(group);

		return 0;
	}

	// void SPK::LinearForce::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::LinearForce::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::LinearForce::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::LinearForce::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::LinearForce* self=Luna< SPK::Registerable >::checkSubType< SPK::LinearForce >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::LinearForce::base_destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->LinearForce::destroyBuffers(group);

		return 0;
	}

	// SPK::Registerable * SPK::LinearForce::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::LinearForce::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::LinearForce::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::LinearForce* self=Luna< SPK::Registerable >::checkSubType< SPK::LinearForce >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::LinearForce::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->LinearForce::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::LinearForce::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::LinearForce::base_getClassName() const function, expected prototype:\nstd::string SPK::LinearForce::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::LinearForce* self=Luna< SPK::Registerable >::checkSubType< SPK::LinearForce >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::LinearForce::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->LinearForce::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::LinearForce* LunaTraits< SPK::LinearForce >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_LinearForce::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::LinearForce >::_bind_dtor(SPK::LinearForce* obj) {
	delete obj;
}

const char LunaTraits< SPK::LinearForce >::className[] = "LinearForce";
const char LunaTraits< SPK::LinearForce >::fullName[] = "SPK::LinearForce";
const char LunaTraits< SPK::LinearForce >::moduleName[] = "spark";
const char* LunaTraits< SPK::LinearForce >::parents[] = {"spark.Modifier", 0};
const int LunaTraits< SPK::LinearForce >::hash = 42079332;
const int LunaTraits< SPK::LinearForce >::uniqueIDs[] = {31337102, 41560017, 81662222,0};

luna_RegType LunaTraits< SPK::LinearForce >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_LinearForce::_bind_getClassName},
	{"setForce", &luna_wrapper_SPK_LinearForce::_bind_setForce},
	{"setFactor", &luna_wrapper_SPK_LinearForce::_bind_setFactor},
	{"getForce", &luna_wrapper_SPK_LinearForce::_bind_getForce},
	{"getTransformedForce", &luna_wrapper_SPK_LinearForce::_bind_getTransformedForce},
	{"getFactorType", &luna_wrapper_SPK_LinearForce::_bind_getFactorType},
	{"getFactorParam", &luna_wrapper_SPK_LinearForce::_bind_getFactorParam},
	{"create", &luna_wrapper_SPK_LinearForce::_bind_create},
	{"base_createBuffers", &luna_wrapper_SPK_LinearForce::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_LinearForce::_bind_base_destroyBuffers},
	{"base_findByName", &luna_wrapper_SPK_LinearForce::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_LinearForce::_bind_base_getClassName},
	{"__eq", &luna_wrapper_SPK_LinearForce::_bind___eq},
	{"getTable", &luna_wrapper_SPK_LinearForce::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::LinearForce >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_LinearForce::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_LinearForce::_cast_from_Transformable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_LinearForce::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::LinearForce >::enumValues[] = {
	{0,0}
};


