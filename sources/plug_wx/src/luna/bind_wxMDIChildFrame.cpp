#include <plug_common.h>

class luna_wrapper_wxMDIChildFrame {
public:
	typedef Luna< wxMDIChildFrame > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMDIChildFrame* ptr= dynamic_cast< wxMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMDIChildFrame >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Activate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMDIParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsAlwaysMaximized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Maximize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Restore(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMDIChildFrame::wxMDIChildFrame()
	static wxMDIChildFrame* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIChildFrame::wxMDIChildFrame() function, expected prototype:\nwxMDIChildFrame::wxMDIChildFrame()\nClass arguments details:\n");
		}


		return new wxMDIChildFrame();
	}

	// wxMDIChildFrame::wxMDIChildFrame(wxMDIParentFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static wxMDIChildFrame* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIChildFrame::wxMDIChildFrame(wxMDIParentFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxMDIChildFrame::wxMDIChildFrame(wxMDIParentFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxMDIParentFrame* parent=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMDIChildFrame::wxMDIChildFrame function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIChildFrame::wxMDIChildFrame function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxMDIChildFrame(parent, id, title, pos, size, style, name);
	}

	// Overload binder for wxMDIChildFrame::wxMDIChildFrame
	static wxMDIChildFrame* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMDIChildFrame, cannot match any of the overloads for function wxMDIChildFrame:\n  wxMDIChildFrame()\n  wxMDIChildFrame(wxMDIParentFrame *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxMDIChildFrame::Activate()
	static int _bind_Activate(lua_State *L) {
		if (!_lg_typecheck_Activate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMDIChildFrame::Activate() function, expected prototype:\nvoid wxMDIChildFrame::Activate()\nClass arguments details:\n");
		}


		wxMDIChildFrame* self=dynamic_cast< wxMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMDIChildFrame::Activate()");
		}
		self->Activate();

		return 0;
	}

	// bool wxMDIChildFrame::Create(wxMDIParentFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMDIChildFrame::Create(wxMDIParentFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nbool wxMDIChildFrame::Create(wxMDIParentFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxMDIParentFrame* parent=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMDIChildFrame::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIChildFrame::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxMDIChildFrame* self=dynamic_cast< wxMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMDIChildFrame::Create(wxMDIParentFrame *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, title, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxMDIParentFrame * wxMDIChildFrame::GetMDIParent() const
	static int _bind_GetMDIParent(lua_State *L) {
		if (!_lg_typecheck_GetMDIParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIParentFrame * wxMDIChildFrame::GetMDIParent() const function, expected prototype:\nwxMDIParentFrame * wxMDIChildFrame::GetMDIParent() const\nClass arguments details:\n");
		}


		wxMDIChildFrame* self=dynamic_cast< wxMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMDIParentFrame * wxMDIChildFrame::GetMDIParent() const");
		}
		wxMDIParentFrame * lret = self->GetMDIParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMDIParentFrame >::push(L,lret,false);

		return 1;
	}

	// bool wxMDIChildFrame::IsAlwaysMaximized() const
	static int _bind_IsAlwaysMaximized(lua_State *L) {
		if (!_lg_typecheck_IsAlwaysMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMDIChildFrame::IsAlwaysMaximized() const function, expected prototype:\nbool wxMDIChildFrame::IsAlwaysMaximized() const\nClass arguments details:\n");
		}


		wxMDIChildFrame* self=dynamic_cast< wxMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMDIChildFrame::IsAlwaysMaximized() const");
		}
		bool lret = self->IsAlwaysMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIChildFrame::Maximize(bool maximize = true)
	static int _bind_Maximize(lua_State *L) {
		if (!_lg_typecheck_Maximize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMDIChildFrame::Maximize(bool maximize = true) function, expected prototype:\nvoid wxMDIChildFrame::Maximize(bool maximize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool maximize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxMDIChildFrame* self=dynamic_cast< wxMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMDIChildFrame::Maximize(bool)");
		}
		self->Maximize(maximize);

		return 0;
	}

	// void wxMDIChildFrame::Restore()
	static int _bind_Restore(lua_State *L) {
		if (!_lg_typecheck_Restore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMDIChildFrame::Restore() function, expected prototype:\nvoid wxMDIChildFrame::Restore()\nClass arguments details:\n");
		}


		wxMDIChildFrame* self=dynamic_cast< wxMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMDIChildFrame::Restore()");
		}
		self->Restore();

		return 0;
	}


	// Operator binds:

};

wxMDIChildFrame* LunaTraits< wxMDIChildFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMDIChildFrame::_bind_ctor(L);
}

void LunaTraits< wxMDIChildFrame >::_bind_dtor(wxMDIChildFrame* obj) {
	delete obj;
}

const char LunaTraits< wxMDIChildFrame >::className[] = "wxMDIChildFrame";
const char LunaTraits< wxMDIChildFrame >::fullName[] = "wxMDIChildFrame";
const char LunaTraits< wxMDIChildFrame >::moduleName[] = "wx";
const char* LunaTraits< wxMDIChildFrame >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxMDIChildFrame >::hash = 87338610;
const int LunaTraits< wxMDIChildFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMDIChildFrame >::methods[] = {
	{"Activate", &luna_wrapper_wxMDIChildFrame::_bind_Activate},
	{"Create", &luna_wrapper_wxMDIChildFrame::_bind_Create},
	{"GetMDIParent", &luna_wrapper_wxMDIChildFrame::_bind_GetMDIParent},
	{"IsAlwaysMaximized", &luna_wrapper_wxMDIChildFrame::_bind_IsAlwaysMaximized},
	{"Maximize", &luna_wrapper_wxMDIChildFrame::_bind_Maximize},
	{"Restore", &luna_wrapper_wxMDIChildFrame::_bind_Restore},
	{0,0}
};

luna_ConverterType LunaTraits< wxMDIChildFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxMDIChildFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMDIChildFrame >::enumValues[] = {
	{0,0}
};


