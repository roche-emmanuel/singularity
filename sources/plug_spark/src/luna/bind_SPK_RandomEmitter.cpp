#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_RandomEmitter.h>

class luna_wrapper_SPK_RandomEmitter {
public:
	typedef Luna< SPK::RandomEmitter > luna_t;

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

		SPK::RandomEmitter* self= (SPK::RandomEmitter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::RandomEmitter >::push(L,self,false);
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
		//SPK::RandomEmitter* ptr= dynamic_cast< SPK::RandomEmitter* >(Luna< SPK::Registerable >::check(L,1));
		SPK::RandomEmitter* ptr= luna_caster< SPK::Registerable, SPK::RandomEmitter >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::RandomEmitter >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::RandomEmitter* ptr= dynamic_cast< SPK::RandomEmitter* >(Luna< SPK::Transformable >::check(L,1));
		SPK::RandomEmitter* ptr= luna_caster< SPK::Transformable, SPK::RandomEmitter >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::RandomEmitter >::push(L,ptr,false);
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
	// SPK::RandomEmitter::RandomEmitter(lua_Table * data)
	static SPK::RandomEmitter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in SPK::RandomEmitter::RandomEmitter(lua_Table * data) function, expected prototype:\nSPK::RandomEmitter::RandomEmitter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_SPK_RandomEmitter(L,NULL);
	}


	// Function binds:
	// std::string SPK::RandomEmitter::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::RandomEmitter::getClassName() const function, expected prototype:\nstd::string SPK::RandomEmitter::getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::RandomEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::RandomEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::RandomEmitter::getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static SPK::RandomEmitter * SPK::RandomEmitter::create()
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luaL_error(L, "luna typecheck failed in static SPK::RandomEmitter * SPK::RandomEmitter::create() function, expected prototype:\nstatic SPK::RandomEmitter * SPK::RandomEmitter::create()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::RandomEmitter * lret = SPK::RandomEmitter::create();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::RandomEmitter >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::RandomEmitter::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::RandomEmitter::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::RandomEmitter::base_findByName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::RandomEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::RandomEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::RandomEmitter::base_findByName(const std::string &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Registerable * lret = self->RandomEmitter::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::RandomEmitter::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::RandomEmitter::base_getClassName() const function, expected prototype:\nstd::string SPK::RandomEmitter::base_getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::RandomEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::RandomEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::RandomEmitter::base_getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->RandomEmitter::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::RandomEmitter* LunaTraits< SPK::RandomEmitter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_RandomEmitter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::RandomEmitter >::_bind_dtor(SPK::RandomEmitter* obj) {
	delete obj;
}

const char LunaTraits< SPK::RandomEmitter >::className[] = "RandomEmitter";
const char LunaTraits< SPK::RandomEmitter >::fullName[] = "SPK::RandomEmitter";
const char LunaTraits< SPK::RandomEmitter >::moduleName[] = "spark";
const char* LunaTraits< SPK::RandomEmitter >::parents[] = {"spark.Emitter", 0};
const int LunaTraits< SPK::RandomEmitter >::hash = 79615935;
const int LunaTraits< SPK::RandomEmitter >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::RandomEmitter >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_RandomEmitter::_bind_getClassName},
	{"create", &luna_wrapper_SPK_RandomEmitter::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_RandomEmitter::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_RandomEmitter::_bind_base_getClassName},
	{"fromVoid", &luna_wrapper_SPK_RandomEmitter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_RandomEmitter::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_RandomEmitter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::RandomEmitter >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_RandomEmitter::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_RandomEmitter::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::RandomEmitter >::enumValues[] = {
	{0,0}
};


