#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWizardEvent.h>

class luna_wrapper_wxWizardEvent {
public:
	typedef Luna< wxWizardEvent > luna_t;

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
		//wxWizardEvent* ptr= dynamic_cast< wxWizardEvent* >(Luna< wxObject >::check(L,1));
		wxWizardEvent* ptr= luna_caster< wxObject, wxWizardEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWizardEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// wxWizardEvent::wxWizardEvent(lua_Table * data, int type = wxEVT_NULL, int id = ::wxID_ANY, bool direction = true, wxWizardPage * page = 0)
	static wxWizardEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWizardEvent::wxWizardEvent(lua_Table * data, int type = wxEVT_NULL, int id = ::wxID_ANY, bool direction = true, wxWizardPage * page = 0) function, expected prototype:\nwxWizardEvent::wxWizardEvent(lua_Table * data, int type = wxEVT_NULL, int id = ::wxID_ANY, bool direction = true, wxWizardPage * page = 0)\nClass arguments details:\narg 5 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int type=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		bool direction=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;
		wxWizardPage* page=luatop>4 ? (Luna< wxObject >::checkSubType< wxWizardPage >(L,5)) : (wxWizardPage*)0;

		return new wrapper_wxWizardEvent(L,NULL, type, id, direction, page);
	}


	// Function binds:
	// bool wxWizardEvent::GetDirection() const
	static int _bind_GetDirection(lua_State *L) {
		if (!_lg_typecheck_GetDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWizardEvent::GetDirection() const function, expected prototype:\nbool wxWizardEvent::GetDirection() const\nClass arguments details:\n");
		}


		wxWizardEvent* self=Luna< wxObject >::checkSubType< wxWizardEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWizardEvent::GetDirection() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->GetDirection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxWizardPage * wxWizardEvent::GetPage() const
	static int _bind_GetPage(lua_State *L) {
		if (!_lg_typecheck_GetPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWizardPage * wxWizardEvent::GetPage() const function, expected prototype:\nwxWizardPage * wxWizardEvent::GetPage() const\nClass arguments details:\n");
		}


		wxWizardEvent* self=Luna< wxObject >::checkSubType< wxWizardEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWizardPage * wxWizardEvent::GetPage() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxWizardPage * lret = self->GetPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWizardPage >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxWizardEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxWizardEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxWizardEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxWizardEvent* self=Luna< wxObject >::checkSubType< wxWizardEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxWizardEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxWizardEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxWizardEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxWizardEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxWizardEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxWizardEvent* self=Luna< wxObject >::checkSubType< wxWizardEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxWizardEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxWizardEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxWizardEvent* LunaTraits< wxWizardEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWizardEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxWizardEvent >::_bind_dtor(wxWizardEvent* obj) {
	delete obj;
}

const char LunaTraits< wxWizardEvent >::className[] = "wxWizardEvent";
const char LunaTraits< wxWizardEvent >::fullName[] = "wxWizardEvent";
const char LunaTraits< wxWizardEvent >::moduleName[] = "wx";
const char* LunaTraits< wxWizardEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxWizardEvent >::hash = 1835864;
const int LunaTraits< wxWizardEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWizardEvent >::methods[] = {
	{"GetDirection", &luna_wrapper_wxWizardEvent::_bind_GetDirection},
	{"GetPage", &luna_wrapper_wxWizardEvent::_bind_GetPage},
	{"base_GetClassInfo", &luna_wrapper_wxWizardEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxWizardEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxWizardEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxWizardEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxWizardEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxWizardEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWizardEvent >::enumValues[] = {
	{0,0}
};


