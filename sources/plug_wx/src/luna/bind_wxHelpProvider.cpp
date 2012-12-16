#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHelpProvider.h>

class luna_wrapper_wxHelpProvider {
public:
	typedef Luna< wxHelpProvider > luna_t;

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

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHelpProvider");
		
		return luna_dynamicCast(L,converters,"wxHelpProvider",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddHelp_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddHelp_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowHelpAtPoint(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,7267466)) ) return false;
		return true;
	}

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
	// void wxHelpProvider::AddHelp(wxWindow * window, const wxString & text)
	static int _bind_AddHelp_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddHelp_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpProvider::AddHelp(wxWindow * window, const wxString & text) function, expected prototype:\nvoid wxHelpProvider::AddHelp(wxWindow * window, const wxString & text)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpProvider::AddHelp(wxWindow *, const wxString &)");
		}
		self->AddHelp(window, text);

		return 0;
	}

	// void wxHelpProvider::AddHelp(int id, const wxString & text)
	static int _bind_AddHelp_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddHelp_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpProvider::AddHelp(int id, const wxString & text) function, expected prototype:\nvoid wxHelpProvider::AddHelp(int id, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int id=(int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpProvider::AddHelp(int, const wxString &)");
		}
		self->AddHelp(id, text);

		return 0;
	}

	// Overload binder for wxHelpProvider::AddHelp
	static int _bind_AddHelp(lua_State *L) {
		if (_lg_typecheck_AddHelp_overload_1(L)) return _bind_AddHelp_overload_1(L);
		if (_lg_typecheck_AddHelp_overload_2(L)) return _bind_AddHelp_overload_2(L);

		luaL_error(L, "error in function AddHelp, cannot match any of the overloads for function AddHelp:\n  AddHelp(wxWindow *, const wxString &)\n  AddHelp(int, const wxString &)\n");
		return 0;
	}

	// wxString wxHelpProvider::GetHelp(const wxWindow * window)
	static int _bind_GetHelp(lua_State *L) {
		if (!_lg_typecheck_GetHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHelpProvider::GetHelp(const wxWindow * window) function, expected prototype:\nwxString wxHelpProvider::GetHelp(const wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHelpProvider::GetHelp(const wxWindow *)");
		}
		wxString lret = self->GetHelp(window);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHelpProvider::RemoveHelp(wxWindow * window)
	static int _bind_RemoveHelp(lua_State *L) {
		if (!_lg_typecheck_RemoveHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpProvider::RemoveHelp(wxWindow * window) function, expected prototype:\nvoid wxHelpProvider::RemoveHelp(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpProvider::RemoveHelp(wxWindow *)");
		}
		self->RemoveHelp(window);

		return 0;
	}

	// bool wxHelpProvider::ShowHelp(wxWindow * window)
	static int _bind_ShowHelp(lua_State *L) {
		if (!_lg_typecheck_ShowHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpProvider::ShowHelp(wxWindow * window) function, expected prototype:\nbool wxHelpProvider::ShowHelp(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpProvider::ShowHelp(wxWindow *)");
		}
		bool lret = self->ShowHelp(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHelpProvider::ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin)
	static int _bind_ShowHelpAtPoint(lua_State *L) {
		if (!_lg_typecheck_ShowHelpAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpProvider::ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin) function, expected prototype:\nbool wxHelpProvider::ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 25723480\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxHelpProvider::ShowHelpAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,4);

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpProvider::ShowHelpAtPoint(wxWindow *, const wxPoint &, wxHelpEvent::Origin)");
		}
		bool lret = self->ShowHelpAtPoint(window, point, origin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxHelpProvider * wxHelpProvider::Get()
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxHelpProvider * wxHelpProvider::Get() function, expected prototype:\nstatic wxHelpProvider * wxHelpProvider::Get()\nClass arguments details:\n");
		}


		wxHelpProvider * lret = wxHelpProvider::Get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHelpProvider >::push(L,lret,false);

		return 1;
	}

	// static wxHelpProvider * wxHelpProvider::Set(wxHelpProvider * helpProvider)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxHelpProvider * wxHelpProvider::Set(wxHelpProvider * helpProvider) function, expected prototype:\nstatic wxHelpProvider * wxHelpProvider::Set(wxHelpProvider * helpProvider)\nClass arguments details:\narg 1 ID = 7267466\n");
		}

		wxHelpProvider* helpProvider=(Luna< wxHelpProvider >::check(L,1));

		wxHelpProvider * lret = wxHelpProvider::Set(helpProvider);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHelpProvider >::push(L,lret,false);

		return 1;
	}

	// void wxHelpProvider::base_AddHelp(wxWindow * window, const wxString & text)
	static int _bind_base_AddHelp_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_AddHelp_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpProvider::base_AddHelp(wxWindow * window, const wxString & text) function, expected prototype:\nvoid wxHelpProvider::base_AddHelp(wxWindow * window, const wxString & text)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpProvider::base_AddHelp(wxWindow *, const wxString &)");
		}
		self->wxHelpProvider::AddHelp(window, text);

		return 0;
	}

	// void wxHelpProvider::base_AddHelp(int id, const wxString & text)
	static int _bind_base_AddHelp_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_AddHelp_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpProvider::base_AddHelp(int id, const wxString & text) function, expected prototype:\nvoid wxHelpProvider::base_AddHelp(int id, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int id=(int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpProvider::base_AddHelp(int, const wxString &)");
		}
		self->wxHelpProvider::AddHelp(id, text);

		return 0;
	}

	// Overload binder for wxHelpProvider::base_AddHelp
	static int _bind_base_AddHelp(lua_State *L) {
		if (_lg_typecheck_base_AddHelp_overload_1(L)) return _bind_base_AddHelp_overload_1(L);
		if (_lg_typecheck_base_AddHelp_overload_2(L)) return _bind_base_AddHelp_overload_2(L);

		luaL_error(L, "error in function base_AddHelp, cannot match any of the overloads for function base_AddHelp:\n  base_AddHelp(wxWindow *, const wxString &)\n  base_AddHelp(int, const wxString &)\n");
		return 0;
	}

	// void wxHelpProvider::base_RemoveHelp(wxWindow * window)
	static int _bind_base_RemoveHelp(lua_State *L) {
		if (!_lg_typecheck_base_RemoveHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpProvider::base_RemoveHelp(wxWindow * window) function, expected prototype:\nvoid wxHelpProvider::base_RemoveHelp(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpProvider::base_RemoveHelp(wxWindow *)");
		}
		self->wxHelpProvider::RemoveHelp(window);

		return 0;
	}

	// bool wxHelpProvider::base_ShowHelp(wxWindow * window)
	static int _bind_base_ShowHelp(lua_State *L) {
		if (!_lg_typecheck_base_ShowHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpProvider::base_ShowHelp(wxWindow * window) function, expected prototype:\nbool wxHelpProvider::base_ShowHelp(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpProvider::base_ShowHelp(wxWindow *)");
		}
		bool lret = self->wxHelpProvider::ShowHelp(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHelpProvider::base_ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin)
	static int _bind_base_ShowHelpAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_ShowHelpAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpProvider::base_ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin) function, expected prototype:\nbool wxHelpProvider::base_ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 25723480\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxHelpProvider::base_ShowHelpAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,4);

		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpProvider::base_ShowHelpAtPoint(wxWindow *, const wxPoint &, wxHelpEvent::Origin)");
		}
		bool lret = self->wxHelpProvider::ShowHelpAtPoint(window, point, origin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxHelpProvider* LunaTraits< wxHelpProvider >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxString wxHelpProvider::GetHelp(const wxWindow * window)
}

void LunaTraits< wxHelpProvider >::_bind_dtor(wxHelpProvider* obj) {
	delete obj;
}

const char LunaTraits< wxHelpProvider >::className[] = "wxHelpProvider";
const char LunaTraits< wxHelpProvider >::fullName[] = "wxHelpProvider";
const char LunaTraits< wxHelpProvider >::moduleName[] = "wx";
const char* LunaTraits< wxHelpProvider >::parents[] = {0};
const int LunaTraits< wxHelpProvider >::hash = 7267466;
const int LunaTraits< wxHelpProvider >::uniqueIDs[] = {7267466,0};

luna_RegType LunaTraits< wxHelpProvider >::methods[] = {
	{"AddHelp", &luna_wrapper_wxHelpProvider::_bind_AddHelp},
	{"GetHelp", &luna_wrapper_wxHelpProvider::_bind_GetHelp},
	{"RemoveHelp", &luna_wrapper_wxHelpProvider::_bind_RemoveHelp},
	{"ShowHelp", &luna_wrapper_wxHelpProvider::_bind_ShowHelp},
	{"ShowHelpAtPoint", &luna_wrapper_wxHelpProvider::_bind_ShowHelpAtPoint},
	{"Get", &luna_wrapper_wxHelpProvider::_bind_Get},
	{"Set", &luna_wrapper_wxHelpProvider::_bind_Set},
	{"base_AddHelp", &luna_wrapper_wxHelpProvider::_bind_base_AddHelp},
	{"base_RemoveHelp", &luna_wrapper_wxHelpProvider::_bind_base_RemoveHelp},
	{"base_ShowHelp", &luna_wrapper_wxHelpProvider::_bind_base_ShowHelp},
	{"base_ShowHelpAtPoint", &luna_wrapper_wxHelpProvider::_bind_base_ShowHelpAtPoint},
	{"dynCast", &luna_wrapper_wxHelpProvider::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHelpProvider::_bind___eq},
	{"getTable", &luna_wrapper_wxHelpProvider::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHelpProvider >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHelpProvider >::enumValues[] = {
	{0,0}
};


