#include <plug_common.h>

class luna_wrapper_wxAuiNotebookEvent {
public:
	typedef Luna< wxAuiNotebookEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxAuiNotebookEvent* ptr= dynamic_cast< wxAuiNotebookEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiNotebookEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxEvent * wxAuiNotebookEvent::Clone()
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvent * wxAuiNotebookEvent::Clone() function, expected prototype:\nwxEvent * wxAuiNotebookEvent::Clone()\nClass arguments details:\n");
		}


		wxAuiNotebookEvent* self=dynamic_cast< wxAuiNotebookEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvent * wxAuiNotebookEvent::Clone()");
		}
		wxEvent * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxAuiNotebookEvent* LunaTraits< wxAuiNotebookEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxAuiNotebookEvent >::_bind_dtor(wxAuiNotebookEvent* obj) {
	delete obj;
}

const char LunaTraits< wxAuiNotebookEvent >::className[] = "wxAuiNotebookEvent";
const char LunaTraits< wxAuiNotebookEvent >::fullName[] = "wxAuiNotebookEvent";
const char LunaTraits< wxAuiNotebookEvent >::moduleName[] = "wx";
const char* LunaTraits< wxAuiNotebookEvent >::parents[] = {"wx.wxBookCtrlEvent", 0};
const int LunaTraits< wxAuiNotebookEvent >::hash = 23667394;
const int LunaTraits< wxAuiNotebookEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxAuiNotebookEvent >::methods[] = {
	{"Clone", &luna_wrapper_wxAuiNotebookEvent::_bind_Clone},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiNotebookEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxAuiNotebookEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiNotebookEvent >::enumValues[] = {
	{0,0}
};

