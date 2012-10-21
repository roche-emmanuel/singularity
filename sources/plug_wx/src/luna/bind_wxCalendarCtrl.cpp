#include <plug_common.h>

class luna_wrapper_wxCalendarCtrl {
public:
	typedef Luna< wxCalendarCtrl > luna_t;

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
		wxCalendarCtrl* ptr= dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCalendarCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,57497519) ) return false;
		if( luatop>2 && (!dynamic_cast< wxDateTime* >(Luna< wxDateTime >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,57497519) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableHolidayDisplay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableMonthChange(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeaderColourBg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeaderColourFg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHighlightColourBg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHighlightColourFg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHolidayColourBg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHolidayColourFg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResetAttr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,34465170)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHeaderColours(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHighlightColours(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHoliday(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHolidayColours(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mark(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDateRange(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDateRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,57497519)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,57497519)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCalendarCtrl::wxCalendarCtrl()
	static wxCalendarCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCalendarCtrl::wxCalendarCtrl() function, expected prototype:\nwxCalendarCtrl::wxCalendarCtrl()\nClass arguments details:\n");
		}


		return new wxCalendarCtrl();
	}

	// wxCalendarCtrl::wxCalendarCtrl(wxWindow * parent, int id, const wxDateTime & date = wxDefaultDateTime, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAL_SHOW_HOLIDAYS, const wxString & name = wxCalendarNameStr)
	static wxCalendarCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCalendarCtrl::wxCalendarCtrl(wxWindow * parent, int id, const wxDateTime & date = wxDefaultDateTime, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAL_SHOW_HOLIDAYS, const wxString & name = wxCalendarNameStr) function, expected prototype:\nwxCalendarCtrl::wxCalendarCtrl(wxWindow * parent, int id, const wxDateTime & date = wxDefaultDateTime, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAL_SHOW_HOLIDAYS, const wxString & name = wxCalendarNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 57497519\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxDateTime* date_ptr=luatop>2 ? (Luna< wxDateTime >::check(L,3)) : NULL;
		if( luatop>2 && !date_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg date in wxCalendarCtrl::wxCalendarCtrl function");
		}
		const wxDateTime & date=luatop>2 ? *date_ptr : wxDefaultDateTime;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxCalendarCtrl::wxCalendarCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCalendarCtrl::wxCalendarCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxCAL_SHOW_HOLIDAYS;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxCalendarCtrl(parent, id, date, pos, size, style, name);
	}

	// Overload binder for wxCalendarCtrl::wxCalendarCtrl
	static wxCalendarCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxCalendarCtrl, cannot match any of the overloads for function wxCalendarCtrl:\n  wxCalendarCtrl()\n  wxCalendarCtrl(wxWindow *, int, const wxDateTime &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxCalendarCtrl::Create(wxWindow * parent, int id, const wxDateTime & date = wxDefaultDateTime, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAL_SHOW_HOLIDAYS, const wxString & name = wxCalendarNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCalendarCtrl::Create(wxWindow * parent, int id, const wxDateTime & date = wxDefaultDateTime, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAL_SHOW_HOLIDAYS, const wxString & name = wxCalendarNameStr) function, expected prototype:\nbool wxCalendarCtrl::Create(wxWindow * parent, int id, const wxDateTime & date = wxDefaultDateTime, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAL_SHOW_HOLIDAYS, const wxString & name = wxCalendarNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 57497519\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxDateTime* date_ptr=luatop>3 ? (Luna< wxDateTime >::check(L,4)) : NULL;
		if( luatop>3 && !date_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg date in wxCalendarCtrl::Create function");
		}
		const wxDateTime & date=luatop>3 ? *date_ptr : wxDefaultDateTime;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxCalendarCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCalendarCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxCAL_SHOW_HOLIDAYS;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCalendarCtrl::Create(wxWindow *, int, const wxDateTime &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, date, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCalendarCtrl::EnableHolidayDisplay(bool display = true)
	static int _bind_EnableHolidayDisplay(lua_State *L) {
		if (!_lg_typecheck_EnableHolidayDisplay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCalendarCtrl::EnableHolidayDisplay(bool display = true) function, expected prototype:\nvoid wxCalendarCtrl::EnableHolidayDisplay(bool display = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool display=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCalendarCtrl::EnableHolidayDisplay(bool)");
		}
		self->EnableHolidayDisplay(display);

		return 0;
	}

	// bool wxCalendarCtrl::EnableMonthChange(bool enable = true)
	static int _bind_EnableMonthChange(lua_State *L) {
		if (!_lg_typecheck_EnableMonthChange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCalendarCtrl::EnableMonthChange(bool enable = true) function, expected prototype:\nbool wxCalendarCtrl::EnableMonthChange(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCalendarCtrl::EnableMonthChange(bool)");
		}
		bool lret = self->EnableMonthChange(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxCalendarDateAttr * wxCalendarCtrl::GetAttr(size_t day) const
	static int _bind_GetAttr(lua_State *L) {
		if (!_lg_typecheck_GetAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCalendarDateAttr * wxCalendarCtrl::GetAttr(size_t day) const function, expected prototype:\nwxCalendarDateAttr * wxCalendarCtrl::GetAttr(size_t day) const\nClass arguments details:\n");
		}

		size_t day=(size_t)lua_tointeger(L,2);

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxCalendarDateAttr * wxCalendarCtrl::GetAttr(size_t) const");
		}
		wxCalendarDateAttr * lret = self->GetAttr(day);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCalendarDateAttr >::push(L,lret,false);

		return 1;
	}

	// wxDateTime wxCalendarCtrl::GetDate() const
	static int _bind_GetDate(lua_State *L) {
		if (!_lg_typecheck_GetDate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDateTime wxCalendarCtrl::GetDate() const function, expected prototype:\nwxDateTime wxCalendarCtrl::GetDate() const\nClass arguments details:\n");
		}


		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDateTime wxCalendarCtrl::GetDate() const");
		}
		wxDateTime stack_lret = self->GetDate();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// const wxColour & wxCalendarCtrl::GetHeaderColourBg() const
	static int _bind_GetHeaderColourBg(lua_State *L) {
		if (!_lg_typecheck_GetHeaderColourBg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxCalendarCtrl::GetHeaderColourBg() const function, expected prototype:\nconst wxColour & wxCalendarCtrl::GetHeaderColourBg() const\nClass arguments details:\n");
		}


		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxCalendarCtrl::GetHeaderColourBg() const");
		}
		const wxColour* lret = &self->GetHeaderColourBg();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxCalendarCtrl::GetHeaderColourFg() const
	static int _bind_GetHeaderColourFg(lua_State *L) {
		if (!_lg_typecheck_GetHeaderColourFg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxCalendarCtrl::GetHeaderColourFg() const function, expected prototype:\nconst wxColour & wxCalendarCtrl::GetHeaderColourFg() const\nClass arguments details:\n");
		}


		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxCalendarCtrl::GetHeaderColourFg() const");
		}
		const wxColour* lret = &self->GetHeaderColourFg();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxCalendarCtrl::GetHighlightColourBg() const
	static int _bind_GetHighlightColourBg(lua_State *L) {
		if (!_lg_typecheck_GetHighlightColourBg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxCalendarCtrl::GetHighlightColourBg() const function, expected prototype:\nconst wxColour & wxCalendarCtrl::GetHighlightColourBg() const\nClass arguments details:\n");
		}


		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxCalendarCtrl::GetHighlightColourBg() const");
		}
		const wxColour* lret = &self->GetHighlightColourBg();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxCalendarCtrl::GetHighlightColourFg() const
	static int _bind_GetHighlightColourFg(lua_State *L) {
		if (!_lg_typecheck_GetHighlightColourFg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxCalendarCtrl::GetHighlightColourFg() const function, expected prototype:\nconst wxColour & wxCalendarCtrl::GetHighlightColourFg() const\nClass arguments details:\n");
		}


		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxCalendarCtrl::GetHighlightColourFg() const");
		}
		const wxColour* lret = &self->GetHighlightColourFg();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxCalendarCtrl::GetHolidayColourBg() const
	static int _bind_GetHolidayColourBg(lua_State *L) {
		if (!_lg_typecheck_GetHolidayColourBg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxCalendarCtrl::GetHolidayColourBg() const function, expected prototype:\nconst wxColour & wxCalendarCtrl::GetHolidayColourBg() const\nClass arguments details:\n");
		}


		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxCalendarCtrl::GetHolidayColourBg() const");
		}
		const wxColour* lret = &self->GetHolidayColourBg();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxCalendarCtrl::GetHolidayColourFg() const
	static int _bind_GetHolidayColourFg(lua_State *L) {
		if (!_lg_typecheck_GetHolidayColourFg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxCalendarCtrl::GetHolidayColourFg() const function, expected prototype:\nconst wxColour & wxCalendarCtrl::GetHolidayColourFg() const\nClass arguments details:\n");
		}


		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxCalendarCtrl::GetHolidayColourFg() const");
		}
		const wxColour* lret = &self->GetHolidayColourFg();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// void wxCalendarCtrl::ResetAttr(size_t day)
	static int _bind_ResetAttr(lua_State *L) {
		if (!_lg_typecheck_ResetAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCalendarCtrl::ResetAttr(size_t day) function, expected prototype:\nvoid wxCalendarCtrl::ResetAttr(size_t day)\nClass arguments details:\n");
		}

		size_t day=(size_t)lua_tointeger(L,2);

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCalendarCtrl::ResetAttr(size_t)");
		}
		self->ResetAttr(day);

		return 0;
	}

	// void wxCalendarCtrl::SetAttr(size_t day, wxCalendarDateAttr * attr)
	static int _bind_SetAttr(lua_State *L) {
		if (!_lg_typecheck_SetAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCalendarCtrl::SetAttr(size_t day, wxCalendarDateAttr * attr) function, expected prototype:\nvoid wxCalendarCtrl::SetAttr(size_t day, wxCalendarDateAttr * attr)\nClass arguments details:\narg 2 ID = 34465170\n");
		}

		size_t day=(size_t)lua_tointeger(L,2);
		wxCalendarDateAttr* attr=(Luna< wxCalendarDateAttr >::check(L,3));

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCalendarCtrl::SetAttr(size_t, wxCalendarDateAttr *)");
		}
		self->SetAttr(day, attr);

		return 0;
	}

	// bool wxCalendarCtrl::SetDate(const wxDateTime & date)
	static int _bind_SetDate(lua_State *L) {
		if (!_lg_typecheck_SetDate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCalendarCtrl::SetDate(const wxDateTime & date) function, expected prototype:\nbool wxCalendarCtrl::SetDate(const wxDateTime & date)\nClass arguments details:\narg 1 ID = 57497519\n");
		}

		const wxDateTime* date_ptr=(Luna< wxDateTime >::check(L,2));
		if( !date_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg date in wxCalendarCtrl::SetDate function");
		}
		const wxDateTime & date=*date_ptr;

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCalendarCtrl::SetDate(const wxDateTime &)");
		}
		bool lret = self->SetDate(date);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCalendarCtrl::SetHeaderColours(const wxColour & colFg, const wxColour & colBg)
	static int _bind_SetHeaderColours(lua_State *L) {
		if (!_lg_typecheck_SetHeaderColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCalendarCtrl::SetHeaderColours(const wxColour & colFg, const wxColour & colBg) function, expected prototype:\nvoid wxCalendarCtrl::SetHeaderColours(const wxColour & colFg, const wxColour & colBg)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		const wxColour* colFg_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colFg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colFg in wxCalendarCtrl::SetHeaderColours function");
		}
		const wxColour & colFg=*colFg_ptr;
		const wxColour* colBg_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !colBg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBg in wxCalendarCtrl::SetHeaderColours function");
		}
		const wxColour & colBg=*colBg_ptr;

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCalendarCtrl::SetHeaderColours(const wxColour &, const wxColour &)");
		}
		self->SetHeaderColours(colFg, colBg);

		return 0;
	}

	// void wxCalendarCtrl::SetHighlightColours(const wxColour & colFg, const wxColour & colBg)
	static int _bind_SetHighlightColours(lua_State *L) {
		if (!_lg_typecheck_SetHighlightColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCalendarCtrl::SetHighlightColours(const wxColour & colFg, const wxColour & colBg) function, expected prototype:\nvoid wxCalendarCtrl::SetHighlightColours(const wxColour & colFg, const wxColour & colBg)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		const wxColour* colFg_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colFg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colFg in wxCalendarCtrl::SetHighlightColours function");
		}
		const wxColour & colFg=*colFg_ptr;
		const wxColour* colBg_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !colBg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBg in wxCalendarCtrl::SetHighlightColours function");
		}
		const wxColour & colBg=*colBg_ptr;

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCalendarCtrl::SetHighlightColours(const wxColour &, const wxColour &)");
		}
		self->SetHighlightColours(colFg, colBg);

		return 0;
	}

	// void wxCalendarCtrl::SetHoliday(size_t day)
	static int _bind_SetHoliday(lua_State *L) {
		if (!_lg_typecheck_SetHoliday(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCalendarCtrl::SetHoliday(size_t day) function, expected prototype:\nvoid wxCalendarCtrl::SetHoliday(size_t day)\nClass arguments details:\n");
		}

		size_t day=(size_t)lua_tointeger(L,2);

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCalendarCtrl::SetHoliday(size_t)");
		}
		self->SetHoliday(day);

		return 0;
	}

	// void wxCalendarCtrl::SetHolidayColours(const wxColour & colFg, const wxColour & colBg)
	static int _bind_SetHolidayColours(lua_State *L) {
		if (!_lg_typecheck_SetHolidayColours(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCalendarCtrl::SetHolidayColours(const wxColour & colFg, const wxColour & colBg) function, expected prototype:\nvoid wxCalendarCtrl::SetHolidayColours(const wxColour & colFg, const wxColour & colBg)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		const wxColour* colFg_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colFg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colFg in wxCalendarCtrl::SetHolidayColours function");
		}
		const wxColour & colFg=*colFg_ptr;
		const wxColour* colBg_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !colBg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBg in wxCalendarCtrl::SetHolidayColours function");
		}
		const wxColour & colBg=*colBg_ptr;

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCalendarCtrl::SetHolidayColours(const wxColour &, const wxColour &)");
		}
		self->SetHolidayColours(colFg, colBg);

		return 0;
	}

	// void wxCalendarCtrl::Mark(size_t day, bool mark)
	static int _bind_Mark(lua_State *L) {
		if (!_lg_typecheck_Mark(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCalendarCtrl::Mark(size_t day, bool mark) function, expected prototype:\nvoid wxCalendarCtrl::Mark(size_t day, bool mark)\nClass arguments details:\n");
		}

		size_t day=(size_t)lua_tointeger(L,2);
		bool mark=(bool)(lua_toboolean(L,3)==1);

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCalendarCtrl::Mark(size_t, bool)");
		}
		self->Mark(day, mark);

		return 0;
	}

	// bool wxCalendarCtrl::SetDateRange(const wxDateTime & lowerdate = wxDefaultDateTime, const wxDateTime & upperdate = wxDefaultDateTime)
	static int _bind_SetDateRange(lua_State *L) {
		if (!_lg_typecheck_SetDateRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCalendarCtrl::SetDateRange(const wxDateTime & lowerdate = wxDefaultDateTime, const wxDateTime & upperdate = wxDefaultDateTime) function, expected prototype:\nbool wxCalendarCtrl::SetDateRange(const wxDateTime & lowerdate = wxDefaultDateTime, const wxDateTime & upperdate = wxDefaultDateTime)\nClass arguments details:\narg 1 ID = 57497519\narg 2 ID = 57497519\n");
		}

		int luatop = lua_gettop(L);

		const wxDateTime* lowerdate_ptr=luatop>1 ? (Luna< wxDateTime >::check(L,2)) : NULL;
		if( luatop>1 && !lowerdate_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lowerdate in wxCalendarCtrl::SetDateRange function");
		}
		const wxDateTime & lowerdate=luatop>1 ? *lowerdate_ptr : wxDefaultDateTime;
		const wxDateTime* upperdate_ptr=luatop>2 ? (Luna< wxDateTime >::check(L,3)) : NULL;
		if( luatop>2 && !upperdate_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg upperdate in wxCalendarCtrl::SetDateRange function");
		}
		const wxDateTime & upperdate=luatop>2 ? *upperdate_ptr : wxDefaultDateTime;

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCalendarCtrl::SetDateRange(const wxDateTime &, const wxDateTime &)");
		}
		bool lret = self->SetDateRange(lowerdate, upperdate);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCalendarCtrl::GetDateRange(wxDateTime * lowerdate, wxDateTime * upperdate) const
	static int _bind_GetDateRange(lua_State *L) {
		if (!_lg_typecheck_GetDateRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCalendarCtrl::GetDateRange(wxDateTime * lowerdate, wxDateTime * upperdate) const function, expected prototype:\nbool wxCalendarCtrl::GetDateRange(wxDateTime * lowerdate, wxDateTime * upperdate) const\nClass arguments details:\narg 1 ID = 57497519\narg 2 ID = 57497519\n");
		}

		wxDateTime* lowerdate=(Luna< wxDateTime >::check(L,2));
		wxDateTime* upperdate=(Luna< wxDateTime >::check(L,3));

		wxCalendarCtrl* self=dynamic_cast< wxCalendarCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCalendarCtrl::GetDateRange(wxDateTime *, wxDateTime *) const");
		}
		bool lret = self->GetDateRange(lowerdate, upperdate);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxCalendarCtrl* LunaTraits< wxCalendarCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCalendarCtrl::_bind_ctor(L);
}

void LunaTraits< wxCalendarCtrl >::_bind_dtor(wxCalendarCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxCalendarCtrl >::className[] = "wxCalendarCtrl";
const char LunaTraits< wxCalendarCtrl >::fullName[] = "wxCalendarCtrl";
const char LunaTraits< wxCalendarCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxCalendarCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxCalendarCtrl >::hash = 52366691;
const int LunaTraits< wxCalendarCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxCalendarCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxCalendarCtrl::_bind_Create},
	{"EnableHolidayDisplay", &luna_wrapper_wxCalendarCtrl::_bind_EnableHolidayDisplay},
	{"EnableMonthChange", &luna_wrapper_wxCalendarCtrl::_bind_EnableMonthChange},
	{"GetAttr", &luna_wrapper_wxCalendarCtrl::_bind_GetAttr},
	{"GetDate", &luna_wrapper_wxCalendarCtrl::_bind_GetDate},
	{"GetHeaderColourBg", &luna_wrapper_wxCalendarCtrl::_bind_GetHeaderColourBg},
	{"GetHeaderColourFg", &luna_wrapper_wxCalendarCtrl::_bind_GetHeaderColourFg},
	{"GetHighlightColourBg", &luna_wrapper_wxCalendarCtrl::_bind_GetHighlightColourBg},
	{"GetHighlightColourFg", &luna_wrapper_wxCalendarCtrl::_bind_GetHighlightColourFg},
	{"GetHolidayColourBg", &luna_wrapper_wxCalendarCtrl::_bind_GetHolidayColourBg},
	{"GetHolidayColourFg", &luna_wrapper_wxCalendarCtrl::_bind_GetHolidayColourFg},
	{"ResetAttr", &luna_wrapper_wxCalendarCtrl::_bind_ResetAttr},
	{"SetAttr", &luna_wrapper_wxCalendarCtrl::_bind_SetAttr},
	{"SetDate", &luna_wrapper_wxCalendarCtrl::_bind_SetDate},
	{"SetHeaderColours", &luna_wrapper_wxCalendarCtrl::_bind_SetHeaderColours},
	{"SetHighlightColours", &luna_wrapper_wxCalendarCtrl::_bind_SetHighlightColours},
	{"SetHoliday", &luna_wrapper_wxCalendarCtrl::_bind_SetHoliday},
	{"SetHolidayColours", &luna_wrapper_wxCalendarCtrl::_bind_SetHolidayColours},
	{"Mark", &luna_wrapper_wxCalendarCtrl::_bind_Mark},
	{"SetDateRange", &luna_wrapper_wxCalendarCtrl::_bind_SetDateRange},
	{"GetDateRange", &luna_wrapper_wxCalendarCtrl::_bind_GetDateRange},
	{"__eq", &luna_wrapper_wxCalendarCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCalendarCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxCalendarCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCalendarCtrl >::enumValues[] = {
	{0,0}
};


