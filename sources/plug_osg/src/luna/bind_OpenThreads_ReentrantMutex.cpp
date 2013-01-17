#include <plug_common.h>

#include <luna/wrappers/wrapper_OpenThreads_ReentrantMutex.h>

class luna_wrapper_OpenThreads_ReentrantMutex {
public:
	typedef Luna< OpenThreads::ReentrantMutex > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		OpenThreads::Mutex* self=(Luna< OpenThreads::Mutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<OpenThreads::Mutex,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3168391) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::Mutex*)");
		}

		OpenThreads::Mutex* rhs =(Luna< OpenThreads::Mutex >::check(L,2));
		OpenThreads::Mutex* self=(Luna< OpenThreads::Mutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Mutex(lua_State *L) {
		// all checked are already performed before reaching this point.
		//OpenThreads::ReentrantMutex* ptr= dynamic_cast< OpenThreads::ReentrantMutex* >(Luna< OpenThreads::Mutex >::check(L,1));
		OpenThreads::ReentrantMutex* ptr= luna_caster< OpenThreads::Mutex, OpenThreads::ReentrantMutex >::cast(Luna< OpenThreads::Mutex >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< OpenThreads::ReentrantMutex >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

OpenThreads::ReentrantMutex* LunaTraits< OpenThreads::ReentrantMutex >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< OpenThreads::ReentrantMutex >::_bind_dtor(OpenThreads::ReentrantMutex* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::ReentrantMutex >::className[] = "ReentrantMutex";
const char LunaTraits< OpenThreads::ReentrantMutex >::fullName[] = "OpenThreads::ReentrantMutex";
const char LunaTraits< OpenThreads::ReentrantMutex >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::ReentrantMutex >::parents[] = {"sgt.Mutex", 0};
const int LunaTraits< OpenThreads::ReentrantMutex >::hash = 12462362;
const int LunaTraits< OpenThreads::ReentrantMutex >::uniqueIDs[] = {3168391,0};

luna_RegType LunaTraits< OpenThreads::ReentrantMutex >::methods[] = {
	{"__eq", &luna_wrapper_OpenThreads_ReentrantMutex::_bind___eq},
	{"getTable", &luna_wrapper_OpenThreads_ReentrantMutex::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::ReentrantMutex >::converters[] = {
	{"OpenThreads::Mutex", &luna_wrapper_OpenThreads_ReentrantMutex::_cast_from_Mutex},
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::ReentrantMutex >::enumValues[] = {
	{0,0}
};


