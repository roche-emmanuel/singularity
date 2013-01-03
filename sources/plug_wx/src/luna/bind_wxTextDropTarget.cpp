#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTextDropTarget.h>

class luna_wrapper_wxTextDropTarget {
public:
	typedef Luna< wxTextDropTarget > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxTextDropTarget* ptr= dynamic_cast< wxTextDropTarget* >(Luna< wxDropTarget >::check(L,1));
		wxTextDropTarget* ptr= luna_caster< wxDropTarget, wxTextDropTarget >::cast(Luna< wxDropTarget >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextDropTarget >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


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

	inline static bool _lg_typecheck_base_OnDragOver(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnEnter(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnLeave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnDrop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTextDropTarget::wxTextDropTarget(lua_Table * data)
	static wxTextDropTarget* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextDropTarget::wxTextDropTarget(lua_Table * data) function, expected prototype:\nwxTextDropTarget::wxTextDropTarget(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxTextDropTarget(L,NULL);
	}


	// Function binds:
	// bool wxTextDropTarget::OnDrop(int x, int y)
	static int _bind_OnDrop(lua_State *L) {
		if (!_lg_typecheck_OnDrop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextDropTarget::OnDrop(int x, int y) function, expected prototype:\nbool wxTextDropTarget::OnDrop(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxTextDropTarget* self=Luna< wxDropTarget >::checkSubType< wxTextDropTarget >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextDropTarget::OnDrop(int, int). Got : '%s'",typeid(Luna< wxDropTarget >::check(L,1)).name());
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

		wxTextDropTarget* self=Luna< wxDropTarget >::checkSubType< wxTextDropTarget >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextDropTarget::OnDropText(int, int, const wxString &). Got : '%s'",typeid(Luna< wxDropTarget >::check(L,1)).name());
		}
		bool lret = self->OnDropText(x, y, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDragResult wxTextDropTarget::base_OnDragOver(int x, int y, wxDragResult def)
	static int _bind_base_OnDragOver(lua_State *L) {
		if (!_lg_typecheck_base_OnDragOver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDragResult wxTextDropTarget::base_OnDragOver(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxTextDropTarget::base_OnDragOver(int x, int y, wxDragResult def)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxTextDropTarget* self=Luna< wxDropTarget >::checkSubType< wxTextDropTarget >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDragResult wxTextDropTarget::base_OnDragOver(int, int, wxDragResult). Got : '%s'",typeid(Luna< wxDropTarget >::check(L,1)).name());
		}
		wxDragResult lret = self->wxTextDropTarget::OnDragOver(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDragResult wxTextDropTarget::base_OnEnter(int x, int y, wxDragResult def)
	static int _bind_base_OnEnter(lua_State *L) {
		if (!_lg_typecheck_base_OnEnter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDragResult wxTextDropTarget::base_OnEnter(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxTextDropTarget::base_OnEnter(int x, int y, wxDragResult def)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxTextDropTarget* self=Luna< wxDropTarget >::checkSubType< wxTextDropTarget >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDragResult wxTextDropTarget::base_OnEnter(int, int, wxDragResult). Got : '%s'",typeid(Luna< wxDropTarget >::check(L,1)).name());
		}
		wxDragResult lret = self->wxTextDropTarget::OnEnter(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextDropTarget::base_OnLeave()
	static int _bind_base_OnLeave(lua_State *L) {
		if (!_lg_typecheck_base_OnLeave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextDropTarget::base_OnLeave() function, expected prototype:\nvoid wxTextDropTarget::base_OnLeave()\nClass arguments details:\n");
		}


		wxTextDropTarget* self=Luna< wxDropTarget >::checkSubType< wxTextDropTarget >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextDropTarget::base_OnLeave(). Got : '%s'",typeid(Luna< wxDropTarget >::check(L,1)).name());
		}
		self->wxTextDropTarget::OnLeave();

		return 0;
	}

	// bool wxTextDropTarget::base_OnDrop(int x, int y)
	static int _bind_base_OnDrop(lua_State *L) {
		if (!_lg_typecheck_base_OnDrop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextDropTarget::base_OnDrop(int x, int y) function, expected prototype:\nbool wxTextDropTarget::base_OnDrop(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxTextDropTarget* self=Luna< wxDropTarget >::checkSubType< wxTextDropTarget >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextDropTarget::base_OnDrop(int, int). Got : '%s'",typeid(Luna< wxDropTarget >::check(L,1)).name());
		}
		bool lret = self->wxTextDropTarget::OnDrop(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTextDropTarget* LunaTraits< wxTextDropTarget >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextDropTarget::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxTextDropTarget::OnDropText(int x, int y, const wxString & data)
	// bool wxDropTarget::GetData()
	// wxDragResult wxDropTarget::OnData(int x, int y, wxDragResult def)
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
	{"base_OnDragOver", &luna_wrapper_wxTextDropTarget::_bind_base_OnDragOver},
	{"base_OnEnter", &luna_wrapper_wxTextDropTarget::_bind_base_OnEnter},
	{"base_OnLeave", &luna_wrapper_wxTextDropTarget::_bind_base_OnLeave},
	{"base_OnDrop", &luna_wrapper_wxTextDropTarget::_bind_base_OnDrop},
	{"__eq", &luna_wrapper_wxTextDropTarget::_bind___eq},
	{"getTable", &luna_wrapper_wxTextDropTarget::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextDropTarget >::converters[] = {
	{"wxDropTarget", &luna_wrapper_wxTextDropTarget::_cast_from_wxDropTarget},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextDropTarget >::enumValues[] = {
	{0,0}
};


