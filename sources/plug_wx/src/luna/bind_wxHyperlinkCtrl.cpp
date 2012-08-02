#include <plug_common.h>

class luna_wrapper_wxHyperlinkCtrl {
public:
	typedef Luna< wxHyperlinkCtrl > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHyperlinkCtrl* ptr= dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHyperlinkCtrl >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetHoverColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNormalColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisited(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisitedColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetHoverColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNormalColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetURL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVisited(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVisitedColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxColour wxHyperlinkCtrl::GetHoverColour() const
	static int _bind_GetHoverColour(lua_State *L) {
		if (!_lg_typecheck_GetHoverColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxHyperlinkCtrl::GetHoverColour() const function, expected prototype:\nwxColour wxHyperlinkCtrl::GetHoverColour() const\nClass arguments details:\n");
		}


		wxHyperlinkCtrl* self=dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxHyperlinkCtrl::GetHoverColour() const");
		}
		wxColour stack_lret = self->GetHoverColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxHyperlinkCtrl::GetNormalColour() const
	static int _bind_GetNormalColour(lua_State *L) {
		if (!_lg_typecheck_GetNormalColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxHyperlinkCtrl::GetNormalColour() const function, expected prototype:\nwxColour wxHyperlinkCtrl::GetNormalColour() const\nClass arguments details:\n");
		}


		wxHyperlinkCtrl* self=dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxHyperlinkCtrl::GetNormalColour() const");
		}
		wxColour stack_lret = self->GetNormalColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxString wxHyperlinkCtrl::GetURL() const
	static int _bind_GetURL(lua_State *L) {
		if (!_lg_typecheck_GetURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHyperlinkCtrl::GetURL() const function, expected prototype:\nwxString wxHyperlinkCtrl::GetURL() const\nClass arguments details:\n");
		}


		wxHyperlinkCtrl* self=dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHyperlinkCtrl::GetURL() const");
		}
		wxString lret = self->GetURL();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxHyperlinkCtrl::GetVisited() const
	static int _bind_GetVisited(lua_State *L) {
		if (!_lg_typecheck_GetVisited(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::GetVisited() const function, expected prototype:\nbool wxHyperlinkCtrl::GetVisited() const\nClass arguments details:\n");
		}


		wxHyperlinkCtrl* self=dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::GetVisited() const");
		}
		bool lret = self->GetVisited();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour wxHyperlinkCtrl::GetVisitedColour() const
	static int _bind_GetVisitedColour(lua_State *L) {
		if (!_lg_typecheck_GetVisitedColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxHyperlinkCtrl::GetVisitedColour() const function, expected prototype:\nwxColour wxHyperlinkCtrl::GetVisitedColour() const\nClass arguments details:\n");
		}


		wxHyperlinkCtrl* self=dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxHyperlinkCtrl::GetVisitedColour() const");
		}
		wxColour stack_lret = self->GetVisitedColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxHyperlinkCtrl::SetHoverColour(const wxColour & colour)
	static int _bind_SetHoverColour(lua_State *L) {
		if (!_lg_typecheck_SetHoverColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::SetHoverColour(const wxColour & colour) function, expected prototype:\nvoid wxHyperlinkCtrl::SetHoverColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxHyperlinkCtrl::SetHoverColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxHyperlinkCtrl* self=dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::SetHoverColour(const wxColour &)");
		}
		self->SetHoverColour(colour);

		return 0;
	}

	// void wxHyperlinkCtrl::SetNormalColour(const wxColour & colour)
	static int _bind_SetNormalColour(lua_State *L) {
		if (!_lg_typecheck_SetNormalColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::SetNormalColour(const wxColour & colour) function, expected prototype:\nvoid wxHyperlinkCtrl::SetNormalColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxHyperlinkCtrl::SetNormalColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxHyperlinkCtrl* self=dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::SetNormalColour(const wxColour &)");
		}
		self->SetNormalColour(colour);

		return 0;
	}

	// void wxHyperlinkCtrl::SetURL(const wxString & url)
	static int _bind_SetURL(lua_State *L) {
		if (!_lg_typecheck_SetURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::SetURL(const wxString & url) function, expected prototype:\nvoid wxHyperlinkCtrl::SetURL(const wxString & url)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString url(lua_tostring(L,2),lua_objlen(L,2));

		wxHyperlinkCtrl* self=dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::SetURL(const wxString &)");
		}
		self->SetURL(url);

		return 0;
	}

	// void wxHyperlinkCtrl::SetVisited(bool visited = true)
	static int _bind_SetVisited(lua_State *L) {
		if (!_lg_typecheck_SetVisited(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::SetVisited(bool visited = true) function, expected prototype:\nvoid wxHyperlinkCtrl::SetVisited(bool visited = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool visited=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxHyperlinkCtrl* self=dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::SetVisited(bool)");
		}
		self->SetVisited(visited);

		return 0;
	}

	// void wxHyperlinkCtrl::SetVisitedColour(const wxColour & colour)
	static int _bind_SetVisitedColour(lua_State *L) {
		if (!_lg_typecheck_SetVisitedColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::SetVisitedColour(const wxColour & colour) function, expected prototype:\nvoid wxHyperlinkCtrl::SetVisitedColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxHyperlinkCtrl::SetVisitedColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxHyperlinkCtrl* self=dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::SetVisitedColour(const wxColour &)");
		}
		self->SetVisitedColour(colour);

		return 0;
	}


	// Operator binds:

};

wxHyperlinkCtrl* LunaTraits< wxHyperlinkCtrl >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxHyperlinkCtrl::GetVisited() const
	// void wxHyperlinkCtrl::SetVisited(bool visited = true)

	// Abstract operators:
}

void LunaTraits< wxHyperlinkCtrl >::_bind_dtor(wxHyperlinkCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxHyperlinkCtrl >::className[] = "wxHyperlinkCtrl";
const char LunaTraits< wxHyperlinkCtrl >::fullName[] = "wxHyperlinkCtrl";
const char LunaTraits< wxHyperlinkCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxHyperlinkCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxHyperlinkCtrl >::hash = 14343672;
const int LunaTraits< wxHyperlinkCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxHyperlinkCtrl >::methods[] = {
	{"GetHoverColour", &luna_wrapper_wxHyperlinkCtrl::_bind_GetHoverColour},
	{"GetNormalColour", &luna_wrapper_wxHyperlinkCtrl::_bind_GetNormalColour},
	{"GetURL", &luna_wrapper_wxHyperlinkCtrl::_bind_GetURL},
	{"GetVisited", &luna_wrapper_wxHyperlinkCtrl::_bind_GetVisited},
	{"GetVisitedColour", &luna_wrapper_wxHyperlinkCtrl::_bind_GetVisitedColour},
	{"SetHoverColour", &luna_wrapper_wxHyperlinkCtrl::_bind_SetHoverColour},
	{"SetNormalColour", &luna_wrapper_wxHyperlinkCtrl::_bind_SetNormalColour},
	{"SetURL", &luna_wrapper_wxHyperlinkCtrl::_bind_SetURL},
	{"SetVisited", &luna_wrapper_wxHyperlinkCtrl::_bind_SetVisited},
	{"SetVisitedColour", &luna_wrapper_wxHyperlinkCtrl::_bind_SetVisitedColour},
	{0,0}
};

luna_ConverterType LunaTraits< wxHyperlinkCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxHyperlinkCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHyperlinkCtrl >::enumValues[] = {
	{0,0}
};


