#include <plug_common.h>

class luna_wrapper_wxTimeSpan {
public:
	typedef Luna< wxTimeSpan > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58889849) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTimeSpan*)");
		}

		wxTimeSpan* rhs =(Luna< wxTimeSpan >::check(L,2));
		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
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

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTimeSpan");
		
		return luna_dynamicCast(L,converters,"wxTimeSpan",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,13282555) ) return false;
		if( luatop>2 && (!dynamic_cast< wxLongLong* >(Luna< wxLongLong >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,13282555) ) return false;
		if( luatop>3 && (!dynamic_cast< wxLongLong* >(Luna< wxLongLong >::check(L,4))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Abs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		if( (!dynamic_cast< wxTimeSpan* >(Luna< wxTimeSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		if( (!dynamic_cast< wxTimeSpan* >(Luna< wxTimeSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Format(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDays(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHours(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMilliseconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinutes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSeconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWeeks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEqualTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsLongerThan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsNegative(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsNull(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPositive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsShorterThan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Multiply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Multiply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Neg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Negate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Subtract_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		if( (!dynamic_cast< wxTimeSpan* >(Luna< wxTimeSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Subtract_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		if( (!dynamic_cast< wxTimeSpan* >(Luna< wxTimeSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Day(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Days(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hour(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hours(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Millisecond(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Milliseconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13282555) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Minute(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Minutes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Second(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Seconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13282555) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Week(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Weeks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 4 valid operators)
	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		return true;
	}


	// Constructor binds:
	// wxTimeSpan::wxTimeSpan()
	static wxTimeSpan* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan::wxTimeSpan() function, expected prototype:\nwxTimeSpan::wxTimeSpan()\nClass arguments details:\n");
		}


		return new wxTimeSpan();
	}

	// wxTimeSpan::wxTimeSpan(long hours, long min = 0, wxLongLong sec = 0, wxLongLong msec = 0)
	static wxTimeSpan* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan::wxTimeSpan(long hours, long min = 0, wxLongLong sec = 0, wxLongLong msec = 0) function, expected prototype:\nwxTimeSpan::wxTimeSpan(long hours, long min = 0, wxLongLong sec = 0, wxLongLong msec = 0)\nClass arguments details:\narg 3 ID = 13282555\narg 4 ID = 13282555\n");
		}

		int luatop = lua_gettop(L);

		long hours=(long)lua_tointeger(L,1);
		long min=luatop>1 ? (long)lua_tointeger(L,2) : 0;
		wxLongLong* sec_ptr=luatop>2 ? (Luna< wxLongLong >::check(L,3)) : NULL;
		if( luatop>2 && !sec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sec in wxTimeSpan::wxTimeSpan function");
		}
		wxLongLong sec=luatop>2 ? *sec_ptr : 0;
		wxLongLong* msec_ptr=luatop>3 ? (Luna< wxLongLong >::check(L,4)) : NULL;
		if( luatop>3 && !msec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg msec in wxTimeSpan::wxTimeSpan function");
		}
		wxLongLong msec=luatop>3 ? *msec_ptr : 0;

		return new wxTimeSpan(hours, min, sec, msec);
	}

	// Overload binder for wxTimeSpan::wxTimeSpan
	static wxTimeSpan* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTimeSpan, cannot match any of the overloads for function wxTimeSpan:\n  wxTimeSpan()\n  wxTimeSpan(long, long, wxLongLong, wxLongLong)\n");
		return NULL;
	}


	// Function binds:
	// wxTimeSpan wxTimeSpan::Abs() const
	static int _bind_Abs(lua_State *L) {
		if (!_lg_typecheck_Abs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan wxTimeSpan::Abs() const function, expected prototype:\nwxTimeSpan wxTimeSpan::Abs() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan wxTimeSpan::Abs() const");
		}
		wxTimeSpan stack_lret = self->Abs();
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// wxTimeSpan wxTimeSpan::Add(const wxTimeSpan & diff) const
	static int _bind_Add_overload_1(lua_State *L) {
		if (!_lg_typecheck_Add_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan wxTimeSpan::Add(const wxTimeSpan & diff) const function, expected prototype:\nwxTimeSpan wxTimeSpan::Add(const wxTimeSpan & diff) const\nClass arguments details:\narg 1 ID = 58889849\n");
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxTimeSpan::Add function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan wxTimeSpan::Add(const wxTimeSpan &) const");
		}
		wxTimeSpan stack_lret = self->Add(diff);
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// wxTimeSpan & wxTimeSpan::Add(const wxTimeSpan & diff)
	static int _bind_Add_overload_2(lua_State *L) {
		if (!_lg_typecheck_Add_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan & wxTimeSpan::Add(const wxTimeSpan & diff) function, expected prototype:\nwxTimeSpan & wxTimeSpan::Add(const wxTimeSpan & diff)\nClass arguments details:\narg 1 ID = 58889849\n");
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxTimeSpan::Add function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan & wxTimeSpan::Add(const wxTimeSpan &)");
		}
		const wxTimeSpan* lret = &self->Add(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTimeSpan::Add
	static int _bind_Add(lua_State *L) {
		if (_lg_typecheck_Add_overload_1(L)) return _bind_Add_overload_1(L);
		if (_lg_typecheck_Add_overload_2(L)) return _bind_Add_overload_2(L);

		luaL_error(L, "error in function Add, cannot match any of the overloads for function Add:\n  Add(const wxTimeSpan &)\n  Add(const wxTimeSpan &)\n");
		return 0;
	}

	// wxString wxTimeSpan::Format(const wxString &  = wxDefaultTimeSpanFormat) const
	static int _bind_Format(lua_State *L) {
		if (!_lg_typecheck_Format(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTimeSpan::Format(const wxString &  = wxDefaultTimeSpanFormat) const function, expected prototype:\nwxString wxTimeSpan::Format(const wxString &  = wxDefaultTimeSpanFormat) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString _arg1(lua_tostring(L,2),lua_objlen(L,2));

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTimeSpan::Format(const wxString &) const");
		}
		wxString lret = self->Format(_arg1);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxTimeSpan::GetDays() const
	static int _bind_GetDays(lua_State *L) {
		if (!_lg_typecheck_GetDays(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTimeSpan::GetDays() const function, expected prototype:\nint wxTimeSpan::GetDays() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTimeSpan::GetDays() const");
		}
		int lret = self->GetDays();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTimeSpan::GetHours() const
	static int _bind_GetHours(lua_State *L) {
		if (!_lg_typecheck_GetHours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTimeSpan::GetHours() const function, expected prototype:\nint wxTimeSpan::GetHours() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTimeSpan::GetHours() const");
		}
		int lret = self->GetHours();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxLongLong wxTimeSpan::GetMilliseconds() const
	static int _bind_GetMilliseconds(lua_State *L) {
		if (!_lg_typecheck_GetMilliseconds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong wxTimeSpan::GetMilliseconds() const function, expected prototype:\nwxLongLong wxTimeSpan::GetMilliseconds() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong wxTimeSpan::GetMilliseconds() const");
		}
		wxLongLong stack_lret = self->GetMilliseconds();
		wxLongLong* lret = new wxLongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,true);

		return 1;
	}

	// int wxTimeSpan::GetMinutes() const
	static int _bind_GetMinutes(lua_State *L) {
		if (!_lg_typecheck_GetMinutes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTimeSpan::GetMinutes() const function, expected prototype:\nint wxTimeSpan::GetMinutes() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTimeSpan::GetMinutes() const");
		}
		int lret = self->GetMinutes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxLongLong wxTimeSpan::GetSeconds() const
	static int _bind_GetSeconds(lua_State *L) {
		if (!_lg_typecheck_GetSeconds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong wxTimeSpan::GetSeconds() const function, expected prototype:\nwxLongLong wxTimeSpan::GetSeconds() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong wxTimeSpan::GetSeconds() const");
		}
		wxLongLong stack_lret = self->GetSeconds();
		wxLongLong* lret = new wxLongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,true);

		return 1;
	}

	// wxLongLong wxTimeSpan::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong wxTimeSpan::GetValue() const function, expected prototype:\nwxLongLong wxTimeSpan::GetValue() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong wxTimeSpan::GetValue() const");
		}
		wxLongLong stack_lret = self->GetValue();
		wxLongLong* lret = new wxLongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,true);

		return 1;
	}

	// int wxTimeSpan::GetWeeks() const
	static int _bind_GetWeeks(lua_State *L) {
		if (!_lg_typecheck_GetWeeks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTimeSpan::GetWeeks() const function, expected prototype:\nint wxTimeSpan::GetWeeks() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTimeSpan::GetWeeks() const");
		}
		int lret = self->GetWeeks();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTimeSpan::IsEqualTo(const wxTimeSpan & ts) const
	static int _bind_IsEqualTo(lua_State *L) {
		if (!_lg_typecheck_IsEqualTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTimeSpan::IsEqualTo(const wxTimeSpan & ts) const function, expected prototype:\nbool wxTimeSpan::IsEqualTo(const wxTimeSpan & ts) const\nClass arguments details:\narg 1 ID = 58889849\n");
		}

		const wxTimeSpan* ts_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !ts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ts in wxTimeSpan::IsEqualTo function");
		}
		const wxTimeSpan & ts=*ts_ptr;

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTimeSpan::IsEqualTo(const wxTimeSpan &) const");
		}
		bool lret = self->IsEqualTo(ts);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTimeSpan::IsLongerThan(const wxTimeSpan & ts) const
	static int _bind_IsLongerThan(lua_State *L) {
		if (!_lg_typecheck_IsLongerThan(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTimeSpan::IsLongerThan(const wxTimeSpan & ts) const function, expected prototype:\nbool wxTimeSpan::IsLongerThan(const wxTimeSpan & ts) const\nClass arguments details:\narg 1 ID = 58889849\n");
		}

		const wxTimeSpan* ts_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !ts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ts in wxTimeSpan::IsLongerThan function");
		}
		const wxTimeSpan & ts=*ts_ptr;

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTimeSpan::IsLongerThan(const wxTimeSpan &) const");
		}
		bool lret = self->IsLongerThan(ts);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTimeSpan::IsNegative() const
	static int _bind_IsNegative(lua_State *L) {
		if (!_lg_typecheck_IsNegative(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTimeSpan::IsNegative() const function, expected prototype:\nbool wxTimeSpan::IsNegative() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTimeSpan::IsNegative() const");
		}
		bool lret = self->IsNegative();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTimeSpan::IsNull() const
	static int _bind_IsNull(lua_State *L) {
		if (!_lg_typecheck_IsNull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTimeSpan::IsNull() const function, expected prototype:\nbool wxTimeSpan::IsNull() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTimeSpan::IsNull() const");
		}
		bool lret = self->IsNull();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTimeSpan::IsPositive() const
	static int _bind_IsPositive(lua_State *L) {
		if (!_lg_typecheck_IsPositive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTimeSpan::IsPositive() const function, expected prototype:\nbool wxTimeSpan::IsPositive() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTimeSpan::IsPositive() const");
		}
		bool lret = self->IsPositive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTimeSpan::IsShorterThan(const wxTimeSpan & ts) const
	static int _bind_IsShorterThan(lua_State *L) {
		if (!_lg_typecheck_IsShorterThan(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTimeSpan::IsShorterThan(const wxTimeSpan & ts) const function, expected prototype:\nbool wxTimeSpan::IsShorterThan(const wxTimeSpan & ts) const\nClass arguments details:\narg 1 ID = 58889849\n");
		}

		const wxTimeSpan* ts_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !ts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ts in wxTimeSpan::IsShorterThan function");
		}
		const wxTimeSpan & ts=*ts_ptr;

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTimeSpan::IsShorterThan(const wxTimeSpan &) const");
		}
		bool lret = self->IsShorterThan(ts);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTimeSpan wxTimeSpan::Multiply(int n) const
	static int _bind_Multiply_overload_1(lua_State *L) {
		if (!_lg_typecheck_Multiply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan wxTimeSpan::Multiply(int n) const function, expected prototype:\nwxTimeSpan wxTimeSpan::Multiply(int n) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan wxTimeSpan::Multiply(int) const");
		}
		wxTimeSpan stack_lret = self->Multiply(n);
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// wxTimeSpan & wxTimeSpan::Multiply(int n)
	static int _bind_Multiply_overload_2(lua_State *L) {
		if (!_lg_typecheck_Multiply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan & wxTimeSpan::Multiply(int n) function, expected prototype:\nwxTimeSpan & wxTimeSpan::Multiply(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan & wxTimeSpan::Multiply(int)");
		}
		const wxTimeSpan* lret = &self->Multiply(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTimeSpan::Multiply
	static int _bind_Multiply(lua_State *L) {
		if (_lg_typecheck_Multiply_overload_1(L)) return _bind_Multiply_overload_1(L);
		if (_lg_typecheck_Multiply_overload_2(L)) return _bind_Multiply_overload_2(L);

		luaL_error(L, "error in function Multiply, cannot match any of the overloads for function Multiply:\n  Multiply(int)\n  Multiply(int)\n");
		return 0;
	}

	// wxTimeSpan & wxTimeSpan::Neg()
	static int _bind_Neg(lua_State *L) {
		if (!_lg_typecheck_Neg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan & wxTimeSpan::Neg() function, expected prototype:\nwxTimeSpan & wxTimeSpan::Neg()\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan & wxTimeSpan::Neg()");
		}
		const wxTimeSpan* lret = &self->Neg();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,false);

		return 1;
	}

	// wxTimeSpan wxTimeSpan::Negate() const
	static int _bind_Negate(lua_State *L) {
		if (!_lg_typecheck_Negate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan wxTimeSpan::Negate() const function, expected prototype:\nwxTimeSpan wxTimeSpan::Negate() const\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan wxTimeSpan::Negate() const");
		}
		wxTimeSpan stack_lret = self->Negate();
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// wxTimeSpan wxTimeSpan::Subtract(const wxTimeSpan & diff) const
	static int _bind_Subtract_overload_1(lua_State *L) {
		if (!_lg_typecheck_Subtract_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan wxTimeSpan::Subtract(const wxTimeSpan & diff) const function, expected prototype:\nwxTimeSpan wxTimeSpan::Subtract(const wxTimeSpan & diff) const\nClass arguments details:\narg 1 ID = 58889849\n");
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxTimeSpan::Subtract function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan wxTimeSpan::Subtract(const wxTimeSpan &) const");
		}
		wxTimeSpan stack_lret = self->Subtract(diff);
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// wxTimeSpan & wxTimeSpan::Subtract(const wxTimeSpan & diff)
	static int _bind_Subtract_overload_2(lua_State *L) {
		if (!_lg_typecheck_Subtract_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan & wxTimeSpan::Subtract(const wxTimeSpan & diff) function, expected prototype:\nwxTimeSpan & wxTimeSpan::Subtract(const wxTimeSpan & diff)\nClass arguments details:\narg 1 ID = 58889849\n");
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxTimeSpan::Subtract function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan & wxTimeSpan::Subtract(const wxTimeSpan &)");
		}
		const wxTimeSpan* lret = &self->Subtract(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTimeSpan::Subtract
	static int _bind_Subtract(lua_State *L) {
		if (_lg_typecheck_Subtract_overload_1(L)) return _bind_Subtract_overload_1(L);
		if (_lg_typecheck_Subtract_overload_2(L)) return _bind_Subtract_overload_2(L);

		luaL_error(L, "error in function Subtract, cannot match any of the overloads for function Subtract:\n  Subtract(const wxTimeSpan &)\n  Subtract(const wxTimeSpan &)\n");
		return 0;
	}

	// static wxTimeSpan wxTimeSpan::Day()
	static int _bind_Day(lua_State *L) {
		if (!_lg_typecheck_Day(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Day() function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Day()\nClass arguments details:\n");
		}


		wxTimeSpan stack_lret = wxTimeSpan::Day();
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// static wxTimeSpan wxTimeSpan::Days(long days)
	static int _bind_Days(lua_State *L) {
		if (!_lg_typecheck_Days(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Days(long days) function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Days(long days)\nClass arguments details:\n");
		}

		long days=(long)lua_tointeger(L,1);

		wxTimeSpan stack_lret = wxTimeSpan::Days(days);
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// static wxTimeSpan wxTimeSpan::Hour()
	static int _bind_Hour(lua_State *L) {
		if (!_lg_typecheck_Hour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Hour() function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Hour()\nClass arguments details:\n");
		}


		wxTimeSpan stack_lret = wxTimeSpan::Hour();
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// static wxTimeSpan wxTimeSpan::Hours(long hours)
	static int _bind_Hours(lua_State *L) {
		if (!_lg_typecheck_Hours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Hours(long hours) function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Hours(long hours)\nClass arguments details:\n");
		}

		long hours=(long)lua_tointeger(L,1);

		wxTimeSpan stack_lret = wxTimeSpan::Hours(hours);
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// static wxTimeSpan wxTimeSpan::Millisecond()
	static int _bind_Millisecond(lua_State *L) {
		if (!_lg_typecheck_Millisecond(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Millisecond() function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Millisecond()\nClass arguments details:\n");
		}


		wxTimeSpan stack_lret = wxTimeSpan::Millisecond();
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// static wxTimeSpan wxTimeSpan::Milliseconds(wxLongLong ms)
	static int _bind_Milliseconds(lua_State *L) {
		if (!_lg_typecheck_Milliseconds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Milliseconds(wxLongLong ms) function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Milliseconds(wxLongLong ms)\nClass arguments details:\narg 1 ID = 13282555\n");
		}

		wxLongLong* ms_ptr=(Luna< wxLongLong >::check(L,1));
		if( !ms_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ms in wxTimeSpan::Milliseconds function");
		}
		wxLongLong ms=*ms_ptr;

		wxTimeSpan stack_lret = wxTimeSpan::Milliseconds(ms);
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// static wxTimeSpan wxTimeSpan::Minute()
	static int _bind_Minute(lua_State *L) {
		if (!_lg_typecheck_Minute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Minute() function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Minute()\nClass arguments details:\n");
		}


		wxTimeSpan stack_lret = wxTimeSpan::Minute();
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// static wxTimeSpan wxTimeSpan::Minutes(long min)
	static int _bind_Minutes(lua_State *L) {
		if (!_lg_typecheck_Minutes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Minutes(long min) function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Minutes(long min)\nClass arguments details:\n");
		}

		long min=(long)lua_tointeger(L,1);

		wxTimeSpan stack_lret = wxTimeSpan::Minutes(min);
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// static wxTimeSpan wxTimeSpan::Second()
	static int _bind_Second(lua_State *L) {
		if (!_lg_typecheck_Second(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Second() function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Second()\nClass arguments details:\n");
		}


		wxTimeSpan stack_lret = wxTimeSpan::Second();
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// static wxTimeSpan wxTimeSpan::Seconds(wxLongLong sec)
	static int _bind_Seconds(lua_State *L) {
		if (!_lg_typecheck_Seconds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Seconds(wxLongLong sec) function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Seconds(wxLongLong sec)\nClass arguments details:\narg 1 ID = 13282555\n");
		}

		wxLongLong* sec_ptr=(Luna< wxLongLong >::check(L,1));
		if( !sec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sec in wxTimeSpan::Seconds function");
		}
		wxLongLong sec=*sec_ptr;

		wxTimeSpan stack_lret = wxTimeSpan::Seconds(sec);
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// static wxTimeSpan wxTimeSpan::Week()
	static int _bind_Week(lua_State *L) {
		if (!_lg_typecheck_Week(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Week() function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Week()\nClass arguments details:\n");
		}


		wxTimeSpan stack_lret = wxTimeSpan::Week();
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// static wxTimeSpan wxTimeSpan::Weeks(long weeks)
	static int _bind_Weeks(lua_State *L) {
		if (!_lg_typecheck_Weeks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTimeSpan wxTimeSpan::Weeks(long weeks) function, expected prototype:\nstatic wxTimeSpan wxTimeSpan::Weeks(long weeks)\nClass arguments details:\n");
		}

		long weeks=(long)lua_tointeger(L,1);

		wxTimeSpan stack_lret = wxTimeSpan::Weeks(weeks);
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// wxTimeSpan & wxTimeSpan::operator+=(const wxTimeSpan & diff)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan & wxTimeSpan::operator+=(const wxTimeSpan & diff) function, expected prototype:\nwxTimeSpan & wxTimeSpan::operator+=(const wxTimeSpan & diff)\nClass arguments details:\narg 1 ID = 58889849\n");
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxTimeSpan::operator+= function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan & wxTimeSpan::operator+=(const wxTimeSpan &)");
		}
		const wxTimeSpan* lret = &self->operator+=(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,false);

		return 1;
	}

	// wxTimeSpan & wxTimeSpan::operator*=(int n)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan & wxTimeSpan::operator*=(int n) function, expected prototype:\nwxTimeSpan & wxTimeSpan::operator*=(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan & wxTimeSpan::operator*=(int)");
		}
		const wxTimeSpan* lret = &self->operator*=(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,false);

		return 1;
	}

	// wxTimeSpan & wxTimeSpan::operator-()
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan & wxTimeSpan::operator-() function, expected prototype:\nwxTimeSpan & wxTimeSpan::operator-()\nClass arguments details:\n");
		}


		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan & wxTimeSpan::operator-()");
		}
		const wxTimeSpan* lret = &self->operator-();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,false);

		return 1;
	}

	// wxTimeSpan & wxTimeSpan::operator-=(const wxTimeSpan & diff)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimeSpan & wxTimeSpan::operator-=(const wxTimeSpan & diff) function, expected prototype:\nwxTimeSpan & wxTimeSpan::operator-=(const wxTimeSpan & diff)\nClass arguments details:\narg 1 ID = 58889849\n");
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxTimeSpan::operator-= function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxTimeSpan* self=(Luna< wxTimeSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimeSpan & wxTimeSpan::operator-=(const wxTimeSpan &)");
		}
		const wxTimeSpan* lret = &self->operator-=(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,false);

		return 1;
	}


};

wxTimeSpan* LunaTraits< wxTimeSpan >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTimeSpan::_bind_ctor(L);
}

void LunaTraits< wxTimeSpan >::_bind_dtor(wxTimeSpan* obj) {
	delete obj;
}

const char LunaTraits< wxTimeSpan >::className[] = "wxTimeSpan";
const char LunaTraits< wxTimeSpan >::fullName[] = "wxTimeSpan";
const char LunaTraits< wxTimeSpan >::moduleName[] = "wx";
const char* LunaTraits< wxTimeSpan >::parents[] = {0};
const int LunaTraits< wxTimeSpan >::hash = 58889849;
const int LunaTraits< wxTimeSpan >::uniqueIDs[] = {58889849,0};

luna_RegType LunaTraits< wxTimeSpan >::methods[] = {
	{"Abs", &luna_wrapper_wxTimeSpan::_bind_Abs},
	{"Add", &luna_wrapper_wxTimeSpan::_bind_Add},
	{"Format", &luna_wrapper_wxTimeSpan::_bind_Format},
	{"GetDays", &luna_wrapper_wxTimeSpan::_bind_GetDays},
	{"GetHours", &luna_wrapper_wxTimeSpan::_bind_GetHours},
	{"GetMilliseconds", &luna_wrapper_wxTimeSpan::_bind_GetMilliseconds},
	{"GetMinutes", &luna_wrapper_wxTimeSpan::_bind_GetMinutes},
	{"GetSeconds", &luna_wrapper_wxTimeSpan::_bind_GetSeconds},
	{"GetValue", &luna_wrapper_wxTimeSpan::_bind_GetValue},
	{"GetWeeks", &luna_wrapper_wxTimeSpan::_bind_GetWeeks},
	{"IsEqualTo", &luna_wrapper_wxTimeSpan::_bind_IsEqualTo},
	{"IsLongerThan", &luna_wrapper_wxTimeSpan::_bind_IsLongerThan},
	{"IsNegative", &luna_wrapper_wxTimeSpan::_bind_IsNegative},
	{"IsNull", &luna_wrapper_wxTimeSpan::_bind_IsNull},
	{"IsPositive", &luna_wrapper_wxTimeSpan::_bind_IsPositive},
	{"IsShorterThan", &luna_wrapper_wxTimeSpan::_bind_IsShorterThan},
	{"Multiply", &luna_wrapper_wxTimeSpan::_bind_Multiply},
	{"Neg", &luna_wrapper_wxTimeSpan::_bind_Neg},
	{"Negate", &luna_wrapper_wxTimeSpan::_bind_Negate},
	{"Subtract", &luna_wrapper_wxTimeSpan::_bind_Subtract},
	{"Day", &luna_wrapper_wxTimeSpan::_bind_Day},
	{"Days", &luna_wrapper_wxTimeSpan::_bind_Days},
	{"Hour", &luna_wrapper_wxTimeSpan::_bind_Hour},
	{"Hours", &luna_wrapper_wxTimeSpan::_bind_Hours},
	{"Millisecond", &luna_wrapper_wxTimeSpan::_bind_Millisecond},
	{"Milliseconds", &luna_wrapper_wxTimeSpan::_bind_Milliseconds},
	{"Minute", &luna_wrapper_wxTimeSpan::_bind_Minute},
	{"Minutes", &luna_wrapper_wxTimeSpan::_bind_Minutes},
	{"Second", &luna_wrapper_wxTimeSpan::_bind_Second},
	{"Seconds", &luna_wrapper_wxTimeSpan::_bind_Seconds},
	{"Week", &luna_wrapper_wxTimeSpan::_bind_Week},
	{"Weeks", &luna_wrapper_wxTimeSpan::_bind_Weeks},
	{"op_add", &luna_wrapper_wxTimeSpan::_bind_op_add},
	{"op_mult", &luna_wrapper_wxTimeSpan::_bind_op_mult},
	{"__unm", &luna_wrapper_wxTimeSpan::_bind___unm},
	{"op_sub", &luna_wrapper_wxTimeSpan::_bind_op_sub},
	{"dynCast", &luna_wrapper_wxTimeSpan::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTimeSpan::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTimeSpan >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTimeSpan >::enumValues[] = {
	{0,0}
};


