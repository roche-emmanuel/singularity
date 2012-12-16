#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPaintDC.h>

class luna_wrapper_wxPaintDC {
public:
	typedef Luna< wxPaintDC > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxPaintDC* ptr= dynamic_cast< wxPaintDC* >(Luna< wxObject >::check(L,1));
		wxPaintDC* ptr= luna_caster< wxObject, wxPaintDC >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPaintDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPaintDC::wxPaintDC(wxWindow * window)
	static wxPaintDC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPaintDC::wxPaintDC(wxWindow * window) function, expected prototype:\nwxPaintDC::wxPaintDC(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,1));

		return new wxPaintDC(window);
	}

	// wxPaintDC::wxPaintDC(lua_Table * data, wxWindow * window)
	static wxPaintDC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPaintDC::wxPaintDC(lua_Table * data, wxWindow * window) function, expected prototype:\nwxPaintDC::wxPaintDC(lua_Table * data, wxWindow * window)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		return new wrapper_wxPaintDC(L,NULL, window);
	}

	// Overload binder for wxPaintDC::wxPaintDC
	static wxPaintDC* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxPaintDC, cannot match any of the overloads for function wxPaintDC:\n  wxPaintDC(wxWindow *)\n  wxPaintDC(lua_Table *, wxWindow *)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxPaintDC::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPaintDC::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPaintDC::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxPaintDC* self=Luna< wxObject >::checkSubType< wxPaintDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPaintDC::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxPaintDC::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxPaintDC* LunaTraits< wxPaintDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPaintDC::_bind_ctor(L);
}

void LunaTraits< wxPaintDC >::_bind_dtor(wxPaintDC* obj) {
	delete obj;
}

const char LunaTraits< wxPaintDC >::className[] = "wxPaintDC";
const char LunaTraits< wxPaintDC >::fullName[] = "wxPaintDC";
const char LunaTraits< wxPaintDC >::moduleName[] = "wx";
const char* LunaTraits< wxPaintDC >::parents[] = {"wx.wxWindowDC", 0};
const int LunaTraits< wxPaintDC >::hash = 19456371;
const int LunaTraits< wxPaintDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPaintDC >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxPaintDC::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxPaintDC::_bind___eq},
	{"getTable", &luna_wrapper_wxPaintDC::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPaintDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxPaintDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPaintDC >::enumValues[] = {
	{0,0}
};


