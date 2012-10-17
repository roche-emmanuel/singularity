#include <plug_common.h>

class luna_wrapper_wxTextDataObject {
public:
	typedef Luna< wxTextDataObject > luna_t;

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
		wxTextDataObject* ptr= dynamic_cast< wxTextDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextDataObject >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFormatCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAllFormats(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,9988153)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxString wxTextDataObject::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTextDataObject::GetText() const function, expected prototype:\nwxString wxTextDataObject::GetText() const\nClass arguments details:\n");
		}


		wxTextDataObject* self=dynamic_cast< wxTextDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTextDataObject::GetText() const");
		}
		wxString lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// size_t wxTextDataObject::GetTextLength() const
	static int _bind_GetTextLength(lua_State *L) {
		if (!_lg_typecheck_GetTextLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxTextDataObject::GetTextLength() const function, expected prototype:\nsize_t wxTextDataObject::GetTextLength() const\nClass arguments details:\n");
		}


		wxTextDataObject* self=dynamic_cast< wxTextDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxTextDataObject::GetTextLength() const");
		}
		size_t lret = self->GetTextLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxTextDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get)
	static int _bind_GetFormatCount(lua_State *L) {
		if (!_lg_typecheck_GetFormatCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxTextDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) function, expected prototype:\nsize_t wxTextDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxDataObject::Direction dir=luatop>1 ? (wxDataObject::Direction)lua_tointeger(L,2) : wxDataObject::Get;

		wxTextDataObject* self=dynamic_cast< wxTextDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxTextDataObject::GetFormatCount(wxDataObject::Direction)");
		}
		size_t lret = self->GetFormatCount(dir);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxDataFormat & wxTextDataObject::GetFormat() const
	static int _bind_GetFormat(lua_State *L) {
		if (!_lg_typecheck_GetFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxDataFormat & wxTextDataObject::GetFormat() const function, expected prototype:\nconst wxDataFormat & wxTextDataObject::GetFormat() const\nClass arguments details:\n");
		}


		wxTextDataObject* self=dynamic_cast< wxTextDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxDataFormat & wxTextDataObject::GetFormat() const");
		}
		const wxDataFormat* lret = &self->GetFormat();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataFormat >::push(L,lret,false);

		return 1;
	}

	// void wxTextDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	static int _bind_GetAllFormats(lua_State *L) {
		if (!_lg_typecheck_GetAllFormats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const function, expected prototype:\nvoid wxTextDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const\nClass arguments details:\narg 1 ID = 9988153\n");
		}

		int luatop = lua_gettop(L);

		wxDataFormat* formats=(Luna< wxDataFormat >::check(L,2));
		wxDataObject::Direction dir=luatop>2 ? (wxDataObject::Direction)lua_tointeger(L,3) : wxDataObject::Get;

		wxTextDataObject* self=dynamic_cast< wxTextDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextDataObject::GetAllFormats(wxDataFormat *, wxDataObject::Direction) const");
		}
		self->GetAllFormats(formats, dir);

		return 0;
	}

	// void wxTextDataObject::SetText(const wxString & strText)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextDataObject::SetText(const wxString & strText) function, expected prototype:\nvoid wxTextDataObject::SetText(const wxString & strText)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString strText(lua_tostring(L,2),lua_objlen(L,2));

		wxTextDataObject* self=dynamic_cast< wxTextDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextDataObject::SetText(const wxString &)");
		}
		self->SetText(strText);

		return 0;
	}


	// Operator binds:

};

wxTextDataObject* LunaTraits< wxTextDataObject >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxTextDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const

	// Abstract operators:
}

void LunaTraits< wxTextDataObject >::_bind_dtor(wxTextDataObject* obj) {
	delete obj;
}

const char LunaTraits< wxTextDataObject >::className[] = "wxTextDataObject";
const char LunaTraits< wxTextDataObject >::fullName[] = "wxTextDataObject";
const char LunaTraits< wxTextDataObject >::moduleName[] = "wx";
const char* LunaTraits< wxTextDataObject >::parents[] = {"wx.wxDataObjectSimple", 0};
const int LunaTraits< wxTextDataObject >::hash = 61559346;
const int LunaTraits< wxTextDataObject >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxTextDataObject >::methods[] = {
	{"GetText", &luna_wrapper_wxTextDataObject::_bind_GetText},
	{"GetTextLength", &luna_wrapper_wxTextDataObject::_bind_GetTextLength},
	{"GetFormatCount", &luna_wrapper_wxTextDataObject::_bind_GetFormatCount},
	{"GetFormat", &luna_wrapper_wxTextDataObject::_bind_GetFormat},
	{"GetAllFormats", &luna_wrapper_wxTextDataObject::_bind_GetAllFormats},
	{"SetText", &luna_wrapper_wxTextDataObject::_bind_SetText},
	{"__eq", &luna_wrapper_wxTextDataObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextDataObject >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxTextDataObject::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextDataObject >::enumValues[] = {
	{0,0}
};


