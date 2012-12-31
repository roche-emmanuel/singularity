#include <plug_common.h>

class luna_wrapper_SPK_SPKFactory {
public:
	typedef Luna< SPK::SPKFactory > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51091037) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::SPKFactory*)");
		}

		SPK::SPKFactory* rhs =(Luna< SPK::SPKFactory >::check(L,2));
		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::SPKFactory");
		
		return luna_dynamicCast(L,converters,"SPK::SPKFactory",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getInstance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_destroyInstance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNbObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copy_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copy_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< SPK::Registerable >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroy_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroy_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< SPK::Registerable >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroyAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_trace_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_trace_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< SPK::Registerable >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traceAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static SPK::SPKFactory & SPK::SPKFactory::getInstance()
	static int _bind_getInstance(lua_State *L) {
		if (!_lg_typecheck_getInstance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::SPKFactory & SPK::SPKFactory::getInstance() function, expected prototype:\nstatic SPK::SPKFactory & SPK::SPKFactory::getInstance()\nClass arguments details:\n");
		}


		const SPK::SPKFactory* lret = &SPK::SPKFactory::getInstance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::SPKFactory >::push(L,lret,false);

		return 1;
	}

	// static void SPK::SPKFactory::destroyInstance()
	static int _bind_destroyInstance(lua_State *L) {
		if (!_lg_typecheck_destroyInstance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::SPKFactory::destroyInstance() function, expected prototype:\nstatic void SPK::SPKFactory::destroyInstance()\nClass arguments details:\n");
		}


		SPK::SPKFactory::destroyInstance();

		return 0;
	}

	// size_t SPK::SPKFactory::getNbObjects() const
	static int _bind_getNbObjects(lua_State *L) {
		if (!_lg_typecheck_getNbObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::SPKFactory::getNbObjects() const function, expected prototype:\nsize_t SPK::SPKFactory::getNbObjects() const\nClass arguments details:\n");
		}


		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::SPKFactory::getNbObjects() const");
		}
		size_t lret = self->getNbObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long SPK::SPKFactory::create(const SPK::Registerable & base)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long SPK::SPKFactory::create(const SPK::Registerable & base) function, expected prototype:\nunsigned long SPK::SPKFactory::create(const SPK::Registerable & base)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Registerable* base_ptr=(Luna< SPK::Registerable >::check(L,2));
		if( !base_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg base in SPK::SPKFactory::create function");
		}
		const SPK::Registerable & base=*base_ptr;

		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long SPK::SPKFactory::create(const SPK::Registerable &)");
		}
		unsigned long lret = self->create(base);
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::Registerable * SPK::SPKFactory::copy(unsigned long ID)
	static int _bind_copy_overload_1(lua_State *L) {
		if (!_lg_typecheck_copy_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::SPKFactory::copy(unsigned long ID) function, expected prototype:\nSPK::Registerable * SPK::SPKFactory::copy(unsigned long ID)\nClass arguments details:\n");
		}

		unsigned long ID=(unsigned long)lua_tointeger(L,2);

		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::SPKFactory::copy(unsigned long)");
		}
		SPK::Registerable * lret = self->copy(ID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::SPKFactory::copy(const SPK::Registerable * registerable)
	static int _bind_copy_overload_2(lua_State *L) {
		if (!_lg_typecheck_copy_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::SPKFactory::copy(const SPK::Registerable * registerable) function, expected prototype:\nSPK::Registerable * SPK::SPKFactory::copy(const SPK::Registerable * registerable)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Registerable* registerable=(Luna< SPK::Registerable >::check(L,2));

		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::SPKFactory::copy(const SPK::Registerable *)");
		}
		SPK::Registerable * lret = self->copy(registerable);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SPK::SPKFactory::copy
	static int _bind_copy(lua_State *L) {
		if (_lg_typecheck_copy_overload_1(L)) return _bind_copy_overload_1(L);
		if (_lg_typecheck_copy_overload_2(L)) return _bind_copy_overload_2(L);

		luaL_error(L, "error in function copy, cannot match any of the overloads for function copy:\n  copy(unsigned long)\n  copy(const SPK::Registerable *)\n");
		return 0;
	}

	// SPK::Registerable * SPK::SPKFactory::get(unsigned long ID)
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::SPKFactory::get(unsigned long ID) function, expected prototype:\nSPK::Registerable * SPK::SPKFactory::get(unsigned long ID)\nClass arguments details:\n");
		}

		unsigned long ID=(unsigned long)lua_tointeger(L,2);

		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::SPKFactory::get(unsigned long)");
		}
		SPK::Registerable * lret = self->get(ID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// bool SPK::SPKFactory::destroy(unsigned long ID, bool checkNbReferences = true)
	static int _bind_destroy_overload_1(lua_State *L) {
		if (!_lg_typecheck_destroy_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::SPKFactory::destroy(unsigned long ID, bool checkNbReferences = true) function, expected prototype:\nbool SPK::SPKFactory::destroy(unsigned long ID, bool checkNbReferences = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned long ID=(unsigned long)lua_tointeger(L,2);
		bool checkNbReferences=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::SPKFactory::destroy(unsigned long, bool)");
		}
		bool lret = self->destroy(ID, checkNbReferences);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::SPKFactory::destroy(SPK::Registerable * registerable, bool checkNbReferences = true)
	static int _bind_destroy_overload_2(lua_State *L) {
		if (!_lg_typecheck_destroy_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::SPKFactory::destroy(SPK::Registerable * registerable, bool checkNbReferences = true) function, expected prototype:\nbool SPK::SPKFactory::destroy(SPK::Registerable * registerable, bool checkNbReferences = true)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::Registerable* registerable=(Luna< SPK::Registerable >::check(L,2));
		bool checkNbReferences=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::SPKFactory::destroy(SPK::Registerable *, bool)");
		}
		bool lret = self->destroy(registerable, checkNbReferences);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for SPK::SPKFactory::destroy
	static int _bind_destroy(lua_State *L) {
		if (_lg_typecheck_destroy_overload_1(L)) return _bind_destroy_overload_1(L);
		if (_lg_typecheck_destroy_overload_2(L)) return _bind_destroy_overload_2(L);

		luaL_error(L, "error in function destroy, cannot match any of the overloads for function destroy:\n  destroy(unsigned long, bool)\n  destroy(SPK::Registerable *, bool)\n");
		return 0;
	}

	// void SPK::SPKFactory::destroyAll()
	static int _bind_destroyAll(lua_State *L) {
		if (!_lg_typecheck_destroyAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::SPKFactory::destroyAll() function, expected prototype:\nvoid SPK::SPKFactory::destroyAll()\nClass arguments details:\n");
		}


		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::SPKFactory::destroyAll()");
		}
		self->destroyAll();

		return 0;
	}

	// void SPK::SPKFactory::trace(unsigned long ID)
	static int _bind_trace_overload_1(lua_State *L) {
		if (!_lg_typecheck_trace_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::SPKFactory::trace(unsigned long ID) function, expected prototype:\nvoid SPK::SPKFactory::trace(unsigned long ID)\nClass arguments details:\n");
		}

		unsigned long ID=(unsigned long)lua_tointeger(L,2);

		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::SPKFactory::trace(unsigned long)");
		}
		self->trace(ID);

		return 0;
	}

	// void SPK::SPKFactory::trace(const SPK::Registerable * registerable)
	static int _bind_trace_overload_2(lua_State *L) {
		if (!_lg_typecheck_trace_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::SPKFactory::trace(const SPK::Registerable * registerable) function, expected prototype:\nvoid SPK::SPKFactory::trace(const SPK::Registerable * registerable)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Registerable* registerable=(Luna< SPK::Registerable >::check(L,2));

		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::SPKFactory::trace(const SPK::Registerable *)");
		}
		self->trace(registerable);

		return 0;
	}

	// Overload binder for SPK::SPKFactory::trace
	static int _bind_trace(lua_State *L) {
		if (_lg_typecheck_trace_overload_1(L)) return _bind_trace_overload_1(L);
		if (_lg_typecheck_trace_overload_2(L)) return _bind_trace_overload_2(L);

		luaL_error(L, "error in function trace, cannot match any of the overloads for function trace:\n  trace(unsigned long)\n  trace(const SPK::Registerable *)\n");
		return 0;
	}

	// void SPK::SPKFactory::traceAll()
	static int _bind_traceAll(lua_State *L) {
		if (!_lg_typecheck_traceAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::SPKFactory::traceAll() function, expected prototype:\nvoid SPK::SPKFactory::traceAll()\nClass arguments details:\n");
		}


		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::SPKFactory::traceAll()");
		}
		self->traceAll();

		return 0;
	}

	// SPK::Registerable * SPK::SPKFactory::findByName(const std::string & name)
	static int _bind_findByName(lua_State *L) {
		if (!_lg_typecheck_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::SPKFactory::findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::SPKFactory::findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::SPKFactory* self=(Luna< SPK::SPKFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::SPKFactory::findByName(const std::string &)");
		}
		SPK::Registerable * lret = self->findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

SPK::SPKFactory* LunaTraits< SPK::SPKFactory >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SPK::SPKFactory >::_bind_dtor(SPK::SPKFactory* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SPK::SPKFactory >::className[] = "SPKFactory";
const char LunaTraits< SPK::SPKFactory >::fullName[] = "SPK::SPKFactory";
const char LunaTraits< SPK::SPKFactory >::moduleName[] = "spark";
const char* LunaTraits< SPK::SPKFactory >::parents[] = {0};
const int LunaTraits< SPK::SPKFactory >::hash = 51091037;
const int LunaTraits< SPK::SPKFactory >::uniqueIDs[] = {51091037,0};

luna_RegType LunaTraits< SPK::SPKFactory >::methods[] = {
	{"getInstance", &luna_wrapper_SPK_SPKFactory::_bind_getInstance},
	{"destroyInstance", &luna_wrapper_SPK_SPKFactory::_bind_destroyInstance},
	{"getNbObjects", &luna_wrapper_SPK_SPKFactory::_bind_getNbObjects},
	{"create", &luna_wrapper_SPK_SPKFactory::_bind_create},
	{"copy", &luna_wrapper_SPK_SPKFactory::_bind_copy},
	{"get", &luna_wrapper_SPK_SPKFactory::_bind_get},
	{"destroy", &luna_wrapper_SPK_SPKFactory::_bind_destroy},
	{"destroyAll", &luna_wrapper_SPK_SPKFactory::_bind_destroyAll},
	{"trace", &luna_wrapper_SPK_SPKFactory::_bind_trace},
	{"traceAll", &luna_wrapper_SPK_SPKFactory::_bind_traceAll},
	{"findByName", &luna_wrapper_SPK_SPKFactory::_bind_findByName},
	{"dynCast", &luna_wrapper_SPK_SPKFactory::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_SPKFactory::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::SPKFactory >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::SPKFactory >::enumValues[] = {
	{0,0}
};


