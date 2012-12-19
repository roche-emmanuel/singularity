#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewIconTextRenderer.h>

class luna_wrapper_wxDataViewIconTextRenderer {
public:
	typedef Luna< wxDataViewIconTextRenderer > luna_t;

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
		//wxDataViewIconTextRenderer* ptr= dynamic_cast< wxDataViewIconTextRenderer* >(Luna< wxObject >::check(L,1));
		wxDataViewIconTextRenderer* ptr= luna_caster< wxObject, wxDataViewIconTextRenderer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewIconTextRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
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
	// wxDataViewIconTextRenderer::wxDataViewIconTextRenderer(lua_Table * data, const wxString & varianttype = "wxDataViewIconText", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1)
	static wxDataViewIconTextRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewIconTextRenderer::wxDataViewIconTextRenderer(lua_Table * data, const wxString & varianttype = \"wxDataViewIconText\", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1) function, expected prototype:\nwxDataViewIconTextRenderer::wxDataViewIconTextRenderer(lua_Table * data, const wxString & varianttype = \"wxDataViewIconText\", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString varianttype(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : ::wxDATAVIEW_CELL_INERT;
		int align=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		return new wrapper_wxDataViewIconTextRenderer(L,NULL, varianttype, mode, align);
	}


	// Function binds:
	// wxClassInfo * wxDataViewIconTextRenderer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewIconTextRenderer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewIconTextRenderer::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxDataViewIconTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewIconTextRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewIconTextRenderer::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxDataViewIconTextRenderer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// int wxDataViewIconTextRenderer::base_GetAlignment() const
	static int _bind_base_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_GetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewIconTextRenderer::base_GetAlignment() const function, expected prototype:\nint wxDataViewIconTextRenderer::base_GetAlignment() const\nClass arguments details:\n");
		}


		wxDataViewIconTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewIconTextRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewIconTextRenderer::base_GetAlignment() const");
		}
		int lret = self->wxDataViewIconTextRenderer::GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCellMode wxDataViewIconTextRenderer::base_GetMode() const
	static int _bind_base_GetMode(lua_State *L) {
		if (!_lg_typecheck_base_GetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewCellMode wxDataViewIconTextRenderer::base_GetMode() const function, expected prototype:\nwxDataViewCellMode wxDataViewIconTextRenderer::base_GetMode() const\nClass arguments details:\n");
		}


		wxDataViewIconTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewIconTextRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewCellMode wxDataViewIconTextRenderer::base_GetMode() const");
		}
		wxDataViewCellMode lret = self->wxDataViewIconTextRenderer::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewIconTextRenderer::base_SetAlignment(int align)
	static int _bind_base_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewIconTextRenderer::base_SetAlignment(int align) function, expected prototype:\nvoid wxDataViewIconTextRenderer::base_SetAlignment(int align)\nClass arguments details:\n");
		}

		int align=(int)lua_tointeger(L,2);

		wxDataViewIconTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewIconTextRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewIconTextRenderer::base_SetAlignment(int)");
		}
		self->wxDataViewIconTextRenderer::SetAlignment(align);

		return 0;
	}


	// Operator binds:

};

wxDataViewIconTextRenderer* LunaTraits< wxDataViewIconTextRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewIconTextRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxSize wxDataViewRenderer::GetSize() const
	// bool wxDataViewRenderer::Render(wxRect arg1, wxDC * arg2, int arg3)
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)
}

void LunaTraits< wxDataViewIconTextRenderer >::_bind_dtor(wxDataViewIconTextRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewIconTextRenderer >::className[] = "wxDataViewIconTextRenderer";
const char LunaTraits< wxDataViewIconTextRenderer >::fullName[] = "wxDataViewIconTextRenderer";
const char LunaTraits< wxDataViewIconTextRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewIconTextRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewIconTextRenderer >::hash = 23763012;
const int LunaTraits< wxDataViewIconTextRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewIconTextRenderer >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxDataViewIconTextRenderer::_bind_base_GetClassInfo},
	{"base_GetAlignment", &luna_wrapper_wxDataViewIconTextRenderer::_bind_base_GetAlignment},
	{"base_GetMode", &luna_wrapper_wxDataViewIconTextRenderer::_bind_base_GetMode},
	{"base_SetAlignment", &luna_wrapper_wxDataViewIconTextRenderer::_bind_base_SetAlignment},
	{"__eq", &luna_wrapper_wxDataViewIconTextRenderer::_bind___eq},
	{"getTable", &luna_wrapper_wxDataViewIconTextRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewIconTextRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewIconTextRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewIconTextRenderer >::enumValues[] = {
	{0,0}
};


