#include <plug_common.h>

#include <luna/wrappers/wrapper_wxStackWalker.h>

class luna_wrapper_wxStackWalker {
public:
	typedef Luna< wxStackWalker > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxStackWalker* self=(Luna< wxStackWalker >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,30547185) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxStackWalker*)");
		}

		wxStackWalker* rhs =(Luna< wxStackWalker >::check(L,2));
		wxStackWalker* self=(Luna< wxStackWalker >::check(L,1));
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

		wxStackWalker* self=(Luna< wxStackWalker >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStackWalker");
		
		return luna_dynamicCast(L,converters,"wxStackWalker",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Walk(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WalkFromException(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Walk(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_WalkFromException(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStackWalker::wxStackWalker(lua_Table * data, const char * argv0 = NULL)
	static wxStackWalker* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStackWalker::wxStackWalker(lua_Table * data, const char * argv0 = NULL) function, expected prototype:\nwxStackWalker::wxStackWalker(lua_Table * data, const char * argv0 = NULL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * argv0=luatop>1 ? (const char *)lua_tostring(L,2) : NULL;

		return new wrapper_wxStackWalker(L,NULL, argv0);
	}


	// Function binds:
	// void wxStackWalker::Walk(size_t skip = 1, size_t maxDepth = (200))
	static int _bind_Walk(lua_State *L) {
		if (!_lg_typecheck_Walk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStackWalker::Walk(size_t skip = 1, size_t maxDepth = (200)) function, expected prototype:\nvoid wxStackWalker::Walk(size_t skip = 1, size_t maxDepth = (200))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t skip=luatop>1 ? (size_t)lua_tointeger(L,2) : 1;
		size_t maxDepth=luatop>2 ? (size_t)lua_tointeger(L,3) : (200);

		wxStackWalker* self=(Luna< wxStackWalker >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStackWalker::Walk(size_t, size_t)");
		}
		self->Walk(skip, maxDepth);

		return 0;
	}

	// void wxStackWalker::WalkFromException(size_t maxDepth = (200))
	static int _bind_WalkFromException(lua_State *L) {
		if (!_lg_typecheck_WalkFromException(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStackWalker::WalkFromException(size_t maxDepth = (200)) function, expected prototype:\nvoid wxStackWalker::WalkFromException(size_t maxDepth = (200))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t maxDepth=luatop>1 ? (size_t)lua_tointeger(L,2) : (200);

		wxStackWalker* self=(Luna< wxStackWalker >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStackWalker::WalkFromException(size_t)");
		}
		self->WalkFromException(maxDepth);

		return 0;
	}

	// void wxStackWalker::base_Walk(size_t skip = 1, size_t maxDepth = (200))
	static int _bind_base_Walk(lua_State *L) {
		if (!_lg_typecheck_base_Walk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStackWalker::base_Walk(size_t skip = 1, size_t maxDepth = (200)) function, expected prototype:\nvoid wxStackWalker::base_Walk(size_t skip = 1, size_t maxDepth = (200))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t skip=luatop>1 ? (size_t)lua_tointeger(L,2) : 1;
		size_t maxDepth=luatop>2 ? (size_t)lua_tointeger(L,3) : (200);

		wxStackWalker* self=(Luna< wxStackWalker >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStackWalker::base_Walk(size_t, size_t)");
		}
		self->wxStackWalker::Walk(skip, maxDepth);

		return 0;
	}

	// void wxStackWalker::base_WalkFromException(size_t maxDepth = (200))
	static int _bind_base_WalkFromException(lua_State *L) {
		if (!_lg_typecheck_base_WalkFromException(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStackWalker::base_WalkFromException(size_t maxDepth = (200)) function, expected prototype:\nvoid wxStackWalker::base_WalkFromException(size_t maxDepth = (200))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t maxDepth=luatop>1 ? (size_t)lua_tointeger(L,2) : (200);

		wxStackWalker* self=(Luna< wxStackWalker >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStackWalker::base_WalkFromException(size_t)");
		}
		self->wxStackWalker::WalkFromException(maxDepth);

		return 0;
	}


	// Operator binds:

};

wxStackWalker* LunaTraits< wxStackWalker >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStackWalker::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxStackWalker::OnStackFrame(const wxStackFrame & frame)
}

void LunaTraits< wxStackWalker >::_bind_dtor(wxStackWalker* obj) {
	delete obj;
}

const char LunaTraits< wxStackWalker >::className[] = "wxStackWalker";
const char LunaTraits< wxStackWalker >::fullName[] = "wxStackWalker";
const char LunaTraits< wxStackWalker >::moduleName[] = "wx";
const char* LunaTraits< wxStackWalker >::parents[] = {0};
const int LunaTraits< wxStackWalker >::hash = 30547185;
const int LunaTraits< wxStackWalker >::uniqueIDs[] = {30547185,0};

luna_RegType LunaTraits< wxStackWalker >::methods[] = {
	{"Walk", &luna_wrapper_wxStackWalker::_bind_Walk},
	{"WalkFromException", &luna_wrapper_wxStackWalker::_bind_WalkFromException},
	{"base_Walk", &luna_wrapper_wxStackWalker::_bind_base_Walk},
	{"base_WalkFromException", &luna_wrapper_wxStackWalker::_bind_base_WalkFromException},
	{"dynCast", &luna_wrapper_wxStackWalker::_bind_dynCast},
	{"__eq", &luna_wrapper_wxStackWalker::_bind___eq},
	{"getTable", &luna_wrapper_wxStackWalker::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxStackWalker >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStackWalker >::enumValues[] = {
	{0,0}
};


