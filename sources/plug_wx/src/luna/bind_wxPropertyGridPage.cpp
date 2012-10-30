#include <plug_common.h>

class luna_wrapper_wxPropertyGridPage {
public:
	typedef Luna< wxPropertyGridPage > luna_t;

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
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPropertyGridPage* ptr= dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGridPage >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPropertyGridPage* ptr= static_cast< wxPropertyGridPage* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGridPage >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxPropertyGridInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPropertyGridPage* ptr= dynamic_cast< wxPropertyGridPage* >(Luna< wxPropertyGridInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGridPage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FitColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRoot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsHandlingAllEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnShow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RefreshProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPropertyGridPage::wxPropertyGridPage()
	static wxPropertyGridPage* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage::wxPropertyGridPage() function, expected prototype:\nwxPropertyGridPage::wxPropertyGridPage()\nClass arguments details:\n");
		}


		return new wxPropertyGridPage();
	}


	// Function binds:
	// void wxPropertyGridPage::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::Clear() function, expected prototype:\nvoid wxPropertyGridPage::Clear()\nClass arguments details:\n");
		}


		wxPropertyGridPage* self=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::Clear()");
		}
		self->Clear();

		return 0;
	}

	// wxSize wxPropertyGridPage::FitColumns()
	static int _bind_FitColumns(lua_State *L) {
		if (!_lg_typecheck_FitColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGridPage::FitColumns() function, expected prototype:\nwxSize wxPropertyGridPage::FitColumns()\nClass arguments details:\n");
		}


		wxPropertyGridPage* self=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGridPage::FitColumns()");
		}
		wxSize stack_lret = self->FitColumns();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxPropertyGridPage::GetIndex() const
	static int _bind_GetIndex(lua_State *L) {
		if (!_lg_typecheck_GetIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPropertyGridPage::GetIndex() const function, expected prototype:\nint wxPropertyGridPage::GetIndex() const\nClass arguments details:\n");
		}


		wxPropertyGridPage* self=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPropertyGridPage::GetIndex() const");
		}
		int lret = self->GetIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPGProperty * wxPropertyGridPage::GetRoot() const
	static int _bind_GetRoot(lua_State *L) {
		if (!_lg_typecheck_GetRoot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridPage::GetRoot() const function, expected prototype:\nwxPGProperty * wxPropertyGridPage::GetRoot() const\nClass arguments details:\n");
		}


		wxPropertyGridPage* self=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridPage::GetRoot() const");
		}
		wxPGProperty * lret = self->GetRoot();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// int wxPropertyGridPage::GetSplitterPosition(int col = 0) const
	static int _bind_GetSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_GetSplitterPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPropertyGridPage::GetSplitterPosition(int col = 0) const function, expected prototype:\nint wxPropertyGridPage::GetSplitterPosition(int col = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int col=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxPropertyGridPage* self=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPropertyGridPage::GetSplitterPosition(int) const");
		}
		int lret = self->GetSplitterPosition(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGridPage::GetToolId() const
	static int _bind_GetToolId(lua_State *L) {
		if (!_lg_typecheck_GetToolId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPropertyGridPage::GetToolId() const function, expected prototype:\nint wxPropertyGridPage::GetToolId() const\nClass arguments details:\n");
		}


		wxPropertyGridPage* self=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPropertyGridPage::GetToolId() const");
		}
		int lret = self->GetToolId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPropertyGridPage::Init()
	static int _bind_Init(lua_State *L) {
		if (!_lg_typecheck_Init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::Init() function, expected prototype:\nvoid wxPropertyGridPage::Init()\nClass arguments details:\n");
		}


		wxPropertyGridPage* self=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::Init()");
		}
		self->Init();

		return 0;
	}

	// bool wxPropertyGridPage::IsHandlingAllEvents() const
	static int _bind_IsHandlingAllEvents(lua_State *L) {
		if (!_lg_typecheck_IsHandlingAllEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridPage::IsHandlingAllEvents() const function, expected prototype:\nbool wxPropertyGridPage::IsHandlingAllEvents() const\nClass arguments details:\n");
		}


		wxPropertyGridPage* self=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGridPage::IsHandlingAllEvents() const");
		}
		bool lret = self->IsHandlingAllEvents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridPage::OnShow()
	static int _bind_OnShow(lua_State *L) {
		if (!_lg_typecheck_OnShow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::OnShow() function, expected prototype:\nvoid wxPropertyGridPage::OnShow()\nClass arguments details:\n");
		}


		wxPropertyGridPage* self=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::OnShow()");
		}
		self->OnShow();

		return 0;
	}

	// void wxPropertyGridPage::RefreshProperty(wxPGProperty * p)
	static int _bind_RefreshProperty(lua_State *L) {
		if (!_lg_typecheck_RefreshProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::RefreshProperty(wxPGProperty * p) function, expected prototype:\nvoid wxPropertyGridPage::RefreshProperty(wxPGProperty * p)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxPGProperty* p=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2));

		wxPropertyGridPage* self=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::RefreshProperty(wxPGProperty *)");
		}
		self->RefreshProperty(p);

		return 0;
	}

	// void wxPropertyGridPage::SetSplitterPosition(int splitterPos, int col = 0)
	static int _bind_SetSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_SetSplitterPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::SetSplitterPosition(int splitterPos, int col = 0) function, expected prototype:\nvoid wxPropertyGridPage::SetSplitterPosition(int splitterPos, int col = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int splitterPos=(int)lua_tointeger(L,2);
		int col=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxPropertyGridPage* self=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::SetSplitterPosition(int, int)");
		}
		self->SetSplitterPosition(splitterPos, col);

		return 0;
	}


	// Operator binds:

};

wxPropertyGridPage* LunaTraits< wxPropertyGridPage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPropertyGridPage::_bind_ctor(L);
}

void LunaTraits< wxPropertyGridPage >::_bind_dtor(wxPropertyGridPage* obj) {
	delete obj;
}

const char LunaTraits< wxPropertyGridPage >::className[] = "wxPropertyGridPage";
const char LunaTraits< wxPropertyGridPage >::fullName[] = "wxPropertyGridPage";
const char LunaTraits< wxPropertyGridPage >::moduleName[] = "wx";
const char* LunaTraits< wxPropertyGridPage >::parents[] = {"wx.wxEvtHandler", "wx.wxPropertyGridInterface", 0};
const int LunaTraits< wxPropertyGridPage >::hash = 6952928;
const int LunaTraits< wxPropertyGridPage >::uniqueIDs[] = {56813631, 53506535, 61417741,0};

luna_RegType LunaTraits< wxPropertyGridPage >::methods[] = {
	{"Clear", &luna_wrapper_wxPropertyGridPage::_bind_Clear},
	{"FitColumns", &luna_wrapper_wxPropertyGridPage::_bind_FitColumns},
	{"GetIndex", &luna_wrapper_wxPropertyGridPage::_bind_GetIndex},
	{"GetRoot", &luna_wrapper_wxPropertyGridPage::_bind_GetRoot},
	{"GetSplitterPosition", &luna_wrapper_wxPropertyGridPage::_bind_GetSplitterPosition},
	{"GetToolId", &luna_wrapper_wxPropertyGridPage::_bind_GetToolId},
	{"Init", &luna_wrapper_wxPropertyGridPage::_bind_Init},
	{"IsHandlingAllEvents", &luna_wrapper_wxPropertyGridPage::_bind_IsHandlingAllEvents},
	{"OnShow", &luna_wrapper_wxPropertyGridPage::_bind_OnShow},
	{"RefreshProperty", &luna_wrapper_wxPropertyGridPage::_bind_RefreshProperty},
	{"SetSplitterPosition", &luna_wrapper_wxPropertyGridPage::_bind_SetSplitterPosition},
	{"__eq", &luna_wrapper_wxPropertyGridPage::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertyGridPage >::converters[] = {
	{"wxObject", &luna_wrapper_wxPropertyGridPage::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxPropertyGridPage::_cast_from_wxTrackable},
	{"wxPropertyGridInterface", &luna_wrapper_wxPropertyGridPage::_cast_from_wxPropertyGridInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertyGridPage >::enumValues[] = {
	{0,0}
};


