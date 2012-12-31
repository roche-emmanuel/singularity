#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_AABox.h>

class luna_wrapper_SPK_AABox {
public:
	typedef Luna< SPK::AABox > luna_t;

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
		//SPK::AABox* ptr= dynamic_cast< SPK::AABox* >(Luna< SPK::Registerable >::check(L,1));
		SPK::AABox* ptr= luna_caster< SPK::Registerable, SPK::AABox >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::AABox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::AABox* ptr= dynamic_cast< SPK::AABox* >(Luna< SPK::Transformable >::check(L,1));
		SPK::AABox* ptr= luna_caster< SPK::Transformable, SPK::AABox >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::AABox >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDimension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDimension(lua_State *L) {
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
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
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
	// SPK::AABox::AABox(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & dimension = SPK::Vector3D (0.0f, 0.0f, 0.0f))
	static SPK::AABox* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::AABox::AABox(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & dimension = SPK::Vector3D (0.0f, 0.0f, 0.0f)) function, expected prototype:\nSPK::AABox::AABox(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & dimension = SPK::Vector3D (0.0f, 0.0f, 0.0f))\nClass arguments details:\narg 2 ID = 70092749\narg 3 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* position_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::AABox::AABox function");
		}
		const SPK::Vector3D & position=luatop>1 ? *position_ptr : SPK::Vector3D (0.0f, 0.0f, 0.0f);
		const SPK::Vector3D* dimension_ptr=luatop>2 ? (Luna< SPK::Vector3D >::check(L,3)) : NULL;
		if( luatop>2 && !dimension_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dimension in SPK::AABox::AABox function");
		}
		const SPK::Vector3D & dimension=luatop>2 ? *dimension_ptr : SPK::Vector3D (0.0f, 0.0f, 0.0f);

		return new wrapper_SPK_AABox(L,NULL, position, dimension);
	}


	// Function binds:
	// std::string SPK::AABox::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::AABox::getClassName() const function, expected prototype:\nstd::string SPK::AABox::getClassName() const\nClass arguments details:\n");
		}


		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::AABox::getClassName() const");
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::AABox::setDimension(const SPK::Vector3D & dimension)
	static int _bind_setDimension(lua_State *L) {
		if (!_lg_typecheck_setDimension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::AABox::setDimension(const SPK::Vector3D & dimension) function, expected prototype:\nvoid SPK::AABox::setDimension(const SPK::Vector3D & dimension)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* dimension_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !dimension_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dimension in SPK::AABox::setDimension function");
		}
		const SPK::Vector3D & dimension=*dimension_ptr;

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::AABox::setDimension(const SPK::Vector3D &)");
		}
		self->setDimension(dimension);

		return 0;
	}

	// const SPK::Vector3D & SPK::AABox::getDimension() const
	static int _bind_getDimension(lua_State *L) {
		if (!_lg_typecheck_getDimension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::AABox::getDimension() const function, expected prototype:\nconst SPK::Vector3D & SPK::AABox::getDimension() const\nClass arguments details:\n");
		}


		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::AABox::getDimension() const");
		}
		const SPK::Vector3D* lret = &self->getDimension();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// void SPK::AABox::generatePosition(SPK::Particle & particle, bool full) const
	static int _bind_generatePosition(lua_State *L) {
		if (!_lg_typecheck_generatePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::AABox::generatePosition(SPK::Particle & particle, bool full) const function, expected prototype:\nvoid SPK::AABox::generatePosition(SPK::Particle & particle, bool full) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::AABox::generatePosition function");
		}
		SPK::Particle & particle=*particle_ptr;
		bool full=(bool)(lua_toboolean(L,3)==1);

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::AABox::generatePosition(SPK::Particle &, bool) const");
		}
		self->generatePosition(particle, full);

		return 0;
	}

	// bool SPK::AABox::contains(const SPK::Vector3D & point) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::AABox::contains(const SPK::Vector3D & point) const function, expected prototype:\nbool SPK::AABox::contains(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::AABox::contains function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::AABox::contains(const SPK::Vector3D &) const");
		}
		bool lret = self->contains(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::AABox::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::AABox::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const function, expected prototype:\nbool SPK::AABox::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::AABox::intersects function");
		}
		const SPK::Vector3D & v0=*v0_ptr;
		const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::AABox::intersects function");
		}
		const SPK::Vector3D & v1=*v1_ptr;
		SPK::Vector3D* intersection=(Luna< SPK::Vector3D >::check(L,4));
		SPK::Vector3D* normal=(Luna< SPK::Vector3D >::check(L,5));

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::AABox::intersects(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D *, SPK::Vector3D *) const");
		}
		bool lret = self->intersects(v0, v1, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::AABox::moveAtBorder(SPK::Vector3D & point, bool inside) const
	static int _bind_moveAtBorder(lua_State *L) {
		if (!_lg_typecheck_moveAtBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::AABox::moveAtBorder(SPK::Vector3D & point, bool inside) const function, expected prototype:\nvoid SPK::AABox::moveAtBorder(SPK::Vector3D & point, bool inside) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::AABox::moveAtBorder function");
		}
		SPK::Vector3D & point=*point_ptr;
		bool inside=(bool)(lua_toboolean(L,3)==1);

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::AABox::moveAtBorder(SPK::Vector3D &, bool) const");
		}
		self->moveAtBorder(point, inside);

		return 0;
	}

	// SPK::Vector3D SPK::AABox::computeNormal(const SPK::Vector3D & point) const
	static int _bind_computeNormal(lua_State *L) {
		if (!_lg_typecheck_computeNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::AABox::computeNormal(const SPK::Vector3D & point) const function, expected prototype:\nSPK::Vector3D SPK::AABox::computeNormal(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::AABox::computeNormal function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::AABox::computeNormal(const SPK::Vector3D &) const");
		}
		SPK::Vector3D stack_lret = self->computeNormal(point);
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// static SPK::AABox * SPK::AABox::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & dimension = SPK::Vector3D (0.0f, 0.0f, 0.0f))
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::AABox * SPK::AABox::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & dimension = SPK::Vector3D (0.0f, 0.0f, 0.0f)) function, expected prototype:\nstatic SPK::AABox * SPK::AABox::create(const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & dimension = SPK::Vector3D (0.0f, 0.0f, 0.0f))\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* position_ptr=luatop>0 ? (Luna< SPK::Vector3D >::check(L,1)) : NULL;
		if( luatop>0 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::AABox::create function");
		}
		const SPK::Vector3D & position=luatop>0 ? *position_ptr : SPK::Vector3D (0.0f, 0.0f, 0.0f);
		const SPK::Vector3D* dimension_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !dimension_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dimension in SPK::AABox::create function");
		}
		const SPK::Vector3D & dimension=luatop>1 ? *dimension_ptr : SPK::Vector3D (0.0f, 0.0f, 0.0f);

		SPK::AABox * lret = SPK::AABox::create(position, dimension);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::AABox >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::AABox::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::AABox::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::AABox::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::AABox::base_findByName(const std::string &)");
		}
		SPK::Registerable * lret = self->AABox::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::AABox::base_setPosition(const SPK::Vector3D & v)
	static int _bind_base_setPosition(lua_State *L) {
		if (!_lg_typecheck_base_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::AABox::base_setPosition(const SPK::Vector3D & v) function, expected prototype:\nvoid SPK::AABox::base_setPosition(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::AABox::base_setPosition function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::AABox::base_setPosition(const SPK::Vector3D &)");
		}
		self->AABox::setPosition(v);

		return 0;
	}

	// std::string SPK::AABox::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::AABox::base_getClassName() const function, expected prototype:\nstd::string SPK::AABox::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::AABox::base_getClassName() const");
		}
		std::string lret = self->AABox::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::AABox::base_generatePosition(SPK::Particle & particle, bool full) const
	static int _bind_base_generatePosition(lua_State *L) {
		if (!_lg_typecheck_base_generatePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::AABox::base_generatePosition(SPK::Particle & particle, bool full) const function, expected prototype:\nvoid SPK::AABox::base_generatePosition(SPK::Particle & particle, bool full) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::AABox::base_generatePosition function");
		}
		SPK::Particle & particle=*particle_ptr;
		bool full=(bool)(lua_toboolean(L,3)==1);

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::AABox::base_generatePosition(SPK::Particle &, bool) const");
		}
		self->AABox::generatePosition(particle, full);

		return 0;
	}

	// bool SPK::AABox::base_contains(const SPK::Vector3D & point) const
	static int _bind_base_contains(lua_State *L) {
		if (!_lg_typecheck_base_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::AABox::base_contains(const SPK::Vector3D & point) const function, expected prototype:\nbool SPK::AABox::base_contains(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::AABox::base_contains function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::AABox::base_contains(const SPK::Vector3D &) const");
		}
		bool lret = self->AABox::contains(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::AABox::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	static int _bind_base_intersects(lua_State *L) {
		if (!_lg_typecheck_base_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::AABox::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const function, expected prototype:\nbool SPK::AABox::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::AABox::base_intersects function");
		}
		const SPK::Vector3D & v0=*v0_ptr;
		const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::AABox::base_intersects function");
		}
		const SPK::Vector3D & v1=*v1_ptr;
		SPK::Vector3D* intersection=(Luna< SPK::Vector3D >::check(L,4));
		SPK::Vector3D* normal=(Luna< SPK::Vector3D >::check(L,5));

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::AABox::base_intersects(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D *, SPK::Vector3D *) const");
		}
		bool lret = self->AABox::intersects(v0, v1, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::AABox::base_moveAtBorder(SPK::Vector3D & point, bool inside) const
	static int _bind_base_moveAtBorder(lua_State *L) {
		if (!_lg_typecheck_base_moveAtBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::AABox::base_moveAtBorder(SPK::Vector3D & point, bool inside) const function, expected prototype:\nvoid SPK::AABox::base_moveAtBorder(SPK::Vector3D & point, bool inside) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::AABox::base_moveAtBorder function");
		}
		SPK::Vector3D & point=*point_ptr;
		bool inside=(bool)(lua_toboolean(L,3)==1);

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::AABox::base_moveAtBorder(SPK::Vector3D &, bool) const");
		}
		self->AABox::moveAtBorder(point, inside);

		return 0;
	}

	// SPK::Vector3D SPK::AABox::base_computeNormal(const SPK::Vector3D & point) const
	static int _bind_base_computeNormal(lua_State *L) {
		if (!_lg_typecheck_base_computeNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::AABox::base_computeNormal(const SPK::Vector3D & point) const function, expected prototype:\nSPK::Vector3D SPK::AABox::base_computeNormal(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::AABox::base_computeNormal function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::AABox* self=Luna< SPK::Registerable >::checkSubType< SPK::AABox >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::AABox::base_computeNormal(const SPK::Vector3D &) const");
		}
		SPK::Vector3D stack_lret = self->AABox::computeNormal(point);
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

SPK::AABox* LunaTraits< SPK::AABox >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_AABox::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::AABox >::_bind_dtor(SPK::AABox* obj) {
	delete obj;
}

const char LunaTraits< SPK::AABox >::className[] = "AABox";
const char LunaTraits< SPK::AABox >::fullName[] = "SPK::AABox";
const char LunaTraits< SPK::AABox >::moduleName[] = "spark";
const char* LunaTraits< SPK::AABox >::parents[] = {"spark.Zone", 0};
const int LunaTraits< SPK::AABox >::hash = 29744084;
const int LunaTraits< SPK::AABox >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::AABox >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_AABox::_bind_getClassName},
	{"setDimension", &luna_wrapper_SPK_AABox::_bind_setDimension},
	{"getDimension", &luna_wrapper_SPK_AABox::_bind_getDimension},
	{"generatePosition", &luna_wrapper_SPK_AABox::_bind_generatePosition},
	{"contains", &luna_wrapper_SPK_AABox::_bind_contains},
	{"intersects", &luna_wrapper_SPK_AABox::_bind_intersects},
	{"moveAtBorder", &luna_wrapper_SPK_AABox::_bind_moveAtBorder},
	{"computeNormal", &luna_wrapper_SPK_AABox::_bind_computeNormal},
	{"create", &luna_wrapper_SPK_AABox::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_AABox::_bind_base_findByName},
	{"base_setPosition", &luna_wrapper_SPK_AABox::_bind_base_setPosition},
	{"base_getClassName", &luna_wrapper_SPK_AABox::_bind_base_getClassName},
	{"base_generatePosition", &luna_wrapper_SPK_AABox::_bind_base_generatePosition},
	{"base_contains", &luna_wrapper_SPK_AABox::_bind_base_contains},
	{"base_intersects", &luna_wrapper_SPK_AABox::_bind_base_intersects},
	{"base_moveAtBorder", &luna_wrapper_SPK_AABox::_bind_base_moveAtBorder},
	{"base_computeNormal", &luna_wrapper_SPK_AABox::_bind_base_computeNormal},
	{"__eq", &luna_wrapper_SPK_AABox::_bind___eq},
	{"getTable", &luna_wrapper_SPK_AABox::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::AABox >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_AABox::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_AABox::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::AABox >::enumValues[] = {
	{0,0}
};


