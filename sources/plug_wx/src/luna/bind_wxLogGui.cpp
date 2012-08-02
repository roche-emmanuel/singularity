#include <plug_common.h>

class luna_wrapper_wxLogGui {
public:
	typedef Luna< wxLogGui > luna_t;

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxLogGui* ptr= dynamic_cast< wxLogGui* >(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogGui >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLogGui::wxLogGui()
	static wxLogGui* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogGui::wxLogGui() function, expected prototype:\nwxLogGui::wxLogGui()\nClass arguments details:\n");
		}


		return new wxLogGui();
	}


	// Function binds:
	// void wxLogGui::Flush()
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogGui::Flush() function, expected prototype:\nvoid wxLogGui::Flush()\nClass arguments details:\n");
		}


		wxLogGui* self=dynamic_cast< wxLogGui* >(Luna< wxLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogGui::Flush()");
		}
		self->Flush();

		return 0;
	}


	// Operator binds:

};

wxLogGui* LunaTraits< wxLogGui >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogGui::_bind_ctor(L);
}

void LunaTraits< wxLogGui >::_bind_dtor(wxLogGui* obj) {
	delete obj;
}

const char LunaTraits< wxLogGui >::className[] = "wxLogGui";
const char LunaTraits< wxLogGui >::fullName[] = "wxLogGui";
const char LunaTraits< wxLogGui >::moduleName[] = "wx";
const char* LunaTraits< wxLogGui >::parents[] = {"wx.wxLog", 0};
const int LunaTraits< wxLogGui >::hash = 82814303;
const int LunaTraits< wxLogGui >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogGui >::methods[] = {
	{"Flush", &luna_wrapper_wxLogGui::_bind_Flush},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogGui >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogGui::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogGui >::enumValues[] = {
	{0,0}
};


