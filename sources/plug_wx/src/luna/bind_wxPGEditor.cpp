#include <plug_common.h>

class luna_wrapper_wxPGEditor {
public:
	typedef Luna< wxPGEditor > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPGEditor* ptr= dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPGEditor >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateControls(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateControl(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawValue(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnEvent(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueToUnspecified(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetControlAppearance(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetControlStringValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetControlIntValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFocus(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanContainCustomImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxString wxPGEditor::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxPGEditor::GetName() const function, expected prototype:\nwxString wxPGEditor::GetName() const\nClass arguments details:\n");
		}


		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxPGEditor::GetName() const");
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid * propgrid, wxPGProperty * property, const wxPoint & pos, const wxSize & size) const
	static int _bind_CreateControls(lua_State *L) {
		if (!_lg_typecheck_CreateControls(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid * propgrid, wxPGProperty * property, const wxPoint & pos, const wxSize & size) const function, expected prototype:\nwxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid * propgrid, wxPGProperty * property, const wxPoint & pos, const wxSize & size) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		wxPropertyGrid* propgrid=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,2));
		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,3));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPGEditor::CreateControls function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPGEditor::CreateControls function");
		}
		const wxSize & size=*size_ptr;

		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid *, wxPGProperty *, const wxPoint &, const wxSize &) const");
		}
		wxPGWindowList lret = self->CreateControls(propgrid, property, pos, size);
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxPGWindowList'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// void wxPGEditor::UpdateControl(wxPGProperty * property, wxWindow * ctrl) const
	static int _bind_UpdateControl(lua_State *L) {
		if (!_lg_typecheck_UpdateControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGEditor::UpdateControl(wxPGProperty * property, wxWindow * ctrl) const function, expected prototype:\nvoid wxPGEditor::UpdateControl(wxPGProperty * property, wxWindow * ctrl) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2));
		wxWindow* ctrl=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));

		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGEditor::UpdateControl(wxPGProperty *, wxWindow *) const");
		}
		self->UpdateControl(property, ctrl);

		return 0;
	}

	// void wxPGEditor::DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const
	static int _bind_DrawValue(lua_State *L) {
		if (!_lg_typecheck_DrawValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGEditor::DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const function, expected prototype:\nvoid wxPGEditor::DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20234418\narg 3 ID = 56813631\narg 4 ID = 88196105\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxPGEditor::DrawValue function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxPGEditor::DrawValue function");
		}
		const wxRect & rect=*rect_ptr;
		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,4));
		wxString text(lua_tostring(L,5),lua_objlen(L,5));

		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGEditor::DrawValue(wxDC &, const wxRect &, wxPGProperty *, const wxString &) const");
		}
		self->DrawValue(dc, rect, property, text);

		return 0;
	}

	// bool wxPGEditor::OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const
	static int _bind_OnEvent(lua_State *L) {
		if (!_lg_typecheck_OnEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPGEditor::OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const function, expected prototype:\nbool wxPGEditor::OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\n");
		}

		wxPropertyGrid* propgrid=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,2));
		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,3));
		wxWindow* wnd_primary=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,4));
		wxEvent* event_ptr=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,5));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPGEditor::OnEvent function");
		}
		wxEvent & event=*event_ptr;

		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPGEditor::OnEvent(wxPropertyGrid *, wxPGProperty *, wxWindow *, wxEvent &) const");
		}
		bool lret = self->OnEvent(propgrid, property, wnd_primary, event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPGEditor::SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const
	static int _bind_SetValueToUnspecified(lua_State *L) {
		if (!_lg_typecheck_SetValueToUnspecified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGEditor::SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const function, expected prototype:\nvoid wxPGEditor::SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2));
		wxWindow* ctrl=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));

		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGEditor::SetValueToUnspecified(wxPGProperty *, wxWindow *) const");
		}
		self->SetValueToUnspecified(property, ctrl);

		return 0;
	}

	// void wxPGEditor::SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const
	static int _bind_SetControlAppearance(lua_State *L) {
		if (!_lg_typecheck_SetControlAppearance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGEditor::SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const function, expected prototype:\nvoid wxPGEditor::SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 56813631\n");
		}

		wxPropertyGrid* pg=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,2));
		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,3));
		wxWindow* ctrl=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,4));
		const wxPGCell* appearance_ptr=dynamic_cast< wxPGCell* >(Luna< wxObject >::check(L,5));
		if( !appearance_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg appearance in wxPGEditor::SetControlAppearance function");
		}
		const wxPGCell & appearance=*appearance_ptr;
		const wxPGCell* oldAppearance_ptr=dynamic_cast< wxPGCell* >(Luna< wxObject >::check(L,6));
		if( !oldAppearance_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg oldAppearance in wxPGEditor::SetControlAppearance function");
		}
		const wxPGCell & oldAppearance=*oldAppearance_ptr;
		bool unspecified=(bool)(lua_toboolean(L,7)==1);

		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGEditor::SetControlAppearance(wxPropertyGrid *, wxPGProperty *, wxWindow *, const wxPGCell &, const wxPGCell &, bool) const");
		}
		self->SetControlAppearance(pg, property, ctrl, appearance, oldAppearance, unspecified);

		return 0;
	}

	// void wxPGEditor::SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const
	static int _bind_SetControlStringValue(lua_State *L) {
		if (!_lg_typecheck_SetControlStringValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGEditor::SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const function, expected prototype:\nvoid wxPGEditor::SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2));
		wxWindow* ctrl=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		wxString txt(lua_tostring(L,4),lua_objlen(L,4));

		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGEditor::SetControlStringValue(wxPGProperty *, wxWindow *, const wxString &) const");
		}
		self->SetControlStringValue(property, ctrl, txt);

		return 0;
	}

	// void wxPGEditor::SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const
	static int _bind_SetControlIntValue(lua_State *L) {
		if (!_lg_typecheck_SetControlIntValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGEditor::SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const function, expected prototype:\nvoid wxPGEditor::SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2));
		wxWindow* ctrl=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		int value=(int)lua_tointeger(L,4);

		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGEditor::SetControlIntValue(wxPGProperty *, wxWindow *, int) const");
		}
		self->SetControlIntValue(property, ctrl, value);

		return 0;
	}

	// int wxPGEditor::InsertItem(wxWindow * ctrl, const wxString & label, int index) const
	static int _bind_InsertItem(lua_State *L) {
		if (!_lg_typecheck_InsertItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPGEditor::InsertItem(wxWindow * ctrl, const wxString & label, int index) const function, expected prototype:\nint wxPGEditor::InsertItem(wxWindow * ctrl, const wxString & label, int index) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		wxWindow* ctrl=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		int index=(int)lua_tointeger(L,4);

		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPGEditor::InsertItem(wxWindow *, const wxString &, int) const");
		}
		int lret = self->InsertItem(ctrl, label, index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPGEditor::DeleteItem(wxWindow * ctrl, int index) const
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGEditor::DeleteItem(wxWindow * ctrl, int index) const function, expected prototype:\nvoid wxPGEditor::DeleteItem(wxWindow * ctrl, int index) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* ctrl=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int index=(int)lua_tointeger(L,3);

		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGEditor::DeleteItem(wxWindow *, int) const");
		}
		self->DeleteItem(ctrl, index);

		return 0;
	}

	// void wxPGEditor::OnFocus(wxPGProperty * property, wxWindow * wnd) const
	static int _bind_OnFocus(lua_State *L) {
		if (!_lg_typecheck_OnFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGEditor::OnFocus(wxPGProperty * property, wxWindow * wnd) const function, expected prototype:\nvoid wxPGEditor::OnFocus(wxPGProperty * property, wxWindow * wnd) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxPGProperty* property=dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,2));
		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));

		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGEditor::OnFocus(wxPGProperty *, wxWindow *) const");
		}
		self->OnFocus(property, wnd);

		return 0;
	}

	// bool wxPGEditor::CanContainCustomImage() const
	static int _bind_CanContainCustomImage(lua_State *L) {
		if (!_lg_typecheck_CanContainCustomImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPGEditor::CanContainCustomImage() const function, expected prototype:\nbool wxPGEditor::CanContainCustomImage() const\nClass arguments details:\n");
		}


		wxPGEditor* self=dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPGEditor::CanContainCustomImage() const");
		}
		bool lret = self->CanContainCustomImage();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxPGEditor* LunaTraits< wxPGEditor >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid * propgrid, wxPGProperty * property, const wxPoint & pos, const wxSize & size) const
	// void wxPGEditor::UpdateControl(wxPGProperty * property, wxWindow * ctrl) const
	// bool wxPGEditor::OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const
	// void wxPGEditor::SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const

	// Abstract operators:
}

void LunaTraits< wxPGEditor >::_bind_dtor(wxPGEditor* obj) {
	delete obj;
}

const char LunaTraits< wxPGEditor >::className[] = "wxPGEditor";
const char LunaTraits< wxPGEditor >::fullName[] = "wxPGEditor";
const char LunaTraits< wxPGEditor >::moduleName[] = "wx";
const char* LunaTraits< wxPGEditor >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPGEditor >::hash = 87889166;
const int LunaTraits< wxPGEditor >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPGEditor >::methods[] = {
	{"GetName", &luna_wrapper_wxPGEditor::_bind_GetName},
	{"CreateControls", &luna_wrapper_wxPGEditor::_bind_CreateControls},
	{"UpdateControl", &luna_wrapper_wxPGEditor::_bind_UpdateControl},
	{"DrawValue", &luna_wrapper_wxPGEditor::_bind_DrawValue},
	{"OnEvent", &luna_wrapper_wxPGEditor::_bind_OnEvent},
	{"SetValueToUnspecified", &luna_wrapper_wxPGEditor::_bind_SetValueToUnspecified},
	{"SetControlAppearance", &luna_wrapper_wxPGEditor::_bind_SetControlAppearance},
	{"SetControlStringValue", &luna_wrapper_wxPGEditor::_bind_SetControlStringValue},
	{"SetControlIntValue", &luna_wrapper_wxPGEditor::_bind_SetControlIntValue},
	{"InsertItem", &luna_wrapper_wxPGEditor::_bind_InsertItem},
	{"DeleteItem", &luna_wrapper_wxPGEditor::_bind_DeleteItem},
	{"OnFocus", &luna_wrapper_wxPGEditor::_bind_OnFocus},
	{"CanContainCustomImage", &luna_wrapper_wxPGEditor::_bind_CanContainCustomImage},
	{0,0}
};

luna_ConverterType LunaTraits< wxPGEditor >::converters[] = {
	{"wxObject", &luna_wrapper_wxPGEditor::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGEditor >::enumValues[] = {
	{0,0}
};


