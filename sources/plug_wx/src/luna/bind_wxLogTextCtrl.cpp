#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLogTextCtrl.h>

class luna_wrapper_wxLogTextCtrl {
public:
	typedef Luna< wxLogTextCtrl > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxLog* self=(Luna< wxLog >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,13550494) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxLog*)");
		}

		wxLog* rhs =(Luna< wxLog >::check(L,2));
		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxLogTextCtrl* ptr= dynamic_cast< wxLogTextCtrl* >(Luna< wxLog >::check(L,1));
		wxLogTextCtrl* ptr= luna_caster< wxLog, wxLogTextCtrl >::cast(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogTextCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxTextCtrl >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxTextCtrl >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLogTextCtrl::wxLogTextCtrl(wxTextCtrl * pTextCtrl)
	static wxLogTextCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogTextCtrl::wxLogTextCtrl(wxTextCtrl * pTextCtrl) function, expected prototype:\nwxLogTextCtrl::wxLogTextCtrl(wxTextCtrl * pTextCtrl)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxTextCtrl* pTextCtrl=(Luna< wxObject >::checkSubType< wxTextCtrl >(L,1));

		return new wxLogTextCtrl(pTextCtrl);
	}

	// wxLogTextCtrl::wxLogTextCtrl(lua_Table * data, wxTextCtrl * pTextCtrl)
	static wxLogTextCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogTextCtrl::wxLogTextCtrl(lua_Table * data, wxTextCtrl * pTextCtrl) function, expected prototype:\nwxLogTextCtrl::wxLogTextCtrl(lua_Table * data, wxTextCtrl * pTextCtrl)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		wxTextCtrl* pTextCtrl=(Luna< wxObject >::checkSubType< wxTextCtrl >(L,2));

		return new wrapper_wxLogTextCtrl(L,NULL, pTextCtrl);
	}

	// Overload binder for wxLogTextCtrl::wxLogTextCtrl
	static wxLogTextCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxLogTextCtrl, cannot match any of the overloads for function wxLogTextCtrl:\n  wxLogTextCtrl(wxTextCtrl *)\n  wxLogTextCtrl(lua_Table *, wxTextCtrl *)\n");
		return NULL;
	}


	// Function binds:
	// void wxLogTextCtrl::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogTextCtrl::base_Flush() function, expected prototype:\nvoid wxLogTextCtrl::base_Flush()\nClass arguments details:\n");
		}


		wxLogTextCtrl* self=Luna< wxLog >::checkSubType< wxLogTextCtrl >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogTextCtrl::base_Flush(). Got : '%s'",typeid(Luna< wxLog >::check(L,1)).name());
		}
		self->wxLogTextCtrl::Flush();

		return 0;
	}


	// Operator binds:

};

wxLogTextCtrl* LunaTraits< wxLogTextCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogTextCtrl::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxLogTextCtrl >::_bind_dtor(wxLogTextCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxLogTextCtrl >::className[] = "wxLogTextCtrl";
const char LunaTraits< wxLogTextCtrl >::fullName[] = "wxLogTextCtrl";
const char LunaTraits< wxLogTextCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxLogTextCtrl >::parents[] = {"wx.wxLog", 0};
const int LunaTraits< wxLogTextCtrl >::hash = 74082061;
const int LunaTraits< wxLogTextCtrl >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogTextCtrl >::methods[] = {
	{"base_Flush", &luna_wrapper_wxLogTextCtrl::_bind_base_Flush},
	{"__eq", &luna_wrapper_wxLogTextCtrl::_bind___eq},
	{"getTable", &luna_wrapper_wxLogTextCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogTextCtrl >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogTextCtrl::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogTextCtrl >::enumValues[] = {
	{0,0}
};


