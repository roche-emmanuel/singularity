#include <plug_common.h>

class luna_wrapper_wxHeaderButtonParams {
public:
	typedef Luna< wxHeaderButtonParams > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67488995) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHeaderButtonParams*)");
		}

		wxHeaderButtonParams* rhs =(Luna< wxHeaderButtonParams >::check(L,2));
		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
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

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHeaderButtonParams");
		
		return luna_dynamicCast(L,converters,"wxHeaderButtonParams",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getM_arrowColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_selectionColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_labelText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_labelFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_labelColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_labelBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_labelAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_arrowColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_selectionColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_labelText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_labelFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_labelColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_labelBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_labelAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHeaderButtonParams::wxHeaderButtonParams()
	static wxHeaderButtonParams* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHeaderButtonParams::wxHeaderButtonParams() function, expected prototype:\nwxHeaderButtonParams::wxHeaderButtonParams()\nClass arguments details:\n");
		}


		return new wxHeaderButtonParams();
	}


	// Function binds:
	// wxColour wxHeaderButtonParams::m_arrowColour()
	static int _bind_getM_arrowColour(lua_State *L) {
		if (!_lg_typecheck_getM_arrowColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxHeaderButtonParams::m_arrowColour() function, expected prototype:\nwxColour wxHeaderButtonParams::m_arrowColour()\nClass arguments details:\n");
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxHeaderButtonParams::m_arrowColour(). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		const wxColour* lret = &self->m_arrowColour;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// wxColour wxHeaderButtonParams::m_selectionColour()
	static int _bind_getM_selectionColour(lua_State *L) {
		if (!_lg_typecheck_getM_selectionColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxHeaderButtonParams::m_selectionColour() function, expected prototype:\nwxColour wxHeaderButtonParams::m_selectionColour()\nClass arguments details:\n");
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxHeaderButtonParams::m_selectionColour(). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		const wxColour* lret = &self->m_selectionColour;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// wxString wxHeaderButtonParams::m_labelText()
	static int _bind_getM_labelText(lua_State *L) {
		if (!_lg_typecheck_getM_labelText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHeaderButtonParams::m_labelText() function, expected prototype:\nwxString wxHeaderButtonParams::m_labelText()\nClass arguments details:\n");
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHeaderButtonParams::m_labelText(). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		wxString lret = self->m_labelText;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFont wxHeaderButtonParams::m_labelFont()
	static int _bind_getM_labelFont(lua_State *L) {
		if (!_lg_typecheck_getM_labelFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxHeaderButtonParams::m_labelFont() function, expected prototype:\nwxFont wxHeaderButtonParams::m_labelFont()\nClass arguments details:\n");
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxHeaderButtonParams::m_labelFont(). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		const wxFont* lret = &self->m_labelFont;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxColour wxHeaderButtonParams::m_labelColour()
	static int _bind_getM_labelColour(lua_State *L) {
		if (!_lg_typecheck_getM_labelColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxHeaderButtonParams::m_labelColour() function, expected prototype:\nwxColour wxHeaderButtonParams::m_labelColour()\nClass arguments details:\n");
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxHeaderButtonParams::m_labelColour(). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		const wxColour* lret = &self->m_labelColour;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// wxBitmap wxHeaderButtonParams::m_labelBitmap()
	static int _bind_getM_labelBitmap(lua_State *L) {
		if (!_lg_typecheck_getM_labelBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxHeaderButtonParams::m_labelBitmap() function, expected prototype:\nwxBitmap wxHeaderButtonParams::m_labelBitmap()\nClass arguments details:\n");
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxHeaderButtonParams::m_labelBitmap(). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		const wxBitmap* lret = &self->m_labelBitmap;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// int wxHeaderButtonParams::m_labelAlignment()
	static int _bind_getM_labelAlignment(lua_State *L) {
		if (!_lg_typecheck_getM_labelAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHeaderButtonParams::m_labelAlignment() function, expected prototype:\nint wxHeaderButtonParams::m_labelAlignment()\nClass arguments details:\n");
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHeaderButtonParams::m_labelAlignment(). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		int lret = self->m_labelAlignment;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderButtonParams::m_arrowColour(wxColour value)
	static int _bind_setM_arrowColour(lua_State *L) {
		if (!_lg_typecheck_setM_arrowColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_arrowColour(wxColour value) function, expected prototype:\nvoid wxHeaderButtonParams::m_arrowColour(wxColour value)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxColour* value_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxHeaderButtonParams::m_arrowColour function");
		}
		wxColour value=*value_ptr;

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_arrowColour(wxColour). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		self->m_arrowColour = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_selectionColour(wxColour value)
	static int _bind_setM_selectionColour(lua_State *L) {
		if (!_lg_typecheck_setM_selectionColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_selectionColour(wxColour value) function, expected prototype:\nvoid wxHeaderButtonParams::m_selectionColour(wxColour value)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxColour* value_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxHeaderButtonParams::m_selectionColour function");
		}
		wxColour value=*value_ptr;

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_selectionColour(wxColour). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		self->m_selectionColour = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_labelText(wxString value)
	static int _bind_setM_labelText(lua_State *L) {
		if (!_lg_typecheck_setM_labelText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_labelText(wxString value) function, expected prototype:\nvoid wxHeaderButtonParams::m_labelText(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_labelText(wxString). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		self->m_labelText = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_labelFont(wxFont value)
	static int _bind_setM_labelFont(lua_State *L) {
		if (!_lg_typecheck_setM_labelFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_labelFont(wxFont value) function, expected prototype:\nvoid wxHeaderButtonParams::m_labelFont(wxFont value)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxFont* value_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxHeaderButtonParams::m_labelFont function");
		}
		wxFont value=*value_ptr;

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_labelFont(wxFont). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		self->m_labelFont = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_labelColour(wxColour value)
	static int _bind_setM_labelColour(lua_State *L) {
		if (!_lg_typecheck_setM_labelColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_labelColour(wxColour value) function, expected prototype:\nvoid wxHeaderButtonParams::m_labelColour(wxColour value)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxColour* value_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxHeaderButtonParams::m_labelColour function");
		}
		wxColour value=*value_ptr;

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_labelColour(wxColour). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		self->m_labelColour = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_labelBitmap(wxBitmap value)
	static int _bind_setM_labelBitmap(lua_State *L) {
		if (!_lg_typecheck_setM_labelBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_labelBitmap(wxBitmap value) function, expected prototype:\nvoid wxHeaderButtonParams::m_labelBitmap(wxBitmap value)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxBitmap* value_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxHeaderButtonParams::m_labelBitmap function");
		}
		wxBitmap value=*value_ptr;

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_labelBitmap(wxBitmap). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		self->m_labelBitmap = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_labelAlignment(int value)
	static int _bind_setM_labelAlignment(lua_State *L) {
		if (!_lg_typecheck_setM_labelAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_labelAlignment(int value) function, expected prototype:\nvoid wxHeaderButtonParams::m_labelAlignment(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_labelAlignment(int). Got : '%s'",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name());
		}
		self->m_labelAlignment = value;

		return 0;
	}


	// Operator binds:

};

wxHeaderButtonParams* LunaTraits< wxHeaderButtonParams >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHeaderButtonParams::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxHeaderButtonParams >::_bind_dtor(wxHeaderButtonParams* obj) {
	delete obj;
}

const char LunaTraits< wxHeaderButtonParams >::className[] = "wxHeaderButtonParams";
const char LunaTraits< wxHeaderButtonParams >::fullName[] = "wxHeaderButtonParams";
const char LunaTraits< wxHeaderButtonParams >::moduleName[] = "wx";
const char* LunaTraits< wxHeaderButtonParams >::parents[] = {0};
const int LunaTraits< wxHeaderButtonParams >::hash = 67488995;
const int LunaTraits< wxHeaderButtonParams >::uniqueIDs[] = {67488995,0};

luna_RegType LunaTraits< wxHeaderButtonParams >::methods[] = {
	{"getM_arrowColour", &luna_wrapper_wxHeaderButtonParams::_bind_getM_arrowColour},
	{"getM_selectionColour", &luna_wrapper_wxHeaderButtonParams::_bind_getM_selectionColour},
	{"getM_labelText", &luna_wrapper_wxHeaderButtonParams::_bind_getM_labelText},
	{"getM_labelFont", &luna_wrapper_wxHeaderButtonParams::_bind_getM_labelFont},
	{"getM_labelColour", &luna_wrapper_wxHeaderButtonParams::_bind_getM_labelColour},
	{"getM_labelBitmap", &luna_wrapper_wxHeaderButtonParams::_bind_getM_labelBitmap},
	{"getM_labelAlignment", &luna_wrapper_wxHeaderButtonParams::_bind_getM_labelAlignment},
	{"setM_arrowColour", &luna_wrapper_wxHeaderButtonParams::_bind_setM_arrowColour},
	{"setM_selectionColour", &luna_wrapper_wxHeaderButtonParams::_bind_setM_selectionColour},
	{"setM_labelText", &luna_wrapper_wxHeaderButtonParams::_bind_setM_labelText},
	{"setM_labelFont", &luna_wrapper_wxHeaderButtonParams::_bind_setM_labelFont},
	{"setM_labelColour", &luna_wrapper_wxHeaderButtonParams::_bind_setM_labelColour},
	{"setM_labelBitmap", &luna_wrapper_wxHeaderButtonParams::_bind_setM_labelBitmap},
	{"setM_labelAlignment", &luna_wrapper_wxHeaderButtonParams::_bind_setM_labelAlignment},
	{"dynCast", &luna_wrapper_wxHeaderButtonParams::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHeaderButtonParams::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHeaderButtonParams >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHeaderButtonParams >::enumValues[] = {
	{0,0}
};


