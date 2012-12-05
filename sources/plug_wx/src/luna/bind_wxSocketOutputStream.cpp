#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSocketOutputStream.h>

class luna_wrapper_wxSocketOutputStream {
public:
	typedef Luna< wxSocketOutputStream > luna_t;

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
		wxSocketOutputStream* ptr= dynamic_cast< wxSocketOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSocketOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!dynamic_cast< wxSocketBase* >(Luna< wxObject >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxSocketBase* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSocketOutputStream::wxSocketOutputStream(wxSocketBase & s)
	static wxSocketOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSocketOutputStream::wxSocketOutputStream(wxSocketBase & s) function, expected prototype:\nwxSocketOutputStream::wxSocketOutputStream(wxSocketBase & s)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSocketBase* s_ptr=dynamic_cast< wxSocketBase* >(Luna< wxObject >::check(L,1));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxSocketOutputStream::wxSocketOutputStream function");
		}
		wxSocketBase & s=*s_ptr;

		return new wxSocketOutputStream(s);
	}

	// wxSocketOutputStream::wxSocketOutputStream(lua_Table * data, wxSocketBase & s)
	static wxSocketOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSocketOutputStream::wxSocketOutputStream(lua_Table * data, wxSocketBase & s) function, expected prototype:\nwxSocketOutputStream::wxSocketOutputStream(lua_Table * data, wxSocketBase & s)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		wxSocketBase* s_ptr=dynamic_cast< wxSocketBase* >(Luna< wxObject >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxSocketOutputStream::wxSocketOutputStream function");
		}
		wxSocketBase & s=*s_ptr;

		return new wrapper_wxSocketOutputStream(L,NULL, s);
	}

	// Overload binder for wxSocketOutputStream::wxSocketOutputStream
	static wxSocketOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSocketOutputStream, cannot match any of the overloads for function wxSocketOutputStream:\n  wxSocketOutputStream(wxSocketBase &)\n  wxSocketOutputStream(lua_Table *, wxSocketBase &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

wxSocketOutputStream* LunaTraits< wxSocketOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSocketOutputStream::_bind_ctor(L);
}

void LunaTraits< wxSocketOutputStream >::_bind_dtor(wxSocketOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxSocketOutputStream >::className[] = "wxSocketOutputStream";
const char LunaTraits< wxSocketOutputStream >::fullName[] = "wxSocketOutputStream";
const char LunaTraits< wxSocketOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxSocketOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxSocketOutputStream >::hash = 46772636;
const int LunaTraits< wxSocketOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSocketOutputStream >::methods[] = {
	{"__eq", &luna_wrapper_wxSocketOutputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSocketOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxSocketOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSocketOutputStream >::enumValues[] = {
	{0,0}
};


