#include <plug_common.h>

class luna_wrapper_wxSizerXmlHandler {
public:
	typedef Luna< wxSizerXmlHandler > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSizerXmlHandler* ptr= dynamic_cast< wxSizerXmlHandler* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSizerXmlHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_DoCreateResource(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanHandle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSizerXmlHandler::wxSizerXmlHandler()
	static wxSizerXmlHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerXmlHandler::wxSizerXmlHandler() function, expected prototype:\nwxSizerXmlHandler::wxSizerXmlHandler()\nClass arguments details:\n");
		}


		return new wxSizerXmlHandler();
	}


	// Function binds:
	// wxObject * wxSizerXmlHandler::DoCreateResource()
	static int _bind_DoCreateResource(lua_State *L) {
		if (!_lg_typecheck_DoCreateResource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxSizerXmlHandler::DoCreateResource() function, expected prototype:\nwxObject * wxSizerXmlHandler::DoCreateResource()\nClass arguments details:\n");
		}


		wxSizerXmlHandler* self=dynamic_cast< wxSizerXmlHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxObject * wxSizerXmlHandler::DoCreateResource()");
		}
		wxObject * lret = self->DoCreateResource();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxSizerXmlHandler::CanHandle(wxXmlNode * node)
	static int _bind_CanHandle(lua_State *L) {
		if (!_lg_typecheck_CanHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizerXmlHandler::CanHandle(wxXmlNode * node) function, expected prototype:\nbool wxSizerXmlHandler::CanHandle(wxXmlNode * node)\nClass arguments details:\narg 1 ID = 64848530\n");
		}

		wxXmlNode* node=(Luna< wxXmlNode >::check(L,2));

		wxSizerXmlHandler* self=dynamic_cast< wxSizerXmlHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizerXmlHandler::CanHandle(wxXmlNode *)");
		}
		bool lret = self->CanHandle(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxSizerXmlHandler* LunaTraits< wxSizerXmlHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSizerXmlHandler::_bind_ctor(L);
}

void LunaTraits< wxSizerXmlHandler >::_bind_dtor(wxSizerXmlHandler* obj) {
	delete obj;
}

const char LunaTraits< wxSizerXmlHandler >::className[] = "wxSizerXmlHandler";
const char LunaTraits< wxSizerXmlHandler >::fullName[] = "wxSizerXmlHandler";
const char LunaTraits< wxSizerXmlHandler >::moduleName[] = "wx";
const char* LunaTraits< wxSizerXmlHandler >::parents[] = {"wx.wxXmlResourceHandler", 0};
const int LunaTraits< wxSizerXmlHandler >::hash = 19775324;
const int LunaTraits< wxSizerXmlHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSizerXmlHandler >::methods[] = {
	{"DoCreateResource", &luna_wrapper_wxSizerXmlHandler::_bind_DoCreateResource},
	{"CanHandle", &luna_wrapper_wxSizerXmlHandler::_bind_CanHandle},
	{0,0}
};

luna_ConverterType LunaTraits< wxSizerXmlHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxSizerXmlHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSizerXmlHandler >::enumValues[] = {
	{0,0}
};


