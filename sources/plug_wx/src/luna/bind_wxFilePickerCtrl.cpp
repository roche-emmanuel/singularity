#include <plug_common.h>

class luna_wrapper_wxFilePickerCtrl {
public:
	typedef Luna< wxFilePickerCtrl > luna_t;

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
		wxFilePickerCtrl* ptr= dynamic_cast< wxFilePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFilePickerCtrl >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFilePickerCtrl* ptr= static_cast< wxFilePickerCtrl* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFilePickerCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>10 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>11 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,25723480) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,20268751) ) return false;
		if( luatop>8 && (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && !Luna<void>::has_uniqueid(L,10,56813631) ) return false;
		if( luatop>10 && lua_isstring(L,11)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFileName(lua_State *L) {
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
	// wxFilePickerCtrl::wxFilePickerCtrl(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxFileSelectorPromptStr, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFLP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFilePickerCtrlNameStr)
	static wxFilePickerCtrl* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFilePickerCtrl::wxFilePickerCtrl(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxFileSelectorPromptStr, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFLP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFilePickerCtrlNameStr) function, expected prototype:\nwxFilePickerCtrl::wxFilePickerCtrl(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxFileSelectorPromptStr, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFLP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFilePickerCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 6 ID = 25723480\narg 7 ID = 20268751\narg 9 ID = 56813631\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		wxString message(lua_tostring(L,4),lua_objlen(L,4));
		wxString wildcard(lua_tostring(L,5),lua_objlen(L,5));
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxFilePickerCtrl::wxFilePickerCtrl function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFilePickerCtrl::wxFilePickerCtrl function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxFLP_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxFilePickerCtrl::wxFilePickerCtrl function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wxFilePickerCtrl(parent, id, path, message, wildcard, pos, size, style, validator, name);
	}


	// Function binds:
	// bool wxFilePickerCtrl::Create(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxFileSelectorPromptStr, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFLP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFilePickerCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFilePickerCtrl::Create(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxFileSelectorPromptStr, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFLP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFilePickerCtrlNameStr) function, expected prototype:\nbool wxFilePickerCtrl::Create(wxWindow * parent, int id, const wxString & path = wxEmptyString, const wxString & message = wxFileSelectorPromptStr, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxFLP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxFilePickerCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 6 ID = 25723480\narg 7 ID = 20268751\narg 9 ID = 56813631\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString path(lua_tostring(L,4),lua_objlen(L,4));
		wxString message(lua_tostring(L,5),lua_objlen(L,5));
		wxString wildcard(lua_tostring(L,6),lua_objlen(L,6));
		const wxPoint* pos_ptr=luatop>6 ? (Luna< wxPoint >::check(L,7)) : NULL;
		if( luatop>6 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxFilePickerCtrl::Create function");
		}
		const wxPoint & pos=luatop>6 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>7 ? (Luna< wxSize >::check(L,8)) : NULL;
		if( luatop>7 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFilePickerCtrl::Create function");
		}
		const wxSize & size=luatop>7 ? *size_ptr : wxDefaultSize;
		long style=luatop>8 ? (long)lua_tointeger(L,9) : wxFLP_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>9 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,10)) : NULL;
		if( luatop>9 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxFilePickerCtrl::Create function");
		}
		const wxValidator & validator=luatop>9 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,11),lua_objlen(L,11));

		wxFilePickerCtrl* self=dynamic_cast< wxFilePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFilePickerCtrl::Create(wxWindow *, int, const wxString &, const wxString &, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, path, message, wildcard, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFileName wxFilePickerCtrl::GetFileName() const
	static int _bind_GetFileName(lua_State *L) {
		if (!_lg_typecheck_GetFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileName wxFilePickerCtrl::GetFileName() const function, expected prototype:\nwxFileName wxFilePickerCtrl::GetFileName() const\nClass arguments details:\n");
		}


		wxFilePickerCtrl* self=dynamic_cast< wxFilePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFileName wxFilePickerCtrl::GetFileName() const");
		}
		wxFileName stack_lret = self->GetFileName();
		wxFileName* lret = new wxFileName(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,true);

		return 1;
	}

	// wxString wxFilePickerCtrl::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFilePickerCtrl::GetPath() const function, expected prototype:\nwxString wxFilePickerCtrl::GetPath() const\nClass arguments details:\n");
		}


		wxFilePickerCtrl* self=dynamic_cast< wxFilePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFilePickerCtrl::GetPath() const");
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFilePickerCtrl::SetFileName(const wxFileName & filename)
	static int _bind_SetFileName(lua_State *L) {
		if (!_lg_typecheck_SetFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFilePickerCtrl::SetFileName(const wxFileName & filename) function, expected prototype:\nvoid wxFilePickerCtrl::SetFileName(const wxFileName & filename)\nClass arguments details:\narg 1 ID = 53530938\n");
		}

		const wxFileName* filename_ptr=(Luna< wxFileName >::check(L,2));
		if( !filename_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filename in wxFilePickerCtrl::SetFileName function");
		}
		const wxFileName & filename=*filename_ptr;

		wxFilePickerCtrl* self=dynamic_cast< wxFilePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFilePickerCtrl::SetFileName(const wxFileName &)");
		}
		self->SetFileName(filename);

		return 0;
	}

	// void wxFilePickerCtrl::SetPath(const wxString & filename)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFilePickerCtrl::SetPath(const wxString & filename) function, expected prototype:\nvoid wxFilePickerCtrl::SetPath(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxFilePickerCtrl* self=dynamic_cast< wxFilePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFilePickerCtrl::SetPath(const wxString &)");
		}
		self->SetPath(filename);

		return 0;
	}


	// Operator binds:

};

wxFilePickerCtrl* LunaTraits< wxFilePickerCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFilePickerCtrl::_bind_ctor(L);
}

void LunaTraits< wxFilePickerCtrl >::_bind_dtor(wxFilePickerCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxFilePickerCtrl >::className[] = "wxFilePickerCtrl";
const char LunaTraits< wxFilePickerCtrl >::fullName[] = "wxFilePickerCtrl";
const char LunaTraits< wxFilePickerCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxFilePickerCtrl >::parents[] = {"wx.wxPickerBase", 0};
const int LunaTraits< wxFilePickerCtrl >::hash = 42606295;
const int LunaTraits< wxFilePickerCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxFilePickerCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxFilePickerCtrl::_bind_Create},
	{"GetFileName", &luna_wrapper_wxFilePickerCtrl::_bind_GetFileName},
	{"GetPath", &luna_wrapper_wxFilePickerCtrl::_bind_GetPath},
	{"SetFileName", &luna_wrapper_wxFilePickerCtrl::_bind_SetFileName},
	{"SetPath", &luna_wrapper_wxFilePickerCtrl::_bind_SetPath},
	{"__eq", &luna_wrapper_wxFilePickerCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFilePickerCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxFilePickerCtrl::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxFilePickerCtrl::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFilePickerCtrl >::enumValues[] = {
	{0,0}
};


