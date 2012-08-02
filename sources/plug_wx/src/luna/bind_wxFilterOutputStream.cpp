#include <plug_common.h>

class luna_wrapper_wxFilterOutputStream {
public:
	typedef Luna< wxFilterOutputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFilterOutputStream* ptr= dynamic_cast< wxFilterOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFilterOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFilterOutputStream::wxFilterOutputStream(wxOutputStream & stream)
	static wxFilterOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFilterOutputStream::wxFilterOutputStream(wxOutputStream & stream) function, expected prototype:\nwxFilterOutputStream::wxFilterOutputStream(wxOutputStream & stream)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxOutputStream* stream_ptr=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxFilterOutputStream::wxFilterOutputStream function");
		}
		wxOutputStream & stream=*stream_ptr;

		return new wxFilterOutputStream(stream);
	}

	// wxFilterOutputStream::wxFilterOutputStream(wxOutputStream * stream)
	static wxFilterOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFilterOutputStream::wxFilterOutputStream(wxOutputStream * stream) function, expected prototype:\nwxFilterOutputStream::wxFilterOutputStream(wxOutputStream * stream)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxOutputStream* stream=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,1));

		return new wxFilterOutputStream(stream);
	}

	// Overload binder for wxFilterOutputStream::wxFilterOutputStream
	static wxFilterOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFilterOutputStream, cannot match any of the overloads for function wxFilterOutputStream:\n  wxFilterOutputStream(wxOutputStream &)\n  wxFilterOutputStream(wxOutputStream *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

wxFilterOutputStream* LunaTraits< wxFilterOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFilterOutputStream::_bind_ctor(L);
}

void LunaTraits< wxFilterOutputStream >::_bind_dtor(wxFilterOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxFilterOutputStream >::className[] = "wxFilterOutputStream";
const char LunaTraits< wxFilterOutputStream >::fullName[] = "wxFilterOutputStream";
const char LunaTraits< wxFilterOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxFilterOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxFilterOutputStream >::hash = 52546027;
const int LunaTraits< wxFilterOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFilterOutputStream >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxFilterOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxFilterOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFilterOutputStream >::enumValues[] = {
	{0,0}
};


