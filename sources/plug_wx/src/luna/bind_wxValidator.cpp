#include <plug_common.h>

class luna_wrapper_wxValidator {
public:
	typedef Luna< wxValidator > luna_t;

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
		wxValidator* ptr= dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxValidator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TransferFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TransferToWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Validate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SuppressBellOnError(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxValidator::wxValidator()
	static wxValidator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxValidator::wxValidator() function, expected prototype:\nwxValidator::wxValidator()\nClass arguments details:\n");
		}


		return new wxValidator();
	}


	// Function binds:
	// wxObject * wxValidator::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxValidator::Clone() const function, expected prototype:\nwxObject * wxValidator::Clone() const\nClass arguments details:\n");
		}


		wxValidator* self=dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxObject * wxValidator::Clone() const");
		}
		wxObject * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxValidator::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxValidator::GetWindow() const function, expected prototype:\nwxWindow * wxValidator::GetWindow() const\nClass arguments details:\n");
		}


		wxValidator* self=dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxValidator::GetWindow() const");
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxValidator::SetWindow(wxWindow * window)
	static int _bind_SetWindow(lua_State *L) {
		if (!_lg_typecheck_SetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxValidator::SetWindow(wxWindow * window) function, expected prototype:\nvoid wxValidator::SetWindow(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxValidator* self=dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxValidator::SetWindow(wxWindow *)");
		}
		self->SetWindow(window);

		return 0;
	}

	// bool wxValidator::TransferFromWindow()
	static int _bind_TransferFromWindow(lua_State *L) {
		if (!_lg_typecheck_TransferFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxValidator::TransferFromWindow() function, expected prototype:\nbool wxValidator::TransferFromWindow()\nClass arguments details:\n");
		}


		wxValidator* self=dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxValidator::TransferFromWindow()");
		}
		bool lret = self->TransferFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxValidator::TransferToWindow()
	static int _bind_TransferToWindow(lua_State *L) {
		if (!_lg_typecheck_TransferToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxValidator::TransferToWindow() function, expected prototype:\nbool wxValidator::TransferToWindow()\nClass arguments details:\n");
		}


		wxValidator* self=dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxValidator::TransferToWindow()");
		}
		bool lret = self->TransferToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxValidator::Validate(wxWindow * parent)
	static int _bind_Validate(lua_State *L) {
		if (!_lg_typecheck_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxValidator::Validate(wxWindow * parent) function, expected prototype:\nbool wxValidator::Validate(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxValidator* self=dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxValidator::Validate(wxWindow *)");
		}
		bool lret = self->Validate(parent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxValidator::SuppressBellOnError(bool suppress = true)
	static int _bind_SuppressBellOnError(lua_State *L) {
		if (!_lg_typecheck_SuppressBellOnError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxValidator::SuppressBellOnError(bool suppress = true) function, expected prototype:\nstatic void wxValidator::SuppressBellOnError(bool suppress = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool suppress=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : true;

		wxValidator::SuppressBellOnError(suppress);

		return 0;
	}


	// Operator binds:

};

wxValidator* LunaTraits< wxValidator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxValidator::_bind_ctor(L);
}

void LunaTraits< wxValidator >::_bind_dtor(wxValidator* obj) {
	delete obj;
}

const char LunaTraits< wxValidator >::className[] = "wxValidator";
const char LunaTraits< wxValidator >::fullName[] = "wxValidator";
const char LunaTraits< wxValidator >::moduleName[] = "wx";
const char* LunaTraits< wxValidator >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxValidator >::hash = 48897359;
const int LunaTraits< wxValidator >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxValidator >::methods[] = {
	{"Clone", &luna_wrapper_wxValidator::_bind_Clone},
	{"GetWindow", &luna_wrapper_wxValidator::_bind_GetWindow},
	{"SetWindow", &luna_wrapper_wxValidator::_bind_SetWindow},
	{"TransferFromWindow", &luna_wrapper_wxValidator::_bind_TransferFromWindow},
	{"TransferToWindow", &luna_wrapper_wxValidator::_bind_TransferToWindow},
	{"Validate", &luna_wrapper_wxValidator::_bind_Validate},
	{"SuppressBellOnError", &luna_wrapper_wxValidator::_bind_SuppressBellOnError},
	{"__eq", &luna_wrapper_wxValidator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxValidator >::converters[] = {
	{"wxObject", &luna_wrapper_wxValidator::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxValidator >::enumValues[] = {
	{0,0}
};


