#include <plug_common.h>

#include <luna/wrappers/wrapper_wxStackWalker.h>

class luna_wrapper_wxStackWalker {
public:
	typedef Luna< wxStackWalker > luna_t;

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


	// Operator checkers:
	// (found 0 valid operators)

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


	// Operator binds:

};

wxStackWalker* LunaTraits< wxStackWalker >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
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
	{"dynCast", &luna_wrapper_wxStackWalker::_bind_dynCast},
	{"__eq", &luna_wrapper_wxStackWalker::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxStackWalker >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStackWalker >::enumValues[] = {
	{0,0}
};


