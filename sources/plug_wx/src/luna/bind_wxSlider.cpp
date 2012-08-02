#include <plug_common.h>

class luna_wrapper_wxSlider {
public:
	typedef Luna< wxSlider > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSlider* ptr= dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSlider >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>10 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ClearSel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearTicks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>11 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,25723480) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,20268751) ) return false;
		if( luatop>8 && (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && !Luna<void>::has_uniqueid(L,10,56813631) ) return false;
		if( luatop>10 && lua_isstring(L,11)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetThumbLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTickFreq(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLineSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetThumbLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTick(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTickFreq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSlider::wxSlider()
	static wxSlider* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSlider::wxSlider() function, expected prototype:\nwxSlider::wxSlider()\nClass arguments details:\n");
		}


		return new wxSlider();
	}

	// wxSlider::wxSlider(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr)
	static wxSlider* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSlider::wxSlider(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr) function, expected prototype:\nwxSlider::wxSlider(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 6 ID = 25723480\narg 7 ID = 20268751\narg 9 ID = 56813631\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		int value=(int)lua_tointeger(L,3);
		int minValue=(int)lua_tointeger(L,4);
		int maxValue=(int)lua_tointeger(L,5);
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSlider::wxSlider function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSlider::wxSlider function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxHORIZONTAL;
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSlider::wxSlider function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wxSlider(parent, id, value, minValue, maxValue, pos, size, style, validator, name);
	}

	// Overload binder for wxSlider::wxSlider
	static wxSlider* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSlider, cannot match any of the overloads for function wxSlider:\n  wxSlider()\n  wxSlider(wxWindow *, int, int, int, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxSlider::ClearSel()
	static int _bind_ClearSel(lua_State *L) {
		if (!_lg_typecheck_ClearSel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSlider::ClearSel() function, expected prototype:\nvoid wxSlider::ClearSel()\nClass arguments details:\n");
		}


		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSlider::ClearSel()");
		}
		self->ClearSel();

		return 0;
	}

	// void wxSlider::ClearTicks()
	static int _bind_ClearTicks(lua_State *L) {
		if (!_lg_typecheck_ClearTicks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSlider::ClearTicks() function, expected prototype:\nvoid wxSlider::ClearTicks()\nClass arguments details:\n");
		}


		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSlider::ClearTicks()");
		}
		self->ClearTicks();

		return 0;
	}

	// bool wxSlider::Create(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & point = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSlider::Create(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & point = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr) function, expected prototype:\nbool wxSlider::Create(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & point = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 6 ID = 25723480\narg 7 ID = 20268751\narg 9 ID = 56813631\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		int value=(int)lua_tointeger(L,4);
		int minValue=(int)lua_tointeger(L,5);
		int maxValue=(int)lua_tointeger(L,6);
		const wxPoint* point_ptr=luatop>6 ? (Luna< wxPoint >::check(L,7)) : NULL;
		if( luatop>6 && !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxSlider::Create function");
		}
		const wxPoint & point=luatop>6 ? *point_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>7 ? (Luna< wxSize >::check(L,8)) : NULL;
		if( luatop>7 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSlider::Create function");
		}
		const wxSize & size=luatop>7 ? *size_ptr : wxDefaultSize;
		long style=luatop>8 ? (long)lua_tointeger(L,9) : wxHORIZONTAL;
		const wxValidator* validator_ptr=luatop>9 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,10)) : NULL;
		if( luatop>9 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSlider::Create function");
		}
		const wxValidator & validator=luatop>9 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,11),lua_objlen(L,11));

		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSlider::Create(wxWindow *, int, int, int, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, value, minValue, maxValue, point, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxSlider::GetLineSize() const
	static int _bind_GetLineSize(lua_State *L) {
		if (!_lg_typecheck_GetLineSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSlider::GetLineSize() const function, expected prototype:\nint wxSlider::GetLineSize() const\nClass arguments details:\n");
		}


		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSlider::GetLineSize() const");
		}
		int lret = self->GetLineSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetMax() const
	static int _bind_GetMax(lua_State *L) {
		if (!_lg_typecheck_GetMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSlider::GetMax() const function, expected prototype:\nint wxSlider::GetMax() const\nClass arguments details:\n");
		}


		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSlider::GetMax() const");
		}
		int lret = self->GetMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetMin() const
	static int _bind_GetMin(lua_State *L) {
		if (!_lg_typecheck_GetMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSlider::GetMin() const function, expected prototype:\nint wxSlider::GetMin() const\nClass arguments details:\n");
		}


		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSlider::GetMin() const");
		}
		int lret = self->GetMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetPageSize() const
	static int _bind_GetPageSize(lua_State *L) {
		if (!_lg_typecheck_GetPageSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSlider::GetPageSize() const function, expected prototype:\nint wxSlider::GetPageSize() const\nClass arguments details:\n");
		}


		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSlider::GetPageSize() const");
		}
		int lret = self->GetPageSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetSelEnd() const
	static int _bind_GetSelEnd(lua_State *L) {
		if (!_lg_typecheck_GetSelEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSlider::GetSelEnd() const function, expected prototype:\nint wxSlider::GetSelEnd() const\nClass arguments details:\n");
		}


		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSlider::GetSelEnd() const");
		}
		int lret = self->GetSelEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetSelStart() const
	static int _bind_GetSelStart(lua_State *L) {
		if (!_lg_typecheck_GetSelStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSlider::GetSelStart() const function, expected prototype:\nint wxSlider::GetSelStart() const\nClass arguments details:\n");
		}


		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSlider::GetSelStart() const");
		}
		int lret = self->GetSelStart();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetThumbLength() const
	static int _bind_GetThumbLength(lua_State *L) {
		if (!_lg_typecheck_GetThumbLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSlider::GetThumbLength() const function, expected prototype:\nint wxSlider::GetThumbLength() const\nClass arguments details:\n");
		}


		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSlider::GetThumbLength() const");
		}
		int lret = self->GetThumbLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetTickFreq() const
	static int _bind_GetTickFreq(lua_State *L) {
		if (!_lg_typecheck_GetTickFreq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSlider::GetTickFreq() const function, expected prototype:\nint wxSlider::GetTickFreq() const\nClass arguments details:\n");
		}


		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSlider::GetTickFreq() const");
		}
		int lret = self->GetTickFreq();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSlider::GetValue() const function, expected prototype:\nint wxSlider::GetValue() const\nClass arguments details:\n");
		}


		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSlider::GetValue() const");
		}
		int lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSlider::SetLineSize(int lineSize)
	static int _bind_SetLineSize(lua_State *L) {
		if (!_lg_typecheck_SetLineSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSlider::SetLineSize(int lineSize) function, expected prototype:\nvoid wxSlider::SetLineSize(int lineSize)\nClass arguments details:\n");
		}

		int lineSize=(int)lua_tointeger(L,2);

		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSlider::SetLineSize(int)");
		}
		self->SetLineSize(lineSize);

		return 0;
	}

	// void wxSlider::SetPageSize(int pageSize)
	static int _bind_SetPageSize(lua_State *L) {
		if (!_lg_typecheck_SetPageSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSlider::SetPageSize(int pageSize) function, expected prototype:\nvoid wxSlider::SetPageSize(int pageSize)\nClass arguments details:\n");
		}

		int pageSize=(int)lua_tointeger(L,2);

		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSlider::SetPageSize(int)");
		}
		self->SetPageSize(pageSize);

		return 0;
	}

	// void wxSlider::SetRange(int minValue, int maxValue)
	static int _bind_SetRange(lua_State *L) {
		if (!_lg_typecheck_SetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSlider::SetRange(int minValue, int maxValue) function, expected prototype:\nvoid wxSlider::SetRange(int minValue, int maxValue)\nClass arguments details:\n");
		}

		int minValue=(int)lua_tointeger(L,2);
		int maxValue=(int)lua_tointeger(L,3);

		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSlider::SetRange(int, int)");
		}
		self->SetRange(minValue, maxValue);

		return 0;
	}

	// void wxSlider::SetSelection(int startPos, int endPos)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSlider::SetSelection(int startPos, int endPos) function, expected prototype:\nvoid wxSlider::SetSelection(int startPos, int endPos)\nClass arguments details:\n");
		}

		int startPos=(int)lua_tointeger(L,2);
		int endPos=(int)lua_tointeger(L,3);

		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSlider::SetSelection(int, int)");
		}
		self->SetSelection(startPos, endPos);

		return 0;
	}

	// void wxSlider::SetThumbLength(int len)
	static int _bind_SetThumbLength(lua_State *L) {
		if (!_lg_typecheck_SetThumbLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSlider::SetThumbLength(int len) function, expected prototype:\nvoid wxSlider::SetThumbLength(int len)\nClass arguments details:\n");
		}

		int len=(int)lua_tointeger(L,2);

		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSlider::SetThumbLength(int)");
		}
		self->SetThumbLength(len);

		return 0;
	}

	// void wxSlider::SetTick(int tickPos)
	static int _bind_SetTick(lua_State *L) {
		if (!_lg_typecheck_SetTick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSlider::SetTick(int tickPos) function, expected prototype:\nvoid wxSlider::SetTick(int tickPos)\nClass arguments details:\n");
		}

		int tickPos=(int)lua_tointeger(L,2);

		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSlider::SetTick(int)");
		}
		self->SetTick(tickPos);

		return 0;
	}

	// void wxSlider::SetTickFreq(int n)
	static int _bind_SetTickFreq(lua_State *L) {
		if (!_lg_typecheck_SetTickFreq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSlider::SetTickFreq(int n) function, expected prototype:\nvoid wxSlider::SetTickFreq(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSlider::SetTickFreq(int)");
		}
		self->SetTickFreq(n);

		return 0;
	}

	// void wxSlider::SetValue(int value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSlider::SetValue(int value) function, expected prototype:\nvoid wxSlider::SetValue(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		wxSlider* self=dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSlider::SetValue(int)");
		}
		self->SetValue(value);

		return 0;
	}


	// Operator binds:

};

wxSlider* LunaTraits< wxSlider >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSlider::_bind_ctor(L);
}

void LunaTraits< wxSlider >::_bind_dtor(wxSlider* obj) {
	delete obj;
}

const char LunaTraits< wxSlider >::className[] = "wxSlider";
const char LunaTraits< wxSlider >::fullName[] = "wxSlider";
const char LunaTraits< wxSlider >::moduleName[] = "wx";
const char* LunaTraits< wxSlider >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxSlider >::hash = 80534745;
const int LunaTraits< wxSlider >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSlider >::methods[] = {
	{"ClearSel", &luna_wrapper_wxSlider::_bind_ClearSel},
	{"ClearTicks", &luna_wrapper_wxSlider::_bind_ClearTicks},
	{"Create", &luna_wrapper_wxSlider::_bind_Create},
	{"GetLineSize", &luna_wrapper_wxSlider::_bind_GetLineSize},
	{"GetMax", &luna_wrapper_wxSlider::_bind_GetMax},
	{"GetMin", &luna_wrapper_wxSlider::_bind_GetMin},
	{"GetPageSize", &luna_wrapper_wxSlider::_bind_GetPageSize},
	{"GetSelEnd", &luna_wrapper_wxSlider::_bind_GetSelEnd},
	{"GetSelStart", &luna_wrapper_wxSlider::_bind_GetSelStart},
	{"GetThumbLength", &luna_wrapper_wxSlider::_bind_GetThumbLength},
	{"GetTickFreq", &luna_wrapper_wxSlider::_bind_GetTickFreq},
	{"GetValue", &luna_wrapper_wxSlider::_bind_GetValue},
	{"SetLineSize", &luna_wrapper_wxSlider::_bind_SetLineSize},
	{"SetPageSize", &luna_wrapper_wxSlider::_bind_SetPageSize},
	{"SetRange", &luna_wrapper_wxSlider::_bind_SetRange},
	{"SetSelection", &luna_wrapper_wxSlider::_bind_SetSelection},
	{"SetThumbLength", &luna_wrapper_wxSlider::_bind_SetThumbLength},
	{"SetTick", &luna_wrapper_wxSlider::_bind_SetTick},
	{"SetTickFreq", &luna_wrapper_wxSlider::_bind_SetTickFreq},
	{"SetValue", &luna_wrapper_wxSlider::_bind_SetValue},
	{0,0}
};

luna_ConverterType LunaTraits< wxSlider >::converters[] = {
	{"wxObject", &luna_wrapper_wxSlider::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSlider >::enumValues[] = {
	{0,0}
};


