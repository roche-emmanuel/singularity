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

	// Function binds:
	// std::string SPK::RandomEmitter::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::RandomEmitter::getClassName() const function, expected prototype:\nstd::string SPK::RandomEmitter::getClassName() const\nClass arguments details:\n");
		}


		SPK::RandomEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::RandomEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::RandomEmitter::getClassName() const");
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static SPK::RandomEmitter * SPK::RandomEmitter::create()
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::RandomEmitter * SPK::RandomEmitter::create() function, expected prototype:\nstatic SPK::RandomEmitter * SPK::RandomEmitter::create()\nClass arguments details:\n");
		}


		SPK::RandomEmitter * lret = SPK::RandomEmitter::create();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::RandomEmitter >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::RandomEmitter::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::RandomEmitter::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::RandomEmitter::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::RandomEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::RandomEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::RandomEmitter::base_findByName(const std::string &)");
		}
		SPK::Registerable * lret = self->RandomEmitter::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::RandomEmitter::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::RandomEmitter::base_getClassName() const function, expected prototype:\nstd::string SPK::RandomEmitter::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::RandomEmitter* self=Luna< SPK::Registerable >::checkSubType< SPK::RandomEmitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::RandomEmitter::base_getClassName() const");
		}
		std::string lret = self->RandomEmitter::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::RandomEmitter* LunaTraits< SPK::RandomEmitter >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::RandomEmitter >::_bind_dtor(SPK::RandomEmitter* obj) {
	delete obj;
}

const char LunaTraits< SPK::RandomEmitter >::className[] = "RandomEmitter";
const char LunaTraits< SPK::RandomEmitter >::fullName[] = "SPK::RandomEmitter";
const char LunaTraits< SPK::RandomEmitter >::moduleName[] = "SPK";
const char* LunaTraits< SPK::RandomEmitter >::parents[] = {"SPK.Emitter", 0};
const int LunaTraits< SPK::RandomEmitter >::hash = 79615935;
const int LunaTraits< SPK::RandomEmitter >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::RandomEmitter >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_RandomEmitter::_bind_getClassName},
	{"create", &luna_wrapper_SPK_RandomEmitter::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_RandomEmitter::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_RandomEmitter::_bind_base_getClassName},
	{"__eq", &luna_wrapper_SPK_RandomEmitter::_bind___eq},
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


