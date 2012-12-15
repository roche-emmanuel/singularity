#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHyperlinkEvent.h>

class luna_wrapper_wxHyperlinkEvent {
public:
	typedef Luna< wxHyperlinkEvent > luna_t;

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
		//wxHyperlinkEvent* ptr= dynamic_cast< wxHyperlinkEvent* >(Luna< wxObject >::check(L,1));
		wxHyperlinkEvent* ptr= luna_caster< wxObject, wxHyperlinkEvent >::cast(Luna< wxObject >::check(L,1));
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

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


		wxHyperlinkEvent* self=Luna< wxObject >::checkSubType< wxHyperlinkEvent >(L,1);
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

		wxHyperlinkEvent* self=Luna< wxObject >::checkSubType< wxHyperlinkEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHyperlinkEvent::SetURL(const wxString &)");
		}
		self->SetURL(url);

		return 0;
	}

	// wxClassInfo * wxHyperlinkEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHyperlinkEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHyperlinkEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHyperlinkEvent* self=Luna< wxObject >::checkSubType< wxHyperlinkEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHyperlinkEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxHyperlinkEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxHyperlinkEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxHyperlinkEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxHyperlinkEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxHyperlinkEvent* self=Luna< wxObject >::checkSubType< wxHyperlinkEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxHyperlinkEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxHyperlinkEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxHyperlinkEvent* LunaTraits< wxHyperlinkEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
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
	{"base_GetClassInfo", &luna_wrapper_wxHyperlinkEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxHyperlinkEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxHyperlinkEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHyperlinkEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxHyperlinkEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHyperlinkEvent >::enumValues[] = {
	{0,0}
};


