#include <plug_common.h>

class luna_wrapper_wxHtmlRenderingInfo {
public:
	typedef Luna< wxHtmlRenderingInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10696080) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHtmlRenderingInfo*)");
		}

		wxHtmlRenderingInfo* rhs =(Luna< wxHtmlRenderingInfo >::check(L,2));
		wxHtmlRenderingInfo* self=(Luna< wxHtmlRenderingInfo >::check(L,1));
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

		wxHtmlRenderingInfo* self=(Luna< wxHtmlRenderingInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHtmlRenderingInfo");
		
		return luna_dynamicCast(L,converters,"wxHtmlRenderingInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,41010643)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlRenderingInfo::wxHtmlRenderingInfo()
	static wxHtmlRenderingInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlRenderingInfo::wxHtmlRenderingInfo() function, expected prototype:\nwxHtmlRenderingInfo::wxHtmlRenderingInfo()\nClass arguments details:\n");
		}


		return new wxHtmlRenderingInfo();
	}


	// Function binds:
	// void wxHtmlRenderingInfo::SetStyle(wxHtmlRenderingStyle * style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlRenderingInfo::SetStyle(wxHtmlRenderingStyle * style) function, expected prototype:\nvoid wxHtmlRenderingInfo::SetStyle(wxHtmlRenderingStyle * style)\nClass arguments details:\narg 1 ID = 41010643\n");
		}

		wxHtmlRenderingStyle* style=(Luna< wxHtmlRenderingStyle >::check(L,2));

		wxHtmlRenderingInfo* self=(Luna< wxHtmlRenderingInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlRenderingInfo::SetStyle(wxHtmlRenderingStyle *)");
		}
		self->SetStyle(style);

		return 0;
	}

	// wxHtmlRenderingStyle & wxHtmlRenderingInfo::GetStyle()
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlRenderingStyle & wxHtmlRenderingInfo::GetStyle() function, expected prototype:\nwxHtmlRenderingStyle & wxHtmlRenderingInfo::GetStyle()\nClass arguments details:\n");
		}


		wxHtmlRenderingInfo* self=(Luna< wxHtmlRenderingInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlRenderingStyle & wxHtmlRenderingInfo::GetStyle()");
		}
		const wxHtmlRenderingStyle* lret = &self->GetStyle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlRenderingStyle >::push(L,lret,false);

		return 1;
	}

	// wxHtmlRenderingState & wxHtmlRenderingInfo::GetState()
	static int _bind_GetState(lua_State *L) {
		if (!_lg_typecheck_GetState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlRenderingState & wxHtmlRenderingInfo::GetState() function, expected prototype:\nwxHtmlRenderingState & wxHtmlRenderingInfo::GetState()\nClass arguments details:\n");
		}


		wxHtmlRenderingInfo* self=(Luna< wxHtmlRenderingInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlRenderingState & wxHtmlRenderingInfo::GetState()");
		}
		wxHtmlRenderingState & lret = self->GetState();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxHtmlRenderingState &'
		////////////////////////////////////////////////////////////////////

		return 1;
	}


	// Operator binds:

};

wxHtmlRenderingInfo* LunaTraits< wxHtmlRenderingInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlRenderingInfo::_bind_ctor(L);
}

void LunaTraits< wxHtmlRenderingInfo >::_bind_dtor(wxHtmlRenderingInfo* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlRenderingInfo >::className[] = "wxHtmlRenderingInfo";
const char LunaTraits< wxHtmlRenderingInfo >::fullName[] = "wxHtmlRenderingInfo";
const char LunaTraits< wxHtmlRenderingInfo >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlRenderingInfo >::parents[] = {0};
const int LunaTraits< wxHtmlRenderingInfo >::hash = 10696080;
const int LunaTraits< wxHtmlRenderingInfo >::uniqueIDs[] = {10696080,0};

luna_RegType LunaTraits< wxHtmlRenderingInfo >::methods[] = {
	{"SetStyle", &luna_wrapper_wxHtmlRenderingInfo::_bind_SetStyle},
	{"GetStyle", &luna_wrapper_wxHtmlRenderingInfo::_bind_GetStyle},
	{"GetState", &luna_wrapper_wxHtmlRenderingInfo::_bind_GetState},
	{"dynCast", &luna_wrapper_wxHtmlRenderingInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHtmlRenderingInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlRenderingInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlRenderingInfo >::enumValues[] = {
	{0,0}
};


