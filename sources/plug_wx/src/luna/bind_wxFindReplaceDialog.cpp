#include <plug_common.h>

class luna_wrapper_wxFindReplaceDialog {
public:
	typedef Luna< wxFindReplaceDialog > luna_t;

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
		wxFindReplaceDialog* ptr= dynamic_cast< wxFindReplaceDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFindReplaceDialog >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFindReplaceDialog* ptr= static_cast< wxFindReplaceDialog* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFindReplaceDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxFindReplaceData* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFindReplaceDialog::wxFindReplaceDialog()
	static wxFindReplaceDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFindReplaceDialog::wxFindReplaceDialog() function, expected prototype:\nwxFindReplaceDialog::wxFindReplaceDialog()\nClass arguments details:\n");
		}


		return new wxFindReplaceDialog();
	}

	// wxFindReplaceDialog::wxFindReplaceDialog(wxWindow * parent, wxFindReplaceData * data, const wxString & title, int style = 0)
	static wxFindReplaceDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFindReplaceDialog::wxFindReplaceDialog(wxWindow * parent, wxFindReplaceData * data, const wxString & title, int style = 0) function, expected prototype:\nwxFindReplaceDialog::wxFindReplaceDialog(wxWindow * parent, wxFindReplaceData * data, const wxString & title, int style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxFindReplaceData* data=dynamic_cast< wxFindReplaceData* >(Luna< wxObject >::check(L,2));
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		int style=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		return new wxFindReplaceDialog(parent, data, title, style);
	}

	// Overload binder for wxFindReplaceDialog::wxFindReplaceDialog
	static wxFindReplaceDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFindReplaceDialog, cannot match any of the overloads for function wxFindReplaceDialog:\n  wxFindReplaceDialog()\n  wxFindReplaceDialog(wxWindow *, wxFindReplaceData *, const wxString &, int)\n");
		return NULL;
	}


	// Function binds:
	// bool wxFindReplaceDialog::Create(wxWindow * parent, wxFindReplaceData * data, const wxString & title, int style = 0)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFindReplaceDialog::Create(wxWindow * parent, wxFindReplaceData * data, const wxString & title, int style = 0) function, expected prototype:\nbool wxFindReplaceDialog::Create(wxWindow * parent, wxFindReplaceData * data, const wxString & title, int style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxFindReplaceData* data=dynamic_cast< wxFindReplaceData* >(Luna< wxObject >::check(L,3));
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		int style=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxFindReplaceDialog* self=dynamic_cast< wxFindReplaceDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFindReplaceDialog::Create(wxWindow *, wxFindReplaceData *, const wxString &, int)");
		}
		bool lret = self->Create(parent, data, title, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxFindReplaceData * wxFindReplaceDialog::GetData() const
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxFindReplaceData * wxFindReplaceDialog::GetData() const function, expected prototype:\nconst wxFindReplaceData * wxFindReplaceDialog::GetData() const\nClass arguments details:\n");
		}


		wxFindReplaceDialog* self=dynamic_cast< wxFindReplaceDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxFindReplaceData * wxFindReplaceDialog::GetData() const");
		}
		const wxFindReplaceData * lret = self->GetData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFindReplaceData >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFindReplaceDialog* LunaTraits< wxFindReplaceDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFindReplaceDialog::_bind_ctor(L);
}

void LunaTraits< wxFindReplaceDialog >::_bind_dtor(wxFindReplaceDialog* obj) {
	delete obj;
}

const char LunaTraits< wxFindReplaceDialog >::className[] = "wxFindReplaceDialog";
const char LunaTraits< wxFindReplaceDialog >::fullName[] = "wxFindReplaceDialog";
const char LunaTraits< wxFindReplaceDialog >::moduleName[] = "wx";
const char* LunaTraits< wxFindReplaceDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxFindReplaceDialog >::hash = 37417822;
const int LunaTraits< wxFindReplaceDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxFindReplaceDialog >::methods[] = {
	{"Create", &luna_wrapper_wxFindReplaceDialog::_bind_Create},
	{"GetData", &luna_wrapper_wxFindReplaceDialog::_bind_GetData},
	{"__eq", &luna_wrapper_wxFindReplaceDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFindReplaceDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxFindReplaceDialog::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxFindReplaceDialog::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFindReplaceDialog >::enumValues[] = {
	{0,0}
};


