#include <plug_common.h>

class luna_wrapper_wxGridUpdateLocker {
public:
	typedef Luna< wxGridUpdateLocker > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17833639) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxGridUpdateLocker*)");
		}

		wxGridUpdateLocker* rhs =(Luna< wxGridUpdateLocker >::check(L,2));
		wxGridUpdateLocker* self=(Luna< wxGridUpdateLocker >::check(L,1));
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

		wxGridUpdateLocker* self=(Luna< wxGridUpdateLocker >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGridUpdateLocker");
		
		return luna_dynamicCast(L,converters,"wxGridUpdateLocker",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,19919380)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19919380)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridUpdateLocker::wxGridUpdateLocker(wxGrid * grid = NULL)
	static wxGridUpdateLocker* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridUpdateLocker::wxGridUpdateLocker(wxGrid * grid = NULL) function, expected prototype:\nwxGridUpdateLocker::wxGridUpdateLocker(wxGrid * grid = NULL)\nClass arguments details:\narg 1 ID = 19919380\n");
		}

		int luatop = lua_gettop(L);

		wxGrid* grid=luatop>0 ? (Luna< wxGrid >::check(L,1)) : (wxGrid*)NULL;

		return new wxGridUpdateLocker(grid);
	}


	// Function binds:
	// void wxGridUpdateLocker::Create(wxGrid * grid)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridUpdateLocker::Create(wxGrid * grid) function, expected prototype:\nvoid wxGridUpdateLocker::Create(wxGrid * grid)\nClass arguments details:\narg 1 ID = 19919380\n");
		}

		wxGrid* grid=(Luna< wxGrid >::check(L,2));

		wxGridUpdateLocker* self=(Luna< wxGridUpdateLocker >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridUpdateLocker::Create(wxGrid *). Got : '%s'",typeid(Luna< wxGridUpdateLocker >::check(L,1)).name());
		}
		self->Create(grid);

		return 0;
	}


	// Operator binds:

};

wxGridUpdateLocker* LunaTraits< wxGridUpdateLocker >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridUpdateLocker::_bind_ctor(L);
}

void LunaTraits< wxGridUpdateLocker >::_bind_dtor(wxGridUpdateLocker* obj) {
	delete obj;
}

const char LunaTraits< wxGridUpdateLocker >::className[] = "wxGridUpdateLocker";
const char LunaTraits< wxGridUpdateLocker >::fullName[] = "wxGridUpdateLocker";
const char LunaTraits< wxGridUpdateLocker >::moduleName[] = "wx";
const char* LunaTraits< wxGridUpdateLocker >::parents[] = {0};
const int LunaTraits< wxGridUpdateLocker >::hash = 17833639;
const int LunaTraits< wxGridUpdateLocker >::uniqueIDs[] = {17833639,0};

luna_RegType LunaTraits< wxGridUpdateLocker >::methods[] = {
	{"Create", &luna_wrapper_wxGridUpdateLocker::_bind_Create},
	{"dynCast", &luna_wrapper_wxGridUpdateLocker::_bind_dynCast},
	{"__eq", &luna_wrapper_wxGridUpdateLocker::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridUpdateLocker >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridUpdateLocker >::enumValues[] = {
	{0,0}
};


