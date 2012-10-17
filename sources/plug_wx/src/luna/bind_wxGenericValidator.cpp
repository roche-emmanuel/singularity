#include <plug_common.h>

class luna_wrapper_wxGenericValidator {
public:
	typedef Luna< wxGenericValidator > luna_t;

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
		wxGenericValidator* ptr= dynamic_cast< wxGenericValidator* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGenericValidator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,47342076)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,57497519)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,53530938)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGenericValidator::wxGenericValidator(const wxGenericValidator & validator)
	static wxGenericValidator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(const wxGenericValidator & validator) function, expected prototype:\nwxGenericValidator::wxGenericValidator(const wxGenericValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxGenericValidator* validator_ptr=dynamic_cast< wxGenericValidator* >(Luna< wxObject >::check(L,1));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxGenericValidator::wxGenericValidator function");
		}
		const wxGenericValidator & validator=*validator_ptr;

		return new wxGenericValidator(validator);
	}

	// wxGenericValidator::wxGenericValidator(bool * valPtr)
	static wxGenericValidator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(bool * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(bool * valPtr)\nClass arguments details:\n");
		}

		bool valPtr=(bool)(lua_toboolean(L,1)==1);

		return new wxGenericValidator(&valPtr);
	}

	// wxGenericValidator::wxGenericValidator(wxString * valPtr)
	static wxGenericValidator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(wxString * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(wxString * valPtr)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString valPtr(lua_tostring(L,1),lua_objlen(L,1));

		return new wxGenericValidator(&valPtr);
	}

	// wxGenericValidator::wxGenericValidator(int * valPtr)
	static wxGenericValidator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(int * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(int * valPtr)\nClass arguments details:\n");
		}

		int valPtr=(int)lua_tointeger(L,1);

		return new wxGenericValidator(&valPtr);
	}

	// wxGenericValidator::wxGenericValidator(wxArrayInt * valPtr)
	static wxGenericValidator* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(wxArrayInt * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(wxArrayInt * valPtr)\nClass arguments details:\narg 1 ID = 47342076\n");
		}

		wxArrayInt* valPtr=(Luna< wxArrayInt >::check(L,1));

		return new wxGenericValidator(valPtr);
	}

	// wxGenericValidator::wxGenericValidator(wxDateTime * valPtr)
	static wxGenericValidator* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(wxDateTime * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(wxDateTime * valPtr)\nClass arguments details:\narg 1 ID = 57497519\n");
		}

		wxDateTime* valPtr=(Luna< wxDateTime >::check(L,1));

		return new wxGenericValidator(valPtr);
	}

	// wxGenericValidator::wxGenericValidator(wxFileName * valPtr)
	static wxGenericValidator* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(wxFileName * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(wxFileName * valPtr)\nClass arguments details:\narg 1 ID = 53530938\n");
		}

		wxFileName* valPtr=(Luna< wxFileName >::check(L,1));

		return new wxGenericValidator(valPtr);
	}

	// wxGenericValidator::wxGenericValidator(float * valPtr)
	static wxGenericValidator* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(float * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(float * valPtr)\nClass arguments details:\n");
		}

		float valPtr=(float)lua_tonumber(L,1);

		return new wxGenericValidator(&valPtr);
	}

	// wxGenericValidator::wxGenericValidator(double * valPtr)
	static wxGenericValidator* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(double * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(double * valPtr)\nClass arguments details:\n");
		}

		double valPtr=(double)lua_tonumber(L,1);

		return new wxGenericValidator(&valPtr);
	}

	// Overload binder for wxGenericValidator::wxGenericValidator
	static wxGenericValidator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);

		luaL_error(L, "error in function wxGenericValidator, cannot match any of the overloads for function wxGenericValidator:\n  wxGenericValidator(const wxGenericValidator &)\n  wxGenericValidator(bool *)\n  wxGenericValidator(wxString *)\n  wxGenericValidator(int *)\n  wxGenericValidator(wxArrayInt *)\n  wxGenericValidator(wxDateTime *)\n  wxGenericValidator(wxFileName *)\n  wxGenericValidator(float *)\n  wxGenericValidator(double *)\n");
		return NULL;
	}


	// Function binds:
	// wxObject * wxGenericValidator::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxGenericValidator::Clone() const function, expected prototype:\nwxObject * wxGenericValidator::Clone() const\nClass arguments details:\n");
		}


		wxGenericValidator* self=dynamic_cast< wxGenericValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxObject * wxGenericValidator::Clone() const");
		}
		wxObject * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxGenericValidator::TransferFromWindow()
	static int _bind_TransferFromWindow(lua_State *L) {
		if (!_lg_typecheck_TransferFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGenericValidator::TransferFromWindow() function, expected prototype:\nbool wxGenericValidator::TransferFromWindow()\nClass arguments details:\n");
		}


		wxGenericValidator* self=dynamic_cast< wxGenericValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGenericValidator::TransferFromWindow()");
		}
		bool lret = self->TransferFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericValidator::TransferToWindow()
	static int _bind_TransferToWindow(lua_State *L) {
		if (!_lg_typecheck_TransferToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGenericValidator::TransferToWindow() function, expected prototype:\nbool wxGenericValidator::TransferToWindow()\nClass arguments details:\n");
		}


		wxGenericValidator* self=dynamic_cast< wxGenericValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGenericValidator::TransferToWindow()");
		}
		bool lret = self->TransferToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxGenericValidator* LunaTraits< wxGenericValidator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGenericValidator::_bind_ctor(L);
}

void LunaTraits< wxGenericValidator >::_bind_dtor(wxGenericValidator* obj) {
	delete obj;
}

const char LunaTraits< wxGenericValidator >::className[] = "wxGenericValidator";
const char LunaTraits< wxGenericValidator >::fullName[] = "wxGenericValidator";
const char LunaTraits< wxGenericValidator >::moduleName[] = "wx";
const char* LunaTraits< wxGenericValidator >::parents[] = {"wx.wxValidator", 0};
const int LunaTraits< wxGenericValidator >::hash = 76322898;
const int LunaTraits< wxGenericValidator >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxGenericValidator >::methods[] = {
	{"Clone", &luna_wrapper_wxGenericValidator::_bind_Clone},
	{"TransferFromWindow", &luna_wrapper_wxGenericValidator::_bind_TransferFromWindow},
	{"TransferToWindow", &luna_wrapper_wxGenericValidator::_bind_TransferToWindow},
	{"__eq", &luna_wrapper_wxGenericValidator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGenericValidator >::converters[] = {
	{"wxObject", &luna_wrapper_wxGenericValidator::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGenericValidator >::enumValues[] = {
	{0,0}
};


