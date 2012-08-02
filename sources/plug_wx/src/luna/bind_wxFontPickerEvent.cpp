#include <plug_common.h>

class luna_wrapper_wxFontPickerEvent {
public:
	typedef Luna< wxFontPickerEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFontPickerEvent* ptr= dynamic_cast< wxFontPickerEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFontPickerEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxFont wxFontPickerEvent::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxFontPickerEvent::GetFont() const function, expected prototype:\nwxFont wxFontPickerEvent::GetFont() const\nClass arguments details:\n");
		}


		wxFontPickerEvent* self=dynamic_cast< wxFontPickerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxFontPickerEvent::GetFont() const");
		}
		wxFont stack_lret = self->GetFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// void wxFontPickerEvent::SetFont(const wxFont & f)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontPickerEvent::SetFont(const wxFont & f) function, expected prototype:\nvoid wxFontPickerEvent::SetFont(const wxFont & f)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* f_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !f_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg f in wxFontPickerEvent::SetFont function");
		}
		const wxFont & f=*f_ptr;

		wxFontPickerEvent* self=dynamic_cast< wxFontPickerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontPickerEvent::SetFont(const wxFont &)");
		}
		self->SetFont(f);

		return 0;
	}


	// Operator binds:

};

wxFontPickerEvent* LunaTraits< wxFontPickerEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxFontPickerEvent >::_bind_dtor(wxFontPickerEvent* obj) {
	delete obj;
}

const char LunaTraits< wxFontPickerEvent >::className[] = "wxFontPickerEvent";
const char LunaTraits< wxFontPickerEvent >::fullName[] = "wxFontPickerEvent";
const char LunaTraits< wxFontPickerEvent >::moduleName[] = "wx";
const char* LunaTraits< wxFontPickerEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxFontPickerEvent >::hash = 43103353;
const int LunaTraits< wxFontPickerEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFontPickerEvent >::methods[] = {
	{"GetFont", &luna_wrapper_wxFontPickerEvent::_bind_GetFont},
	{"SetFont", &luna_wrapper_wxFontPickerEvent::_bind_SetFont},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontPickerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxFontPickerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontPickerEvent >::enumValues[] = {
	{0,0}
};


