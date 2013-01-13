#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDropFilesEvent.h>

class luna_wrapper_wxDropFilesEvent {
public:
	typedef Luna< wxDropFilesEvent > luna_t;

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
		//wxDropFilesEvent* ptr= dynamic_cast< wxDropFilesEvent* >(Luna< wxObject >::check(L,1));
		wxDropFilesEvent* ptr= luna_caster< wxObject, wxDropFilesEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDropFilesEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetFiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNumberOfFiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
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
	// wxDropFilesEvent::wxDropFilesEvent(lua_Table * data, int id = 0, int noFiles = 0, wxString * files = NULL)
	static wxDropFilesEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropFilesEvent::wxDropFilesEvent(lua_Table * data, int id = 0, int noFiles = 0, wxString * files = NULL) function, expected prototype:\nwxDropFilesEvent::wxDropFilesEvent(lua_Table * data, int id = 0, int noFiles = 0, wxString * files = NULL)\nClass arguments details:\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int id=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		int noFiles=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		wxString files(lua_tostring(L,4),lua_objlen(L,4));

		return new wrapper_wxDropFilesEvent(L,NULL, id, noFiles, &files);
	}


	// Function binds:
	// wxString * wxDropFilesEvent::GetFiles() const
	static int _bind_GetFiles(lua_State *L) {
		if (!_lg_typecheck_GetFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString * wxDropFilesEvent::GetFiles() const function, expected prototype:\nwxString * wxDropFilesEvent::GetFiles() const\nClass arguments details:\n");
		}


		wxDropFilesEvent* self=Luna< wxObject >::checkSubType< wxDropFilesEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString * wxDropFilesEvent::GetFiles() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxString * lret = self->GetFiles();
		lua_pushlstring(L,lret->data(),lret->size());

		return 1;
	}

	// int wxDropFilesEvent::GetNumberOfFiles() const
	static int _bind_GetNumberOfFiles(lua_State *L) {
		if (!_lg_typecheck_GetNumberOfFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDropFilesEvent::GetNumberOfFiles() const function, expected prototype:\nint wxDropFilesEvent::GetNumberOfFiles() const\nClass arguments details:\n");
		}


		wxDropFilesEvent* self=Luna< wxObject >::checkSubType< wxDropFilesEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDropFilesEvent::GetNumberOfFiles() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetNumberOfFiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxDropFilesEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxDropFilesEvent::GetPosition() const function, expected prototype:\nwxPoint wxDropFilesEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxDropFilesEvent* self=Luna< wxObject >::checkSubType< wxDropFilesEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxDropFilesEvent::GetPosition() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxClassInfo * wxDropFilesEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDropFilesEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDropFilesEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxDropFilesEvent* self=Luna< wxObject >::checkSubType< wxDropFilesEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDropFilesEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxDropFilesEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxDropFilesEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxDropFilesEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxDropFilesEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxDropFilesEvent* self=Luna< wxObject >::checkSubType< wxDropFilesEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxDropFilesEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxDropFilesEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxDropFilesEvent* LunaTraits< wxDropFilesEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDropFilesEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxDropFilesEvent >::_bind_dtor(wxDropFilesEvent* obj) {
	delete obj;
}

const char LunaTraits< wxDropFilesEvent >::className[] = "wxDropFilesEvent";
const char LunaTraits< wxDropFilesEvent >::fullName[] = "wxDropFilesEvent";
const char LunaTraits< wxDropFilesEvent >::moduleName[] = "wx";
const char* LunaTraits< wxDropFilesEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxDropFilesEvent >::hash = 30017014;
const int LunaTraits< wxDropFilesEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDropFilesEvent >::methods[] = {
	{"GetFiles", &luna_wrapper_wxDropFilesEvent::_bind_GetFiles},
	{"GetNumberOfFiles", &luna_wrapper_wxDropFilesEvent::_bind_GetNumberOfFiles},
	{"GetPosition", &luna_wrapper_wxDropFilesEvent::_bind_GetPosition},
	{"base_GetClassInfo", &luna_wrapper_wxDropFilesEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxDropFilesEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxDropFilesEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxDropFilesEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDropFilesEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxDropFilesEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDropFilesEvent >::enumValues[] = {
	{0,0}
};


