#include <plug_common.h>

class luna_wrapper_wxStdOutputStream {
public:
	typedef Luna< wxStdOutputStream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63608358) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxStdOutputStream*)");
		}

		wxStdOutputStream* rhs =(Luna< wxStdOutputStream >::check(L,2));
		wxStdOutputStream* self=(Luna< wxStdOutputStream >::check(L,1));
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

		wxStdOutputStream* self=(Luna< wxStdOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStdOutputStream");
		
		return luna_dynamicCast(L,converters,"wxStdOutputStream",name);
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
	// wxStdOutputStream::wxStdOutputStream(wxOutputStream & stream)
	static wxStdOutputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStdOutputStream::wxStdOutputStream(wxOutputStream & stream) function, expected prototype:\nwxStdOutputStream::wxStdOutputStream(wxOutputStream & stream)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxStdOutputStream::wxStdOutputStream function");
		}
		wxOutputStream & stream=*stream_ptr;

		return new wxStdOutputStream(stream);
	}


	// Function binds:

	// Operator binds:

};

wxStdOutputStream* LunaTraits< wxStdOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStdOutputStream::_bind_ctor(L);
}

void LunaTraits< wxStdOutputStream >::_bind_dtor(wxStdOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxStdOutputStream >::className[] = "wxStdOutputStream";
const char LunaTraits< wxStdOutputStream >::fullName[] = "wxStdOutputStream";
const char LunaTraits< wxStdOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxStdOutputStream >::parents[] = {0};
const int LunaTraits< wxStdOutputStream >::hash = 63608358;
const int LunaTraits< wxStdOutputStream >::uniqueIDs[] = {63608358,0};

luna_RegType LunaTraits< wxStdOutputStream >::methods[] = {
	{"dynCast", &luna_wrapper_wxStdOutputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_wxStdOutputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxStdOutputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStdOutputStream >::enumValues[] = {
	{0,0}
};


