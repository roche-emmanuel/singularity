#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRibbonGalleryEvent.h>

class luna_wrapper_wxRibbonGalleryEvent {
public:
	typedef Luna< wxRibbonGalleryEvent > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		wxRibbonGalleryEvent* self= (wxRibbonGalleryEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRibbonGalleryEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56057674)) ) return false;
		return true;
	}


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

	// Constructor binds:
	// wxRibbonGalleryEvent::wxRibbonGalleryEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonGallery * gallery = NULL, wxRibbonGalleryItem * item = NULL)
	static wxRibbonGalleryEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryEvent::wxRibbonGalleryEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonGallery * gallery = NULL, wxRibbonGalleryItem * item = NULL) function, expected prototype:\nwxRibbonGalleryEvent::wxRibbonGalleryEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonGallery * gallery = NULL, wxRibbonGalleryItem * item = NULL)\nClass arguments details:\narg 4 ID = 56813631\narg 5 ID = 56057674\n");
		}

		int luatop = lua_gettop(L);

		int command_type=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		int win_id=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		wxRibbonGallery* gallery=luatop>3 ? (Luna< wxObject >::checkSubType< wxRibbonGallery >(L,4)) : (wxRibbonGallery*)NULL;
		wxRibbonGalleryItem* item=luatop>4 ? (Luna< wxRibbonGalleryItem >::check(L,5)) : (wxRibbonGalleryItem*)NULL;

		return new wrapper_wxRibbonGalleryEvent(L,NULL, command_type, win_id, gallery, item);
	}


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
			luaL_error(L, "Invalid object in function call wxRibbonGallery * wxRibbonGalleryEvent::GetGallery(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGalleryEvent::GetGalleryItem(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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
			luaL_error(L, "Invalid object in function call void wxRibbonGalleryEvent::SetGallery(wxRibbonGallery *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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
			luaL_error(L, "Invalid object in function call void wxRibbonGalleryEvent::SetGalleryItem(wxRibbonGalleryItem *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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
			luaL_error(L, "Invalid object in function call wxClassInfo * wxRibbonGalleryEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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
			luaL_error(L, "Invalid object in function call wxEventCategory wxRibbonGalleryEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxRibbonGalleryEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRibbonGalleryEvent* LunaTraits< wxRibbonGalleryEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonGalleryEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
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
	{"fromVoid", &luna_wrapper_wxRibbonGalleryEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRibbonGalleryEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRibbonGalleryEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonGalleryEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonGalleryEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonGalleryEvent >::enumValues[] = {
	{0,0}
};


