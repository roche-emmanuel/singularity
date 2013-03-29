#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Ring.h>

class luna_wrapper_SPK_Ring {
public:
	typedef Luna< SPK::Ring > luna_t;

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

		SPK::Ring* self= (SPK::Ring*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Ring >::push(L,self,false);
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
		//SPK::Ring* ptr= dynamic_cast< SPK::Ring* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Ring* ptr= luna_caster< SPK::Registerable, SPK::Ring >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Ring >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Ring* ptr= dynamic_cast< SPK::Ring* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Ring* ptr= luna_caster< SPK::Transformable, SPK::Ring >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Ring >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransformedNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_generatePosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersects(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,70092749)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,70092749)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveAtBorder(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_generatePosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_intersects(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,70092749)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,70092749)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_moveAtBorder(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::Ring::Ring(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & normal = SPK::Vector3D (0.0f, 1.0f, 0.0f), float minRadius = 0.0f, float maxRadius = 1.0f)
	static SPK::Ring* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Ring::Ring(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & normal = SPK::Vector3D (0.0f, 1.0f, 0.0f), float minRadius = 0.0f, float maxRadius = 1.0f) function, expected prototype:\nSPK::Ring::Ring(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & normal = SPK::Vector3D (0.0f, 1.0f, 0.0f), float minRadius = 0.0f, float maxRadius = 1.0f)\nClass arguments details:\narg 2 ID = 70092749\narg 3 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* position_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Ring::Ring function");
		}
		const SPK::Vector3D & position=luatop>1 ? *position_ptr : (const SPK::Vector3D)SPK::Vector3D (0.0f, 0.0f, 0.0f);
		const SPK::Vector3D* normal_ptr=luatop>2 ? (Luna< SPK::Vector3D >::check(L,3)) : NULL;
		if( luatop>2 && !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in SPK::Ring::Ring function");
		}
		const SPK::Vector3D & normal=luatop>2 ? *normal_ptr : (const SPK::Vector3D)SPK::Vector3D (0.0f, 1.0f, 0.0f);
		float minRadius=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;
		float maxRadius=luatop>4 ? (float)lua_tonumber(L,5) : (float)1.0f;

		return new wrapper_SPK_Ring(L,NULL, position, normal, minRadius, maxRadius);
	}


	// Function binds:
	// std::string SPK::Ring::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Ring::getClassName() const function, expected prototype:\nstd::string SPK::Ring::getClassName() const\nClass arguments details:\n");
		}


		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Ring::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Ring::setNormal(const SPK::Vector3D & normal)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Ring::setNormal(const SPK::Vector3D & normal) function, expected prototype:\nvoid SPK::Ring::setNormal(const SPK::Vector3D & normal)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* normal_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in SPK::Ring::setNormal function");
		}
		const SPK::Vector3D & normal=*normal_ptr;

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Ring::setNormal(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setNormal(normal);

		return 0;
	}

	// void SPK::Ring::setRadius(float minRadius, float maxRadius)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Ring::setRadius(float minRadius, float maxRadius) function, expected prototype:\nvoid SPK::Ring::setRadius(float minRadius, float maxRadius)\nClass arguments details:\n");
		}

		float minRadius=(float)lua_tonumber(L,2);
		float maxRadius=(float)lua_tonumber(L,3);

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Ring::setRadius(float, float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setRadius(minRadius, maxRadius);

		return 0;
	}

	// const SPK::Vector3D & SPK::Ring::getNormal() const
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Ring::getNormal() const function, expected prototype:\nconst SPK::Vector3D & SPK::Ring::getNormal() const\nClass arguments details:\n");
		}


		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Ring::getNormal() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Ring::getTransformedNormal() const
	static int _bind_getTransformedNormal(lua_State *L) {
		if (!_lg_typecheck_getTransformedNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Ring::getTransformedNormal() const function, expected prototype:\nconst SPK::Vector3D & SPK::Ring::getTransformedNormal() const\nClass arguments details:\n");
		}


		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Ring::getTransformedNormal() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getTransformedNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// float SPK::Ring::getMinRadius() const
	static int _bind_getMinRadius(lua_State *L) {
		if (!_lg_typecheck_getMinRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Ring::getMinRadius() const function, expected prototype:\nfloat SPK::Ring::getMinRadius() const\nClass arguments details:\n");
		}


		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Ring::getMinRadius() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getMinRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Ring::getMaxRadius() const
	static int _bind_getMaxRadius(lua_State *L) {
		if (!_lg_typecheck_getMaxRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Ring::getMaxRadius() const function, expected prototype:\nfloat SPK::Ring::getMaxRadius() const\nClass arguments details:\n");
		}


		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Ring::getMaxRadius() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getMaxRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SPK::Ring::generatePosition(SPK::Particle & particle, bool full) const
	static int _bind_generatePosition(lua_State *L) {
		if (!_lg_typecheck_generatePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Ring::generatePosition(SPK::Particle & particle, bool full) const function, expected prototype:\nvoid SPK::Ring::generatePosition(SPK::Particle & particle, bool full) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Ring::generatePosition function");
		}
		SPK::Particle & particle=*particle_ptr;
		bool full=(bool)(lua_toboolean(L,3)==1);

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Ring::generatePosition(SPK::Particle &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->generatePosition(particle, full);

		return 0;
	}

	// bool SPK::Ring::contains(const SPK::Vector3D & point) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Ring::contains(const SPK::Vector3D & point) const function, expected prototype:\nbool SPK::Ring::contains(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Ring::contains function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Ring::contains(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->contains(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Ring::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Ring::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const function, expected prototype:\nbool SPK::Ring::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::Ring::intersects function");
		}
		const SPK::Vector3D & v0=*v0_ptr;
		const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::Ring::intersects function");
		}
		const SPK::Vector3D & v1=*v1_ptr;
		SPK::Vector3D* intersection=(Luna< SPK::Vector3D >::check(L,4));
		SPK::Vector3D* normal=(Luna< SPK::Vector3D >::check(L,5));

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Ring::intersects(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D *, SPK::Vector3D *) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->intersects(v0, v1, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Ring::moveAtBorder(SPK::Vector3D & point, bool inside) const
	static int _bind_moveAtBorder(lua_State *L) {
		if (!_lg_typecheck_moveAtBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Ring::moveAtBorder(SPK::Vector3D & point, bool inside) const function, expected prototype:\nvoid SPK::Ring::moveAtBorder(SPK::Vector3D & point, bool inside) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Ring::moveAtBorder function");
		}
		SPK::Vector3D & point=*point_ptr;
		bool inside=(bool)(lua_toboolean(L,3)==1);

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Ring::moveAtBorder(SPK::Vector3D &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->moveAtBorder(point, inside);

		return 0;
	}

	// SPK::Vector3D SPK::Ring::computeNormal(const SPK::Vector3D & point) const
	static int _bind_computeNormal(lua_State *L) {
		if (!_lg_typecheck_computeNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Ring::computeNormal(const SPK::Vector3D & point) const function, expected prototype:\nSPK::Vector3D SPK::Ring::computeNormal(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Ring::computeNormal function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Ring::computeNormal(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Vector3D stack_lret = self->computeNormal(point);
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// static SPK::Ring * SPK::Ring::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & normal = SPK::Vector3D (0.0f, 1.0f, 0.0f), float minRadius = 0.0f, float maxRadius = 1.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::Ring * SPK::Ring::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & normal = SPK::Vector3D (0.0f, 1.0f, 0.0f), float minRadius = 0.0f, float maxRadius = 1.0f) function, expected prototype:\nstatic SPK::Ring * SPK::Ring::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & normal = SPK::Vector3D (0.0f, 1.0f, 0.0f), float minRadius = 0.0f, float maxRadius = 1.0f)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* position_ptr=luatop>0 ? (Luna< SPK::Vector3D >::check(L,1)) : NULL;
		if( luatop>0 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Ring::create function");
		}
		const SPK::Vector3D & position=luatop>0 ? *position_ptr : (const SPK::Vector3D)SPK::Vector3D (0.0f, 0.0f, 0.0f);
		const SPK::Vector3D* normal_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in SPK::Ring::create function");
		}
		const SPK::Vector3D & normal=luatop>1 ? *normal_ptr : (const SPK::Vector3D)SPK::Vector3D (0.0f, 1.0f, 0.0f);
		float minRadius=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;
		float maxRadius=luatop>3 ? (float)lua_tonumber(L,4) : (float)1.0f;

		SPK::Ring * lret = SPK::Ring::create(position, normal, minRadius, maxRadius);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Ring >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::Ring::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Ring::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Ring::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Ring::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->Ring::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::Ring::base_setPosition(const SPK::Vector3D & v)
	static int _bind_base_setPosition(lua_State *L) {
		if (!_lg_typecheck_base_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Ring::base_setPosition(const SPK::Vector3D & v) function, expected prototype:\nvoid SPK::Ring::base_setPosition(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Ring::base_setPosition function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Ring::base_setPosition(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Ring::setPosition(v);

		return 0;
	}

	// std::string SPK::Ring::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Ring::base_getClassName() const function, expected prototype:\nstd::string SPK::Ring::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Ring::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->Ring::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Ring::base_generatePosition(SPK::Particle & particle, bool full) const
	static int _bind_base_generatePosition(lua_State *L) {
		if (!_lg_typecheck_base_generatePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Ring::base_generatePosition(SPK::Particle & particle, bool full) const function, expected prototype:\nvoid SPK::Ring::base_generatePosition(SPK::Particle & particle, bool full) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Ring::base_generatePosition function");
		}
		SPK::Particle & particle=*particle_ptr;
		bool full=(bool)(lua_toboolean(L,3)==1);

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Ring::base_generatePosition(SPK::Particle &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Ring::generatePosition(particle, full);

		return 0;
	}

	// bool SPK::Ring::base_contains(const SPK::Vector3D & point) const
	static int _bind_base_contains(lua_State *L) {
		if (!_lg_typecheck_base_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Ring::base_contains(const SPK::Vector3D & point) const function, expected prototype:\nbool SPK::Ring::base_contains(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Ring::base_contains function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Ring::base_contains(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->Ring::contains(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Ring::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	static int _bind_base_intersects(lua_State *L) {
		if (!_lg_typecheck_base_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Ring::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const function, expected prototype:\nbool SPK::Ring::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::Ring::base_intersects function");
		}
		const SPK::Vector3D & v0=*v0_ptr;
		const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::Ring::base_intersects function");
		}
		const SPK::Vector3D & v1=*v1_ptr;
		SPK::Vector3D* intersection=(Luna< SPK::Vector3D >::check(L,4));
		SPK::Vector3D* normal=(Luna< SPK::Vector3D >::check(L,5));

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Ring::base_intersects(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D *, SPK::Vector3D *) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->Ring::intersects(v0, v1, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Ring::base_moveAtBorder(SPK::Vector3D & point, bool inside) const
	static int _bind_base_moveAtBorder(lua_State *L) {
		if (!_lg_typecheck_base_moveAtBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Ring::base_moveAtBorder(SPK::Vector3D & point, bool inside) const function, expected prototype:\nvoid SPK::Ring::base_moveAtBorder(SPK::Vector3D & point, bool inside) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Ring::base_moveAtBorder function");
		}
		SPK::Vector3D & point=*point_ptr;
		bool inside=(bool)(lua_toboolean(L,3)==1);

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Ring::base_moveAtBorder(SPK::Vector3D &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Ring::moveAtBorder(point, inside);

		return 0;
	}

	// SPK::Vector3D SPK::Ring::base_computeNormal(const SPK::Vector3D & point) const
	static int _bind_base_computeNormal(lua_State *L) {
		if (!_lg_typecheck_base_computeNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Ring::base_computeNormal(const SPK::Vector3D & point) const function, expected prototype:\nSPK::Vector3D SPK::Ring::base_computeNormal(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Ring::base_computeNormal function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Ring* self=Luna< SPK::Registerable >::checkSubType< SPK::Ring >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Ring::base_computeNormal(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Vector3D stack_lret = self->Ring::computeNormal(point);
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

SPK::Ring* LunaTraits< SPK::Ring >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Ring::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Ring >::_bind_dtor(SPK::Ring* obj) {
	delete obj;
}

const char LunaTraits< SPK::Ring >::className[] = "Ring";
const char LunaTraits< SPK::Ring >::fullName[] = "SPK::Ring";
const char LunaTraits< SPK::Ring >::moduleName[] = "spark";
const char* LunaTraits< SPK::Ring >::parents[] = {"spark.Zone", 0};
const int LunaTraits< SPK::Ring >::hash = 40215407;
const int LunaTraits< SPK::Ring >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::Ring >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_Ring::_bind_getClassName},
	{"setNormal", &luna_wrapper_SPK_Ring::_bind_setNormal},
	{"setRadius", &luna_wrapper_SPK_Ring::_bind_setRadius},
	{"getNormal", &luna_wrapper_SPK_Ring::_bind_getNormal},
	{"getTransformedNormal", &luna_wrapper_SPK_Ring::_bind_getTransformedNormal},
	{"getMinRadius", &luna_wrapper_SPK_Ring::_bind_getMinRadius},
	{"getMaxRadius", &luna_wrapper_SPK_Ring::_bind_getMaxRadius},
	{"generatePosition", &luna_wrapper_SPK_Ring::_bind_generatePosition},
	{"contains", &luna_wrapper_SPK_Ring::_bind_contains},
	{"intersects", &luna_wrapper_SPK_Ring::_bind_intersects},
	{"moveAtBorder", &luna_wrapper_SPK_Ring::_bind_moveAtBorder},
	{"computeNormal", &luna_wrapper_SPK_Ring::_bind_computeNormal},
	{"create", &luna_wrapper_SPK_Ring::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_Ring::_bind_base_findByName},
	{"base_setPosition", &luna_wrapper_SPK_Ring::_bind_base_setPosition},
	{"base_getClassName", &luna_wrapper_SPK_Ring::_bind_base_getClassName},
	{"base_generatePosition", &luna_wrapper_SPK_Ring::_bind_base_generatePosition},
	{"base_contains", &luna_wrapper_SPK_Ring::_bind_base_contains},
	{"base_intersects", &luna_wrapper_SPK_Ring::_bind_base_intersects},
	{"base_moveAtBorder", &luna_wrapper_SPK_Ring::_bind_base_moveAtBorder},
	{"base_computeNormal", &luna_wrapper_SPK_Ring::_bind_base_computeNormal},
	{"__eq", &luna_wrapper_SPK_Ring::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_Ring::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Ring::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_Ring::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Ring >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Ring::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Ring::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Ring >::enumValues[] = {
	{0,0}
};


