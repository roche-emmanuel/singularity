#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_NormalEmitter.h>

class luna_wrapper_SPK_NormalEmitter {
public:
	typedef Luna< SPK::NormalEmitter > luna_t;

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

		SPK::NormalEmitter* self= (SPK::NormalEmitter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::NormalEmitter >::push(L,self,false);
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
		//SPK::NormalEmitter* ptr= dynamic_cast< SPK::NormalEmitter* >(Luna< SPK::Registerable >::check(L,1));
		SPK::NormalEmitter* ptr= luna_caster< SPK::Registerable, SPK::NormalEmitter >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::NormalEmitter >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::NormalEmitter* ptr= dynamic_cast< SPK::NormalEmitter* >(Luna< SPK::Transformable >::check(L,1));
		SPK::NormalEmitter* ptr= luna_caster< SPK::Transformable, SPK::NormalEmitter >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::NormalEmitter >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInverted(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNormalZone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isInverted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalZone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// SPK::NormalEmitter::NormalEmitter(lua_Table * data, SPK::Zone * normalZone = NULL, bool inverted = false)
	static SPK::NormalEmitter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in SPK::NormalEmitter::NormalEmitter(lua_Table * data, SPK::Zone * normalZone = NULL, bool inverted = false) function, expected prototype:\nSPK::NormalEmitter::NormalEmitter(lua_Table * data, SPK::Zone * normalZone = NULL, bool inverted = false)\nClass arguments details:\narg 2 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		SPK::Zone* normalZone=luatop>1 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,2)) : (SPK::Zone*)NULL;
		bool inverted=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		return new wrapper_SPK_NormalEmitter(L,NULL, normalZone, inverted);
	}


	// Function binds:
	// std::string SPK::NormalEmitter::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::NormalEmitter::getClassName() const function, expected prototype:\nstd::string SPK::NormalEmitter::getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::NormalEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::NormalEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::NormalEmitter::getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::NormalEmitter::setInverted(bool inverted)
	static int _bind_setInverted(lua_State *L) {
		if (!_lg_typecheck_setInverted(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::NormalEmitter::setInverted(bool inverted) function, expected prototype:\nvoid SPK::NormalEmitter::setInverted(bool inverted)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool inverted=(bool)(lua_toboolean(L,2)==1);

		SPK::NormalEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::NormalEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::NormalEmitter::setInverted(bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInverted(inverted);

		return 0;
	}

	// void SPK::NormalEmitter::setNormalZone(SPK::Zone * zone)
	static int _bind_setNormalZone(lua_State *L) {
		if (!_lg_typecheck_setNormalZone(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::NormalEmitter::setNormalZone(SPK::Zone * zone) function, expected prototype:\nvoid SPK::NormalEmitter::setNormalZone(SPK::Zone * zone)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Zone* zone=(Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,2));

		SPK::NormalEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::NormalEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::NormalEmitter::setNormalZone(SPK::Zone *). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNormalZone(zone);

		return 0;
	}

	// bool SPK::NormalEmitter::isInverted() const
	static int _bind_isInverted(lua_State *L) {
		if (!_lg_typecheck_isInverted(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::NormalEmitter::isInverted() const function, expected prototype:\nbool SPK::NormalEmitter::isInverted() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::NormalEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::NormalEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::NormalEmitter::isInverted() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isInverted();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// SPK::Zone * SPK::NormalEmitter::getNormalZone() const
	static int _bind_getNormalZone(lua_State *L) {
		if (!_lg_typecheck_getNormalZone(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Zone * SPK::NormalEmitter::getNormalZone() const function, expected prototype:\nSPK::Zone * SPK::NormalEmitter::getNormalZone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::NormalEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::NormalEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Zone * SPK::NormalEmitter::getNormalZone() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Zone * lret = self->getNormalZone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Zone >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::NormalEmitter::findByName(const std::string & name)
	static int _bind_findByName(lua_State *L) {
		if (!_lg_typecheck_findByName(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::NormalEmitter::findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::NormalEmitter::findByName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::NormalEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::NormalEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::NormalEmitter::findByName(const std::string &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Registerable * lret = self->findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// static SPK::NormalEmitter * SPK::NormalEmitter::create(SPK::Zone * normalZone = NULL, bool inverted = false)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luaL_error(L, "luna typecheck failed in static SPK::NormalEmitter * SPK::NormalEmitter::create(SPK::Zone * normalZone = NULL, bool inverted = false) function, expected prototype:\nstatic SPK::NormalEmitter * SPK::NormalEmitter::create(SPK::Zone * normalZone = NULL, bool inverted = false)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		SPK::Zone* normalZone=luatop>0 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1)) : (SPK::Zone*)NULL;
		bool inverted=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		SPK::NormalEmitter * lret = SPK::NormalEmitter::create(normalZone, inverted);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::NormalEmitter >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::NormalEmitter::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::NormalEmitter::base_getClassName() const function, expected prototype:\nstd::string SPK::NormalEmitter::base_getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::NormalEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::NormalEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::NormalEmitter::base_getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->NormalEmitter::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// SPK::Registerable * SPK::NormalEmitter::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::NormalEmitter::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::NormalEmitter::base_findByName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::NormalEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::NormalEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::NormalEmitter::base_findByName(const std::string &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Registerable * lret = self->NormalEmitter::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

SPK::NormalEmitter* LunaTraits< SPK::NormalEmitter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_NormalEmitter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::NormalEmitter >::_bind_dtor(SPK::NormalEmitter* obj) {
	delete obj;
}

const char LunaTraits< SPK::NormalEmitter >::className[] = "NormalEmitter";
const char LunaTraits< SPK::NormalEmitter >::fullName[] = "SPK::NormalEmitter";
const char LunaTraits< SPK::NormalEmitter >::moduleName[] = "spark";
const char* LunaTraits< SPK::NormalEmitter >::parents[] = {"spark.Emitter", 0};
const int LunaTraits< SPK::NormalEmitter >::hash = 8953363;
const int LunaTraits< SPK::NormalEmitter >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::NormalEmitter >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_NormalEmitter::_bind_getClassName},
	{"setInverted", &luna_wrapper_SPK_NormalEmitter::_bind_setInverted},
	{"setNormalZone", &luna_wrapper_SPK_NormalEmitter::_bind_setNormalZone},
	{"isInverted", &luna_wrapper_SPK_NormalEmitter::_bind_isInverted},
	{"getNormalZone", &luna_wrapper_SPK_NormalEmitter::_bind_getNormalZone},
	{"findByName", &luna_wrapper_SPK_NormalEmitter::_bind_findByName},
	{"create", &luna_wrapper_SPK_NormalEmitter::_bind_create},
	{"base_getClassName", &luna_wrapper_SPK_NormalEmitter::_bind_base_getClassName},
	{"base_findByName", &luna_wrapper_SPK_NormalEmitter::_bind_base_findByName},
	{"fromVoid", &luna_wrapper_SPK_NormalEmitter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_NormalEmitter::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_NormalEmitter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::NormalEmitter >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_NormalEmitter::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_NormalEmitter::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::NormalEmitter >::enumValues[] = {
	{0,0}
};


