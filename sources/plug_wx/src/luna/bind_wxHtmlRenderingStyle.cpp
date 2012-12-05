#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlRenderingStyle.h>

class luna_wrapper_wxHtmlRenderingStyle {
public:
	typedef Luna< wxHtmlRenderingStyle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41010643) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHtmlRenderingStyle*)");
		}

		wxHtmlRenderingStyle* rhs =(Luna< wxHtmlRenderingStyle >::check(L,2));
		wxHtmlRenderingStyle* self=(Luna< wxHtmlRenderingStyle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlRenderingStyle* self=(Luna< wxHtmlRenderingStyle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHtmlRenderingStyle");
		
		return luna_dynamicCast(L,converters,"wxHtmlRenderingStyle",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetSelectedTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectedTextBgColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour & clr)
	static int _bind_GetSelectedTextColour(lua_State *L) {
		if (!_lg_typecheck_GetSelectedTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour & clr) function, expected prototype:\nwxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour & clr)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* clr_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !clr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr in wxHtmlRenderingStyle::GetSelectedTextColour function");
		}
		const wxColour & clr=*clr_ptr;

		wxHtmlRenderingStyle* self=(Luna< wxHtmlRenderingStyle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour &)");
		}
		wxColour stack_lret = self->GetSelectedTextColour(clr);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour & clr)
	static int _bind_GetSelectedTextBgColour(lua_State *L) {
		if (!_lg_typecheck_GetSelectedTextBgColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour & clr) function, expected prototype:\nwxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour & clr)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* clr_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !clr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr in wxHtmlRenderingStyle::GetSelectedTextBgColour function");
		}
		const wxColour & clr=*clr_ptr;

		wxHtmlRenderingStyle* self=(Luna< wxHtmlRenderingStyle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour &)");
		}
		wxColour stack_lret = self->GetSelectedTextBgColour(clr);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxHtmlRenderingStyle* LunaTraits< wxHtmlRenderingStyle >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour & clr)
	// wxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour & clr)
}

void LunaTraits< wxHtmlRenderingStyle >::_bind_dtor(wxHtmlRenderingStyle* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlRenderingStyle >::className[] = "wxHtmlRenderingStyle";
const char LunaTraits< wxHtmlRenderingStyle >::fullName[] = "wxHtmlRenderingStyle";
const char LunaTraits< wxHtmlRenderingStyle >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlRenderingStyle >::parents[] = {0};
const int LunaTraits< wxHtmlRenderingStyle >::hash = 41010643;
const int LunaTraits< wxHtmlRenderingStyle >::uniqueIDs[] = {41010643,0};

luna_RegType LunaTraits< wxHtmlRenderingStyle >::methods[] = {
	{"GetSelectedTextColour", &luna_wrapper_wxHtmlRenderingStyle::_bind_GetSelectedTextColour},
	{"GetSelectedTextBgColour", &luna_wrapper_wxHtmlRenderingStyle::_bind_GetSelectedTextBgColour},
	{"dynCast", &luna_wrapper_wxHtmlRenderingStyle::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHtmlRenderingStyle::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlRenderingStyle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlRenderingStyle >::enumValues[] = {
	{0,0}
};


