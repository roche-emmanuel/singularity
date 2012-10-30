#include <plug_common.h>

class luna_wrapper_wxRibbonControl {
public:
	typedef Luna< wxRibbonControl > luna_t;

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
		wxRibbonControl* ptr= dynamic_cast< wxRibbonControl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonControl >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRibbonControl* ptr= static_cast< wxRibbonControl* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonControl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>5 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48201749)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSizingContinuous(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNextSmallerSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextSmallerSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextLargerSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextLargerSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Realise(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRibbonControl::wxRibbonControl()
	static wxRibbonControl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonControl::wxRibbonControl() function, expected prototype:\nwxRibbonControl::wxRibbonControl()\nClass arguments details:\n");
		}


		return new wxRibbonControl();
	}

	// wxRibbonControl::wxRibbonControl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxControlNameStr)
	static wxRibbonControl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonControl::wxRibbonControl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxControlNameStr) function, expected prototype:\nwxRibbonControl::wxRibbonControl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxControlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonControl::wxRibbonControl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonControl::wxRibbonControl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0;
		const wxValidator* validator_ptr=luatop>5 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRibbonControl::wxRibbonControl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxRibbonControl(parent, id, pos, size, style, validator, name);
	}

	// Overload binder for wxRibbonControl::wxRibbonControl
	static wxRibbonControl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRibbonControl, cannot match any of the overloads for function wxRibbonControl:\n  wxRibbonControl()\n  wxRibbonControl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxRibbonControl::SetArtProvider(wxRibbonArtProvider * art)
	static int _bind_SetArtProvider(lua_State *L) {
		if (!_lg_typecheck_SetArtProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonControl::SetArtProvider(wxRibbonArtProvider * art) function, expected prototype:\nvoid wxRibbonControl::SetArtProvider(wxRibbonArtProvider * art)\nClass arguments details:\narg 1 ID = 48201749\n");
		}

		wxRibbonArtProvider* art=(Luna< wxRibbonArtProvider >::check(L,2));

		wxRibbonControl* self=dynamic_cast< wxRibbonControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonControl::SetArtProvider(wxRibbonArtProvider *)");
		}
		self->SetArtProvider(art);

		return 0;
	}

	// wxRibbonArtProvider * wxRibbonControl::GetArtProvider() const
	static int _bind_GetArtProvider(lua_State *L) {
		if (!_lg_typecheck_GetArtProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonArtProvider * wxRibbonControl::GetArtProvider() const function, expected prototype:\nwxRibbonArtProvider * wxRibbonControl::GetArtProvider() const\nClass arguments details:\n");
		}


		wxRibbonControl* self=dynamic_cast< wxRibbonControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonArtProvider * wxRibbonControl::GetArtProvider() const");
		}
		wxRibbonArtProvider * lret = self->GetArtProvider();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonArtProvider >::push(L,lret,false);

		return 1;
	}

	// bool wxRibbonControl::IsSizingContinuous() const
	static int _bind_IsSizingContinuous(lua_State *L) {
		if (!_lg_typecheck_IsSizingContinuous(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonControl::IsSizingContinuous() const function, expected prototype:\nbool wxRibbonControl::IsSizingContinuous() const\nClass arguments details:\n");
		}


		wxRibbonControl* self=dynamic_cast< wxRibbonControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonControl::IsSizingContinuous() const");
		}
		bool lret = self->IsSizingContinuous();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize wxRibbonControl::GetNextSmallerSize(wxOrientation direction) const
	static int _bind_GetNextSmallerSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetNextSmallerSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonControl::GetNextSmallerSize(wxOrientation direction) const function, expected prototype:\nwxSize wxRibbonControl::GetNextSmallerSize(wxOrientation direction) const\nClass arguments details:\n");
		}

		wxOrientation direction=(wxOrientation)lua_tointeger(L,2);

		wxRibbonControl* self=dynamic_cast< wxRibbonControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRibbonControl::GetNextSmallerSize(wxOrientation) const");
		}
		wxSize stack_lret = self->GetNextSmallerSize(direction);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonControl::GetNextSmallerSize(wxOrientation direction, wxSize relative_to) const
	static int _bind_GetNextSmallerSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetNextSmallerSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonControl::GetNextSmallerSize(wxOrientation direction, wxSize relative_to) const function, expected prototype:\nwxSize wxRibbonControl::GetNextSmallerSize(wxOrientation direction, wxSize relative_to) const\nClass arguments details:\narg 2 ID = 20268751\n");
		}

		wxOrientation direction=(wxOrientation)lua_tointeger(L,2);
		wxSize* relative_to_ptr=(Luna< wxSize >::check(L,3));
		if( !relative_to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg relative_to in wxRibbonControl::GetNextSmallerSize function");
		}
		wxSize relative_to=*relative_to_ptr;

		wxRibbonControl* self=dynamic_cast< wxRibbonControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRibbonControl::GetNextSmallerSize(wxOrientation, wxSize) const");
		}
		wxSize stack_lret = self->GetNextSmallerSize(direction, relative_to);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxRibbonControl::GetNextSmallerSize
	static int _bind_GetNextSmallerSize(lua_State *L) {
		if (_lg_typecheck_GetNextSmallerSize_overload_1(L)) return _bind_GetNextSmallerSize_overload_1(L);
		if (_lg_typecheck_GetNextSmallerSize_overload_2(L)) return _bind_GetNextSmallerSize_overload_2(L);

		luaL_error(L, "error in function GetNextSmallerSize, cannot match any of the overloads for function GetNextSmallerSize:\n  GetNextSmallerSize(wxOrientation)\n  GetNextSmallerSize(wxOrientation, wxSize)\n");
		return 0;
	}

	// wxSize wxRibbonControl::GetNextLargerSize(wxOrientation direction) const
	static int _bind_GetNextLargerSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetNextLargerSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonControl::GetNextLargerSize(wxOrientation direction) const function, expected prototype:\nwxSize wxRibbonControl::GetNextLargerSize(wxOrientation direction) const\nClass arguments details:\n");
		}

		wxOrientation direction=(wxOrientation)lua_tointeger(L,2);

		wxRibbonControl* self=dynamic_cast< wxRibbonControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRibbonControl::GetNextLargerSize(wxOrientation) const");
		}
		wxSize stack_lret = self->GetNextLargerSize(direction);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonControl::GetNextLargerSize(wxOrientation direction, wxSize relative_to) const
	static int _bind_GetNextLargerSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetNextLargerSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonControl::GetNextLargerSize(wxOrientation direction, wxSize relative_to) const function, expected prototype:\nwxSize wxRibbonControl::GetNextLargerSize(wxOrientation direction, wxSize relative_to) const\nClass arguments details:\narg 2 ID = 20268751\n");
		}

		wxOrientation direction=(wxOrientation)lua_tointeger(L,2);
		wxSize* relative_to_ptr=(Luna< wxSize >::check(L,3));
		if( !relative_to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg relative_to in wxRibbonControl::GetNextLargerSize function");
		}
		wxSize relative_to=*relative_to_ptr;

		wxRibbonControl* self=dynamic_cast< wxRibbonControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRibbonControl::GetNextLargerSize(wxOrientation, wxSize) const");
		}
		wxSize stack_lret = self->GetNextLargerSize(direction, relative_to);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxRibbonControl::GetNextLargerSize
	static int _bind_GetNextLargerSize(lua_State *L) {
		if (_lg_typecheck_GetNextLargerSize_overload_1(L)) return _bind_GetNextLargerSize_overload_1(L);
		if (_lg_typecheck_GetNextLargerSize_overload_2(L)) return _bind_GetNextLargerSize_overload_2(L);

		luaL_error(L, "error in function GetNextLargerSize, cannot match any of the overloads for function GetNextLargerSize:\n  GetNextLargerSize(wxOrientation)\n  GetNextLargerSize(wxOrientation, wxSize)\n");
		return 0;
	}

	// bool wxRibbonControl::Realize()
	static int _bind_Realize(lua_State *L) {
		if (!_lg_typecheck_Realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonControl::Realize() function, expected prototype:\nbool wxRibbonControl::Realize()\nClass arguments details:\n");
		}


		wxRibbonControl* self=dynamic_cast< wxRibbonControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonControl::Realize()");
		}
		bool lret = self->Realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonControl::Realise()
	static int _bind_Realise(lua_State *L) {
		if (!_lg_typecheck_Realise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonControl::Realise() function, expected prototype:\nbool wxRibbonControl::Realise()\nClass arguments details:\n");
		}


		wxRibbonControl* self=dynamic_cast< wxRibbonControl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonControl::Realise()");
		}
		bool lret = self->Realise();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxRibbonControl* LunaTraits< wxRibbonControl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonControl::_bind_ctor(L);
}

void LunaTraits< wxRibbonControl >::_bind_dtor(wxRibbonControl* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonControl >::className[] = "wxRibbonControl";
const char LunaTraits< wxRibbonControl >::fullName[] = "wxRibbonControl";
const char LunaTraits< wxRibbonControl >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonControl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxRibbonControl >::hash = 89903596;
const int LunaTraits< wxRibbonControl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRibbonControl >::methods[] = {
	{"SetArtProvider", &luna_wrapper_wxRibbonControl::_bind_SetArtProvider},
	{"GetArtProvider", &luna_wrapper_wxRibbonControl::_bind_GetArtProvider},
	{"IsSizingContinuous", &luna_wrapper_wxRibbonControl::_bind_IsSizingContinuous},
	{"GetNextSmallerSize", &luna_wrapper_wxRibbonControl::_bind_GetNextSmallerSize},
	{"GetNextLargerSize", &luna_wrapper_wxRibbonControl::_bind_GetNextLargerSize},
	{"Realize", &luna_wrapper_wxRibbonControl::_bind_Realize},
	{"Realise", &luna_wrapper_wxRibbonControl::_bind_Realise},
	{"__eq", &luna_wrapper_wxRibbonControl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonControl >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonControl::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxRibbonControl::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonControl >::enumValues[] = {
	{0,0}
};


