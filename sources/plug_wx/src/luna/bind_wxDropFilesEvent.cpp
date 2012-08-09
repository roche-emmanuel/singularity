#include <plug_common.h>

class luna_wrapper_wxDropFilesEvent {
public:
	typedef Luna< wxDropFilesEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDropFilesEvent* ptr= dynamic_cast< wxDropFilesEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDropFilesEvent >::push(L,ptr,false);
		return 1;
	};


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


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxString * wxDropFilesEvent::GetFiles() const
	static int _bind_GetFiles(lua_State *L) {
		if (!_lg_typecheck_GetFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString * wxDropFilesEvent::GetFiles() const function, expected prototype:\nwxString * wxDropFilesEvent::GetFiles() const\nClass arguments details:\n");
		}


		wxDropFilesEvent* self=dynamic_cast< wxDropFilesEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString * wxDropFilesEvent::GetFiles() const");
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


		wxDropFilesEvent* self=dynamic_cast< wxDropFilesEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDropFilesEvent::GetNumberOfFiles() const");
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


		wxDropFilesEvent* self=dynamic_cast< wxDropFilesEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxDropFilesEvent::GetPosition() const");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxDropFilesEvent* LunaTraits< wxDropFilesEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
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
	{0,0}
};

luna_ConverterType LunaTraits< wxDropFilesEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxDropFilesEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDropFilesEvent >::enumValues[] = {
	{0,0}
};

