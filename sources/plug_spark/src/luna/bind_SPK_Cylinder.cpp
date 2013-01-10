#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Cylinder.h>

class luna_wrapper_SPK_Cylinder {
public:
	typedef Luna< SPK::Cylinder > luna_t;

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

	// Derived class converters:
	static int _cast_from_Registerable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Cylinder* ptr= dynamic_cast< SPK::Cylinder* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Cylinder* ptr= luna_caster< SPK::Registerable, SPK::Cylinder >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Cylinder >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Cylinder* ptr= dynamic_cast< SPK::Cylinder* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Cylinder* ptr= luna_caster< SPK::Transformable, SPK::Cylinder >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Cylinder >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLength(lua_State *L) {
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
	// SPK::Cylinder::Cylinder(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float radius = 1.0f, float length = 1.0f)
	static SPK::Cylinder* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Cylinder::Cylinder(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float radius = 1.0f, float length = 1.0f) function, expected prototype:\nSPK::Cylinder::Cylinder(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float radius = 1.0f, float length = 1.0f)\nClass arguments details:\narg 2 ID = 70092749\narg 3 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* position_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Cylinder::Cylinder function");
		}
		const SPK::Vector3D & position=luatop>1 ? *position_ptr : SPK::Vector3D (0.0f, 0.0f, 0.0f);
		const SPK::Vector3D* direction_ptr=luatop>2 ? (Luna< SPK::Vector3D >::check(L,3)) : NULL;
		if( luatop>2 && !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::Cylinder::Cylinder function");
		}
		const SPK::Vector3D & direction=luatop>2 ? *direction_ptr : SPK::Vector3D (0.0f, 1.0f, 0.0f);
		float radius=luatop>3 ? (float)lua_tonumber(L,4) : 1.0f;
		float length=luatop>4 ? (float)lua_tonumber(L,5) : 1.0f;

		return new wrapper_SPK_Cylinder(L,NULL, position, direction, radius, length);
	}


	// Function binds:
	// std::string SPK::Cylinder::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Cylinder::getClassName() const function, expected prototype:\nstd::string SPK::Cylinder::getClassName() const\nClass arguments details:\n");
		}


		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Cylinder::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Cylinder::setDirection(const SPK::Vector3D & direction)
	static int _bind_setDirection(lua_State *L) {
		if (!_lg_typecheck_setDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Cylinder::setDirection(const SPK::Vector3D & direction) function, expected prototype:\nvoid SPK::Cylinder::setDirection(const SPK::Vector3D & direction)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* direction_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::Cylinder::setDirection function");
		}
		const SPK::Vector3D & direction=*direction_ptr;

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Cylinder::setDirection(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setDirection(direction);

		return 0;
	}

	// void SPK::Cylinder::setRadius(float radius)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Cylinder::setRadius(float radius) function, expected prototype:\nvoid SPK::Cylinder::setRadius(float radius)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,2);

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Cylinder::setRadius(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setRadius(radius);

		return 0;
	}

	// void SPK::Cylinder::setLength(float length)
	static int _bind_setLength(lua_State *L) {
		if (!_lg_typecheck_setLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Cylinder::setLength(float length) function, expected prototype:\nvoid SPK::Cylinder::setLength(float length)\nClass arguments details:\n");
		}

		float length=(float)lua_tonumber(L,2);

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Cylinder::setLength(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setLength(length);

		return 0;
	}

	// const SPK::Vector3D & SPK::Cylinder::getDirection() const
	static int _bind_getDirection(lua_State *L) {
		if (!_lg_typecheck_getDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Cylinder::getDirection() const function, expected prototype:\nconst SPK::Vector3D & SPK::Cylinder::getDirection() const\nClass arguments details:\n");
		}


		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Cylinder::getDirection() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getDirection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Cylinder::getTransformedDirection() const
	static int _bind_getTransformedDirection(lua_State *L) {
		if (!_lg_typecheck_getTransformedDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Cylinder::getTransformedDirection() const function, expected prototype:\nconst SPK::Vector3D & SPK::Cylinder::getTransformedDirection() const\nClass arguments details:\n");
		}


		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Cylinder::getTransformedDirection() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getTransformedDirection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// float SPK::Cylinder::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Cylinder::getRadius() const function, expected prototype:\nfloat SPK::Cylinder::getRadius() const\nClass arguments details:\n");
		}


		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Cylinder::getRadius() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Cylinder::getLength() const
	static int _bind_getLength(lua_State *L) {
		if (!_lg_typecheck_getLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Cylinder::getLength() const function, expected prototype:\nfloat SPK::Cylinder::getLength() const\nClass arguments details:\n");
		}


		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Cylinder::getLength() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SPK::Cylinder::generatePosition(SPK::Particle & particle, bool full) const
	static int _bind_generatePosition(lua_State *L) {
		if (!_lg_typecheck_generatePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Cylinder::generatePosition(SPK::Particle & particle, bool full) const function, expected prototype:\nvoid SPK::Cylinder::generatePosition(SPK::Particle & particle, bool full) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Cylinder::generatePosition function");
		}
		SPK::Particle & particle=*particle_ptr;
		bool full=(bool)(lua_toboolean(L,3)==1);

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Cylinder::generatePosition(SPK::Particle &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->generatePosition(particle, full);

		return 0;
	}

	// bool SPK::Cylinder::contains(const SPK::Vector3D & point) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Cylinder::contains(const SPK::Vector3D & point) const function, expected prototype:\nbool SPK::Cylinder::contains(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Cylinder::contains function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Cylinder::contains(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->contains(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Cylinder::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Cylinder::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const function, expected prototype:\nbool SPK::Cylinder::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::Cylinder::intersects function");
		}
		const SPK::Vector3D & v0=*v0_ptr;
		const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::Cylinder::intersects function");
		}
		const SPK::Vector3D & v1=*v1_ptr;
		SPK::Vector3D* intersection=(Luna< SPK::Vector3D >::check(L,4));
		SPK::Vector3D* normal=(Luna< SPK::Vector3D >::check(L,5));

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Cylinder::intersects(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D *, SPK::Vector3D *) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->intersects(v0, v1, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Cylinder::moveAtBorder(SPK::Vector3D & point, bool inside) const
	static int _bind_moveAtBorder(lua_State *L) {
		if (!_lg_typecheck_moveAtBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Cylinder::moveAtBorder(SPK::Vector3D & point, bool inside) const function, expected prototype:\nvoid SPK::Cylinder::moveAtBorder(SPK::Vector3D & point, bool inside) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Cylinder::moveAtBorder function");
		}
		SPK::Vector3D & point=*point_ptr;
		bool inside=(bool)(lua_toboolean(L,3)==1);

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Cylinder::moveAtBorder(SPK::Vector3D &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->moveAtBorder(point, inside);

		return 0;
	}

	// SPK::Vector3D SPK::Cylinder::computeNormal(const SPK::Vector3D & point) const
	static int _bind_computeNormal(lua_State *L) {
		if (!_lg_typecheck_computeNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Cylinder::computeNormal(const SPK::Vector3D & point) const function, expected prototype:\nSPK::Vector3D SPK::Cylinder::computeNormal(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Cylinder::computeNormal function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Cylinder::computeNormal(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Vector3D stack_lret = self->computeNormal(point);
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// static SPK::Cylinder * SPK::Cylinder::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float radius = 1.0f, float length = 1.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::Cylinder * SPK::Cylinder::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float radius = 1.0f, float length = 1.0f) function, expected prototype:\nstatic SPK::Cylinder * SPK::Cylinder::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 1.0f, 0.0f), float radius = 1.0f, float length = 1.0f)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* position_ptr=luatop>0 ? (Luna< SPK::Vector3D >::check(L,1)) : NULL;
		if( luatop>0 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Cylinder::create function");
		}
		const SPK::Vector3D & position=luatop>0 ? *position_ptr : SPK::Vector3D (0.0f, 0.0f, 0.0f);
		const SPK::Vector3D* direction_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::Cylinder::create function");
		}
		const SPK::Vector3D & direction=luatop>1 ? *direction_ptr : SPK::Vector3D (0.0f, 1.0f, 0.0f);
		float radius=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;
		float length=luatop>3 ? (float)lua_tonumber(L,4) : 1.0f;

		SPK::Cylinder * lret = SPK::Cylinder::create(position, direction, radius, length);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Cylinder >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::Cylinder::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Cylinder::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Cylinder::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Cylinder::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->Cylinder::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::Cylinder::base_setPosition(const SPK::Vector3D & v)
	static int _bind_base_setPosition(lua_State *L) {
		if (!_lg_typecheck_base_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Cylinder::base_setPosition(const SPK::Vector3D & v) function, expected prototype:\nvoid SPK::Cylinder::base_setPosition(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Cylinder::base_setPosition function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Cylinder::base_setPosition(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Cylinder::setPosition(v);

		return 0;
	}

	// std::string SPK::Cylinder::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Cylinder::base_getClassName() const function, expected prototype:\nstd::string SPK::Cylinder::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Cylinder::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->Cylinder::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Cylinder::base_generatePosition(SPK::Particle & particle, bool full) const
	static int _bind_base_generatePosition(lua_State *L) {
		if (!_lg_typecheck_base_generatePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Cylinder::base_generatePosition(SPK::Particle & particle, bool full) const function, expected prototype:\nvoid SPK::Cylinder::base_generatePosition(SPK::Particle & particle, bool full) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Cylinder::base_generatePosition function");
		}
		SPK::Particle & particle=*particle_ptr;
		bool full=(bool)(lua_toboolean(L,3)==1);

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Cylinder::base_generatePosition(SPK::Particle &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Cylinder::generatePosition(particle, full);

		return 0;
	}

	// bool SPK::Cylinder::base_contains(const SPK::Vector3D & point) const
	static int _bind_base_contains(lua_State *L) {
		if (!_lg_typecheck_base_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Cylinder::base_contains(const SPK::Vector3D & point) const function, expected prototype:\nbool SPK::Cylinder::base_contains(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Cylinder::base_contains function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Cylinder::base_contains(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->Cylinder::contains(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Cylinder::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	static int _bind_base_intersects(lua_State *L) {
		if (!_lg_typecheck_base_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Cylinder::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const function, expected prototype:\nbool SPK::Cylinder::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::Cylinder::base_intersects function");
		}
		const SPK::Vector3D & v0=*v0_ptr;
		const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::Cylinder::base_intersects function");
		}
		const SPK::Vector3D & v1=*v1_ptr;
		SPK::Vector3D* intersection=(Luna< SPK::Vector3D >::check(L,4));
		SPK::Vector3D* normal=(Luna< SPK::Vector3D >::check(L,5));

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Cylinder::base_intersects(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D *, SPK::Vector3D *) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->Cylinder::intersects(v0, v1, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Cylinder::base_moveAtBorder(SPK::Vector3D & point, bool inside) const
	static int _bind_base_moveAtBorder(lua_State *L) {
		if (!_lg_typecheck_base_moveAtBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Cylinder::base_moveAtBorder(SPK::Vector3D & point, bool inside) const function, expected prototype:\nvoid SPK::Cylinder::base_moveAtBorder(SPK::Vector3D & point, bool inside) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Cylinder::base_moveAtBorder function");
		}
		SPK::Vector3D & point=*point_ptr;
		bool inside=(bool)(lua_toboolean(L,3)==1);

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Cylinder::base_moveAtBorder(SPK::Vector3D &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Cylinder::moveAtBorder(point, inside);

		return 0;
	}

	// SPK::Vector3D SPK::Cylinder::base_computeNormal(const SPK::Vector3D & point) const
	static int _bind_base_computeNormal(lua_State *L) {
		if (!_lg_typecheck_base_computeNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Cylinder::base_computeNormal(const SPK::Vector3D & point) const function, expected prototype:\nSPK::Vector3D SPK::Cylinder::base_computeNormal(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Cylinder::base_computeNormal function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Cylinder* self=Luna< SPK::Registerable >::checkSubType< SPK::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Cylinder::base_computeNormal(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Vector3D stack_lret = self->Cylinder::computeNormal(point);
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

SPK::Cylinder* LunaTraits< SPK::Cylinder >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Cylinder::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Cylinder >::_bind_dtor(SPK::Cylinder* obj) {
	delete obj;
}

const char LunaTraits< SPK::Cylinder >::className[] = "Cylinder";
const char LunaTraits< SPK::Cylinder >::fullName[] = "SPK::Cylinder";
const char LunaTraits< SPK::Cylinder >::moduleName[] = "spark";
const char* LunaTraits< SPK::Cylinder >::parents[] = {"spark.Zone", 0};
const int LunaTraits< SPK::Cylinder >::hash = 28016023;
const int LunaTraits< SPK::Cylinder >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::Cylinder >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_Cylinder::_bind_getClassName},
	{"setDirection", &luna_wrapper_SPK_Cylinder::_bind_setDirection},
	{"setRadius", &luna_wrapper_SPK_Cylinder::_bind_setRadius},
	{"setLength", &luna_wrapper_SPK_Cylinder::_bind_setLength},
	{"getDirection", &luna_wrapper_SPK_Cylinder::_bind_getDirection},
	{"getTransformedDirection", &luna_wrapper_SPK_Cylinder::_bind_getTransformedDirection},
	{"getRadius", &luna_wrapper_SPK_Cylinder::_bind_getRadius},
	{"getLength", &luna_wrapper_SPK_Cylinder::_bind_getLength},
	{"generatePosition", &luna_wrapper_SPK_Cylinder::_bind_generatePosition},
	{"contains", &luna_wrapper_SPK_Cylinder::_bind_contains},
	{"intersects", &luna_wrapper_SPK_Cylinder::_bind_intersects},
	{"moveAtBorder", &luna_wrapper_SPK_Cylinder::_bind_moveAtBorder},
	{"computeNormal", &luna_wrapper_SPK_Cylinder::_bind_computeNormal},
	{"create", &luna_wrapper_SPK_Cylinder::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_Cylinder::_bind_base_findByName},
	{"base_setPosition", &luna_wrapper_SPK_Cylinder::_bind_base_setPosition},
	{"base_getClassName", &luna_wrapper_SPK_Cylinder::_bind_base_getClassName},
	{"base_generatePosition", &luna_wrapper_SPK_Cylinder::_bind_base_generatePosition},
	{"base_contains", &luna_wrapper_SPK_Cylinder::_bind_base_contains},
	{"base_intersects", &luna_wrapper_SPK_Cylinder::_bind_base_intersects},
	{"base_moveAtBorder", &luna_wrapper_SPK_Cylinder::_bind_base_moveAtBorder},
	{"base_computeNormal", &luna_wrapper_SPK_Cylinder::_bind_base_computeNormal},
	{"__eq", &luna_wrapper_SPK_Cylinder::_bind___eq},
	{"getTable", &luna_wrapper_SPK_Cylinder::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Cylinder >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Cylinder::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Cylinder::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Cylinder >::enumValues[] = {
	{0,0}
};


