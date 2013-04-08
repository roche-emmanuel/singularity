#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_SphericEmitter.h>

class luna_wrapper_SPK_SphericEmitter {
public:
	typedef Luna< SPK::SphericEmitter > luna_t;

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

		SPK::SphericEmitter* self= (SPK::SphericEmitter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::SphericEmitter >::push(L,self,false);
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
		//SPK::SphericEmitter* ptr= dynamic_cast< SPK::SphericEmitter* >(Luna< SPK::Registerable >::check(L,1));
		SPK::SphericEmitter* ptr= luna_caster< SPK::Registerable, SPK::SphericEmitter >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::SphericEmitter >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::SphericEmitter* ptr= dynamic_cast< SPK::SphericEmitter* >(Luna< SPK::Transformable >::check(L,1));
		SPK::SphericEmitter* ptr= luna_caster< SPK::Transformable, SPK::SphericEmitter >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::SphericEmitter >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransformedDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngleMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngleMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
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
	// SPK::SphericEmitter::SphericEmitter(lua_Table * data, const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f), float angleA = 0.0f, float angleB = 0.0f)
	static SPK::SphericEmitter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::SphericEmitter::SphericEmitter(lua_Table * data, const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f), float angleA = 0.0f, float angleB = 0.0f) function, expected prototype:\nSPK::SphericEmitter::SphericEmitter(lua_Table * data, const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f), float angleA = 0.0f, float angleB = 0.0f)\nClass arguments details:\narg 2 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* direction_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::SphericEmitter::SphericEmitter function");
		}
		const SPK::Vector3D & direction=luatop>1 ? *direction_ptr : (const SPK::Vector3D&)SPK::Vector3D (0.0f, 0.0f,-1.0f);
		float angleA=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;
		float angleB=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;

		return new wrapper_SPK_SphericEmitter(L,NULL, direction, angleA, angleB);
	}


	// Function binds:
	// std::string SPK::SphericEmitter::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::SphericEmitter::getClassName() const function, expected prototype:\nstd::string SPK::SphericEmitter::getClassName() const\nClass arguments details:\n");
		}


		SPK::SphericEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::SphericEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::SphericEmitter::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::SphericEmitter::setDirection(const SPK::Vector3D & direction)
	static int _bind_setDirection(lua_State *L) {
		if (!_lg_typecheck_setDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::SphericEmitter::setDirection(const SPK::Vector3D & direction) function, expected prototype:\nvoid SPK::SphericEmitter::setDirection(const SPK::Vector3D & direction)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* direction_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::SphericEmitter::setDirection function");
		}
		const SPK::Vector3D & direction=*direction_ptr;

		SPK::SphericEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::SphericEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::SphericEmitter::setDirection(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setDirection(direction);

		return 0;
	}

	// void SPK::SphericEmitter::setAngles(float angleA, float angleB)
	static int _bind_setAngles(lua_State *L) {
		if (!_lg_typecheck_setAngles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::SphericEmitter::setAngles(float angleA, float angleB) function, expected prototype:\nvoid SPK::SphericEmitter::setAngles(float angleA, float angleB)\nClass arguments details:\n");
		}

		float angleA=(float)lua_tonumber(L,2);
		float angleB=(float)lua_tonumber(L,3);

		SPK::SphericEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::SphericEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::SphericEmitter::setAngles(float, float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setAngles(angleA, angleB);

		return 0;
	}

	// const SPK::Vector3D & SPK::SphericEmitter::getDirection() const
	static int _bind_getDirection(lua_State *L) {
		if (!_lg_typecheck_getDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::SphericEmitter::getDirection() const function, expected prototype:\nconst SPK::Vector3D & SPK::SphericEmitter::getDirection() const\nClass arguments details:\n");
		}


		SPK::SphericEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::SphericEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::SphericEmitter::getDirection() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getDirection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::SphericEmitter::getTransformedDirection() const
	static int _bind_getTransformedDirection(lua_State *L) {
		if (!_lg_typecheck_getTransformedDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::SphericEmitter::getTransformedDirection() const function, expected prototype:\nconst SPK::Vector3D & SPK::SphericEmitter::getTransformedDirection() const\nClass arguments details:\n");
		}


		SPK::SphericEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::SphericEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::SphericEmitter::getTransformedDirection() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getTransformedDirection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// float SPK::SphericEmitter::getAngleMin() const
	static int _bind_getAngleMin(lua_State *L) {
		if (!_lg_typecheck_getAngleMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::SphericEmitter::getAngleMin() const function, expected prototype:\nfloat SPK::SphericEmitter::getAngleMin() const\nClass arguments details:\n");
		}


		SPK::SphericEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::SphericEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::SphericEmitter::getAngleMin() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getAngleMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::SphericEmitter::getAngleMax() const
	static int _bind_getAngleMax(lua_State *L) {
		if (!_lg_typecheck_getAngleMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::SphericEmitter::getAngleMax() const function, expected prototype:\nfloat SPK::SphericEmitter::getAngleMax() const\nClass arguments details:\n");
		}


		SPK::SphericEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::SphericEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::SphericEmitter::getAngleMax() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getAngleMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static SPK::SphericEmitter * SPK::SphericEmitter::create(const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f), float angleA = 0.0f, float angleB = 0.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::SphericEmitter * SPK::SphericEmitter::create(const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f), float angleA = 0.0f, float angleB = 0.0f) function, expected prototype:\nstatic SPK::SphericEmitter * SPK::SphericEmitter::create(const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f), float angleA = 0.0f, float angleB = 0.0f)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* direction_ptr=luatop>0 ? (Luna< SPK::Vector3D >::check(L,1)) : NULL;
		if( luatop>0 && !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::SphericEmitter::create function");
		}
		const SPK::Vector3D & direction=luatop>0 ? *direction_ptr : (const SPK::Vector3D&)SPK::Vector3D (0.0f, 0.0f,-1.0f);
		float angleA=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.0f;
		float angleB=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;

		SPK::SphericEmitter * lret = SPK::SphericEmitter::create(direction, angleA, angleB);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::SphericEmitter >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::SphericEmitter::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::SphericEmitter::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::SphericEmitter::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::SphericEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::SphericEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::SphericEmitter::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->SphericEmitter::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::SphericEmitter::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::SphericEmitter::base_getClassName() const function, expected prototype:\nstd::string SPK::SphericEmitter::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::SphericEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::SphericEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::SphericEmitter::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->SphericEmitter::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::SphericEmitter* LunaTraits< SPK::SphericEmitter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_SphericEmitter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::SphericEmitter >::_bind_dtor(SPK::SphericEmitter* obj) {
	delete obj;
}

const char LunaTraits< SPK::SphericEmitter >::className[] = "SphericEmitter";
const char LunaTraits< SPK::SphericEmitter >::fullName[] = "SPK::SphericEmitter";
const char LunaTraits< SPK::SphericEmitter >::moduleName[] = "spark";
const char* LunaTraits< SPK::SphericEmitter >::parents[] = {"spark.Emitter", 0};
const int LunaTraits< SPK::SphericEmitter >::hash = 86908514;
const int LunaTraits< SPK::SphericEmitter >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::SphericEmitter >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_SphericEmitter::_bind_getClassName},
	{"setDirection", &luna_wrapper_SPK_SphericEmitter::_bind_setDirection},
	{"setAngles", &luna_wrapper_SPK_SphericEmitter::_bind_setAngles},
	{"getDirection", &luna_wrapper_SPK_SphericEmitter::_bind_getDirection},
	{"getTransformedDirection", &luna_wrapper_SPK_SphericEmitter::_bind_getTransformedDirection},
	{"getAngleMin", &luna_wrapper_SPK_SphericEmitter::_bind_getAngleMin},
	{"getAngleMax", &luna_wrapper_SPK_SphericEmitter::_bind_getAngleMax},
	{"create", &luna_wrapper_SPK_SphericEmitter::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_SphericEmitter::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_SphericEmitter::_bind_base_getClassName},
	{"fromVoid", &luna_wrapper_SPK_SphericEmitter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_SphericEmitter::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_SphericEmitter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::SphericEmitter >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_SphericEmitter::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_SphericEmitter::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::SphericEmitter >::enumValues[] = {
	{0,0}
};


