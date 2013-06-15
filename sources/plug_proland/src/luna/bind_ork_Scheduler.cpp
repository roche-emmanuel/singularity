#include <plug_common.h>

class luna_wrapper_ork_Scheduler {
public:
	typedef Luna< ork::Scheduler > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Scheduler* self= (ork::Scheduler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Scheduler >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::Scheduler* ptr= dynamic_cast< ork::Scheduler* >(Luna< ork::Object >::check(L,1));
		ork::Scheduler* ptr= luna_caster< ork::Object, ork::Scheduler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Scheduler >::push(L,ptr,false);
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

ork::Scheduler* LunaTraits< ork::Scheduler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::Scheduler >::_bind_dtor(ork::Scheduler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Scheduler >::className[] = "Scheduler";
const char LunaTraits< ork::Scheduler >::fullName[] = "ork::Scheduler";
const char LunaTraits< ork::Scheduler >::moduleName[] = "ork";
const char* LunaTraits< ork::Scheduler >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Scheduler >::hash = 55865406;
const int LunaTraits< ork::Scheduler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Scheduler >::methods[] = {
	{"fromVoid", &luna_wrapper_ork_Scheduler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Scheduler::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Scheduler >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Scheduler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Scheduler >::enumValues[] = {
	{0,0}
};


