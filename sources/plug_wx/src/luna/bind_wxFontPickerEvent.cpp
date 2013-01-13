#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFontPickerEvent.h>

class luna_wrapper_wxFontPickerEvent {
public:
	typedef Luna< wxFontPickerEvent > luna_t;

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
		//wxFontPickerEvent* ptr= dynamic_cast< wxFontPickerEvent* >(Luna< wxObject >::check(L,1));
		wxFontPickerEvent* ptr= luna_caster< wxObject, wxFontPickerEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFontPickerEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		return true;
	}


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

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFontPickerEvent::wxFontPickerEvent(lua_Table * data, wxObject * generator, int id, const wxFont & font)
	static wxFontPickerEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontPickerEvent::wxFontPickerEvent(lua_Table * data, wxObject * generator, int id, const wxFont & font) function, expected prototype:\nwxFontPickerEvent::wxFontPickerEvent(lua_Table * data, wxObject * generator, int id, const wxFont & font)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 56813631\n");
		}

		wxObject* generator=(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,4));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFontPickerEvent::wxFontPickerEvent function");
		}
		const wxFont & font=*font_ptr;

		return new wrapper_wxFontPickerEvent(L,NULL, generator, id, font);
	}


	// Function binds:
	// wxFont wxFontPickerEvent::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxFontPickerEvent::GetFont() const function, expected prototype:\nwxFont wxFontPickerEvent::GetFont() const\nClass arguments details:\n");
		}


		wxFontPickerEvent* self=Luna< wxObject >::checkSubType< wxFontPickerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxFontPickerEvent::GetFont() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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

		const wxFont* f_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !f_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg f in wxFontPickerEvent::SetFont function");
		}
		const wxFont & f=*f_ptr;

		wxFontPickerEvent* self=Luna< wxObject >::checkSubType< wxFontPickerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontPickerEvent::SetFont(const wxFont &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetFont(f);

		return 0;
	}

	// wxClassInfo * wxFontPickerEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFontPickerEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFontPickerEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxFontPickerEvent* self=Luna< wxObject >::checkSubType< wxFontPickerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFontPickerEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxFontPickerEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxFontPickerEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxFontPickerEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxFontPickerEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxFontPickerEvent* self=Luna< wxObject >::checkSubType< wxFontPickerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxFontPickerEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxFontPickerEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxFontPickerEvent* LunaTraits< wxFontPickerEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFontPickerEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
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
	{"base_GetClassInfo", &luna_wrapper_wxFontPickerEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxFontPickerEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxFontPickerEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxFontPickerEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontPickerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxFontPickerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontPickerEvent >::enumValues[] = {
	{0,0}
};


