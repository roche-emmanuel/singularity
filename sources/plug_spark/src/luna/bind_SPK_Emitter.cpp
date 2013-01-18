#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Emitter.h>

class luna_wrapper_SPK_Emitter {
public:
	typedef Luna< SPK::Emitter > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<SPK::Registerable,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		SPK::Emitter* self= (SPK::Emitter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Emitter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
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
		//SPK::Emitter* ptr= dynamic_cast< SPK::Emitter* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Emitter* ptr= luna_caster< SPK::Registerable, SPK::Emitter >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Emitter >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Emitter* ptr= dynamic_cast< SPK::Emitter* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Emitter* ptr= luna_caster< SPK::Transformable, SPK::Emitter >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Emitter >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTank(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_changeTank(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFlow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_changeFlow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setForce(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZone(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTank(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFlow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getForceMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getForceMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFullZone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSleeping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_emit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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
	// SPK::Emitter::Emitter(lua_Table * data)
	static SPK::Emitter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Emitter::Emitter(lua_Table * data) function, expected prototype:\nSPK::Emitter::Emitter(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_SPK_Emitter(L,NULL);
	}


	// Function binds:
	// void SPK::Emitter::setActive(bool active)
	static int _bind_setActive(lua_State *L) {
		if (!_lg_typecheck_setActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Emitter::setActive(bool active) function, expected prototype:\nvoid SPK::Emitter::setActive(bool active)\nClass arguments details:\n");
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Emitter::setActive(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setActive(active);

		return 0;
	}

	// void SPK::Emitter::setTank(int tank)
	static int _bind_setTank(lua_State *L) {
		if (!_lg_typecheck_setTank(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Emitter::setTank(int tank) function, expected prototype:\nvoid SPK::Emitter::setTank(int tank)\nClass arguments details:\n");
		}

		int tank=(int)lua_tointeger(L,2);

		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Emitter::setTank(int). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setTank(tank);

		return 0;
	}

	// void SPK::Emitter::changeTank(int deltaTank)
	static int _bind_changeTank(lua_State *L) {
		if (!_lg_typecheck_changeTank(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Emitter::changeTank(int deltaTank) function, expected prototype:\nvoid SPK::Emitter::changeTank(int deltaTank)\nClass arguments details:\n");
		}

		int deltaTank=(int)lua_tointeger(L,2);

		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Emitter::changeTank(int). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->changeTank(deltaTank);

		return 0;
	}

	// void SPK::Emitter::setFlow(float flow)
	static int _bind_setFlow(lua_State *L) {
		if (!_lg_typecheck_setFlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Emitter::setFlow(float flow) function, expected prototype:\nvoid SPK::Emitter::setFlow(float flow)\nClass arguments details:\n");
		}

		float flow=(float)lua_tonumber(L,2);

		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Emitter::setFlow(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setFlow(flow);

		return 0;
	}

	// void SPK::Emitter::changeFlow(float deltaFlow)
	static int _bind_changeFlow(lua_State *L) {
		if (!_lg_typecheck_changeFlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Emitter::changeFlow(float deltaFlow) function, expected prototype:\nvoid SPK::Emitter::changeFlow(float deltaFlow)\nClass arguments details:\n");
		}

		float deltaFlow=(float)lua_tonumber(L,2);

		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Emitter::changeFlow(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->changeFlow(deltaFlow);

		return 0;
	}

	// void SPK::Emitter::setForce(float min, float max)
	static int _bind_setForce(lua_State *L) {
		if (!_lg_typecheck_setForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Emitter::setForce(float min, float max) function, expected prototype:\nvoid SPK::Emitter::setForce(float min, float max)\nClass arguments details:\n");
		}

		float min=(float)lua_tonumber(L,2);
		float max=(float)lua_tonumber(L,3);

		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Emitter::setForce(float, float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setForce(min, max);

		return 0;
	}

	// void SPK::Emitter::setZone(SPK::Zone * zone, bool full = true)
	static int _bind_setZone(lua_State *L) {
		if (!_lg_typecheck_setZone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Emitter::setZone(SPK::Zone * zone, bool full = true) function, expected prototype:\nvoid SPK::Emitter::setZone(SPK::Zone * zone, bool full = true)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=(Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,2));
		bool full=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Emitter::setZone(SPK::Zone *, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setZone(zone, full);

		return 0;
	}

	// bool SPK::Emitter::isActive() const
	static int _bind_isActive(lua_State *L) {
		if (!_lg_typecheck_isActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Emitter::isActive() const function, expected prototype:\nbool SPK::Emitter::isActive() const\nClass arguments details:\n");
		}


		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Emitter::isActive() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int SPK::Emitter::getTank() const
	static int _bind_getTank(lua_State *L) {
		if (!_lg_typecheck_getTank(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int SPK::Emitter::getTank() const function, expected prototype:\nint SPK::Emitter::getTank() const\nClass arguments details:\n");
		}


		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int SPK::Emitter::getTank() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		int lret = self->getTank();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Emitter::getFlow() const
	static int _bind_getFlow(lua_State *L) {
		if (!_lg_typecheck_getFlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Emitter::getFlow() const function, expected prototype:\nfloat SPK::Emitter::getFlow() const\nClass arguments details:\n");
		}


		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Emitter::getFlow() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getFlow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Emitter::getForceMin() const
	static int _bind_getForceMin(lua_State *L) {
		if (!_lg_typecheck_getForceMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Emitter::getForceMin() const function, expected prototype:\nfloat SPK::Emitter::getForceMin() const\nClass arguments details:\n");
		}


		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Emitter::getForceMin() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getForceMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Emitter::getForceMax() const
	static int _bind_getForceMax(lua_State *L) {
		if (!_lg_typecheck_getForceMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Emitter::getForceMax() const function, expected prototype:\nfloat SPK::Emitter::getForceMax() const\nClass arguments details:\n");
		}


		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Emitter::getForceMax() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getForceMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::Zone * SPK::Emitter::getZone() const
	static int _bind_getZone(lua_State *L) {
		if (!_lg_typecheck_getZone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Zone * SPK::Emitter::getZone() const function, expected prototype:\nSPK::Zone * SPK::Emitter::getZone() const\nClass arguments details:\n");
		}


		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Zone * SPK::Emitter::getZone() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Zone * lret = self->getZone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Zone >::push(L,lret,false);

		return 1;
	}

	// bool SPK::Emitter::isFullZone() const
	static int _bind_isFullZone(lua_State *L) {
		if (!_lg_typecheck_isFullZone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Emitter::isFullZone() const function, expected prototype:\nbool SPK::Emitter::isFullZone() const\nClass arguments details:\n");
		}


		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Emitter::isFullZone() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isFullZone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Emitter::isSleeping() const
	static int _bind_isSleeping(lua_State *L) {
		if (!_lg_typecheck_isSleeping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Emitter::isSleeping() const function, expected prototype:\nbool SPK::Emitter::isSleeping() const\nClass arguments details:\n");
		}


		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Emitter::isSleeping() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isSleeping();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Emitter::emit(SPK::Particle & particle) const
	static int _bind_emit(lua_State *L) {
		if (!_lg_typecheck_emit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Emitter::emit(SPK::Particle & particle) const function, expected prototype:\nvoid SPK::Emitter::emit(SPK::Particle & particle) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Emitter::emit function");
		}
		SPK::Particle & particle=*particle_ptr;

		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Emitter::emit(SPK::Particle &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->emit(particle);

		return 0;
	}

	// void SPK::Emitter::generateVelocity(SPK::Particle & particle) const
	static int _bind_generateVelocity(lua_State *L) {
		if (!_lg_typecheck_generateVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Emitter::generateVelocity(SPK::Particle & particle) const function, expected prototype:\nvoid SPK::Emitter::generateVelocity(SPK::Particle & particle) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Emitter::generateVelocity function");
		}
		SPK::Particle & particle=*particle_ptr;

		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Emitter::generateVelocity(SPK::Particle &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->generateVelocity(particle);

		return 0;
	}

	// SPK::Registerable * SPK::Emitter::findByName(const std::string & name)
	static int _bind_findByName(lua_State *L) {
		if (!_lg_typecheck_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Emitter::findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Emitter::findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Emitter::findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::Emitter::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Emitter::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Emitter::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Emitter* self=Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Emitter::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->Emitter::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_SPK_Transformable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_SPK_Transformable(lua_State *L) {
		if (!_lg_typecheck_baseCast_SPK_Transformable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCast_SPK_Transformable function, expected prototype:\nbaseCast()");
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		SPK::Transformable* res = luna_caster<SPK::Registerable,SPK::Transformable>::cast(self); // dynamic_cast<SPK::Transformable*>(self);
		if(!res)
			return 0;
			
		Luna< SPK::Transformable >::push(L,res,false);
		return 1;

	}

};

SPK::Emitter* LunaTraits< SPK::Emitter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Emitter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void SPK::Emitter::generateVelocity(SPK::Particle & particle, float speed) const
	// std::string SPK::Registerable::getClassName() const
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Emitter >::_bind_dtor(SPK::Emitter* obj) {
	delete obj;
}

const char LunaTraits< SPK::Emitter >::className[] = "Emitter";
const char LunaTraits< SPK::Emitter >::fullName[] = "SPK::Emitter";
const char LunaTraits< SPK::Emitter >::moduleName[] = "spark";
const char* LunaTraits< SPK::Emitter >::parents[] = {"spark.Registerable", "spark.Transformable", 0};
const int LunaTraits< SPK::Emitter >::hash = 29924069;
const int LunaTraits< SPK::Emitter >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::Emitter >::methods[] = {
	{"setActive", &luna_wrapper_SPK_Emitter::_bind_setActive},
	{"setTank", &luna_wrapper_SPK_Emitter::_bind_setTank},
	{"changeTank", &luna_wrapper_SPK_Emitter::_bind_changeTank},
	{"setFlow", &luna_wrapper_SPK_Emitter::_bind_setFlow},
	{"changeFlow", &luna_wrapper_SPK_Emitter::_bind_changeFlow},
	{"setForce", &luna_wrapper_SPK_Emitter::_bind_setForce},
	{"setZone", &luna_wrapper_SPK_Emitter::_bind_setZone},
	{"isActive", &luna_wrapper_SPK_Emitter::_bind_isActive},
	{"getTank", &luna_wrapper_SPK_Emitter::_bind_getTank},
	{"getFlow", &luna_wrapper_SPK_Emitter::_bind_getFlow},
	{"getForceMin", &luna_wrapper_SPK_Emitter::_bind_getForceMin},
	{"getForceMax", &luna_wrapper_SPK_Emitter::_bind_getForceMax},
	{"getZone", &luna_wrapper_SPK_Emitter::_bind_getZone},
	{"isFullZone", &luna_wrapper_SPK_Emitter::_bind_isFullZone},
	{"isSleeping", &luna_wrapper_SPK_Emitter::_bind_isSleeping},
	{"emit", &luna_wrapper_SPK_Emitter::_bind_emit},
	{"generateVelocity", &luna_wrapper_SPK_Emitter::_bind_generateVelocity},
	{"findByName", &luna_wrapper_SPK_Emitter::_bind_findByName},
	{"base_findByName", &luna_wrapper_SPK_Emitter::_bind_base_findByName},
	{"__eq", &luna_wrapper_SPK_Emitter::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_Emitter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Emitter::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_Emitter::_bind_getTable},
	{"asTransformable", &luna_wrapper_SPK_Emitter::_bind_baseCast_SPK_Transformable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Emitter >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Emitter::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Emitter::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Emitter >::enumValues[] = {
	{0,0}
};


