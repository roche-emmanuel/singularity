#include <plug_common.h>

class luna_wrapper_wxStaticLine {
public:
	typedef Luna< wxStaticLine > luna_t;

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
		wxStaticLine* ptr= dynamic_cast< wxStaticLine* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStaticLine >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsVertical(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultSize(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStaticLine::wxStaticLine()
	static wxStaticLine* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticLine::wxStaticLine() function, expected prototype:\nwxStaticLine::wxStaticLine()\nClass arguments details:\n");
		}


		return new wxStaticLine();
	}

	// wxStaticLine::wxStaticLine(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLI_HORIZONTAL, const wxString & name = wxStaticLineNameStr)
	static wxStaticLine* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticLine::wxStaticLine(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLI_HORIZONTAL, const wxString & name = wxStaticLineNameStr) function, expected prototype:\nwxStaticLine::wxStaticLine(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLI_HORIZONTAL, const wxString & name = wxStaticLineNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxStaticLine::wxStaticLine function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStaticLine::wxStaticLine function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxLI_HORIZONTAL;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxStaticLine(parent, id, pos, size, style, name);
	}

	// Overload binder for wxStaticLine::wxStaticLine
	static wxStaticLine* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxStaticLine, cannot match any of the overloads for function wxStaticLine:\n  wxStaticLine()\n  wxStaticLine(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxStaticLine::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLI_HORIZONTAL, const wxString & name = wxStaticLineNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticLine::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLI_HORIZONTAL, const wxString & name = wxStaticLineNameStr) function, expected prototype:\nbool wxStaticLine::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLI_HORIZONTAL, const wxString & name = wxStaticLineNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxStaticLine::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStaticLine::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxLI_HORIZONTAL;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxStaticLine* self=dynamic_cast< wxStaticLine* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticLine::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStaticLine::IsVertical() const
	static int _bind_IsVertical(lua_State *L) {
		if (!_lg_typecheck_IsVertical(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticLine::IsVertical() const function, expected prototype:\nbool wxStaticLine::IsVertical() const\nClass arguments details:\n");
		}


		wxStaticLine* self=dynamic_cast< wxStaticLine* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticLine::IsVertical() const");
		}
		bool lret = self->IsVertical();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static int wxStaticLine::GetDefaultSize()
	static int _bind_GetDefaultSize(lua_State *L) {
		if (!_lg_typecheck_GetDefaultSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int wxStaticLine::GetDefaultSize() function, expected prototype:\nstatic int wxStaticLine::GetDefaultSize()\nClass arguments details:\n");
		}


		int lret = wxStaticLine::GetDefaultSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxStaticLine* LunaTraits< wxStaticLine >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStaticLine::_bind_ctor(L);
}

void LunaTraits< wxStaticLine >::_bind_dtor(wxStaticLine* obj) {
	delete obj;
}

const char LunaTraits< wxStaticLine >::className[] = "wxStaticLine";
const char LunaTraits< wxStaticLine >::fullName[] = "wxStaticLine";
const char LunaTraits< wxStaticLine >::moduleName[] = "wx";
const char* LunaTraits< wxStaticLine >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxStaticLine >::hash = 51419291;
const int LunaTraits< wxStaticLine >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxStaticLine >::methods[] = {
	{"Create", &luna_wrapper_wxStaticLine::_bind_Create},
	{"IsVertical", &luna_wrapper_wxStaticLine::_bind_IsVertical},
	{"GetDefaultSize", &luna_wrapper_wxStaticLine::_bind_GetDefaultSize},
	{"__eq", &luna_wrapper_wxStaticLine::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxStaticLine >::converters[] = {
	{"wxObject", &luna_wrapper_wxStaticLine::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStaticLine >::enumValues[] = {
	{0,0}
};


