#include <plug_common.h>

class luna_wrapper_wxMouseEventsManager {
public:
	typedef Luna< wxMouseEventsManager > luna_t;

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
		wxMouseEventsManager* ptr= dynamic_cast< wxMouseEventsManager* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMouseEventsManager >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxMouseEventsManager::Create(wxWindow * win)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEventsManager::Create(wxWindow * win) function, expected prototype:\nbool wxMouseEventsManager::Create(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxMouseEventsManager* self=dynamic_cast< wxMouseEventsManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEventsManager::Create(wxWindow *)");
		}
		bool lret = self->Create(win);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxMouseEventsManager* LunaTraits< wxMouseEventsManager >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxMouseEventsManager::MouseHitTest(const wxPoint & pos)
	// bool wxMouseEventsManager::MouseClicked(int item)
	// bool wxMouseEventsManager::MouseDragBegin(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragging(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragEnd(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragCancelled(int item)

	// Abstract operators:
}

void LunaTraits< wxMouseEventsManager >::_bind_dtor(wxMouseEventsManager* obj) {
	delete obj;
}

const char LunaTraits< wxMouseEventsManager >::className[] = "wxMouseEventsManager";
const char LunaTraits< wxMouseEventsManager >::fullName[] = "wxMouseEventsManager";
const char LunaTraits< wxMouseEventsManager >::moduleName[] = "wx";
const char* LunaTraits< wxMouseEventsManager >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxMouseEventsManager >::hash = 54019244;
const int LunaTraits< wxMouseEventsManager >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMouseEventsManager >::methods[] = {
	{"Create", &luna_wrapper_wxMouseEventsManager::_bind_Create},
	{"__eq", &luna_wrapper_wxMouseEventsManager::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseEventsManager >::converters[] = {
	{"wxObject", &luna_wrapper_wxMouseEventsManager::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseEventsManager >::enumValues[] = {
	{0,0}
};


