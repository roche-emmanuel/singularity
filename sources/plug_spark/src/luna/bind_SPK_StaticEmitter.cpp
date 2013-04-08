#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_StaticEmitter.h>

class luna_wrapper_SPK_StaticEmitter {
public:
	typedef Luna< SPK::StaticEmitter > luna_t;

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

		SPK::StaticEmitter* self= (SPK::StaticEmitter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::StaticEmitter >::push(L,self,false);
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
		//SPK::StaticEmitter* ptr= dynamic_cast< SPK::StaticEmitter* >(Luna< SPK::Registerable >::check(L,1));
		SPK::StaticEmitter* ptr= luna_caster< SPK::Registerable, SPK::StaticEmitter >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::StaticEmitter >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::StaticEmitter* ptr= dynamic_cast< SPK::StaticEmitter* >(Luna< SPK::Transformable >::check(L,1));
		SPK::StaticEmitter* ptr= luna_caster< SPK::Transformable, SPK::StaticEmitter >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::StaticEmitter >::push(L,ptr,false);
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
	// SPK::StaticEmitter::StaticEmitter(lua_Table * data)
	static SPK::StaticEmitter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::StaticEmitter::StaticEmitter(lua_Table * data) function, expected prototype:\nSPK::StaticEmitter::StaticEmitter(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_SPK_StaticEmitter(L,NULL);
	}


	// Function binds:
	// std::string SPK::StaticEmitter::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::StaticEmitter::getClassName() const function, expected prototype:\nstd::string SPK::StaticEmitter::getClassName() const\nClass arguments details:\n");
		}


		SPK::StaticEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::StaticEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::StaticEmitter::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static SPK::StaticEmitter * SPK::StaticEmitter::create()
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::StaticEmitter * SPK::StaticEmitter::create() function, expected prototype:\nstatic SPK::StaticEmitter * SPK::StaticEmitter::create()\nClass arguments details:\n");
		}


		SPK::StaticEmitter * lret = SPK::StaticEmitter::create();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::StaticEmitter >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::StaticEmitter::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::StaticEmitter::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::StaticEmitter::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::StaticEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::StaticEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::StaticEmitter::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->StaticEmitter::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::StaticEmitter::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::StaticEmitter::base_getClassName() const function, expected prototype:\nstd::string SPK::StaticEmitter::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::StaticEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::StaticEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::StaticEmitter::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->StaticEmitter::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::StaticEmitter* LunaTraits< SPK::StaticEmitter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_StaticEmitter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::StaticEmitter >::_bind_dtor(SPK::StaticEmitter* obj) {
	delete obj;
}

const char LunaTraits< SPK::StaticEmitter >::className[] = "StaticEmitter";
const char LunaTraits< SPK::StaticEmitter >::fullName[] = "SPK::StaticEmitter";
const char LunaTraits< SPK::StaticEmitter >::moduleName[] = "spark";
const char* LunaTraits< SPK::StaticEmitter >::parents[] = {"spark.Emitter", 0};
const int LunaTraits< SPK::StaticEmitter >::hash = 47632372;
const int LunaTraits< SPK::StaticEmitter >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::StaticEmitter >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_StaticEmitter::_bind_getClassName},
	{"create", &luna_wrapper_SPK_StaticEmitter::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_StaticEmitter::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_StaticEmitter::_bind_base_getClassName},
	{"__eq", &luna_wrapper_SPK_StaticEmitter::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_StaticEmitter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_StaticEmitter::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_StaticEmitter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::StaticEmitter >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_StaticEmitter::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_StaticEmitter::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::StaticEmitter >::enumValues[] = {
	{0,0}
};


