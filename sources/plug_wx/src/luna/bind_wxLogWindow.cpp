#include <plug_common.h>

class luna_wrapper_wxLogWindow {
public:
	typedef Luna< wxLogWindow > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13550494) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxLog*)");
		}

		wxLog* rhs =(Luna< wxLog >::check(L,2));
		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxLogWindow* ptr= dynamic_cast< wxLogWindow* >(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnFrameClose(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFrameCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFrameDelete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLogWindow::wxLogWindow(wxWindow * pParent, const wxString & szTitle, bool show = true, bool passToOld = true)
	static wxLogWindow* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogWindow::wxLogWindow(wxWindow * pParent, const wxString & szTitle, bool show = true, bool passToOld = true) function, expected prototype:\nwxLogWindow::wxLogWindow(wxWindow * pParent, const wxString & szTitle, bool show = true, bool passToOld = true)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* pParent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxString szTitle(lua_tostring(L,2),lua_objlen(L,2));
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;
		bool passToOld=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		return new wxLogWindow(pParent, szTitle, show, passToOld);
	}


	// Function binds:
	// wxFrame * wxLogWindow::GetFrame() const
	static int _bind_GetFrame(lua_State *L) {
		if (!_lg_typecheck_GetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFrame * wxLogWindow::GetFrame() const function, expected prototype:\nwxFrame * wxLogWindow::GetFrame() const\nClass arguments details:\n");
		}


		wxLogWindow* self=dynamic_cast< wxLogWindow* >(Luna< wxLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFrame * wxLogWindow::GetFrame() const");
		}
		wxFrame * lret = self->GetFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFrame >::push(L,lret,false);

		return 1;
	}

	// bool wxLogWindow::OnFrameClose(wxFrame * frame)
	static int _bind_OnFrameClose(lua_State *L) {
		if (!_lg_typecheck_OnFrameClose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLogWindow::OnFrameClose(wxFrame * frame) function, expected prototype:\nbool wxLogWindow::OnFrameClose(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxFrame* frame=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,2));

		wxLogWindow* self=dynamic_cast< wxLogWindow* >(Luna< wxLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLogWindow::OnFrameClose(wxFrame *)");
		}
		bool lret = self->OnFrameClose(frame);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxLogWindow::OnFrameCreate(wxFrame * frame)
	static int _bind_OnFrameCreate(lua_State *L) {
		if (!_lg_typecheck_OnFrameCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogWindow::OnFrameCreate(wxFrame * frame) function, expected prototype:\nvoid wxLogWindow::OnFrameCreate(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxFrame* frame=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,2));

		wxLogWindow* self=dynamic_cast< wxLogWindow* >(Luna< wxLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogWindow::OnFrameCreate(wxFrame *)");
		}
		self->OnFrameCreate(frame);

		return 0;
	}

	// void wxLogWindow::OnFrameDelete(wxFrame * frame)
	static int _bind_OnFrameDelete(lua_State *L) {
		if (!_lg_typecheck_OnFrameDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogWindow::OnFrameDelete(wxFrame * frame) function, expected prototype:\nvoid wxLogWindow::OnFrameDelete(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxFrame* frame=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,2));

		wxLogWindow* self=dynamic_cast< wxLogWindow* >(Luna< wxLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogWindow::OnFrameDelete(wxFrame *)");
		}
		self->OnFrameDelete(frame);

		return 0;
	}

	// void wxLogWindow::Show(bool show = true)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogWindow::Show(bool show = true) function, expected prototype:\nvoid wxLogWindow::Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxLogWindow* self=dynamic_cast< wxLogWindow* >(Luna< wxLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogWindow::Show(bool)");
		}
		self->Show(show);

		return 0;
	}


	// Operator binds:

};

wxLogWindow* LunaTraits< wxLogWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogWindow::_bind_ctor(L);
}

void LunaTraits< wxLogWindow >::_bind_dtor(wxLogWindow* obj) {
	delete obj;
}

const char LunaTraits< wxLogWindow >::className[] = "wxLogWindow";
const char LunaTraits< wxLogWindow >::fullName[] = "wxLogWindow";
const char LunaTraits< wxLogWindow >::moduleName[] = "wx";
const char* LunaTraits< wxLogWindow >::parents[] = {"wx.wxLogInterposer", 0};
const int LunaTraits< wxLogWindow >::hash = 67910697;
const int LunaTraits< wxLogWindow >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogWindow >::methods[] = {
	{"GetFrame", &luna_wrapper_wxLogWindow::_bind_GetFrame},
	{"OnFrameClose", &luna_wrapper_wxLogWindow::_bind_OnFrameClose},
	{"OnFrameCreate", &luna_wrapper_wxLogWindow::_bind_OnFrameCreate},
	{"OnFrameDelete", &luna_wrapper_wxLogWindow::_bind_OnFrameDelete},
	{"Show", &luna_wrapper_wxLogWindow::_bind_Show},
	{"__eq", &luna_wrapper_wxLogWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogWindow >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogWindow::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogWindow >::enumValues[] = {
	{0,0}
};


