#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlWinTagHandler.h>

class luna_wrapper_wxHtmlWinTagHandler {
public:
	typedef Luna< wxHtmlWinTagHandler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxHtmlWinTagHandler* ptr= dynamic_cast< wxHtmlWinTagHandler* >(Luna< wxObject >::check(L,1));
		wxHtmlWinTagHandler* ptr= luna_caster< wxObject, wxHtmlWinTagHandler >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlWinTagHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetParser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,65918681)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxClassInfo * wxHtmlWinTagHandler::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlWinTagHandler::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlWinTagHandler::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHtmlWinTagHandler* self=Luna< wxObject >::checkSubType< wxHtmlWinTagHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlWinTagHandler::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxHtmlWinTagHandler::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlWinTagHandler::base_SetParser(wxHtmlParser * parser)
	static int _bind_base_SetParser(lua_State *L) {
		if (!_lg_typecheck_base_SetParser(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWinTagHandler::base_SetParser(wxHtmlParser * parser) function, expected prototype:\nvoid wxHtmlWinTagHandler::base_SetParser(wxHtmlParser * parser)\nClass arguments details:\narg 1 ID = 65918681\n");
		}

		wxHtmlParser* parser=(Luna< wxHtmlParser >::check(L,2));

		wxHtmlWinTagHandler* self=Luna< wxObject >::checkSubType< wxHtmlWinTagHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWinTagHandler::base_SetParser(wxHtmlParser *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxHtmlWinTagHandler::SetParser(parser);

		return 0;
	}


	// Operator binds:

};

wxHtmlWinTagHandler* LunaTraits< wxHtmlWinTagHandler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxString wxHtmlTagHandler::GetSupportedTags()
	// bool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag)
}

void LunaTraits< wxHtmlWinTagHandler >::_bind_dtor(wxHtmlWinTagHandler* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlWinTagHandler >::className[] = "wxHtmlWinTagHandler";
const char LunaTraits< wxHtmlWinTagHandler >::fullName[] = "wxHtmlWinTagHandler";
const char LunaTraits< wxHtmlWinTagHandler >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlWinTagHandler >::parents[] = {"wx.wxHtmlTagHandler", 0};
const int LunaTraits< wxHtmlWinTagHandler >::hash = 46577631;
const int LunaTraits< wxHtmlWinTagHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlWinTagHandler >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxHtmlWinTagHandler::_bind_base_GetClassInfo},
	{"base_SetParser", &luna_wrapper_wxHtmlWinTagHandler::_bind_base_SetParser},
	{"__eq", &luna_wrapper_wxHtmlWinTagHandler::_bind___eq},
	{"getTable", &luna_wrapper_wxHtmlWinTagHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlWinTagHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlWinTagHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlWinTagHandler >::enumValues[] = {
	{0,0}
};


