#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSearchCtrl.h>

class luna_wrapper_wxSearchCtrl {
public:
	typedef Luna< wxSearchCtrl > luna_t;

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
		wxSearchCtrl* ptr= dynamic_cast< wxSearchCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSearchCtrl >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTextEntry(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSearchCtrl* ptr= dynamic_cast< wxSearchCtrl* >(Luna< wxTextEntry >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSearchCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
		if( luatop<3 || luatop>9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSearchButtonVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCancelButtonVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowCancelButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowSearchButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDescriptiveText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDescriptiveText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSearchCtrl::wxSearchCtrl()
	static wxSearchCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSearchCtrl::wxSearchCtrl() function, expected prototype:\nwxSearchCtrl::wxSearchCtrl()\nClass arguments details:\n");
		}


		return new wxSearchCtrl();
	}

	// wxSearchCtrl::wxSearchCtrl(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSearchCtrlNameStr)
	static wxSearchCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSearchCtrl::wxSearchCtrl(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSearchCtrlNameStr) function, expected prototype:\nwxSearchCtrl::wxSearchCtrl(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSearchCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSearchCtrl::wxSearchCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSearchCtrl::wxSearchCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSearchCtrl::wxSearchCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxSearchCtrl(parent, id, value, pos, size, style, validator, name);
	}

	// wxSearchCtrl::wxSearchCtrl(lua_Table * data)
	static wxSearchCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSearchCtrl::wxSearchCtrl(lua_Table * data) function, expected prototype:\nwxSearchCtrl::wxSearchCtrl(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxSearchCtrl(L,NULL);
	}

	// wxSearchCtrl::wxSearchCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSearchCtrlNameStr)
	static wxSearchCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSearchCtrl::wxSearchCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSearchCtrlNameStr) function, expected prototype:\nwxSearchCtrl::wxSearchCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSearchCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSearchCtrl::wxSearchCtrl function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSearchCtrl::wxSearchCtrl function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSearchCtrl::wxSearchCtrl function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wrapper_wxSearchCtrl(L,NULL, parent, id, value, pos, size, style, validator, name);
	}

	// Overload binder for wxSearchCtrl::wxSearchCtrl
	static wxSearchCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxSearchCtrl, cannot match any of the overloads for function wxSearchCtrl:\n  wxSearchCtrl()\n  wxSearchCtrl(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxSearchCtrl(lua_Table *)\n  wxSearchCtrl(lua_Table *, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxSearchCtrl::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSearchCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSearchCtrl::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSearchCtrlNameStr) function, expected prototype:\nbool wxSearchCtrl::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSearchCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSearchCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSearchCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSearchCtrl::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxSearchCtrl* self=dynamic_cast< wxSearchCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSearchCtrl::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, value, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxMenu * wxSearchCtrl::GetMenu()
	static int _bind_GetMenu(lua_State *L) {
		if (!_lg_typecheck_GetMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenu * wxSearchCtrl::GetMenu() function, expected prototype:\nwxMenu * wxSearchCtrl::GetMenu()\nClass arguments details:\n");
		}


		wxSearchCtrl* self=dynamic_cast< wxSearchCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenu * wxSearchCtrl::GetMenu()");
		}
		wxMenu * lret = self->GetMenu();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// bool wxSearchCtrl::IsSearchButtonVisible() const
	static int _bind_IsSearchButtonVisible(lua_State *L) {
		if (!_lg_typecheck_IsSearchButtonVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSearchCtrl::IsSearchButtonVisible() const function, expected prototype:\nbool wxSearchCtrl::IsSearchButtonVisible() const\nClass arguments details:\n");
		}


		wxSearchCtrl* self=dynamic_cast< wxSearchCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSearchCtrl::IsSearchButtonVisible() const");
		}
		bool lret = self->IsSearchButtonVisible();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSearchCtrl::IsCancelButtonVisible() const
	static int _bind_IsCancelButtonVisible(lua_State *L) {
		if (!_lg_typecheck_IsCancelButtonVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSearchCtrl::IsCancelButtonVisible() const function, expected prototype:\nbool wxSearchCtrl::IsCancelButtonVisible() const\nClass arguments details:\n");
		}


		wxSearchCtrl* self=dynamic_cast< wxSearchCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSearchCtrl::IsCancelButtonVisible() const");
		}
		bool lret = self->IsCancelButtonVisible();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSearchCtrl::SetMenu(wxMenu * menu)
	static int _bind_SetMenu(lua_State *L) {
		if (!_lg_typecheck_SetMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSearchCtrl::SetMenu(wxMenu * menu) function, expected prototype:\nvoid wxSearchCtrl::SetMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxSearchCtrl* self=dynamic_cast< wxSearchCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSearchCtrl::SetMenu(wxMenu *)");
		}
		self->SetMenu(menu);

		return 0;
	}

	// void wxSearchCtrl::ShowCancelButton(bool show)
	static int _bind_ShowCancelButton(lua_State *L) {
		if (!_lg_typecheck_ShowCancelButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSearchCtrl::ShowCancelButton(bool show) function, expected prototype:\nvoid wxSearchCtrl::ShowCancelButton(bool show)\nClass arguments details:\n");
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxSearchCtrl* self=dynamic_cast< wxSearchCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSearchCtrl::ShowCancelButton(bool)");
		}
		self->ShowCancelButton(show);

		return 0;
	}

	// void wxSearchCtrl::ShowSearchButton(bool show)
	static int _bind_ShowSearchButton(lua_State *L) {
		if (!_lg_typecheck_ShowSearchButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSearchCtrl::ShowSearchButton(bool show) function, expected prototype:\nvoid wxSearchCtrl::ShowSearchButton(bool show)\nClass arguments details:\n");
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxSearchCtrl* self=dynamic_cast< wxSearchCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSearchCtrl::ShowSearchButton(bool)");
		}
		self->ShowSearchButton(show);

		return 0;
	}

	// void wxSearchCtrl::SetDescriptiveText(const wxString & text)
	static int _bind_SetDescriptiveText(lua_State *L) {
		if (!_lg_typecheck_SetDescriptiveText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSearchCtrl::SetDescriptiveText(const wxString & text) function, expected prototype:\nvoid wxSearchCtrl::SetDescriptiveText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxSearchCtrl* self=dynamic_cast< wxSearchCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSearchCtrl::SetDescriptiveText(const wxString &)");
		}
		self->SetDescriptiveText(text);

		return 0;
	}

	// wxString wxSearchCtrl::GetDescriptiveText() const
	static int _bind_GetDescriptiveText(lua_State *L) {
		if (!_lg_typecheck_GetDescriptiveText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxSearchCtrl::GetDescriptiveText() const function, expected prototype:\nwxString wxSearchCtrl::GetDescriptiveText() const\nClass arguments details:\n");
		}


		wxSearchCtrl* self=dynamic_cast< wxSearchCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxSearchCtrl::GetDescriptiveText() const");
		}
		wxString lret = self->GetDescriptiveText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxSearchCtrl* LunaTraits< wxSearchCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSearchCtrl::_bind_ctor(L);
}

void LunaTraits< wxSearchCtrl >::_bind_dtor(wxSearchCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxSearchCtrl >::className[] = "wxSearchCtrl";
const char LunaTraits< wxSearchCtrl >::fullName[] = "wxSearchCtrl";
const char LunaTraits< wxSearchCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxSearchCtrl >::parents[] = {"wx.wxTextCtrl", 0};
const int LunaTraits< wxSearchCtrl >::hash = 44566327;
const int LunaTraits< wxSearchCtrl >::uniqueIDs[] = {56813631, 53506535, 54144136,0};

luna_RegType LunaTraits< wxSearchCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxSearchCtrl::_bind_Create},
	{"GetMenu", &luna_wrapper_wxSearchCtrl::_bind_GetMenu},
	{"IsSearchButtonVisible", &luna_wrapper_wxSearchCtrl::_bind_IsSearchButtonVisible},
	{"IsCancelButtonVisible", &luna_wrapper_wxSearchCtrl::_bind_IsCancelButtonVisible},
	{"SetMenu", &luna_wrapper_wxSearchCtrl::_bind_SetMenu},
	{"ShowCancelButton", &luna_wrapper_wxSearchCtrl::_bind_ShowCancelButton},
	{"ShowSearchButton", &luna_wrapper_wxSearchCtrl::_bind_ShowSearchButton},
	{"SetDescriptiveText", &luna_wrapper_wxSearchCtrl::_bind_SetDescriptiveText},
	{"GetDescriptiveText", &luna_wrapper_wxSearchCtrl::_bind_GetDescriptiveText},
	{"__eq", &luna_wrapper_wxSearchCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSearchCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxSearchCtrl::_cast_from_wxObject},
	{"wxTextEntry", &luna_wrapper_wxSearchCtrl::_cast_from_wxTextEntry},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSearchCtrl >::enumValues[] = {
	{0,0}
};


