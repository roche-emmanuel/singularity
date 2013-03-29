#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_StraightEmitter.h>

class luna_wrapper_SPK_StraightEmitter {
public:
	typedef Luna< SPK::StraightEmitter > luna_t;

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

		SPK::StraightEmitter* self= (SPK::StraightEmitter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::StraightEmitter >::push(L,self,false);
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
		//SPK::StraightEmitter* ptr= dynamic_cast< SPK::StraightEmitter* >(Luna< SPK::Registerable >::check(L,1));
		SPK::StraightEmitter* ptr= luna_caster< SPK::Registerable, SPK::StraightEmitter >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::StraightEmitter >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::StraightEmitter* ptr= dynamic_cast< SPK::StraightEmitter* >(Luna< SPK::Transformable >::check(L,1));
		SPK::StraightEmitter* ptr= luna_caster< SPK::Transformable, SPK::StraightEmitter >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::StraightEmitter >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
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

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
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
	// SPK::StraightEmitter::StraightEmitter(lua_Table * data, const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f))
	static SPK::StraightEmitter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::StraightEmitter::StraightEmitter(lua_Table * data, const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f)) function, expected prototype:\nSPK::StraightEmitter::StraightEmitter(lua_Table * data, const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f))\nClass arguments details:\narg 2 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* direction_ptr=luatop>1 ? (Luna< SPK::Vector3D >::check(L,2)) : NULL;
		if( luatop>1 && !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::StraightEmitter::StraightEmitter function");
		}
		const SPK::Vector3D & direction=luatop>1 ? *direction_ptr : (const SPK::Vector3D)SPK::Vector3D (0.0f, 0.0f,-1.0f);

		return new wrapper_SPK_StraightEmitter(L,NULL, direction);
	}


	// Function binds:
	// std::string SPK::StraightEmitter::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::StraightEmitter::getClassName() const function, expected prototype:\nstd::string SPK::StraightEmitter::getClassName() const\nClass arguments details:\n");
		}


		SPK::StraightEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::StraightEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::StraightEmitter::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::StraightEmitter::setDirection(const SPK::Vector3D & direction)
	static int _bind_setDirection(lua_State *L) {
		if (!_lg_typecheck_setDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::StraightEmitter::setDirection(const SPK::Vector3D & direction) function, expected prototype:\nvoid SPK::StraightEmitter::setDirection(const SPK::Vector3D & direction)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* direction_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::StraightEmitter::setDirection function");
		}
		const SPK::Vector3D & direction=*direction_ptr;

		SPK::StraightEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::StraightEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::StraightEmitter::setDirection(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setDirection(direction);

		return 0;
	}

	// const SPK::Vector3D & SPK::StraightEmitter::getDirection() const
	static int _bind_getDirection(lua_State *L) {
		if (!_lg_typecheck_getDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::StraightEmitter::getDirection() const function, expected prototype:\nconst SPK::Vector3D & SPK::StraightEmitter::getDirection() const\nClass arguments details:\n");
		}


		SPK::StraightEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::StraightEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::StraightEmitter::getDirection() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getDirection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::StraightEmitter::getTransformedDirection() const
	static int _bind_getTransformedDirection(lua_State *L) {
		if (!_lg_typecheck_getTransformedDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::StraightEmitter::getTransformedDirection() const function, expected prototype:\nconst SPK::Vector3D & SPK::StraightEmitter::getTransformedDirection() const\nClass arguments details:\n");
		}


		SPK::StraightEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::StraightEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::StraightEmitter::getTransformedDirection() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getTransformedDirection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// static SPK::StraightEmitter * SPK::StraightEmitter::create(const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f))
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::StraightEmitter * SPK::StraightEmitter::create(const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f)) function, expected prototype:\nstatic SPK::StraightEmitter * SPK::StraightEmitter::create(const SPK::Vector3D & direction = SPK::Vector3D (0.0f, 0.0f,-1.0f))\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* direction_ptr=luatop>0 ? (Luna< SPK::Vector3D >::check(L,1)) : NULL;
		if( luatop>0 && !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in SPK::StraightEmitter::create function");
		}
		const SPK::Vector3D & direction=luatop>0 ? *direction_ptr : (const SPK::Vector3D)SPK::Vector3D (0.0f, 0.0f,-1.0f);

		SPK::StraightEmitter * lret = SPK::StraightEmitter::create(direction);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::StraightEmitter >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::StraightEmitter::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::StraightEmitter::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::StraightEmitter::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::StraightEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::StraightEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::StraightEmitter::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->StraightEmitter::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::StraightEmitter::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::StraightEmitter::base_getClassName() const function, expected prototype:\nstd::string SPK::StraightEmitter::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::StraightEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::StraightEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::StraightEmitter::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->StraightEmitter::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::StraightEmitter* LunaTraits< SPK::StraightEmitter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_StraightEmitter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::StraightEmitter >::_bind_dtor(SPK::StraightEmitter* obj) {
	delete obj;
}

const char LunaTraits< SPK::StraightEmitter >::className[] = "StraightEmitter";
const char LunaTraits< SPK::StraightEmitter >::fullName[] = "SPK::StraightEmitter";
const char LunaTraits< SPK::StraightEmitter >::moduleName[] = "spark";
const char* LunaTraits< SPK::StraightEmitter >::parents[] = {"spark.Emitter", 0};
const int LunaTraits< SPK::StraightEmitter >::hash = 68375846;
const int LunaTraits< SPK::StraightEmitter >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::StraightEmitter >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_StraightEmitter::_bind_getClassName},
	{"setDirection", &luna_wrapper_SPK_StraightEmitter::_bind_setDirection},
	{"getDirection", &luna_wrapper_SPK_StraightEmitter::_bind_getDirection},
	{"getTransformedDirection", &luna_wrapper_SPK_StraightEmitter::_bind_getTransformedDirection},
	{"create", &luna_wrapper_SPK_StraightEmitter::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_StraightEmitter::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_StraightEmitter::_bind_base_getClassName},
	{"__eq", &luna_wrapper_SPK_StraightEmitter::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_StraightEmitter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_StraightEmitter::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_StraightEmitter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::StraightEmitter >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_StraightEmitter::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_StraightEmitter::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::StraightEmitter >::enumValues[] = {
	{0,0}
};


