#include <plug_common.h>

class luna_wrapper_wxEvent {
public:
	typedef Luna< wxEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxEvent* ptr= dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEventObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEventType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSkipped(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTimestamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCommandEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResumePropagation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEventObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEventType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTimestamp(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShouldPropagate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Skip(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StopPropagation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxEvent * wxEvent::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvent * wxEvent::Clone() const function, expected prototype:\nwxEvent * wxEvent::Clone() const\nClass arguments details:\n");
		}


		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvent * wxEvent::Clone() const");
		}
		wxEvent * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}

	// wxObject * wxEvent::GetEventObject() const
	static int _bind_GetEventObject(lua_State *L) {
		if (!_lg_typecheck_GetEventObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxEvent::GetEventObject() const function, expected prototype:\nwxObject * wxEvent::GetEventObject() const\nClass arguments details:\n");
		}


		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxObject * wxEvent::GetEventObject() const");
		}
		wxObject * lret = self->GetEventObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// int wxEvent::GetEventType() const
	static int _bind_GetEventType(lua_State *L) {
		if (!_lg_typecheck_GetEventType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxEvent::GetEventType() const function, expected prototype:\nint wxEvent::GetEventType() const\nClass arguments details:\n");
		}


		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxEvent::GetEventType() const");
		}
		int lret = self->GetEventType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEventCategory wxEvent::GetEventCategory() const
	static int _bind_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxEvent::GetEventCategory() const function, expected prototype:\nwxEventCategory wxEvent::GetEventCategory() const\nClass arguments details:\n");
		}


		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxEvent::GetEventCategory() const");
		}
		wxEventCategory lret = self->GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxEvent::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxEvent::GetId() const function, expected prototype:\nint wxEvent::GetId() const\nClass arguments details:\n");
		}


		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxEvent::GetId() const");
		}
		int lret = self->GetId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxEvent::GetSkipped() const
	static int _bind_GetSkipped(lua_State *L) {
		if (!_lg_typecheck_GetSkipped(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxEvent::GetSkipped() const function, expected prototype:\nbool wxEvent::GetSkipped() const\nClass arguments details:\n");
		}


		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxEvent::GetSkipped() const");
		}
		bool lret = self->GetSkipped();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxEvent::GetTimestamp() const
	static int _bind_GetTimestamp(lua_State *L) {
		if (!_lg_typecheck_GetTimestamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxEvent::GetTimestamp() const function, expected prototype:\nlong wxEvent::GetTimestamp() const\nClass arguments details:\n");
		}


		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxEvent::GetTimestamp() const");
		}
		long lret = self->GetTimestamp();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxEvent::IsCommandEvent() const
	static int _bind_IsCommandEvent(lua_State *L) {
		if (!_lg_typecheck_IsCommandEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxEvent::IsCommandEvent() const function, expected prototype:\nbool wxEvent::IsCommandEvent() const\nClass arguments details:\n");
		}


		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxEvent::IsCommandEvent() const");
		}
		bool lret = self->IsCommandEvent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxEvent::ResumePropagation(int propagationLevel)
	static int _bind_ResumePropagation(lua_State *L) {
		if (!_lg_typecheck_ResumePropagation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvent::ResumePropagation(int propagationLevel) function, expected prototype:\nvoid wxEvent::ResumePropagation(int propagationLevel)\nClass arguments details:\n");
		}

		int propagationLevel=(int)lua_tointeger(L,2);

		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvent::ResumePropagation(int)");
		}
		self->ResumePropagation(propagationLevel);

		return 0;
	}

	// void wxEvent::SetEventObject(wxObject * object)
	static int _bind_SetEventObject(lua_State *L) {
		if (!_lg_typecheck_SetEventObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvent::SetEventObject(wxObject * object) function, expected prototype:\nvoid wxEvent::SetEventObject(wxObject * object)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxObject* object=(Luna< wxObject >::check(L,2));

		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvent::SetEventObject(wxObject *)");
		}
		self->SetEventObject(object);

		return 0;
	}

	// void wxEvent::SetEventType(int type)
	static int _bind_SetEventType(lua_State *L) {
		if (!_lg_typecheck_SetEventType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvent::SetEventType(int type) function, expected prototype:\nvoid wxEvent::SetEventType(int type)\nClass arguments details:\n");
		}

		int type=(int)lua_tointeger(L,2);

		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvent::SetEventType(int)");
		}
		self->SetEventType(type);

		return 0;
	}

	// void wxEvent::SetId(int id)
	static int _bind_SetId(lua_State *L) {
		if (!_lg_typecheck_SetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvent::SetId(int id) function, expected prototype:\nvoid wxEvent::SetId(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvent::SetId(int)");
		}
		self->SetId(id);

		return 0;
	}

	// void wxEvent::SetTimestamp(long timeStamp = 0)
	static int _bind_SetTimestamp(lua_State *L) {
		if (!_lg_typecheck_SetTimestamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvent::SetTimestamp(long timeStamp = 0) function, expected prototype:\nvoid wxEvent::SetTimestamp(long timeStamp = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long timeStamp=luatop>1 ? (long)lua_tointeger(L,2) : 0;

		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvent::SetTimestamp(long)");
		}
		self->SetTimestamp(timeStamp);

		return 0;
	}

	// bool wxEvent::ShouldPropagate() const
	static int _bind_ShouldPropagate(lua_State *L) {
		if (!_lg_typecheck_ShouldPropagate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxEvent::ShouldPropagate() const function, expected prototype:\nbool wxEvent::ShouldPropagate() const\nClass arguments details:\n");
		}


		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxEvent::ShouldPropagate() const");
		}
		bool lret = self->ShouldPropagate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxEvent::Skip(bool skip = true)
	static int _bind_Skip(lua_State *L) {
		if (!_lg_typecheck_Skip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvent::Skip(bool skip = true) function, expected prototype:\nvoid wxEvent::Skip(bool skip = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool skip=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvent::Skip(bool)");
		}
		self->Skip(skip);

		return 0;
	}

	// int wxEvent::StopPropagation()
	static int _bind_StopPropagation(lua_State *L) {
		if (!_lg_typecheck_StopPropagation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxEvent::StopPropagation() function, expected prototype:\nint wxEvent::StopPropagation()\nClass arguments details:\n");
		}


		wxEvent* self=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxEvent::StopPropagation()");
		}
		int lret = self->StopPropagation();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxEvent* LunaTraits< wxEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxEvent >::_bind_dtor(wxEvent* obj) {
	delete obj;
}

const char LunaTraits< wxEvent >::className[] = "wxEvent";
const char LunaTraits< wxEvent >::fullName[] = "wxEvent";
const char LunaTraits< wxEvent >::moduleName[] = "wx";
const char* LunaTraits< wxEvent >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxEvent >::hash = 15769442;
const int LunaTraits< wxEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxEvent >::methods[] = {
	{"Clone", &luna_wrapper_wxEvent::_bind_Clone},
	{"GetEventObject", &luna_wrapper_wxEvent::_bind_GetEventObject},
	{"GetEventType", &luna_wrapper_wxEvent::_bind_GetEventType},
	{"GetEventCategory", &luna_wrapper_wxEvent::_bind_GetEventCategory},
	{"GetId", &luna_wrapper_wxEvent::_bind_GetId},
	{"GetSkipped", &luna_wrapper_wxEvent::_bind_GetSkipped},
	{"GetTimestamp", &luna_wrapper_wxEvent::_bind_GetTimestamp},
	{"IsCommandEvent", &luna_wrapper_wxEvent::_bind_IsCommandEvent},
	{"ResumePropagation", &luna_wrapper_wxEvent::_bind_ResumePropagation},
	{"SetEventObject", &luna_wrapper_wxEvent::_bind_SetEventObject},
	{"SetEventType", &luna_wrapper_wxEvent::_bind_SetEventType},
	{"SetId", &luna_wrapper_wxEvent::_bind_SetId},
	{"SetTimestamp", &luna_wrapper_wxEvent::_bind_SetTimestamp},
	{"ShouldPropagate", &luna_wrapper_wxEvent::_bind_ShouldPropagate},
	{"Skip", &luna_wrapper_wxEvent::_bind_Skip},
	{"StopPropagation", &luna_wrapper_wxEvent::_bind_StopPropagation},
	{0,0}
};

luna_ConverterType LunaTraits< wxEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxEvent >::enumValues[] = {
	{0,0}
};


