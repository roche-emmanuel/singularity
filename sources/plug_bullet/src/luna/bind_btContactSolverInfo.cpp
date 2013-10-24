#include <plug_common.h>

class luna_wrapper_btContactSolverInfo {
public:
	typedef Luna< btContactSolverInfo > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btContactSolverInfo* self= (btContactSolverInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btContactSolverInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5410878) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btContactSolverInfoData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btContactSolverInfoData(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btContactSolverInfo* ptr= dynamic_cast< btContactSolverInfo* >(Luna< btContactSolverInfoData >::check(L,1));
		btContactSolverInfo* ptr= luna_caster< btContactSolverInfoData, btContactSolverInfo >::cast(Luna< btContactSolverInfoData >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btContactSolverInfo >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btContactSolverInfo::btContactSolverInfo()
	static btContactSolverInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btContactSolverInfo::btContactSolverInfo() function, expected prototype:\nbtContactSolverInfo::btContactSolverInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btContactSolverInfo();
	}


	// Function binds:

	// Operator binds:

};

btContactSolverInfo* LunaTraits< btContactSolverInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btContactSolverInfo::_bind_ctor(L);
}

void LunaTraits< btContactSolverInfo >::_bind_dtor(btContactSolverInfo* obj) {
	delete obj;
}

const char LunaTraits< btContactSolverInfo >::className[] = "btContactSolverInfo";
const char LunaTraits< btContactSolverInfo >::fullName[] = "btContactSolverInfo";
const char LunaTraits< btContactSolverInfo >::moduleName[] = "bullet";
const char* LunaTraits< btContactSolverInfo >::parents[] = {"bullet.btContactSolverInfoData", 0};
const int LunaTraits< btContactSolverInfo >::hash = 50007106;
const int LunaTraits< btContactSolverInfo >::uniqueIDs[] = {5410878,0};

luna_RegType LunaTraits< btContactSolverInfo >::methods[] = {
	{"fromVoid", &luna_wrapper_btContactSolverInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btContactSolverInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btContactSolverInfo >::converters[] = {
	{"btContactSolverInfoData", &luna_wrapper_btContactSolverInfo::_cast_from_btContactSolverInfoData},
	{0,0}
};

luna_RegEnumType LunaTraits< btContactSolverInfo >::enumValues[] = {
	{0,0}
};


