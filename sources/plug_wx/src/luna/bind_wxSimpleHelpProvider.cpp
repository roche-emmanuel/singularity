#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSimpleHelpProvider.h>

class luna_wrapper_wxSimpleHelpProvider {
public:
	typedef Luna< wxSimpleHelpProvider > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,7267466) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHelpProvider*)");
		}

		wxHelpProvider* rhs =(Luna< wxHelpProvider >::check(L,2));
		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxHelpProvider(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxSimpleHelpProvider* ptr= dynamic_cast< wxSimpleHelpProvider* >(Luna< wxHelpProvider >::check(L,1));
		wxSimpleHelpProvider* ptr= luna_caster< wxHelpProvider, wxSimpleHelpProvider >::cast(Luna< wxHelpProvider >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSimpleHelpProvider >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_base_AddHelp_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddHelp_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RemoveHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowHelpAtPoint(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxSimpleHelpProvider::base_AddHelp(wxWindow * window, const wxString & text)
	static int _bind_base_AddHelp_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_AddHelp_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSimpleHelpProvider::base_AddHelp(wxWindow * window, const wxString & text) function, expected prototype:\nvoid wxSimpleHelpProvider::base_AddHelp(wxWindow * window, const wxString & text)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxSimpleHelpProvider* self=Luna< wxHelpProvider >::checkSubType< wxSimpleHelpProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSimpleHelpProvider::base_AddHelp(wxWindow *, const wxString &)");
		}
		self->wxSimpleHelpProvider::AddHelp(window, text);

		return 0;
	}

	// void wxSimpleHelpProvider::base_AddHelp(int id, const wxString & text)
	static int _bind_base_AddHelp_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_AddHelp_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSimpleHelpProvider::base_AddHelp(int id, const wxString & text) function, expected prototype:\nvoid wxSimpleHelpProvider::base_AddHelp(int id, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int id=(int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxSimpleHelpProvider* self=Luna< wxHelpProvider >::checkSubType< wxSimpleHelpProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSimpleHelpProvider::base_AddHelp(int, const wxString &)");
		}
		self->wxSimpleHelpProvider::AddHelp(id, text);

		return 0;
	}

	// Overload binder for wxSimpleHelpProvider::base_AddHelp
	static int _bind_base_AddHelp(lua_State *L) {
		if (_lg_typecheck_base_AddHelp_overload_1(L)) return _bind_base_AddHelp_overload_1(L);
		if (_lg_typecheck_base_AddHelp_overload_2(L)) return _bind_base_AddHelp_overload_2(L);

		luaL_error(L, "error in function base_AddHelp, cannot match any of the overloads for function base_AddHelp:\n  base_AddHelp(wxWindow *, const wxString &)\n  base_AddHelp(int, const wxString &)\n");
		return 0;
	}

	// void wxSimpleHelpProvider::base_RemoveHelp(wxWindow * window)
	static int _bind_base_RemoveHelp(lua_State *L) {
		if (!_lg_typecheck_base_RemoveHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSimpleHelpProvider::base_RemoveHelp(wxWindow * window) function, expected prototype:\nvoid wxSimpleHelpProvider::base_RemoveHelp(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSimpleHelpProvider* self=Luna< wxHelpProvider >::checkSubType< wxSimpleHelpProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSimpleHelpProvider::base_RemoveHelp(wxWindow *)");
		}
		self->wxSimpleHelpProvider::RemoveHelp(window);

		return 0;
	}

	// bool wxSimpleHelpProvider::base_ShowHelp(wxWindow * window)
	static int _bind_base_ShowHelp(lua_State *L) {
		if (!_lg_typecheck_base_ShowHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSimpleHelpProvider::base_ShowHelp(wxWindow * window) function, expected prototype:\nbool wxSimpleHelpProvider::base_ShowHelp(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSimpleHelpProvider* self=Luna< wxHelpProvider >::checkSubType< wxSimpleHelpProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSimpleHelpProvider::base_ShowHelp(wxWindow *)");
		}
		bool lret = self->wxSimpleHelpProvider::ShowHelp(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSimpleHelpProvider::base_ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin)
	static int _bind_base_ShowHelpAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_ShowHelpAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSimpleHelpProvider::base_ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin) function, expected prototype:\nbool wxSimpleHelpProvider::base_ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 25723480\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxSimpleHelpProvider::base_ShowHelpAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,4);

		wxSimpleHelpProvider* self=Luna< wxHelpProvider >::checkSubType< wxSimpleHelpProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSimpleHelpProvider::base_ShowHelpAtPoint(wxWindow *, const wxPoint &, wxHelpEvent::Origin)");
		}
		bool lret = self->wxSimpleHelpProvider::ShowHelpAtPoint(window, point, origin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxSimpleHelpProvider* LunaTraits< wxSimpleHelpProvider >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxString wxHelpProvider::GetHelp(const wxWindow * window)
}

void LunaTraits< wxSimpleHelpProvider >::_bind_dtor(wxSimpleHelpProvider* obj) {
	delete obj;
}

const char LunaTraits< wxSimpleHelpProvider >::className[] = "wxSimpleHelpProvider";
const char LunaTraits< wxSimpleHelpProvider >::fullName[] = "wxSimpleHelpProvider";
const char LunaTraits< wxSimpleHelpProvider >::moduleName[] = "wx";
const char* LunaTraits< wxSimpleHelpProvider >::parents[] = {"wx.wxHelpProvider", 0};
const int LunaTraits< wxSimpleHelpProvider >::hash = 99505392;
const int LunaTraits< wxSimpleHelpProvider >::uniqueIDs[] = {7267466,0};

luna_RegType LunaTraits< wxSimpleHelpProvider >::methods[] = {
	{"base_AddHelp", &luna_wrapper_wxSimpleHelpProvider::_bind_base_AddHelp},
	{"base_RemoveHelp", &luna_wrapper_wxSimpleHelpProvider::_bind_base_RemoveHelp},
	{"base_ShowHelp", &luna_wrapper_wxSimpleHelpProvider::_bind_base_ShowHelp},
	{"base_ShowHelpAtPoint", &luna_wrapper_wxSimpleHelpProvider::_bind_base_ShowHelpAtPoint},
	{"__eq", &luna_wrapper_wxSimpleHelpProvider::_bind___eq},
	{"getTable", &luna_wrapper_wxSimpleHelpProvider::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSimpleHelpProvider >::converters[] = {
	{"wxHelpProvider", &luna_wrapper_wxSimpleHelpProvider::_cast_from_wxHelpProvider},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSimpleHelpProvider >::enumValues[] = {
	{0,0}
};


