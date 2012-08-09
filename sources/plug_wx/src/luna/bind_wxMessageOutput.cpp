#include <plug_common.h>

class luna_wrapper_wxMessageOutput {
public:
	typedef Luna< wxMessageOutput > luna_t;

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

		wxMessageOutput* self=(Luna< wxMessageOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMessageOutput");
		
		return luna_dynamicCast(L,converters,"wxMessageOutput",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,42086186)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Output(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// static wxMessageOutput * wxMessageOutput::Get()
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxMessageOutput * wxMessageOutput::Get() function, expected prototype:\nstatic wxMessageOutput * wxMessageOutput::Get()\nClass arguments details:\n");
		}


		wxMessageOutput * lret = wxMessageOutput::Get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMessageOutput >::push(L,lret,false);

		return 1;
	}

	// static wxMessageOutput * wxMessageOutput::Set(wxMessageOutput * msgout)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxMessageOutput * wxMessageOutput::Set(wxMessageOutput * msgout) function, expected prototype:\nstatic wxMessageOutput * wxMessageOutput::Set(wxMessageOutput * msgout)\nClass arguments details:\narg 1 ID = 42086186\n");
		}

		wxMessageOutput* msgout=(Luna< wxMessageOutput >::check(L,1));

		wxMessageOutput * lret = wxMessageOutput::Set(msgout);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMessageOutput >::push(L,lret,false);

		return 1;
	}

	// void wxMessageOutput::Output(const wxString & str)
	static int _bind_Output(lua_State *L) {
		if (!_lg_typecheck_Output(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMessageOutput::Output(const wxString & str) function, expected prototype:\nvoid wxMessageOutput::Output(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxMessageOutput* self=(Luna< wxMessageOutput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMessageOutput::Output(const wxString &)");
		}
		self->Output(str);

		return 0;
	}


	// Operator binds:

};

wxMessageOutput* LunaTraits< wxMessageOutput >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxMessageOutput::Output(const wxString & str)

	// Abstract operators:
}

void LunaTraits< wxMessageOutput >::_bind_dtor(wxMessageOutput* obj) {
	delete obj;
}

const char LunaTraits< wxMessageOutput >::className[] = "wxMessageOutput";
const char LunaTraits< wxMessageOutput >::fullName[] = "wxMessageOutput";
const char LunaTraits< wxMessageOutput >::moduleName[] = "wx";
const char* LunaTraits< wxMessageOutput >::parents[] = {0};
const int LunaTraits< wxMessageOutput >::hash = 42086186;
const int LunaTraits< wxMessageOutput >::uniqueIDs[] = {42086186,0};

luna_RegType LunaTraits< wxMessageOutput >::methods[] = {
	{"Get", &luna_wrapper_wxMessageOutput::_bind_Get},
	{"Set", &luna_wrapper_wxMessageOutput::_bind_Set},
	{"Output", &luna_wrapper_wxMessageOutput::_bind_Output},
	{"dynCast", &luna_wrapper_wxMessageOutput::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxMessageOutput >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMessageOutput >::enumValues[] = {
	{0,0}
};

