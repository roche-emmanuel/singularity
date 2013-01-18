#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Zone.h>

class luna_wrapper_SPK_Zone {
public:
	typedef Luna< SPK::Zone > luna_t;

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

		SPK::Zone* self= (SPK::Zone*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Zone >::push(L,self,false);
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
		//SPK::Zone* ptr= dynamic_cast< SPK::Zone* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Zone* ptr= luna_caster< SPK::Registerable, SPK::Zone >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Zone >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Zone* ptr= dynamic_cast< SPK::Zone* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Zone* ptr= luna_caster< SPK::Transformable, SPK::Zone >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Zone >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransformedPosition(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::Zone::Zone(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D ())
	static SPK::Zone* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Zone::Zone(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D ()) function, expected prototype:\nSPK::Zone::Zone(lua_Table * data, const SPK::Vector3D & position = SPK::Vector3D ())\nClass arguments details:\narg 2 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* position_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Zone::Zone function");
		}
		const SPK::Vector3D & position=luatop>1 ? *position_ptr : SPK::Vector3D ();

		return new wrapper_SPK_Zone(L,NULL, position);
	}


	// Function binds:
	// void SPK::Zone::setPosition(const SPK::Vector3D & v)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Zone::setPosition(const SPK::Vector3D & v) function, expected prototype:\nvoid SPK::Zone::setPosition(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Zone::setPosition function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Zone* self=Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Zone::setPosition(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setPosition(v);

		return 0;
	}

	// const SPK::Vector3D & SPK::Zone::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Zone::getPosition() const function, expected prototype:\nconst SPK::Vector3D & SPK::Zone::getPosition() const\nClass arguments details:\n");
		}


		SPK::Zone* self=Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Zone::getPosition() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Zone::getTransformedPosition() const
	static int _bind_getTransformedPosition(lua_State *L) {
		if (!_lg_typecheck_getTransformedPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Zone::getTransformedPosition() const function, expected prototype:\nconst SPK::Vector3D & SPK::Zone::getTransformedPosition() const\nClass arguments details:\n");
		}


		SPK::Zone* self=Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Zone::getTransformedPosition() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getTransformedPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// void SPK::Zone::generatePosition(SPK::Particle & particle, bool full) const
	static int _bind_generatePosition(lua_State *L) {
		if (!_lg_typecheck_generatePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Zone::generatePosition(SPK::Particle & particle, bool full) const function, expected prototype:\nvoid SPK::Zone::generatePosition(SPK::Particle & particle, bool full) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Zone::generatePosition function");
		}
		SPK::Particle & particle=*particle_ptr;
		bool full=(bool)(lua_toboolean(L,3)==1);

		SPK::Zone* self=Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Zone::generatePosition(SPK::Particle &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->generatePosition(particle, full);

		return 0;
	}

	// bool SPK::Zone::contains(const SPK::Vector3D & point) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Zone::contains(const SPK::Vector3D & point) const function, expected prototype:\nbool SPK::Zone::contains(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Zone::contains function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Zone* self=Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Zone::contains(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->contains(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Zone::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Zone::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const function, expected prototype:\nbool SPK::Zone::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::Zone::intersects function");
		}
		const SPK::Vector3D & v0=*v0_ptr;
		const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::Zone::intersects function");
		}
		const SPK::Vector3D & v1=*v1_ptr;
		SPK::Vector3D* intersection=(Luna< SPK::Vector3D >::check(L,4));
		SPK::Vector3D* normal=(Luna< SPK::Vector3D >::check(L,5));

		SPK::Zone* self=Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Zone::intersects(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D *, SPK::Vector3D *) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->intersects(v0, v1, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Zone::moveAtBorder(SPK::Vector3D & point, bool inside) const
	static int _bind_moveAtBorder(lua_State *L) {
		if (!_lg_typecheck_moveAtBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Zone::moveAtBorder(SPK::Vector3D & point, bool inside) const function, expected prototype:\nvoid SPK::Zone::moveAtBorder(SPK::Vector3D & point, bool inside) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Zone::moveAtBorder function");
		}
		SPK::Vector3D & point=*point_ptr;
		bool inside=(bool)(lua_toboolean(L,3)==1);

		SPK::Zone* self=Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Zone::moveAtBorder(SPK::Vector3D &, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->moveAtBorder(point, inside);

		return 0;
	}

	// SPK::Vector3D SPK::Zone::computeNormal(const SPK::Vector3D & point) const
	static int _bind_computeNormal(lua_State *L) {
		if (!_lg_typecheck_computeNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Zone::computeNormal(const SPK::Vector3D & point) const function, expected prototype:\nSPK::Vector3D SPK::Zone::computeNormal(const SPK::Vector3D & point) const\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* point_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SPK::Zone::computeNormal function");
		}
		const SPK::Vector3D & point=*point_ptr;

		SPK::Zone* self=Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Zone::computeNormal(const SPK::Vector3D &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Vector3D stack_lret = self->computeNormal(point);
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// SPK::Registerable * SPK::Zone::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Zone::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Zone::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Zone* self=Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Zone::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->Zone::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::Zone::base_setPosition(const SPK::Vector3D & v)
	static int _bind_base_setPosition(lua_State *L) {
		if (!_lg_typecheck_base_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Zone::base_setPosition(const SPK::Vector3D & v) function, expected prototype:\nvoid SPK::Zone::base_setPosition(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Zone::base_setPosition function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Zone* self=Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Zone::base_setPosition(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Zone::setPosition(v);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_SPK_Transformable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_SPK_Transformable(lua_State *L) {
		if (!_lg_typecheck_baseCast_SPK_Transformable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCast_SPK_Transformable function, expected prototype:\nbaseCast()");
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		SPK::Transformable* res = luna_caster<SPK::Registerable,SPK::Transformable>::cast(self); // dynamic_cast<SPK::Transformable*>(self);
		if(!res)
			return 0;
			
		Luna< SPK::Transformable >::push(L,res,false);
		return 1;

	}

};

SPK::Zone* LunaTraits< SPK::Zone >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Zone::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void SPK::Zone::generatePosition(SPK::Particle & particle, bool full) const
	// bool SPK::Zone::contains(const SPK::Vector3D & point) const
	// bool SPK::Zone::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	// void SPK::Zone::moveAtBorder(SPK::Vector3D & point, bool inside) const
	// SPK::Vector3D SPK::Zone::computeNormal(const SPK::Vector3D & point) const
	// std::string SPK::Registerable::getClassName() const
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Zone >::_bind_dtor(SPK::Zone* obj) {
	delete obj;
}

const char LunaTraits< SPK::Zone >::className[] = "Zone";
const char LunaTraits< SPK::Zone >::fullName[] = "SPK::Zone";
const char LunaTraits< SPK::Zone >::moduleName[] = "spark";
const char* LunaTraits< SPK::Zone >::parents[] = {"spark.Registerable", "spark.Transformable", 0};
const int LunaTraits< SPK::Zone >::hash = 40459499;
const int LunaTraits< SPK::Zone >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::Zone >::methods[] = {
	{"setPosition", &luna_wrapper_SPK_Zone::_bind_setPosition},
	{"getPosition", &luna_wrapper_SPK_Zone::_bind_getPosition},
	{"getTransformedPosition", &luna_wrapper_SPK_Zone::_bind_getTransformedPosition},
	{"generatePosition", &luna_wrapper_SPK_Zone::_bind_generatePosition},
	{"contains", &luna_wrapper_SPK_Zone::_bind_contains},
	{"intersects", &luna_wrapper_SPK_Zone::_bind_intersects},
	{"moveAtBorder", &luna_wrapper_SPK_Zone::_bind_moveAtBorder},
	{"computeNormal", &luna_wrapper_SPK_Zone::_bind_computeNormal},
	{"base_findByName", &luna_wrapper_SPK_Zone::_bind_base_findByName},
	{"base_setPosition", &luna_wrapper_SPK_Zone::_bind_base_setPosition},
	{"__eq", &luna_wrapper_SPK_Zone::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_Zone::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Zone::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_Zone::_bind_getTable},
	{"asTransformable", &luna_wrapper_SPK_Zone::_bind_baseCast_SPK_Transformable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Zone >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Zone::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Zone::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Zone >::enumValues[] = {
	{0,0}
};


