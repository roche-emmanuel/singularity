#include <plug_common.h>

class luna_wrapper_wxMirrorDC {
public:
	typedef Luna< wxMirrorDC > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMirrorDC* ptr= dynamic_cast< wxMirrorDC* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMirrorDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMirrorDC::wxMirrorDC(wxDC & dc, bool mirror)
	static wxMirrorDC* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMirrorDC::wxMirrorDC(wxDC & dc, bool mirror) function, expected prototype:\nwxMirrorDC::wxMirrorDC(wxDC & dc, bool mirror)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxMirrorDC::wxMirrorDC function");
		}
		wxDC & dc=*dc_ptr;
		bool mirror=(bool)(lua_toboolean(L,2)==1);

		return new wxMirrorDC(dc, mirror);
	}


	// Function binds:

	// Operator binds:

};

wxMirrorDC* LunaTraits< wxMirrorDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMirrorDC::_bind_ctor(L);
}

void LunaTraits< wxMirrorDC >::_bind_dtor(wxMirrorDC* obj) {
	delete obj;
}

const char LunaTraits< wxMirrorDC >::className[] = "wxMirrorDC";
const char LunaTraits< wxMirrorDC >::fullName[] = "wxMirrorDC";
const char LunaTraits< wxMirrorDC >::moduleName[] = "wx";
const char* LunaTraits< wxMirrorDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxMirrorDC >::hash = 26593093;
const int LunaTraits< wxMirrorDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMirrorDC >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxMirrorDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxMirrorDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMirrorDC >::enumValues[] = {
	{0,0}
};


