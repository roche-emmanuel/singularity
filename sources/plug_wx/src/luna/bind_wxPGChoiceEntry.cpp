#include <plug_common.h>

class luna_wrapper_wxPGChoiceEntry {
public:
	typedef Luna< wxPGChoiceEntry > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPGChoiceEntry* ptr= dynamic_cast< wxPGChoiceEntry* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPGChoiceEntry >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPGChoiceEntry::wxPGChoiceEntry()
	static wxPGChoiceEntry* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGChoiceEntry::wxPGChoiceEntry() function, expected prototype:\nwxPGChoiceEntry::wxPGChoiceEntry()\nClass arguments details:\n");
		}


		return new wxPGChoiceEntry();
	}


	// Function binds:
	// void wxPGChoiceEntry::SetValue(int value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGChoiceEntry::SetValue(int value) function, expected prototype:\nvoid wxPGChoiceEntry::SetValue(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		wxPGChoiceEntry* self=dynamic_cast< wxPGChoiceEntry* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGChoiceEntry::SetValue(int)");
		}
		self->SetValue(value);

		return 0;
	}

	// int wxPGChoiceEntry::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPGChoiceEntry::GetValue() const function, expected prototype:\nint wxPGChoiceEntry::GetValue() const\nClass arguments details:\n");
		}


		wxPGChoiceEntry* self=dynamic_cast< wxPGChoiceEntry* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPGChoiceEntry::GetValue() const");
		}
		int lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxPGChoiceEntry* LunaTraits< wxPGChoiceEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPGChoiceEntry::_bind_ctor(L);
}

void LunaTraits< wxPGChoiceEntry >::_bind_dtor(wxPGChoiceEntry* obj) {
	delete obj;
}

const char LunaTraits< wxPGChoiceEntry >::className[] = "wxPGChoiceEntry";
const char LunaTraits< wxPGChoiceEntry >::fullName[] = "wxPGChoiceEntry";
const char LunaTraits< wxPGChoiceEntry >::moduleName[] = "wx";
const char* LunaTraits< wxPGChoiceEntry >::parents[] = {"wx.wxPGCell", 0};
const int LunaTraits< wxPGChoiceEntry >::hash = 62441136;
const int LunaTraits< wxPGChoiceEntry >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPGChoiceEntry >::methods[] = {
	{"SetValue", &luna_wrapper_wxPGChoiceEntry::_bind_SetValue},
	{"GetValue", &luna_wrapper_wxPGChoiceEntry::_bind_GetValue},
	{0,0}
};

luna_ConverterType LunaTraits< wxPGChoiceEntry >::converters[] = {
	{"wxObject", &luna_wrapper_wxPGChoiceEntry::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGChoiceEntry >::enumValues[] = {
	{0,0}
};


