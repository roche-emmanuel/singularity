#include <plug_common.h>

class luna_wrapper_CProfileNode {
public:
	typedef Luna< CProfileNode > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82492271) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(CProfileNode*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CProfileNode* rhs =(Luna< CProfileNode >::check(L,2));
		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
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

		CProfileNode* self= (CProfileNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< CProfileNode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82492271) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< CProfileNode >::check(L,1));
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

		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("CProfileNode");
		
		return luna_dynamicCast(L,converters,"CProfileNode",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,82492271)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Get_Sub_Node(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Get_Parent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Sibling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Child(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CleanupMemory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Call(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Return(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Total_Calls(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get_Total_Time(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetUserPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// CProfileNode::CProfileNode(const char * name, CProfileNode * parent)
	static CProfileNode* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in CProfileNode::CProfileNode(const char * name, CProfileNode * parent) function, expected prototype:\nCProfileNode::CProfileNode(const char * name, CProfileNode * parent)\nClass arguments details:\narg 2 ID = 82492271\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		CProfileNode* parent=(Luna< CProfileNode >::check(L,2));

		return new CProfileNode(name, parent);
	}


	// Function binds:
	// CProfileNode * CProfileNode::Get_Sub_Node(const char * name)
	static int _bind_Get_Sub_Node(lua_State *L) {
		if (!_lg_typecheck_Get_Sub_Node(L)) {
			luaL_error(L, "luna typecheck failed in CProfileNode * CProfileNode::Get_Sub_Node(const char * name) function, expected prototype:\nCProfileNode * CProfileNode::Get_Sub_Node(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CProfileNode * CProfileNode::Get_Sub_Node(const char *). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CProfileNode * lret = self->Get_Sub_Node(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< CProfileNode >::push(L,lret,false);

		return 1;
	}

	// CProfileNode * CProfileNode::Get_Parent()
	static int _bind_Get_Parent(lua_State *L) {
		if (!_lg_typecheck_Get_Parent(L)) {
			luaL_error(L, "luna typecheck failed in CProfileNode * CProfileNode::Get_Parent() function, expected prototype:\nCProfileNode * CProfileNode::Get_Parent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CProfileNode * CProfileNode::Get_Parent(). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CProfileNode * lret = self->Get_Parent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< CProfileNode >::push(L,lret,false);

		return 1;
	}

	// CProfileNode * CProfileNode::Get_Sibling()
	static int _bind_Get_Sibling(lua_State *L) {
		if (!_lg_typecheck_Get_Sibling(L)) {
			luaL_error(L, "luna typecheck failed in CProfileNode * CProfileNode::Get_Sibling() function, expected prototype:\nCProfileNode * CProfileNode::Get_Sibling()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CProfileNode * CProfileNode::Get_Sibling(). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CProfileNode * lret = self->Get_Sibling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< CProfileNode >::push(L,lret,false);

		return 1;
	}

	// CProfileNode * CProfileNode::Get_Child()
	static int _bind_Get_Child(lua_State *L) {
		if (!_lg_typecheck_Get_Child(L)) {
			luaL_error(L, "luna typecheck failed in CProfileNode * CProfileNode::Get_Child() function, expected prototype:\nCProfileNode * CProfileNode::Get_Child()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CProfileNode * CProfileNode::Get_Child(). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CProfileNode * lret = self->Get_Child();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< CProfileNode >::push(L,lret,false);

		return 1;
	}

	// void CProfileNode::CleanupMemory()
	static int _bind_CleanupMemory(lua_State *L) {
		if (!_lg_typecheck_CleanupMemory(L)) {
			luaL_error(L, "luna typecheck failed in void CProfileNode::CleanupMemory() function, expected prototype:\nvoid CProfileNode::CleanupMemory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void CProfileNode::CleanupMemory(). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CleanupMemory();

		return 0;
	}

	// void CProfileNode::Reset()
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luaL_error(L, "luna typecheck failed in void CProfileNode::Reset() function, expected prototype:\nvoid CProfileNode::Reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void CProfileNode::Reset(). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Reset();

		return 0;
	}

	// void CProfileNode::Call()
	static int _bind_Call(lua_State *L) {
		if (!_lg_typecheck_Call(L)) {
			luaL_error(L, "luna typecheck failed in void CProfileNode::Call() function, expected prototype:\nvoid CProfileNode::Call()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void CProfileNode::Call(). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Call();

		return 0;
	}

	// bool CProfileNode::Return()
	static int _bind_Return(lua_State *L) {
		if (!_lg_typecheck_Return(L)) {
			luaL_error(L, "luna typecheck failed in bool CProfileNode::Return() function, expected prototype:\nbool CProfileNode::Return()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CProfileNode::Return(). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Return();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * CProfileNode::Get_Name()
	static int _bind_Get_Name(lua_State *L) {
		if (!_lg_typecheck_Get_Name(L)) {
			luaL_error(L, "luna typecheck failed in const char * CProfileNode::Get_Name() function, expected prototype:\nconst char * CProfileNode::Get_Name()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * CProfileNode::Get_Name(). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Get_Name();
		lua_pushstring(L,lret);

		return 1;
	}

	// int CProfileNode::Get_Total_Calls()
	static int _bind_Get_Total_Calls(lua_State *L) {
		if (!_lg_typecheck_Get_Total_Calls(L)) {
			luaL_error(L, "luna typecheck failed in int CProfileNode::Get_Total_Calls() function, expected prototype:\nint CProfileNode::Get_Total_Calls()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int CProfileNode::Get_Total_Calls(). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Get_Total_Calls();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float CProfileNode::Get_Total_Time()
	static int _bind_Get_Total_Time(lua_State *L) {
		if (!_lg_typecheck_Get_Total_Time(L)) {
			luaL_error(L, "luna typecheck failed in float CProfileNode::Get_Total_Time() function, expected prototype:\nfloat CProfileNode::Get_Total_Time()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float CProfileNode::Get_Total_Time(). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Get_Total_Time();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * CProfileNode::GetUserPointer() const
	static int _bind_GetUserPointer(lua_State *L) {
		if (!_lg_typecheck_GetUserPointer(L)) {
			luaL_error(L, "luna typecheck failed in void * CProfileNode::GetUserPointer() const function, expected prototype:\nvoid * CProfileNode::GetUserPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * CProfileNode::GetUserPointer() const. Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetUserPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void CProfileNode::SetUserPointer(void * ptr)
	static int _bind_SetUserPointer(lua_State *L) {
		if (!_lg_typecheck_SetUserPointer(L)) {
			luaL_error(L, "luna typecheck failed in void CProfileNode::SetUserPointer(void * ptr) function, expected prototype:\nvoid CProfileNode::SetUserPointer(void * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* ptr=(Luna< void >::check(L,2));

		CProfileNode* self=(Luna< CProfileNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void CProfileNode::SetUserPointer(void *). Got : '%s'\n%s",typeid(Luna< CProfileNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUserPointer(ptr);

		return 0;
	}


	// Operator binds:

};

CProfileNode* LunaTraits< CProfileNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_CProfileNode::_bind_ctor(L);
}

void LunaTraits< CProfileNode >::_bind_dtor(CProfileNode* obj) {
	delete obj;
}

const char LunaTraits< CProfileNode >::className[] = "CProfileNode";
const char LunaTraits< CProfileNode >::fullName[] = "CProfileNode";
const char LunaTraits< CProfileNode >::moduleName[] = "bullet";
const char* LunaTraits< CProfileNode >::parents[] = {0};
const int LunaTraits< CProfileNode >::hash = 82492271;
const int LunaTraits< CProfileNode >::uniqueIDs[] = {82492271,0};

luna_RegType LunaTraits< CProfileNode >::methods[] = {
	{"Get_Sub_Node", &luna_wrapper_CProfileNode::_bind_Get_Sub_Node},
	{"Get_Parent", &luna_wrapper_CProfileNode::_bind_Get_Parent},
	{"Get_Sibling", &luna_wrapper_CProfileNode::_bind_Get_Sibling},
	{"Get_Child", &luna_wrapper_CProfileNode::_bind_Get_Child},
	{"CleanupMemory", &luna_wrapper_CProfileNode::_bind_CleanupMemory},
	{"Reset", &luna_wrapper_CProfileNode::_bind_Reset},
	{"Call", &luna_wrapper_CProfileNode::_bind_Call},
	{"Return", &luna_wrapper_CProfileNode::_bind_Return},
	{"Get_Name", &luna_wrapper_CProfileNode::_bind_Get_Name},
	{"Get_Total_Calls", &luna_wrapper_CProfileNode::_bind_Get_Total_Calls},
	{"Get_Total_Time", &luna_wrapper_CProfileNode::_bind_Get_Total_Time},
	{"GetUserPointer", &luna_wrapper_CProfileNode::_bind_GetUserPointer},
	{"SetUserPointer", &luna_wrapper_CProfileNode::_bind_SetUserPointer},
	{"dynCast", &luna_wrapper_CProfileNode::_bind_dynCast},
	{"__eq", &luna_wrapper_CProfileNode::_bind___eq},
	{"fromVoid", &luna_wrapper_CProfileNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_CProfileNode::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< CProfileNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< CProfileNode >::enumValues[] = {
	{0,0}
};


