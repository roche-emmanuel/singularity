#include <plug_common.h>

#include <luna/wrappers/wrapper_wxURLDataObject.h>

class luna_wrapper_wxURLDataObject {
public:
	typedef Luna< wxURLDataObject > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,55398761) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataObject*)");
		}

		wxDataObject* rhs =(Luna< wxDataObject >::check(L,2));
		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxDataObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxURLDataObject* ptr= dynamic_cast< wxURLDataObject* >(Luna< wxDataObject >::check(L,1));
		wxURLDataObject* ptr= luna_caster< wxDataObject, wxURLDataObject >::cast(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxURLDataObject >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetURL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxURLDataObject::wxURLDataObject(lua_Table * data, const wxString & url = wxEmptyString)
	static wxURLDataObject* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxURLDataObject::wxURLDataObject(lua_Table * data, const wxString & url = wxEmptyString) function, expected prototype:\nwxURLDataObject::wxURLDataObject(lua_Table * data, const wxString & url = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString url(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxURLDataObject(L,NULL, url);
	}


	// Function binds:
	// wxString wxURLDataObject::GetURL() const
	static int _bind_GetURL(lua_State *L) {
		if (!_lg_typecheck_GetURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxURLDataObject::GetURL() const function, expected prototype:\nwxString wxURLDataObject::GetURL() const\nClass arguments details:\n");
		}


		wxURLDataObject* self=Luna< wxDataObject >::checkSubType< wxURLDataObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxURLDataObject::GetURL() const");
		}
		wxString lret = self->GetURL();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxURLDataObject::SetURL(const wxString & url)
	static int _bind_SetURL(lua_State *L) {
		if (!_lg_typecheck_SetURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxURLDataObject::SetURL(const wxString & url) function, expected prototype:\nvoid wxURLDataObject::SetURL(const wxString & url)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString url(lua_tostring(L,2),lua_objlen(L,2));

		wxURLDataObject* self=Luna< wxDataObject >::checkSubType< wxURLDataObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxURLDataObject::SetURL(const wxString &)");
		}
		self->SetURL(url);

		return 0;
	}


	// Operator binds:

};

wxURLDataObject* LunaTraits< wxURLDataObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxURLDataObject::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxTextDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
}

void LunaTraits< wxURLDataObject >::_bind_dtor(wxURLDataObject* obj) {
	delete obj;
}

const char LunaTraits< wxURLDataObject >::className[] = "wxURLDataObject";
const char LunaTraits< wxURLDataObject >::fullName[] = "wxURLDataObject";
const char LunaTraits< wxURLDataObject >::moduleName[] = "wx";
const char* LunaTraits< wxURLDataObject >::parents[] = {"wx.wxTextDataObject", 0};
const int LunaTraits< wxURLDataObject >::hash = 38994166;
const int LunaTraits< wxURLDataObject >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxURLDataObject >::methods[] = {
	{"GetURL", &luna_wrapper_wxURLDataObject::_bind_GetURL},
	{"SetURL", &luna_wrapper_wxURLDataObject::_bind_SetURL},
	{"__eq", &luna_wrapper_wxURLDataObject::_bind___eq},
	{"getTable", &luna_wrapper_wxURLDataObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxURLDataObject >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxURLDataObject::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxURLDataObject >::enumValues[] = {
	{0,0}
};


