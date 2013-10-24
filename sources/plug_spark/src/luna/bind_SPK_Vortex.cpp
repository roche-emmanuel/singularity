#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Vortex.h>

class luna_wrapper_SPK_Vortex {
public:
	typedef Luna< SPK::Vortex > luna_t;

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

		SPK::Vortex* self= (SPK::Vortex*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Vortex >::push(L,self,false);
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
		//SPK::Vortex* ptr= dynamic_cast< SPK::Vortex* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Vortex* ptr= luna_caster< SPK::Registerable, SPK::Vortex >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Vortex >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Vortex* ptr= dynamic_cast< SPK::Vortex* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Vortex* ptr= luna_caster< SPK::Transformable, SPK::Vortex >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Vortex >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Vortex* ptr= dynamic_cast< SPK::Vortex* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::Vortex* ptr= luna_caster< SPK::BufferHandler, SPK::Vortex >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Vortex >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
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

	inline static bool _lg_typecheck_setDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRotationSpeed(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAttractionSpeed(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEyeRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableParticleKilling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransformedPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransformedDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRotationSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAttractionSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRotationSpeedAngular(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isAttractionSpeedLinear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEyeRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isParticleKillingEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
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
	// SPK::Vortex::Vortex(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float rotationSpeed = 1.0f, float attractionSpeed = 0.0f)
	static SPK::Vortex* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Vortex::Vortex(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float rotationSpeed = 1.0f, float attractionSpeed = 0.0f) function, expected prototype:\nSPK::Vortex::Vortex(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float rotationSpeed = 1.0f, float attractionSpeed = 0.0f)\nClass arguments details:\narg 2 ID = 70092749\narg 3 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* position_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Vortex::Vortex function");
		}
		const SPK::Vector3D & position=luatop>1 ? *position_ptr : (const SPK::Vector3D&)SPK::Vector3D ();
		const SPK::Vector3D* direction_ptr=luatop>2 ? (Luna< SPK::Vector3D >::check(L,3)) : NULL;
		if( luatop>2 && !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::Vortex::Vortex function");
		}
		const SPK::Vector3D & direction=luatop>2 ? *direction_ptr : (const SPK::Vector3D&)SPK::Vector3D (0.0f, 1.0f, 0.0f);
		float rotationSpeed=luatop>3 ? (float)lua_tonumber(L,4) : (float)1.0f;
		float attractionSpeed=luatop>4 ? (float)lua_tonumber(L,5) : (float)0.0f;

		return new wrapper_SPK_Vortex(L,NULL, position, direction, rotationSpeed, attractionSpeed);
	}


	// Function binds:
	// std::string SPK::Vortex::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::Vortex::getClassName() const function, expected prototype:\nstd::string SPK::Vortex::getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::Vortex::getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Vortex::setPosition(const SPK::Vector3D & position)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Vortex::setPosition(const SPK::Vector3D & position) function, expected prototype:\nvoid SPK::Vortex::setPosition(const SPK::Vector3D & position)\nClass arguments details:\narg 1 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Vector3D* position_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Vortex::setPosition function");
		}
		const SPK::Vector3D & position=*position_ptr;

		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Vortex::setPosition(const SPK::Vector3D &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(position);

		return 0;
	}

	// void SPK::Vortex::setDirection(const SPK::Vector3D & direction)
	static int _bind_setDirection(lua_State *L) {
		if (!_lg_typecheck_setDirection(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Vortex::setDirection(const SPK::Vector3D & direction) function, expected prototype:\nvoid SPK::Vortex::setDirection(const SPK::Vector3D & direction)\nClass arguments details:\narg 1 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Vector3D* direction_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::Vortex::setDirection function");
		}
		const SPK::Vector3D & direction=*direction_ptr;

		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Vortex::setDirection(const SPK::Vector3D &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDirection(direction);

		return 0;
	}

	// void SPK::Vortex::setRotationSpeed(float rotationSpeed, bool angular)
	static int _bind_setRotationSpeed(lua_State *L) {
		if (!_lg_typecheck_setRotationSpeed(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Vortex::setRotationSpeed(float rotationSpeed, bool angular) function, expected prototype:\nvoid SPK::Vortex::setRotationSpeed(float rotationSpeed, bool angular)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rotationSpeed=(float)lua_tonumber(L,2);
		bool angular=(bool)(lua_toboolean(L,3)==1);

		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Vortex::setRotationSpeed(float, bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRotationSpeed(rotationSpeed, angular);

		return 0;
	}

	// void SPK::Vortex::setAttractionSpeed(float attractionSpeed, bool linear)
	static int _bind_setAttractionSpeed(lua_State *L) {
		if (!_lg_typecheck_setAttractionSpeed(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Vortex::setAttractionSpeed(float attractionSpeed, bool linear) function, expected prototype:\nvoid SPK::Vortex::setAttractionSpeed(float attractionSpeed, bool linear)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float attractionSpeed=(float)lua_tonumber(L,2);
		bool linear=(bool)(lua_toboolean(L,3)==1);

		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Vortex::setAttractionSpeed(float, bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAttractionSpeed(attractionSpeed, linear);

		return 0;
	}

	// void SPK::Vortex::setEyeRadius(float eyeRadius)
	static int _bind_setEyeRadius(lua_State *L) {
		if (!_lg_typecheck_setEyeRadius(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Vortex::setEyeRadius(float eyeRadius) function, expected prototype:\nvoid SPK::Vortex::setEyeRadius(float eyeRadius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float eyeRadius=(float)lua_tonumber(L,2);

		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Vortex::setEyeRadius(float). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEyeRadius(eyeRadius);

		return 0;
	}

	// void SPK::Vortex::enableParticleKilling(bool kill)
	static int _bind_enableParticleKilling(lua_State *L) {
		if (!_lg_typecheck_enableParticleKilling(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Vortex::enableParticleKilling(bool kill) function, expected prototype:\nvoid SPK::Vortex::enableParticleKilling(bool kill)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool kill=(bool)(lua_toboolean(L,2)==1);

		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Vortex::enableParticleKilling(bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->enableParticleKilling(kill);

		return 0;
	}

	// const SPK::Vector3D & SPK::Vortex::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Vortex::getPosition() const function, expected prototype:\nconst SPK::Vector3D & SPK::Vortex::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Vortex::getPosition() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SPK::Vector3D* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Vortex::getDirection() const
	static int _bind_getDirection(lua_State *L) {
		if (!_lg_typecheck_getDirection(L)) {
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Vortex::getDirection() const function, expected prototype:\nconst SPK::Vector3D & SPK::Vortex::getDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Vortex::getDirection() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SPK::Vector3D* lret = &self->getDirection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Vortex::getTransformedPosition() const
	static int _bind_getTransformedPosition(lua_State *L) {
		if (!_lg_typecheck_getTransformedPosition(L)) {
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Vortex::getTransformedPosition() const function, expected prototype:\nconst SPK::Vector3D & SPK::Vortex::getTransformedPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Vortex::getTransformedPosition() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SPK::Vector3D* lret = &self->getTransformedPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Vortex::getTransformedDirection() const
	static int _bind_getTransformedDirection(lua_State *L) {
		if (!_lg_typecheck_getTransformedDirection(L)) {
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Vortex::getTransformedDirection() const function, expected prototype:\nconst SPK::Vector3D & SPK::Vortex::getTransformedDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Vortex::getTransformedDirection() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SPK::Vector3D* lret = &self->getTransformedDirection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// float SPK::Vortex::getRotationSpeed() const
	static int _bind_getRotationSpeed(lua_State *L) {
		if (!_lg_typecheck_getRotationSpeed(L)) {
			luaL_error(L, "luna typecheck failed in float SPK::Vortex::getRotationSpeed() const function, expected prototype:\nfloat SPK::Vortex::getRotationSpeed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float SPK::Vortex::getRotationSpeed() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRotationSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Vortex::getAttractionSpeed() const
	static int _bind_getAttractionSpeed(lua_State *L) {
		if (!_lg_typecheck_getAttractionSpeed(L)) {
			luaL_error(L, "luna typecheck failed in float SPK::Vortex::getAttractionSpeed() const function, expected prototype:\nfloat SPK::Vortex::getAttractionSpeed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float SPK::Vortex::getAttractionSpeed() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getAttractionSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Vortex::isRotationSpeedAngular() const
	static int _bind_isRotationSpeedAngular(lua_State *L) {
		if (!_lg_typecheck_isRotationSpeedAngular(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::Vortex::isRotationSpeedAngular() const function, expected prototype:\nbool SPK::Vortex::isRotationSpeedAngular() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::Vortex::isRotationSpeedAngular() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isRotationSpeedAngular();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Vortex::isAttractionSpeedLinear() const
	static int _bind_isAttractionSpeedLinear(lua_State *L) {
		if (!_lg_typecheck_isAttractionSpeedLinear(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::Vortex::isAttractionSpeedLinear() const function, expected prototype:\nbool SPK::Vortex::isAttractionSpeedLinear() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::Vortex::isAttractionSpeedLinear() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isAttractionSpeedLinear();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float SPK::Vortex::getEyeRadius() const
	static int _bind_getEyeRadius(lua_State *L) {
		if (!_lg_typecheck_getEyeRadius(L)) {
			luaL_error(L, "luna typecheck failed in float SPK::Vortex::getEyeRadius() const function, expected prototype:\nfloat SPK::Vortex::getEyeRadius() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float SPK::Vortex::getEyeRadius() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getEyeRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Vortex::isParticleKillingEnabled() const
	static int _bind_isParticleKillingEnabled(lua_State *L) {
		if (!_lg_typecheck_isParticleKillingEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::Vortex::isParticleKillingEnabled() const function, expected prototype:\nbool SPK::Vortex::isParticleKillingEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::Vortex::isParticleKillingEnabled() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isParticleKillingEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static SPK::Vortex * SPK::Vortex::create(const SPK::Vector3D & position = SPK::Vector3D (), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float rotationSpeed = 1.0f, float attractionSpeed = 0.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luaL_error(L, "luna typecheck failed in static SPK::Vortex * SPK::Vortex::create(const SPK::Vector3D & position = SPK::Vector3D (), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float rotationSpeed = 1.0f, float attractionSpeed = 0.0f) function, expected prototype:\nstatic SPK::Vortex * SPK::Vortex::create(const SPK::Vector3D & position = SPK::Vector3D (), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float rotationSpeed = 1.0f, float attractionSpeed = 0.0f)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* position_ptr=luatop>0 ? (Luna< SPK::Vector3D >::check(L,1)) : NULL;
		if( luatop>0 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Vortex::create function");
		}
		const SPK::Vector3D & position=luatop>0 ? *position_ptr : (const SPK::Vector3D&)SPK::Vector3D ();
		const SPK::Vector3D* direction_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::Vortex::create function");
		}
		const SPK::Vector3D & direction=luatop>1 ? *direction_ptr : (const SPK::Vector3D&)SPK::Vector3D (0.0f, 1.0f, 0.0f);
		float rotationSpeed=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;
		float attractionSpeed=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;

		SPK::Vortex * lret = SPK::Vortex::create(position, direction, rotationSpeed, attractionSpeed);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vortex >::push(L,lret,false);

		return 1;
	}

	// void SPK::Vortex::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Vortex::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Vortex::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Vortex::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Vortex::base_createBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vortex::createBuffers(group);

		return 0;
	}

	// void SPK::Vortex::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Vortex::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Vortex::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Vortex::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Vortex::base_destroyBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vortex::destroyBuffers(group);

		return 0;
	}

	// SPK::Registerable * SPK::Vortex::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Vortex::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Vortex::base_findByName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Vortex::base_findByName(const std::string &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Registerable * lret = self->Vortex::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::Vortex::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::Vortex::base_getClassName() const function, expected prototype:\nstd::string SPK::Vortex::base_getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::Vortex* self=Luna< SPK::Registerable >::checkSubType< SPK::Vortex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::Vortex::base_getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->Vortex::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::Vortex* LunaTraits< SPK::Vortex >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Vortex::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Vortex >::_bind_dtor(SPK::Vortex* obj) {
	delete obj;
}

const char LunaTraits< SPK::Vortex >::className[] = "Vortex";
const char LunaTraits< SPK::Vortex >::fullName[] = "SPK::Vortex";
const char LunaTraits< SPK::Vortex >::moduleName[] = "spark";
const char* LunaTraits< SPK::Vortex >::parents[] = {"spark.Modifier", 0};
const int LunaTraits< SPK::Vortex >::hash = 67194880;
const int LunaTraits< SPK::Vortex >::uniqueIDs[] = {31337102, 41560017, 81662222,0};

luna_RegType LunaTraits< SPK::Vortex >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_Vortex::_bind_getClassName},
	{"setPosition", &luna_wrapper_SPK_Vortex::_bind_setPosition},
	{"setDirection", &luna_wrapper_SPK_Vortex::_bind_setDirection},
	{"setRotationSpeed", &luna_wrapper_SPK_Vortex::_bind_setRotationSpeed},
	{"setAttractionSpeed", &luna_wrapper_SPK_Vortex::_bind_setAttractionSpeed},
	{"setEyeRadius", &luna_wrapper_SPK_Vortex::_bind_setEyeRadius},
	{"enableParticleKilling", &luna_wrapper_SPK_Vortex::_bind_enableParticleKilling},
	{"getPosition", &luna_wrapper_SPK_Vortex::_bind_getPosition},
	{"getDirection", &luna_wrapper_SPK_Vortex::_bind_getDirection},
	{"getTransformedPosition", &luna_wrapper_SPK_Vortex::_bind_getTransformedPosition},
	{"getTransformedDirection", &luna_wrapper_SPK_Vortex::_bind_getTransformedDirection},
	{"getRotationSpeed", &luna_wrapper_SPK_Vortex::_bind_getRotationSpeed},
	{"getAttractionSpeed", &luna_wrapper_SPK_Vortex::_bind_getAttractionSpeed},
	{"isRotationSpeedAngular", &luna_wrapper_SPK_Vortex::_bind_isRotationSpeedAngular},
	{"isAttractionSpeedLinear", &luna_wrapper_SPK_Vortex::_bind_isAttractionSpeedLinear},
	{"getEyeRadius", &luna_wrapper_SPK_Vortex::_bind_getEyeRadius},
	{"isParticleKillingEnabled", &luna_wrapper_SPK_Vortex::_bind_isParticleKillingEnabled},
	{"create", &luna_wrapper_SPK_Vortex::_bind_create},
	{"base_createBuffers", &luna_wrapper_SPK_Vortex::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_Vortex::_bind_base_destroyBuffers},
	{"base_findByName", &luna_wrapper_SPK_Vortex::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_Vortex::_bind_base_getClassName},
	{"fromVoid", &luna_wrapper_SPK_Vortex::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Vortex::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_Vortex::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Vortex >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Vortex::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Vortex::_cast_from_Transformable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_Vortex::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Vortex >::enumValues[] = {
	{0,0}
};


