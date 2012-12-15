#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLogGui.h>

class luna_wrapper_wxLogGui {
public:
	typedef Luna< wxLogGui > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13550494) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxLog*)");
		}

		wxLog* rhs =(Luna< wxLog >::check(L,2));
		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxLogGui* ptr= dynamic_cast< wxLogGui* >(Luna< wxLog >::check(L,1));
		wxLogGui* ptr= luna_caster< wxLog, wxLogGui >::cast(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogGui >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLogGui::wxLogGui()
	static wxLogGui* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogGui::wxLogGui() function, expected prototype:\nwxLogGui::wxLogGui()\nClass arguments details:\n");
		}


		return new wxLogGui();
	}

	// wxLogGui::wxLogGui(lua_Table * data)
	static wxLogGui* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogGui::wxLogGui(lua_Table * data) function, expected prototype:\nwxLogGui::wxLogGui(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxLogGui(L,NULL);
	}

	// Overload binder for wxLogGui::wxLogGui
	static wxLogGui* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxLogGui, cannot match any of the overloads for function wxLogGui:\n  wxLogGui()\n  wxLogGui(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxLogGui::Flush()
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogGui::Flush() function, expected prototype:\nvoid wxLogGui::Flush()\nClass arguments details:\n");
		}


		wxLogGui* self=Luna< wxLog >::checkSubType< wxLogGui >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogGui::Flush()");
		}
		self->Flush();

		return 0;
	}

	// void wxLogGui::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogGui::base_Flush() function, expected prototype:\nvoid wxLogGui::base_Flush()\nClass arguments details:\n");
		}


		wxLogGui* self=Luna< wxLog >::checkSubType< wxLogGui >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogGui::base_Flush()");
		}
		self->wxLogGui::Flush();

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
	{"base_Flush", &luna_wrapper_wxLogGui::_bind_base_Flush},
	{"__eq", &luna_wrapper_wxLogGui::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogGui >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogGui::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogGui >::enumValues[] = {
	{0,0}
};


