#include <plug_common.h>

class luna_wrapper_wxGBSizerItem {
public:
	typedef Luna< wxGBSizerItem > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGBSizerItem* ptr= dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGBSizerItem >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,97553085) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetEndPos(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPos_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPos_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSpan_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSpan_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersects_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersects_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSpan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,97553085) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGBSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGBSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGBSizerItem::wxGBSizerItem(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxGBSizerItem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSizerItem::wxGBSizerItem(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxGBSizerItem::wxGBSizerItem(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 3 ID = 3425779\narg 4 ID = 97553085\narg 7 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>3 ? (Luna< wxGBSpan >::check(L,4)) : NULL;
		if( luatop>3 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBSpan & span=luatop>3 ? *span_ptr : wxDefaultSpan;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : 0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		return new wxGBSizerItem(width, height, pos, span, flag, border, userData);
	}

	// wxGBSizerItem::wxGBSizerItem(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxGBSizerItem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSizerItem::wxGBSizerItem(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxGBSizerItem::wxGBSizerItem(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\narg 3 ID = 97553085\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>2 ? (Luna< wxGBSpan >::check(L,3)) : NULL;
		if( luatop>2 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBSpan & span=luatop>2 ? *span_ptr : wxDefaultSpan;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		return new wxGBSizerItem(window, pos, span, flag, border, userData);
	}

	// wxGBSizerItem::wxGBSizerItem(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxGBSizerItem* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSizerItem::wxGBSizerItem(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxGBSizerItem::wxGBSizerItem(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\narg 3 ID = 97553085\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>2 ? (Luna< wxGBSpan >::check(L,3)) : NULL;
		if( luatop>2 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBSpan & span=luatop>2 ? *span_ptr : wxDefaultSpan;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		return new wxGBSizerItem(sizer, pos, span, flag, border, userData);
	}

	// Overload binder for wxGBSizerItem::wxGBSizerItem
	static wxGBSizerItem* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxGBSizerItem, cannot match any of the overloads for function wxGBSizerItem:\n  wxGBSizerItem(int, int, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  wxGBSizerItem(wxWindow *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  wxGBSizerItem(wxSizer *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n");
		return NULL;
	}


	// Function binds:
	// void wxGBSizerItem::GetEndPos(int & row, int & col)
	static int _bind_GetEndPos(lua_State *L) {
		if (!_lg_typecheck_GetEndPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGBSizerItem::GetEndPos(int & row, int & col) function, expected prototype:\nvoid wxGBSizerItem::GetEndPos(int & row, int & col)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGBSizerItem* self=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGBSizerItem::GetEndPos(int &, int &)");
		}
		self->GetEndPos(row, col);

		return 0;
	}

	// wxGBPosition wxGBSizerItem::GetPos() const
	static int _bind_GetPos_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPos_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBPosition wxGBSizerItem::GetPos() const function, expected prototype:\nwxGBPosition wxGBSizerItem::GetPos() const\nClass arguments details:\n");
		}


		wxGBSizerItem* self=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBPosition wxGBSizerItem::GetPos() const");
		}
		wxGBPosition stack_lret = self->GetPos();
		wxGBPosition* lret = new wxGBPosition(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBPosition >::push(L,lret,true);

		return 1;
	}

	// void wxGBSizerItem::GetPos(int & row, int & col) const
	static int _bind_GetPos_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPos_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGBSizerItem::GetPos(int & row, int & col) const function, expected prototype:\nvoid wxGBSizerItem::GetPos(int & row, int & col) const\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGBSizerItem* self=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGBSizerItem::GetPos(int &, int &) const");
		}
		self->GetPos(row, col);

		return 0;
	}

	// Overload binder for wxGBSizerItem::GetPos
	static int _bind_GetPos(lua_State *L) {
		if (_lg_typecheck_GetPos_overload_1(L)) return _bind_GetPos_overload_1(L);
		if (_lg_typecheck_GetPos_overload_2(L)) return _bind_GetPos_overload_2(L);

		luaL_error(L, "error in function GetPos, cannot match any of the overloads for function GetPos:\n  GetPos()\n  GetPos(int &, int &)\n");
		return 0;
	}

	// wxGBSpan wxGBSizerItem::GetSpan() const
	static int _bind_GetSpan_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetSpan_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSpan wxGBSizerItem::GetSpan() const function, expected prototype:\nwxGBSpan wxGBSizerItem::GetSpan() const\nClass arguments details:\n");
		}


		wxGBSizerItem* self=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBSpan wxGBSizerItem::GetSpan() const");
		}
		wxGBSpan stack_lret = self->GetSpan();
		wxGBSpan* lret = new wxGBSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSpan >::push(L,lret,true);

		return 1;
	}

	// void wxGBSizerItem::GetSpan(int & rowspan, int & colspan) const
	static int _bind_GetSpan_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetSpan_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGBSizerItem::GetSpan(int & rowspan, int & colspan) const function, expected prototype:\nvoid wxGBSizerItem::GetSpan(int & rowspan, int & colspan) const\nClass arguments details:\n");
		}

		int rowspan=(int)lua_tointeger(L,2);
		int colspan=(int)lua_tointeger(L,3);

		wxGBSizerItem* self=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGBSizerItem::GetSpan(int &, int &) const");
		}
		self->GetSpan(rowspan, colspan);

		return 0;
	}

	// Overload binder for wxGBSizerItem::GetSpan
	static int _bind_GetSpan(lua_State *L) {
		if (_lg_typecheck_GetSpan_overload_1(L)) return _bind_GetSpan_overload_1(L);
		if (_lg_typecheck_GetSpan_overload_2(L)) return _bind_GetSpan_overload_2(L);

		luaL_error(L, "error in function GetSpan, cannot match any of the overloads for function GetSpan:\n  GetSpan()\n  GetSpan(int &, int &)\n");
		return 0;
	}

	// bool wxGBSizerItem::Intersects(const wxGBSizerItem & other)
	static int _bind_Intersects_overload_1(lua_State *L) {
		if (!_lg_typecheck_Intersects_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGBSizerItem::Intersects(const wxGBSizerItem & other) function, expected prototype:\nbool wxGBSizerItem::Intersects(const wxGBSizerItem & other)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxGBSizerItem* other_ptr=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxGBSizerItem::Intersects function");
		}
		const wxGBSizerItem & other=*other_ptr;

		wxGBSizerItem* self=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGBSizerItem::Intersects(const wxGBSizerItem &)");
		}
		bool lret = self->Intersects(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGBSizerItem::Intersects(const wxGBPosition & pos, const wxGBSpan & span)
	static int _bind_Intersects_overload_2(lua_State *L) {
		if (!_lg_typecheck_Intersects_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGBSizerItem::Intersects(const wxGBPosition & pos, const wxGBSpan & span) function, expected prototype:\nbool wxGBSizerItem::Intersects(const wxGBPosition & pos, const wxGBSpan & span)\nClass arguments details:\narg 1 ID = 3425779\narg 2 ID = 97553085\n");
		}

		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::Intersects function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,3));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::Intersects function");
		}
		const wxGBSpan & span=*span_ptr;

		wxGBSizerItem* self=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGBSizerItem::Intersects(const wxGBPosition &, const wxGBSpan &)");
		}
		bool lret = self->Intersects(pos, span);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGBSizerItem::Intersects
	static int _bind_Intersects(lua_State *L) {
		if (_lg_typecheck_Intersects_overload_1(L)) return _bind_Intersects_overload_1(L);
		if (_lg_typecheck_Intersects_overload_2(L)) return _bind_Intersects_overload_2(L);

		luaL_error(L, "error in function Intersects, cannot match any of the overloads for function Intersects:\n  Intersects(const wxGBSizerItem &)\n  Intersects(const wxGBPosition &, const wxGBSpan &)\n");
		return 0;
	}

	// bool wxGBSizerItem::SetPos(const wxGBPosition & pos)
	static int _bind_SetPos(lua_State *L) {
		if (!_lg_typecheck_SetPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGBSizerItem::SetPos(const wxGBPosition & pos) function, expected prototype:\nbool wxGBSizerItem::SetPos(const wxGBPosition & pos)\nClass arguments details:\narg 1 ID = 3425779\n");
		}

		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::SetPos function");
		}
		const wxGBPosition & pos=*pos_ptr;

		wxGBSizerItem* self=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGBSizerItem::SetPos(const wxGBPosition &)");
		}
		bool lret = self->SetPos(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGBSizerItem::SetSpan(const wxGBSpan & span)
	static int _bind_SetSpan(lua_State *L) {
		if (!_lg_typecheck_SetSpan(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGBSizerItem::SetSpan(const wxGBSpan & span) function, expected prototype:\nbool wxGBSizerItem::SetSpan(const wxGBSpan & span)\nClass arguments details:\narg 1 ID = 97553085\n");
		}

		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,2));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::SetSpan function");
		}
		const wxGBSpan & span=*span_ptr;

		wxGBSizerItem* self=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGBSizerItem::SetSpan(const wxGBSpan &)");
		}
		bool lret = self->SetSpan(span);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxGridBagSizer * wxGBSizerItem::GetGBSizer() const
	static int _bind_GetGBSizer(lua_State *L) {
		if (!_lg_typecheck_GetGBSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridBagSizer * wxGBSizerItem::GetGBSizer() const function, expected prototype:\nwxGridBagSizer * wxGBSizerItem::GetGBSizer() const\nClass arguments details:\n");
		}


		wxGBSizerItem* self=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGridBagSizer * wxGBSizerItem::GetGBSizer() const");
		}
		wxGridBagSizer * lret = self->GetGBSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridBagSizer >::push(L,lret,false);

		return 1;
	}

	// void wxGBSizerItem::SetGBSizer(wxGridBagSizer * sizer)
	static int _bind_SetGBSizer(lua_State *L) {
		if (!_lg_typecheck_SetGBSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGBSizerItem::SetGBSizer(wxGridBagSizer * sizer) function, expected prototype:\nvoid wxGBSizerItem::SetGBSizer(wxGridBagSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxGridBagSizer* sizer=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,2));

		wxGBSizerItem* self=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGBSizerItem::SetGBSizer(wxGridBagSizer *)");
		}
		self->SetGBSizer(sizer);

		return 0;
	}


	// Operator binds:

};

wxGBSizerItem* LunaTraits< wxGBSizerItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGBSizerItem::_bind_ctor(L);
}

void LunaTraits< wxGBSizerItem >::_bind_dtor(wxGBSizerItem* obj) {
	delete obj;
}

const char LunaTraits< wxGBSizerItem >::className[] = "wxGBSizerItem";
const char LunaTraits< wxGBSizerItem >::fullName[] = "wxGBSizerItem";
const char LunaTraits< wxGBSizerItem >::moduleName[] = "wx";
const char* LunaTraits< wxGBSizerItem >::parents[] = {"wx.wxSizerItem", 0};
const int LunaTraits< wxGBSizerItem >::hash = 98606099;
const int LunaTraits< wxGBSizerItem >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGBSizerItem >::methods[] = {
	{"GetEndPos", &luna_wrapper_wxGBSizerItem::_bind_GetEndPos},
	{"GetPos", &luna_wrapper_wxGBSizerItem::_bind_GetPos},
	{"GetSpan", &luna_wrapper_wxGBSizerItem::_bind_GetSpan},
	{"Intersects", &luna_wrapper_wxGBSizerItem::_bind_Intersects},
	{"SetPos", &luna_wrapper_wxGBSizerItem::_bind_SetPos},
	{"SetSpan", &luna_wrapper_wxGBSizerItem::_bind_SetSpan},
	{"GetGBSizer", &luna_wrapper_wxGBSizerItem::_bind_GetGBSizer},
	{"SetGBSizer", &luna_wrapper_wxGBSizerItem::_bind_SetGBSizer},
	{0,0}
};

luna_ConverterType LunaTraits< wxGBSizerItem >::converters[] = {
	{"wxObject", &luna_wrapper_wxGBSizerItem::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGBSizerItem >::enumValues[] = {
	{0,0}
};

