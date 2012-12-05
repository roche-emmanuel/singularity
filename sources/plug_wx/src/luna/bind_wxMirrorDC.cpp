#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMirrorDC.h>

class luna_wrapper_wxMirrorDC {
public:
	typedef Luna< wxMirrorDC > luna_t;

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
		wxMirrorDC* ptr= dynamic_cast< wxMirrorDC* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMirrorDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!dynamic_cast< wxDC* >(Luna< wxObject >::check(L,1))) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2))) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMirrorDC::wxMirrorDC(wxDC & dc, bool mirror)
	static wxMirrorDC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
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

	// wxMirrorDC::wxMirrorDC(lua_Table * data, wxDC & dc, bool mirror)
	static wxMirrorDC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMirrorDC::wxMirrorDC(lua_Table * data, wxDC & dc, bool mirror) function, expected prototype:\nwxMirrorDC::wxMirrorDC(lua_Table * data, wxDC & dc, bool mirror)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxMirrorDC::wxMirrorDC function");
		}
		wxDC & dc=*dc_ptr;
		bool mirror=(bool)(lua_toboolean(L,3)==1);

		return new wrapper_wxMirrorDC(L,NULL, dc, mirror);
	}

	// Overload binder for wxMirrorDC::wxMirrorDC
	static wxMirrorDC* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMirrorDC, cannot match any of the overloads for function wxMirrorDC:\n  wxMirrorDC(wxDC &, bool)\n  wxMirrorDC(lua_Table *, wxDC &, bool)\n");
		return NULL;
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
	{"__eq", &luna_wrapper_wxMirrorDC::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMirrorDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxMirrorDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMirrorDC >::enumValues[] = {
	{0,0}
};


