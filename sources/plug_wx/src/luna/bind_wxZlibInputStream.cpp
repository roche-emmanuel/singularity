#include <plug_common.h>

class luna_wrapper_wxZlibInputStream {
public:
	typedef Luna< wxZlibInputStream > luna_t;

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
		wxZlibInputStream* ptr= dynamic_cast< wxZlibInputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxZlibInputStream >::push(L,ptr,false);
		return 1;
	};


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

	// Function binds:
	// bool wxZlibInputStream::SetDictionary(const char * data, const size_t datalen)
	static int _bind_SetDictionary(lua_State *L) {
		if (!_lg_typecheck_SetDictionary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxZlibInputStream::SetDictionary(const char * data, const size_t datalen) function, expected prototype:\nbool wxZlibInputStream::SetDictionary(const char * data, const size_t datalen)\nClass arguments details:\n");
		}

		const char * data=(const char *)lua_tostring(L,2);
		size_t datalen=(size_t)lua_tointeger(L,3);

		wxZlibInputStream* self=dynamic_cast< wxZlibInputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxZlibInputStream::SetDictionary(const char *, const size_t)");
		}
		bool lret = self->SetDictionary(data, datalen);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxZlibInputStream::CanHandleGZip()
	static int _bind_CanHandleGZip(lua_State *L) {
		if (!_lg_typecheck_CanHandleGZip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxZlibInputStream::CanHandleGZip() function, expected prototype:\nstatic bool wxZlibInputStream::CanHandleGZip()\nClass arguments details:\n");
		}


		bool lret = wxZlibInputStream::CanHandleGZip();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxZlibInputStream* LunaTraits< wxZlibInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)

	// Abstract operators:
}

void LunaTraits< wxZlibInputStream >::_bind_dtor(wxZlibInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxZlibInputStream >::className[] = "wxZlibInputStream";
const char LunaTraits< wxZlibInputStream >::fullName[] = "wxZlibInputStream";
const char LunaTraits< wxZlibInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxZlibInputStream >::parents[] = {"wx.wxFilterInputStream", 0};
const int LunaTraits< wxZlibInputStream >::hash = 19303902;
const int LunaTraits< wxZlibInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxZlibInputStream >::methods[] = {
	{"SetDictionary", &luna_wrapper_wxZlibInputStream::_bind_SetDictionary},
	{"CanHandleGZip", &luna_wrapper_wxZlibInputStream::_bind_CanHandleGZip},
	{"__eq", &luna_wrapper_wxZlibInputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxZlibInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxZlibInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxZlibInputStream >::enumValues[] = {
	{0,0}
};


