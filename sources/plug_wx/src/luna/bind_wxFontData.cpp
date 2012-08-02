#include <plug_common.h>

class luna_wrapper_wxFontData {
public:
	typedef Luna< wxFontData > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFontData* ptr= dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFontData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_EnableEffects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAllowSymbols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChosenFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnableEffects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInitialFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetShowHelp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAllowSymbols(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetChosenFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInitialFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetShowHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFontData::wxFontData()
	static wxFontData* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontData::wxFontData() function, expected prototype:\nwxFontData::wxFontData()\nClass arguments details:\n");
		}


		return new wxFontData();
	}


	// Function binds:
	// void wxFontData::EnableEffects(bool enable)
	static int _bind_EnableEffects(lua_State *L) {
		if (!_lg_typecheck_EnableEffects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontData::EnableEffects(bool enable) function, expected prototype:\nvoid wxFontData::EnableEffects(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontData::EnableEffects(bool)");
		}
		self->EnableEffects(enable);

		return 0;
	}

	// bool wxFontData::GetAllowSymbols() const
	static int _bind_GetAllowSymbols(lua_State *L) {
		if (!_lg_typecheck_GetAllowSymbols(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontData::GetAllowSymbols() const function, expected prototype:\nbool wxFontData::GetAllowSymbols() const\nClass arguments details:\n");
		}


		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontData::GetAllowSymbols() const");
		}
		bool lret = self->GetAllowSymbols();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFont wxFontData::GetChosenFont() const
	static int _bind_GetChosenFont(lua_State *L) {
		if (!_lg_typecheck_GetChosenFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxFontData::GetChosenFont() const function, expected prototype:\nwxFont wxFontData::GetChosenFont() const\nClass arguments details:\n");
		}


		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxFontData::GetChosenFont() const");
		}
		wxFont stack_lret = self->GetChosenFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// const wxColour & wxFontData::GetColour() const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxFontData::GetColour() const function, expected prototype:\nconst wxColour & wxFontData::GetColour() const\nClass arguments details:\n");
		}


		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxFontData::GetColour() const");
		}
		const wxColour* lret = &self->GetColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// bool wxFontData::GetEnableEffects() const
	static int _bind_GetEnableEffects(lua_State *L) {
		if (!_lg_typecheck_GetEnableEffects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontData::GetEnableEffects() const function, expected prototype:\nbool wxFontData::GetEnableEffects() const\nClass arguments details:\n");
		}


		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontData::GetEnableEffects() const");
		}
		bool lret = self->GetEnableEffects();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFont wxFontData::GetInitialFont() const
	static int _bind_GetInitialFont(lua_State *L) {
		if (!_lg_typecheck_GetInitialFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxFontData::GetInitialFont() const function, expected prototype:\nwxFont wxFontData::GetInitialFont() const\nClass arguments details:\n");
		}


		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxFontData::GetInitialFont() const");
		}
		wxFont stack_lret = self->GetInitialFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// bool wxFontData::GetShowHelp() const
	static int _bind_GetShowHelp(lua_State *L) {
		if (!_lg_typecheck_GetShowHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontData::GetShowHelp() const function, expected prototype:\nbool wxFontData::GetShowHelp() const\nClass arguments details:\n");
		}


		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontData::GetShowHelp() const");
		}
		bool lret = self->GetShowHelp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontData::SetAllowSymbols(bool allowSymbols)
	static int _bind_SetAllowSymbols(lua_State *L) {
		if (!_lg_typecheck_SetAllowSymbols(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontData::SetAllowSymbols(bool allowSymbols) function, expected prototype:\nvoid wxFontData::SetAllowSymbols(bool allowSymbols)\nClass arguments details:\n");
		}

		bool allowSymbols=(bool)(lua_toboolean(L,2)==1);

		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontData::SetAllowSymbols(bool)");
		}
		self->SetAllowSymbols(allowSymbols);

		return 0;
	}

	// void wxFontData::SetChosenFont(const wxFont & font)
	static int _bind_SetChosenFont(lua_State *L) {
		if (!_lg_typecheck_SetChosenFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontData::SetChosenFont(const wxFont & font) function, expected prototype:\nvoid wxFontData::SetChosenFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFontData::SetChosenFont function");
		}
		const wxFont & font=*font_ptr;

		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontData::SetChosenFont(const wxFont &)");
		}
		self->SetChosenFont(font);

		return 0;
	}

	// void wxFontData::SetColour(const wxColour & colour)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontData::SetColour(const wxColour & colour) function, expected prototype:\nvoid wxFontData::SetColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxFontData::SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontData::SetColour(const wxColour &)");
		}
		self->SetColour(colour);

		return 0;
	}

	// void wxFontData::SetInitialFont(const wxFont & font)
	static int _bind_SetInitialFont(lua_State *L) {
		if (!_lg_typecheck_SetInitialFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontData::SetInitialFont(const wxFont & font) function, expected prototype:\nvoid wxFontData::SetInitialFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFontData::SetInitialFont function");
		}
		const wxFont & font=*font_ptr;

		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontData::SetInitialFont(const wxFont &)");
		}
		self->SetInitialFont(font);

		return 0;
	}

	// void wxFontData::SetRange(int min, int max)
	static int _bind_SetRange(lua_State *L) {
		if (!_lg_typecheck_SetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontData::SetRange(int min, int max) function, expected prototype:\nvoid wxFontData::SetRange(int min, int max)\nClass arguments details:\n");
		}

		int min=(int)lua_tointeger(L,2);
		int max=(int)lua_tointeger(L,3);

		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontData::SetRange(int, int)");
		}
		self->SetRange(min, max);

		return 0;
	}

	// void wxFontData::SetShowHelp(bool showHelp)
	static int _bind_SetShowHelp(lua_State *L) {
		if (!_lg_typecheck_SetShowHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFontData::SetShowHelp(bool showHelp) function, expected prototype:\nvoid wxFontData::SetShowHelp(bool showHelp)\nClass arguments details:\n");
		}

		bool showHelp=(bool)(lua_toboolean(L,2)==1);

		wxFontData* self=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFontData::SetShowHelp(bool)");
		}
		self->SetShowHelp(showHelp);

		return 0;
	}


	// Operator binds:

};

wxFontData* LunaTraits< wxFontData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFontData::_bind_ctor(L);
}

void LunaTraits< wxFontData >::_bind_dtor(wxFontData* obj) {
	delete obj;
}

const char LunaTraits< wxFontData >::className[] = "wxFontData";
const char LunaTraits< wxFontData >::fullName[] = "wxFontData";
const char LunaTraits< wxFontData >::moduleName[] = "wx";
const char* LunaTraits< wxFontData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFontData >::hash = 49365966;
const int LunaTraits< wxFontData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFontData >::methods[] = {
	{"EnableEffects", &luna_wrapper_wxFontData::_bind_EnableEffects},
	{"GetAllowSymbols", &luna_wrapper_wxFontData::_bind_GetAllowSymbols},
	{"GetChosenFont", &luna_wrapper_wxFontData::_bind_GetChosenFont},
	{"GetColour", &luna_wrapper_wxFontData::_bind_GetColour},
	{"GetEnableEffects", &luna_wrapper_wxFontData::_bind_GetEnableEffects},
	{"GetInitialFont", &luna_wrapper_wxFontData::_bind_GetInitialFont},
	{"GetShowHelp", &luna_wrapper_wxFontData::_bind_GetShowHelp},
	{"SetAllowSymbols", &luna_wrapper_wxFontData::_bind_SetAllowSymbols},
	{"SetChosenFont", &luna_wrapper_wxFontData::_bind_SetChosenFont},
	{"SetColour", &luna_wrapper_wxFontData::_bind_SetColour},
	{"SetInitialFont", &luna_wrapper_wxFontData::_bind_SetInitialFont},
	{"SetRange", &luna_wrapper_wxFontData::_bind_SetRange},
	{"SetShowHelp", &luna_wrapper_wxFontData::_bind_SetShowHelp},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontData >::converters[] = {
	{"wxObject", &luna_wrapper_wxFontData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontData >::enumValues[] = {
	{0,0}
};


