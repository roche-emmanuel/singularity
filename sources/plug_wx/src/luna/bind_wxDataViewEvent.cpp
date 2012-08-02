#include <plug_common.h>

class luna_wrapper_wxDataViewEvent {
public:
	typedef Luna< wxDataViewEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewEvent* ptr= dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDataViewColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditCancelled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDataViewColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66533182)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDataObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDataFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDataSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCacheFrom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCacheTo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxDataViewEvent::GetColumn() const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewEvent::GetColumn() const function, expected prototype:\nint wxDataViewEvent::GetColumn() const\nClass arguments details:\n");
		}


		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewEvent::GetColumn() const");
		}
		int lret = self->GetColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewColumn * wxDataViewEvent::GetDataViewColumn() const
	static int _bind_GetDataViewColumn(lua_State *L) {
		if (!_lg_typecheck_GetDataViewColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewEvent::GetDataViewColumn() const function, expected prototype:\nwxDataViewColumn * wxDataViewEvent::GetDataViewColumn() const\nClass arguments details:\n");
		}


		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewEvent::GetDataViewColumn() const");
		}
		wxDataViewColumn * lret = self->GetDataViewColumn();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewModel * wxDataViewEvent::GetModel() const
	static int _bind_GetModel(lua_State *L) {
		if (!_lg_typecheck_GetModel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewModel * wxDataViewEvent::GetModel() const function, expected prototype:\nwxDataViewModel * wxDataViewEvent::GetModel() const\nClass arguments details:\n");
		}


		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewModel * wxDataViewEvent::GetModel() const");
		}
		wxDataViewModel * lret = self->GetModel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewModel >::push(L,lret,false);

		return 1;
	}

	// wxPoint wxDataViewEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxDataViewEvent::GetPosition() const function, expected prototype:\nwxPoint wxDataViewEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxDataViewEvent::GetPosition() const");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewEvent::IsEditCancelled() const
	static int _bind_IsEditCancelled(lua_State *L) {
		if (!_lg_typecheck_IsEditCancelled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewEvent::IsEditCancelled() const function, expected prototype:\nbool wxDataViewEvent::IsEditCancelled() const\nClass arguments details:\n");
		}


		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewEvent::IsEditCancelled() const");
		}
		bool lret = self->IsEditCancelled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewEvent::SetColumn(int col)
	static int _bind_SetColumn(lua_State *L) {
		if (!_lg_typecheck_SetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetColumn(int col) function, expected prototype:\nvoid wxDataViewEvent::SetColumn(int col)\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetColumn(int)");
		}
		self->SetColumn(col);

		return 0;
	}

	// void wxDataViewEvent::SetDataViewColumn(wxDataViewColumn * col)
	static int _bind_SetDataViewColumn(lua_State *L) {
		if (!_lg_typecheck_SetDataViewColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetDataViewColumn(wxDataViewColumn * col) function, expected prototype:\nvoid wxDataViewEvent::SetDataViewColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* col=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,2));

		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetDataViewColumn(wxDataViewColumn *)");
		}
		self->SetDataViewColumn(col);

		return 0;
	}

	// void wxDataViewEvent::SetModel(wxDataViewModel * model)
	static int _bind_SetModel(lua_State *L) {
		if (!_lg_typecheck_SetModel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetModel(wxDataViewModel * model) function, expected prototype:\nvoid wxDataViewEvent::SetModel(wxDataViewModel * model)\nClass arguments details:\narg 1 ID = 66533182\n");
		}

		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,2));

		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetModel(wxDataViewModel *)");
		}
		self->SetModel(model);

		return 0;
	}

	// void wxDataViewEvent::SetDataObject(wxDataObject * obj)
	static int _bind_SetDataObject(lua_State *L) {
		if (!_lg_typecheck_SetDataObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetDataObject(wxDataObject * obj) function, expected prototype:\nvoid wxDataViewEvent::SetDataObject(wxDataObject * obj)\nClass arguments details:\narg 1 ID = 55398761\n");
		}

		wxDataObject* obj=(Luna< wxDataObject >::check(L,2));

		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetDataObject(wxDataObject *)");
		}
		self->SetDataObject(obj);

		return 0;
	}

	// wxDataObject * wxDataViewEvent::GetDataObject() const
	static int _bind_GetDataObject(lua_State *L) {
		if (!_lg_typecheck_GetDataObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataObject * wxDataViewEvent::GetDataObject() const function, expected prototype:\nwxDataObject * wxDataViewEvent::GetDataObject() const\nClass arguments details:\n");
		}


		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataObject * wxDataViewEvent::GetDataObject() const");
		}
		wxDataObject * lret = self->GetDataObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataObject >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewEvent::SetDataFormat(const wxDataFormat & format)
	static int _bind_SetDataFormat(lua_State *L) {
		if (!_lg_typecheck_SetDataFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetDataFormat(const wxDataFormat & format) function, expected prototype:\nvoid wxDataViewEvent::SetDataFormat(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n");
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewEvent::SetDataFormat function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetDataFormat(const wxDataFormat &)");
		}
		self->SetDataFormat(format);

		return 0;
	}

	// wxDataFormat wxDataViewEvent::GetDataFormat() const
	static int _bind_GetDataFormat(lua_State *L) {
		if (!_lg_typecheck_GetDataFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataFormat wxDataViewEvent::GetDataFormat() const function, expected prototype:\nwxDataFormat wxDataViewEvent::GetDataFormat() const\nClass arguments details:\n");
		}


		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataFormat wxDataViewEvent::GetDataFormat() const");
		}
		wxDataFormat stack_lret = self->GetDataFormat();
		wxDataFormat* lret = new wxDataFormat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataFormat >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewEvent::SetDataSize(size_t size)
	static int _bind_SetDataSize(lua_State *L) {
		if (!_lg_typecheck_SetDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetDataSize(size_t size) function, expected prototype:\nvoid wxDataViewEvent::SetDataSize(size_t size)\nClass arguments details:\n");
		}

		size_t size=(size_t)lua_tointeger(L,2);

		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetDataSize(size_t)");
		}
		self->SetDataSize(size);

		return 0;
	}

	// size_t wxDataViewEvent::GetDataSize() const
	static int _bind_GetDataSize(lua_State *L) {
		if (!_lg_typecheck_GetDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxDataViewEvent::GetDataSize() const function, expected prototype:\nsize_t wxDataViewEvent::GetDataSize() const\nClass arguments details:\n");
		}


		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxDataViewEvent::GetDataSize() const");
		}
		size_t lret = self->GetDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewEvent::GetCacheFrom() const
	static int _bind_GetCacheFrom(lua_State *L) {
		if (!_lg_typecheck_GetCacheFrom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewEvent::GetCacheFrom() const function, expected prototype:\nint wxDataViewEvent::GetCacheFrom() const\nClass arguments details:\n");
		}


		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewEvent::GetCacheFrom() const");
		}
		int lret = self->GetCacheFrom();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewEvent::GetCacheTo() const
	static int _bind_GetCacheTo(lua_State *L) {
		if (!_lg_typecheck_GetCacheTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewEvent::GetCacheTo() const function, expected prototype:\nint wxDataViewEvent::GetCacheTo() const\nClass arguments details:\n");
		}


		wxDataViewEvent* self=dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewEvent::GetCacheTo() const");
		}
		int lret = self->GetCacheTo();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxDataViewEvent* LunaTraits< wxDataViewEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxDataViewEvent >::_bind_dtor(wxDataViewEvent* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewEvent >::className[] = "wxDataViewEvent";
const char LunaTraits< wxDataViewEvent >::fullName[] = "wxDataViewEvent";
const char LunaTraits< wxDataViewEvent >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxDataViewEvent >::hash = 59354799;
const int LunaTraits< wxDataViewEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewEvent >::methods[] = {
	{"GetColumn", &luna_wrapper_wxDataViewEvent::_bind_GetColumn},
	{"GetDataViewColumn", &luna_wrapper_wxDataViewEvent::_bind_GetDataViewColumn},
	{"GetModel", &luna_wrapper_wxDataViewEvent::_bind_GetModel},
	{"GetPosition", &luna_wrapper_wxDataViewEvent::_bind_GetPosition},
	{"IsEditCancelled", &luna_wrapper_wxDataViewEvent::_bind_IsEditCancelled},
	{"SetColumn", &luna_wrapper_wxDataViewEvent::_bind_SetColumn},
	{"SetDataViewColumn", &luna_wrapper_wxDataViewEvent::_bind_SetDataViewColumn},
	{"SetModel", &luna_wrapper_wxDataViewEvent::_bind_SetModel},
	{"SetDataObject", &luna_wrapper_wxDataViewEvent::_bind_SetDataObject},
	{"GetDataObject", &luna_wrapper_wxDataViewEvent::_bind_GetDataObject},
	{"SetDataFormat", &luna_wrapper_wxDataViewEvent::_bind_SetDataFormat},
	{"GetDataFormat", &luna_wrapper_wxDataViewEvent::_bind_GetDataFormat},
	{"SetDataSize", &luna_wrapper_wxDataViewEvent::_bind_SetDataSize},
	{"GetDataSize", &luna_wrapper_wxDataViewEvent::_bind_GetDataSize},
	{"GetCacheFrom", &luna_wrapper_wxDataViewEvent::_bind_GetCacheFrom},
	{"GetCacheTo", &luna_wrapper_wxDataViewEvent::_bind_GetCacheTo},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewEvent >::enumValues[] = {
	{0,0}
};


