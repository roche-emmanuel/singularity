#include <plug_common.h>

class luna_wrapper_wxHyperlinkEvent {
public:
	typedef Luna< wxHyperlinkEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHyperlinkEvent* ptr= dynamic_cast< wxHyperlinkEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHyperlinkEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetURL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxString wxHyperlinkEvent::GetURL() const
	static int _bind_GetURL(lua_State *L) {
		if (!_lg_typecheck_GetURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHyperlinkEvent::GetURL() const function, expected prototype:\nwxString wxHyperlinkEvent::GetURL() const\nClass arguments details:\n");
		}


		wxHyperlinkEvent* self=dynamic_cast< wxHyperlinkEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHyperlinkEvent::GetURL() const");
		}
		wxString lret = self->GetURL();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHyperlinkEvent::SetURL(const wxString & url)
	static int _bind_SetURL(lua_State *L) {
		if (!_lg_typecheck_SetURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHyperlinkEvent::SetURL(const wxString & url) function, expected prototype:\nvoid wxHyperlinkEvent::SetURL(const wxString & url)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString url(lua_tostring(L,2),lua_objlen(L,2));

		wxHyperlinkEvent* self=dynamic_cast< wxHyperlinkEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHyperlinkEvent::SetURL(const wxString &)");
		}
		self->SetURL(url);

		return 0;
	}


	// Operator binds:

};

wxHyperlinkEvent* LunaTraits< wxHyperlinkEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxHyperlinkEvent >::_bind_dtor(wxHyperlinkEvent* obj) {
	delete obj;
}

const char LunaTraits< wxHyperlinkEvent >::className[] = "wxHyperlinkEvent";
const char LunaTraits< wxHyperlinkEvent >::fullName[] = "wxHyperlinkEvent";
const char LunaTraits< wxHyperlinkEvent >::moduleName[] = "wx";
const char* LunaTraits< wxHyperlinkEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxHyperlinkEvent >::hash = 46548077;
const int LunaTraits< wxHyperlinkEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHyperlinkEvent >::methods[] = {
	{"GetURL", &luna_wrapper_wxHyperlinkEvent::_bind_GetURL},
	{"SetURL", &luna_wrapper_wxHyperlinkEvent::_bind_SetURL},
	{0,0}
};

luna_ConverterType LunaTraits< wxHyperlinkEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxHyperlinkEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHyperlinkEvent >::enumValues[] = {
	{0,0}
};

