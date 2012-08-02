#include <plug_common.h>

class luna_wrapper_wxTextCompleterSimple {
public:
	typedef Luna< wxTextCompleterSimple > luna_t;

	// Derived class converters:
	static int _cast_from_wxTextCompleter(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTextCompleterSimple* ptr= dynamic_cast< wxTextCompleterSimple* >(Luna< wxTextCompleter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextCompleterSimple >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetCompletions(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,59507769) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxTextCompleterSimple::GetCompletions(const wxString & prefix, wxArrayString & res)
	static int _bind_GetCompletions(lua_State *L) {
		if (!_lg_typecheck_GetCompletions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextCompleterSimple::GetCompletions(const wxString & prefix, wxArrayString & res) function, expected prototype:\nvoid wxTextCompleterSimple::GetCompletions(const wxString & prefix, wxArrayString & res)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 59507769\n");
		}

		wxString prefix(lua_tostring(L,2),lua_objlen(L,2));
		wxArrayString* res_ptr=(Luna< wxArrayString >::check(L,3));
		if( !res_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg res in wxTextCompleterSimple::GetCompletions function");
		}
		wxArrayString & res=*res_ptr;

		wxTextCompleterSimple* self=dynamic_cast< wxTextCompleterSimple* >(Luna< wxTextCompleter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextCompleterSimple::GetCompletions(const wxString &, wxArrayString &)");
		}
		self->GetCompletions(prefix, res);

		return 0;
	}


	// Operator binds:

};

wxTextCompleterSimple* LunaTraits< wxTextCompleterSimple >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxTextCompleterSimple::GetCompletions(const wxString & prefix, wxArrayString & res)
	// bool wxTextCompleter::Start(const wxString & prefix)
	// wxString wxTextCompleter::GetNext()

	// Abstract operators:
}

void LunaTraits< wxTextCompleterSimple >::_bind_dtor(wxTextCompleterSimple* obj) {
	delete obj;
}

const char LunaTraits< wxTextCompleterSimple >::className[] = "wxTextCompleterSimple";
const char LunaTraits< wxTextCompleterSimple >::fullName[] = "wxTextCompleterSimple";
const char LunaTraits< wxTextCompleterSimple >::moduleName[] = "wx";
const char* LunaTraits< wxTextCompleterSimple >::parents[] = {"wx.wxTextCompleter", 0};
const int LunaTraits< wxTextCompleterSimple >::hash = 23277280;
const int LunaTraits< wxTextCompleterSimple >::uniqueIDs[] = {92690309,0};

luna_RegType LunaTraits< wxTextCompleterSimple >::methods[] = {
	{"GetCompletions", &luna_wrapper_wxTextCompleterSimple::_bind_GetCompletions},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextCompleterSimple >::converters[] = {
	{"wxTextCompleter", &luna_wrapper_wxTextCompleterSimple::_cast_from_wxTextCompleter},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextCompleterSimple >::enumValues[] = {
	{0,0}
};


