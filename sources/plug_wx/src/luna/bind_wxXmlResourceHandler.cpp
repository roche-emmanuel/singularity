#include <plug_common.h>

#include <luna/wrappers/wrapper_wxXmlResourceHandler.h>

class luna_wrapper_wxXmlResourceHandler {
public:
	typedef Luna< wxXmlResourceHandler > luna_t;

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
		//wxXmlResourceHandler* ptr= dynamic_cast< wxXmlResourceHandler* >(Luna< wxObject >::check(L,1));
		wxXmlResourceHandler* ptr= luna_caster< wxObject, wxXmlResourceHandler >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxXmlResourceHandler >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_CreateResource(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoCreateResource(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanHandle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParentResource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxObject * wxXmlResourceHandler::CreateResource(wxXmlNode * node, wxObject * parent, wxObject * instance)
	static int _bind_CreateResource(lua_State *L) {
		if (!_lg_typecheck_CreateResource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxXmlResourceHandler::CreateResource(wxXmlNode * node, wxObject * parent, wxObject * instance) function, expected prototype:\nwxObject * wxXmlResourceHandler::CreateResource(wxXmlNode * node, wxObject * parent, wxObject * instance)\nClass arguments details:\narg 1 ID = 64848530\narg 2 ID = 56813631\narg 3 ID = 56813631\n");
		}

		wxXmlNode* node=(Luna< wxXmlNode >::check(L,2));
		wxObject* parent=(Luna< wxObject >::check(L,3));
		wxObject* instance=(Luna< wxObject >::check(L,4));

		wxXmlResourceHandler* self=Luna< wxObject >::checkSubType< wxXmlResourceHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxObject * wxXmlResourceHandler::CreateResource(wxXmlNode *, wxObject *, wxObject *)");
		}
		wxObject * lret = self->CreateResource(node, parent, instance);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// wxObject * wxXmlResourceHandler::DoCreateResource()
	static int _bind_DoCreateResource(lua_State *L) {
		if (!_lg_typecheck_DoCreateResource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxXmlResourceHandler::DoCreateResource() function, expected prototype:\nwxObject * wxXmlResourceHandler::DoCreateResource()\nClass arguments details:\n");
		}


		wxXmlResourceHandler* self=Luna< wxObject >::checkSubType< wxXmlResourceHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxObject * wxXmlResourceHandler::DoCreateResource()");
		}
		wxObject * lret = self->DoCreateResource();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxXmlResourceHandler::CanHandle(wxXmlNode * node)
	static int _bind_CanHandle(lua_State *L) {
		if (!_lg_typecheck_CanHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxXmlResourceHandler::CanHandle(wxXmlNode * node) function, expected prototype:\nbool wxXmlResourceHandler::CanHandle(wxXmlNode * node)\nClass arguments details:\narg 1 ID = 64848530\n");
		}

		wxXmlNode* node=(Luna< wxXmlNode >::check(L,2));

		wxXmlResourceHandler* self=Luna< wxObject >::checkSubType< wxXmlResourceHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxXmlResourceHandler::CanHandle(wxXmlNode *)");
		}
		bool lret = self->CanHandle(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxXmlResourceHandler::SetParentResource(wxXmlResource * res)
	static int _bind_SetParentResource(lua_State *L) {
		if (!_lg_typecheck_SetParentResource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlResourceHandler::SetParentResource(wxXmlResource * res) function, expected prototype:\nvoid wxXmlResourceHandler::SetParentResource(wxXmlResource * res)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxXmlResource* res=(Luna< wxObject >::checkSubType< wxXmlResource >(L,2));

		wxXmlResourceHandler* self=Luna< wxObject >::checkSubType< wxXmlResourceHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlResourceHandler::SetParentResource(wxXmlResource *)");
		}
		self->SetParentResource(res);

		return 0;
	}

	// wxClassInfo * wxXmlResourceHandler::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxXmlResourceHandler::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxXmlResourceHandler::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxXmlResourceHandler* self=Luna< wxObject >::checkSubType< wxXmlResourceHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxXmlResourceHandler::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxXmlResourceHandler::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxXmlResourceHandler* LunaTraits< wxXmlResourceHandler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxObject * wxXmlResourceHandler::DoCreateResource()
	// bool wxXmlResourceHandler::CanHandle(wxXmlNode * node)
}

void LunaTraits< wxXmlResourceHandler >::_bind_dtor(wxXmlResourceHandler* obj) {
	delete obj;
}

const char LunaTraits< wxXmlResourceHandler >::className[] = "wxXmlResourceHandler";
const char LunaTraits< wxXmlResourceHandler >::fullName[] = "wxXmlResourceHandler";
const char LunaTraits< wxXmlResourceHandler >::moduleName[] = "wx";
const char* LunaTraits< wxXmlResourceHandler >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxXmlResourceHandler >::hash = 79518403;
const int LunaTraits< wxXmlResourceHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxXmlResourceHandler >::methods[] = {
	{"CreateResource", &luna_wrapper_wxXmlResourceHandler::_bind_CreateResource},
	{"DoCreateResource", &luna_wrapper_wxXmlResourceHandler::_bind_DoCreateResource},
	{"CanHandle", &luna_wrapper_wxXmlResourceHandler::_bind_CanHandle},
	{"SetParentResource", &luna_wrapper_wxXmlResourceHandler::_bind_SetParentResource},
	{"base_GetClassInfo", &luna_wrapper_wxXmlResourceHandler::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxXmlResourceHandler::_bind___eq},
	{"getTable", &luna_wrapper_wxXmlResourceHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxXmlResourceHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxXmlResourceHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxXmlResourceHandler >::enumValues[] = {
	{0,0}
};


