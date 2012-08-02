#include <plug_common.h>

class luna_wrapper_wxDropTarget {
public:
	typedef Luna< wxDropTarget > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDropTarget");
		
		return luna_dynamicCast(L,converters,"wxDropTarget",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnData(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDragOver(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDrop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnEnter(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnLeave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDataObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxDropTarget::GetData()
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDropTarget::GetData() function, expected prototype:\nbool wxDropTarget::GetData()\nClass arguments details:\n");
		}


		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDropTarget::GetData()");
		}
		bool lret = self->GetData();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDragResult wxDropTarget::OnData(int x, int y, wxDragResult def)
	static int _bind_OnData(lua_State *L) {
		if (!_lg_typecheck_OnData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDragResult wxDropTarget::OnData(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxDropTarget::OnData(int x, int y, wxDragResult def)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDragResult wxDropTarget::OnData(int, int, wxDragResult)");
		}
		wxDragResult lret = self->OnData(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDragResult wxDropTarget::OnDragOver(int x, int y, wxDragResult def)
	static int _bind_OnDragOver(lua_State *L) {
		if (!_lg_typecheck_OnDragOver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDragResult wxDropTarget::OnDragOver(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxDropTarget::OnDragOver(int x, int y, wxDragResult def)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDragResult wxDropTarget::OnDragOver(int, int, wxDragResult)");
		}
		wxDragResult lret = self->OnDragOver(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDropTarget::OnDrop(int x, int y)
	static int _bind_OnDrop(lua_State *L) {
		if (!_lg_typecheck_OnDrop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDropTarget::OnDrop(int x, int y) function, expected prototype:\nbool wxDropTarget::OnDrop(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDropTarget::OnDrop(int, int)");
		}
		bool lret = self->OnDrop(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDragResult wxDropTarget::OnEnter(int x, int y, wxDragResult def)
	static int _bind_OnEnter(lua_State *L) {
		if (!_lg_typecheck_OnEnter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDragResult wxDropTarget::OnEnter(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxDropTarget::OnEnter(int x, int y, wxDragResult def)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDragResult wxDropTarget::OnEnter(int, int, wxDragResult)");
		}
		wxDragResult lret = self->OnEnter(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDropTarget::OnLeave()
	static int _bind_OnLeave(lua_State *L) {
		if (!_lg_typecheck_OnLeave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDropTarget::OnLeave() function, expected prototype:\nvoid wxDropTarget::OnLeave()\nClass arguments details:\n");
		}


		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDropTarget::OnLeave()");
		}
		self->OnLeave();

		return 0;
	}

	// void wxDropTarget::SetDataObject(wxDataObject * data)
	static int _bind_SetDataObject(lua_State *L) {
		if (!_lg_typecheck_SetDataObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDropTarget::SetDataObject(wxDataObject * data) function, expected prototype:\nvoid wxDropTarget::SetDataObject(wxDataObject * data)\nClass arguments details:\narg 1 ID = 55398761\n");
		}

		wxDataObject* data=(Luna< wxDataObject >::check(L,2));

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDropTarget::SetDataObject(wxDataObject *)");
		}
		self->SetDataObject(data);

		return 0;
	}


	// Operator binds:

};

wxDropTarget* LunaTraits< wxDropTarget >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDropTarget::GetData()

	// Abstract operators:
}

void LunaTraits< wxDropTarget >::_bind_dtor(wxDropTarget* obj) {
	delete obj;
}

const char LunaTraits< wxDropTarget >::className[] = "wxDropTarget";
const char LunaTraits< wxDropTarget >::fullName[] = "wxDropTarget";
const char LunaTraits< wxDropTarget >::moduleName[] = "wx";
const char* LunaTraits< wxDropTarget >::parents[] = {0};
const int LunaTraits< wxDropTarget >::hash = 93694316;
const int LunaTraits< wxDropTarget >::uniqueIDs[] = {93694316,0};

luna_RegType LunaTraits< wxDropTarget >::methods[] = {
	{"GetData", &luna_wrapper_wxDropTarget::_bind_GetData},
	{"OnData", &luna_wrapper_wxDropTarget::_bind_OnData},
	{"OnDragOver", &luna_wrapper_wxDropTarget::_bind_OnDragOver},
	{"OnDrop", &luna_wrapper_wxDropTarget::_bind_OnDrop},
	{"OnEnter", &luna_wrapper_wxDropTarget::_bind_OnEnter},
	{"OnLeave", &luna_wrapper_wxDropTarget::_bind_OnLeave},
	{"SetDataObject", &luna_wrapper_wxDropTarget::_bind_SetDataObject},
	{"dynCast", &luna_wrapper_wxDropTarget::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxDropTarget >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDropTarget >::enumValues[] = {
	{0,0}
};


