#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMDIClientWindow.h>

class luna_wrapper_wxMDIClientWindow {
public:
	typedef Luna< wxMDIClientWindow > luna_t;

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
		wxMDIClientWindow* ptr= dynamic_cast< wxMDIClientWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMDIClientWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CreateClient(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMDIClientWindow::wxMDIClientWindow()
	static wxMDIClientWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIClientWindow::wxMDIClientWindow() function, expected prototype:\nwxMDIClientWindow::wxMDIClientWindow()\nClass arguments details:\n");
		}


		return new wxMDIClientWindow();
	}

	// wxMDIClientWindow::wxMDIClientWindow(lua_Table * data)
	static wxMDIClientWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIClientWindow::wxMDIClientWindow(lua_Table * data) function, expected prototype:\nwxMDIClientWindow::wxMDIClientWindow(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxMDIClientWindow(L,NULL);
	}

	// Overload binder for wxMDIClientWindow::wxMDIClientWindow
	static wxMDIClientWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMDIClientWindow, cannot match any of the overloads for function wxMDIClientWindow:\n  wxMDIClientWindow()\n  wxMDIClientWindow(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxMDIClientWindow::CreateClient(wxMDIParentFrame * parent, long style = 0)
	static int _bind_CreateClient(lua_State *L) {
		if (!_lg_typecheck_CreateClient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMDIClientWindow::CreateClient(wxMDIParentFrame * parent, long style = 0) function, expected prototype:\nbool wxMDIClientWindow::CreateClient(wxMDIParentFrame * parent, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxMDIParentFrame* parent=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,2));
		long style=luatop>2 ? (long)lua_tointeger(L,3) : 0;

		wxMDIClientWindow* self=dynamic_cast< wxMDIClientWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMDIClientWindow::CreateClient(wxMDIParentFrame *, long)");
		}
		bool lret = self->CreateClient(parent, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxMDIClientWindow* LunaTraits< wxMDIClientWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMDIClientWindow::_bind_ctor(L);
}

void LunaTraits< wxMDIClientWindow >::_bind_dtor(wxMDIClientWindow* obj) {
	delete obj;
}

const char LunaTraits< wxMDIClientWindow >::className[] = "wxMDIClientWindow";
const char LunaTraits< wxMDIClientWindow >::fullName[] = "wxMDIClientWindow";
const char LunaTraits< wxMDIClientWindow >::moduleName[] = "wx";
const char* LunaTraits< wxMDIClientWindow >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxMDIClientWindow >::hash = 31530250;
const int LunaTraits< wxMDIClientWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMDIClientWindow >::methods[] = {
	{"CreateClient", &luna_wrapper_wxMDIClientWindow::_bind_CreateClient},
	{"__eq", &luna_wrapper_wxMDIClientWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMDIClientWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxMDIClientWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMDIClientWindow >::enumValues[] = {
	{0,0}
};


