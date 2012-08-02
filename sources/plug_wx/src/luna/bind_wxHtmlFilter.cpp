#include <plug_common.h>

class luna_wrapper_wxHtmlFilter {
public:
	typedef Luna< wxHtmlFilter > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHtmlFilter* ptr= dynamic_cast< wxHtmlFilter* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlFilter >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_CanRead(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxHtmlFilter::CanRead(const wxFSFile & file) const
	static int _bind_CanRead(lua_State *L) {
		if (!_lg_typecheck_CanRead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlFilter::CanRead(const wxFSFile & file) const function, expected prototype:\nbool wxHtmlFilter::CanRead(const wxFSFile & file) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFSFile* file_ptr=dynamic_cast< wxFSFile* >(Luna< wxObject >::check(L,2));
		if( !file_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file in wxHtmlFilter::CanRead function");
		}
		const wxFSFile & file=*file_ptr;

		wxHtmlFilter* self=dynamic_cast< wxHtmlFilter* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlFilter::CanRead(const wxFSFile &) const");
		}
		bool lret = self->CanRead(file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxHtmlFilter::ReadFile(const wxFSFile & file) const
	static int _bind_ReadFile(lua_State *L) {
		if (!_lg_typecheck_ReadFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlFilter::ReadFile(const wxFSFile & file) const function, expected prototype:\nwxString wxHtmlFilter::ReadFile(const wxFSFile & file) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFSFile* file_ptr=dynamic_cast< wxFSFile* >(Luna< wxObject >::check(L,2));
		if( !file_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file in wxHtmlFilter::ReadFile function");
		}
		const wxFSFile & file=*file_ptr;

		wxHtmlFilter* self=dynamic_cast< wxHtmlFilter* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlFilter::ReadFile(const wxFSFile &) const");
		}
		wxString lret = self->ReadFile(file);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxHtmlFilter* LunaTraits< wxHtmlFilter >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxHtmlFilter::CanRead(const wxFSFile & file) const
	// wxString wxHtmlFilter::ReadFile(const wxFSFile & file) const

	// Abstract operators:
}

void LunaTraits< wxHtmlFilter >::_bind_dtor(wxHtmlFilter* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlFilter >::className[] = "wxHtmlFilter";
const char LunaTraits< wxHtmlFilter >::fullName[] = "wxHtmlFilter";
const char LunaTraits< wxHtmlFilter >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlFilter >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxHtmlFilter >::hash = 86837590;
const int LunaTraits< wxHtmlFilter >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlFilter >::methods[] = {
	{"CanRead", &luna_wrapper_wxHtmlFilter::_bind_CanRead},
	{"ReadFile", &luna_wrapper_wxHtmlFilter::_bind_ReadFile},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlFilter >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlFilter::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlFilter >::enumValues[] = {
	{0,0}
};


