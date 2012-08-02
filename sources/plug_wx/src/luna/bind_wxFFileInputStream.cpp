#include <plug_common.h>

class luna_wrapper_wxFFileInputStream {
public:
	typedef Luna< wxFFileInputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFFileInputStream* ptr= dynamic_cast< wxFFileInputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFFileInputStream >::push(L,ptr,false);
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
	// bool wxFFileInputStream::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFFileInputStream::IsOk() const function, expected prototype:\nbool wxFFileInputStream::IsOk() const\nClass arguments details:\n");
		}


		wxFFileInputStream* self=dynamic_cast< wxFFileInputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFFileInputStream::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFFileInputStream* LunaTraits< wxFFileInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)

	// Abstract operators:
}

void LunaTraits< wxFFileInputStream >::_bind_dtor(wxFFileInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxFFileInputStream >::className[] = "wxFFileInputStream";
const char LunaTraits< wxFFileInputStream >::fullName[] = "wxFFileInputStream";
const char LunaTraits< wxFFileInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxFFileInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxFFileInputStream >::hash = 78781212;
const int LunaTraits< wxFFileInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFFileInputStream >::methods[] = {
	{"IsOk", &luna_wrapper_wxFFileInputStream::_bind_IsOk},
	{0,0}
};

luna_ConverterType LunaTraits< wxFFileInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxFFileInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFFileInputStream >::enumValues[] = {
	{0,0}
};


