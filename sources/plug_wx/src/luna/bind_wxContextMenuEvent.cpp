#include <plug_common.h>

#include <luna/wrappers/wrapper_wxContextMenuEvent.h>

class luna_wrapper_wxContextMenuEvent {
public:
	typedef Luna< wxContextMenuEvent > luna_t;

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
		//wxContextMenuEvent* ptr= dynamic_cast< wxContextMenuEvent* >(Luna< wxObject >::check(L,1));
		wxContextMenuEvent* ptr= luna_caster< wxObject, wxContextMenuEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxContextMenuEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
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
	// wxContextMenuEvent::wxContextMenuEvent(lua_Table * data, int type = wxEVT_NULL, int id = 0, const wxPoint & pos = wxDefaultPosition)
	static wxContextMenuEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxContextMenuEvent::wxContextMenuEvent(lua_Table * data, int type = wxEVT_NULL, int id = 0, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nwxContextMenuEvent::wxContextMenuEvent(lua_Table * data, int type = wxEVT_NULL, int id = 0, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 4 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		int type=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxContextMenuEvent::wxContextMenuEvent function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;

		return new wrapper_wxContextMenuEvent(L,NULL, type, id, pos);
	}


	// Function binds:
	// const wxPoint & wxContextMenuEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxPoint & wxContextMenuEvent::GetPosition() const function, expected prototype:\nconst wxPoint & wxContextMenuEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxContextMenuEvent* self=Luna< wxObject >::checkSubType< wxContextMenuEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxPoint & wxContextMenuEvent::GetPosition() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		const wxPoint* lret = &self->GetPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,false);

		return 1;
	}

	// void wxContextMenuEvent::SetPosition(const wxPoint & point)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxContextMenuEvent::SetPosition(const wxPoint & point) function, expected prototype:\nvoid wxContextMenuEvent::SetPosition(const wxPoint & point)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxContextMenuEvent::SetPosition function");
		}
		const wxPoint & point=*point_ptr;

		wxContextMenuEvent* self=Luna< wxObject >::checkSubType< wxContextMenuEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxContextMenuEvent::SetPosition(const wxPoint &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetPosition(point);

		return 0;
	}

	// wxClassInfo * wxContextMenuEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxContextMenuEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxContextMenuEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxContextMenuEvent* self=Luna< wxObject >::checkSubType< wxContextMenuEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxContextMenuEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxContextMenuEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxContextMenuEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxContextMenuEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxContextMenuEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxContextMenuEvent* self=Luna< wxObject >::checkSubType< wxContextMenuEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxContextMenuEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxContextMenuEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxContextMenuEvent* LunaTraits< wxContextMenuEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxContextMenuEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxContextMenuEvent >::_bind_dtor(wxContextMenuEvent* obj) {
	delete obj;
}

const char LunaTraits< wxContextMenuEvent >::className[] = "wxContextMenuEvent";
const char LunaTraits< wxContextMenuEvent >::fullName[] = "wxContextMenuEvent";
const char LunaTraits< wxContextMenuEvent >::moduleName[] = "wx";
const char* LunaTraits< wxContextMenuEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxContextMenuEvent >::hash = 78101839;
const int LunaTraits< wxContextMenuEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxContextMenuEvent >::methods[] = {
	{"GetPosition", &luna_wrapper_wxContextMenuEvent::_bind_GetPosition},
	{"SetPosition", &luna_wrapper_wxContextMenuEvent::_bind_SetPosition},
	{"base_GetClassInfo", &luna_wrapper_wxContextMenuEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxContextMenuEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxContextMenuEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxContextMenuEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxContextMenuEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxContextMenuEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxContextMenuEvent >::enumValues[] = {
	{0,0}
};


