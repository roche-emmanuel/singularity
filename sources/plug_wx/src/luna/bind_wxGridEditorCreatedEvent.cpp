#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridEditorCreatedEvent.h>

class luna_wrapper_wxGridEditorCreatedEvent {
public:
	typedef Luna< wxGridEditorCreatedEvent > luna_t;

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

		wxGridEditorCreatedEvent* self= (wxGridEditorCreatedEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridEditorCreatedEvent >::push(L,self,false);
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
		//wxGridEditorCreatedEvent* ptr= dynamic_cast< wxGridEditorCreatedEvent* >(Luna< wxObject >::check(L,1));
		wxGridEditorCreatedEvent* ptr= luna_caster< wxObject, wxGridEditorCreatedEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridEditorCreatedEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::check(L,3)) ) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( (lua_isnil(L,6)==0 && !(Luna< wxObject >::checkSubType< wxControl >(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< wxObject >::check(L,4)) ) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( (lua_isnil(L,7)==0 && !(Luna< wxObject >::checkSubType< wxControl >(L,7)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// wxGridEditorCreatedEvent::wxGridEditorCreatedEvent()
	static wxGridEditorCreatedEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridEditorCreatedEvent::wxGridEditorCreatedEvent() function, expected prototype:\nwxGridEditorCreatedEvent::wxGridEditorCreatedEvent()\nClass arguments details:\n");
		}


		return new wxGridEditorCreatedEvent();
	}

	// wxGridEditorCreatedEvent::wxGridEditorCreatedEvent(int id, int type, wxObject * obj, int row, int col, wxControl * ctrl)
	static wxGridEditorCreatedEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridEditorCreatedEvent::wxGridEditorCreatedEvent(int id, int type, wxObject * obj, int row, int col, wxControl * ctrl) function, expected prototype:\nwxGridEditorCreatedEvent::wxGridEditorCreatedEvent(int id, int type, wxObject * obj, int row, int col, wxControl * ctrl)\nClass arguments details:\narg 3 ID = 56813631\narg 6 ID = 56813631\n");
		}

		int id=(int)lua_tointeger(L,1);
		int type=(int)lua_tointeger(L,2);
		wxObject* obj=(Luna< wxObject >::check(L,3));
		int row=(int)lua_tointeger(L,4);
		int col=(int)lua_tointeger(L,5);
		wxControl* ctrl=(Luna< wxObject >::checkSubType< wxControl >(L,6));

		return new wxGridEditorCreatedEvent(id, type, obj, row, col, ctrl);
	}

	// wxGridEditorCreatedEvent::wxGridEditorCreatedEvent(lua_Table * data)
	static wxGridEditorCreatedEvent* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridEditorCreatedEvent::wxGridEditorCreatedEvent(lua_Table * data) function, expected prototype:\nwxGridEditorCreatedEvent::wxGridEditorCreatedEvent(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxGridEditorCreatedEvent(L,NULL);
	}

	// wxGridEditorCreatedEvent::wxGridEditorCreatedEvent(lua_Table * data, int id, int type, wxObject * obj, int row, int col, wxControl * ctrl)
	static wxGridEditorCreatedEvent* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridEditorCreatedEvent::wxGridEditorCreatedEvent(lua_Table * data, int id, int type, wxObject * obj, int row, int col, wxControl * ctrl) function, expected prototype:\nwxGridEditorCreatedEvent::wxGridEditorCreatedEvent(lua_Table * data, int id, int type, wxObject * obj, int row, int col, wxControl * ctrl)\nClass arguments details:\narg 4 ID = 56813631\narg 7 ID = 56813631\n");
		}

		int id=(int)lua_tointeger(L,2);
		int type=(int)lua_tointeger(L,3);
		wxObject* obj=(Luna< wxObject >::check(L,4));
		int row=(int)lua_tointeger(L,5);
		int col=(int)lua_tointeger(L,6);
		wxControl* ctrl=(Luna< wxObject >::checkSubType< wxControl >(L,7));

		return new wrapper_wxGridEditorCreatedEvent(L,NULL, id, type, obj, row, col, ctrl);
	}

	// Overload binder for wxGridEditorCreatedEvent::wxGridEditorCreatedEvent
	static wxGridEditorCreatedEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxGridEditorCreatedEvent, cannot match any of the overloads for function wxGridEditorCreatedEvent:\n  wxGridEditorCreatedEvent()\n  wxGridEditorCreatedEvent(int, int, wxObject *, int, int, wxControl *)\n  wxGridEditorCreatedEvent(lua_Table *)\n  wxGridEditorCreatedEvent(lua_Table *, int, int, wxObject *, int, int, wxControl *)\n");
		return NULL;
	}


	// Function binds:
	// int wxGridEditorCreatedEvent::GetCol()
	static int _bind_GetCol(lua_State *L) {
		if (!_lg_typecheck_GetCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridEditorCreatedEvent::GetCol() function, expected prototype:\nint wxGridEditorCreatedEvent::GetCol()\nClass arguments details:\n");
		}


		wxGridEditorCreatedEvent* self=Luna< wxObject >::checkSubType< wxGridEditorCreatedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridEditorCreatedEvent::GetCol(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxControl * wxGridEditorCreatedEvent::GetControl()
	static int _bind_GetControl(lua_State *L) {
		if (!_lg_typecheck_GetControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxControl * wxGridEditorCreatedEvent::GetControl() function, expected prototype:\nwxControl * wxGridEditorCreatedEvent::GetControl()\nClass arguments details:\n");
		}


		wxGridEditorCreatedEvent* self=Luna< wxObject >::checkSubType< wxGridEditorCreatedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxControl * wxGridEditorCreatedEvent::GetControl(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxControl * lret = self->GetControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxControl >::push(L,lret,false);

		return 1;
	}

	// int wxGridEditorCreatedEvent::GetRow()
	static int _bind_GetRow(lua_State *L) {
		if (!_lg_typecheck_GetRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridEditorCreatedEvent::GetRow() function, expected prototype:\nint wxGridEditorCreatedEvent::GetRow()\nClass arguments details:\n");
		}


		wxGridEditorCreatedEvent* self=Luna< wxObject >::checkSubType< wxGridEditorCreatedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridEditorCreatedEvent::GetRow(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGridEditorCreatedEvent::SetCol(int col)
	static int _bind_SetCol(lua_State *L) {
		if (!_lg_typecheck_SetCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridEditorCreatedEvent::SetCol(int col) function, expected prototype:\nvoid wxGridEditorCreatedEvent::SetCol(int col)\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wxGridEditorCreatedEvent* self=Luna< wxObject >::checkSubType< wxGridEditorCreatedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridEditorCreatedEvent::SetCol(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetCol(col);

		return 0;
	}

	// void wxGridEditorCreatedEvent::SetControl(wxControl * ctrl)
	static int _bind_SetControl(lua_State *L) {
		if (!_lg_typecheck_SetControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridEditorCreatedEvent::SetControl(wxControl * ctrl) function, expected prototype:\nvoid wxGridEditorCreatedEvent::SetControl(wxControl * ctrl)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxControl* ctrl=(Luna< wxObject >::checkSubType< wxControl >(L,2));

		wxGridEditorCreatedEvent* self=Luna< wxObject >::checkSubType< wxGridEditorCreatedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridEditorCreatedEvent::SetControl(wxControl *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetControl(ctrl);

		return 0;
	}

	// void wxGridEditorCreatedEvent::SetRow(int row)
	static int _bind_SetRow(lua_State *L) {
		if (!_lg_typecheck_SetRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridEditorCreatedEvent::SetRow(int row) function, expected prototype:\nvoid wxGridEditorCreatedEvent::SetRow(int row)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);

		wxGridEditorCreatedEvent* self=Luna< wxObject >::checkSubType< wxGridEditorCreatedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridEditorCreatedEvent::SetRow(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetRow(row);

		return 0;
	}

	// wxClassInfo * wxGridEditorCreatedEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGridEditorCreatedEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGridEditorCreatedEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxGridEditorCreatedEvent* self=Luna< wxObject >::checkSubType< wxGridEditorCreatedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGridEditorCreatedEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxGridEditorCreatedEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxGridEditorCreatedEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxGridEditorCreatedEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxGridEditorCreatedEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxGridEditorCreatedEvent* self=Luna< wxObject >::checkSubType< wxGridEditorCreatedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxGridEditorCreatedEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxGridEditorCreatedEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxGridEditorCreatedEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvent * wxGridEditorCreatedEvent::base_Clone() const function, expected prototype:\nwxEvent * wxGridEditorCreatedEvent::base_Clone() const\nClass arguments details:\n");
		}


		wxGridEditorCreatedEvent* self=Luna< wxObject >::checkSubType< wxGridEditorCreatedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvent * wxGridEditorCreatedEvent::base_Clone() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEvent * lret = self->wxGridEditorCreatedEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxGridEditorCreatedEvent* LunaTraits< wxGridEditorCreatedEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridEditorCreatedEvent::_bind_ctor(L);
}

void LunaTraits< wxGridEditorCreatedEvent >::_bind_dtor(wxGridEditorCreatedEvent* obj) {
	delete obj;
}

const char LunaTraits< wxGridEditorCreatedEvent >::className[] = "wxGridEditorCreatedEvent";
const char LunaTraits< wxGridEditorCreatedEvent >::fullName[] = "wxGridEditorCreatedEvent";
const char LunaTraits< wxGridEditorCreatedEvent >::moduleName[] = "wx";
const char* LunaTraits< wxGridEditorCreatedEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxGridEditorCreatedEvent >::hash = 47797244;
const int LunaTraits< wxGridEditorCreatedEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridEditorCreatedEvent >::methods[] = {
	{"GetCol", &luna_wrapper_wxGridEditorCreatedEvent::_bind_GetCol},
	{"GetControl", &luna_wrapper_wxGridEditorCreatedEvent::_bind_GetControl},
	{"GetRow", &luna_wrapper_wxGridEditorCreatedEvent::_bind_GetRow},
	{"SetCol", &luna_wrapper_wxGridEditorCreatedEvent::_bind_SetCol},
	{"SetControl", &luna_wrapper_wxGridEditorCreatedEvent::_bind_SetControl},
	{"SetRow", &luna_wrapper_wxGridEditorCreatedEvent::_bind_SetRow},
	{"base_GetClassInfo", &luna_wrapper_wxGridEditorCreatedEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxGridEditorCreatedEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxGridEditorCreatedEvent::_bind_base_Clone},
	{"__eq", &luna_wrapper_wxGridEditorCreatedEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_wxGridEditorCreatedEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridEditorCreatedEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridEditorCreatedEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridEditorCreatedEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridEditorCreatedEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridEditorCreatedEvent >::enumValues[] = {
	{0,0}
};


