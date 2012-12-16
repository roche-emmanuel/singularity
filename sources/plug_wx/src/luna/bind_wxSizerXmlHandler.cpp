#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSizerXmlHandler.h>

class luna_wrapper_wxSizerXmlHandler {
public:
	typedef Luna< wxSizerXmlHandler > luna_t;

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
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
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
		//wxSizerXmlHandler* ptr= dynamic_cast< wxSizerXmlHandler* >(Luna< wxObject >::check(L,1));
		wxSizerXmlHandler* ptr= luna_caster< wxObject, wxSizerXmlHandler >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSizerXmlHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DoCreateResource(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanHandle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSizerXmlHandler::wxSizerXmlHandler()
	static wxSizerXmlHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerXmlHandler::wxSizerXmlHandler() function, expected prototype:\nwxSizerXmlHandler::wxSizerXmlHandler()\nClass arguments details:\n");
		}


		return new wxSizerXmlHandler();
	}

	// wxSizerXmlHandler::wxSizerXmlHandler(lua_Table * data)
	static wxSizerXmlHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerXmlHandler::wxSizerXmlHandler(lua_Table * data) function, expected prototype:\nwxSizerXmlHandler::wxSizerXmlHandler(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxSizerXmlHandler(L,NULL);
	}

	// Overload binder for wxSizerXmlHandler::wxSizerXmlHandler
	static wxSizerXmlHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSizerXmlHandler, cannot match any of the overloads for function wxSizerXmlHandler:\n  wxSizerXmlHandler()\n  wxSizerXmlHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// wxObject * wxSizerXmlHandler::DoCreateResource()
	static int _bind_DoCreateResource(lua_State *L) {
		if (!_lg_typecheck_DoCreateResource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxSizerXmlHandler::DoCreateResource() function, expected prototype:\nwxObject * wxSizerXmlHandler::DoCreateResource()\nClass arguments details:\n");
		}


		wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wxSizerXmlHandler >(L,1);
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

		wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wxSizerXmlHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizerXmlHandler::CanHandle(wxXmlNode *)");
		}
		bool lret = self->CanHandle(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxSizerXmlHandler::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSizerXmlHandler::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSizerXmlHandler::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wxSizerXmlHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSizerXmlHandler::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxSizerXmlHandler::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxObject * wxSizerXmlHandler::base_DoCreateResource()
	static int _bind_base_DoCreateResource(lua_State *L) {
		if (!_lg_typecheck_base_DoCreateResource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxSizerXmlHandler::base_DoCreateResource() function, expected prototype:\nwxObject * wxSizerXmlHandler::base_DoCreateResource()\nClass arguments details:\n");
		}


		wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wxSizerXmlHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxObject * wxSizerXmlHandler::base_DoCreateResource()");
		}
		wxObject * lret = self->wxSizerXmlHandler::DoCreateResource();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxSizerXmlHandler::base_CanHandle(wxXmlNode * node)
	static int _bind_base_CanHandle(lua_State *L) {
		if (!_lg_typecheck_base_CanHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizerXmlHandler::base_CanHandle(wxXmlNode * node) function, expected prototype:\nbool wxSizerXmlHandler::base_CanHandle(wxXmlNode * node)\nClass arguments details:\narg 1 ID = 64848530\n");
		}

		wxXmlNode* node=(Luna< wxXmlNode >::check(L,2));

		wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wxSizerXmlHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizerXmlHandler::base_CanHandle(wxXmlNode *)");
		}
		bool lret = self->wxSizerXmlHandler::CanHandle(node);
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
	{"base_GetClassInfo", &luna_wrapper_wxSizerXmlHandler::_bind_base_GetClassInfo},
	{"base_DoCreateResource", &luna_wrapper_wxSizerXmlHandler::_bind_base_DoCreateResource},
	{"base_CanHandle", &luna_wrapper_wxSizerXmlHandler::_bind_base_CanHandle},
	{"__eq", &luna_wrapper_wxSizerXmlHandler::_bind___eq},
	{"getTable", &luna_wrapper_wxSizerXmlHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSizerXmlHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxSizerXmlHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSizerXmlHandler >::enumValues[] = {
	{0,0}
};


