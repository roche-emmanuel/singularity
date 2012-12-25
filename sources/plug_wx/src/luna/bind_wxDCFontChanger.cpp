#include <plug_common.h>

class luna_wrapper_wxDCFontChanger {
public:
	typedef Luna< wxDCFontChanger > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98089914) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDCFontChanger*)");
		}

		wxDCFontChanger* rhs =(Luna< wxDCFontChanger >::check(L,2));
		wxDCFontChanger* self=(Luna< wxDCFontChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxDCFontChanger* self=(Luna< wxDCFontChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDCFontChanger");
		
		return luna_dynamicCast(L,converters,"wxDCFontChanger",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDC >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDC >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxFont >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDCFontChanger::wxDCFontChanger(wxDC & dc)
	static wxDCFontChanger* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDCFontChanger::wxDCFontChanger(wxDC & dc) function, expected prototype:\nwxDCFontChanger::wxDCFontChanger(wxDC & dc)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCFontChanger::wxDCFontChanger function");
		}
		wxDC & dc=*dc_ptr;

		return new wxDCFontChanger(dc);
	}

	// wxDCFontChanger::wxDCFontChanger(wxDC & dc, const wxFont & font)
	static wxDCFontChanger* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDCFontChanger::wxDCFontChanger(wxDC & dc, const wxFont & font) function, expected prototype:\nwxDCFontChanger::wxDCFontChanger(wxDC & dc, const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCFontChanger::wxDCFontChanger function");
		}
		wxDC & dc=*dc_ptr;
		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxDCFontChanger::wxDCFontChanger function");
		}
		const wxFont & font=*font_ptr;

		return new wxDCFontChanger(dc, font);
	}

	// Overload binder for wxDCFontChanger::wxDCFontChanger
	static wxDCFontChanger* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDCFontChanger, cannot match any of the overloads for function wxDCFontChanger:\n  wxDCFontChanger(wxDC &)\n  wxDCFontChanger(wxDC &, const wxFont &)\n");
		return NULL;
	}


	// Function binds:
	// void wxDCFontChanger::Set(const wxFont & font)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDCFontChanger::Set(const wxFont & font) function, expected prototype:\nvoid wxDCFontChanger::Set(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxDCFontChanger::Set function");
		}
		const wxFont & font=*font_ptr;

		wxDCFontChanger* self=(Luna< wxDCFontChanger >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDCFontChanger::Set(const wxFont &)");
		}
		self->Set(font);

		return 0;
	}


	// Operator binds:

};

wxDCFontChanger* LunaTraits< wxDCFontChanger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDCFontChanger::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxDCFontChanger >::_bind_dtor(wxDCFontChanger* obj) {
	delete obj;
}

const char LunaTraits< wxDCFontChanger >::className[] = "wxDCFontChanger";
const char LunaTraits< wxDCFontChanger >::fullName[] = "wxDCFontChanger";
const char LunaTraits< wxDCFontChanger >::moduleName[] = "wx";
const char* LunaTraits< wxDCFontChanger >::parents[] = {0};
const int LunaTraits< wxDCFontChanger >::hash = 98089914;
const int LunaTraits< wxDCFontChanger >::uniqueIDs[] = {98089914,0};

luna_RegType LunaTraits< wxDCFontChanger >::methods[] = {
	{"Set", &luna_wrapper_wxDCFontChanger::_bind_Set},
	{"dynCast", &luna_wrapper_wxDCFontChanger::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDCFontChanger::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDCFontChanger >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDCFontChanger >::enumValues[] = {
	{0,0}
};


