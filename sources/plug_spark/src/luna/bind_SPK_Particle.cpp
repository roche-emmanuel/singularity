#include <plug_common.h>

class luna_wrapper_SPK_Particle {
public:
	typedef Luna< SPK::Particle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73657533) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Particle*)");
		}

		SPK::Particle* rhs =(Luna< SPK::Particle >::check(L,2));
		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
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

		SPK::Particle* self= (SPK::Particle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Particle >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73657533) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< SPK::Particle >::check(L,1));
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

		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Particle");
		
		return luna_dynamicCast(L,converters,"SPK::Particle",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_setParamCurrentValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParamFinalValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_changeParamCurrentValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_changeParamFinalValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLifeLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_position_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_position_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_velocity_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_velocity_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_oldPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_oldPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParamCurrentValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParamFinalValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLifeLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAge(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistanceFromCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSqrDistanceFromCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isNewBorn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isAlive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_kill(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getG(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool SPK::Particle::setParamCurrentValue(SPK::ModelParam type, float value)
	static int _bind_setParamCurrentValue(lua_State *L) {
		if (!_lg_typecheck_setParamCurrentValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Particle::setParamCurrentValue(SPK::ModelParam type, float value) function, expected prototype:\nbool SPK::Particle::setParamCurrentValue(SPK::ModelParam type, float value)\nClass arguments details:\n");
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);

		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Particle::setParamCurrentValue(SPK::ModelParam, float). Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		bool lret = self->setParamCurrentValue(type, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Particle::setParamFinalValue(SPK::ModelParam type, float value)
	static int _bind_setParamFinalValue(lua_State *L) {
		if (!_lg_typecheck_setParamFinalValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Particle::setParamFinalValue(SPK::ModelParam type, float value) function, expected prototype:\nbool SPK::Particle::setParamFinalValue(SPK::ModelParam type, float value)\nClass arguments details:\n");
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);

		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Particle::setParamFinalValue(SPK::ModelParam, float). Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		bool lret = self->setParamFinalValue(type, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Particle::changeParamCurrentValue(SPK::ModelParam type, float delta)
	static int _bind_changeParamCurrentValue(lua_State *L) {
		if (!_lg_typecheck_changeParamCurrentValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Particle::changeParamCurrentValue(SPK::ModelParam type, float delta) function, expected prototype:\nbool SPK::Particle::changeParamCurrentValue(SPK::ModelParam type, float delta)\nClass arguments details:\n");
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);
		float delta=(float)lua_tonumber(L,3);

		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Particle::changeParamCurrentValue(SPK::ModelParam, float). Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		bool lret = self->changeParamCurrentValue(type, delta);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Particle::changeParamFinalValue(SPK::ModelParam type, float delta)
	static int _bind_changeParamFinalValue(lua_State *L) {
		if (!_lg_typecheck_changeParamFinalValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Particle::changeParamFinalValue(SPK::ModelParam type, float delta) function, expected prototype:\nbool SPK::Particle::changeParamFinalValue(SPK::ModelParam type, float delta)\nClass arguments details:\n");
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);
		float delta=(float)lua_tonumber(L,3);

		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Particle::changeParamFinalValue(SPK::ModelParam, float). Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		bool lret = self->changeParamFinalValue(type, delta);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Particle::setLifeLeft(float life)
	static int _bind_setLifeLeft(lua_State *L) {
		if (!_lg_typecheck_setLifeLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Particle::setLifeLeft(float life) function, expected prototype:\nvoid SPK::Particle::setLifeLeft(float life)\nClass arguments details:\n");
		}

		float life=(float)lua_tonumber(L,2);

		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Particle::setLifeLeft(float). Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		self->setLifeLeft(life);

		return 0;
	}

	// SPK::Vector3D & SPK::Particle::position()
	static int _bind_position_overload_1(lua_State *L) {
		if (!_lg_typecheck_position_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Particle::position() function, expected prototype:\nSPK::Vector3D & SPK::Particle::position()\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Particle::position(). Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->position();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Particle::position() const
	static int _bind_position_overload_2(lua_State *L) {
		if (!_lg_typecheck_position_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Particle::position() const function, expected prototype:\nconst SPK::Vector3D & SPK::Particle::position() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Particle::position() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->position();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SPK::Particle::position
	static int _bind_position(lua_State *L) {
		if (_lg_typecheck_position_overload_1(L)) return _bind_position_overload_1(L);
		if (_lg_typecheck_position_overload_2(L)) return _bind_position_overload_2(L);

		luaL_error(L, "error in function position, cannot match any of the overloads for function position:\n  position()\n  position()\n");
		return 0;
	}

	// SPK::Vector3D & SPK::Particle::velocity()
	static int _bind_velocity_overload_1(lua_State *L) {
		if (!_lg_typecheck_velocity_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Particle::velocity() function, expected prototype:\nSPK::Vector3D & SPK::Particle::velocity()\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Particle::velocity(). Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->velocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Particle::velocity() const
	static int _bind_velocity_overload_2(lua_State *L) {
		if (!_lg_typecheck_velocity_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Particle::velocity() const function, expected prototype:\nconst SPK::Vector3D & SPK::Particle::velocity() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Particle::velocity() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->velocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SPK::Particle::velocity
	static int _bind_velocity(lua_State *L) {
		if (_lg_typecheck_velocity_overload_1(L)) return _bind_velocity_overload_1(L);
		if (_lg_typecheck_velocity_overload_2(L)) return _bind_velocity_overload_2(L);

		luaL_error(L, "error in function velocity, cannot match any of the overloads for function velocity:\n  velocity()\n  velocity()\n");
		return 0;
	}

	// SPK::Vector3D & SPK::Particle::oldPosition()
	static int _bind_oldPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_oldPosition_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Particle::oldPosition() function, expected prototype:\nSPK::Vector3D & SPK::Particle::oldPosition()\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Particle::oldPosition(). Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->oldPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Particle::oldPosition() const
	static int _bind_oldPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_oldPosition_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Particle::oldPosition() const function, expected prototype:\nconst SPK::Vector3D & SPK::Particle::oldPosition() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Particle::oldPosition() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->oldPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SPK::Particle::oldPosition
	static int _bind_oldPosition(lua_State *L) {
		if (_lg_typecheck_oldPosition_overload_1(L)) return _bind_oldPosition_overload_1(L);
		if (_lg_typecheck_oldPosition_overload_2(L)) return _bind_oldPosition_overload_2(L);

		luaL_error(L, "error in function oldPosition, cannot match any of the overloads for function oldPosition:\n  oldPosition()\n  oldPosition()\n");
		return 0;
	}

	// float SPK::Particle::getParamCurrentValue(SPK::ModelParam type) const
	static int _bind_getParamCurrentValue(lua_State *L) {
		if (!_lg_typecheck_getParamCurrentValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Particle::getParamCurrentValue(SPK::ModelParam type) const function, expected prototype:\nfloat SPK::Particle::getParamCurrentValue(SPK::ModelParam type) const\nClass arguments details:\n");
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);

		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Particle::getParamCurrentValue(SPK::ModelParam) const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		float lret = self->getParamCurrentValue(type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Particle::getParamFinalValue(SPK::ModelParam type) const
	static int _bind_getParamFinalValue(lua_State *L) {
		if (!_lg_typecheck_getParamFinalValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Particle::getParamFinalValue(SPK::ModelParam type) const function, expected prototype:\nfloat SPK::Particle::getParamFinalValue(SPK::ModelParam type) const\nClass arguments details:\n");
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);

		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Particle::getParamFinalValue(SPK::ModelParam) const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		float lret = self->getParamFinalValue(type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::Model * SPK::Particle::getModel() const
	static int _bind_getModel(lua_State *L) {
		if (!_lg_typecheck_getModel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Model * SPK::Particle::getModel() const function, expected prototype:\nSPK::Model * SPK::Particle::getModel() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Model * SPK::Particle::getModel() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		SPK::Model * lret = self->getModel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Model >::push(L,lret,false);

		return 1;
	}

	// SPK::Group * SPK::Particle::getGroup() const
	static int _bind_getGroup(lua_State *L) {
		if (!_lg_typecheck_getGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Group * SPK::Particle::getGroup() const function, expected prototype:\nSPK::Group * SPK::Particle::getGroup() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Group * SPK::Particle::getGroup() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		SPK::Group * lret = self->getGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Group >::push(L,lret,false);

		return 1;
	}

	// size_t SPK::Particle::getIndex() const
	static int _bind_getIndex(lua_State *L) {
		if (!_lg_typecheck_getIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::Particle::getIndex() const function, expected prototype:\nsize_t SPK::Particle::getIndex() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::Particle::getIndex() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		size_t lret = self->getIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Particle::getLifeLeft() const
	static int _bind_getLifeLeft(lua_State *L) {
		if (!_lg_typecheck_getLifeLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Particle::getLifeLeft() const function, expected prototype:\nfloat SPK::Particle::getLifeLeft() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Particle::getLifeLeft() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		float lret = self->getLifeLeft();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Particle::getAge() const
	static int _bind_getAge(lua_State *L) {
		if (!_lg_typecheck_getAge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Particle::getAge() const function, expected prototype:\nfloat SPK::Particle::getAge() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Particle::getAge() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		float lret = self->getAge();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Particle::getDistanceFromCamera() const
	static int _bind_getDistanceFromCamera(lua_State *L) {
		if (!_lg_typecheck_getDistanceFromCamera(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Particle::getDistanceFromCamera() const function, expected prototype:\nfloat SPK::Particle::getDistanceFromCamera() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Particle::getDistanceFromCamera() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		float lret = self->getDistanceFromCamera();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Particle::getSqrDistanceFromCamera() const
	static int _bind_getSqrDistanceFromCamera(lua_State *L) {
		if (!_lg_typecheck_getSqrDistanceFromCamera(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Particle::getSqrDistanceFromCamera() const function, expected prototype:\nfloat SPK::Particle::getSqrDistanceFromCamera() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Particle::getSqrDistanceFromCamera() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		float lret = self->getSqrDistanceFromCamera();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Particle::isNewBorn() const
	static int _bind_isNewBorn(lua_State *L) {
		if (!_lg_typecheck_isNewBorn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Particle::isNewBorn() const function, expected prototype:\nbool SPK::Particle::isNewBorn() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Particle::isNewBorn() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		bool lret = self->isNewBorn();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Particle::isAlive() const
	static int _bind_isAlive(lua_State *L) {
		if (!_lg_typecheck_isAlive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Particle::isAlive() const function, expected prototype:\nbool SPK::Particle::isAlive() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Particle::isAlive() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		bool lret = self->isAlive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Particle::init()
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Particle::init() function, expected prototype:\nvoid SPK::Particle::init()\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Particle::init(). Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		self->init();

		return 0;
	}

	// void SPK::Particle::kill()
	static int _bind_kill(lua_State *L) {
		if (!_lg_typecheck_kill(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Particle::kill() function, expected prototype:\nvoid SPK::Particle::kill()\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Particle::kill(). Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		self->kill();

		return 0;
	}

	// float SPK::Particle::getR() const
	static int _bind_getR(lua_State *L) {
		if (!_lg_typecheck_getR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Particle::getR() const function, expected prototype:\nfloat SPK::Particle::getR() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Particle::getR() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		float lret = self->getR();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Particle::getG() const
	static int _bind_getG(lua_State *L) {
		if (!_lg_typecheck_getG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Particle::getG() const function, expected prototype:\nfloat SPK::Particle::getG() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Particle::getG() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		float lret = self->getG();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Particle::getB() const
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Particle::getB() const function, expected prototype:\nfloat SPK::Particle::getB() const\nClass arguments details:\n");
		}


		SPK::Particle* self=(Luna< SPK::Particle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Particle::getB() const. Got : '%s'",typeid(Luna< SPK::Particle >::check(L,1)).name());
		}
		float lret = self->getB();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

SPK::Particle* LunaTraits< SPK::Particle >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SPK::Particle >::_bind_dtor(SPK::Particle* obj) {
	delete obj;
}

const char LunaTraits< SPK::Particle >::className[] = "Particle";
const char LunaTraits< SPK::Particle >::fullName[] = "SPK::Particle";
const char LunaTraits< SPK::Particle >::moduleName[] = "spark";
const char* LunaTraits< SPK::Particle >::parents[] = {0};
const int LunaTraits< SPK::Particle >::hash = 73657533;
const int LunaTraits< SPK::Particle >::uniqueIDs[] = {73657533,0};

luna_RegType LunaTraits< SPK::Particle >::methods[] = {
	{"setParamCurrentValue", &luna_wrapper_SPK_Particle::_bind_setParamCurrentValue},
	{"setParamFinalValue", &luna_wrapper_SPK_Particle::_bind_setParamFinalValue},
	{"changeParamCurrentValue", &luna_wrapper_SPK_Particle::_bind_changeParamCurrentValue},
	{"changeParamFinalValue", &luna_wrapper_SPK_Particle::_bind_changeParamFinalValue},
	{"setLifeLeft", &luna_wrapper_SPK_Particle::_bind_setLifeLeft},
	{"position", &luna_wrapper_SPK_Particle::_bind_position},
	{"velocity", &luna_wrapper_SPK_Particle::_bind_velocity},
	{"oldPosition", &luna_wrapper_SPK_Particle::_bind_oldPosition},
	{"getParamCurrentValue", &luna_wrapper_SPK_Particle::_bind_getParamCurrentValue},
	{"getParamFinalValue", &luna_wrapper_SPK_Particle::_bind_getParamFinalValue},
	{"getModel", &luna_wrapper_SPK_Particle::_bind_getModel},
	{"getGroup", &luna_wrapper_SPK_Particle::_bind_getGroup},
	{"getIndex", &luna_wrapper_SPK_Particle::_bind_getIndex},
	{"getLifeLeft", &luna_wrapper_SPK_Particle::_bind_getLifeLeft},
	{"getAge", &luna_wrapper_SPK_Particle::_bind_getAge},
	{"getDistanceFromCamera", &luna_wrapper_SPK_Particle::_bind_getDistanceFromCamera},
	{"getSqrDistanceFromCamera", &luna_wrapper_SPK_Particle::_bind_getSqrDistanceFromCamera},
	{"isNewBorn", &luna_wrapper_SPK_Particle::_bind_isNewBorn},
	{"isAlive", &luna_wrapper_SPK_Particle::_bind_isAlive},
	{"init", &luna_wrapper_SPK_Particle::_bind_init},
	{"kill", &luna_wrapper_SPK_Particle::_bind_kill},
	{"getR", &luna_wrapper_SPK_Particle::_bind_getR},
	{"getG", &luna_wrapper_SPK_Particle::_bind_getG},
	{"getB", &luna_wrapper_SPK_Particle::_bind_getB},
	{"dynCast", &luna_wrapper_SPK_Particle::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Particle::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_Particle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Particle::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Particle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Particle >::enumValues[] = {
	{0,0}
};


