#include <plug_common.h>

class luna_wrapper_wxFileDirPickerEvent {
public:
	typedef Luna< wxFileDirPickerEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileDirPickerEvent* ptr= dynamic_cast< wxFileDirPickerEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileDirPickerEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxString wxFileDirPickerEvent::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileDirPickerEvent::GetPath() const function, expected prototype:\nwxString wxFileDirPickerEvent::GetPath() const\nClass arguments details:\n");
		}


		wxFileDirPickerEvent* self=dynamic_cast< wxFileDirPickerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileDirPickerEvent::GetPath() const");
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDirPickerEvent::SetPath(const wxString & path)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileDirPickerEvent::SetPath(const wxString & path) function, expected prototype:\nvoid wxFileDirPickerEvent::SetPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDirPickerEvent* self=dynamic_cast< wxFileDirPickerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileDirPickerEvent::SetPath(const wxString &)");
		}
		self->SetPath(path);

		return 0;
	}


	// Operator binds:

};

wxFileDirPickerEvent* LunaTraits< wxFileDirPickerEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxFileDirPickerEvent >::_bind_dtor(wxFileDirPickerEvent* obj) {
	delete obj;
}

const char LunaTraits< wxFileDirPickerEvent >::className[] = "wxFileDirPickerEvent";
const char LunaTraits< wxFileDirPickerEvent >::fullName[] = "wxFileDirPickerEvent";
const char LunaTraits< wxFileDirPickerEvent >::moduleName[] = "wx";
const char* LunaTraits< wxFileDirPickerEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxFileDirPickerEvent >::hash = 27421734;
const int LunaTraits< wxFileDirPickerEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileDirPickerEvent >::methods[] = {
	{"GetPath", &luna_wrapper_wxFileDirPickerEvent::_bind_GetPath},
	{"SetPath", &luna_wrapper_wxFileDirPickerEvent::_bind_SetPath},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileDirPickerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileDirPickerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileDirPickerEvent >::enumValues[] = {
	{0,0}
};


