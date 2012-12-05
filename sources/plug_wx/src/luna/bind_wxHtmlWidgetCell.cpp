#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlWidgetCell.h>

class luna_wrapper_wxHtmlWidgetCell {
public:
	typedef Luna< wxHtmlWidgetCell > luna_t;

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
		wxHtmlWidgetCell* ptr= dynamic_cast< wxHtmlWidgetCell* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlWidgetCell >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlWidgetCell::wxHtmlWidgetCell(wxWindow * wnd, int w = 0)
	static wxHtmlWidgetCell* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlWidgetCell::wxHtmlWidgetCell(wxWindow * wnd, int w = 0) function, expected prototype:\nwxHtmlWidgetCell::wxHtmlWidgetCell(wxWindow * wnd, int w = 0)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int w=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		return new wxHtmlWidgetCell(wnd, w);
	}

	// wxHtmlWidgetCell::wxHtmlWidgetCell(lua_Table * data, wxWindow * wnd, int w = 0)
	static wxHtmlWidgetCell* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlWidgetCell::wxHtmlWidgetCell(lua_Table * data, wxWindow * wnd, int w = 0) function, expected prototype:\nwxHtmlWidgetCell::wxHtmlWidgetCell(lua_Table * data, wxWindow * wnd, int w = 0)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int w=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		return new wrapper_wxHtmlWidgetCell(L,NULL, wnd, w);
	}

	// Overload binder for wxHtmlWidgetCell::wxHtmlWidgetCell
	static wxHtmlWidgetCell* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlWidgetCell, cannot match any of the overloads for function wxHtmlWidgetCell:\n  wxHtmlWidgetCell(wxWindow *, int)\n  wxHtmlWidgetCell(lua_Table *, wxWindow *, int)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

wxHtmlWidgetCell* LunaTraits< wxHtmlWidgetCell >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlWidgetCell::_bind_ctor(L);
}

void LunaTraits< wxHtmlWidgetCell >::_bind_dtor(wxHtmlWidgetCell* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlWidgetCell >::className[] = "wxHtmlWidgetCell";
const char LunaTraits< wxHtmlWidgetCell >::fullName[] = "wxHtmlWidgetCell";
const char LunaTraits< wxHtmlWidgetCell >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlWidgetCell >::parents[] = {"wx.wxHtmlCell", 0};
const int LunaTraits< wxHtmlWidgetCell >::hash = 15937627;
const int LunaTraits< wxHtmlWidgetCell >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlWidgetCell >::methods[] = {
	{"__eq", &luna_wrapper_wxHtmlWidgetCell::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlWidgetCell >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlWidgetCell::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlWidgetCell >::enumValues[] = {
	{0,0}
};


