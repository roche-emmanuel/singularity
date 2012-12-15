#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFFileInputStream.h>

class luna_wrapper_wxFFileInputStream {
public:
	typedef Luna< wxFFileInputStream > luna_t;

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
		//wxFFileInputStream* ptr= dynamic_cast< wxFFileInputStream* >(Luna< wxObject >::check(L,1));
		wxFFileInputStream* ptr= luna_caster< wxObject, wxFFileInputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFFileInputStream >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxFFileInputStream* LunaTraits< wxFFileInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)
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
	{"__eq", &luna_wrapper_wxFFileInputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFFileInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxFFileInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFFileInputStream >::enumValues[] = {
	{0,0}
};


