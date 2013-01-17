#include <plug_common.h>

class luna_wrapper_CProfileManager {
public:
	typedef Luna< CProfileManager > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47831987) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(CProfileManager*)");
		}

		CProfileManager* rhs =(Luna< CProfileManager >::check(L,2));
		CProfileManager* self=(Luna< CProfileManager >::check(L,1));
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

		CProfileManager* self=(Luna< CProfileManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("CProfileManager");
		
		return luna_dynamicCast(L,converters,"CProfileManager",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Start_Profile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Stop_Profile(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CleanupMemory(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Reset(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Increment_Frame_Counter(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Frame_Count_Since_Reset(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Time_Since_Reset(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Iterator(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Release_Iterator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,52791109)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dumpRecursive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,52791109)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dumpAll(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static void CProfileManager::Start_Profile(const char * name)
	static int _bind_Start_Profile(lua_State *L) {
		if (!_lg_typecheck_Start_Profile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void CProfileManager::Start_Profile(const char * name) function, expected prototype:\nstatic void CProfileManager::Start_Profile(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,1);

		CProfileManager::Start_Profile(name);

		return 0;
	}

	// static void CProfileManager::Stop_Profile()
	static int _bind_Stop_Profile(lua_State *L) {
		if (!_lg_typecheck_Stop_Profile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void CProfileManager::Stop_Profile() function, expected prototype:\nstatic void CProfileManager::Stop_Profile()\nClass arguments details:\n");
		}


		CProfileManager::Stop_Profile();

		return 0;
	}

	// static void CProfileManager::CleanupMemory()
	static int _bind_CleanupMemory(lua_State *L) {
		if (!_lg_typecheck_CleanupMemory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void CProfileManager::CleanupMemory() function, expected prototype:\nstatic void CProfileManager::CleanupMemory()\nClass arguments details:\n");
		}


		CProfileManager::CleanupMemory();

		return 0;
	}

	// static void CProfileManager::Reset()
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void CProfileManager::Reset() function, expected prototype:\nstatic void CProfileManager::Reset()\nClass arguments details:\n");
		}


		CProfileManager::Reset();

		return 0;
	}

	// static void CProfileManager::Increment_Frame_Counter()
	static int _bind_Increment_Frame_Counter(lua_State *L) {
		if (!_lg_typecheck_Increment_Frame_Counter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void CProfileManager::Increment_Frame_Counter() function, expected prototype:\nstatic void CProfileManager::Increment_Frame_Counter()\nClass arguments details:\n");
		}


		CProfileManager::Increment_Frame_Counter();

		return 0;
	}

	// static int CProfileManager::Get_Frame_Count_Since_Reset()
	static int _bind_Get_Frame_Count_Since_Reset(lua_State *L) {
		if (!_lg_typecheck_Get_Frame_Count_Since_Reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int CProfileManager::Get_Frame_Count_Since_Reset() function, expected prototype:\nstatic int CProfileManager::Get_Frame_Count_Since_Reset()\nClass arguments details:\n");
		}


		int lret = CProfileManager::Get_Frame_Count_Since_Reset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static float CProfileManager::Get_Time_Since_Reset()
	static int _bind_Get_Time_Since_Reset(lua_State *L) {
		if (!_lg_typecheck_Get_Time_Since_Reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static float CProfileManager::Get_Time_Since_Reset() function, expected prototype:\nstatic float CProfileManager::Get_Time_Since_Reset()\nClass arguments details:\n");
		}


		float lret = CProfileManager::Get_Time_Since_Reset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static CProfileIterator * CProfileManager::Get_Iterator()
	static int _bind_Get_Iterator(lua_State *L) {
		if (!_lg_typecheck_Get_Iterator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static CProfileIterator * CProfileManager::Get_Iterator() function, expected prototype:\nstatic CProfileIterator * CProfileManager::Get_Iterator()\nClass arguments details:\n");
		}


		CProfileIterator * lret = CProfileManager::Get_Iterator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< CProfileIterator >::push(L,lret,false);

		return 1;
	}

	// static void CProfileManager::Release_Iterator(CProfileIterator * iterator)
	static int _bind_Release_Iterator(lua_State *L) {
		if (!_lg_typecheck_Release_Iterator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void CProfileManager::Release_Iterator(CProfileIterator * iterator) function, expected prototype:\nstatic void CProfileManager::Release_Iterator(CProfileIterator * iterator)\nClass arguments details:\narg 1 ID = 52791109\n");
		}

		CProfileIterator* iterator=(Luna< CProfileIterator >::check(L,1));

		CProfileManager::Release_Iterator(iterator);

		return 0;
	}

	// static void CProfileManager::dumpRecursive(CProfileIterator * profileIterator, int spacing)
	static int _bind_dumpRecursive(lua_State *L) {
		if (!_lg_typecheck_dumpRecursive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void CProfileManager::dumpRecursive(CProfileIterator * profileIterator, int spacing) function, expected prototype:\nstatic void CProfileManager::dumpRecursive(CProfileIterator * profileIterator, int spacing)\nClass arguments details:\narg 1 ID = 52791109\n");
		}

		CProfileIterator* profileIterator=(Luna< CProfileIterator >::check(L,1));
		int spacing=(int)lua_tointeger(L,2);

		CProfileManager::dumpRecursive(profileIterator, spacing);

		return 0;
	}

	// static void CProfileManager::dumpAll()
	static int _bind_dumpAll(lua_State *L) {
		if (!_lg_typecheck_dumpAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void CProfileManager::dumpAll() function, expected prototype:\nstatic void CProfileManager::dumpAll()\nClass arguments details:\n");
		}


		CProfileManager::dumpAll();

		return 0;
	}


	// Operator binds:

};

CProfileManager* LunaTraits< CProfileManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< CProfileManager >::_bind_dtor(CProfileManager* obj) {
	delete obj;
}

const char LunaTraits< CProfileManager >::className[] = "CProfileManager";
const char LunaTraits< CProfileManager >::fullName[] = "CProfileManager";
const char LunaTraits< CProfileManager >::moduleName[] = "bullet";
const char* LunaTraits< CProfileManager >::parents[] = {0};
const int LunaTraits< CProfileManager >::hash = 47831987;
const int LunaTraits< CProfileManager >::uniqueIDs[] = {47831987,0};

luna_RegType LunaTraits< CProfileManager >::methods[] = {
	{"Start_Profile", &luna_wrapper_CProfileManager::_bind_Start_Profile},
	{"Stop_Profile", &luna_wrapper_CProfileManager::_bind_Stop_Profile},
	{"CleanupMemory", &luna_wrapper_CProfileManager::_bind_CleanupMemory},
	{"Reset", &luna_wrapper_CProfileManager::_bind_Reset},
	{"Increment_Frame_Counter", &luna_wrapper_CProfileManager::_bind_Increment_Frame_Counter},
	{"Get_Frame_Count_Since_Reset", &luna_wrapper_CProfileManager::_bind_Get_Frame_Count_Since_Reset},
	{"Get_Time_Since_Reset", &luna_wrapper_CProfileManager::_bind_Get_Time_Since_Reset},
	{"Get_Iterator", &luna_wrapper_CProfileManager::_bind_Get_Iterator},
	{"Release_Iterator", &luna_wrapper_CProfileManager::_bind_Release_Iterator},
	{"dumpRecursive", &luna_wrapper_CProfileManager::_bind_dumpRecursive},
	{"dumpAll", &luna_wrapper_CProfileManager::_bind_dumpAll},
	{"dynCast", &luna_wrapper_CProfileManager::_bind_dynCast},
	{"__eq", &luna_wrapper_CProfileManager::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< CProfileManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< CProfileManager >::enumValues[] = {
	{0,0}
};


