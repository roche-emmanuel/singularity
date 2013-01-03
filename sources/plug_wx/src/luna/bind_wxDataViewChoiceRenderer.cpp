#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewChoiceRenderer.h>

class luna_wrapper_wxDataViewChoiceRenderer {
public:
	typedef Luna< wxDataViewChoiceRenderer > luna_t;

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
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
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
		//wxDataViewChoiceRenderer* ptr= dynamic_cast< wxDataViewChoiceRenderer* >(Luna< wxObject >::check(L,1));
		wxDataViewChoiceRenderer* ptr= luna_caster< wxObject, wxDataViewChoiceRenderer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewChoiceRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetChoice(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChoices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewChoiceRenderer::wxDataViewChoiceRenderer(lua_Table * data, const wxArrayString & choices, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_EDITABLE, int alignment = -1)
	static wxDataViewChoiceRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewChoiceRenderer::wxDataViewChoiceRenderer(lua_Table * data, const wxArrayString & choices, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_EDITABLE, int alignment = -1) function, expected prototype:\nwxDataViewChoiceRenderer::wxDataViewChoiceRenderer(lua_Table * data, const wxArrayString & choices, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_EDITABLE, int alignment = -1)\nClass arguments details:\narg 2 ID = 59507769\n");
		}

		int luatop = lua_gettop(L);

		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,2));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxDataViewChoiceRenderer::wxDataViewChoiceRenderer function");
		}
		const wxArrayString & choices=*choices_ptr;
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : ::wxDATAVIEW_CELL_EDITABLE;
		int alignment=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		return new wrapper_wxDataViewChoiceRenderer(L,NULL, choices, mode, alignment);
	}


	// Function binds:
	// wxString wxDataViewChoiceRenderer::GetChoice(size_t index) const
	static int _bind_GetChoice(lua_State *L) {
		if (!_lg_typecheck_GetChoice(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewChoiceRenderer::GetChoice(size_t index) const function, expected prototype:\nwxString wxDataViewChoiceRenderer::GetChoice(size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxDataViewChoiceRenderer* self=Luna< wxObject >::checkSubType< wxDataViewChoiceRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewChoiceRenderer::GetChoice(size_t) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxString lret = self->GetChoice(index);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxArrayString & wxDataViewChoiceRenderer::GetChoices() const
	static int _bind_GetChoices(lua_State *L) {
		if (!_lg_typecheck_GetChoices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxArrayString & wxDataViewChoiceRenderer::GetChoices() const function, expected prototype:\nconst wxArrayString & wxDataViewChoiceRenderer::GetChoices() const\nClass arguments details:\n");
		}


		wxDataViewChoiceRenderer* self=Luna< wxObject >::checkSubType< wxDataViewChoiceRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxArrayString & wxDataViewChoiceRenderer::GetChoices() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		const wxArrayString* lret = &self->GetChoices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxDataViewChoiceRenderer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewChoiceRenderer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewChoiceRenderer::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxDataViewChoiceRenderer* self=Luna< wxObject >::checkSubType< wxDataViewChoiceRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewChoiceRenderer::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxDataViewChoiceRenderer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// int wxDataViewChoiceRenderer::base_GetAlignment() const
	static int _bind_base_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_GetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewChoiceRenderer::base_GetAlignment() const function, expected prototype:\nint wxDataViewChoiceRenderer::base_GetAlignment() const\nClass arguments details:\n");
		}


		wxDataViewChoiceRenderer* self=Luna< wxObject >::checkSubType< wxDataViewChoiceRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewChoiceRenderer::base_GetAlignment() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->wxDataViewChoiceRenderer::GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCellMode wxDataViewChoiceRenderer::base_GetMode() const
	static int _bind_base_GetMode(lua_State *L) {
		if (!_lg_typecheck_base_GetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewCellMode wxDataViewChoiceRenderer::base_GetMode() const function, expected prototype:\nwxDataViewCellMode wxDataViewChoiceRenderer::base_GetMode() const\nClass arguments details:\n");
		}


		wxDataViewChoiceRenderer* self=Luna< wxObject >::checkSubType< wxDataViewChoiceRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewCellMode wxDataViewChoiceRenderer::base_GetMode() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxDataViewCellMode lret = self->wxDataViewChoiceRenderer::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewChoiceRenderer::base_SetAlignment(int align)
	static int _bind_base_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewChoiceRenderer::base_SetAlignment(int align) function, expected prototype:\nvoid wxDataViewChoiceRenderer::base_SetAlignment(int align)\nClass arguments details:\n");
		}

		int align=(int)lua_tointeger(L,2);

		wxDataViewChoiceRenderer* self=Luna< wxObject >::checkSubType< wxDataViewChoiceRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewChoiceRenderer::base_SetAlignment(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxDataViewChoiceRenderer::SetAlignment(align);

		return 0;
	}


	// Operator binds:

};

wxDataViewChoiceRenderer* LunaTraits< wxDataViewChoiceRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewChoiceRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxSize wxDataViewRenderer::GetSize() const
	// bool wxDataViewRenderer::Render(wxRect arg1, wxDC * arg2, int arg3)
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)
}

void LunaTraits< wxDataViewChoiceRenderer >::_bind_dtor(wxDataViewChoiceRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewChoiceRenderer >::className[] = "wxDataViewChoiceRenderer";
const char LunaTraits< wxDataViewChoiceRenderer >::fullName[] = "wxDataViewChoiceRenderer";
const char LunaTraits< wxDataViewChoiceRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewChoiceRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewChoiceRenderer >::hash = 49475747;
const int LunaTraits< wxDataViewChoiceRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewChoiceRenderer >::methods[] = {
	{"GetChoice", &luna_wrapper_wxDataViewChoiceRenderer::_bind_GetChoice},
	{"GetChoices", &luna_wrapper_wxDataViewChoiceRenderer::_bind_GetChoices},
	{"base_GetClassInfo", &luna_wrapper_wxDataViewChoiceRenderer::_bind_base_GetClassInfo},
	{"base_GetAlignment", &luna_wrapper_wxDataViewChoiceRenderer::_bind_base_GetAlignment},
	{"base_GetMode", &luna_wrapper_wxDataViewChoiceRenderer::_bind_base_GetMode},
	{"base_SetAlignment", &luna_wrapper_wxDataViewChoiceRenderer::_bind_base_SetAlignment},
	{"__eq", &luna_wrapper_wxDataViewChoiceRenderer::_bind___eq},
	{"getTable", &luna_wrapper_wxDataViewChoiceRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewChoiceRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewChoiceRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewChoiceRenderer >::enumValues[] = {
	{0,0}
};


