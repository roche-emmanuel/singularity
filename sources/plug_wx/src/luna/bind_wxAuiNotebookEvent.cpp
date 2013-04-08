#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAuiNotebookEvent.h>

class luna_wrapper_wxAuiNotebookEvent {
public:
	typedef Luna< wxAuiNotebookEvent > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		wxAuiNotebookEvent* self= (wxAuiNotebookEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAuiNotebookEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxAuiNotebookEvent* ptr= dynamic_cast< wxAuiNotebookEvent* >(Luna< wxObject >::check(L,1));
		wxAuiNotebookEvent* ptr= luna_caster< wxObject, wxAuiNotebookEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiNotebookEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAuiNotebookEvent::wxAuiNotebookEvent(int command_type = wxEVT_NULL, int win_id = 0)
	static wxAuiNotebookEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiNotebookEvent::wxAuiNotebookEvent(int command_type = wxEVT_NULL, int win_id = 0) function, expected prototype:\nwxAuiNotebookEvent::wxAuiNotebookEvent(int command_type = wxEVT_NULL, int win_id = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int command_type=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int win_id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wxAuiNotebookEvent(command_type, win_id);
	}

	// wxAuiNotebookEvent::wxAuiNotebookEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0)
	static wxAuiNotebookEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiNotebookEvent::wxAuiNotebookEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0) function, expected prototype:\nwxAuiNotebookEvent::wxAuiNotebookEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int command_type=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int win_id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxAuiNotebookEvent(L,NULL, command_type, win_id);
	}

	// Overload binder for wxAuiNotebookEvent::wxAuiNotebookEvent
	static wxAuiNotebookEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxAuiNotebookEvent, cannot match any of the overloads for function wxAuiNotebookEvent:\n  wxAuiNotebookEvent(int, int)\n  wxAuiNotebookEvent(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// wxEvent * wxAuiNotebookEvent::Clone()
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvent * wxAuiNotebookEvent::Clone() function, expected prototype:\nwxEvent * wxAuiNotebookEvent::Clone()\nClass arguments details:\n");
		}


		wxAuiNotebookEvent* self=Luna< wxObject >::checkSubType< wxAuiNotebookEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvent * wxAuiNotebookEvent::Clone(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEvent * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxAuiNotebookEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxAuiNotebookEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxAuiNotebookEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxAuiNotebookEvent* self=Luna< wxObject >::checkSubType< wxAuiNotebookEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxAuiNotebookEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxAuiNotebookEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxAuiNotebookEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxAuiNotebookEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxAuiNotebookEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxAuiNotebookEvent* self=Luna< wxObject >::checkSubType< wxAuiNotebookEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxAuiNotebookEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxAuiNotebookEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxAuiNotebookEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvent * wxAuiNotebookEvent::base_Clone() const function, expected prototype:\nwxEvent * wxAuiNotebookEvent::base_Clone() const\nClass arguments details:\n");
		}


		wxAuiNotebookEvent* self=Luna< wxObject >::checkSubType< wxAuiNotebookEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvent * wxAuiNotebookEvent::base_Clone() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEvent * lret = self->wxAuiNotebookEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxAuiNotebookEvent* LunaTraits< wxAuiNotebookEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiNotebookEvent::_bind_ctor(L);
}

void LunaTraits< wxAuiNotebookEvent >::_bind_dtor(wxAuiNotebookEvent* obj) {
	delete obj;
}

const char LunaTraits< wxAuiNotebookEvent >::className[] = "wxAuiNotebookEvent";
const char LunaTraits< wxAuiNotebookEvent >::fullName[] = "wxAuiNotebookEvent";
const char LunaTraits< wxAuiNotebookEvent >::moduleName[] = "wx";
const char* LunaTraits< wxAuiNotebookEvent >::parents[] = {"wx.wxBookCtrlEvent", 0};
const int LunaTraits< wxAuiNotebookEvent >::hash = 23667394;
const int LunaTraits< wxAuiNotebookEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxAuiNotebookEvent >::methods[] = {
	{"Clone", &luna_wrapper_wxAuiNotebookEvent::_bind_Clone},
	{"base_GetClassInfo", &luna_wrapper_wxAuiNotebookEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxAuiNotebookEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxAuiNotebookEvent::_bind_base_Clone},
	{"__eq", &luna_wrapper_wxAuiNotebookEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_wxAuiNotebookEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAuiNotebookEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxAuiNotebookEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiNotebookEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxAuiNotebookEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiNotebookEvent >::enumValues[] = {
	{0,0}
};


