#include <plug_common.h>

class luna_wrapper_wxEventBlocker {
public:
	typedef Luna< wxEventBlocker > luna_t;

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
		wxEventBlocker* ptr= dynamic_cast< wxEventBlocker* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxEventBlocker >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxEventBlocker* ptr= static_cast< wxEventBlocker* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxEventBlocker >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Block(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxEventBlocker::wxEventBlocker(wxWindow * win, int type = -1)
	static wxEventBlocker* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventBlocker::wxEventBlocker(wxWindow * win, int type = -1) function, expected prototype:\nwxEventBlocker::wxEventBlocker(wxWindow * win, int type = -1)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int type=luatop>1 ? (int)lua_tointeger(L,2) : -1;

		return new wxEventBlocker(win, type);
	}


	// Function binds:
	// void wxEventBlocker::Block(int eventType)
	static int _bind_Block(lua_State *L) {
		if (!_lg_typecheck_Block(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEventBlocker::Block(int eventType) function, expected prototype:\nvoid wxEventBlocker::Block(int eventType)\nClass arguments details:\n");
		}

		int eventType=(int)lua_tointeger(L,2);

		wxEventBlocker* self=dynamic_cast< wxEventBlocker* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEventBlocker::Block(int)");
		}
		self->Block(eventType);

		return 0;
	}


	// Operator binds:

};

wxEventBlocker* LunaTraits< wxEventBlocker >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxEventBlocker::_bind_ctor(L);
}

void LunaTraits< wxEventBlocker >::_bind_dtor(wxEventBlocker* obj) {
	delete obj;
}

const char LunaTraits< wxEventBlocker >::className[] = "wxEventBlocker";
const char LunaTraits< wxEventBlocker >::fullName[] = "wxEventBlocker";
const char LunaTraits< wxEventBlocker >::moduleName[] = "wx";
const char* LunaTraits< wxEventBlocker >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxEventBlocker >::hash = 50898209;
const int LunaTraits< wxEventBlocker >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxEventBlocker >::methods[] = {
	{"Block", &luna_wrapper_wxEventBlocker::_bind_Block},
	{"__eq", &luna_wrapper_wxEventBlocker::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxEventBlocker >::converters[] = {
	{"wxObject", &luna_wrapper_wxEventBlocker::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxEventBlocker::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxEventBlocker >::enumValues[] = {
	{0,0}
};


