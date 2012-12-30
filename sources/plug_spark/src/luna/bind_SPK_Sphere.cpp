#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Sphere.h>

class luna_wrapper_SPK_Sphere {
public:
	typedef Luna< SPK::Sphere > luna_t;

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
		//SPK::Sphere* ptr= dynamic_cast< SPK::Sphere* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Sphere* ptr= luna_caster< SPK::Registerable, SPK::Sphere >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Sphere >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Sphere* ptr= dynamic_cast< SPK::Sphere* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Sphere* ptr= luna_caster< SPK::Transformable, SPK::Sphere >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Sphere >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
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
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
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
	// SPK::Sphere::Sphere(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), float radius = 0.0f)
	static SPK::Sphere* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Sphere::Sphere(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), float radius = 0.0f) function, expected prototype:\nSPK::Sphere::Sphere(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), float radius = 0.0f)\nClass arguments details:\narg 2 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* position_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Sphere::Sphere function");
		}
		const SPK::Vector3D & position=luatop>1 ? *position_ptr : SPK::Vector3D (0.0f, 0.0f, 0.0f);
		float radius=luatop>2 ? (float)lua_tonumber(L,3) : 0.0f;

		return new wrapper_SPK_Sphere(L,NULL, position, radius);
	}


	// Function binds:
	// std::string SPK::Sphere::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Sphere::getClassName() const function, expected prototype:\nstd::string SPK::Sphere::getClassName() const\nClass arguments details:\n");
		}


		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Sphere::getClassName() const");
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Sphere::setRadius(float radius)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Sphere::setRadius(float radius) function, expected prototype:\nvoid SPK::Sphere::setRadius(float radius)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,2);

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Sphere::setRadius(float)");
		}
		self->setRadius(radius);

		return 0;
	}

	// float SPK::Sphere::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Sphere::getRadius() const function, expected prototype:\nfloat SPK::Sphere::getRadius() const\nClass arguments details:\n");
		}


		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Sphere::getRadius() const");
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SPK::Sphere::generatePosition(SPK::Particle & particle, bool full) const
	static int _bind_generatePosition(lua_State *L) {
		if (!_lg_typecheck_generatePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Sphere::generatePosition(SPK::Particle & particle, bool full) const function, expected prototype:\nvoid SPK::Sphere::generatePosition(SPK::Particle & particle, bool full) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Sphere::generatePosition function");
		}
		SPK::Particle & particle=*particle_ptr;
		bool full=(bool)(lua_toboolean(L,3)==1);

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Sphere::generatePosition(SPK::Particle &, bool) const");
		}
		self->generatePosition(particle, full);

		return 0;
	}

	// bool SPK::Sphere::contains(const SPK::Vector3D & point) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Sphere::contains(const SPK::Vector3D & point) const function, expected prototype:\nbool SPK::Sphere::contains(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Sphere::contains function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Sphere::contains(const SPK::Vector3D &) const");
		}
		bool lret = self->contains(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Sphere::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Sphere::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const function, expected prototype:\nbool SPK::Sphere::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::Sphere::intersects function");
		}
		const SPK::Vector3D & v0=*v0_ptr;
		const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::Sphere::intersects function");
		}
		const SPK::Vector3D & v1=*v1_ptr;
		SPK::Vector3D* intersection=(Luna< SPK::Vector3D >::check(L,4));
		SPK::Vector3D* normal=(Luna< SPK::Vector3D >::check(L,5));

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Sphere::intersects(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D *, SPK::Vector3D *) const");
		}
		bool lret = self->intersects(v0, v1, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Sphere::moveAtBorder(SPK::Vector3D & point, bool inside) const
	static int _bind_moveAtBorder(lua_State *L) {
		if (!_lg_typecheck_moveAtBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Sphere::moveAtBorder(SPK::Vector3D & point, bool inside) const function, expected prototype:\nvoid SPK::Sphere::moveAtBorder(SPK::Vector3D & point, bool inside) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Sphere::moveAtBorder function");
		}
		SPK::Vector3D & point=*point_ptr;
		bool inside=(bool)(lua_toboolean(L,3)==1);

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Sphere::moveAtBorder(SPK::Vector3D &, bool) const");
		}
		self->moveAtBorder(point, inside);

		return 0;
	}

	// SPK::Vector3D SPK::Sphere::computeNormal(const SPK::Vector3D & point) const
	static int _bind_computeNormal(lua_State *L) {
		if (!_lg_typecheck_computeNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Sphere::computeNormal(const SPK::Vector3D & point) const function, expected prototype:\nSPK::Vector3D SPK::Sphere::computeNormal(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Sphere::computeNormal function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Sphere::computeNormal(const SPK::Vector3D &) const");
		}
		SPK::Vector3D stack_lret = self->computeNormal(point);
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// static SPK::Sphere * SPK::Sphere::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), float radius = 0.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::Sphere * SPK::Sphere::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), float radius = 0.0f) function, expected prototype:\nstatic SPK::Sphere * SPK::Sphere::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), float radius = 0.0f)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* position_ptr=luatop>0 ? (Luna< SPK::Vector3D >::check(L,1)) : NULL;
		if( luatop>0 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Sphere::create function");
		}
		const SPK::Vector3D & position=luatop>0 ? *position_ptr : SPK::Vector3D (0.0f, 0.0f, 0.0f);
		float radius=luatop>1 ? (float)lua_tonumber(L,2) : 0.0f;

		SPK::Sphere * lret = SPK::Sphere::create(position, radius);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Sphere >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::Sphere::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Sphere::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Sphere::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Sphere::base_findByName(const std::string &)");
		}
		SPK::Registerable * lret = self->Sphere::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::Sphere::base_setPosition(const SPK::Vector3D & v)
	static int _bind_base_setPosition(lua_State *L) {
		if (!_lg_typecheck_base_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Sphere::base_setPosition(const SPK::Vector3D & v) function, expected prototype:\nvoid SPK::Sphere::base_setPosition(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Sphere::base_setPosition function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Sphere::base_setPosition(const SPK::Vector3D &)");
		}
		self->Sphere::setPosition(v);

		return 0;
	}

	// std::string SPK::Sphere::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Sphere::base_getClassName() const function, expected prototype:\nstd::string SPK::Sphere::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Sphere::base_getClassName() const");
		}
		std::string lret = self->Sphere::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Sphere::base_generatePosition(SPK::Particle & particle, bool full) const
	static int _bind_base_generatePosition(lua_State *L) {
		if (!_lg_typecheck_base_generatePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Sphere::base_generatePosition(SPK::Particle & particle, bool full) const function, expected prototype:\nvoid SPK::Sphere::base_generatePosition(SPK::Particle & particle, bool full) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Sphere::base_generatePosition function");
		}
		SPK::Particle & particle=*particle_ptr;
		bool full=(bool)(lua_toboolean(L,3)==1);

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Sphere::base_generatePosition(SPK::Particle &, bool) const");
		}
		self->Sphere::generatePosition(particle, full);

		return 0;
	}

	// bool SPK::Sphere::base_contains(const SPK::Vector3D & point) const
	static int _bind_base_contains(lua_State *L) {
		if (!_lg_typecheck_base_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Sphere::base_contains(const SPK::Vector3D & point) const function, expected prototype:\nbool SPK::Sphere::base_contains(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Sphere::base_contains function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Sphere::base_contains(const SPK::Vector3D &) const");
		}
		bool lret = self->Sphere::contains(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Sphere::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	static int _bind_base_intersects(lua_State *L) {
		if (!_lg_typecheck_base_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Sphere::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const function, expected prototype:\nbool SPK::Sphere::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::Sphere::base_intersects function");
		}
		const SPK::Vector3D & v0=*v0_ptr;
		const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::Sphere::base_intersects function");
		}
		const SPK::Vector3D & v1=*v1_ptr;
		SPK::Vector3D* intersection=(Luna< SPK::Vector3D >::check(L,4));
		SPK::Vector3D* normal=(Luna< SPK::Vector3D >::check(L,5));

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Sphere::base_intersects(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D *, SPK::Vector3D *) const");
		}
		bool lret = self->Sphere::intersects(v0, v1, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Sphere::base_moveAtBorder(SPK::Vector3D & point, bool inside) const
	static int _bind_base_moveAtBorder(lua_State *L) {
		if (!_lg_typecheck_base_moveAtBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Sphere::base_moveAtBorder(SPK::Vector3D & point, bool inside) const function, expected prototype:\nvoid SPK::Sphere::base_moveAtBorder(SPK::Vector3D & point, bool inside) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Sphere::base_moveAtBorder function");
		}
		SPK::Vector3D & point=*point_ptr;
		bool inside=(bool)(lua_toboolean(L,3)==1);

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Sphere::base_moveAtBorder(SPK::Vector3D &, bool) const");
		}
		self->Sphere::moveAtBorder(point, inside);

		return 0;
	}

	// SPK::Vector3D SPK::Sphere::base_computeNormal(const SPK::Vector3D & point) const
	static int _bind_base_computeNormal(lua_State *L) {
		if (!_lg_typecheck_base_computeNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Sphere::base_computeNormal(const SPK::Vector3D & point) const function, expected prototype:\nSPK::Vector3D SPK::Sphere::base_computeNormal(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Sphere::base_computeNormal function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Sphere* self=Luna< SPK::Registerable >::checkSubType< SPK::Sphere >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Sphere::base_computeNormal(const SPK::Vector3D &) const");
		}
		SPK::Vector3D stack_lret = self->Sphere::computeNormal(point);
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

SPK::Sphere* LunaTraits< SPK::Sphere >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Sphere::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Sphere >::_bind_dtor(SPK::Sphere* obj) {
	delete obj;
}

const char LunaTraits< SPK::Sphere >::className[] = "Sphere";
const char LunaTraits< SPK::Sphere >::fullName[] = "SPK::Sphere";
const char LunaTraits< SPK::Sphere >::moduleName[] = "SPK";
const char* LunaTraits< SPK::Sphere >::parents[] = {"SPK.Zone", 0};
const int LunaTraits< SPK::Sphere >::hash = 81919018;
const int LunaTraits< SPK::Sphere >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::Sphere >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_Sphere::_bind_getClassName},
	{"setRadius", &luna_wrapper_SPK_Sphere::_bind_setRadius},
	{"getRadius", &luna_wrapper_SPK_Sphere::_bind_getRadius},
	{"generatePosition", &luna_wrapper_SPK_Sphere::_bind_generatePosition},
	{"contains", &luna_wrapper_SPK_Sphere::_bind_contains},
	{"intersects", &luna_wrapper_SPK_Sphere::_bind_intersects},
	{"moveAtBorder", &luna_wrapper_SPK_Sphere::_bind_moveAtBorder},
	{"computeNormal", &luna_wrapper_SPK_Sphere::_bind_computeNormal},
	{"create", &luna_wrapper_SPK_Sphere::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_Sphere::_bind_base_findByName},
	{"base_setPosition", &luna_wrapper_SPK_Sphere::_bind_base_setPosition},
	{"base_getClassName", &luna_wrapper_SPK_Sphere::_bind_base_getClassName},
	{"base_generatePosition", &luna_wrapper_SPK_Sphere::_bind_base_generatePosition},
	{"base_contains", &luna_wrapper_SPK_Sphere::_bind_base_contains},
	{"base_intersects", &luna_wrapper_SPK_Sphere::_bind_base_intersects},
	{"base_moveAtBorder", &luna_wrapper_SPK_Sphere::_bind_base_moveAtBorder},
	{"base_computeNormal", &luna_wrapper_SPK_Sphere::_bind_base_computeNormal},
	{"__eq", &luna_wrapper_SPK_Sphere::_bind___eq},
	{"getTable", &luna_wrapper_SPK_Sphere::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Sphere >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Sphere::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Sphere::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Sphere >::enumValues[] = {
	{0,0}
};

