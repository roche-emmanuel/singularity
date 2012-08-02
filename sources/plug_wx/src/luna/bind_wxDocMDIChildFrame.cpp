#include <plug_common.h>

class luna_wrapper_wxDocMDIChildFrame {
public:
	typedef Luna< wxDocMDIChildFrame > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDocMDIChildFrame* ptr= dynamic_cast< wxDocMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocMDIChildFrame >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDocMDIChildFrame::wxDocMDIChildFrame(wxDocument * doc, wxView * view, wxMDIParentFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static wxDocMDIChildFrame* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocMDIChildFrame::wxDocMDIChildFrame(wxDocument * doc, wxView * view, wxMDIParentFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxDocMDIChildFrame::wxDocMDIChildFrame(wxDocument * doc, wxView * view, wxMDIParentFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 5 ID = 88196105\narg 6 ID = 25723480\narg 7 ID = 20268751\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		wxView* view=dynamic_cast< wxView* >(Luna< wxObject >::check(L,2));
		wxMDIParentFrame* parent=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,3));
		int id=(int)lua_tointeger(L,4);
		wxString title(lua_tostring(L,5),lua_objlen(L,5));
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDocMDIChildFrame::wxDocMDIChildFrame function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIChildFrame::wxDocMDIChildFrame function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxDocMDIChildFrame(doc, view, parent, id, title, pos, size, style, name);
	}


	// Function binds:
	// wxDocument * wxDocMDIChildFrame::GetDocument() const
	static int _bind_GetDocument(lua_State *L) {
		if (!_lg_typecheck_GetDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocMDIChildFrame::GetDocument() const function, expected prototype:\nwxDocument * wxDocMDIChildFrame::GetDocument() const\nClass arguments details:\n");
		}


		wxDocMDIChildFrame* self=dynamic_cast< wxDocMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocument * wxDocMDIChildFrame::GetDocument() const");
		}
		wxDocument * lret = self->GetDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxView * wxDocMDIChildFrame::GetView() const
	static int _bind_GetView(lua_State *L) {
		if (!_lg_typecheck_GetView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxView * wxDocMDIChildFrame::GetView() const function, expected prototype:\nwxView * wxDocMDIChildFrame::GetView() const\nClass arguments details:\n");
		}


		wxDocMDIChildFrame* self=dynamic_cast< wxDocMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxView * wxDocMDIChildFrame::GetView() const");
		}
		wxView * lret = self->GetView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// void wxDocMDIChildFrame::SetDocument(wxDocument * doc)
	static int _bind_SetDocument(lua_State *L) {
		if (!_lg_typecheck_SetDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIChildFrame::SetDocument(wxDocument * doc) function, expected prototype:\nvoid wxDocMDIChildFrame::SetDocument(wxDocument * doc)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,2));

		wxDocMDIChildFrame* self=dynamic_cast< wxDocMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIChildFrame::SetDocument(wxDocument *)");
		}
		self->SetDocument(doc);

		return 0;
	}

	// void wxDocMDIChildFrame::SetView(wxView * view)
	static int _bind_SetView(lua_State *L) {
		if (!_lg_typecheck_SetView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocMDIChildFrame::SetView(wxView * view) function, expected prototype:\nvoid wxDocMDIChildFrame::SetView(wxView * view)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxView* view=dynamic_cast< wxView* >(Luna< wxObject >::check(L,2));

		wxDocMDIChildFrame* self=dynamic_cast< wxDocMDIChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocMDIChildFrame::SetView(wxView *)");
		}
		self->SetView(view);

		return 0;
	}


	// Operator binds:

};

wxDocMDIChildFrame* LunaTraits< wxDocMDIChildFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDocMDIChildFrame::_bind_ctor(L);
}

void LunaTraits< wxDocMDIChildFrame >::_bind_dtor(wxDocMDIChildFrame* obj) {
	delete obj;
}

const char LunaTraits< wxDocMDIChildFrame >::className[] = "wxDocMDIChildFrame";
const char LunaTraits< wxDocMDIChildFrame >::fullName[] = "wxDocMDIChildFrame";
const char LunaTraits< wxDocMDIChildFrame >::moduleName[] = "wx";
const char* LunaTraits< wxDocMDIChildFrame >::parents[] = {"wx.wxMDIChildFrame", 0};
const int LunaTraits< wxDocMDIChildFrame >::hash = 91201744;
const int LunaTraits< wxDocMDIChildFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDocMDIChildFrame >::methods[] = {
	{"GetDocument", &luna_wrapper_wxDocMDIChildFrame::_bind_GetDocument},
	{"GetView", &luna_wrapper_wxDocMDIChildFrame::_bind_GetView},
	{"SetDocument", &luna_wrapper_wxDocMDIChildFrame::_bind_SetDocument},
	{"SetView", &luna_wrapper_wxDocMDIChildFrame::_bind_SetView},
	{0,0}
};

luna_ConverterType LunaTraits< wxDocMDIChildFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxDocMDIChildFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDocMDIChildFrame >::enumValues[] = {
	{0,0}
};


