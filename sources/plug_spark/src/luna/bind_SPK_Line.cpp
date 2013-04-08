#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Line.h>

class luna_wrapper_SPK_Line {
public:
	typedef Luna< SPK::Line > luna_t;

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
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		SPK::Line* self= (SPK::Line*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Line >::push(L,self,false);
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
		//SPK::Line* ptr= dynamic_cast< SPK::Line* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Line* ptr= luna_caster< SPK::Registerable, SPK::Line >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Line >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Line* ptr= dynamic_cast< SPK::Line* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Line* ptr= luna_caster< SPK::Transformable, SPK::Line >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Line >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBounds(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTransformedBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pushBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
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

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
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
	// SPK::Line::Line(lua_Table * data, const SPK::Vector3D & p0 = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & p1 = SPK::Vector3D (0.0f, 0.0f, 0.0f))
	static SPK::Line* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Line::Line(lua_Table * data, const SPK::Vector3D & p0 = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & p1 = SPK::Vector3D (0.0f, 0.0f, 0.0f)) function, expected prototype:\nSPK::Line::Line(lua_Table * data, const SPK::Vector3D & p0 = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & p1 = SPK::Vector3D (0.0f, 0.0f, 0.0f))\nClass arguments details:\narg 2 ID = 70092749\narg 3 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* p0_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !p0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p0 in SPK::Line::Line function");
		}
		const SPK::Vector3D & p0=luatop>1 ? *p0_ptr : (const SPK::Vector3D&)SPK::Vector3D (0.0f, 0.0f, 0.0f);
		const SPK::Vector3D* p1_ptr=luatop>2 ? (Luna< SPK::Vector3D >::check(L,3)) : NULL;
		if( luatop>2 && !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in SPK::Line::Line function");
		}
		const SPK::Vector3D & p1=luatop>2 ? *p1_ptr : (const SPK::Vector3D&)SPK::Vector3D (0.0f, 0.0f, 0.0f);

		return new wrapper_SPK_Line(L,NULL, p0, p1);
	}


	// Function binds:
	// std::string SPK::Line::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Line::getClassName() const function, expected prototype:\nstd::string SPK::Line::getClassName() const\nClass arguments details:\n");
		}


		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Line::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Line::setPosition(const SPK::Vector3D & v)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Line::setPosition(const SPK::Vector3D & v) function, expected prototype:\nvoid SPK::Line::setPosition(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Line::setPosition function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Line::setPosition(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setPosition(v);

		return 0;
	}

	// void SPK::Line::setBounds(const SPK::Vector3D & p0, const SPK::Vector3D & p1)
	static int _bind_setBounds(lua_State *L) {
		if (!_lg_typecheck_setBounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Line::setBounds(const SPK::Vector3D & p0, const SPK::Vector3D & p1) function, expected prototype:\nvoid SPK::Line::setBounds(const SPK::Vector3D & p0, const SPK::Vector3D & p1)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n");
		}

		const SPK::Vector3D* p0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !p0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p0 in SPK::Line::setBounds function");
		}
		const SPK::Vector3D & p0=*p0_ptr;
		const SPK::Vector3D* p1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in SPK::Line::setBounds function");
		}
		const SPK::Vector3D & p1=*p1_ptr;

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Line::setBounds(const SPK::Vector3D &, const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setBounds(p0, p1);

		return 0;
	}

	// const SPK::Vector3D & SPK::Line::getBound(size_t index) const
	static int _bind_getBound(lua_State *L) {
		if (!_lg_typecheck_getBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Line::getBound(size_t index) const function, expected prototype:\nconst SPK::Vector3D & SPK::Line::getBound(size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Line::getBound(size_t) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getBound(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Line::getTransformedBound(size_t index) const
	static int _bind_getTransformedBound(lua_State *L) {
		if (!_lg_typecheck_getTransformedBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Line::getTransformedBound(size_t index) const function, expected prototype:\nconst SPK::Vector3D & SPK::Line::getTransformedBound(size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Line::getTransformedBound(size_t) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getTransformedBound(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// void SPK::Line::pushBound(const SPK::Vector3D & bound)
	static int _bind_pushBound(lua_State *L) {
		if (!_lg_typecheck_pushBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Line::pushBound(const SPK::Vector3D & bound) function, expected prototype:\nvoid SPK::Line::pushBound(const SPK::Vector3D & bound)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* bound_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in SPK::Line::pushBound function");
		}
		const SPK::Vector3D & bound=*bound_ptr;

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Line::pushBound(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->pushBound(bound);

		return 0;
	}

	// void SPK::Line::generatePosition(SPK::Particle & particle, bool full) const
	static int _bind_generatePosition(lua_State *L) {
		if (!_lg_typecheck_generatePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Line::generatePosition(SPK::Particle & particle, bool full) const function, expected prototype:\nvoid SPK::Line::generatePosition(SPK::Particle & particle, bool full) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Line::generatePosition function");
		}
		SPK::Particle & particle=*particle_ptr;
		bool full=(bool)(lua_toboolean(L,3)==1);

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Line::generatePosition(SPK::Particle &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->generatePosition(particle, full);

		return 0;
	}

	// bool SPK::Line::contains(const SPK::Vector3D & point) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Line::contains(const SPK::Vector3D & point) const function, expected prototype:\nbool SPK::Line::contains(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Line::contains function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Line::contains(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->contains(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Line::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Line::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const function, expected prototype:\nbool SPK::Line::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::Line::intersects function");
		}
		const SPK::Vector3D & v0=*v0_ptr;
		const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::Line::intersects function");
		}
		const SPK::Vector3D & v1=*v1_ptr;
		SPK::Vector3D* intersection=(Luna< SPK::Vector3D >::check(L,4));
		SPK::Vector3D* normal=(Luna< SPK::Vector3D >::check(L,5));

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Line::intersects(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D *, SPK::Vector3D *) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->intersects(v0, v1, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Line::moveAtBorder(SPK::Vector3D & point, bool inside) const
	static int _bind_moveAtBorder(lua_State *L) {
		if (!_lg_typecheck_moveAtBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Line::moveAtBorder(SPK::Vector3D & point, bool inside) const function, expected prototype:\nvoid SPK::Line::moveAtBorder(SPK::Vector3D & point, bool inside) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Line::moveAtBorder function");
		}
		SPK::Vector3D & point=*point_ptr;
		bool inside=(bool)(lua_toboolean(L,3)==1);

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Line::moveAtBorder(SPK::Vector3D &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->moveAtBorder(point, inside);

		return 0;
	}

	// SPK::Vector3D SPK::Line::computeNormal(const SPK::Vector3D & point) const
	static int _bind_computeNormal(lua_State *L) {
		if (!_lg_typecheck_computeNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Line::computeNormal(const SPK::Vector3D & point) const function, expected prototype:\nSPK::Vector3D SPK::Line::computeNormal(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Line::computeNormal function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Line::computeNormal(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Vector3D stack_lret = self->computeNormal(point);
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// static SPK::Line * SPK::Line::create(const SPK::Vector3D & p0 = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & p1 = SPK::Vector3D (0.0f, 0.0f, 0.0f))
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::Line * SPK::Line::create(const SPK::Vector3D & p0 = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & p1 = SPK::Vector3D (0.0f, 0.0f, 0.0f)) function, expected prototype:\nstatic SPK::Line * SPK::Line::create(const SPK::Vector3D & p0 = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & p1 = SPK::Vector3D (0.0f, 0.0f, 0.0f))\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* p0_ptr=luatop>0 ? (Luna< SPK::Vector3D >::check(L,1)) : NULL;
		if( luatop>0 && !p0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p0 in SPK::Line::create function");
		}
		const SPK::Vector3D & p0=luatop>0 ? *p0_ptr : (const SPK::Vector3D&)SPK::Vector3D (0.0f, 0.0f, 0.0f);
		const SPK::Vector3D* p1_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in SPK::Line::create function");
		}
		const SPK::Vector3D & p1=luatop>1 ? *p1_ptr : (const SPK::Vector3D&)SPK::Vector3D (0.0f, 0.0f, 0.0f);

		SPK::Line * lret = SPK::Line::create(p0, p1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Line >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::Line::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Line::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Line::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Line::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->Line::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::Line::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Line::base_getClassName() const function, expected prototype:\nstd::string SPK::Line::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Line::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->Line::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Line::base_setPosition(const SPK::Vector3D & v)
	static int _bind_base_setPosition(lua_State *L) {
		if (!_lg_typecheck_base_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Line::base_setPosition(const SPK::Vector3D & v) function, expected prototype:\nvoid SPK::Line::base_setPosition(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Line::base_setPosition function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Line::base_setPosition(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Line::setPosition(v);

		return 0;
	}

	// void SPK::Line::base_generatePosition(SPK::Particle & particle, bool full) const
	static int _bind_base_generatePosition(lua_State *L) {
		if (!_lg_typecheck_base_generatePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Line::base_generatePosition(SPK::Particle & particle, bool full) const function, expected prototype:\nvoid SPK::Line::base_generatePosition(SPK::Particle & particle, bool full) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Line::base_generatePosition function");
		}
		SPK::Particle & particle=*particle_ptr;
		bool full=(bool)(lua_toboolean(L,3)==1);

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Line::base_generatePosition(SPK::Particle &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Line::generatePosition(particle, full);

		return 0;
	}

	// bool SPK::Line::base_contains(const SPK::Vector3D & point) const
	static int _bind_base_contains(lua_State *L) {
		if (!_lg_typecheck_base_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Line::base_contains(const SPK::Vector3D & point) const function, expected prototype:\nbool SPK::Line::base_contains(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Line::base_contains function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Line::base_contains(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->Line::contains(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Line::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	static int _bind_base_intersects(lua_State *L) {
		if (!_lg_typecheck_base_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Line::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const function, expected prototype:\nbool SPK::Line::base_intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::Line::base_intersects function");
		}
		const SPK::Vector3D & v0=*v0_ptr;
		const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::Line::base_intersects function");
		}
		const SPK::Vector3D & v1=*v1_ptr;
		SPK::Vector3D* intersection=(Luna< SPK::Vector3D >::check(L,4));
		SPK::Vector3D* normal=(Luna< SPK::Vector3D >::check(L,5));

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Line::base_intersects(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D *, SPK::Vector3D *) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->Line::intersects(v0, v1, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Line::base_moveAtBorder(SPK::Vector3D & point, bool inside) const
	static int _bind_base_moveAtBorder(lua_State *L) {
		if (!_lg_typecheck_base_moveAtBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Line::base_moveAtBorder(SPK::Vector3D & point, bool inside) const function, expected prototype:\nvoid SPK::Line::base_moveAtBorder(SPK::Vector3D & point, bool inside) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Line::base_moveAtBorder function");
		}
		SPK::Vector3D & point=*point_ptr;
		bool inside=(bool)(lua_toboolean(L,3)==1);

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Line::base_moveAtBorder(SPK::Vector3D &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Line::moveAtBorder(point, inside);

		return 0;
	}

	// SPK::Vector3D SPK::Line::base_computeNormal(const SPK::Vector3D & point) const
	static int _bind_base_computeNormal(lua_State *L) {
		if (!_lg_typecheck_base_computeNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Line::base_computeNormal(const SPK::Vector3D & point) const function, expected prototype:\nSPK::Vector3D SPK::Line::base_computeNormal(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Line::base_computeNormal function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Line* self=Luna< SPK::Registerable >::checkSubType< SPK::Line >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Line::base_computeNormal(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Vector3D stack_lret = self->Line::computeNormal(point);
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

SPK::Line* LunaTraits< SPK::Line >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Line::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Line >::_bind_dtor(SPK::Line* obj) {
	delete obj;
}

const char LunaTraits< SPK::Line >::className[] = "Line";
const char LunaTraits< SPK::Line >::fullName[] = "SPK::Line";
const char LunaTraits< SPK::Line >::moduleName[] = "spark";
const char* LunaTraits< SPK::Line >::parents[] = {"spark.Zone", 0};
const int LunaTraits< SPK::Line >::hash = 40036659;
const int LunaTraits< SPK::Line >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::Line >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_Line::_bind_getClassName},
	{"setPosition", &luna_wrapper_SPK_Line::_bind_setPosition},
	{"setBounds", &luna_wrapper_SPK_Line::_bind_setBounds},
	{"getBound", &luna_wrapper_SPK_Line::_bind_getBound},
	{"getTransformedBound", &luna_wrapper_SPK_Line::_bind_getTransformedBound},
	{"pushBound", &luna_wrapper_SPK_Line::_bind_pushBound},
	{"generatePosition", &luna_wrapper_SPK_Line::_bind_generatePosition},
	{"contains", &luna_wrapper_SPK_Line::_bind_contains},
	{"intersects", &luna_wrapper_SPK_Line::_bind_intersects},
	{"moveAtBorder", &luna_wrapper_SPK_Line::_bind_moveAtBorder},
	{"computeNormal", &luna_wrapper_SPK_Line::_bind_computeNormal},
	{"create", &luna_wrapper_SPK_Line::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_Line::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_Line::_bind_base_getClassName},
	{"base_setPosition", &luna_wrapper_SPK_Line::_bind_base_setPosition},
	{"base_generatePosition", &luna_wrapper_SPK_Line::_bind_base_generatePosition},
	{"base_contains", &luna_wrapper_SPK_Line::_bind_base_contains},
	{"base_intersects", &luna_wrapper_SPK_Line::_bind_base_intersects},
	{"base_moveAtBorder", &luna_wrapper_SPK_Line::_bind_base_moveAtBorder},
	{"base_computeNormal", &luna_wrapper_SPK_Line::_bind_base_computeNormal},
	{"__eq", &luna_wrapper_SPK_Line::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_Line::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Line::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_Line::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Line >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Line::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Line::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Line >::enumValues[] = {
	{0,0}
};


