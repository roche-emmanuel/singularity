#include <plug_common.h>

class luna_wrapper_wxZlibOutputStream {
public:
	typedef Luna< wxZlibOutputStream > luna_t;

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
		wxZlibOutputStream* ptr= dynamic_cast< wxZlibOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxZlibOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_SetDictionary(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanHandleGZip(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxZlibOutputStream::SetDictionary(const char * data, const size_t datalen)
	static int _bind_SetDictionary(lua_State *L) {
		if (!_lg_typecheck_SetDictionary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxZlibOutputStream::SetDictionary(const char * data, const size_t datalen) function, expected prototype:\nbool wxZlibOutputStream::SetDictionary(const char * data, const size_t datalen)\nClass arguments details:\n");
		}

		const char * data=(const char *)lua_tostring(L,2);
		size_t datalen=(size_t)lua_tointeger(L,3);

		wxZlibOutputStream* self=dynamic_cast< wxZlibOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxZlibOutputStream::SetDictionary(const char *, const size_t)");
		}
		bool lret = self->SetDictionary(data, datalen);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxZlibOutputStream::CanHandleGZip()
	static int _bind_CanHandleGZip(lua_State *L) {
		if (!_lg_typecheck_CanHandleGZip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxZlibOutputStream::CanHandleGZip() function, expected prototype:\nstatic bool wxZlibOutputStream::CanHandleGZip()\nClass arguments details:\n");
		}


		bool lret = wxZlibOutputStream::CanHandleGZip();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxZlibOutputStream* LunaTraits< wxZlibOutputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxZlibOutputStream >::_bind_dtor(wxZlibOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxZlibOutputStream >::className[] = "wxZlibOutputStream";
const char LunaTraits< wxZlibOutputStream >::fullName[] = "wxZlibOutputStream";
const char LunaTraits< wxZlibOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxZlibOutputStream >::parents[] = {"wx.wxFilterOutputStream", 0};
const int LunaTraits< wxZlibOutputStream >::hash = 65927564;
const int LunaTraits< wxZlibOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxZlibOutputStream >::methods[] = {
	{"SetDictionary", &luna_wrapper_wxZlibOutputStream::_bind_SetDictionary},
	{"CanHandleGZip", &luna_wrapper_wxZlibOutputStream::_bind_CanHandleGZip},
	{"__eq", &luna_wrapper_wxZlibOutputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxZlibOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxZlibOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxZlibOutputStream >::enumValues[] = {
	{0,0}
};


