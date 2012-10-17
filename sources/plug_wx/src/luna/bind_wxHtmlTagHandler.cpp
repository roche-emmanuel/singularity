#include <plug_common.h>

class luna_wrapper_wxHtmlTagHandler {
public:
	typedef Luna< wxHtmlTagHandler > luna_t;

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
		wxHtmlTagHandler* ptr= dynamic_cast< wxHtmlTagHandler* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlTagHandler >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetSupportedTags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HandleTag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66986009) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,65918681)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxString wxHtmlTagHandler::GetSupportedTags()
	static int _bind_GetSupportedTags(lua_State *L) {
		if (!_lg_typecheck_GetSupportedTags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlTagHandler::GetSupportedTags() function, expected prototype:\nwxString wxHtmlTagHandler::GetSupportedTags()\nClass arguments details:\n");
		}


		wxHtmlTagHandler* self=dynamic_cast< wxHtmlTagHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlTagHandler::GetSupportedTags()");
		}
		wxString lret = self->GetSupportedTags();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag)
	static int _bind_HandleTag(lua_State *L) {
		if (!_lg_typecheck_HandleTag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag) function, expected prototype:\nbool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag)\nClass arguments details:\narg 1 ID = 66986009\n");
		}

		const wxHtmlTag* tag_ptr=(Luna< wxHtmlTag >::check(L,2));
		if( !tag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tag in wxHtmlTagHandler::HandleTag function");
		}
		const wxHtmlTag & tag=*tag_ptr;

		wxHtmlTagHandler* self=dynamic_cast< wxHtmlTagHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlTagHandler::HandleTag(const wxHtmlTag &)");
		}
		bool lret = self->HandleTag(tag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlTagHandler::SetParser(wxHtmlParser * parser)
	static int _bind_SetParser(lua_State *L) {
		if (!_lg_typecheck_SetParser(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlTagHandler::SetParser(wxHtmlParser * parser) function, expected prototype:\nvoid wxHtmlTagHandler::SetParser(wxHtmlParser * parser)\nClass arguments details:\narg 1 ID = 65918681\n");
		}

		wxHtmlParser* parser=(Luna< wxHtmlParser >::check(L,2));

		wxHtmlTagHandler* self=dynamic_cast< wxHtmlTagHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlTagHandler::SetParser(wxHtmlParser *)");
		}
		self->SetParser(parser);

		return 0;
	}


	// Operator binds:

};

wxHtmlTagHandler* LunaTraits< wxHtmlTagHandler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxString wxHtmlTagHandler::GetSupportedTags()
	// bool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag)

	// Abstract operators:
}

void LunaTraits< wxHtmlTagHandler >::_bind_dtor(wxHtmlTagHandler* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlTagHandler >::className[] = "wxHtmlTagHandler";
const char LunaTraits< wxHtmlTagHandler >::fullName[] = "wxHtmlTagHandler";
const char LunaTraits< wxHtmlTagHandler >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlTagHandler >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxHtmlTagHandler >::hash = 37580747;
const int LunaTraits< wxHtmlTagHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlTagHandler >::methods[] = {
	{"GetSupportedTags", &luna_wrapper_wxHtmlTagHandler::_bind_GetSupportedTags},
	{"HandleTag", &luna_wrapper_wxHtmlTagHandler::_bind_HandleTag},
	{"SetParser", &luna_wrapper_wxHtmlTagHandler::_bind_SetParser},
	{"__eq", &luna_wrapper_wxHtmlTagHandler::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlTagHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlTagHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlTagHandler >::enumValues[] = {
	{0,0}
};


