#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMetafile.h>

class luna_wrapper_wxMetafile {
public:
	typedef Luna< wxMetafile > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//wxMetafile* ptr= dynamic_cast< wxMetafile* >(Luna< wxObject >::check(L,1));
		wxMetafile* ptr= luna_caster< wxObject, wxMetafile >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMetafile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Play(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClipboard(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMetafile::wxMetafile(const wxString & filename = wxEmptyString)
	static wxMetafile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMetafile::wxMetafile(const wxString & filename = wxEmptyString) function, expected prototype:\nwxMetafile::wxMetafile(const wxString & filename = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));

		return new wxMetafile(filename);
	}

	// wxMetafile::wxMetafile(lua_Table * data, const wxString & filename = wxEmptyString)
	static wxMetafile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMetafile::wxMetafile(lua_Table * data, const wxString & filename = wxEmptyString) function, expected prototype:\nwxMetafile::wxMetafile(lua_Table * data, const wxString & filename = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxMetafile(L,NULL, filename);
	}

	// Overload binder for wxMetafile::wxMetafile
	static wxMetafile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMetafile, cannot match any of the overloads for function wxMetafile:\n  wxMetafile(const wxString &)\n  wxMetafile(lua_Table *, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxMetafile::IsOk()
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMetafile::IsOk() function, expected prototype:\nbool wxMetafile::IsOk()\nClass arguments details:\n");
		}


		wxMetafile* self=Luna< wxObject >::checkSubType< wxMetafile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMetafile::IsOk(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMetafile::Play(wxDC * dc)
	static int _bind_Play(lua_State *L) {
		if (!_lg_typecheck_Play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMetafile::Play(wxDC * dc) function, expected prototype:\nbool wxMetafile::Play(wxDC * dc)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDC* dc=(Luna< wxObject >::checkSubType< wxDC >(L,2));

		wxMetafile* self=Luna< wxObject >::checkSubType< wxMetafile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMetafile::Play(wxDC *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->Play(dc);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMetafile::SetClipboard(int width = 0, int height = 0)
	static int _bind_SetClipboard(lua_State *L) {
		if (!_lg_typecheck_SetClipboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMetafile::SetClipboard(int width = 0, int height = 0) function, expected prototype:\nbool wxMetafile::SetClipboard(int width = 0, int height = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		int height=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxMetafile* self=Luna< wxObject >::checkSubType< wxMetafile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMetafile::SetClipboard(int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->SetClipboard(width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxMetafile::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMetafile::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMetafile::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxMetafile* self=Luna< wxObject >::checkSubType< wxMetafile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMetafile::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxMetafile::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxMetafile* LunaTraits< wxMetafile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMetafile::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxMetafile >::_bind_dtor(wxMetafile* obj) {
	delete obj;
}

const char LunaTraits< wxMetafile >::className[] = "wxMetafile";
const char LunaTraits< wxMetafile >::fullName[] = "wxMetafile";
const char LunaTraits< wxMetafile >::moduleName[] = "wx";
const char* LunaTraits< wxMetafile >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxMetafile >::hash = 17861639;
const int LunaTraits< wxMetafile >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMetafile >::methods[] = {
	{"IsOk", &luna_wrapper_wxMetafile::_bind_IsOk},
	{"Play", &luna_wrapper_wxMetafile::_bind_Play},
	{"SetClipboard", &luna_wrapper_wxMetafile::_bind_SetClipboard},
	{"base_GetClassInfo", &luna_wrapper_wxMetafile::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxMetafile::_bind___eq},
	{"getTable", &luna_wrapper_wxMetafile::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMetafile >::converters[] = {
	{"wxObject", &luna_wrapper_wxMetafile::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMetafile >::enumValues[] = {
	{0,0}
};


