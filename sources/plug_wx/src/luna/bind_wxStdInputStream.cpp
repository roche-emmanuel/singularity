#include <plug_common.h>

class luna_wrapper_wxStdInputStream {
public:
	typedef Luna< wxStdInputStream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37809017) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxStdInputStream*)");
		}

		wxStdInputStream* rhs =(Luna< wxStdInputStream >::check(L,2));
		wxStdInputStream* self=(Luna< wxStdInputStream >::check(L,1));
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

		wxStdInputStream* self=(Luna< wxStdInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStdInputStream");
		
		return luna_dynamicCast(L,converters,"wxStdInputStream",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStdInputStream::wxStdInputStream(wxInputStream & stream)
	static wxStdInputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStdInputStream::wxStdInputStream(wxInputStream & stream) function, expected prototype:\nwxStdInputStream::wxStdInputStream(wxInputStream & stream)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxStdInputStream::wxStdInputStream function");
		}
		wxInputStream & stream=*stream_ptr;

		return new wxStdInputStream(stream);
	}


	// Function binds:

	// Operator binds:

};

wxStdInputStream* LunaTraits< wxStdInputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStdInputStream::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxStdInputStream >::_bind_dtor(wxStdInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxStdInputStream >::className[] = "wxStdInputStream";
const char LunaTraits< wxStdInputStream >::fullName[] = "wxStdInputStream";
const char LunaTraits< wxStdInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxStdInputStream >::parents[] = {0};
const int LunaTraits< wxStdInputStream >::hash = 37809017;
const int LunaTraits< wxStdInputStream >::uniqueIDs[] = {37809017,0};

luna_RegType LunaTraits< wxStdInputStream >::methods[] = {
	{"dynCast", &luna_wrapper_wxStdInputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_wxStdInputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxStdInputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStdInputStream >::enumValues[] = {
	{0,0}
};


