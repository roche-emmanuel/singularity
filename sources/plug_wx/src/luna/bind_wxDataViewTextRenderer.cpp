#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewTextRenderer.h>

class luna_wrapper_wxDataViewTextRenderer {
public:
	typedef Luna< wxDataViewTextRenderer > luna_t;

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
		//wxDataViewTextRenderer* ptr= dynamic_cast< wxDataViewTextRenderer* >(Luna< wxObject >::check(L,1));
		wxDataViewTextRenderer* ptr= luna_caster< wxObject, wxDataViewTextRenderer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewTextRenderer >::push(L,ptr,false);
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
	// wxClassInfo * wxDataViewTextRenderer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewTextRenderer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewTextRenderer::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxDataViewTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewTextRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewTextRenderer::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxDataViewTextRenderer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// int wxDataViewTextRenderer::base_GetAlignment() const
	static int _bind_base_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_GetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTextRenderer::base_GetAlignment() const function, expected prototype:\nint wxDataViewTextRenderer::base_GetAlignment() const\nClass arguments details:\n");
		}


		wxDataViewTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewTextRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTextRenderer::base_GetAlignment() const");
		}
		int lret = self->wxDataViewTextRenderer::GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCellMode wxDataViewTextRenderer::base_GetMode() const
	static int _bind_base_GetMode(lua_State *L) {
		if (!_lg_typecheck_base_GetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewCellMode wxDataViewTextRenderer::base_GetMode() const function, expected prototype:\nwxDataViewCellMode wxDataViewTextRenderer::base_GetMode() const\nClass arguments details:\n");
		}


		wxDataViewTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewTextRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewCellMode wxDataViewTextRenderer::base_GetMode() const");
		}
		wxDataViewCellMode lret = self->wxDataViewTextRenderer::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewTextRenderer::base_SetAlignment(int align)
	static int _bind_base_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTextRenderer::base_SetAlignment(int align) function, expected prototype:\nvoid wxDataViewTextRenderer::base_SetAlignment(int align)\nClass arguments details:\n");
		}

		int align=(int)lua_tointeger(L,2);

		wxDataViewTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewTextRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTextRenderer::base_SetAlignment(int)");
		}
		self->wxDataViewTextRenderer::SetAlignment(align);

		return 0;
	}


	// Operator binds:

};

wxDataViewTextRenderer* LunaTraits< wxDataViewTextRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)
}

void LunaTraits< wxDataViewTextRenderer >::_bind_dtor(wxDataViewTextRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewTextRenderer >::className[] = "wxDataViewTextRenderer";
const char LunaTraits< wxDataViewTextRenderer >::fullName[] = "wxDataViewTextRenderer";
const char LunaTraits< wxDataViewTextRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewTextRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewTextRenderer >::hash = 91728515;
const int LunaTraits< wxDataViewTextRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewTextRenderer >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxDataViewTextRenderer::_bind_base_GetClassInfo},
	{"base_GetAlignment", &luna_wrapper_wxDataViewTextRenderer::_bind_base_GetAlignment},
	{"base_GetMode", &luna_wrapper_wxDataViewTextRenderer::_bind_base_GetMode},
	{"base_SetAlignment", &luna_wrapper_wxDataViewTextRenderer::_bind_base_SetAlignment},
	{"__eq", &luna_wrapper_wxDataViewTextRenderer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewTextRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewTextRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewTextRenderer >::enumValues[] = {
	{0,0}
};


