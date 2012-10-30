#include <plug_common.h>

class luna_wrapper_wxDocChildFrame {
public:
	typedef Luna< wxDocChildFrame > luna_t;

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
		wxDocChildFrame* ptr= dynamic_cast< wxDocChildFrame* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocChildFrame >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDocChildFrame* ptr= static_cast< wxDocChildFrame* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocChildFrame >::push(L,ptr,false);
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
	// wxDocChildFrame::wxDocChildFrame(wxDocument * doc, wxView * view, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static wxDocChildFrame* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocChildFrame::wxDocChildFrame(wxDocument * doc, wxView * view, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxDocChildFrame::wxDocChildFrame(wxDocument * doc, wxView * view, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 5 ID = 88196105\narg 6 ID = 25723480\narg 7 ID = 20268751\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		wxView* view=dynamic_cast< wxView* >(Luna< wxObject >::check(L,2));
		wxFrame* parent=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,3));
		int id=(int)lua_tointeger(L,4);
		wxString title(lua_tostring(L,5),lua_objlen(L,5));
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDocChildFrame::wxDocChildFrame function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocChildFrame::wxDocChildFrame function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxDocChildFrame(doc, view, parent, id, title, pos, size, style, name);
	}


	// Function binds:
	// wxDocument * wxDocChildFrame::GetDocument() const
	static int _bind_GetDocument(lua_State *L) {
		if (!_lg_typecheck_GetDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocChildFrame::GetDocument() const function, expected prototype:\nwxDocument * wxDocChildFrame::GetDocument() const\nClass arguments details:\n");
		}


		wxDocChildFrame* self=dynamic_cast< wxDocChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocument * wxDocChildFrame::GetDocument() const");
		}
		wxDocument * lret = self->GetDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxView * wxDocChildFrame::GetView() const
	static int _bind_GetView(lua_State *L) {
		if (!_lg_typecheck_GetView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxView * wxDocChildFrame::GetView() const function, expected prototype:\nwxView * wxDocChildFrame::GetView() const\nClass arguments details:\n");
		}


		wxDocChildFrame* self=dynamic_cast< wxDocChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxView * wxDocChildFrame::GetView() const");
		}
		wxView * lret = self->GetView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// void wxDocChildFrame::SetDocument(wxDocument * doc)
	static int _bind_SetDocument(lua_State *L) {
		if (!_lg_typecheck_SetDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocChildFrame::SetDocument(wxDocument * doc) function, expected prototype:\nvoid wxDocChildFrame::SetDocument(wxDocument * doc)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,2));

		wxDocChildFrame* self=dynamic_cast< wxDocChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocChildFrame::SetDocument(wxDocument *)");
		}
		self->SetDocument(doc);

		return 0;
	}

	// void wxDocChildFrame::SetView(wxView * view)
	static int _bind_SetView(lua_State *L) {
		if (!_lg_typecheck_SetView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocChildFrame::SetView(wxView * view) function, expected prototype:\nvoid wxDocChildFrame::SetView(wxView * view)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxView* view=dynamic_cast< wxView* >(Luna< wxObject >::check(L,2));

		wxDocChildFrame* self=dynamic_cast< wxDocChildFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocChildFrame::SetView(wxView *)");
		}
		self->SetView(view);

		return 0;
	}


	// Operator binds:

};

wxDocChildFrame* LunaTraits< wxDocChildFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDocChildFrame::_bind_ctor(L);
}

void LunaTraits< wxDocChildFrame >::_bind_dtor(wxDocChildFrame* obj) {
	delete obj;
}

const char LunaTraits< wxDocChildFrame >::className[] = "wxDocChildFrame";
const char LunaTraits< wxDocChildFrame >::fullName[] = "wxDocChildFrame";
const char LunaTraits< wxDocChildFrame >::moduleName[] = "wx";
const char* LunaTraits< wxDocChildFrame >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxDocChildFrame >::hash = 20180354;
const int LunaTraits< wxDocChildFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDocChildFrame >::methods[] = {
	{"GetDocument", &luna_wrapper_wxDocChildFrame::_bind_GetDocument},
	{"GetView", &luna_wrapper_wxDocChildFrame::_bind_GetView},
	{"SetDocument", &luna_wrapper_wxDocChildFrame::_bind_SetDocument},
	{"SetView", &luna_wrapper_wxDocChildFrame::_bind_SetView},
	{"__eq", &luna_wrapper_wxDocChildFrame::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDocChildFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxDocChildFrame::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxDocChildFrame::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDocChildFrame >::enumValues[] = {
	{0,0}
};


