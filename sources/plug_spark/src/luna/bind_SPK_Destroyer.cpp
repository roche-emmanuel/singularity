#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Destroyer.h>

class luna_wrapper_SPK_Destroyer {
public:
	typedef Luna< SPK::Destroyer > luna_t;

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
		//SPK::Destroyer* ptr= dynamic_cast< SPK::Destroyer* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Destroyer* ptr= luna_caster< SPK::Registerable, SPK::Destroyer >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Destroyer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Destroyer* ptr= dynamic_cast< SPK::Destroyer* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Destroyer* ptr= luna_caster< SPK::Transformable, SPK::Destroyer >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Destroyer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Destroyer* ptr= dynamic_cast< SPK::Destroyer* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::Destroyer* ptr= luna_caster< SPK::BufferHandler, SPK::Destroyer >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Destroyer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,31337102)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// SPK::Destroyer::Destroyer(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE)
	static SPK::Destroyer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Destroyer::Destroyer(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE) function, expected prototype:\nSPK::Destroyer::Destroyer(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE)\nClass arguments details:\narg 2 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=luatop>1 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,2)) : (SPK::Zone*)NULL;
		SPK::ModifierTrigger trigger=luatop>2 ? (SPK::ModifierTrigger)lua_tointeger(L,3) : SPK::INSIDE_ZONE;

		return new wrapper_SPK_Destroyer(L,NULL, zone, trigger);
	}


	// Function binds:
	// std::string SPK::Destroyer::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Destroyer::getClassName() const function, expected prototype:\nstd::string SPK::Destroyer::getClassName() const\nClass arguments details:\n");
		}


		SPK::Destroyer* self=Luna< SPK::Registerable >::checkSubType< SPK::Destroyer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Destroyer::getClassName() const");
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static SPK::Destroyer * SPK::Destroyer::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::Destroyer * SPK::Destroyer::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE) function, expected prototype:\nstatic SPK::Destroyer * SPK::Destroyer::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=luatop>0 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1)) : (SPK::Zone*)NULL;
		SPK::ModifierTrigger trigger=luatop>1 ? (SPK::ModifierTrigger)lua_tointeger(L,2) : SPK::INSIDE_ZONE;

		SPK::Destroyer * lret = SPK::Destroyer::create(zone, trigger);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Destroyer >::push(L,lret,false);

		return 1;
	}

	// void SPK::Destroyer::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Destroyer::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Destroyer::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Destroyer::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Destroyer* self=Luna< SPK::Registerable >::checkSubType< SPK::Destroyer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Destroyer::base_createBuffers(const SPK::Group &)");
		}
		self->Destroyer::createBuffers(group);

		return 0;
	}

	// void SPK::Destroyer::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Destroyer::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Destroyer::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Destroyer::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Destroyer* self=Luna< SPK::Registerable >::checkSubType< SPK::Destroyer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Destroyer::base_destroyBuffers(const SPK::Group &)");
		}
		self->Destroyer::destroyBuffers(group);

		return 0;
	}

	// SPK::Registerable * SPK::Destroyer::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Destroyer::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Destroyer::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Destroyer* self=Luna< SPK::Registerable >::checkSubType< SPK::Destroyer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Destroyer::base_findByName(const std::string &)");
		}
		SPK::Registerable * lret = self->Destroyer::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::Destroyer::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Destroyer::base_getClassName() const function, expected prototype:\nstd::string SPK::Destroyer::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::Destroyer* self=Luna< SPK::Registerable >::checkSubType< SPK::Destroyer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Destroyer::base_getClassName() const");
		}
		std::string lret = self->Destroyer::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::Destroyer* LunaTraits< SPK::Destroyer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Destroyer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Destroyer >::_bind_dtor(SPK::Destroyer* obj) {
	delete obj;
}

const char LunaTraits< SPK::Destroyer >::className[] = "Destroyer";
const char LunaTraits< SPK::Destroyer >::fullName[] = "SPK::Destroyer";
const char LunaTraits< SPK::Destroyer >::moduleName[] = "SPK";
const char* LunaTraits< SPK::Destroyer >::parents[] = {"SPK.Modifier", 0};
const int LunaTraits< SPK::Destroyer >::hash = 38701661;
const int LunaTraits< SPK::Destroyer >::uniqueIDs[] = {31337102, 41560017, 81662222,0};

luna_RegType LunaTraits< SPK::Destroyer >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_Destroyer::_bind_getClassName},
	{"create", &luna_wrapper_SPK_Destroyer::_bind_create},
	{"base_createBuffers", &luna_wrapper_SPK_Destroyer::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_Destroyer::_bind_base_destroyBuffers},
	{"base_findByName", &luna_wrapper_SPK_Destroyer::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_Destroyer::_bind_base_getClassName},
	{"__eq", &luna_wrapper_SPK_Destroyer::_bind___eq},
	{"getTable", &luna_wrapper_SPK_Destroyer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Destroyer >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Destroyer::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Destroyer::_cast_from_Transformable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_Destroyer::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Destroyer >::enumValues[] = {
	{0,0}
};


