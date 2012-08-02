#include <plug_common.h>

class luna_wrapper_wxMemoryDC {
public:
	typedef Luna< wxMemoryDC > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMemoryDC* ptr= dynamic_cast< wxMemoryDC* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMemoryDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SelectObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectObjectAsSource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMemoryDC::wxMemoryDC()
	static wxMemoryDC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMemoryDC::wxMemoryDC() function, expected prototype:\nwxMemoryDC::wxMemoryDC()\nClass arguments details:\n");
		}


		return new wxMemoryDC();
	}

	// wxMemoryDC::wxMemoryDC(wxDC * dc)
	static wxMemoryDC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMemoryDC::wxMemoryDC(wxDC * dc) function, expected prototype:\nwxMemoryDC::wxMemoryDC(wxDC * dc)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDC* dc=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,1));

		return new wxMemoryDC(dc);
	}

	// wxMemoryDC::wxMemoryDC(wxBitmap & bitmap)
	static wxMemoryDC* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMemoryDC::wxMemoryDC(wxBitmap & bitmap) function, expected prototype:\nwxMemoryDC::wxMemoryDC(wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMemoryDC::wxMemoryDC function");
		}
		wxBitmap & bitmap=*bitmap_ptr;

		return new wxMemoryDC(bitmap);
	}

	// Overload binder for wxMemoryDC::wxMemoryDC
	static wxMemoryDC* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxMemoryDC, cannot match any of the overloads for function wxMemoryDC:\n  wxMemoryDC()\n  wxMemoryDC(wxDC *)\n  wxMemoryDC(wxBitmap &)\n");
		return NULL;
	}


	// Function binds:
	// void wxMemoryDC::SelectObject(wxBitmap & bitmap)
	static int _bind_SelectObject(lua_State *L) {
		if (!_lg_typecheck_SelectObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMemoryDC::SelectObject(wxBitmap & bitmap) function, expected prototype:\nvoid wxMemoryDC::SelectObject(wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMemoryDC::SelectObject function");
		}
		wxBitmap & bitmap=*bitmap_ptr;

		wxMemoryDC* self=dynamic_cast< wxMemoryDC* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMemoryDC::SelectObject(wxBitmap &)");
		}
		self->SelectObject(bitmap);

		return 0;
	}

	// void wxMemoryDC::SelectObjectAsSource(const wxBitmap & bitmap)
	static int _bind_SelectObjectAsSource(lua_State *L) {
		if (!_lg_typecheck_SelectObjectAsSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMemoryDC::SelectObjectAsSource(const wxBitmap & bitmap) function, expected prototype:\nvoid wxMemoryDC::SelectObjectAsSource(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMemoryDC::SelectObjectAsSource function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxMemoryDC* self=dynamic_cast< wxMemoryDC* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMemoryDC::SelectObjectAsSource(const wxBitmap &)");
		}
		self->SelectObjectAsSource(bitmap);

		return 0;
	}


	// Operator binds:

};

wxMemoryDC* LunaTraits< wxMemoryDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMemoryDC::_bind_ctor(L);
}

void LunaTraits< wxMemoryDC >::_bind_dtor(wxMemoryDC* obj) {
	delete obj;
}

const char LunaTraits< wxMemoryDC >::className[] = "wxMemoryDC";
const char LunaTraits< wxMemoryDC >::fullName[] = "wxMemoryDC";
const char LunaTraits< wxMemoryDC >::moduleName[] = "wx";
const char* LunaTraits< wxMemoryDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxMemoryDC >::hash = 30758490;
const int LunaTraits< wxMemoryDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMemoryDC >::methods[] = {
	{"SelectObject", &luna_wrapper_wxMemoryDC::_bind_SelectObject},
	{"SelectObjectAsSource", &luna_wrapper_wxMemoryDC::_bind_SelectObjectAsSource},
	{0,0}
};

luna_ConverterType LunaTraits< wxMemoryDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxMemoryDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMemoryDC >::enumValues[] = {
	{0,0}
};


