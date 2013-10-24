#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Model.h>

class luna_wrapper_SPK_Model {
public:
	typedef Luna< SPK::Model > luna_t;

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

		SPK::Model* self= (SPK::Model*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Model >::push(L,self,false);
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
		//SPK::Model* ptr= dynamic_cast< SPK::Model* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Model* ptr= luna_caster< SPK::Registerable, SPK::Model >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Model >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		if( (!(Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLifeTime(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImmortal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParam_overload_1(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParam_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParam_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLifeTimeMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLifeTimeMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isImmortal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isMutable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isRandom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isInterpolated(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParamValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNbValues(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNbEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNbMutable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNRandom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInterpolator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNbInterpolated(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSizeOfParticleCurrentArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSizeOfParticleExtendedArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSizeOfModelArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParameterOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefaultValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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
	// SPK::Model::Model(lua_Table * data, int enableFlag = SPK::FLAG_RED | SPK::FLAG_GREEN | SPK::FLAG_BLUE, int mutableFlag = SPK::FLAG_NONE, int randomFlag = SPK::FLAG_NONE, int interpolatedFlag = SPK::FLAG_NONE)
	static SPK::Model* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Model::Model(lua_Table * data, int enableFlag = SPK::FLAG_RED | SPK::FLAG_GREEN | SPK::FLAG_BLUE, int mutableFlag = SPK::FLAG_NONE, int randomFlag = SPK::FLAG_NONE, int interpolatedFlag = SPK::FLAG_NONE) function, expected prototype:\nSPK::Model::Model(lua_Table * data, int enableFlag = SPK::FLAG_RED | SPK::FLAG_GREEN | SPK::FLAG_BLUE, int mutableFlag = SPK::FLAG_NONE, int randomFlag = SPK::FLAG_NONE, int interpolatedFlag = SPK::FLAG_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int enableFlag=luatop>1 ? (int)lua_tointeger(L,2) : (int)SPK::FLAG_RED | SPK::FLAG_GREEN | SPK::FLAG_BLUE;
		int mutableFlag=luatop>2 ? (int)lua_tointeger(L,3) : (int)SPK::FLAG_NONE;
		int randomFlag=luatop>3 ? (int)lua_tointeger(L,4) : (int)SPK::FLAG_NONE;
		int interpolatedFlag=luatop>4 ? (int)lua_tointeger(L,5) : (int)SPK::FLAG_NONE;

		return new wrapper_SPK_Model(L,NULL, enableFlag, mutableFlag, randomFlag, interpolatedFlag);
	}

	// SPK::Model::Model(lua_Table * data, const SPK::Model & model)
	static SPK::Model* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Model::Model(lua_Table * data, const SPK::Model & model) function, expected prototype:\nSPK::Model::Model(lua_Table * data, const SPK::Model & model)\nClass arguments details:\narg 2 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Model* model_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,2));
		if( !model_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg model in SPK::Model::Model function");
		}
		const SPK::Model & model=*model_ptr;

		return new wrapper_SPK_Model(L,NULL, model);
	}

	// Overload binder for SPK::Model::Model
	static SPK::Model* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Model, cannot match any of the overloads for function Model:\n  Model(lua_Table *, int, int, int, int)\n  Model(lua_Table *, const SPK::Model &)\n");
		return NULL;
	}


	// Function binds:
	// std::string SPK::Model::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::Model::getClassName() const function, expected prototype:\nstd::string SPK::Model::getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::Model::getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Model::setLifeTime(float lifeTimeMin, float lifeTimeMax)
	static int _bind_setLifeTime(lua_State *L) {
		if (!_lg_typecheck_setLifeTime(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Model::setLifeTime(float lifeTimeMin, float lifeTimeMax) function, expected prototype:\nvoid SPK::Model::setLifeTime(float lifeTimeMin, float lifeTimeMax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float lifeTimeMin=(float)lua_tonumber(L,2);
		float lifeTimeMax=(float)lua_tonumber(L,3);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Model::setLifeTime(float, float). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLifeTime(lifeTimeMin, lifeTimeMax);

		return 0;
	}

	// void SPK::Model::setImmortal(bool immortal)
	static int _bind_setImmortal(lua_State *L) {
		if (!_lg_typecheck_setImmortal(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Model::setImmortal(bool immortal) function, expected prototype:\nvoid SPK::Model::setImmortal(bool immortal)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool immortal=(bool)(lua_toboolean(L,2)==1);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Model::setImmortal(bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImmortal(immortal);

		return 0;
	}

	// bool SPK::Model::setParam(SPK::ModelParam type, float startMin, float startMax, float endMin, float endMax)
	static int _bind_setParam_overload_1(lua_State *L) {
		if (!_lg_typecheck_setParam_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::Model::setParam(SPK::ModelParam type, float startMin, float startMax, float endMin, float endMax) function, expected prototype:\nbool SPK::Model::setParam(SPK::ModelParam type, float startMin, float startMax, float endMin, float endMax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);
		float startMin=(float)lua_tonumber(L,3);
		float startMax=(float)lua_tonumber(L,4);
		float endMin=(float)lua_tonumber(L,5);
		float endMax=(float)lua_tonumber(L,6);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::Model::setParam(SPK::ModelParam, float, float, float, float). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setParam(type, startMin, startMax, endMin, endMax);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Model::setParam(SPK::ModelParam type, float value0, float value1)
	static int _bind_setParam_overload_2(lua_State *L) {
		if (!_lg_typecheck_setParam_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::Model::setParam(SPK::ModelParam type, float value0, float value1) function, expected prototype:\nbool SPK::Model::setParam(SPK::ModelParam type, float value0, float value1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);
		float value0=(float)lua_tonumber(L,3);
		float value1=(float)lua_tonumber(L,4);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::Model::setParam(SPK::ModelParam, float, float). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setParam(type, value0, value1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Model::setParam(SPK::ModelParam type, float value)
	static int _bind_setParam_overload_3(lua_State *L) {
		if (!_lg_typecheck_setParam_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::Model::setParam(SPK::ModelParam type, float value) function, expected prototype:\nbool SPK::Model::setParam(SPK::ModelParam type, float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::Model::setParam(SPK::ModelParam, float). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setParam(type, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for SPK::Model::setParam
	static int _bind_setParam(lua_State *L) {
		if (_lg_typecheck_setParam_overload_1(L)) return _bind_setParam_overload_1(L);
		if (_lg_typecheck_setParam_overload_2(L)) return _bind_setParam_overload_2(L);
		if (_lg_typecheck_setParam_overload_3(L)) return _bind_setParam_overload_3(L);

		luaL_error(L, "error in function setParam, cannot match any of the overloads for function setParam:\n  setParam(SPK::ModelParam, float, float, float, float)\n  setParam(SPK::ModelParam, float, float)\n  setParam(SPK::ModelParam, float)\n");
		return 0;
	}

	// float SPK::Model::getLifeTimeMin() const
	static int _bind_getLifeTimeMin(lua_State *L) {
		if (!_lg_typecheck_getLifeTimeMin(L)) {
			luaL_error(L, "luna typecheck failed in float SPK::Model::getLifeTimeMin() const function, expected prototype:\nfloat SPK::Model::getLifeTimeMin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float SPK::Model::getLifeTimeMin() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getLifeTimeMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Model::getLifeTimeMax() const
	static int _bind_getLifeTimeMax(lua_State *L) {
		if (!_lg_typecheck_getLifeTimeMax(L)) {
			luaL_error(L, "luna typecheck failed in float SPK::Model::getLifeTimeMax() const function, expected prototype:\nfloat SPK::Model::getLifeTimeMax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float SPK::Model::getLifeTimeMax() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getLifeTimeMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Model::isImmortal() const
	static int _bind_isImmortal(lua_State *L) {
		if (!_lg_typecheck_isImmortal(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::Model::isImmortal() const function, expected prototype:\nbool SPK::Model::isImmortal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::Model::isImmortal() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isImmortal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int SPK::Model::isEnabled(SPK::ModelParam type) const
	static int _bind_isEnabled(lua_State *L) {
		if (!_lg_typecheck_isEnabled(L)) {
			luaL_error(L, "luna typecheck failed in int SPK::Model::isEnabled(SPK::ModelParam type) const function, expected prototype:\nint SPK::Model::isEnabled(SPK::ModelParam type) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int SPK::Model::isEnabled(SPK::ModelParam) const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->isEnabled(type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SPK::Model::isMutable(SPK::ModelParam type) const
	static int _bind_isMutable(lua_State *L) {
		if (!_lg_typecheck_isMutable(L)) {
			luaL_error(L, "luna typecheck failed in int SPK::Model::isMutable(SPK::ModelParam type) const function, expected prototype:\nint SPK::Model::isMutable(SPK::ModelParam type) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int SPK::Model::isMutable(SPK::ModelParam) const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->isMutable(type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SPK::Model::isRandom(SPK::ModelParam type) const
	static int _bind_isRandom(lua_State *L) {
		if (!_lg_typecheck_isRandom(L)) {
			luaL_error(L, "luna typecheck failed in int SPK::Model::isRandom(SPK::ModelParam type) const function, expected prototype:\nint SPK::Model::isRandom(SPK::ModelParam type) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int SPK::Model::isRandom(SPK::ModelParam) const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->isRandom(type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SPK::Model::isInterpolated(SPK::ModelParam type) const
	static int _bind_isInterpolated(lua_State *L) {
		if (!_lg_typecheck_isInterpolated(L)) {
			luaL_error(L, "luna typecheck failed in int SPK::Model::isInterpolated(SPK::ModelParam type) const function, expected prototype:\nint SPK::Model::isInterpolated(SPK::ModelParam type) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int SPK::Model::isInterpolated(SPK::ModelParam) const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->isInterpolated(type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Model::getParamValue(SPK::ModelParam type, size_t index) const
	static int _bind_getParamValue(lua_State *L) {
		if (!_lg_typecheck_getParamValue(L)) {
			luaL_error(L, "luna typecheck failed in float SPK::Model::getParamValue(SPK::ModelParam type, size_t index) const function, expected prototype:\nfloat SPK::Model::getParamValue(SPK::ModelParam type, size_t index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);
		size_t index=(size_t)lua_tointeger(L,3);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float SPK::Model::getParamValue(SPK::ModelParam, size_t) const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getParamValue(type, index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SPK::Model::getNbValues(SPK::ModelParam type) const
	static int _bind_getNbValues(lua_State *L) {
		if (!_lg_typecheck_getNbValues(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SPK::Model::getNbValues(SPK::ModelParam type) const function, expected prototype:\nunsigned int SPK::Model::getNbValues(SPK::ModelParam type) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam type=(SPK::ModelParam)lua_tointeger(L,2);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SPK::Model::getNbValues(SPK::ModelParam) const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNbValues(type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::Model::getNbEnabled() const
	static int _bind_getNbEnabled(lua_State *L) {
		if (!_lg_typecheck_getNbEnabled(L)) {
			luaL_error(L, "luna typecheck failed in size_t SPK::Model::getNbEnabled() const function, expected prototype:\nsize_t SPK::Model::getNbEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t SPK::Model::getNbEnabled() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->getNbEnabled();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::Model::getNbMutable() const
	static int _bind_getNbMutable(lua_State *L) {
		if (!_lg_typecheck_getNbMutable(L)) {
			luaL_error(L, "luna typecheck failed in size_t SPK::Model::getNbMutable() const function, expected prototype:\nsize_t SPK::Model::getNbMutable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t SPK::Model::getNbMutable() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->getNbMutable();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::Model::getNRandom() const
	static int _bind_getNRandom(lua_State *L) {
		if (!_lg_typecheck_getNRandom(L)) {
			luaL_error(L, "luna typecheck failed in size_t SPK::Model::getNRandom() const function, expected prototype:\nsize_t SPK::Model::getNRandom() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t SPK::Model::getNRandom() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->getNRandom();
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::Interpolator * SPK::Model::getInterpolator(SPK::ModelParam param)
	static int _bind_getInterpolator(lua_State *L) {
		if (!_lg_typecheck_getInterpolator(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Interpolator * SPK::Model::getInterpolator(SPK::ModelParam param) function, expected prototype:\nSPK::Interpolator * SPK::Model::getInterpolator(SPK::ModelParam param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam param=(SPK::ModelParam)lua_tointeger(L,2);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Interpolator * SPK::Model::getInterpolator(SPK::ModelParam). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Interpolator * lret = self->getInterpolator(param);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Interpolator >::push(L,lret,false);

		return 1;
	}

	// size_t SPK::Model::getNbInterpolated() const
	static int _bind_getNbInterpolated(lua_State *L) {
		if (!_lg_typecheck_getNbInterpolated(L)) {
			luaL_error(L, "luna typecheck failed in size_t SPK::Model::getNbInterpolated() const function, expected prototype:\nsize_t SPK::Model::getNbInterpolated() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t SPK::Model::getNbInterpolated() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->getNbInterpolated();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::Model::getSizeOfParticleCurrentArray() const
	static int _bind_getSizeOfParticleCurrentArray(lua_State *L) {
		if (!_lg_typecheck_getSizeOfParticleCurrentArray(L)) {
			luaL_error(L, "luna typecheck failed in size_t SPK::Model::getSizeOfParticleCurrentArray() const function, expected prototype:\nsize_t SPK::Model::getSizeOfParticleCurrentArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t SPK::Model::getSizeOfParticleCurrentArray() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->getSizeOfParticleCurrentArray();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::Model::getSizeOfParticleExtendedArray() const
	static int _bind_getSizeOfParticleExtendedArray(lua_State *L) {
		if (!_lg_typecheck_getSizeOfParticleExtendedArray(L)) {
			luaL_error(L, "luna typecheck failed in size_t SPK::Model::getSizeOfParticleExtendedArray() const function, expected prototype:\nsize_t SPK::Model::getSizeOfParticleExtendedArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t SPK::Model::getSizeOfParticleExtendedArray() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->getSizeOfParticleExtendedArray();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::Model::getSizeOfModelArray() const
	static int _bind_getSizeOfModelArray(lua_State *L) {
		if (!_lg_typecheck_getSizeOfModelArray(L)) {
			luaL_error(L, "luna typecheck failed in size_t SPK::Model::getSizeOfModelArray() const function, expected prototype:\nsize_t SPK::Model::getSizeOfModelArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t SPK::Model::getSizeOfModelArray() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->getSizeOfModelArray();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::Model::getParameterOffset(SPK::ModelParam param) const
	static int _bind_getParameterOffset(lua_State *L) {
		if (!_lg_typecheck_getParameterOffset(L)) {
			luaL_error(L, "luna typecheck failed in size_t SPK::Model::getParameterOffset(SPK::ModelParam param) const function, expected prototype:\nsize_t SPK::Model::getParameterOffset(SPK::ModelParam param) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam param=(SPK::ModelParam)lua_tointeger(L,2);

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t SPK::Model::getParameterOffset(SPK::ModelParam) const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->getParameterOffset(param);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static SPK::Model * SPK::Model::create(int enableFlag = SPK::FLAG_RED | SPK::FLAG_GREEN | SPK::FLAG_BLUE, int mutableFlag = SPK::FLAG_NONE, int randomFlag = SPK::FLAG_NONE, int interpolatedFlag = SPK::FLAG_NONE)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luaL_error(L, "luna typecheck failed in static SPK::Model * SPK::Model::create(int enableFlag = SPK::FLAG_RED | SPK::FLAG_GREEN | SPK::FLAG_BLUE, int mutableFlag = SPK::FLAG_NONE, int randomFlag = SPK::FLAG_NONE, int interpolatedFlag = SPK::FLAG_NONE) function, expected prototype:\nstatic SPK::Model * SPK::Model::create(int enableFlag = SPK::FLAG_RED | SPK::FLAG_GREEN | SPK::FLAG_BLUE, int mutableFlag = SPK::FLAG_NONE, int randomFlag = SPK::FLAG_NONE, int interpolatedFlag = SPK::FLAG_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int enableFlag=luatop>0 ? (int)lua_tointeger(L,1) : (int)SPK::FLAG_RED | SPK::FLAG_GREEN | SPK::FLAG_BLUE;
		int mutableFlag=luatop>1 ? (int)lua_tointeger(L,2) : (int)SPK::FLAG_NONE;
		int randomFlag=luatop>2 ? (int)lua_tointeger(L,3) : (int)SPK::FLAG_NONE;
		int interpolatedFlag=luatop>3 ? (int)lua_tointeger(L,4) : (int)SPK::FLAG_NONE;

		SPK::Model * lret = SPK::Model::create(enableFlag, mutableFlag, randomFlag, interpolatedFlag);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Model >::push(L,lret,false);

		return 1;
	}

	// static float SPK::Model::getDefaultValue(SPK::ModelParam param)
	static int _bind_getDefaultValue(lua_State *L) {
		if (!_lg_typecheck_getDefaultValue(L)) {
			luaL_error(L, "luna typecheck failed in static float SPK::Model::getDefaultValue(SPK::ModelParam param) function, expected prototype:\nstatic float SPK::Model::getDefaultValue(SPK::ModelParam param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ModelParam param=(SPK::ModelParam)lua_tointeger(L,1);

		float lret = SPK::Model::getDefaultValue(param);
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::Registerable * SPK::Model::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Model::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Model::base_findByName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Model::base_findByName(const std::string &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Registerable * lret = self->Model::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::Model::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::Model::base_getClassName() const function, expected prototype:\nstd::string SPK::Model::base_getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Model* self=Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::Model::base_getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->Model::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::Model* LunaTraits< SPK::Model >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Model::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Model >::_bind_dtor(SPK::Model* obj) {
	delete obj;
}

const char LunaTraits< SPK::Model >::className[] = "Model";
const char LunaTraits< SPK::Model >::fullName[] = "SPK::Model";
const char LunaTraits< SPK::Model >::moduleName[] = "spark";
const char* LunaTraits< SPK::Model >::parents[] = {"spark.Registerable", 0};
const int LunaTraits< SPK::Model >::hash = 42229074;
const int LunaTraits< SPK::Model >::uniqueIDs[] = {31337102,0};

luna_RegType LunaTraits< SPK::Model >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_Model::_bind_getClassName},
	{"setLifeTime", &luna_wrapper_SPK_Model::_bind_setLifeTime},
	{"setImmortal", &luna_wrapper_SPK_Model::_bind_setImmortal},
	{"setParam", &luna_wrapper_SPK_Model::_bind_setParam},
	{"getLifeTimeMin", &luna_wrapper_SPK_Model::_bind_getLifeTimeMin},
	{"getLifeTimeMax", &luna_wrapper_SPK_Model::_bind_getLifeTimeMax},
	{"isImmortal", &luna_wrapper_SPK_Model::_bind_isImmortal},
	{"isEnabled", &luna_wrapper_SPK_Model::_bind_isEnabled},
	{"isMutable", &luna_wrapper_SPK_Model::_bind_isMutable},
	{"isRandom", &luna_wrapper_SPK_Model::_bind_isRandom},
	{"isInterpolated", &luna_wrapper_SPK_Model::_bind_isInterpolated},
	{"getParamValue", &luna_wrapper_SPK_Model::_bind_getParamValue},
	{"getNbValues", &luna_wrapper_SPK_Model::_bind_getNbValues},
	{"getNbEnabled", &luna_wrapper_SPK_Model::_bind_getNbEnabled},
	{"getNbMutable", &luna_wrapper_SPK_Model::_bind_getNbMutable},
	{"getNRandom", &luna_wrapper_SPK_Model::_bind_getNRandom},
	{"getInterpolator", &luna_wrapper_SPK_Model::_bind_getInterpolator},
	{"getNbInterpolated", &luna_wrapper_SPK_Model::_bind_getNbInterpolated},
	{"getSizeOfParticleCurrentArray", &luna_wrapper_SPK_Model::_bind_getSizeOfParticleCurrentArray},
	{"getSizeOfParticleExtendedArray", &luna_wrapper_SPK_Model::_bind_getSizeOfParticleExtendedArray},
	{"getSizeOfModelArray", &luna_wrapper_SPK_Model::_bind_getSizeOfModelArray},
	{"getParameterOffset", &luna_wrapper_SPK_Model::_bind_getParameterOffset},
	{"create", &luna_wrapper_SPK_Model::_bind_create},
	{"getDefaultValue", &luna_wrapper_SPK_Model::_bind_getDefaultValue},
	{"base_findByName", &luna_wrapper_SPK_Model::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_Model::_bind_base_getClassName},
	{"fromVoid", &luna_wrapper_SPK_Model::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Model::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_Model::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Model >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Model::_cast_from_Registerable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Model >::enumValues[] = {
	{0,0}
};


