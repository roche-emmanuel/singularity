#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDirTraverser.h>

class luna_wrapper_wxDirTraverser {
public:
	typedef Luna< wxDirTraverser > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxDirTraverser* self=(Luna< wxDirTraverser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40425950) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDirTraverser*)");
		}

		wxDirTraverser* rhs =(Luna< wxDirTraverser >::check(L,2));
		wxDirTraverser* self=(Luna< wxDirTraverser >::check(L,1));
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

		wxDirTraverser* self=(Luna< wxDirTraverser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDirTraverser");
		
		return luna_dynamicCast(L,converters,"wxDirTraverser",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnOpenError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnOpenError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxDirTraverseResult wxDirTraverser::OnDir(const wxString & dirname)
	static int _bind_OnDir(lua_State *L) {
		if (!_lg_typecheck_OnDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDirTraverseResult wxDirTraverser::OnDir(const wxString & dirname) function, expected prototype:\nwxDirTraverseResult wxDirTraverser::OnDir(const wxString & dirname)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString dirname(lua_tostring(L,2),lua_objlen(L,2));

		wxDirTraverser* self=(Luna< wxDirTraverser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDirTraverseResult wxDirTraverser::OnDir(const wxString &)");
		}
		wxDirTraverseResult lret = self->OnDir(dirname);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDirTraverseResult wxDirTraverser::OnFile(const wxString & filename)
	static int _bind_OnFile(lua_State *L) {
		if (!_lg_typecheck_OnFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDirTraverseResult wxDirTraverser::OnFile(const wxString & filename) function, expected prototype:\nwxDirTraverseResult wxDirTraverser::OnFile(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxDirTraverser* self=(Luna< wxDirTraverser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDirTraverseResult wxDirTraverser::OnFile(const wxString &)");
		}
		wxDirTraverseResult lret = self->OnFile(filename);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDirTraverseResult wxDirTraverser::OnOpenError(const wxString & openerrorname)
	static int _bind_OnOpenError(lua_State *L) {
		if (!_lg_typecheck_OnOpenError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDirTraverseResult wxDirTraverser::OnOpenError(const wxString & openerrorname) function, expected prototype:\nwxDirTraverseResult wxDirTraverser::OnOpenError(const wxString & openerrorname)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString openerrorname(lua_tostring(L,2),lua_objlen(L,2));

		wxDirTraverser* self=(Luna< wxDirTraverser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDirTraverseResult wxDirTraverser::OnOpenError(const wxString &)");
		}
		wxDirTraverseResult lret = self->OnOpenError(openerrorname);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDirTraverseResult wxDirTraverser::base_OnOpenError(const wxString & openerrorname)
	static int _bind_base_OnOpenError(lua_State *L) {
		if (!_lg_typecheck_base_OnOpenError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDirTraverseResult wxDirTraverser::base_OnOpenError(const wxString & openerrorname) function, expected prototype:\nwxDirTraverseResult wxDirTraverser::base_OnOpenError(const wxString & openerrorname)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString openerrorname(lua_tostring(L,2),lua_objlen(L,2));

		wxDirTraverser* self=(Luna< wxDirTraverser >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDirTraverseResult wxDirTraverser::base_OnOpenError(const wxString &)");
		}
		wxDirTraverseResult lret = self->wxDirTraverser::OnOpenError(openerrorname);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxDirTraverser* LunaTraits< wxDirTraverser >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxDirTraverseResult wxDirTraverser::OnDir(const wxString & dirname)
	// wxDirTraverseResult wxDirTraverser::OnFile(const wxString & filename)
}

void LunaTraits< wxDirTraverser >::_bind_dtor(wxDirTraverser* obj) {
	delete obj;
}

const char LunaTraits< wxDirTraverser >::className[] = "wxDirTraverser";
const char LunaTraits< wxDirTraverser >::fullName[] = "wxDirTraverser";
const char LunaTraits< wxDirTraverser >::moduleName[] = "wx";
const char* LunaTraits< wxDirTraverser >::parents[] = {0};
const int LunaTraits< wxDirTraverser >::hash = 40425950;
const int LunaTraits< wxDirTraverser >::uniqueIDs[] = {40425950,0};

luna_RegType LunaTraits< wxDirTraverser >::methods[] = {
	{"OnDir", &luna_wrapper_wxDirTraverser::_bind_OnDir},
	{"OnFile", &luna_wrapper_wxDirTraverser::_bind_OnFile},
	{"OnOpenError", &luna_wrapper_wxDirTraverser::_bind_OnOpenError},
	{"base_OnOpenError", &luna_wrapper_wxDirTraverser::_bind_base_OnOpenError},
	{"dynCast", &luna_wrapper_wxDirTraverser::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDirTraverser::_bind___eq},
	{"getTable", &luna_wrapper_wxDirTraverser::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDirTraverser >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDirTraverser >::enumValues[] = {
	{0,0}
};


