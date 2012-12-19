#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlLinkInfo.h>

class luna_wrapper_wxHtmlLinkInfo {
public:
	typedef Luna< wxHtmlLinkInfo > luna_t;

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
		//wxHtmlLinkInfo* ptr= dynamic_cast< wxHtmlLinkInfo* >(Luna< wxObject >::check(L,1));
		wxHtmlLinkInfo* ptr= luna_caster< wxObject, wxHtmlLinkInfo >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlLinkInfo >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHref(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHtmlCell(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlLinkInfo::wxHtmlLinkInfo()
	static wxHtmlLinkInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlLinkInfo::wxHtmlLinkInfo() function, expected prototype:\nwxHtmlLinkInfo::wxHtmlLinkInfo()\nClass arguments details:\n");
		}


		return new wxHtmlLinkInfo();
	}

	// wxHtmlLinkInfo::wxHtmlLinkInfo(const wxString & href, const wxString & target = wxEmptyString)
	static wxHtmlLinkInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlLinkInfo::wxHtmlLinkInfo(const wxString & href, const wxString & target = wxEmptyString) function, expected prototype:\nwxHtmlLinkInfo::wxHtmlLinkInfo(const wxString & href, const wxString & target = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString href(lua_tostring(L,1),lua_objlen(L,1));
		wxString target(lua_tostring(L,2),lua_objlen(L,2));

		return new wxHtmlLinkInfo(href, target);
	}

	// wxHtmlLinkInfo::wxHtmlLinkInfo(lua_Table * data)
	static wxHtmlLinkInfo* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlLinkInfo::wxHtmlLinkInfo(lua_Table * data) function, expected prototype:\nwxHtmlLinkInfo::wxHtmlLinkInfo(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxHtmlLinkInfo(L,NULL);
	}

	// wxHtmlLinkInfo::wxHtmlLinkInfo(lua_Table * data, const wxString & href, const wxString & target = wxEmptyString)
	static wxHtmlLinkInfo* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlLinkInfo::wxHtmlLinkInfo(lua_Table * data, const wxString & href, const wxString & target = wxEmptyString) function, expected prototype:\nwxHtmlLinkInfo::wxHtmlLinkInfo(lua_Table * data, const wxString & href, const wxString & target = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString href(lua_tostring(L,2),lua_objlen(L,2));
		wxString target(lua_tostring(L,3),lua_objlen(L,3));

		return new wrapper_wxHtmlLinkInfo(L,NULL, href, target);
	}

	// Overload binder for wxHtmlLinkInfo::wxHtmlLinkInfo
	static wxHtmlLinkInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxHtmlLinkInfo, cannot match any of the overloads for function wxHtmlLinkInfo:\n  wxHtmlLinkInfo()\n  wxHtmlLinkInfo(const wxString &, const wxString &)\n  wxHtmlLinkInfo(lua_Table *)\n  wxHtmlLinkInfo(lua_Table *, const wxString &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// const wxMouseEvent * wxHtmlLinkInfo::GetEvent() const
	static int _bind_GetEvent(lua_State *L) {
		if (!_lg_typecheck_GetEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxMouseEvent * wxHtmlLinkInfo::GetEvent() const function, expected prototype:\nconst wxMouseEvent * wxHtmlLinkInfo::GetEvent() const\nClass arguments details:\n");
		}


		wxHtmlLinkInfo* self=Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxMouseEvent * wxHtmlLinkInfo::GetEvent() const");
		}
		const wxMouseEvent * lret = self->GetEvent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMouseEvent >::push(L,lret,false);

		return 1;
	}

	// wxString wxHtmlLinkInfo::GetHref() const
	static int _bind_GetHref(lua_State *L) {
		if (!_lg_typecheck_GetHref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlLinkInfo::GetHref() const function, expected prototype:\nwxString wxHtmlLinkInfo::GetHref() const\nClass arguments details:\n");
		}


		wxHtmlLinkInfo* self=Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlLinkInfo::GetHref() const");
		}
		wxString lret = self->GetHref();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxHtmlCell * wxHtmlLinkInfo::GetHtmlCell() const
	static int _bind_GetHtmlCell(lua_State *L) {
		if (!_lg_typecheck_GetHtmlCell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxHtmlCell * wxHtmlLinkInfo::GetHtmlCell() const function, expected prototype:\nconst wxHtmlCell * wxHtmlLinkInfo::GetHtmlCell() const\nClass arguments details:\n");
		}


		wxHtmlLinkInfo* self=Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxHtmlCell * wxHtmlLinkInfo::GetHtmlCell() const");
		}
		const wxHtmlCell * lret = self->GetHtmlCell();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// wxString wxHtmlLinkInfo::GetTarget() const
	static int _bind_GetTarget(lua_State *L) {
		if (!_lg_typecheck_GetTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlLinkInfo::GetTarget() const function, expected prototype:\nwxString wxHtmlLinkInfo::GetTarget() const\nClass arguments details:\n");
		}


		wxHtmlLinkInfo* self=Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlLinkInfo::GetTarget() const");
		}
		wxString lret = self->GetTarget();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxClassInfo * wxHtmlLinkInfo::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlLinkInfo::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlLinkInfo::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHtmlLinkInfo* self=Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlLinkInfo::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxHtmlLinkInfo::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHtmlLinkInfo* LunaTraits< wxHtmlLinkInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlLinkInfo::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxHtmlLinkInfo >::_bind_dtor(wxHtmlLinkInfo* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlLinkInfo >::className[] = "wxHtmlLinkInfo";
const char LunaTraits< wxHtmlLinkInfo >::fullName[] = "wxHtmlLinkInfo";
const char LunaTraits< wxHtmlLinkInfo >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlLinkInfo >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxHtmlLinkInfo >::hash = 74690162;
const int LunaTraits< wxHtmlLinkInfo >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlLinkInfo >::methods[] = {
	{"GetEvent", &luna_wrapper_wxHtmlLinkInfo::_bind_GetEvent},
	{"GetHref", &luna_wrapper_wxHtmlLinkInfo::_bind_GetHref},
	{"GetHtmlCell", &luna_wrapper_wxHtmlLinkInfo::_bind_GetHtmlCell},
	{"GetTarget", &luna_wrapper_wxHtmlLinkInfo::_bind_GetTarget},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlLinkInfo::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxHtmlLinkInfo::_bind___eq},
	{"getTable", &luna_wrapper_wxHtmlLinkInfo::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlLinkInfo >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlLinkInfo::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlLinkInfo >::enumValues[] = {
	{0,0}
};


