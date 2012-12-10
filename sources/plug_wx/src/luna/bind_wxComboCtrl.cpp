#include <plug_common.h>

#include <luna/wrappers/wrapper_wxComboCtrl.h>

class luna_wrapper_wxComboCtrl {
public:
	typedef Luna< wxComboCtrl > luna_t;

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
		wxComboCtrl* ptr= dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxComboCtrl >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTextEntry(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxComboCtrl* ptr= dynamic_cast< wxComboCtrl* >(Luna< wxTextEntry >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxComboCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>6 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Dismiss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EnablePopupAnimation(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmapDisabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapHover(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapPressed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetButtonSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCustomPaintWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLastPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPopupControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPopupWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HidePopup(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsPopupShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPopupWindowState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnButtonClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Paste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Popup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetButtonBitmaps(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetButtonPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCustomPaintWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInsertionPointEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPopupAnchor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPopupControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7956593)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPopupExtents(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPopupMaxHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPopupMinWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextCtrlStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueWithEvent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowPopup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UseAltPopupWindow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFeatures(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxComboCtrl::wxComboCtrl()
	static wxComboCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxComboCtrl::wxComboCtrl() function, expected prototype:\nwxComboCtrl::wxComboCtrl()\nClass arguments details:\n");
		}


		return new wxComboCtrl();
	}

	// wxComboCtrl::wxComboCtrl(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)
	static wxComboCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxComboCtrl::wxComboCtrl(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) function, expected prototype:\nwxComboCtrl::wxComboCtrl(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : ::wxID_ANY;
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxComboCtrl::wxComboCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::wxComboCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxComboCtrl::wxComboCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxComboCtrl(parent, id, value, pos, size, style, validator, name);
	}

	// wxComboCtrl::wxComboCtrl(lua_Table * data)
	static wxComboCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxComboCtrl::wxComboCtrl(lua_Table * data) function, expected prototype:\nwxComboCtrl::wxComboCtrl(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxComboCtrl(L,NULL);
	}

	// wxComboCtrl::wxComboCtrl(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)
	static wxComboCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxComboCtrl::wxComboCtrl(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) function, expected prototype:\nwxComboCtrl::wxComboCtrl(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxComboCtrl::wxComboCtrl function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::wxComboCtrl function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxComboCtrl::wxComboCtrl function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wrapper_wxComboCtrl(L,NULL, parent, id, value, pos, size, style, validator, name);
	}

	// Overload binder for wxComboCtrl::wxComboCtrl
	static wxComboCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxComboCtrl, cannot match any of the overloads for function wxComboCtrl:\n  wxComboCtrl()\n  wxComboCtrl(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxComboCtrl(lua_Table *)\n  wxComboCtrl(lua_Table *, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxComboCtrl::Copy()
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Copy() function, expected prototype:\nvoid wxComboCtrl::Copy()\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Copy()");
		}
		self->Copy();

		return 0;
	}

	// bool wxComboCtrl::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) function, expected prototype:\nbool wxComboCtrl::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxComboCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxComboCtrl::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, value, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::Cut()
	static int _bind_Cut(lua_State *L) {
		if (!_lg_typecheck_Cut(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Cut() function, expected prototype:\nvoid wxComboCtrl::Cut()\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Cut()");
		}
		self->Cut();

		return 0;
	}

	// void wxComboCtrl::Dismiss()
	static int _bind_Dismiss(lua_State *L) {
		if (!_lg_typecheck_Dismiss(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Dismiss() function, expected prototype:\nvoid wxComboCtrl::Dismiss()\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Dismiss()");
		}
		self->Dismiss();

		return 0;
	}

	// void wxComboCtrl::EnablePopupAnimation(bool enable = true)
	static int _bind_EnablePopupAnimation(lua_State *L) {
		if (!_lg_typecheck_EnablePopupAnimation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::EnablePopupAnimation(bool enable = true) function, expected prototype:\nvoid wxComboCtrl::EnablePopupAnimation(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::EnablePopupAnimation(bool)");
		}
		self->EnablePopupAnimation(enable);

		return 0;
	}

	// const wxBitmap & wxComboCtrl::GetBitmapDisabled() const
	static int _bind_GetBitmapDisabled(lua_State *L) {
		if (!_lg_typecheck_GetBitmapDisabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxComboCtrl::GetBitmapDisabled() const function, expected prototype:\nconst wxBitmap & wxComboCtrl::GetBitmapDisabled() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxBitmap & wxComboCtrl::GetBitmapDisabled() const");
		}
		const wxBitmap* lret = &self->GetBitmapDisabled();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// const wxBitmap & wxComboCtrl::GetBitmapHover() const
	static int _bind_GetBitmapHover(lua_State *L) {
		if (!_lg_typecheck_GetBitmapHover(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxComboCtrl::GetBitmapHover() const function, expected prototype:\nconst wxBitmap & wxComboCtrl::GetBitmapHover() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxBitmap & wxComboCtrl::GetBitmapHover() const");
		}
		const wxBitmap* lret = &self->GetBitmapHover();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// const wxBitmap & wxComboCtrl::GetBitmapNormal() const
	static int _bind_GetBitmapNormal(lua_State *L) {
		if (!_lg_typecheck_GetBitmapNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxComboCtrl::GetBitmapNormal() const function, expected prototype:\nconst wxBitmap & wxComboCtrl::GetBitmapNormal() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxBitmap & wxComboCtrl::GetBitmapNormal() const");
		}
		const wxBitmap* lret = &self->GetBitmapNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// const wxBitmap & wxComboCtrl::GetBitmapPressed() const
	static int _bind_GetBitmapPressed(lua_State *L) {
		if (!_lg_typecheck_GetBitmapPressed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxComboCtrl::GetBitmapPressed() const function, expected prototype:\nconst wxBitmap & wxComboCtrl::GetBitmapPressed() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxBitmap & wxComboCtrl::GetBitmapPressed() const");
		}
		const wxBitmap* lret = &self->GetBitmapPressed();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// wxSize wxComboCtrl::GetButtonSize()
	static int _bind_GetButtonSize(lua_State *L) {
		if (!_lg_typecheck_GetButtonSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxComboCtrl::GetButtonSize() function, expected prototype:\nwxSize wxComboCtrl::GetButtonSize()\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxComboCtrl::GetButtonSize()");
		}
		wxSize stack_lret = self->GetButtonSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxComboCtrl::GetCustomPaintWidth() const
	static int _bind_GetCustomPaintWidth(lua_State *L) {
		if (!_lg_typecheck_GetCustomPaintWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxComboCtrl::GetCustomPaintWidth() const function, expected prototype:\nint wxComboCtrl::GetCustomPaintWidth() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxComboCtrl::GetCustomPaintWidth() const");
		}
		int lret = self->GetCustomPaintWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxComboCtrl::GetHint() const
	static int _bind_GetHint(lua_State *L) {
		if (!_lg_typecheck_GetHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxComboCtrl::GetHint() const function, expected prototype:\nwxString wxComboCtrl::GetHint() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxComboCtrl::GetHint() const");
		}
		wxString lret = self->GetHint();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxComboCtrl::GetInsertionPoint() const
	static int _bind_GetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_GetInsertionPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxComboCtrl::GetInsertionPoint() const function, expected prototype:\nlong wxComboCtrl::GetInsertionPoint() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxComboCtrl::GetInsertionPoint() const");
		}
		long lret = self->GetInsertionPoint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxComboCtrl::GetLastPosition() const
	static int _bind_GetLastPosition(lua_State *L) {
		if (!_lg_typecheck_GetLastPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxComboCtrl::GetLastPosition() const function, expected prototype:\nlong wxComboCtrl::GetLastPosition() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxComboCtrl::GetLastPosition() const");
		}
		long lret = self->GetLastPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxComboCtrl::GetMargins() const
	static int _bind_GetMargins(lua_State *L) {
		if (!_lg_typecheck_GetMargins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxComboCtrl::GetMargins() const function, expected prototype:\nwxPoint wxComboCtrl::GetMargins() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxComboCtrl::GetMargins() const");
		}
		wxPoint stack_lret = self->GetMargins();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxComboPopup * wxComboCtrl::GetPopupControl()
	static int _bind_GetPopupControl(lua_State *L) {
		if (!_lg_typecheck_GetPopupControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxComboPopup * wxComboCtrl::GetPopupControl() function, expected prototype:\nwxComboPopup * wxComboCtrl::GetPopupControl()\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxComboPopup * wxComboCtrl::GetPopupControl()");
		}
		wxComboPopup * lret = self->GetPopupControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxComboPopup >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxComboCtrl::GetPopupWindow() const
	static int _bind_GetPopupWindow(lua_State *L) {
		if (!_lg_typecheck_GetPopupWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxComboCtrl::GetPopupWindow() const function, expected prototype:\nwxWindow * wxComboCtrl::GetPopupWindow() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxComboCtrl::GetPopupWindow() const");
		}
		wxWindow * lret = self->GetPopupWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxTextCtrl * wxComboCtrl::GetTextCtrl() const
	static int _bind_GetTextCtrl(lua_State *L) {
		if (!_lg_typecheck_GetTextCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxComboCtrl::GetTextCtrl() const function, expected prototype:\nwxTextCtrl * wxComboCtrl::GetTextCtrl() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxComboCtrl::GetTextCtrl() const");
		}
		wxTextCtrl * lret = self->GetTextCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// int wxComboCtrl::GetTextIndent() const
	static int _bind_GetTextIndent(lua_State *L) {
		if (!_lg_typecheck_GetTextIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxComboCtrl::GetTextIndent() const function, expected prototype:\nint wxComboCtrl::GetTextIndent() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxComboCtrl::GetTextIndent() const");
		}
		int lret = self->GetTextIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxRect & wxComboCtrl::GetTextRect() const
	static int _bind_GetTextRect(lua_State *L) {
		if (!_lg_typecheck_GetTextRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxRect & wxComboCtrl::GetTextRect() const function, expected prototype:\nconst wxRect & wxComboCtrl::GetTextRect() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxRect & wxComboCtrl::GetTextRect() const");
		}
		const wxRect* lret = &self->GetTextRect();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}

	// wxString wxComboCtrl::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxComboCtrl::GetValue() const function, expected prototype:\nwxString wxComboCtrl::GetValue() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxComboCtrl::GetValue() const");
		}
		wxString lret = self->GetValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxComboCtrl::HidePopup(bool generateEvent = false)
	static int _bind_HidePopup(lua_State *L) {
		if (!_lg_typecheck_HidePopup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::HidePopup(bool generateEvent = false) function, expected prototype:\nvoid wxComboCtrl::HidePopup(bool generateEvent = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool generateEvent=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::HidePopup(bool)");
		}
		self->HidePopup(generateEvent);

		return 0;
	}

	// bool wxComboCtrl::IsPopupShown() const
	static int _bind_IsPopupShown(lua_State *L) {
		if (!_lg_typecheck_IsPopupShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::IsPopupShown() const function, expected prototype:\nbool wxComboCtrl::IsPopupShown() const\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::IsPopupShown() const");
		}
		bool lret = self->IsPopupShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::IsPopupWindowState(int state) const
	static int _bind_IsPopupWindowState(lua_State *L) {
		if (!_lg_typecheck_IsPopupWindowState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::IsPopupWindowState(int state) const function, expected prototype:\nbool wxComboCtrl::IsPopupWindowState(int state) const\nClass arguments details:\n");
		}

		int state=(int)lua_tointeger(L,2);

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::IsPopupWindowState(int) const");
		}
		bool lret = self->IsPopupWindowState(state);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::OnButtonClick()
	static int _bind_OnButtonClick(lua_State *L) {
		if (!_lg_typecheck_OnButtonClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::OnButtonClick() function, expected prototype:\nvoid wxComboCtrl::OnButtonClick()\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::OnButtonClick()");
		}
		self->OnButtonClick();

		return 0;
	}

	// void wxComboCtrl::Paste()
	static int _bind_Paste(lua_State *L) {
		if (!_lg_typecheck_Paste(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Paste() function, expected prototype:\nvoid wxComboCtrl::Paste()\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Paste()");
		}
		self->Paste();

		return 0;
	}

	// void wxComboCtrl::Popup()
	static int _bind_Popup(lua_State *L) {
		if (!_lg_typecheck_Popup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Popup() function, expected prototype:\nvoid wxComboCtrl::Popup()\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Popup()");
		}
		self->Popup();

		return 0;
	}

	// void wxComboCtrl::Remove(long from, long to)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Remove(long from, long to) function, expected prototype:\nvoid wxComboCtrl::Remove(long from, long to)\nClass arguments details:\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Remove(long, long)");
		}
		self->Remove(from, to);

		return 0;
	}

	// void wxComboCtrl::Replace(long from, long to, const wxString & text)
	static int _bind_Replace(lua_State *L) {
		if (!_lg_typecheck_Replace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Replace(long from, long to, const wxString & text) function, expected prototype:\nvoid wxComboCtrl::Replace(long from, long to, const wxString & text)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);
		wxString text(lua_tostring(L,4),lua_objlen(L,4));

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Replace(long, long, const wxString &)");
		}
		self->Replace(from, to, text);

		return 0;
	}

	// void wxComboCtrl::SetButtonBitmaps(const wxBitmap & bmpNormal, bool pushButtonBg = false, const wxBitmap & bmpPressed = wxNullBitmap, const wxBitmap & bmpHover = wxNullBitmap, const wxBitmap & bmpDisabled = wxNullBitmap)
	static int _bind_SetButtonBitmaps(lua_State *L) {
		if (!_lg_typecheck_SetButtonBitmaps(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetButtonBitmaps(const wxBitmap & bmpNormal, bool pushButtonBg = false, const wxBitmap & bmpPressed = wxNullBitmap, const wxBitmap & bmpHover = wxNullBitmap, const wxBitmap & bmpDisabled = wxNullBitmap) function, expected prototype:\nvoid wxComboCtrl::SetButtonBitmaps(const wxBitmap & bmpNormal, bool pushButtonBg = false, const wxBitmap & bmpPressed = wxNullBitmap, const wxBitmap & bmpHover = wxNullBitmap, const wxBitmap & bmpDisabled = wxNullBitmap)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bmpNormal_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bmpNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpNormal in wxComboCtrl::SetButtonBitmaps function");
		}
		const wxBitmap & bmpNormal=*bmpNormal_ptr;
		bool pushButtonBg=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;
		const wxBitmap* bmpPressed_ptr=luatop>3 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !bmpPressed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpPressed in wxComboCtrl::SetButtonBitmaps function");
		}
		const wxBitmap & bmpPressed=luatop>3 ? *bmpPressed_ptr : wxNullBitmap;
		const wxBitmap* bmpHover_ptr=luatop>4 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !bmpHover_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpHover in wxComboCtrl::SetButtonBitmaps function");
		}
		const wxBitmap & bmpHover=luatop>4 ? *bmpHover_ptr : wxNullBitmap;
		const wxBitmap* bmpDisabled_ptr=luatop>5 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !bmpDisabled_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpDisabled in wxComboCtrl::SetButtonBitmaps function");
		}
		const wxBitmap & bmpDisabled=luatop>5 ? *bmpDisabled_ptr : wxNullBitmap;

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetButtonBitmaps(const wxBitmap &, bool, const wxBitmap &, const wxBitmap &, const wxBitmap &)");
		}
		self->SetButtonBitmaps(bmpNormal, pushButtonBg, bmpPressed, bmpHover, bmpDisabled);

		return 0;
	}

	// void wxComboCtrl::SetButtonPosition(int width = -1, int height = -1, int side = ::wxRIGHT, int spacingX = 0)
	static int _bind_SetButtonPosition(lua_State *L) {
		if (!_lg_typecheck_SetButtonPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetButtonPosition(int width = -1, int height = -1, int side = ::wxRIGHT, int spacingX = 0) function, expected prototype:\nvoid wxComboCtrl::SetButtonPosition(int width = -1, int height = -1, int side = ::wxRIGHT, int spacingX = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=luatop>1 ? (int)lua_tointeger(L,2) : -1;
		int height=luatop>2 ? (int)lua_tointeger(L,3) : -1;
		int side=luatop>3 ? (int)lua_tointeger(L,4) : ::wxRIGHT;
		int spacingX=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetButtonPosition(int, int, int, int)");
		}
		self->SetButtonPosition(width, height, side, spacingX);

		return 0;
	}

	// void wxComboCtrl::SetCustomPaintWidth(int width)
	static int _bind_SetCustomPaintWidth(lua_State *L) {
		if (!_lg_typecheck_SetCustomPaintWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetCustomPaintWidth(int width) function, expected prototype:\nvoid wxComboCtrl::SetCustomPaintWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetCustomPaintWidth(int)");
		}
		self->SetCustomPaintWidth(width);

		return 0;
	}

	// bool wxComboCtrl::SetHint(const wxString & hint)
	static int _bind_SetHint(lua_State *L) {
		if (!_lg_typecheck_SetHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::SetHint(const wxString & hint) function, expected prototype:\nbool wxComboCtrl::SetHint(const wxString & hint)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString hint(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::SetHint(const wxString &)");
		}
		bool lret = self->SetHint(hint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::SetInsertionPoint(long pos)
	static int _bind_SetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_SetInsertionPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetInsertionPoint(long pos) function, expected prototype:\nvoid wxComboCtrl::SetInsertionPoint(long pos)\nClass arguments details:\n");
		}

		long pos=(long)lua_tointeger(L,2);

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetInsertionPoint(long)");
		}
		self->SetInsertionPoint(pos);

		return 0;
	}

	// void wxComboCtrl::SetInsertionPointEnd()
	static int _bind_SetInsertionPointEnd(lua_State *L) {
		if (!_lg_typecheck_SetInsertionPointEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetInsertionPointEnd() function, expected prototype:\nvoid wxComboCtrl::SetInsertionPointEnd()\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetInsertionPointEnd()");
		}
		self->SetInsertionPointEnd();

		return 0;
	}

	// bool wxComboCtrl::SetMargins(const wxPoint & pt)
	static int _bind_SetMargins_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::SetMargins(const wxPoint & pt) function, expected prototype:\nbool wxComboCtrl::SetMargins(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxComboCtrl::SetMargins function");
		}
		const wxPoint & pt=*pt_ptr;

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::SetMargins(const wxPoint &)");
		}
		bool lret = self->SetMargins(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::SetMargins(int left, int top = -1)
	static int _bind_SetMargins_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::SetMargins(int left, int top = -1) function, expected prototype:\nbool wxComboCtrl::SetMargins(int left, int top = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int left=(int)lua_tointeger(L,2);
		int top=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::SetMargins(int, int)");
		}
		bool lret = self->SetMargins(left, top);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxComboCtrl::SetMargins
	static int _bind_SetMargins(lua_State *L) {
		if (_lg_typecheck_SetMargins_overload_1(L)) return _bind_SetMargins_overload_1(L);
		if (_lg_typecheck_SetMargins_overload_2(L)) return _bind_SetMargins_overload_2(L);

		luaL_error(L, "error in function SetMargins, cannot match any of the overloads for function SetMargins:\n  SetMargins(const wxPoint &)\n  SetMargins(int, int)\n");
		return 0;
	}

	// void wxComboCtrl::SetPopupAnchor(int anchorSide)
	static int _bind_SetPopupAnchor(lua_State *L) {
		if (!_lg_typecheck_SetPopupAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetPopupAnchor(int anchorSide) function, expected prototype:\nvoid wxComboCtrl::SetPopupAnchor(int anchorSide)\nClass arguments details:\n");
		}

		int anchorSide=(int)lua_tointeger(L,2);

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetPopupAnchor(int)");
		}
		self->SetPopupAnchor(anchorSide);

		return 0;
	}

	// void wxComboCtrl::SetPopupControl(wxComboPopup * popup)
	static int _bind_SetPopupControl(lua_State *L) {
		if (!_lg_typecheck_SetPopupControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetPopupControl(wxComboPopup * popup) function, expected prototype:\nvoid wxComboCtrl::SetPopupControl(wxComboPopup * popup)\nClass arguments details:\narg 1 ID = 7956593\n");
		}

		wxComboPopup* popup=(Luna< wxComboPopup >::check(L,2));

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetPopupControl(wxComboPopup *)");
		}
		self->SetPopupControl(popup);

		return 0;
	}

	// void wxComboCtrl::SetPopupExtents(int extLeft, int extRight)
	static int _bind_SetPopupExtents(lua_State *L) {
		if (!_lg_typecheck_SetPopupExtents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetPopupExtents(int extLeft, int extRight) function, expected prototype:\nvoid wxComboCtrl::SetPopupExtents(int extLeft, int extRight)\nClass arguments details:\n");
		}

		int extLeft=(int)lua_tointeger(L,2);
		int extRight=(int)lua_tointeger(L,3);

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetPopupExtents(int, int)");
		}
		self->SetPopupExtents(extLeft, extRight);

		return 0;
	}

	// void wxComboCtrl::SetPopupMaxHeight(int height)
	static int _bind_SetPopupMaxHeight(lua_State *L) {
		if (!_lg_typecheck_SetPopupMaxHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetPopupMaxHeight(int height) function, expected prototype:\nvoid wxComboCtrl::SetPopupMaxHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetPopupMaxHeight(int)");
		}
		self->SetPopupMaxHeight(height);

		return 0;
	}

	// void wxComboCtrl::SetPopupMinWidth(int width)
	static int _bind_SetPopupMinWidth(lua_State *L) {
		if (!_lg_typecheck_SetPopupMinWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetPopupMinWidth(int width) function, expected prototype:\nvoid wxComboCtrl::SetPopupMinWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetPopupMinWidth(int)");
		}
		self->SetPopupMinWidth(width);

		return 0;
	}

	// void wxComboCtrl::SetSelection(long from, long to)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetSelection(long from, long to) function, expected prototype:\nvoid wxComboCtrl::SetSelection(long from, long to)\nClass arguments details:\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetSelection(long, long)");
		}
		self->SetSelection(from, to);

		return 0;
	}

	// void wxComboCtrl::SetText(const wxString & value)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetText(const wxString & value) function, expected prototype:\nvoid wxComboCtrl::SetText(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetText(const wxString &)");
		}
		self->SetText(value);

		return 0;
	}

	// void wxComboCtrl::SetTextCtrlStyle(int style)
	static int _bind_SetTextCtrlStyle(lua_State *L) {
		if (!_lg_typecheck_SetTextCtrlStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetTextCtrlStyle(int style) function, expected prototype:\nvoid wxComboCtrl::SetTextCtrlStyle(int style)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetTextCtrlStyle(int)");
		}
		self->SetTextCtrlStyle(style);

		return 0;
	}

	// void wxComboCtrl::SetTextIndent(int indent)
	static int _bind_SetTextIndent(lua_State *L) {
		if (!_lg_typecheck_SetTextIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetTextIndent(int indent) function, expected prototype:\nvoid wxComboCtrl::SetTextIndent(int indent)\nClass arguments details:\n");
		}

		int indent=(int)lua_tointeger(L,2);

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetTextIndent(int)");
		}
		self->SetTextIndent(indent);

		return 0;
	}

	// void wxComboCtrl::SetValue(const wxString & value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetValue(const wxString & value) function, expected prototype:\nvoid wxComboCtrl::SetValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetValue(const wxString &)");
		}
		self->SetValue(value);

		return 0;
	}

	// void wxComboCtrl::SetValueWithEvent(const wxString & value, bool withEvent = true)
	static int _bind_SetValueWithEvent(lua_State *L) {
		if (!_lg_typecheck_SetValueWithEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetValueWithEvent(const wxString & value, bool withEvent = true) function, expected prototype:\nvoid wxComboCtrl::SetValueWithEvent(const wxString & value, bool withEvent = true)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString value(lua_tostring(L,2),lua_objlen(L,2));
		bool withEvent=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetValueWithEvent(const wxString &, bool)");
		}
		self->SetValueWithEvent(value, withEvent);

		return 0;
	}

	// void wxComboCtrl::ShowPopup()
	static int _bind_ShowPopup(lua_State *L) {
		if (!_lg_typecheck_ShowPopup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::ShowPopup() function, expected prototype:\nvoid wxComboCtrl::ShowPopup()\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::ShowPopup()");
		}
		self->ShowPopup();

		return 0;
	}

	// void wxComboCtrl::Undo()
	static int _bind_Undo(lua_State *L) {
		if (!_lg_typecheck_Undo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Undo() function, expected prototype:\nvoid wxComboCtrl::Undo()\nClass arguments details:\n");
		}


		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Undo()");
		}
		self->Undo();

		return 0;
	}

	// void wxComboCtrl::UseAltPopupWindow(bool enable = true)
	static int _bind_UseAltPopupWindow(lua_State *L) {
		if (!_lg_typecheck_UseAltPopupWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::UseAltPopupWindow(bool enable = true) function, expected prototype:\nvoid wxComboCtrl::UseAltPopupWindow(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxComboCtrl* self=dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboCtrl::UseAltPopupWindow(bool)");
		}
		self->UseAltPopupWindow(enable);

		return 0;
	}

	// static int wxComboCtrl::GetFeatures()
	static int _bind_GetFeatures(lua_State *L) {
		if (!_lg_typecheck_GetFeatures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int wxComboCtrl::GetFeatures() function, expected prototype:\nstatic int wxComboCtrl::GetFeatures()\nClass arguments details:\n");
		}


		int lret = wxComboCtrl::GetFeatures();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxComboCtrl* LunaTraits< wxComboCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxComboCtrl::_bind_ctor(L);
}

void LunaTraits< wxComboCtrl >::_bind_dtor(wxComboCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxComboCtrl >::className[] = "wxComboCtrl";
const char LunaTraits< wxComboCtrl >::fullName[] = "wxComboCtrl";
const char LunaTraits< wxComboCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxComboCtrl >::parents[] = {"wx.wxControl", "wx.wxTextEntry", 0};
const int LunaTraits< wxComboCtrl >::hash = 93422634;
const int LunaTraits< wxComboCtrl >::uniqueIDs[] = {56813631, 53506535, 54144136,0};

luna_RegType LunaTraits< wxComboCtrl >::methods[] = {
	{"Copy", &luna_wrapper_wxComboCtrl::_bind_Copy},
	{"Create", &luna_wrapper_wxComboCtrl::_bind_Create},
	{"Cut", &luna_wrapper_wxComboCtrl::_bind_Cut},
	{"Dismiss", &luna_wrapper_wxComboCtrl::_bind_Dismiss},
	{"EnablePopupAnimation", &luna_wrapper_wxComboCtrl::_bind_EnablePopupAnimation},
	{"GetBitmapDisabled", &luna_wrapper_wxComboCtrl::_bind_GetBitmapDisabled},
	{"GetBitmapHover", &luna_wrapper_wxComboCtrl::_bind_GetBitmapHover},
	{"GetBitmapNormal", &luna_wrapper_wxComboCtrl::_bind_GetBitmapNormal},
	{"GetBitmapPressed", &luna_wrapper_wxComboCtrl::_bind_GetBitmapPressed},
	{"GetButtonSize", &luna_wrapper_wxComboCtrl::_bind_GetButtonSize},
	{"GetCustomPaintWidth", &luna_wrapper_wxComboCtrl::_bind_GetCustomPaintWidth},
	{"GetHint", &luna_wrapper_wxComboCtrl::_bind_GetHint},
	{"GetInsertionPoint", &luna_wrapper_wxComboCtrl::_bind_GetInsertionPoint},
	{"GetLastPosition", &luna_wrapper_wxComboCtrl::_bind_GetLastPosition},
	{"GetMargins", &luna_wrapper_wxComboCtrl::_bind_GetMargins},
	{"GetPopupControl", &luna_wrapper_wxComboCtrl::_bind_GetPopupControl},
	{"GetPopupWindow", &luna_wrapper_wxComboCtrl::_bind_GetPopupWindow},
	{"GetTextCtrl", &luna_wrapper_wxComboCtrl::_bind_GetTextCtrl},
	{"GetTextIndent", &luna_wrapper_wxComboCtrl::_bind_GetTextIndent},
	{"GetTextRect", &luna_wrapper_wxComboCtrl::_bind_GetTextRect},
	{"GetValue", &luna_wrapper_wxComboCtrl::_bind_GetValue},
	{"HidePopup", &luna_wrapper_wxComboCtrl::_bind_HidePopup},
	{"IsPopupShown", &luna_wrapper_wxComboCtrl::_bind_IsPopupShown},
	{"IsPopupWindowState", &luna_wrapper_wxComboCtrl::_bind_IsPopupWindowState},
	{"OnButtonClick", &luna_wrapper_wxComboCtrl::_bind_OnButtonClick},
	{"Paste", &luna_wrapper_wxComboCtrl::_bind_Paste},
	{"Popup", &luna_wrapper_wxComboCtrl::_bind_Popup},
	{"Remove", &luna_wrapper_wxComboCtrl::_bind_Remove},
	{"Replace", &luna_wrapper_wxComboCtrl::_bind_Replace},
	{"SetButtonBitmaps", &luna_wrapper_wxComboCtrl::_bind_SetButtonBitmaps},
	{"SetButtonPosition", &luna_wrapper_wxComboCtrl::_bind_SetButtonPosition},
	{"SetCustomPaintWidth", &luna_wrapper_wxComboCtrl::_bind_SetCustomPaintWidth},
	{"SetHint", &luna_wrapper_wxComboCtrl::_bind_SetHint},
	{"SetInsertionPoint", &luna_wrapper_wxComboCtrl::_bind_SetInsertionPoint},
	{"SetInsertionPointEnd", &luna_wrapper_wxComboCtrl::_bind_SetInsertionPointEnd},
	{"SetMargins", &luna_wrapper_wxComboCtrl::_bind_SetMargins},
	{"SetPopupAnchor", &luna_wrapper_wxComboCtrl::_bind_SetPopupAnchor},
	{"SetPopupControl", &luna_wrapper_wxComboCtrl::_bind_SetPopupControl},
	{"SetPopupExtents", &luna_wrapper_wxComboCtrl::_bind_SetPopupExtents},
	{"SetPopupMaxHeight", &luna_wrapper_wxComboCtrl::_bind_SetPopupMaxHeight},
	{"SetPopupMinWidth", &luna_wrapper_wxComboCtrl::_bind_SetPopupMinWidth},
	{"SetSelection", &luna_wrapper_wxComboCtrl::_bind_SetSelection},
	{"SetText", &luna_wrapper_wxComboCtrl::_bind_SetText},
	{"SetTextCtrlStyle", &luna_wrapper_wxComboCtrl::_bind_SetTextCtrlStyle},
	{"SetTextIndent", &luna_wrapper_wxComboCtrl::_bind_SetTextIndent},
	{"SetValue", &luna_wrapper_wxComboCtrl::_bind_SetValue},
	{"SetValueWithEvent", &luna_wrapper_wxComboCtrl::_bind_SetValueWithEvent},
	{"ShowPopup", &luna_wrapper_wxComboCtrl::_bind_ShowPopup},
	{"Undo", &luna_wrapper_wxComboCtrl::_bind_Undo},
	{"UseAltPopupWindow", &luna_wrapper_wxComboCtrl::_bind_UseAltPopupWindow},
	{"GetFeatures", &luna_wrapper_wxComboCtrl::_bind_GetFeatures},
	{"__eq", &luna_wrapper_wxComboCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxComboCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxComboCtrl::_cast_from_wxObject},
	{"wxTextEntry", &luna_wrapper_wxComboCtrl::_cast_from_wxTextEntry},
	{0,0}
};

luna_RegEnumType LunaTraits< wxComboCtrl >::enumValues[] = {
	{0,0}
};


