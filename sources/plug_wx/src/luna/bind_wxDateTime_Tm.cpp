#include <plug_common.h>

class luna_wrapper_wxDateTime_Tm {
public:
	typedef Luna< wxDateTime::Tm > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62164632) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDateTime::Tm*)");
		}

		wxDateTime::Tm* rhs =(Luna< wxDateTime::Tm >::check(L,2));
		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDateTime::Tm");
		
		return luna_dynamicCast(L,converters,"wxDateTime::Tm",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_IsValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWeekDay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMsec(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSec(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMday(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYday(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMsec(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSec(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMday(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYday(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYear(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxDateTime::Tm::IsValid() const
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDateTime::Tm::IsValid() const function, expected prototype:\nbool wxDateTime::Tm::IsValid() const\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDateTime::Tm::IsValid() const. Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDateTime::WeekDay wxDateTime::Tm::GetWeekDay()
	static int _bind_GetWeekDay(lua_State *L) {
		if (!_lg_typecheck_GetWeekDay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDateTime::WeekDay wxDateTime::Tm::GetWeekDay() function, expected prototype:\nwxDateTime::WeekDay wxDateTime::Tm::GetWeekDay()\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDateTime::WeekDay wxDateTime::Tm::GetWeekDay(). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		wxDateTime::WeekDay lret = self->GetWeekDay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short wxDateTime::Tm::msec()
	static int _bind_getMsec(lua_State *L) {
		if (!_lg_typecheck_getMsec(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short wxDateTime::Tm::msec() function, expected prototype:\nunsigned short wxDateTime::Tm::msec()\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short wxDateTime::Tm::msec(). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		unsigned short lret = self->msec;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short wxDateTime::Tm::sec()
	static int _bind_getSec(lua_State *L) {
		if (!_lg_typecheck_getSec(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short wxDateTime::Tm::sec() function, expected prototype:\nunsigned short wxDateTime::Tm::sec()\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short wxDateTime::Tm::sec(). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		unsigned short lret = self->sec;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short wxDateTime::Tm::min()
	static int _bind_getMin(lua_State *L) {
		if (!_lg_typecheck_getMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short wxDateTime::Tm::min() function, expected prototype:\nunsigned short wxDateTime::Tm::min()\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short wxDateTime::Tm::min(). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		unsigned short lret = self->min;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short wxDateTime::Tm::hour()
	static int _bind_getHour(lua_State *L) {
		if (!_lg_typecheck_getHour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short wxDateTime::Tm::hour() function, expected prototype:\nunsigned short wxDateTime::Tm::hour()\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short wxDateTime::Tm::hour(). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		unsigned short lret = self->hour;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short wxDateTime::Tm::mday()
	static int _bind_getMday(lua_State *L) {
		if (!_lg_typecheck_getMday(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short wxDateTime::Tm::mday() function, expected prototype:\nunsigned short wxDateTime::Tm::mday()\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short wxDateTime::Tm::mday(). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		unsigned short lret = self->mday;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short wxDateTime::Tm::yday()
	static int _bind_getYday(lua_State *L) {
		if (!_lg_typecheck_getYday(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short wxDateTime::Tm::yday() function, expected prototype:\nunsigned short wxDateTime::Tm::yday()\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short wxDateTime::Tm::yday(). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		unsigned short lret = self->yday;
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDateTime::Month wxDateTime::Tm::mon()
	static int _bind_getMon(lua_State *L) {
		if (!_lg_typecheck_getMon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDateTime::Month wxDateTime::Tm::mon() function, expected prototype:\nwxDateTime::Month wxDateTime::Tm::mon()\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDateTime::Month wxDateTime::Tm::mon(). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		wxDateTime::Month lret = self->mon;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDateTime::Tm::year()
	static int _bind_getYear(lua_State *L) {
		if (!_lg_typecheck_getYear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDateTime::Tm::year() function, expected prototype:\nint wxDateTime::Tm::year()\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDateTime::Tm::year(). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		int lret = self->year;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDateTime::Tm::msec(unsigned short value)
	static int _bind_setMsec(lua_State *L) {
		if (!_lg_typecheck_setMsec(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDateTime::Tm::msec(unsigned short value) function, expected prototype:\nvoid wxDateTime::Tm::msec(unsigned short value)\nClass arguments details:\n");
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDateTime::Tm::msec(unsigned short). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		self->msec = value;

		return 0;
	}

	// void wxDateTime::Tm::sec(unsigned short value)
	static int _bind_setSec(lua_State *L) {
		if (!_lg_typecheck_setSec(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDateTime::Tm::sec(unsigned short value) function, expected prototype:\nvoid wxDateTime::Tm::sec(unsigned short value)\nClass arguments details:\n");
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDateTime::Tm::sec(unsigned short). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		self->sec = value;

		return 0;
	}

	// void wxDateTime::Tm::min(unsigned short value)
	static int _bind_setMin(lua_State *L) {
		if (!_lg_typecheck_setMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDateTime::Tm::min(unsigned short value) function, expected prototype:\nvoid wxDateTime::Tm::min(unsigned short value)\nClass arguments details:\n");
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDateTime::Tm::min(unsigned short). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		self->min = value;

		return 0;
	}

	// void wxDateTime::Tm::hour(unsigned short value)
	static int _bind_setHour(lua_State *L) {
		if (!_lg_typecheck_setHour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDateTime::Tm::hour(unsigned short value) function, expected prototype:\nvoid wxDateTime::Tm::hour(unsigned short value)\nClass arguments details:\n");
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDateTime::Tm::hour(unsigned short). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		self->hour = value;

		return 0;
	}

	// void wxDateTime::Tm::mday(unsigned short value)
	static int _bind_setMday(lua_State *L) {
		if (!_lg_typecheck_setMday(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDateTime::Tm::mday(unsigned short value) function, expected prototype:\nvoid wxDateTime::Tm::mday(unsigned short value)\nClass arguments details:\n");
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDateTime::Tm::mday(unsigned short). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		self->mday = value;

		return 0;
	}

	// void wxDateTime::Tm::yday(unsigned short value)
	static int _bind_setYday(lua_State *L) {
		if (!_lg_typecheck_setYday(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDateTime::Tm::yday(unsigned short value) function, expected prototype:\nvoid wxDateTime::Tm::yday(unsigned short value)\nClass arguments details:\n");
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDateTime::Tm::yday(unsigned short). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		self->yday = value;

		return 0;
	}

	// void wxDateTime::Tm::mon(wxDateTime::Month value)
	static int _bind_setMon(lua_State *L) {
		if (!_lg_typecheck_setMon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDateTime::Tm::mon(wxDateTime::Month value) function, expected prototype:\nvoid wxDateTime::Tm::mon(wxDateTime::Month value)\nClass arguments details:\n");
		}

		wxDateTime::Month value=(wxDateTime::Month)lua_tointeger(L,2);

		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDateTime::Tm::mon(wxDateTime::Month). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		self->mon = value;

		return 0;
	}

	// void wxDateTime::Tm::year(int value)
	static int _bind_setYear(lua_State *L) {
		if (!_lg_typecheck_setYear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDateTime::Tm::year(int value) function, expected prototype:\nvoid wxDateTime::Tm::year(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDateTime::Tm::year(int). Got : '%s'",typeid(Luna< wxDateTime::Tm >::check(L,1)).name());
		}
		self->year = value;

		return 0;
	}


	// Operator binds:

};

wxDateTime::Tm* LunaTraits< wxDateTime::Tm >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxDateTime::Tm >::_bind_dtor(wxDateTime::Tm* obj) {
	delete obj;
}

const char LunaTraits< wxDateTime::Tm >::className[] = "wxDateTime_Tm";
const char LunaTraits< wxDateTime::Tm >::fullName[] = "wxDateTime::Tm";
const char LunaTraits< wxDateTime::Tm >::moduleName[] = "wxDateTime";
const char* LunaTraits< wxDateTime::Tm >::parents[] = {0};
const int LunaTraits< wxDateTime::Tm >::hash = 62164632;
const int LunaTraits< wxDateTime::Tm >::uniqueIDs[] = {62164632,0};

luna_RegType LunaTraits< wxDateTime::Tm >::methods[] = {
	{"IsValid", &luna_wrapper_wxDateTime_Tm::_bind_IsValid},
	{"GetWeekDay", &luna_wrapper_wxDateTime_Tm::_bind_GetWeekDay},
	{"getMsec", &luna_wrapper_wxDateTime_Tm::_bind_getMsec},
	{"getSec", &luna_wrapper_wxDateTime_Tm::_bind_getSec},
	{"getMin", &luna_wrapper_wxDateTime_Tm::_bind_getMin},
	{"getHour", &luna_wrapper_wxDateTime_Tm::_bind_getHour},
	{"getMday", &luna_wrapper_wxDateTime_Tm::_bind_getMday},
	{"getYday", &luna_wrapper_wxDateTime_Tm::_bind_getYday},
	{"getMon", &luna_wrapper_wxDateTime_Tm::_bind_getMon},
	{"getYear", &luna_wrapper_wxDateTime_Tm::_bind_getYear},
	{"setMsec", &luna_wrapper_wxDateTime_Tm::_bind_setMsec},
	{"setSec", &luna_wrapper_wxDateTime_Tm::_bind_setSec},
	{"setMin", &luna_wrapper_wxDateTime_Tm::_bind_setMin},
	{"setHour", &luna_wrapper_wxDateTime_Tm::_bind_setHour},
	{"setMday", &luna_wrapper_wxDateTime_Tm::_bind_setMday},
	{"setYday", &luna_wrapper_wxDateTime_Tm::_bind_setYday},
	{"setMon", &luna_wrapper_wxDateTime_Tm::_bind_setMon},
	{"setYear", &luna_wrapper_wxDateTime_Tm::_bind_setYear},
	{"dynCast", &luna_wrapper_wxDateTime_Tm::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDateTime_Tm::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDateTime::Tm >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDateTime::Tm >::enumValues[] = {
	{0,0}
};


