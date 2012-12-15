#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlCellEvent.h>

class luna_wrapper_wxHtmlCellEvent {
public:
	typedef Luna< wxHtmlCellEvent > luna_t;

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
		//wxHtmlCellEvent* ptr= dynamic_cast< wxHtmlCellEvent* >(Luna< wxObject >::check(L,1));
		wxHtmlCellEvent* ptr= luna_caster< wxObject, wxHtmlCellEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlCellEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetCell(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLinkClicked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLinkClicked(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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
	// wxHtmlCell * wxHtmlCellEvent::GetCell() const
	static int _bind_GetCell(lua_State *L) {
		if (!_lg_typecheck_GetCell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlCell * wxHtmlCellEvent::GetCell() const function, expected prototype:\nwxHtmlCell * wxHtmlCellEvent::GetCell() const\nClass arguments details:\n");
		}


		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlCell * wxHtmlCellEvent::GetCell() const");
		}
		wxHtmlCell * lret = self->GetCell();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// bool wxHtmlCellEvent::GetLinkClicked() const
	static int _bind_GetLinkClicked(lua_State *L) {
		if (!_lg_typecheck_GetLinkClicked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlCellEvent::GetLinkClicked() const function, expected prototype:\nbool wxHtmlCellEvent::GetLinkClicked() const\nClass arguments details:\n");
		}


		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlCellEvent::GetLinkClicked() const");
		}
		bool lret = self->GetLinkClicked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxHtmlCellEvent::GetPoint() const
	static int _bind_GetPoint(lua_State *L) {
		if (!_lg_typecheck_GetPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxHtmlCellEvent::GetPoint() const function, expected prototype:\nwxPoint wxHtmlCellEvent::GetPoint() const\nClass arguments details:\n");
		}


		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxHtmlCellEvent::GetPoint() const");
		}
		wxPoint stack_lret = self->GetPoint();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxHtmlCellEvent::SetLinkClicked(bool linkclicked)
	static int _bind_SetLinkClicked(lua_State *L) {
		if (!_lg_typecheck_SetLinkClicked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlCellEvent::SetLinkClicked(bool linkclicked) function, expected prototype:\nvoid wxHtmlCellEvent::SetLinkClicked(bool linkclicked)\nClass arguments details:\n");
		}

		bool linkclicked=(bool)(lua_toboolean(L,2)==1);

		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlCellEvent::SetLinkClicked(bool)");
		}
		self->SetLinkClicked(linkclicked);

		return 0;
	}

	// wxClassInfo * wxHtmlCellEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlCellEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlCellEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlCellEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxHtmlCellEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxHtmlCellEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxHtmlCellEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxHtmlCellEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxHtmlCellEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxHtmlCellEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxHtmlCellEvent* LunaTraits< wxHtmlCellEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxHtmlCellEvent >::_bind_dtor(wxHtmlCellEvent* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlCellEvent >::className[] = "wxHtmlCellEvent";
const char LunaTraits< wxHtmlCellEvent >::fullName[] = "wxHtmlCellEvent";
const char LunaTraits< wxHtmlCellEvent >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlCellEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxHtmlCellEvent >::hash = 96689520;
const int LunaTraits< wxHtmlCellEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlCellEvent >::methods[] = {
	{"GetCell", &luna_wrapper_wxHtmlCellEvent::_bind_GetCell},
	{"GetLinkClicked", &luna_wrapper_wxHtmlCellEvent::_bind_GetLinkClicked},
	{"GetPoint", &luna_wrapper_wxHtmlCellEvent::_bind_GetPoint},
	{"SetLinkClicked", &luna_wrapper_wxHtmlCellEvent::_bind_SetLinkClicked},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlCellEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxHtmlCellEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxHtmlCellEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlCellEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlCellEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlCellEvent >::enumValues[] = {
	{0,0}
};


