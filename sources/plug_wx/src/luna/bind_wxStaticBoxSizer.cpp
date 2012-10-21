#include <plug_common.h>

class luna_wrapper_wxStaticBoxSizer {
public:
	typedef Luna< wxStaticBoxSizer > luna_t;

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
		wxStaticBoxSizer* ptr= dynamic_cast< wxStaticBoxSizer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStaticBoxSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxStaticBox* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetStaticBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
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
	// wxStaticBoxSizer::wxStaticBoxSizer(wxStaticBox * box, int orient)
	static wxStaticBoxSizer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticBoxSizer::wxStaticBoxSizer(wxStaticBox * box, int orient) function, expected prototype:\nwxStaticBoxSizer::wxStaticBoxSizer(wxStaticBox * box, int orient)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxStaticBox* box=dynamic_cast< wxStaticBox* >(Luna< wxObject >::check(L,1));
		int orient=(int)lua_tointeger(L,2);

		return new wxStaticBoxSizer(box, orient);
	}

	// wxStaticBoxSizer::wxStaticBoxSizer(int orient, wxWindow * parent, const wxString & label = wxEmptyString)
	static wxStaticBoxSizer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticBoxSizer::wxStaticBoxSizer(int orient, wxWindow * parent, const wxString & label = wxEmptyString) function, expected prototype:\nwxStaticBoxSizer::wxStaticBoxSizer(int orient, wxWindow * parent, const wxString & label = wxEmptyString)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int orient=(int)lua_tointeger(L,1);
		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		return new wxStaticBoxSizer(orient, parent, label);
	}

	// Overload binder for wxStaticBoxSizer::wxStaticBoxSizer
	static wxStaticBoxSizer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxStaticBoxSizer, cannot match any of the overloads for function wxStaticBoxSizer:\n  wxStaticBoxSizer(wxStaticBox *, int)\n  wxStaticBoxSizer(int, wxWindow *, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxStaticBox * wxStaticBoxSizer::GetStaticBox() const
	static int _bind_GetStaticBox(lua_State *L) {
		if (!_lg_typecheck_GetStaticBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticBox * wxStaticBoxSizer::GetStaticBox() const function, expected prototype:\nwxStaticBox * wxStaticBoxSizer::GetStaticBox() const\nClass arguments details:\n");
		}


		wxStaticBoxSizer* self=dynamic_cast< wxStaticBoxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStaticBox * wxStaticBoxSizer::GetStaticBox() const");
		}
		wxStaticBox * lret = self->GetStaticBox();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStaticBox >::push(L,lret,false);

		return 1;
	}

	// wxSize wxStaticBoxSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxStaticBoxSizer::CalcMin() function, expected prototype:\nwxSize wxStaticBoxSizer::CalcMin()\nClass arguments details:\n");
		}


		wxStaticBoxSizer* self=dynamic_cast< wxStaticBoxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxStaticBoxSizer::CalcMin()");
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxStaticBoxSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStaticBoxSizer::RecalcSizes() function, expected prototype:\nvoid wxStaticBoxSizer::RecalcSizes()\nClass arguments details:\n");
		}


		wxStaticBoxSizer* self=dynamic_cast< wxStaticBoxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStaticBoxSizer::RecalcSizes()");
		}
		self->RecalcSizes();

		return 0;
	}


	// Operator binds:

};

wxStaticBoxSizer* LunaTraits< wxStaticBoxSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStaticBoxSizer::_bind_ctor(L);
}

void LunaTraits< wxStaticBoxSizer >::_bind_dtor(wxStaticBoxSizer* obj) {
	delete obj;
}

const char LunaTraits< wxStaticBoxSizer >::className[] = "wxStaticBoxSizer";
const char LunaTraits< wxStaticBoxSizer >::fullName[] = "wxStaticBoxSizer";
const char LunaTraits< wxStaticBoxSizer >::moduleName[] = "wx";
const char* LunaTraits< wxStaticBoxSizer >::parents[] = {"wx.wxBoxSizer", 0};
const int LunaTraits< wxStaticBoxSizer >::hash = 60677386;
const int LunaTraits< wxStaticBoxSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxStaticBoxSizer >::methods[] = {
	{"GetStaticBox", &luna_wrapper_wxStaticBoxSizer::_bind_GetStaticBox},
	{"CalcMin", &luna_wrapper_wxStaticBoxSizer::_bind_CalcMin},
	{"RecalcSizes", &luna_wrapper_wxStaticBoxSizer::_bind_RecalcSizes},
	{"__eq", &luna_wrapper_wxStaticBoxSizer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxStaticBoxSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxStaticBoxSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStaticBoxSizer >::enumValues[] = {
	{0,0}
};


