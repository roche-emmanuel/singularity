#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWizard.h>

class luna_wrapper_wxWizard {
public:
	typedef Luna< wxWizard > luna_t;

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
		wxWizard* ptr= dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWizard >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>5 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitToPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapPlacement(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinimumBitmapWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageAreaSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasNextPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasPrevPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RunWizard(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapPlacement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBorder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinimumBitmapWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWizard::wxWizard()
	static wxWizard* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWizard::wxWizard() function, expected prototype:\nwxWizard::wxWizard()\nClass arguments details:\n");
		}


		return new wxWizard();
	}

	// wxWizard::wxWizard(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE)
	static wxWizard* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWizard::wxWizard(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE) function, expected prototype:\nwxWizard::wxWizard(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 5 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : ::wxID_ANY;
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=luatop>3 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxWizard::wxWizard function");
		}
		const wxBitmap & bitmap=luatop>3 ? *bitmap_ptr : wxNullBitmap;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWizard::wxWizard function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxDEFAULT_DIALOG_STYLE;

		return new wxWizard(parent, id, title, bitmap, pos, style);
	}

	// wxWizard::wxWizard(lua_Table * data)
	static wxWizard* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWizard::wxWizard(lua_Table * data) function, expected prototype:\nwxWizard::wxWizard(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxWizard(L,NULL);
	}

	// wxWizard::wxWizard(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE)
	static wxWizard* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWizard::wxWizard(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE) function, expected prototype:\nwxWizard::wxWizard(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 56813631\narg 6 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxBitmap* bitmap_ptr=luatop>4 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxWizard::wxWizard function");
		}
		const wxBitmap & bitmap=luatop>4 ? *bitmap_ptr : wxNullBitmap;
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWizard::wxWizard function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDEFAULT_DIALOG_STYLE;

		return new wrapper_wxWizard(L,NULL, parent, id, title, bitmap, pos, style);
	}

	// Overload binder for wxWizard::wxWizard
	static wxWizard* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxWizard, cannot match any of the overloads for function wxWizard:\n  wxWizard()\n  wxWizard(wxWindow *, int, const wxString &, const wxBitmap &, const wxPoint &, long)\n  wxWizard(lua_Table *)\n  wxWizard(lua_Table *, wxWindow *, int, const wxString &, const wxBitmap &, const wxPoint &, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxWizard::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = 536877056)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWizard::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = 536877056) function, expected prototype:\nbool wxWizard::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = 536877056)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 5 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxBitmap* bitmap_ptr=luatop>4 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxWizard::Create function");
		}
		const wxBitmap & bitmap=luatop>4 ? *bitmap_ptr : wxNullBitmap;
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWizard::Create function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 536877056;

		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWizard::Create(wxWindow *, int, const wxString &, const wxBitmap &, const wxPoint &, long)");
		}
		bool lret = self->Create(parent, id, title, bitmap, pos, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::FitToPage(const wxWizardPage * firstPage)
	static int _bind_FitToPage(lua_State *L) {
		if (!_lg_typecheck_FitToPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWizard::FitToPage(const wxWizardPage * firstPage) function, expected prototype:\nvoid wxWizard::FitToPage(const wxWizardPage * firstPage)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxWizardPage* firstPage=dynamic_cast< wxWizardPage* >(Luna< wxObject >::check(L,2));

		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWizard::FitToPage(const wxWizardPage *)");
		}
		self->FitToPage(firstPage);

		return 0;
	}

	// const wxBitmap & wxWizard::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxWizard::GetBitmap() const function, expected prototype:\nconst wxBitmap & wxWizard::GetBitmap() const\nClass arguments details:\n");
		}


		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxBitmap & wxWizard::GetBitmap() const");
		}
		const wxBitmap* lret = &self->GetBitmap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxWizard::GetBitmapBackgroundColour() const
	static int _bind_GetBitmapBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBitmapBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxWizard::GetBitmapBackgroundColour() const function, expected prototype:\nconst wxColour & wxWizard::GetBitmapBackgroundColour() const\nClass arguments details:\n");
		}


		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxWizard::GetBitmapBackgroundColour() const");
		}
		const wxColour* lret = &self->GetBitmapBackgroundColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// int wxWizard::GetBitmapPlacement() const
	static int _bind_GetBitmapPlacement(lua_State *L) {
		if (!_lg_typecheck_GetBitmapPlacement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWizard::GetBitmapPlacement() const function, expected prototype:\nint wxWizard::GetBitmapPlacement() const\nClass arguments details:\n");
		}


		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWizard::GetBitmapPlacement() const");
		}
		int lret = self->GetBitmapPlacement();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWizardPage * wxWizard::GetCurrentPage() const
	static int _bind_GetCurrentPage(lua_State *L) {
		if (!_lg_typecheck_GetCurrentPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWizardPage * wxWizard::GetCurrentPage() const function, expected prototype:\nwxWizardPage * wxWizard::GetCurrentPage() const\nClass arguments details:\n");
		}


		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWizardPage * wxWizard::GetCurrentPage() const");
		}
		wxWizardPage * lret = self->GetCurrentPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWizardPage >::push(L,lret,false);

		return 1;
	}

	// int wxWizard::GetMinimumBitmapWidth() const
	static int _bind_GetMinimumBitmapWidth(lua_State *L) {
		if (!_lg_typecheck_GetMinimumBitmapWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxWizard::GetMinimumBitmapWidth() const function, expected prototype:\nint wxWizard::GetMinimumBitmapWidth() const\nClass arguments details:\n");
		}


		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxWizard::GetMinimumBitmapWidth() const");
		}
		int lret = self->GetMinimumBitmapWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSizer * wxWizard::GetPageAreaSizer() const
	static int _bind_GetPageAreaSizer(lua_State *L) {
		if (!_lg_typecheck_GetPageAreaSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizer * wxWizard::GetPageAreaSizer() const function, expected prototype:\nwxSizer * wxWizard::GetPageAreaSizer() const\nClass arguments details:\n");
		}


		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizer * wxWizard::GetPageAreaSizer() const");
		}
		wxSizer * lret = self->GetPageAreaSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// wxSize wxWizard::GetPageSize() const
	static int _bind_GetPageSize(lua_State *L) {
		if (!_lg_typecheck_GetPageSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::GetPageSize() const function, expected prototype:\nwxSize wxWizard::GetPageSize() const\nClass arguments details:\n");
		}


		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWizard::GetPageSize() const");
		}
		wxSize stack_lret = self->GetPageSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxWizard::HasNextPage(wxWizardPage * page)
	static int _bind_HasNextPage(lua_State *L) {
		if (!_lg_typecheck_HasNextPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWizard::HasNextPage(wxWizardPage * page) function, expected prototype:\nbool wxWizard::HasNextPage(wxWizardPage * page)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWizardPage* page=dynamic_cast< wxWizardPage* >(Luna< wxObject >::check(L,2));

		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWizard::HasNextPage(wxWizardPage *)");
		}
		bool lret = self->HasNextPage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::HasPrevPage(wxWizardPage * page)
	static int _bind_HasPrevPage(lua_State *L) {
		if (!_lg_typecheck_HasPrevPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWizard::HasPrevPage(wxWizardPage * page) function, expected prototype:\nbool wxWizard::HasPrevPage(wxWizardPage * page)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWizardPage* page=dynamic_cast< wxWizardPage* >(Luna< wxObject >::check(L,2));

		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWizard::HasPrevPage(wxWizardPage *)");
		}
		bool lret = self->HasPrevPage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::RunWizard(wxWizardPage * firstPage)
	static int _bind_RunWizard(lua_State *L) {
		if (!_lg_typecheck_RunWizard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWizard::RunWizard(wxWizardPage * firstPage) function, expected prototype:\nbool wxWizard::RunWizard(wxWizardPage * firstPage)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWizardPage* firstPage=dynamic_cast< wxWizardPage* >(Luna< wxObject >::check(L,2));

		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWizard::RunWizard(wxWizardPage *)");
		}
		bool lret = self->RunWizard(firstPage);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::SetBitmap(const wxBitmap & bitmap)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWizard::SetBitmap(const wxBitmap & bitmap) function, expected prototype:\nvoid wxWizard::SetBitmap(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxWizard::SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWizard::SetBitmap(const wxBitmap &)");
		}
		self->SetBitmap(bitmap);

		return 0;
	}

	// void wxWizard::SetBitmapBackgroundColour(const wxColour & colour)
	static int _bind_SetBitmapBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBitmapBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWizard::SetBitmapBackgroundColour(const wxColour & colour) function, expected prototype:\nvoid wxWizard::SetBitmapBackgroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxWizard::SetBitmapBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWizard::SetBitmapBackgroundColour(const wxColour &)");
		}
		self->SetBitmapBackgroundColour(colour);

		return 0;
	}

	// void wxWizard::SetBitmapPlacement(int placement)
	static int _bind_SetBitmapPlacement(lua_State *L) {
		if (!_lg_typecheck_SetBitmapPlacement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWizard::SetBitmapPlacement(int placement) function, expected prototype:\nvoid wxWizard::SetBitmapPlacement(int placement)\nClass arguments details:\n");
		}

		int placement=(int)lua_tointeger(L,2);

		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWizard::SetBitmapPlacement(int)");
		}
		self->SetBitmapPlacement(placement);

		return 0;
	}

	// void wxWizard::SetBorder(int border)
	static int _bind_SetBorder(lua_State *L) {
		if (!_lg_typecheck_SetBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWizard::SetBorder(int border) function, expected prototype:\nvoid wxWizard::SetBorder(int border)\nClass arguments details:\n");
		}

		int border=(int)lua_tointeger(L,2);

		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWizard::SetBorder(int)");
		}
		self->SetBorder(border);

		return 0;
	}

	// void wxWizard::SetMinimumBitmapWidth(int width)
	static int _bind_SetMinimumBitmapWidth(lua_State *L) {
		if (!_lg_typecheck_SetMinimumBitmapWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWizard::SetMinimumBitmapWidth(int width) function, expected prototype:\nvoid wxWizard::SetMinimumBitmapWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWizard::SetMinimumBitmapWidth(int)");
		}
		self->SetMinimumBitmapWidth(width);

		return 0;
	}

	// void wxWizard::SetPageSize(const wxSize & sizePage)
	static int _bind_SetPageSize(lua_State *L) {
		if (!_lg_typecheck_SetPageSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWizard::SetPageSize(const wxSize & sizePage) function, expected prototype:\nvoid wxWizard::SetPageSize(const wxSize & sizePage)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* sizePage_ptr=(Luna< wxSize >::check(L,2));
		if( !sizePage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sizePage in wxWizard::SetPageSize function");
		}
		const wxSize & sizePage=*sizePage_ptr;

		wxWizard* self=dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWizard::SetPageSize(const wxSize &)");
		}
		self->SetPageSize(sizePage);

		return 0;
	}


	// Operator binds:

};

wxWizard* LunaTraits< wxWizard >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWizard::_bind_ctor(L);
}

void LunaTraits< wxWizard >::_bind_dtor(wxWizard* obj) {
	delete obj;
}

const char LunaTraits< wxWizard >::className[] = "wxWizard";
const char LunaTraits< wxWizard >::fullName[] = "wxWizard";
const char LunaTraits< wxWizard >::moduleName[] = "wx";
const char* LunaTraits< wxWizard >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxWizard >::hash = 92784731;
const int LunaTraits< wxWizard >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxWizard >::methods[] = {
	{"Create", &luna_wrapper_wxWizard::_bind_Create},
	{"FitToPage", &luna_wrapper_wxWizard::_bind_FitToPage},
	{"GetBitmap", &luna_wrapper_wxWizard::_bind_GetBitmap},
	{"GetBitmapBackgroundColour", &luna_wrapper_wxWizard::_bind_GetBitmapBackgroundColour},
	{"GetBitmapPlacement", &luna_wrapper_wxWizard::_bind_GetBitmapPlacement},
	{"GetCurrentPage", &luna_wrapper_wxWizard::_bind_GetCurrentPage},
	{"GetMinimumBitmapWidth", &luna_wrapper_wxWizard::_bind_GetMinimumBitmapWidth},
	{"GetPageAreaSizer", &luna_wrapper_wxWizard::_bind_GetPageAreaSizer},
	{"GetPageSize", &luna_wrapper_wxWizard::_bind_GetPageSize},
	{"HasNextPage", &luna_wrapper_wxWizard::_bind_HasNextPage},
	{"HasPrevPage", &luna_wrapper_wxWizard::_bind_HasPrevPage},
	{"RunWizard", &luna_wrapper_wxWizard::_bind_RunWizard},
	{"SetBitmap", &luna_wrapper_wxWizard::_bind_SetBitmap},
	{"SetBitmapBackgroundColour", &luna_wrapper_wxWizard::_bind_SetBitmapBackgroundColour},
	{"SetBitmapPlacement", &luna_wrapper_wxWizard::_bind_SetBitmapPlacement},
	{"SetBorder", &luna_wrapper_wxWizard::_bind_SetBorder},
	{"SetMinimumBitmapWidth", &luna_wrapper_wxWizard::_bind_SetMinimumBitmapWidth},
	{"SetPageSize", &luna_wrapper_wxWizard::_bind_SetPageSize},
	{"__eq", &luna_wrapper_wxWizard::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxWizard >::converters[] = {
	{"wxObject", &luna_wrapper_wxWizard::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWizard >::enumValues[] = {
	{0,0}
};


