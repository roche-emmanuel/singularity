#include <plug_common.h>

class luna_wrapper_wxCountingOutputStream {
public:
	typedef Luna< wxCountingOutputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxCountingOutputStream* ptr= dynamic_cast< wxCountingOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCountingOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCountingOutputStream::wxCountingOutputStream()
	static wxCountingOutputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCountingOutputStream::wxCountingOutputStream() function, expected prototype:\nwxCountingOutputStream::wxCountingOutputStream()\nClass arguments details:\n");
		}


		return new wxCountingOutputStream();
	}


	// Function binds:
	// size_t wxCountingOutputStream::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxCountingOutputStream::GetSize() const function, expected prototype:\nsize_t wxCountingOutputStream::GetSize() const\nClass arguments details:\n");
		}


		wxCountingOutputStream* self=dynamic_cast< wxCountingOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxCountingOutputStream::GetSize() const");
		}
		size_t lret = self->GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxCountingOutputStream* LunaTraits< wxCountingOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCountingOutputStream::_bind_ctor(L);
}

void LunaTraits< wxCountingOutputStream >::_bind_dtor(wxCountingOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxCountingOutputStream >::className[] = "wxCountingOutputStream";
const char LunaTraits< wxCountingOutputStream >::fullName[] = "wxCountingOutputStream";
const char LunaTraits< wxCountingOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxCountingOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxCountingOutputStream >::hash = 44301532;
const int LunaTraits< wxCountingOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCountingOutputStream >::methods[] = {
	{"GetSize", &luna_wrapper_wxCountingOutputStream::_bind_GetSize},
	{0,0}
};

luna_ConverterType LunaTraits< wxCountingOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxCountingOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCountingOutputStream >::enumValues[] = {
	{0,0}
};


