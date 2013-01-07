#include <plug_common.h>

#include <luna/wrappers/wrapper_OpenThreads_Barrier.h>

class luna_wrapper_OpenThreads_Barrier {
public:
	typedef Luna< OpenThreads::Barrier > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<OpenThreads::Barrier,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8229717) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::Barrier*)");
		}

		OpenThreads::Barrier* rhs =(Luna< OpenThreads::Barrier >::check(L,2));
		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
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

		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::Barrier");
		
		return luna_dynamicCast(L,converters,"OpenThreads::Barrier",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_block(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_numThreadsCurrentlyBlocked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_invalidate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_block(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_numThreadsCurrentlyBlocked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// OpenThreads::Barrier::Barrier(int numThreads = 0)
	static OpenThreads::Barrier* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OpenThreads::Barrier::Barrier(int numThreads = 0) function, expected prototype:\nOpenThreads::Barrier::Barrier(int numThreads = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int numThreads=luatop>0 ? (int)lua_tointeger(L,1) : 0;

		return new OpenThreads::Barrier(numThreads);
	}

	// OpenThreads::Barrier::Barrier(lua_Table * data, int numThreads = 0)
	static OpenThreads::Barrier* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OpenThreads::Barrier::Barrier(lua_Table * data, int numThreads = 0) function, expected prototype:\nOpenThreads::Barrier::Barrier(lua_Table * data, int numThreads = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int numThreads=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		return new wrapper_OpenThreads_Barrier(L,NULL, numThreads);
	}

	// Overload binder for OpenThreads::Barrier::Barrier
	static OpenThreads::Barrier* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Barrier, cannot match any of the overloads for function Barrier:\n  Barrier(int)\n  Barrier(lua_Table *, int)\n");
		return NULL;
	}


	// Function binds:
	// void OpenThreads::Barrier::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void OpenThreads::Barrier::reset() function, expected prototype:\nvoid OpenThreads::Barrier::reset()\nClass arguments details:\n");
		}


		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void OpenThreads::Barrier::reset(). Got : '%s'",typeid(Luna< OpenThreads::Barrier >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// void OpenThreads::Barrier::block(unsigned int numThreads = 0)
	static int _bind_block(lua_State *L) {
		if (!_lg_typecheck_block(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void OpenThreads::Barrier::block(unsigned int numThreads = 0) function, expected prototype:\nvoid OpenThreads::Barrier::block(unsigned int numThreads = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int numThreads=luatop>1 ? (unsigned int)lua_tointeger(L,2) : 0;

		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void OpenThreads::Barrier::block(unsigned int). Got : '%s'",typeid(Luna< OpenThreads::Barrier >::check(L,1)).name());
		}
		self->block(numThreads);

		return 0;
	}

	// void OpenThreads::Barrier::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void OpenThreads::Barrier::release() function, expected prototype:\nvoid OpenThreads::Barrier::release()\nClass arguments details:\n");
		}


		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void OpenThreads::Barrier::release(). Got : '%s'",typeid(Luna< OpenThreads::Barrier >::check(L,1)).name());
		}
		self->release();

		return 0;
	}

	// int OpenThreads::Barrier::numThreadsCurrentlyBlocked()
	static int _bind_numThreadsCurrentlyBlocked(lua_State *L) {
		if (!_lg_typecheck_numThreadsCurrentlyBlocked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int OpenThreads::Barrier::numThreadsCurrentlyBlocked() function, expected prototype:\nint OpenThreads::Barrier::numThreadsCurrentlyBlocked()\nClass arguments details:\n");
		}


		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int OpenThreads::Barrier::numThreadsCurrentlyBlocked(). Got : '%s'",typeid(Luna< OpenThreads::Barrier >::check(L,1)).name());
		}
		int lret = self->numThreadsCurrentlyBlocked();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void OpenThreads::Barrier::invalidate()
	static int _bind_invalidate(lua_State *L) {
		if (!_lg_typecheck_invalidate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void OpenThreads::Barrier::invalidate() function, expected prototype:\nvoid OpenThreads::Barrier::invalidate()\nClass arguments details:\n");
		}


		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void OpenThreads::Barrier::invalidate(). Got : '%s'",typeid(Luna< OpenThreads::Barrier >::check(L,1)).name());
		}
		self->invalidate();

		return 0;
	}

	// void OpenThreads::Barrier::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void OpenThreads::Barrier::base_reset() function, expected prototype:\nvoid OpenThreads::Barrier::base_reset()\nClass arguments details:\n");
		}


		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void OpenThreads::Barrier::base_reset(). Got : '%s'",typeid(Luna< OpenThreads::Barrier >::check(L,1)).name());
		}
		self->Barrier::reset();

		return 0;
	}

	// void OpenThreads::Barrier::base_block(unsigned int numThreads = 0)
	static int _bind_base_block(lua_State *L) {
		if (!_lg_typecheck_base_block(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void OpenThreads::Barrier::base_block(unsigned int numThreads = 0) function, expected prototype:\nvoid OpenThreads::Barrier::base_block(unsigned int numThreads = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int numThreads=luatop>1 ? (unsigned int)lua_tointeger(L,2) : 0;

		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void OpenThreads::Barrier::base_block(unsigned int). Got : '%s'",typeid(Luna< OpenThreads::Barrier >::check(L,1)).name());
		}
		self->Barrier::block(numThreads);

		return 0;
	}

	// void OpenThreads::Barrier::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void OpenThreads::Barrier::base_release() function, expected prototype:\nvoid OpenThreads::Barrier::base_release()\nClass arguments details:\n");
		}


		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void OpenThreads::Barrier::base_release(). Got : '%s'",typeid(Luna< OpenThreads::Barrier >::check(L,1)).name());
		}
		self->Barrier::release();

		return 0;
	}

	// int OpenThreads::Barrier::base_numThreadsCurrentlyBlocked()
	static int _bind_base_numThreadsCurrentlyBlocked(lua_State *L) {
		if (!_lg_typecheck_base_numThreadsCurrentlyBlocked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int OpenThreads::Barrier::base_numThreadsCurrentlyBlocked() function, expected prototype:\nint OpenThreads::Barrier::base_numThreadsCurrentlyBlocked()\nClass arguments details:\n");
		}


		OpenThreads::Barrier* self=(Luna< OpenThreads::Barrier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int OpenThreads::Barrier::base_numThreadsCurrentlyBlocked(). Got : '%s'",typeid(Luna< OpenThreads::Barrier >::check(L,1)).name());
		}
		int lret = self->Barrier::numThreadsCurrentlyBlocked();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

OpenThreads::Barrier* LunaTraits< OpenThreads::Barrier >::_bind_ctor(lua_State *L) {
	return luna_wrapper_OpenThreads_Barrier::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< OpenThreads::Barrier >::_bind_dtor(OpenThreads::Barrier* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::Barrier >::className[] = "Barrier";
const char LunaTraits< OpenThreads::Barrier >::fullName[] = "OpenThreads::Barrier";
const char LunaTraits< OpenThreads::Barrier >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::Barrier >::parents[] = {0};
const int LunaTraits< OpenThreads::Barrier >::hash = 8229717;
const int LunaTraits< OpenThreads::Barrier >::uniqueIDs[] = {8229717,0};

luna_RegType LunaTraits< OpenThreads::Barrier >::methods[] = {
	{"reset", &luna_wrapper_OpenThreads_Barrier::_bind_reset},
	{"block", &luna_wrapper_OpenThreads_Barrier::_bind_block},
	{"release", &luna_wrapper_OpenThreads_Barrier::_bind_release},
	{"numThreadsCurrentlyBlocked", &luna_wrapper_OpenThreads_Barrier::_bind_numThreadsCurrentlyBlocked},
	{"invalidate", &luna_wrapper_OpenThreads_Barrier::_bind_invalidate},
	{"base_reset", &luna_wrapper_OpenThreads_Barrier::_bind_base_reset},
	{"base_block", &luna_wrapper_OpenThreads_Barrier::_bind_base_block},
	{"base_release", &luna_wrapper_OpenThreads_Barrier::_bind_base_release},
	{"base_numThreadsCurrentlyBlocked", &luna_wrapper_OpenThreads_Barrier::_bind_base_numThreadsCurrentlyBlocked},
	{"dynCast", &luna_wrapper_OpenThreads_Barrier::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_Barrier::_bind___eq},
	{"getTable", &luna_wrapper_OpenThreads_Barrier::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::Barrier >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::Barrier >::enumValues[] = {
	{0,0}
};


