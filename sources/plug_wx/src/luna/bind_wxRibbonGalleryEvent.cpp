#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRibbonGalleryEvent.h>

class luna_wrapper_wxRibbonGalleryEvent {
public:
	typedef Luna< wxRibbonGalleryEvent > luna_t;

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
		//wxRibbonGalleryEvent* ptr= dynamic_cast< wxRibbonGalleryEvent* >(Luna< wxObject >::check(L,1));
		wxRibbonGalleryEvent* ptr= luna_caster< wxObject, wxRibbonGalleryEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonGalleryEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetGallery(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGalleryItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGallery(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetGalleryItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
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
	// wxRibbonGallery * wxRibbonGalleryEvent::GetGallery()
	static int _bind_GetGallery(lua_State *L) {
		if (!_lg_typecheck_GetGallery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGallery * wxRibbonGalleryEvent::GetGallery() function, expected prototype:\nwxRibbonGallery * wxRibbonGalleryEvent::GetGallery()\nClass arguments details:\n");
		}


		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGallery * wxRibbonGalleryEvent::GetGallery()");
		}
		wxRibbonGallery * lret = self->GetGallery();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGallery >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGalleryEvent::GetGalleryItem()
	static int _bind_GetGalleryItem(lua_State *L) {
		if (!_lg_typecheck_GetGalleryItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGalleryEvent::GetGalleryItem() function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGalleryEvent::GetGalleryItem()\nClass arguments details:\n");
		}


		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGalleryEvent::GetGalleryItem()");
		}
		wxRibbonGalleryItem * lret = self->GetGalleryItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonGalleryEvent::SetGallery(wxRibbonGallery * gallery)
	static int _bind_SetGallery(lua_State *L) {
		if (!_lg_typecheck_SetGallery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonGalleryEvent::SetGallery(wxRibbonGallery * gallery) function, expected prototype:\nvoid wxRibbonGalleryEvent::SetGallery(wxRibbonGallery * gallery)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxRibbonGallery* gallery=(Luna< wxObject >::checkSubType< wxRibbonGallery >(L,2));

		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonGalleryEvent::SetGallery(wxRibbonGallery *)");
		}
		self->SetGallery(gallery);

		return 0;
	}

	// void wxRibbonGalleryEvent::SetGalleryItem(wxRibbonGalleryItem * item)
	static int _bind_SetGalleryItem(lua_State *L) {
		if (!_lg_typecheck_SetGalleryItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonGalleryEvent::SetGalleryItem(wxRibbonGalleryItem * item) function, expected prototype:\nvoid wxRibbonGalleryEvent::SetGalleryItem(wxRibbonGalleryItem * item)\nClass arguments details:\narg 1 ID = 56057674\n");
		}

		wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));

		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonGalleryEvent::SetGalleryItem(wxRibbonGalleryItem *)");
		}
		self->SetGalleryItem(item);

		return 0;
	}

	// wxClassInfo * wxRibbonGalleryEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxRibbonGalleryEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxRibbonGalleryEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxRibbonGalleryEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxRibbonGalleryEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxRibbonGalleryEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxRibbonGalleryEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxRibbonGalleryEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxRibbonGalleryEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxRibbonGalleryEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRibbonGalleryEvent* LunaTraits< wxRibbonGalleryEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxRibbonGalleryEvent >::_bind_dtor(wxRibbonGalleryEvent* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonGalleryEvent >::className[] = "wxRibbonGalleryEvent";
const char LunaTraits< wxRibbonGalleryEvent >::fullName[] = "wxRibbonGalleryEvent";
const char LunaTraits< wxRibbonGalleryEvent >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonGalleryEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxRibbonGalleryEvent >::hash = 34153199;
const int LunaTraits< wxRibbonGalleryEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRibbonGalleryEvent >::methods[] = {
	{"GetGallery", &luna_wrapper_wxRibbonGalleryEvent::_bind_GetGallery},
	{"GetGalleryItem", &luna_wrapper_wxRibbonGalleryEvent::_bind_GetGalleryItem},
	{"SetGallery", &luna_wrapper_wxRibbonGalleryEvent::_bind_SetGallery},
	{"SetGalleryItem", &luna_wrapper_wxRibbonGalleryEvent::_bind_SetGalleryItem},
	{"base_GetClassInfo", &luna_wrapper_wxRibbonGalleryEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxRibbonGalleryEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxRibbonGalleryEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonGalleryEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonGalleryEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonGalleryEvent >::enumValues[] = {
	{0,0}
};


