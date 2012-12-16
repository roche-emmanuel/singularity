#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewBitmapRenderer.h>

class luna_wrapper_wxDataViewBitmapRenderer {
public:
	typedef Luna< wxDataViewBitmapRenderer > luna_t;

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
		//wxDataViewBitmapRenderer* ptr= dynamic_cast< wxDataViewBitmapRenderer* >(Luna< wxObject >::check(L,1));
		wxDataViewBitmapRenderer* ptr= luna_caster< wxObject, wxDataViewBitmapRenderer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewBitmapRenderer >::push(L,ptr,false);
		return 1;
	};


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

	// Function binds:
	// wxClassInfo * wxDataViewBitmapRenderer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewBitmapRenderer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewBitmapRenderer::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxDataViewBitmapRenderer* self=Luna< wxObject >::checkSubType< wxDataViewBitmapRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewBitmapRenderer::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxDataViewBitmapRenderer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// int wxDataViewBitmapRenderer::base_GetAlignment() const
	static int _bind_base_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_GetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewBitmapRenderer::base_GetAlignment() const function, expected prototype:\nint wxDataViewBitmapRenderer::base_GetAlignment() const\nClass arguments details:\n");
		}


		wxDataViewBitmapRenderer* self=Luna< wxObject >::checkSubType< wxDataViewBitmapRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewBitmapRenderer::base_GetAlignment() const");
		}
		int lret = self->wxDataViewBitmapRenderer::GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCellMode wxDataViewBitmapRenderer::base_GetMode() const
	static int _bind_base_GetMode(lua_State *L) {
		if (!_lg_typecheck_base_GetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewCellMode wxDataViewBitmapRenderer::base_GetMode() const function, expected prototype:\nwxDataViewCellMode wxDataViewBitmapRenderer::base_GetMode() const\nClass arguments details:\n");
		}


		wxDataViewBitmapRenderer* self=Luna< wxObject >::checkSubType< wxDataViewBitmapRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewCellMode wxDataViewBitmapRenderer::base_GetMode() const");
		}
		wxDataViewCellMode lret = self->wxDataViewBitmapRenderer::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewBitmapRenderer::base_SetAlignment(int align)
	static int _bind_base_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewBitmapRenderer::base_SetAlignment(int align) function, expected prototype:\nvoid wxDataViewBitmapRenderer::base_SetAlignment(int align)\nClass arguments details:\n");
		}

		int align=(int)lua_tointeger(L,2);

		wxDataViewBitmapRenderer* self=Luna< wxObject >::checkSubType< wxDataViewBitmapRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewBitmapRenderer::base_SetAlignment(int)");
		}
		self->wxDataViewBitmapRenderer::SetAlignment(align);

		return 0;
	}


	// Operator binds:

};

wxDataViewBitmapRenderer* LunaTraits< wxDataViewBitmapRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)
}

void LunaTraits< wxDataViewBitmapRenderer >::_bind_dtor(wxDataViewBitmapRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewBitmapRenderer >::className[] = "wxDataViewBitmapRenderer";
const char LunaTraits< wxDataViewBitmapRenderer >::fullName[] = "wxDataViewBitmapRenderer";
const char LunaTraits< wxDataViewBitmapRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewBitmapRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewBitmapRenderer >::hash = 22615386;
const int LunaTraits< wxDataViewBitmapRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewBitmapRenderer >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxDataViewBitmapRenderer::_bind_base_GetClassInfo},
	{"base_GetAlignment", &luna_wrapper_wxDataViewBitmapRenderer::_bind_base_GetAlignment},
	{"base_GetMode", &luna_wrapper_wxDataViewBitmapRenderer::_bind_base_GetMode},
	{"base_SetAlignment", &luna_wrapper_wxDataViewBitmapRenderer::_bind_base_SetAlignment},
	{"__eq", &luna_wrapper_wxDataViewBitmapRenderer::_bind___eq},
	{"getTable", &luna_wrapper_wxDataViewBitmapRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewBitmapRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewBitmapRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewBitmapRenderer >::enumValues[] = {
	{0,0}
};


