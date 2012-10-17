#include <plug_common.h>

class luna_wrapper_wxTextDropTarget {
public:
	typedef Luna< wxTextDropTarget > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93694316) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDropTarget*)");
		}

		wxDropTarget* rhs =(Luna< wxDropTarget >::check(L,2));
		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxDropTarget(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTextDropTarget* ptr= dynamic_cast< wxTextDropTarget* >(Luna< wxDropTarget >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextDropTarget >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_OnDrop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDropText(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxTextDropTarget::OnDrop(int x, int y)
	static int _bind_OnDrop(lua_State *L) {
		if (!_lg_typecheck_OnDrop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextDropTarget::OnDrop(int x, int y) function, expected prototype:\nbool wxTextDropTarget::OnDrop(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxTextDropTarget* self=dynamic_cast< wxTextDropTarget* >(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextDropTarget::OnDrop(int, int)");
		}
		bool lret = self->OnDrop(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextDropTarget::OnDropText(int x, int y, const wxString & data)
	static int _bind_OnDropText(lua_State *L) {
		if (!_lg_typecheck_OnDropText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextDropTarget::OnDropText(int x, int y, const wxString & data) function, expected prototype:\nbool wxTextDropTarget::OnDropText(int x, int y, const wxString & data)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxString data(lua_tostring(L,4),lua_objlen(L,4));

		wxTextDropTarget* self=dynamic_cast< wxTextDropTarget* >(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextDropTarget::OnDropText(int, int, const wxString &)");
		}
		bool lret = self->OnDropText(x, y, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTextDropTarget* LunaTraits< wxTextDropTarget >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxTextDropTarget::OnDropText(int x, int y, const wxString & data)
	// bool wxDropTarget::GetData()

	// Abstract operators:
}

void LunaTraits< wxTextDropTarget >::_bind_dtor(wxTextDropTarget* obj) {
	delete obj;
}

const char LunaTraits< wxTextDropTarget >::className[] = "wxTextDropTarget";
const char LunaTraits< wxTextDropTarget >::fullName[] = "wxTextDropTarget";
const char LunaTraits< wxTextDropTarget >::moduleName[] = "wx";
const char* LunaTraits< wxTextDropTarget >::parents[] = {"wx.wxDropTarget", 0};
const int LunaTraits< wxTextDropTarget >::hash = 99278940;
const int LunaTraits< wxTextDropTarget >::uniqueIDs[] = {93694316,0};

luna_RegType LunaTraits< wxTextDropTarget >::methods[] = {
	{"OnDrop", &luna_wrapper_wxTextDropTarget::_bind_OnDrop},
	{"OnDropText", &luna_wrapper_wxTextDropTarget::_bind_OnDropText},
	{"__eq", &luna_wrapper_wxTextDropTarget::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextDropTarget >::converters[] = {
	{"wxDropTarget", &luna_wrapper_wxTextDropTarget::_cast_from_wxDropTarget},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextDropTarget >::enumValues[] = {
	{0,0}
};


