#include <plug_common.h>

class luna_wrapper_CProfileIterator {
public:
	typedef Luna< CProfileIterator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52791109) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(CProfileIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CProfileIterator* rhs =(Luna< CProfileIterator >::check(L,2));
		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CProfileIterator* self= (CProfileIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< CProfileIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52791109) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("CProfileIterator");
		
		return luna_dynamicCast(L,converters,"CProfileIterator",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_First(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Next(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Is_Done(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Is_Root(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Enter_Child(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enter_Parent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Current_Name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Current_Total_Calls(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Current_Total_Time(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Current_UserPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set_Current_UserPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Get_Current_Parent_Name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Current_Parent_Total_Calls(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Current_Parent_Total_Time(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void CProfileIterator::First()
	static int _bind_First(lua_State *L) {
		if (!_lg_typecheck_First(L)) {
			luaL_error(L, "luna typecheck failed in void CProfileIterator::First() function, expected prototype:\nvoid CProfileIterator::First()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void CProfileIterator::First(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->First();

		return 0;
	}

	// void CProfileIterator::Next()
	static int _bind_Next(lua_State *L) {
		if (!_lg_typecheck_Next(L)) {
			luaL_error(L, "luna typecheck failed in void CProfileIterator::Next() function, expected prototype:\nvoid CProfileIterator::Next()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void CProfileIterator::Next(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Next();

		return 0;
	}

	// bool CProfileIterator::Is_Done()
	static int _bind_Is_Done(lua_State *L) {
		if (!_lg_typecheck_Is_Done(L)) {
			luaL_error(L, "luna typecheck failed in bool CProfileIterator::Is_Done() function, expected prototype:\nbool CProfileIterator::Is_Done()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CProfileIterator::Is_Done(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Is_Done();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CProfileIterator::Is_Root()
	static int _bind_Is_Root(lua_State *L) {
		if (!_lg_typecheck_Is_Root(L)) {
			luaL_error(L, "luna typecheck failed in bool CProfileIterator::Is_Root() function, expected prototype:\nbool CProfileIterator::Is_Root()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CProfileIterator::Is_Root(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Is_Root();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void CProfileIterator::Enter_Child(int index)
	static int _bind_Enter_Child(lua_State *L) {
		if (!_lg_typecheck_Enter_Child(L)) {
			luaL_error(L, "luna typecheck failed in void CProfileIterator::Enter_Child(int index) function, expected prototype:\nvoid CProfileIterator::Enter_Child(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void CProfileIterator::Enter_Child(int). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Enter_Child(index);

		return 0;
	}

	// void CProfileIterator::Enter_Parent()
	static int _bind_Enter_Parent(lua_State *L) {
		if (!_lg_typecheck_Enter_Parent(L)) {
			luaL_error(L, "luna typecheck failed in void CProfileIterator::Enter_Parent() function, expected prototype:\nvoid CProfileIterator::Enter_Parent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void CProfileIterator::Enter_Parent(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Enter_Parent();

		return 0;
	}

	// const char * CProfileIterator::Get_Current_Name()
	static int _bind_Get_Current_Name(lua_State *L) {
		if (!_lg_typecheck_Get_Current_Name(L)) {
			luaL_error(L, "luna typecheck failed in const char * CProfileIterator::Get_Current_Name() function, expected prototype:\nconst char * CProfileIterator::Get_Current_Name()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * CProfileIterator::Get_Current_Name(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Get_Current_Name();
		lua_pushstring(L,lret);

		return 1;
	}

	// int CProfileIterator::Get_Current_Total_Calls()
	static int _bind_Get_Current_Total_Calls(lua_State *L) {
		if (!_lg_typecheck_Get_Current_Total_Calls(L)) {
			luaL_error(L, "luna typecheck failed in int CProfileIterator::Get_Current_Total_Calls() function, expected prototype:\nint CProfileIterator::Get_Current_Total_Calls()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int CProfileIterator::Get_Current_Total_Calls(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Get_Current_Total_Calls();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float CProfileIterator::Get_Current_Total_Time()
	static int _bind_Get_Current_Total_Time(lua_State *L) {
		if (!_lg_typecheck_Get_Current_Total_Time(L)) {
			luaL_error(L, "luna typecheck failed in float CProfileIterator::Get_Current_Total_Time() function, expected prototype:\nfloat CProfileIterator::Get_Current_Total_Time()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float CProfileIterator::Get_Current_Total_Time(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Get_Current_Total_Time();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * CProfileIterator::Get_Current_UserPointer()
	static int _bind_Get_Current_UserPointer(lua_State *L) {
		if (!_lg_typecheck_Get_Current_UserPointer(L)) {
			luaL_error(L, "luna typecheck failed in void * CProfileIterator::Get_Current_UserPointer() function, expected prototype:\nvoid * CProfileIterator::Get_Current_UserPointer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * CProfileIterator::Get_Current_UserPointer(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->Get_Current_UserPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void CProfileIterator::Set_Current_UserPointer(void * ptr)
	static int _bind_Set_Current_UserPointer(lua_State *L) {
		if (!_lg_typecheck_Set_Current_UserPointer(L)) {
			luaL_error(L, "luna typecheck failed in void CProfileIterator::Set_Current_UserPointer(void * ptr) function, expected prototype:\nvoid CProfileIterator::Set_Current_UserPointer(void * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* ptr=(Luna< void >::check(L,2));

		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void CProfileIterator::Set_Current_UserPointer(void *). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set_Current_UserPointer(ptr);

		return 0;
	}

	// const char * CProfileIterator::Get_Current_Parent_Name()
	static int _bind_Get_Current_Parent_Name(lua_State *L) {
		if (!_lg_typecheck_Get_Current_Parent_Name(L)) {
			luaL_error(L, "luna typecheck failed in const char * CProfileIterator::Get_Current_Parent_Name() function, expected prototype:\nconst char * CProfileIterator::Get_Current_Parent_Name()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * CProfileIterator::Get_Current_Parent_Name(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Get_Current_Parent_Name();
		lua_pushstring(L,lret);

		return 1;
	}

	// int CProfileIterator::Get_Current_Parent_Total_Calls()
	static int _bind_Get_Current_Parent_Total_Calls(lua_State *L) {
		if (!_lg_typecheck_Get_Current_Parent_Total_Calls(L)) {
			luaL_error(L, "luna typecheck failed in int CProfileIterator::Get_Current_Parent_Total_Calls() function, expected prototype:\nint CProfileIterator::Get_Current_Parent_Total_Calls()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int CProfileIterator::Get_Current_Parent_Total_Calls(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Get_Current_Parent_Total_Calls();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float CProfileIterator::Get_Current_Parent_Total_Time()
	static int _bind_Get_Current_Parent_Total_Time(lua_State *L) {
		if (!_lg_typecheck_Get_Current_Parent_Total_Time(L)) {
			luaL_error(L, "luna typecheck failed in float CProfileIterator::Get_Current_Parent_Total_Time() function, expected prototype:\nfloat CProfileIterator::Get_Current_Parent_Total_Time()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileIterator* self=(Luna< CProfileIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float CProfileIterator::Get_Current_Parent_Total_Time(). Got : '%s'\n%s",typeid(Luna< CProfileIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Get_Current_Parent_Total_Time();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

CProfileIterator* LunaTraits< CProfileIterator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< CProfileIterator >::_bind_dtor(CProfileIterator* obj) {
	delete obj;
}

const char LunaTraits< CProfileIterator >::className[] = "CProfileIterator";
const char LunaTraits< CProfileIterator >::fullName[] = "CProfileIterator";
const char LunaTraits< CProfileIterator >::moduleName[] = "bullet";
const char* LunaTraits< CProfileIterator >::parents[] = {0};
const int LunaTraits< CProfileIterator >::hash = 52791109;
const int LunaTraits< CProfileIterator >::uniqueIDs[] = {52791109,0};

luna_RegType LunaTraits< CProfileIterator >::methods[] = {
	{"First", &luna_wrapper_CProfileIterator::_bind_First},
	{"Next", &luna_wrapper_CProfileIterator::_bind_Next},
	{"Is_Done", &luna_wrapper_CProfileIterator::_bind_Is_Done},
	{"Is_Root", &luna_wrapper_CProfileIterator::_bind_Is_Root},
	{"Enter_Child", &luna_wrapper_CProfileIterator::_bind_Enter_Child},
	{"Enter_Parent", &luna_wrapper_CProfileIterator::_bind_Enter_Parent},
	{"Get_Current_Name", &luna_wrapper_CProfileIterator::_bind_Get_Current_Name},
	{"Get_Current_Total_Calls", &luna_wrapper_CProfileIterator::_bind_Get_Current_Total_Calls},
	{"Get_Current_Total_Time", &luna_wrapper_CProfileIterator::_bind_Get_Current_Total_Time},
	{"Get_Current_UserPointer", &luna_wrapper_CProfileIterator::_bind_Get_Current_UserPointer},
	{"Set_Current_UserPointer", &luna_wrapper_CProfileIterator::_bind_Set_Current_UserPointer},
	{"Get_Current_Parent_Name", &luna_wrapper_CProfileIterator::_bind_Get_Current_Parent_Name},
	{"Get_Current_Parent_Total_Calls", &luna_wrapper_CProfileIterator::_bind_Get_Current_Parent_Total_Calls},
	{"Get_Current_Parent_Total_Time", &luna_wrapper_CProfileIterator::_bind_Get_Current_Parent_Total_Time},
	{"dynCast", &luna_wrapper_CProfileIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_CProfileIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_CProfileIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_CProfileIterator::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< CProfileIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< CProfileIterator >::enumValues[] = {
	{0,0}
};


