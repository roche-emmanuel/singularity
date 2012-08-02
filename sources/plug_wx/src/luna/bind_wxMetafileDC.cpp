#include <plug_common.h>

class luna_wrapper_wxMetafileDC {
public:
	typedef Luna< wxMetafileDC > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMetafileDC* ptr= dynamic_cast< wxMetafileDC* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMetafileDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxMetafile * wxMetafileDC::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMetafile * wxMetafileDC::Close() function, expected prototype:\nwxMetafile * wxMetafileDC::Close()\nClass arguments details:\n");
		}


		wxMetafileDC* self=dynamic_cast< wxMetafileDC* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMetafile * wxMetafileDC::Close()");
		}
		wxMetafile * lret = self->Close();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMetafile >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxMetafileDC* LunaTraits< wxMetafileDC >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxMetafileDC >::_bind_dtor(wxMetafileDC* obj) {
	delete obj;
}

const char LunaTraits< wxMetafileDC >::className[] = "wxMetafileDC";
const char LunaTraits< wxMetafileDC >::fullName[] = "wxMetafileDC";
const char LunaTraits< wxMetafileDC >::moduleName[] = "wx";
const char* LunaTraits< wxMetafileDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxMetafileDC >::hash = 65035357;
const int LunaTraits< wxMetafileDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMetafileDC >::methods[] = {
	{"Close", &luna_wrapper_wxMetafileDC::_bind_Close},
	{0,0}
};

luna_ConverterType LunaTraits< wxMetafileDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxMetafileDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMetafileDC >::enumValues[] = {
	{0,0}
};


