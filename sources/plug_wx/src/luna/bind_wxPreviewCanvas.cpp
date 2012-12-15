#include <plug_common.h>

class luna_wrapper_wxPreviewCanvas {
public:
	typedef Luna< wxPreviewCanvas > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37711363) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPreviewCanvas*)");
		}

		wxPreviewCanvas* rhs =(Luna< wxPreviewCanvas >::check(L,2));
		wxPreviewCanvas* self=(Luna< wxPreviewCanvas >::check(L,1));
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

		wxPreviewCanvas* self=(Luna< wxPreviewCanvas >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPreviewCanvas");
		
		return luna_dynamicCast(L,converters,"wxPreviewCanvas",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_OnPaint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxPreviewCanvas::OnPaint(wxPaintEvent & event)
	static int _bind_OnPaint(lua_State *L) {
		if (!_lg_typecheck_OnPaint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewCanvas::OnPaint(wxPaintEvent & event) function, expected prototype:\nvoid wxPreviewCanvas::OnPaint(wxPaintEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxPaintEvent* event_ptr=(Luna< wxObject >::checkSubType< wxPaintEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPreviewCanvas::OnPaint function");
		}
		wxPaintEvent & event=*event_ptr;

		wxPreviewCanvas* self=(Luna< wxPreviewCanvas >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewCanvas::OnPaint(wxPaintEvent &)");
		}
		self->OnPaint(event);

		return 0;
	}


	// Operator binds:

};

wxPreviewCanvas* LunaTraits< wxPreviewCanvas >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPreviewCanvas >::_bind_dtor(wxPreviewCanvas* obj) {
	delete obj;
}

const char LunaTraits< wxPreviewCanvas >::className[] = "wxPreviewCanvas";
const char LunaTraits< wxPreviewCanvas >::fullName[] = "wxPreviewCanvas";
const char LunaTraits< wxPreviewCanvas >::moduleName[] = "wx";
const char* LunaTraits< wxPreviewCanvas >::parents[] = {0};
const int LunaTraits< wxPreviewCanvas >::hash = 37711363;
const int LunaTraits< wxPreviewCanvas >::uniqueIDs[] = {37711363,0};

luna_RegType LunaTraits< wxPreviewCanvas >::methods[] = {
	{"OnPaint", &luna_wrapper_wxPreviewCanvas::_bind_OnPaint},
	{"dynCast", &luna_wrapper_wxPreviewCanvas::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPreviewCanvas::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPreviewCanvas >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPreviewCanvas >::enumValues[] = {
	{0,0}
};


