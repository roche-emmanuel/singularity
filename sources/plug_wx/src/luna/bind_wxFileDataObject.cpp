#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileDataObject.h>

class luna_wrapper_wxFileDataObject {
public:
	typedef Luna< wxFileDataObject > luna_t;

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
		wxFileDataObject* ptr= dynamic_cast< wxFileDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileDataObject >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_AddFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFilenames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxFileDataObject::AddFile(const wxString & file)
	static int _bind_AddFile(lua_State *L) {
		if (!_lg_typecheck_AddFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileDataObject::AddFile(const wxString & file) function, expected prototype:\nvoid wxFileDataObject::AddFile(const wxString & file)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString file(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDataObject* self=dynamic_cast< wxFileDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileDataObject::AddFile(const wxString &)");
		}
		self->AddFile(file);

		return 0;
	}

	// const wxArrayString & wxFileDataObject::GetFilenames() const
	static int _bind_GetFilenames(lua_State *L) {
		if (!_lg_typecheck_GetFilenames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxArrayString & wxFileDataObject::GetFilenames() const function, expected prototype:\nconst wxArrayString & wxFileDataObject::GetFilenames() const\nClass arguments details:\n");
		}


		wxFileDataObject* self=dynamic_cast< wxFileDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxArrayString & wxFileDataObject::GetFilenames() const");
		}
		const wxArrayString* lret = &self->GetFilenames();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFileDataObject* LunaTraits< wxFileDataObject >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
}

void LunaTraits< wxFileDataObject >::_bind_dtor(wxFileDataObject* obj) {
	delete obj;
}

const char LunaTraits< wxFileDataObject >::className[] = "wxFileDataObject";
const char LunaTraits< wxFileDataObject >::fullName[] = "wxFileDataObject";
const char LunaTraits< wxFileDataObject >::moduleName[] = "wx";
const char* LunaTraits< wxFileDataObject >::parents[] = {"wx.wxDataObjectSimple", 0};
const int LunaTraits< wxFileDataObject >::hash = 82680185;
const int LunaTraits< wxFileDataObject >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxFileDataObject >::methods[] = {
	{"AddFile", &luna_wrapper_wxFileDataObject::_bind_AddFile},
	{"GetFilenames", &luna_wrapper_wxFileDataObject::_bind_GetFilenames},
	{"__eq", &luna_wrapper_wxFileDataObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileDataObject >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxFileDataObject::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileDataObject >::enumValues[] = {
	{0,0}
};


