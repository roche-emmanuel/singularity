#include <plug_common.h>

class luna_wrapper_wxTextCtrl {
public:
	typedef Luna< wxTextCtrl > luna_t;

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
		wxTextCtrl* ptr= dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextCtrl >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTextEntry(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTextCtrl* ptr= dynamic_cast< wxTextCtrl* >(Luna< wxTextEntry >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>6 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DiscardEdits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EmulateKeyPress(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLineLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumberOfLines(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,37117058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HitTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HitTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsMultiLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSingleLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkDirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnDropFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PositionToXY(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PositionToCoords(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37117058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetModified(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,37117058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_XYToPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTextCtrl::wxTextCtrl()
	static wxTextCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrl::wxTextCtrl() function, expected prototype:\nwxTextCtrl::wxTextCtrl()\nClass arguments details:\n");
		}


		return new wxTextCtrl();
	}

	// wxTextCtrl::wxTextCtrl(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr)
	static wxTextCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrl::wxTextCtrl(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr) function, expected prototype:\nwxTextCtrl::wxTextCtrl(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTextCtrl::wxTextCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextCtrl::wxTextCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTextCtrl::wxTextCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxTextCtrl(parent, id, value, pos, size, style, validator, name);
	}

	// Overload binder for wxTextCtrl::wxTextCtrl
	static wxTextCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTextCtrl, cannot match any of the overloads for function wxTextCtrl:\n  wxTextCtrl()\n  wxTextCtrl(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxTextCtrl::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr) function, expected prototype:\nbool wxTextCtrl::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTextCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTextCtrl::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, value, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::Cut()
	static int _bind_Cut(lua_State *L) {
		if (!_lg_typecheck_Cut(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::Cut() function, expected prototype:\nvoid wxTextCtrl::Cut()\nClass arguments details:\n");
		}


		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextCtrl::Cut()");
		}
		self->Cut();

		return 0;
	}

	// void wxTextCtrl::DiscardEdits()
	static int _bind_DiscardEdits(lua_State *L) {
		if (!_lg_typecheck_DiscardEdits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::DiscardEdits() function, expected prototype:\nvoid wxTextCtrl::DiscardEdits()\nClass arguments details:\n");
		}


		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextCtrl::DiscardEdits()");
		}
		self->DiscardEdits();

		return 0;
	}

	// bool wxTextCtrl::EmulateKeyPress(const wxKeyEvent & event)
	static int _bind_EmulateKeyPress(lua_State *L) {
		if (!_lg_typecheck_EmulateKeyPress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::EmulateKeyPress(const wxKeyEvent & event) function, expected prototype:\nbool wxTextCtrl::EmulateKeyPress(const wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxKeyEvent* event_ptr=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTextCtrl::EmulateKeyPress function");
		}
		const wxKeyEvent & event=*event_ptr;

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::EmulateKeyPress(const wxKeyEvent &)");
		}
		bool lret = self->EmulateKeyPress(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxTextAttr & wxTextCtrl::GetDefaultStyle() const
	static int _bind_GetDefaultStyle(lua_State *L) {
		if (!_lg_typecheck_GetDefaultStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttr & wxTextCtrl::GetDefaultStyle() const function, expected prototype:\nconst wxTextAttr & wxTextCtrl::GetDefaultStyle() const\nClass arguments details:\n");
		}


		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttr & wxTextCtrl::GetDefaultStyle() const");
		}
		const wxTextAttr* lret = &self->GetDefaultStyle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttr >::push(L,lret,false);

		return 1;
	}

	// int wxTextCtrl::GetLineLength(long lineNo) const
	static int _bind_GetLineLength(lua_State *L) {
		if (!_lg_typecheck_GetLineLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextCtrl::GetLineLength(long lineNo) const function, expected prototype:\nint wxTextCtrl::GetLineLength(long lineNo) const\nClass arguments details:\n");
		}

		long lineNo=(long)lua_tointeger(L,2);

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextCtrl::GetLineLength(long) const");
		}
		int lret = self->GetLineLength(lineNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTextCtrl::GetLineText(long lineNo) const
	static int _bind_GetLineText(lua_State *L) {
		if (!_lg_typecheck_GetLineText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTextCtrl::GetLineText(long lineNo) const function, expected prototype:\nwxString wxTextCtrl::GetLineText(long lineNo) const\nClass arguments details:\n");
		}

		long lineNo=(long)lua_tointeger(L,2);

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTextCtrl::GetLineText(long) const");
		}
		wxString lret = self->GetLineText(lineNo);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxTextCtrl::GetNumberOfLines() const
	static int _bind_GetNumberOfLines(lua_State *L) {
		if (!_lg_typecheck_GetNumberOfLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextCtrl::GetNumberOfLines() const function, expected prototype:\nint wxTextCtrl::GetNumberOfLines() const\nClass arguments details:\n");
		}


		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextCtrl::GetNumberOfLines() const");
		}
		int lret = self->GetNumberOfLines();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTextCtrl::GetStyle(long position, wxTextAttr & style)
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::GetStyle(long position, wxTextAttr & style) function, expected prototype:\nbool wxTextCtrl::GetStyle(long position, wxTextAttr & style)\nClass arguments details:\narg 2 ID = 37117058\n");
		}

		long position=(long)lua_tointeger(L,2);
		wxTextAttr* style_ptr=(Luna< wxTextAttr >::check(L,3));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextCtrl::GetStyle function");
		}
		wxTextAttr & style=*style_ptr;

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::GetStyle(long, wxTextAttr &)");
		}
		bool lret = self->GetStyle(position, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * pos) const
	static int _bind_HitTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_HitTest_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * pos) const function, expected prototype:\nwxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * pos) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTextCtrl::HitTest function");
		}
		const wxPoint & pt=*pt_ptr;
		long pos=(long)lua_tointeger(L,3);

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint &, long *) const");
		}
		wxTextCtrlHitTestResult lret = self->HitTest(pt, &pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * col, long * row) const
	static int _bind_HitTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_HitTest_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * col, long * row) const function, expected prototype:\nwxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * col, long * row) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTextCtrl::HitTest function");
		}
		const wxPoint & pt=*pt_ptr;
		long col=(long)lua_tointeger(L,3);
		long row=(long)lua_tointeger(L,4);

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint &, long *, long *) const");
		}
		wxTextCtrlHitTestResult lret = self->HitTest(pt, &col, &row);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxTextCtrl::HitTest
	static int _bind_HitTest(lua_State *L) {
		if (_lg_typecheck_HitTest_overload_1(L)) return _bind_HitTest_overload_1(L);
		if (_lg_typecheck_HitTest_overload_2(L)) return _bind_HitTest_overload_2(L);

		luaL_error(L, "error in function HitTest, cannot match any of the overloads for function HitTest:\n  HitTest(const wxPoint &, long *)\n  HitTest(const wxPoint &, long *, long *)\n");
		return 0;
	}

	// bool wxTextCtrl::IsModified() const
	static int _bind_IsModified(lua_State *L) {
		if (!_lg_typecheck_IsModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::IsModified() const function, expected prototype:\nbool wxTextCtrl::IsModified() const\nClass arguments details:\n");
		}


		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::IsModified() const");
		}
		bool lret = self->IsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::IsMultiLine() const
	static int _bind_IsMultiLine(lua_State *L) {
		if (!_lg_typecheck_IsMultiLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::IsMultiLine() const function, expected prototype:\nbool wxTextCtrl::IsMultiLine() const\nClass arguments details:\n");
		}


		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::IsMultiLine() const");
		}
		bool lret = self->IsMultiLine();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::IsSingleLine() const
	static int _bind_IsSingleLine(lua_State *L) {
		if (!_lg_typecheck_IsSingleLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::IsSingleLine() const function, expected prototype:\nbool wxTextCtrl::IsSingleLine() const\nClass arguments details:\n");
		}


		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::IsSingleLine() const");
		}
		bool lret = self->IsSingleLine();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::LoadFile(const wxString & filename, int fileType = wxTEXT_TYPE_ANY)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::LoadFile(const wxString & filename, int fileType = wxTEXT_TYPE_ANY) function, expected prototype:\nbool wxTextCtrl::LoadFile(const wxString & filename, int fileType = wxTEXT_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));
		int fileType=luatop>2 ? (int)lua_tointeger(L,3) : wxTEXT_TYPE_ANY;

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::LoadFile(const wxString &, int)");
		}
		bool lret = self->LoadFile(filename, fileType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::MarkDirty()
	static int _bind_MarkDirty(lua_State *L) {
		if (!_lg_typecheck_MarkDirty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::MarkDirty() function, expected prototype:\nvoid wxTextCtrl::MarkDirty()\nClass arguments details:\n");
		}


		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextCtrl::MarkDirty()");
		}
		self->MarkDirty();

		return 0;
	}

	// void wxTextCtrl::OnDropFiles(wxDropFilesEvent & event)
	static int _bind_OnDropFiles(lua_State *L) {
		if (!_lg_typecheck_OnDropFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::OnDropFiles(wxDropFilesEvent & event) function, expected prototype:\nvoid wxTextCtrl::OnDropFiles(wxDropFilesEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDropFilesEvent* event_ptr=dynamic_cast< wxDropFilesEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTextCtrl::OnDropFiles function");
		}
		wxDropFilesEvent & event=*event_ptr;

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextCtrl::OnDropFiles(wxDropFilesEvent &)");
		}
		self->OnDropFiles(event);

		return 0;
	}

	// bool wxTextCtrl::PositionToXY(long pos, long * x, long * y) const
	static int _bind_PositionToXY(lua_State *L) {
		if (!_lg_typecheck_PositionToXY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::PositionToXY(long pos, long * x, long * y) const function, expected prototype:\nbool wxTextCtrl::PositionToXY(long pos, long * x, long * y) const\nClass arguments details:\n");
		}

		long pos=(long)lua_tointeger(L,2);
		long x=(long)lua_tointeger(L,3);
		long y=(long)lua_tointeger(L,4);

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::PositionToXY(long, long *, long *) const");
		}
		bool lret = self->PositionToXY(pos, &x, &y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxTextCtrl::PositionToCoords(long pos) const
	static int _bind_PositionToCoords(lua_State *L) {
		if (!_lg_typecheck_PositionToCoords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxTextCtrl::PositionToCoords(long pos) const function, expected prototype:\nwxPoint wxTextCtrl::PositionToCoords(long pos) const\nClass arguments details:\n");
		}

		long pos=(long)lua_tointeger(L,2);

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxTextCtrl::PositionToCoords(long) const");
		}
		wxPoint stack_lret = self->PositionToCoords(pos);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// bool wxTextCtrl::SaveFile(const wxString & filename = wxEmptyString, int fileType = wxTEXT_TYPE_ANY)
	static int _bind_SaveFile(lua_State *L) {
		if (!_lg_typecheck_SaveFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::SaveFile(const wxString & filename = wxEmptyString, int fileType = wxTEXT_TYPE_ANY) function, expected prototype:\nbool wxTextCtrl::SaveFile(const wxString & filename = wxEmptyString, int fileType = wxTEXT_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));
		int fileType=luatop>2 ? (int)lua_tointeger(L,3) : wxTEXT_TYPE_ANY;

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::SaveFile(const wxString &, int)");
		}
		bool lret = self->SaveFile(filename, fileType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::SetDefaultStyle(const wxTextAttr & style)
	static int _bind_SetDefaultStyle(lua_State *L) {
		if (!_lg_typecheck_SetDefaultStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::SetDefaultStyle(const wxTextAttr & style) function, expected prototype:\nbool wxTextCtrl::SetDefaultStyle(const wxTextAttr & style)\nClass arguments details:\narg 1 ID = 37117058\n");
		}

		const wxTextAttr* style_ptr=(Luna< wxTextAttr >::check(L,2));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextCtrl::SetDefaultStyle function");
		}
		const wxTextAttr & style=*style_ptr;

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::SetDefaultStyle(const wxTextAttr &)");
		}
		bool lret = self->SetDefaultStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::SetModified(bool modified)
	static int _bind_SetModified(lua_State *L) {
		if (!_lg_typecheck_SetModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::SetModified(bool modified) function, expected prototype:\nvoid wxTextCtrl::SetModified(bool modified)\nClass arguments details:\n");
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextCtrl::SetModified(bool)");
		}
		self->SetModified(modified);

		return 0;
	}

	// bool wxTextCtrl::SetStyle(long start, long end, const wxTextAttr & style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::SetStyle(long start, long end, const wxTextAttr & style) function, expected prototype:\nbool wxTextCtrl::SetStyle(long start, long end, const wxTextAttr & style)\nClass arguments details:\narg 3 ID = 37117058\n");
		}

		long start=(long)lua_tointeger(L,2);
		long end=(long)lua_tointeger(L,3);
		const wxTextAttr* style_ptr=(Luna< wxTextAttr >::check(L,4));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextCtrl::SetStyle function");
		}
		const wxTextAttr & style=*style_ptr;

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::SetStyle(long, long, const wxTextAttr &)");
		}
		bool lret = self->SetStyle(start, end, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::ShowPosition(long pos)
	static int _bind_ShowPosition(lua_State *L) {
		if (!_lg_typecheck_ShowPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::ShowPosition(long pos) function, expected prototype:\nvoid wxTextCtrl::ShowPosition(long pos)\nClass arguments details:\n");
		}

		long pos=(long)lua_tointeger(L,2);

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextCtrl::ShowPosition(long)");
		}
		self->ShowPosition(pos);

		return 0;
	}

	// long wxTextCtrl::XYToPosition(long x, long y) const
	static int _bind_XYToPosition(lua_State *L) {
		if (!_lg_typecheck_XYToPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxTextCtrl::XYToPosition(long x, long y) const function, expected prototype:\nlong wxTextCtrl::XYToPosition(long x, long y) const\nClass arguments details:\n");
		}

		long x=(long)lua_tointeger(L,2);
		long y=(long)lua_tointeger(L,3);

		wxTextCtrl* self=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxTextCtrl::XYToPosition(long, long) const");
		}
		long lret = self->XYToPosition(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxTextCtrl* LunaTraits< wxTextCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextCtrl::_bind_ctor(L);
}

void LunaTraits< wxTextCtrl >::_bind_dtor(wxTextCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxTextCtrl >::className[] = "wxTextCtrl";
const char LunaTraits< wxTextCtrl >::fullName[] = "wxTextCtrl";
const char LunaTraits< wxTextCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxTextCtrl >::parents[] = {"wx.wxControl", "wx.wxTextEntry", 0};
const int LunaTraits< wxTextCtrl >::hash = 37176572;
const int LunaTraits< wxTextCtrl >::uniqueIDs[] = {56813631, 53506535, 54144136,0};

luna_RegType LunaTraits< wxTextCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxTextCtrl::_bind_Create},
	{"Cut", &luna_wrapper_wxTextCtrl::_bind_Cut},
	{"DiscardEdits", &luna_wrapper_wxTextCtrl::_bind_DiscardEdits},
	{"EmulateKeyPress", &luna_wrapper_wxTextCtrl::_bind_EmulateKeyPress},
	{"GetDefaultStyle", &luna_wrapper_wxTextCtrl::_bind_GetDefaultStyle},
	{"GetLineLength", &luna_wrapper_wxTextCtrl::_bind_GetLineLength},
	{"GetLineText", &luna_wrapper_wxTextCtrl::_bind_GetLineText},
	{"GetNumberOfLines", &luna_wrapper_wxTextCtrl::_bind_GetNumberOfLines},
	{"GetStyle", &luna_wrapper_wxTextCtrl::_bind_GetStyle},
	{"HitTest", &luna_wrapper_wxTextCtrl::_bind_HitTest},
	{"IsModified", &luna_wrapper_wxTextCtrl::_bind_IsModified},
	{"IsMultiLine", &luna_wrapper_wxTextCtrl::_bind_IsMultiLine},
	{"IsSingleLine", &luna_wrapper_wxTextCtrl::_bind_IsSingleLine},
	{"LoadFile", &luna_wrapper_wxTextCtrl::_bind_LoadFile},
	{"MarkDirty", &luna_wrapper_wxTextCtrl::_bind_MarkDirty},
	{"OnDropFiles", &luna_wrapper_wxTextCtrl::_bind_OnDropFiles},
	{"PositionToXY", &luna_wrapper_wxTextCtrl::_bind_PositionToXY},
	{"PositionToCoords", &luna_wrapper_wxTextCtrl::_bind_PositionToCoords},
	{"SaveFile", &luna_wrapper_wxTextCtrl::_bind_SaveFile},
	{"SetDefaultStyle", &luna_wrapper_wxTextCtrl::_bind_SetDefaultStyle},
	{"SetModified", &luna_wrapper_wxTextCtrl::_bind_SetModified},
	{"SetStyle", &luna_wrapper_wxTextCtrl::_bind_SetStyle},
	{"ShowPosition", &luna_wrapper_wxTextCtrl::_bind_ShowPosition},
	{"XYToPosition", &luna_wrapper_wxTextCtrl::_bind_XYToPosition},
	{"__eq", &luna_wrapper_wxTextCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxTextCtrl::_cast_from_wxObject},
	{"wxTextEntry", &luna_wrapper_wxTextCtrl::_cast_from_wxTextEntry},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextCtrl >::enumValues[] = {
	{0,0}
};


