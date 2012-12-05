#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDirPickerCtrl.h>

class luna_wrapper_wxDirPickerCtrl {
public:
	typedef Luna< wxDirPickerCtrl > luna_t;

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
		wxDirPickerCtrl* ptr= dynamic_cast< wxDirPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDirPickerCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>5 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,6))) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>6 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,7))) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>8 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9))) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDirName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDirName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDirPickerCtrl::wxDirPickerCtrl(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxDirSelectorPromptStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDirPickerCtrlNameStr)
	static wxDirPickerCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDirPickerCtrl::wxDirPickerCtrl(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxDirSelectorPromptStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDirPickerCtrlNameStr) function, expected prototype:\nwxDirPickerCtrl::wxDirPickerCtrl(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxDirSelectorPromptStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDirPickerCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		wxString message(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDirPickerCtrl::wxDirPickerCtrl function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDirPickerCtrl::wxDirPickerCtrl function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDIRP_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDirPickerCtrl::wxDirPickerCtrl function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxDirPickerCtrl(parent, id, path, message, pos, size, style, validator, name);
	}

	// wxDirPickerCtrl::wxDirPickerCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxDirSelectorPromptStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDirPickerCtrlNameStr)
	static wxDirPickerCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDirPickerCtrl::wxDirPickerCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxDirSelectorPromptStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDirPickerCtrlNameStr) function, expected prototype:\nwxDirPickerCtrl::wxDirPickerCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxDirSelectorPromptStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDirPickerCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 6 ID = 25723480\narg 7 ID = 20268751\narg 9 ID = 56813631\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString path(lua_tostring(L,4),lua_objlen(L,4));
		wxString message(lua_tostring(L,5),lua_objlen(L,5));
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDirPickerCtrl::wxDirPickerCtrl function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDirPickerCtrl::wxDirPickerCtrl function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxDIRP_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDirPickerCtrl::wxDirPickerCtrl function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wrapper_wxDirPickerCtrl(L,NULL, parent, id, path, message, pos, size, style, validator, name);
	}

	// Overload binder for wxDirPickerCtrl::wxDirPickerCtrl
	static wxDirPickerCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDirPickerCtrl, cannot match any of the overloads for function wxDirPickerCtrl:\n  wxDirPickerCtrl(wxWindow *, int, const wxString &, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxDirPickerCtrl(lua_Table *, wxWindow *, int, const wxString &, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxDirPickerCtrl::Create(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxDirSelectorPromptStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDirPickerCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDirPickerCtrl::Create(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxDirSelectorPromptStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDirPickerCtrlNameStr) function, expected prototype:\nbool wxDirPickerCtrl::Create(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxDirSelectorPromptStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDirPickerCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString path(lua_tostring(L,4),lua_objlen(L,4));
		wxString message(lua_tostring(L,5),lua_objlen(L,5));
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDirPickerCtrl::Create function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDirPickerCtrl::Create function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxDIRP_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDirPickerCtrl::Create function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxDirPickerCtrl* self=dynamic_cast< wxDirPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDirPickerCtrl::Create(wxWindow *, int, const wxString &, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, path, message, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFileName wxDirPickerCtrl::GetDirName() const
	static int _bind_GetDirName(lua_State *L) {
		if (!_lg_typecheck_GetDirName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileName wxDirPickerCtrl::GetDirName() const function, expected prototype:\nwxFileName wxDirPickerCtrl::GetDirName() const\nClass arguments details:\n");
		}


		wxDirPickerCtrl* self=dynamic_cast< wxDirPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFileName wxDirPickerCtrl::GetDirName() const");
		}
		wxFileName stack_lret = self->GetDirName();
		wxFileName* lret = new wxFileName(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,true);

		return 1;
	}

	// wxString wxDirPickerCtrl::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDirPickerCtrl::GetPath() const function, expected prototype:\nwxString wxDirPickerCtrl::GetPath() const\nClass arguments details:\n");
		}


		wxDirPickerCtrl* self=dynamic_cast< wxDirPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDirPickerCtrl::GetPath() const");
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDirPickerCtrl::SetDirName(const wxFileName & dirname)
	static int _bind_SetDirName(lua_State *L) {
		if (!_lg_typecheck_SetDirName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDirPickerCtrl::SetDirName(const wxFileName & dirname) function, expected prototype:\nvoid wxDirPickerCtrl::SetDirName(const wxFileName & dirname)\nClass arguments details:\narg 1 ID = 53530938\n");
		}

		const wxFileName* dirname_ptr=(Luna< wxFileName >::check(L,2));
		if( !dirname_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dirname in wxDirPickerCtrl::SetDirName function");
		}
		const wxFileName & dirname=*dirname_ptr;

		wxDirPickerCtrl* self=dynamic_cast< wxDirPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDirPickerCtrl::SetDirName(const wxFileName &)");
		}
		self->SetDirName(dirname);

		return 0;
	}

	// void wxDirPickerCtrl::SetPath(const wxString & dirname)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDirPickerCtrl::SetPath(const wxString & dirname) function, expected prototype:\nvoid wxDirPickerCtrl::SetPath(const wxString & dirname)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString dirname(lua_tostring(L,2),lua_objlen(L,2));

		wxDirPickerCtrl* self=dynamic_cast< wxDirPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDirPickerCtrl::SetPath(const wxString &)");
		}
		self->SetPath(dirname);

		return 0;
	}


	// Operator binds:

};

wxDirPickerCtrl* LunaTraits< wxDirPickerCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDirPickerCtrl::_bind_ctor(L);
}

void LunaTraits< wxDirPickerCtrl >::_bind_dtor(wxDirPickerCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxDirPickerCtrl >::className[] = "wxDirPickerCtrl";
const char LunaTraits< wxDirPickerCtrl >::fullName[] = "wxDirPickerCtrl";
const char LunaTraits< wxDirPickerCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxDirPickerCtrl >::parents[] = {"wx.wxPickerBase", 0};
const int LunaTraits< wxDirPickerCtrl >::hash = 19181837;
const int LunaTraits< wxDirPickerCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDirPickerCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxDirPickerCtrl::_bind_Create},
	{"GetDirName", &luna_wrapper_wxDirPickerCtrl::_bind_GetDirName},
	{"GetPath", &luna_wrapper_wxDirPickerCtrl::_bind_GetPath},
	{"SetDirName", &luna_wrapper_wxDirPickerCtrl::_bind_SetDirName},
	{"SetPath", &luna_wrapper_wxDirPickerCtrl::_bind_SetPath},
	{"__eq", &luna_wrapper_wxDirPickerCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDirPickerCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxDirPickerCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDirPickerCtrl >::enumValues[] = {
	{0,0}
};


