#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Rotator.h>

class luna_wrapper_SPK_Rotator {
public:
	typedef Luna< SPK::Rotator > luna_t;

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

		SPK::Rotator* self= (SPK::Rotator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Rotator >::push(L,self,false);
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
		//SPK::Rotator* ptr= dynamic_cast< SPK::Rotator* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Rotator* ptr= luna_caster< SPK::Registerable, SPK::Rotator >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Rotator >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Rotator* ptr= dynamic_cast< SPK::Rotator* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Rotator* ptr= luna_caster< SPK::Transformable, SPK::Rotator >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Rotator >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Rotator* ptr= dynamic_cast< SPK::Rotator* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::Rotator* ptr= luna_caster< SPK::BufferHandler, SPK::Rotator >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Rotator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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
	// SPK::Rotator::Rotator(lua_Table * data)
	static SPK::Rotator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Rotator::Rotator(lua_Table * data) function, expected prototype:\nSPK::Rotator::Rotator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_SPK_Rotator(L,NULL);
	}


	// Function binds:
	// std::string SPK::Rotator::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Rotator::getClassName() const function, expected prototype:\nstd::string SPK::Rotator::getClassName() const\nClass arguments details:\n");
		}


		SPK::Rotator* self=Luna< SPK::Registerable >::checkSubType< SPK::Rotator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Rotator::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static SPK::Rotator * SPK::Rotator::create()
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::Rotator * SPK::Rotator::create() function, expected prototype:\nstatic SPK::Rotator * SPK::Rotator::create()\nClass arguments details:\n");
		}


		SPK::Rotator * lret = SPK::Rotator::create();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Rotator >::push(L,lret,false);

		return 1;
	}

	// void SPK::Rotator::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Rotator::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Rotator::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Rotator::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Rotator* self=Luna< SPK::Registerable >::checkSubType< SPK::Rotator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Rotator::base_createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Rotator::createBuffers(group);

		return 0;
	}

	// void SPK::Rotator::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Rotator::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Rotator::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Rotator::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Rotator* self=Luna< SPK::Registerable >::checkSubType< SPK::Rotator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Rotator::base_destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Rotator::destroyBuffers(group);

		return 0;
	}

	// SPK::Registerable * SPK::Rotator::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Rotator::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Rotator::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Rotator* self=Luna< SPK::Registerable >::checkSubType< SPK::Rotator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Rotator::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->Rotator::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::Rotator::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Rotator::base_getClassName() const function, expected prototype:\nstd::string SPK::Rotator::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::Rotator* self=Luna< SPK::Registerable >::checkSubType< SPK::Rotator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Rotator::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->Rotator::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::Rotator* LunaTraits< SPK::Rotator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Rotator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Rotator >::_bind_dtor(SPK::Rotator* obj) {
	delete obj;
}

const char LunaTraits< SPK::Rotator >::className[] = "Rotator";
const char LunaTraits< SPK::Rotator >::fullName[] = "SPK::Rotator";
const char LunaTraits< SPK::Rotator >::moduleName[] = "spark";
const char* LunaTraits< SPK::Rotator >::parents[] = {"spark.Modifier", 0};
const int LunaTraits< SPK::Rotator >::hash = 34321968;
const int LunaTraits< SPK::Rotator >::uniqueIDs[] = {31337102, 41560017, 81662222,0};

luna_RegType LunaTraits< SPK::Rotator >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_Rotator::_bind_getClassName},
	{"create", &luna_wrapper_SPK_Rotator::_bind_create},
	{"base_createBuffers", &luna_wrapper_SPK_Rotator::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_Rotator::_bind_base_destroyBuffers},
	{"base_findByName", &luna_wrapper_SPK_Rotator::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_Rotator::_bind_base_getClassName},
	{"__eq", &luna_wrapper_SPK_Rotator::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_Rotator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Rotator::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_Rotator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Rotator >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Rotator::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Rotator::_cast_from_Transformable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_Rotator::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Rotator >::enumValues[] = {
	{0,0}
};


