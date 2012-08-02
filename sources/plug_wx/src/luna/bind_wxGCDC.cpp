#include <plug_common.h>

class luna_wrapper_wxGCDC {
public:
	typedef Luna< wxGCDC > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGCDC* ptr= dynamic_cast< wxGCDC* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGCDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGCDC::wxGCDC(const wxWindowDC & windowDC)
	static wxGCDC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGCDC::wxGCDC(const wxWindowDC & windowDC) function, expected prototype:\nwxGCDC::wxGCDC(const wxWindowDC & windowDC)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxWindowDC* windowDC_ptr=dynamic_cast< wxWindowDC* >(Luna< wxObject >::check(L,1));
		if( !windowDC_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg windowDC in wxGCDC::wxGCDC function");
		}
		const wxWindowDC & windowDC=*windowDC_ptr;

		return new wxGCDC(windowDC);
	}

	// wxGCDC::wxGCDC(const wxMemoryDC & memoryDC)
	static wxGCDC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGCDC::wxGCDC(const wxMemoryDC & memoryDC) function, expected prototype:\nwxGCDC::wxGCDC(const wxMemoryDC & memoryDC)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxMemoryDC* memoryDC_ptr=dynamic_cast< wxMemoryDC* >(Luna< wxObject >::check(L,1));
		if( !memoryDC_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg memoryDC in wxGCDC::wxGCDC function");
		}
		const wxMemoryDC & memoryDC=*memoryDC_ptr;

		return new wxGCDC(memoryDC);
	}

	// wxGCDC::wxGCDC()
	static wxGCDC* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGCDC::wxGCDC() function, expected prototype:\nwxGCDC::wxGCDC()\nClass arguments details:\n");
		}


		return new wxGCDC();
	}

	// Overload binder for wxGCDC::wxGCDC
	static wxGCDC* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxGCDC, cannot match any of the overloads for function wxGCDC:\n  wxGCDC(const wxWindowDC &)\n  wxGCDC(const wxMemoryDC &)\n  wxGCDC()\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

wxGCDC* LunaTraits< wxGCDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGCDC::_bind_ctor(L);
}

void LunaTraits< wxGCDC >::_bind_dtor(wxGCDC* obj) {
	delete obj;
}

const char LunaTraits< wxGCDC >::className[] = "wxGCDC";
const char LunaTraits< wxGCDC >::fullName[] = "wxGCDC";
const char LunaTraits< wxGCDC >::moduleName[] = "wx";
const char* LunaTraits< wxGCDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxGCDC >::hash = 19873033;
const int LunaTraits< wxGCDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGCDC >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGCDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxGCDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGCDC >::enumValues[] = {
	{0,0}
};


