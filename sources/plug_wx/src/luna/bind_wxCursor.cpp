#include <plug_common.h>

class luna_wrapper_wxCursor {
public:
	typedef Luna< wxCursor > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxCursor* ptr= dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCursor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCursor::wxCursor()
	static wxCursor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCursor::wxCursor() function, expected prototype:\nwxCursor::wxCursor()\nClass arguments details:\n");
		}


		return new wxCursor();
	}

	// wxCursor::wxCursor(const wxString & cursorName, wxBitmapType type = wxCURSOR_DEFAULT_TYPE, int hotSpotX = 0, int hotSpotY = 0)
	static wxCursor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCursor::wxCursor(const wxString & cursorName, wxBitmapType type = wxCURSOR_DEFAULT_TYPE, int hotSpotX = 0, int hotSpotY = 0) function, expected prototype:\nwxCursor::wxCursor(const wxString & cursorName, wxBitmapType type = wxCURSOR_DEFAULT_TYPE, int hotSpotX = 0, int hotSpotY = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString cursorName(lua_tostring(L,1),lua_objlen(L,1));
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : wxCURSOR_DEFAULT_TYPE;
		int hotSpotX=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		int hotSpotY=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		return new wxCursor(cursorName, type, hotSpotX, hotSpotY);
	}

	// wxCursor::wxCursor(wxStockCursor cursorId)
	static wxCursor* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCursor::wxCursor(wxStockCursor cursorId) function, expected prototype:\nwxCursor::wxCursor(wxStockCursor cursorId)\nClass arguments details:\n");
		}

		wxStockCursor cursorId=(wxStockCursor)lua_tointeger(L,1);

		return new wxCursor(cursorId);
	}

	// wxCursor::wxCursor(const wxImage & image)
	static wxCursor* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCursor::wxCursor(const wxImage & image) function, expected prototype:\nwxCursor::wxCursor(const wxImage & image)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxImage* image_ptr=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in wxCursor::wxCursor function");
		}
		const wxImage & image=*image_ptr;

		return new wxCursor(image);
	}

	// wxCursor::wxCursor(const wxCursor & cursor)
	static wxCursor* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCursor::wxCursor(const wxCursor & cursor) function, expected prototype:\nwxCursor::wxCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxCursor* cursor_ptr=dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,1));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxCursor::wxCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		return new wxCursor(cursor);
	}

	// Overload binder for wxCursor::wxCursor
	static wxCursor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function wxCursor, cannot match any of the overloads for function wxCursor:\n  wxCursor()\n  wxCursor(const wxString &, wxBitmapType, int, int)\n  wxCursor(wxStockCursor)\n  wxCursor(const wxImage &)\n  wxCursor(const wxCursor &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxCursor::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCursor::IsOk() const function, expected prototype:\nbool wxCursor::IsOk() const\nClass arguments details:\n");
		}


		wxCursor* self=dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCursor::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxCursor* LunaTraits< wxCursor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCursor::_bind_ctor(L);
}

void LunaTraits< wxCursor >::_bind_dtor(wxCursor* obj) {
	delete obj;
}

const char LunaTraits< wxCursor >::className[] = "wxCursor";
const char LunaTraits< wxCursor >::fullName[] = "wxCursor";
const char LunaTraits< wxCursor >::moduleName[] = "wx";
const char* LunaTraits< wxCursor >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxCursor >::hash = 31062894;
const int LunaTraits< wxCursor >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCursor >::methods[] = {
	{"IsOk", &luna_wrapper_wxCursor::_bind_IsOk},
	{0,0}
};

luna_ConverterType LunaTraits< wxCursor >::converters[] = {
	{"wxObject", &luna_wrapper_wxCursor::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCursor >::enumValues[] = {
	{0,0}
};


