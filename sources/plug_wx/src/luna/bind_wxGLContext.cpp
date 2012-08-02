#include <plug_common.h>

class luna_wrapper_wxGLContext {
public:
	typedef Luna< wxGLContext > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGLContext* ptr= dynamic_cast< wxGLContext* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGLContext >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetCurrent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGLContext::wxGLContext(wxGLCanvas * win, const wxGLContext * other = NULL)
	static wxGLContext* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGLContext::wxGLContext(wxGLCanvas * win, const wxGLContext * other = NULL) function, expected prototype:\nwxGLContext::wxGLContext(wxGLCanvas * win, const wxGLContext * other = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxGLCanvas* win=dynamic_cast< wxGLCanvas* >(Luna< wxObject >::check(L,1));
		const wxGLContext* other=luatop>1 ? dynamic_cast< wxGLContext* >(Luna< wxObject >::check(L,2)) : (const wxGLContext*)NULL;

		return new wxGLContext(win, other);
	}


	// Function binds:
	// bool wxGLContext::SetCurrent(const wxGLCanvas & win) const
	static int _bind_SetCurrent(lua_State *L) {
		if (!_lg_typecheck_SetCurrent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGLContext::SetCurrent(const wxGLCanvas & win) const function, expected prototype:\nbool wxGLContext::SetCurrent(const wxGLCanvas & win) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxGLCanvas* win_ptr=dynamic_cast< wxGLCanvas* >(Luna< wxObject >::check(L,2));
		if( !win_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg win in wxGLContext::SetCurrent function");
		}
		const wxGLCanvas & win=*win_ptr;

		wxGLContext* self=dynamic_cast< wxGLContext* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGLContext::SetCurrent(const wxGLCanvas &) const");
		}
		bool lret = self->SetCurrent(win);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxGLContext* LunaTraits< wxGLContext >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGLContext::_bind_ctor(L);
}

void LunaTraits< wxGLContext >::_bind_dtor(wxGLContext* obj) {
	delete obj;
}

const char LunaTraits< wxGLContext >::className[] = "wxGLContext";
const char LunaTraits< wxGLContext >::fullName[] = "wxGLContext";
const char LunaTraits< wxGLContext >::moduleName[] = "wx";
const char* LunaTraits< wxGLContext >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxGLContext >::hash = 13437527;
const int LunaTraits< wxGLContext >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGLContext >::methods[] = {
	{"SetCurrent", &luna_wrapper_wxGLContext::_bind_SetCurrent},
	{0,0}
};

luna_ConverterType LunaTraits< wxGLContext >::converters[] = {
	{"wxObject", &luna_wrapper_wxGLContext::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGLContext >::enumValues[] = {
	{0,0}
};


