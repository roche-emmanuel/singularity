#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAppTraits.h>

class luna_wrapper_wxAppTraits {
public:
	typedef Luna< wxAppTraits > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,89440075) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAppTraits*)");
		}

		wxAppTraits* rhs =(Luna< wxAppTraits >::check(L,2));
		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
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

		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAppTraits");
		
		return luna_dynamicCast(L,converters,"wxAppTraits",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_CreateConfig(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateEventLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateFontMapper(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateLogTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateMessageOutput(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateRenderer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDesktopEnvironment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStandardPaths(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolkitVersion(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasStderr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsUsingUniversalWidgets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowAssertDialog(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CreateConfig(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetStandardPaths(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxConfigBase * wxAppTraits::CreateConfig()
	static int _bind_CreateConfig(lua_State *L) {
		if (!_lg_typecheck_CreateConfig(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxConfigBase * wxAppTraits::CreateConfig() function, expected prototype:\nwxConfigBase * wxAppTraits::CreateConfig()\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxConfigBase * wxAppTraits::CreateConfig()");
		}
		wxConfigBase * lret = self->CreateConfig();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConfigBase >::push(L,lret,false);

		return 1;
	}

	// wxEventLoopBase * wxAppTraits::CreateEventLoop()
	static int _bind_CreateEventLoop(lua_State *L) {
		if (!_lg_typecheck_CreateEventLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventLoopBase * wxAppTraits::CreateEventLoop() function, expected prototype:\nwxEventLoopBase * wxAppTraits::CreateEventLoop()\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventLoopBase * wxAppTraits::CreateEventLoop()");
		}
		wxEventLoopBase * lret = self->CreateEventLoop();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEventLoopBase >::push(L,lret,false);

		return 1;
	}

	// wxFontMapper * wxAppTraits::CreateFontMapper()
	static int _bind_CreateFontMapper(lua_State *L) {
		if (!_lg_typecheck_CreateFontMapper(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontMapper * wxAppTraits::CreateFontMapper() function, expected prototype:\nwxFontMapper * wxAppTraits::CreateFontMapper()\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFontMapper * wxAppTraits::CreateFontMapper()");
		}
		wxFontMapper * lret = self->CreateFontMapper();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontMapper >::push(L,lret,false);

		return 1;
	}

	// wxLog * wxAppTraits::CreateLogTarget()
	static int _bind_CreateLogTarget(lua_State *L) {
		if (!_lg_typecheck_CreateLogTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLog * wxAppTraits::CreateLogTarget() function, expected prototype:\nwxLog * wxAppTraits::CreateLogTarget()\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLog * wxAppTraits::CreateLogTarget()");
		}
		wxLog * lret = self->CreateLogTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLog >::push(L,lret,false);

		return 1;
	}

	// wxMessageOutput * wxAppTraits::CreateMessageOutput()
	static int _bind_CreateMessageOutput(lua_State *L) {
		if (!_lg_typecheck_CreateMessageOutput(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMessageOutput * wxAppTraits::CreateMessageOutput() function, expected prototype:\nwxMessageOutput * wxAppTraits::CreateMessageOutput()\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMessageOutput * wxAppTraits::CreateMessageOutput()");
		}
		wxMessageOutput * lret = self->CreateMessageOutput();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMessageOutput >::push(L,lret,false);

		return 1;
	}

	// wxRendererNative * wxAppTraits::CreateRenderer()
	static int _bind_CreateRenderer(lua_State *L) {
		if (!_lg_typecheck_CreateRenderer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRendererNative * wxAppTraits::CreateRenderer() function, expected prototype:\nwxRendererNative * wxAppTraits::CreateRenderer()\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRendererNative * wxAppTraits::CreateRenderer()");
		}
		wxRendererNative * lret = self->CreateRenderer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRendererNative >::push(L,lret,false);

		return 1;
	}

	// wxString wxAppTraits::GetDesktopEnvironment() const
	static int _bind_GetDesktopEnvironment(lua_State *L) {
		if (!_lg_typecheck_GetDesktopEnvironment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAppTraits::GetDesktopEnvironment() const function, expected prototype:\nwxString wxAppTraits::GetDesktopEnvironment() const\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAppTraits::GetDesktopEnvironment() const");
		}
		wxString lret = self->GetDesktopEnvironment();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxStandardPaths & wxAppTraits::GetStandardPaths()
	static int _bind_GetStandardPaths(lua_State *L) {
		if (!_lg_typecheck_GetStandardPaths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStandardPaths & wxAppTraits::GetStandardPaths() function, expected prototype:\nwxStandardPaths & wxAppTraits::GetStandardPaths()\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStandardPaths & wxAppTraits::GetStandardPaths()");
		}
		const wxStandardPaths* lret = &self->GetStandardPaths();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStandardPaths >::push(L,lret,false);

		return 1;
	}

	// wxPortId wxAppTraits::GetToolkitVersion(int * major = NULL, int * minor = NULL) const
	static int _bind_GetToolkitVersion(lua_State *L) {
		if (!_lg_typecheck_GetToolkitVersion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPortId wxAppTraits::GetToolkitVersion(int * major = NULL, int * minor = NULL) const function, expected prototype:\nwxPortId wxAppTraits::GetToolkitVersion(int * major = NULL, int * minor = NULL) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int major=luatop>1 ? (int)lua_tointeger(L,2) : NULL;
		int minor=luatop>2 ? (int)lua_tointeger(L,3) : NULL;

		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPortId wxAppTraits::GetToolkitVersion(int *, int *) const");
		}
		wxPortId lret = self->GetToolkitVersion(&major, &minor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAppTraits::HasStderr()
	static int _bind_HasStderr(lua_State *L) {
		if (!_lg_typecheck_HasStderr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppTraits::HasStderr() function, expected prototype:\nbool wxAppTraits::HasStderr()\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppTraits::HasStderr()");
		}
		bool lret = self->HasStderr();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppTraits::IsUsingUniversalWidgets() const
	static int _bind_IsUsingUniversalWidgets(lua_State *L) {
		if (!_lg_typecheck_IsUsingUniversalWidgets(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppTraits::IsUsingUniversalWidgets() const function, expected prototype:\nbool wxAppTraits::IsUsingUniversalWidgets() const\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppTraits::IsUsingUniversalWidgets() const");
		}
		bool lret = self->IsUsingUniversalWidgets();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppTraits::ShowAssertDialog(const wxString & msg)
	static int _bind_ShowAssertDialog(lua_State *L) {
		if (!_lg_typecheck_ShowAssertDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppTraits::ShowAssertDialog(const wxString & msg) function, expected prototype:\nbool wxAppTraits::ShowAssertDialog(const wxString & msg)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString msg(lua_tostring(L,2),lua_objlen(L,2));

		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppTraits::ShowAssertDialog(const wxString &)");
		}
		bool lret = self->ShowAssertDialog(msg);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxConfigBase * wxAppTraits::base_CreateConfig()
	static int _bind_base_CreateConfig(lua_State *L) {
		if (!_lg_typecheck_base_CreateConfig(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxConfigBase * wxAppTraits::base_CreateConfig() function, expected prototype:\nwxConfigBase * wxAppTraits::base_CreateConfig()\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxConfigBase * wxAppTraits::base_CreateConfig()");
		}
		wxConfigBase * lret = self->wxAppTraits::CreateConfig();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConfigBase >::push(L,lret,false);

		return 1;
	}

	// wxStandardPaths & wxAppTraits::base_GetStandardPaths()
	static int _bind_base_GetStandardPaths(lua_State *L) {
		if (!_lg_typecheck_base_GetStandardPaths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStandardPaths & wxAppTraits::base_GetStandardPaths() function, expected prototype:\nwxStandardPaths & wxAppTraits::base_GetStandardPaths()\nClass arguments details:\n");
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStandardPaths & wxAppTraits::base_GetStandardPaths()");
		}
		const wxStandardPaths* lret = &self->wxAppTraits::GetStandardPaths();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStandardPaths >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxAppTraits* LunaTraits< wxAppTraits >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEventLoopBase * wxAppTraits::CreateEventLoop()
	// wxFontMapper * wxAppTraits::CreateFontMapper()
	// wxLog * wxAppTraits::CreateLogTarget()
	// wxMessageOutput * wxAppTraits::CreateMessageOutput()
	// wxRendererNative * wxAppTraits::CreateRenderer()
	// wxString wxAppTraits::GetDesktopEnvironment() const
	// wxPortId wxAppTraits::GetToolkitVersion(int * major = NULL, int * minor = NULL) const
	// bool wxAppTraits::HasStderr()
	// bool wxAppTraits::IsUsingUniversalWidgets() const
	// bool wxAppTraits::ShowAssertDialog(const wxString & msg)
}

void LunaTraits< wxAppTraits >::_bind_dtor(wxAppTraits* obj) {
	delete obj;
}

const char LunaTraits< wxAppTraits >::className[] = "wxAppTraits";
const char LunaTraits< wxAppTraits >::fullName[] = "wxAppTraits";
const char LunaTraits< wxAppTraits >::moduleName[] = "wx";
const char* LunaTraits< wxAppTraits >::parents[] = {0};
const int LunaTraits< wxAppTraits >::hash = 89440075;
const int LunaTraits< wxAppTraits >::uniqueIDs[] = {89440075,0};

luna_RegType LunaTraits< wxAppTraits >::methods[] = {
	{"CreateConfig", &luna_wrapper_wxAppTraits::_bind_CreateConfig},
	{"CreateEventLoop", &luna_wrapper_wxAppTraits::_bind_CreateEventLoop},
	{"CreateFontMapper", &luna_wrapper_wxAppTraits::_bind_CreateFontMapper},
	{"CreateLogTarget", &luna_wrapper_wxAppTraits::_bind_CreateLogTarget},
	{"CreateMessageOutput", &luna_wrapper_wxAppTraits::_bind_CreateMessageOutput},
	{"CreateRenderer", &luna_wrapper_wxAppTraits::_bind_CreateRenderer},
	{"GetDesktopEnvironment", &luna_wrapper_wxAppTraits::_bind_GetDesktopEnvironment},
	{"GetStandardPaths", &luna_wrapper_wxAppTraits::_bind_GetStandardPaths},
	{"GetToolkitVersion", &luna_wrapper_wxAppTraits::_bind_GetToolkitVersion},
	{"HasStderr", &luna_wrapper_wxAppTraits::_bind_HasStderr},
	{"IsUsingUniversalWidgets", &luna_wrapper_wxAppTraits::_bind_IsUsingUniversalWidgets},
	{"ShowAssertDialog", &luna_wrapper_wxAppTraits::_bind_ShowAssertDialog},
	{"base_CreateConfig", &luna_wrapper_wxAppTraits::_bind_base_CreateConfig},
	{"base_GetStandardPaths", &luna_wrapper_wxAppTraits::_bind_base_GetStandardPaths},
	{"dynCast", &luna_wrapper_wxAppTraits::_bind_dynCast},
	{"__eq", &luna_wrapper_wxAppTraits::_bind___eq},
	{"getTable", &luna_wrapper_wxAppTraits::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAppTraits >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAppTraits >::enumValues[] = {
	{0,0}
};


