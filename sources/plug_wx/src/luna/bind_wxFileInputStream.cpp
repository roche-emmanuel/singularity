#include <plug_common.h>

class luna_wrapper_wxFileInputStream {
public:
	typedef Luna< wxFileInputStream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileInputStream* ptr= dynamic_cast< wxFileInputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileInputStream >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxFileInputStream::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileInputStream::IsOk() const function, expected prototype:\nbool wxFileInputStream::IsOk() const\nClass arguments details:\n");
		}


		wxFileInputStream* self=dynamic_cast< wxFileInputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileInputStream::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFileInputStream* LunaTraits< wxFileInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)

	// Abstract operators:
}

void LunaTraits< wxFileInputStream >::_bind_dtor(wxFileInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxFileInputStream >::className[] = "wxFileInputStream";
const char LunaTraits< wxFileInputStream >::fullName[] = "wxFileInputStream";
const char LunaTraits< wxFileInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxFileInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxFileInputStream >::hash = 72154500;
const int LunaTraits< wxFileInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileInputStream >::methods[] = {
	{"IsOk", &luna_wrapper_wxFileInputStream::_bind_IsOk},
	{"__eq", &luna_wrapper_wxFileInputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileInputStream >::enumValues[] = {
	{0,0}
};


