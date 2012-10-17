#include <plug_common.h>

class luna_wrapper_wxRichTextLine {
public:
	typedef Luna< wxRichTextLine > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86518173) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRichTextLine*)");
		}

		wxRichTextLine* rhs =(Luna< wxRichTextLine >::check(L,2));
		wxRichTextLine* self=(Luna< wxRichTextLine >::check(L,1));
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

		wxRichTextLine* self=(Luna< wxRichTextLine >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichTextLine");
		
		return luna_dynamicCast(L,converters,"wxRichTextLine",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextLine* LunaTraits< wxRichTextLine >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextLine >::_bind_dtor(wxRichTextLine* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextLine >::className[] = "wxRichTextLine";
const char LunaTraits< wxRichTextLine >::fullName[] = "wxRichTextLine";
const char LunaTraits< wxRichTextLine >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextLine >::parents[] = {0};
const int LunaTraits< wxRichTextLine >::hash = 86518173;
const int LunaTraits< wxRichTextLine >::uniqueIDs[] = {86518173,0};

luna_RegType LunaTraits< wxRichTextLine >::methods[] = {
	{"dynCast", &luna_wrapper_wxRichTextLine::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRichTextLine::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextLine >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextLine >::enumValues[] = {
	{0,0}
};


