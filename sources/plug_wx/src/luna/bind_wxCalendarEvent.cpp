#include <plug_common.h>

class luna_wrapper_wxCalendarEvent {
public:
	typedef Luna< wxCalendarEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxCalendarEvent* ptr= dynamic_cast< wxCalendarEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCalendarEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetWeekDay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWeekDay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxDateTime::WeekDay wxCalendarEvent::GetWeekDay() const
	static int _bind_GetWeekDay(lua_State *L) {
		if (!_lg_typecheck_GetWeekDay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDateTime::WeekDay wxCalendarEvent::GetWeekDay() const function, expected prototype:\nwxDateTime::WeekDay wxCalendarEvent::GetWeekDay() const\nClass arguments details:\n");
		}


		wxCalendarEvent* self=dynamic_cast< wxCalendarEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDateTime::WeekDay wxCalendarEvent::GetWeekDay() const");
		}
		wxDateTime::WeekDay lret = self->GetWeekDay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxCalendarEvent::SetWeekDay(const wxDateTime::WeekDay day)
	static int _bind_SetWeekDay(lua_State *L) {
		if (!_lg_typecheck_SetWeekDay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCalendarEvent::SetWeekDay(const wxDateTime::WeekDay day) function, expected prototype:\nvoid wxCalendarEvent::SetWeekDay(const wxDateTime::WeekDay day)\nClass arguments details:\n");
		}

		wxDateTime::WeekDay day=(wxDateTime::WeekDay)lua_tointeger(L,2);

		wxCalendarEvent* self=dynamic_cast< wxCalendarEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCalendarEvent::SetWeekDay(const wxDateTime::WeekDay)");
		}
		self->SetWeekDay(day);

		return 0;
	}


	// Operator binds:

};

wxCalendarEvent* LunaTraits< wxCalendarEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxCalendarEvent >::_bind_dtor(wxCalendarEvent* obj) {
	delete obj;
}

const char LunaTraits< wxCalendarEvent >::className[] = "wxCalendarEvent";
const char LunaTraits< wxCalendarEvent >::fullName[] = "wxCalendarEvent";
const char LunaTraits< wxCalendarEvent >::moduleName[] = "wx";
const char* LunaTraits< wxCalendarEvent >::parents[] = {"wx.wxDateEvent", 0};
const int LunaTraits< wxCalendarEvent >::hash = 25261490;
const int LunaTraits< wxCalendarEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCalendarEvent >::methods[] = {
	{"GetWeekDay", &luna_wrapper_wxCalendarEvent::_bind_GetWeekDay},
	{"SetWeekDay", &luna_wrapper_wxCalendarEvent::_bind_SetWeekDay},
	{0,0}
};

luna_ConverterType LunaTraits< wxCalendarEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxCalendarEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCalendarEvent >::enumValues[] = {
	{0,0}
};


