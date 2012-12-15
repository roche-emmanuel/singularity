#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlHelpData.h>

class luna_wrapper_wxHtmlHelpData {
public:
	typedef Luna< wxHtmlHelpData > luna_t;

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
		//wxHtmlHelpData* ptr= dynamic_cast< wxHtmlHelpData* >(Luna< wxObject >::check(L,1));
		wxHtmlHelpData* ptr= luna_caster< wxObject, wxHtmlHelpData >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlHelpData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddBook(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindPageById(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindPageByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBookRecArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContentsArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndexArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTempDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlHelpData::wxHtmlHelpData()
	static wxHtmlHelpData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpData::wxHtmlHelpData() function, expected prototype:\nwxHtmlHelpData::wxHtmlHelpData()\nClass arguments details:\n");
		}


		return new wxHtmlHelpData();
	}

	// wxHtmlHelpData::wxHtmlHelpData(lua_Table * data)
	static wxHtmlHelpData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpData::wxHtmlHelpData(lua_Table * data) function, expected prototype:\nwxHtmlHelpData::wxHtmlHelpData(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxHtmlHelpData(L,NULL);
	}

	// Overload binder for wxHtmlHelpData::wxHtmlHelpData
	static wxHtmlHelpData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlHelpData, cannot match any of the overloads for function wxHtmlHelpData:\n  wxHtmlHelpData()\n  wxHtmlHelpData(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxHtmlHelpData::AddBook(const wxString & book_url)
	static int _bind_AddBook(lua_State *L) {
		if (!_lg_typecheck_AddBook(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpData::AddBook(const wxString & book_url) function, expected prototype:\nbool wxHtmlHelpData::AddBook(const wxString & book_url)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString book_url(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpData::AddBook(const wxString &)");
		}
		bool lret = self->AddBook(book_url);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxHtmlHelpData::FindPageById(int id)
	static int _bind_FindPageById(lua_State *L) {
		if (!_lg_typecheck_FindPageById(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlHelpData::FindPageById(int id) function, expected prototype:\nwxString wxHtmlHelpData::FindPageById(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlHelpData::FindPageById(int)");
		}
		wxString lret = self->FindPageById(id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxHtmlHelpData::FindPageByName(const wxString & page)
	static int _bind_FindPageByName(lua_State *L) {
		if (!_lg_typecheck_FindPageByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlHelpData::FindPageByName(const wxString & page) function, expected prototype:\nwxString wxHtmlHelpData::FindPageByName(const wxString & page)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString page(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlHelpData::FindPageByName(const wxString &)");
		}
		wxString lret = self->FindPageByName(page);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxHtmlBookRecArray & wxHtmlHelpData::GetBookRecArray() const
	static int _bind_GetBookRecArray(lua_State *L) {
		if (!_lg_typecheck_GetBookRecArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxHtmlBookRecArray & wxHtmlHelpData::GetBookRecArray() const function, expected prototype:\nconst wxHtmlBookRecArray & wxHtmlHelpData::GetBookRecArray() const\nClass arguments details:\n");
		}


		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxHtmlBookRecArray & wxHtmlHelpData::GetBookRecArray() const");
		}
		const wxHtmlBookRecArray & lret = self->GetBookRecArray();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'const wxHtmlBookRecArray &'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// const wxHtmlHelpDataItems & wxHtmlHelpData::GetContentsArray() const
	static int _bind_GetContentsArray(lua_State *L) {
		if (!_lg_typecheck_GetContentsArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxHtmlHelpDataItems & wxHtmlHelpData::GetContentsArray() const function, expected prototype:\nconst wxHtmlHelpDataItems & wxHtmlHelpData::GetContentsArray() const\nClass arguments details:\n");
		}


		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxHtmlHelpDataItems & wxHtmlHelpData::GetContentsArray() const");
		}
		const wxHtmlHelpDataItems & lret = self->GetContentsArray();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'const wxHtmlHelpDataItems &'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// const wxHtmlHelpDataItems & wxHtmlHelpData::GetIndexArray() const
	static int _bind_GetIndexArray(lua_State *L) {
		if (!_lg_typecheck_GetIndexArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxHtmlHelpDataItems & wxHtmlHelpData::GetIndexArray() const function, expected prototype:\nconst wxHtmlHelpDataItems & wxHtmlHelpData::GetIndexArray() const\nClass arguments details:\n");
		}


		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxHtmlHelpDataItems & wxHtmlHelpData::GetIndexArray() const");
		}
		const wxHtmlHelpDataItems & lret = self->GetIndexArray();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'const wxHtmlHelpDataItems &'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// void wxHtmlHelpData::SetTempDir(const wxString & path)
	static int _bind_SetTempDir(lua_State *L) {
		if (!_lg_typecheck_SetTempDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpData::SetTempDir(const wxString & path) function, expected prototype:\nvoid wxHtmlHelpData::SetTempDir(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpData::SetTempDir(const wxString &)");
		}
		self->SetTempDir(path);

		return 0;
	}

	// wxClassInfo * wxHtmlHelpData::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlHelpData::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlHelpData::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlHelpData::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxHtmlHelpData::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHtmlHelpData* LunaTraits< wxHtmlHelpData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlHelpData::_bind_ctor(L);
}

void LunaTraits< wxHtmlHelpData >::_bind_dtor(wxHtmlHelpData* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlHelpData >::className[] = "wxHtmlHelpData";
const char LunaTraits< wxHtmlHelpData >::fullName[] = "wxHtmlHelpData";
const char LunaTraits< wxHtmlHelpData >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlHelpData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxHtmlHelpData >::hash = 21431065;
const int LunaTraits< wxHtmlHelpData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlHelpData >::methods[] = {
	{"AddBook", &luna_wrapper_wxHtmlHelpData::_bind_AddBook},
	{"FindPageById", &luna_wrapper_wxHtmlHelpData::_bind_FindPageById},
	{"FindPageByName", &luna_wrapper_wxHtmlHelpData::_bind_FindPageByName},
	{"GetBookRecArray", &luna_wrapper_wxHtmlHelpData::_bind_GetBookRecArray},
	{"GetContentsArray", &luna_wrapper_wxHtmlHelpData::_bind_GetContentsArray},
	{"GetIndexArray", &luna_wrapper_wxHtmlHelpData::_bind_GetIndexArray},
	{"SetTempDir", &luna_wrapper_wxHtmlHelpData::_bind_SetTempDir},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlHelpData::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxHtmlHelpData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlHelpData >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlHelpData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlHelpData >::enumValues[] = {
	{0,0}
};


