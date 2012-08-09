#include <plug_common.h>

class luna_wrapper_wxContextHelp {
public:
	typedef Luna< wxContextHelp > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxContextHelp* ptr= dynamic_cast< wxContextHelp* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxContextHelp >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_BeginContextHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndContextHelp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxContextHelp::wxContextHelp(wxWindow * window = NULL, bool doNow = true)
	static wxContextHelp* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxContextHelp::wxContextHelp(wxWindow * window = NULL, bool doNow = true) function, expected prototype:\nwxContextHelp::wxContextHelp(wxWindow * window = NULL, bool doNow = true)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* window=luatop>0 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) : (wxWindow*)NULL;
		bool doNow=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		return new wxContextHelp(window, doNow);
	}


	// Function binds:
	// bool wxContextHelp::BeginContextHelp(wxWindow * window)
	static int _bind_BeginContextHelp(lua_State *L) {
		if (!_lg_typecheck_BeginContextHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxContextHelp::BeginContextHelp(wxWindow * window) function, expected prototype:\nbool wxContextHelp::BeginContextHelp(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxContextHelp* self=dynamic_cast< wxContextHelp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxContextHelp::BeginContextHelp(wxWindow *)");
		}
		bool lret = self->BeginContextHelp(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxContextHelp::EndContextHelp()
	static int _bind_EndContextHelp(lua_State *L) {
		if (!_lg_typecheck_EndContextHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxContextHelp::EndContextHelp() function, expected prototype:\nbool wxContextHelp::EndContextHelp()\nClass arguments details:\n");
		}


		wxContextHelp* self=dynamic_cast< wxContextHelp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxContextHelp::EndContextHelp()");
		}
		bool lret = self->EndContextHelp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxContextHelp* LunaTraits< wxContextHelp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxContextHelp::_bind_ctor(L);
}

void LunaTraits< wxContextHelp >::_bind_dtor(wxContextHelp* obj) {
	delete obj;
}

const char LunaTraits< wxContextHelp >::className[] = "wxContextHelp";
const char LunaTraits< wxContextHelp >::fullName[] = "wxContextHelp";
const char LunaTraits< wxContextHelp >::moduleName[] = "wx";
const char* LunaTraits< wxContextHelp >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxContextHelp >::hash = 38167988;
const int LunaTraits< wxContextHelp >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxContextHelp >::methods[] = {
	{"BeginContextHelp", &luna_wrapper_wxContextHelp::_bind_BeginContextHelp},
	{"EndContextHelp", &luna_wrapper_wxContextHelp::_bind_EndContextHelp},
	{0,0}
};

luna_ConverterType LunaTraits< wxContextHelp >::converters[] = {
	{"wxObject", &luna_wrapper_wxContextHelp::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxContextHelp >::enumValues[] = {
	{0,0}
};

