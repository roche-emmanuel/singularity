#include <plug_common.h>

class luna_wrapper_wxBoxSizer {
public:
	typedef Luna< wxBoxSizer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxBoxSizer* ptr= dynamic_cast< wxBoxSizer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBoxSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBoxSizer::wxBoxSizer(int orient)
	static wxBoxSizer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBoxSizer::wxBoxSizer(int orient) function, expected prototype:\nwxBoxSizer::wxBoxSizer(int orient)\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,1);

		return new wxBoxSizer(orient);
	}


	// Function binds:
	// wxSizerItem * wxBoxSizer::AddSpacer(int size)
	static int _bind_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_AddSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxBoxSizer::AddSpacer(int size) function, expected prototype:\nwxSizerItem * wxBoxSizer::AddSpacer(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		wxBoxSizer* self=dynamic_cast< wxBoxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxBoxSizer::AddSpacer(int)");
		}
		wxSizerItem * lret = self->AddSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSize wxBoxSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxBoxSizer::CalcMin() function, expected prototype:\nwxSize wxBoxSizer::CalcMin()\nClass arguments details:\n");
		}


		wxBoxSizer* self=dynamic_cast< wxBoxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxBoxSizer::CalcMin()");
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxBoxSizer::GetOrientation() const
	static int _bind_GetOrientation(lua_State *L) {
		if (!_lg_typecheck_GetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBoxSizer::GetOrientation() const function, expected prototype:\nint wxBoxSizer::GetOrientation() const\nClass arguments details:\n");
		}


		wxBoxSizer* self=dynamic_cast< wxBoxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBoxSizer::GetOrientation() const");
		}
		int lret = self->GetOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxBoxSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBoxSizer::RecalcSizes() function, expected prototype:\nvoid wxBoxSizer::RecalcSizes()\nClass arguments details:\n");
		}


		wxBoxSizer* self=dynamic_cast< wxBoxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBoxSizer::RecalcSizes()");
		}
		self->RecalcSizes();

		return 0;
	}


	// Operator binds:

};

wxBoxSizer* LunaTraits< wxBoxSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBoxSizer::_bind_ctor(L);
}

void LunaTraits< wxBoxSizer >::_bind_dtor(wxBoxSizer* obj) {
	delete obj;
}

const char LunaTraits< wxBoxSizer >::className[] = "wxBoxSizer";
const char LunaTraits< wxBoxSizer >::fullName[] = "wxBoxSizer";
const char LunaTraits< wxBoxSizer >::moduleName[] = "wx";
const char* LunaTraits< wxBoxSizer >::parents[] = {"wx.wxSizer", 0};
const int LunaTraits< wxBoxSizer >::hash = 55858656;
const int LunaTraits< wxBoxSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxBoxSizer >::methods[] = {
	{"AddSpacer", &luna_wrapper_wxBoxSizer::_bind_AddSpacer},
	{"CalcMin", &luna_wrapper_wxBoxSizer::_bind_CalcMin},
	{"GetOrientation", &luna_wrapper_wxBoxSizer::_bind_GetOrientation},
	{"RecalcSizes", &luna_wrapper_wxBoxSizer::_bind_RecalcSizes},
	{0,0}
};

luna_ConverterType LunaTraits< wxBoxSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxBoxSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBoxSizer >::enumValues[] = {
	{0,0}
};


