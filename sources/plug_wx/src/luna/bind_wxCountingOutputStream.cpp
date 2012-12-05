#include <plug_common.h>

#include <luna/wrappers/wrapper_wxCountingOutputStream.h>

class luna_wrapper_wxCountingOutputStream {
public:
	typedef Luna< wxCountingOutputStream > luna_t;

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
		wxCountingOutputStream* ptr= dynamic_cast< wxCountingOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCountingOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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
	static wxCountingOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCountingOutputStream::wxCountingOutputStream() function, expected prototype:\nwxCountingOutputStream::wxCountingOutputStream()\nClass arguments details:\n");
		}


		return new wxCountingOutputStream();
	}

	// wxCountingOutputStream::wxCountingOutputStream(lua_Table * data)
	static wxCountingOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCountingOutputStream::wxCountingOutputStream(lua_Table * data) function, expected prototype:\nwxCountingOutputStream::wxCountingOutputStream(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxCountingOutputStream(L,NULL);
	}

	// Overload binder for wxCountingOutputStream::wxCountingOutputStream
	static wxCountingOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxCountingOutputStream, cannot match any of the overloads for function wxCountingOutputStream:\n  wxCountingOutputStream()\n  wxCountingOutputStream(lua_Table *)\n");
		return NULL;
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
	{"__eq", &luna_wrapper_wxCountingOutputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCountingOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxCountingOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCountingOutputStream >::enumValues[] = {
	{0,0}
};


