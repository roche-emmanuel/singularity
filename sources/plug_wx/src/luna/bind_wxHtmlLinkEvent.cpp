#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlLinkEvent.h>

class luna_wrapper_wxHtmlLinkEvent {
public:
	typedef Luna< wxHtmlLinkEvent > luna_t;

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
		wxHtmlLinkEvent* ptr= dynamic_cast< wxHtmlLinkEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlLinkEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetLinkInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const wxHtmlLinkInfo & wxHtmlLinkEvent::GetLinkInfo() const
	static int _bind_GetLinkInfo(lua_State *L) {
		if (!_lg_typecheck_GetLinkInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxHtmlLinkInfo & wxHtmlLinkEvent::GetLinkInfo() const function, expected prototype:\nconst wxHtmlLinkInfo & wxHtmlLinkEvent::GetLinkInfo() const\nClass arguments details:\n");
		}


		wxHtmlLinkEvent* self=dynamic_cast< wxHtmlLinkEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxHtmlLinkInfo & wxHtmlLinkEvent::GetLinkInfo() const");
		}
		const wxHtmlLinkInfo* lret = &self->GetLinkInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlLinkInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHtmlLinkEvent* LunaTraits< wxHtmlLinkEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxHtmlLinkEvent >::_bind_dtor(wxHtmlLinkEvent* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlLinkEvent >::className[] = "wxHtmlLinkEvent";
const char LunaTraits< wxHtmlLinkEvent >::fullName[] = "wxHtmlLinkEvent";
const char LunaTraits< wxHtmlLinkEvent >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlLinkEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxHtmlLinkEvent >::hash = 11938045;
const int LunaTraits< wxHtmlLinkEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlLinkEvent >::methods[] = {
	{"GetLinkInfo", &luna_wrapper_wxHtmlLinkEvent::_bind_GetLinkInfo},
	{"__eq", &luna_wrapper_wxHtmlLinkEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlLinkEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlLinkEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlLinkEvent >::enumValues[] = {
	{0,0}
};


