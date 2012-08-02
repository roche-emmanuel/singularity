#include <plug_common.h>

class luna_wrapper_wxFileCtrlEvent {
public:
	typedef Luna< wxFileCtrlEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileCtrlEvent* ptr= dynamic_cast< wxFileCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileCtrlEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetDirectory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDirectory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxString wxFileCtrlEvent::GetDirectory() const
	static int _bind_GetDirectory(lua_State *L) {
		if (!_lg_typecheck_GetDirectory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileCtrlEvent::GetDirectory() const function, expected prototype:\nwxString wxFileCtrlEvent::GetDirectory() const\nClass arguments details:\n");
		}


		wxFileCtrlEvent* self=dynamic_cast< wxFileCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileCtrlEvent::GetDirectory() const");
		}
		wxString lret = self->GetDirectory();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileCtrlEvent::GetFile() const
	static int _bind_GetFile(lua_State *L) {
		if (!_lg_typecheck_GetFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileCtrlEvent::GetFile() const function, expected prototype:\nwxString wxFileCtrlEvent::GetFile() const\nClass arguments details:\n");
		}


		wxFileCtrlEvent* self=dynamic_cast< wxFileCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileCtrlEvent::GetFile() const");
		}
		wxString lret = self->GetFile();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxArrayString wxFileCtrlEvent::GetFiles() const
	static int _bind_GetFiles(lua_State *L) {
		if (!_lg_typecheck_GetFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxArrayString wxFileCtrlEvent::GetFiles() const function, expected prototype:\nwxArrayString wxFileCtrlEvent::GetFiles() const\nClass arguments details:\n");
		}


		wxFileCtrlEvent* self=dynamic_cast< wxFileCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxArrayString wxFileCtrlEvent::GetFiles() const");
		}
		wxArrayString stack_lret = self->GetFiles();
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}

	// int wxFileCtrlEvent::GetFilterIndex() const
	static int _bind_GetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_GetFilterIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFileCtrlEvent::GetFilterIndex() const function, expected prototype:\nint wxFileCtrlEvent::GetFilterIndex() const\nClass arguments details:\n");
		}


		wxFileCtrlEvent* self=dynamic_cast< wxFileCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFileCtrlEvent::GetFilterIndex() const");
		}
		int lret = self->GetFilterIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxFileCtrlEvent::SetFiles(const wxArrayString & files)
	static int _bind_SetFiles(lua_State *L) {
		if (!_lg_typecheck_SetFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileCtrlEvent::SetFiles(const wxArrayString & files) function, expected prototype:\nvoid wxFileCtrlEvent::SetFiles(const wxArrayString & files)\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* files_ptr=(Luna< wxArrayString >::check(L,2));
		if( !files_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg files in wxFileCtrlEvent::SetFiles function");
		}
		const wxArrayString & files=*files_ptr;

		wxFileCtrlEvent* self=dynamic_cast< wxFileCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileCtrlEvent::SetFiles(const wxArrayString &)");
		}
		self->SetFiles(files);

		return 0;
	}

	// void wxFileCtrlEvent::SetDirectory(const wxString & directory)
	static int _bind_SetDirectory(lua_State *L) {
		if (!_lg_typecheck_SetDirectory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileCtrlEvent::SetDirectory(const wxString & directory) function, expected prototype:\nvoid wxFileCtrlEvent::SetDirectory(const wxString & directory)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString directory(lua_tostring(L,2),lua_objlen(L,2));

		wxFileCtrlEvent* self=dynamic_cast< wxFileCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileCtrlEvent::SetDirectory(const wxString &)");
		}
		self->SetDirectory(directory);

		return 0;
	}

	// void wxFileCtrlEvent::SetFilterIndex(int index)
	static int _bind_SetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_SetFilterIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileCtrlEvent::SetFilterIndex(int index) function, expected prototype:\nvoid wxFileCtrlEvent::SetFilterIndex(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		wxFileCtrlEvent* self=dynamic_cast< wxFileCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileCtrlEvent::SetFilterIndex(int)");
		}
		self->SetFilterIndex(index);

		return 0;
	}


	// Operator binds:

};

wxFileCtrlEvent* LunaTraits< wxFileCtrlEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxFileCtrlEvent >::_bind_dtor(wxFileCtrlEvent* obj) {
	delete obj;
}

const char LunaTraits< wxFileCtrlEvent >::className[] = "wxFileCtrlEvent";
const char LunaTraits< wxFileCtrlEvent >::fullName[] = "wxFileCtrlEvent";
const char LunaTraits< wxFileCtrlEvent >::moduleName[] = "wx";
const char* LunaTraits< wxFileCtrlEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxFileCtrlEvent >::hash = 82610722;
const int LunaTraits< wxFileCtrlEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileCtrlEvent >::methods[] = {
	{"GetDirectory", &luna_wrapper_wxFileCtrlEvent::_bind_GetDirectory},
	{"GetFile", &luna_wrapper_wxFileCtrlEvent::_bind_GetFile},
	{"GetFiles", &luna_wrapper_wxFileCtrlEvent::_bind_GetFiles},
	{"GetFilterIndex", &luna_wrapper_wxFileCtrlEvent::_bind_GetFilterIndex},
	{"SetFiles", &luna_wrapper_wxFileCtrlEvent::_bind_SetFiles},
	{"SetDirectory", &luna_wrapper_wxFileCtrlEvent::_bind_SetDirectory},
	{"SetFilterIndex", &luna_wrapper_wxFileCtrlEvent::_bind_SetFilterIndex},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileCtrlEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileCtrlEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileCtrlEvent >::enumValues[] = {
	{0,0}
};


