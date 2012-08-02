#include <plug_common.h>

class luna_wrapper_wxMemoryOutputStream {
public:
	typedef Luna< wxMemoryOutputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMemoryOutputStream* ptr= dynamic_cast< wxMemoryOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMemoryOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CopyTo(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMemoryOutputStream::wxMemoryOutputStream(void * data = NULL, size_t length = 0)
	static wxMemoryOutputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMemoryOutputStream::wxMemoryOutputStream(void * data = NULL, size_t length = 0) function, expected prototype:\nwxMemoryOutputStream::wxMemoryOutputStream(void * data = NULL, size_t length = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		void* data=luatop>0 ? (Luna< void >::check(L,1)) : NULL;
		size_t length=luatop>1 ? (size_t)lua_tointeger(L,2) : 0;

		return new wxMemoryOutputStream(data, length);
	}


	// Function binds:
	// size_t wxMemoryOutputStream::CopyTo(void * buffer, size_t len) const
	static int _bind_CopyTo(lua_State *L) {
		if (!_lg_typecheck_CopyTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxMemoryOutputStream::CopyTo(void * buffer, size_t len) const function, expected prototype:\nsize_t wxMemoryOutputStream::CopyTo(void * buffer, size_t len) const\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t len=(size_t)lua_tointeger(L,3);

		wxMemoryOutputStream* self=dynamic_cast< wxMemoryOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxMemoryOutputStream::CopyTo(void *, size_t) const");
		}
		size_t lret = self->CopyTo(buffer, len);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMemoryOutputStream* LunaTraits< wxMemoryOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMemoryOutputStream::_bind_ctor(L);
}

void LunaTraits< wxMemoryOutputStream >::_bind_dtor(wxMemoryOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxMemoryOutputStream >::className[] = "wxMemoryOutputStream";
const char LunaTraits< wxMemoryOutputStream >::fullName[] = "wxMemoryOutputStream";
const char LunaTraits< wxMemoryOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxMemoryOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxMemoryOutputStream >::hash = 55279384;
const int LunaTraits< wxMemoryOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMemoryOutputStream >::methods[] = {
	{"CopyTo", &luna_wrapper_wxMemoryOutputStream::_bind_CopyTo},
	{0,0}
};

luna_ConverterType LunaTraits< wxMemoryOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxMemoryOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMemoryOutputStream >::enumValues[] = {
	{0,0}
};


