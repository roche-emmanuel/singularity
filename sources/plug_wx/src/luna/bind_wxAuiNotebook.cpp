#include <plug_common.h>

class luna_wrapper_wxAuiNotebook {
public:
	typedef Luna< wxAuiNotebook > luna_t;

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
		wxAuiNotebook* ptr= dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiNotebook >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxAuiNotebook* ptr= static_cast< wxAuiNotebook* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiNotebook >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxWithImages(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxAuiNotebook* ptr= dynamic_cast< wxAuiNotebook* >(Luna< wxWithImages >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiNotebook >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_AddPage_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddPage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AdvanceSelection(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChangeSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllPages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeletePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeightForPageHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTabCtrlHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertPage_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>5 && (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,6))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertPage_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemovePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,24264105)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMeasuringFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNormalFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectedFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTabCtrlHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUniformBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Split(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowWindowMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxAuiNotebook::AddPage(wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap)
	static int _bind_AddPage_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddPage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::AddPage(wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap) function, expected prototype:\nbool wxAuiNotebook::AddPage(wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 4 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* page=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxString caption(lua_tostring(L,3),lua_objlen(L,3));
		bool select=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;
		const wxBitmap* bitmap_ptr=luatop>4 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiNotebook::AddPage function");
		}
		const wxBitmap & bitmap=luatop>4 ? *bitmap_ptr : wxNullBitmap;

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::AddPage(wxWindow *, const wxString &, bool, const wxBitmap &)");
		}
		bool lret = self->AddPage(page, caption, select, bitmap);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::AddPage(wxWindow * page, const wxString & text, bool select, int imageId)
	static int _bind_AddPage_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddPage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::AddPage(wxWindow * page, const wxString & text, bool select, int imageId) function, expected prototype:\nbool wxAuiNotebook::AddPage(wxWindow * page, const wxString & text, bool select, int imageId)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		wxWindow* page=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		bool select=(bool)(lua_toboolean(L,4)==1);
		int imageId=(int)lua_tointeger(L,5);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::AddPage(wxWindow *, const wxString &, bool, int)");
		}
		bool lret = self->AddPage(page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxAuiNotebook::AddPage
	static int _bind_AddPage(lua_State *L) {
		if (_lg_typecheck_AddPage_overload_1(L)) return _bind_AddPage_overload_1(L);
		if (_lg_typecheck_AddPage_overload_2(L)) return _bind_AddPage_overload_2(L);

		luaL_error(L, "error in function AddPage, cannot match any of the overloads for function AddPage:\n  AddPage(wxWindow *, const wxString &, bool, const wxBitmap &)\n  AddPage(wxWindow *, const wxString &, bool, int)\n");
		return 0;
	}

	// void wxAuiNotebook::AdvanceSelection(bool forward = true)
	static int _bind_AdvanceSelection(lua_State *L) {
		if (!_lg_typecheck_AdvanceSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::AdvanceSelection(bool forward = true) function, expected prototype:\nvoid wxAuiNotebook::AdvanceSelection(bool forward = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool forward=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::AdvanceSelection(bool)");
		}
		self->AdvanceSelection(forward);

		return 0;
	}

	// int wxAuiNotebook::ChangeSelection(size_t n)
	static int _bind_ChangeSelection(lua_State *L) {
		if (!_lg_typecheck_ChangeSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::ChangeSelection(size_t n) function, expected prototype:\nint wxAuiNotebook::ChangeSelection(size_t n)\nClass arguments details:\n");
		}

		size_t n=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::ChangeSelection(size_t)");
		}
		int lret = self->ChangeSelection(n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiNotebook::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) function, expected prototype:\nbool wxAuiNotebook::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxAuiNotebook::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::Create(wxWindow *, int, const wxPoint &, const wxSize &, long)");
		}
		bool lret = self->Create(parent, id, pos, size, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::DeleteAllPages()
	static int _bind_DeleteAllPages(lua_State *L) {
		if (!_lg_typecheck_DeleteAllPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::DeleteAllPages() function, expected prototype:\nbool wxAuiNotebook::DeleteAllPages()\nClass arguments details:\n");
		}


		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::DeleteAllPages()");
		}
		bool lret = self->DeleteAllPages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::DeletePage(size_t page)
	static int _bind_DeletePage(lua_State *L) {
		if (!_lg_typecheck_DeletePage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::DeletePage(size_t page) function, expected prototype:\nbool wxAuiNotebook::DeletePage(size_t page)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::DeletePage(size_t)");
		}
		bool lret = self->DeletePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxAuiTabArt * wxAuiNotebook::GetArtProvider() const
	static int _bind_GetArtProvider(lua_State *L) {
		if (!_lg_typecheck_GetArtProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiTabArt * wxAuiNotebook::GetArtProvider() const function, expected prototype:\nwxAuiTabArt * wxAuiNotebook::GetArtProvider() const\nClass arguments details:\n");
		}


		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiTabArt * wxAuiNotebook::GetArtProvider() const");
		}
		wxAuiTabArt * lret = self->GetArtProvider();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiTabArt >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxAuiNotebook::GetCurrentPage() const
	static int _bind_GetCurrentPage(lua_State *L) {
		if (!_lg_typecheck_GetCurrentPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxAuiNotebook::GetCurrentPage() const function, expected prototype:\nwxWindow * wxAuiNotebook::GetCurrentPage() const\nClass arguments details:\n");
		}


		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxAuiNotebook::GetCurrentPage() const");
		}
		wxWindow * lret = self->GetCurrentPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// int wxAuiNotebook::GetHeightForPageHeight(int pageHeight)
	static int _bind_GetHeightForPageHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeightForPageHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::GetHeightForPageHeight(int pageHeight) function, expected prototype:\nint wxAuiNotebook::GetHeightForPageHeight(int pageHeight)\nClass arguments details:\n");
		}

		int pageHeight=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::GetHeightForPageHeight(int)");
		}
		int lret = self->GetHeightForPageHeight(pageHeight);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWindow * wxAuiNotebook::GetPage(size_t page_idx) const
	static int _bind_GetPage(lua_State *L) {
		if (!_lg_typecheck_GetPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxAuiNotebook::GetPage(size_t page_idx) const function, expected prototype:\nwxWindow * wxAuiNotebook::GetPage(size_t page_idx) const\nClass arguments details:\n");
		}

		size_t page_idx=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxAuiNotebook::GetPage(size_t) const");
		}
		wxWindow * lret = self->GetPage(page_idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxBitmap wxAuiNotebook::GetPageBitmap(size_t page) const
	static int _bind_GetPageBitmap(lua_State *L) {
		if (!_lg_typecheck_GetPageBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxAuiNotebook::GetPageBitmap(size_t page) const function, expected prototype:\nwxBitmap wxAuiNotebook::GetPageBitmap(size_t page) const\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxAuiNotebook::GetPageBitmap(size_t) const");
		}
		wxBitmap stack_lret = self->GetPageBitmap(page);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// size_t wxAuiNotebook::GetPageCount() const
	static int _bind_GetPageCount(lua_State *L) {
		if (!_lg_typecheck_GetPageCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxAuiNotebook::GetPageCount() const function, expected prototype:\nsize_t wxAuiNotebook::GetPageCount() const\nClass arguments details:\n");
		}


		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxAuiNotebook::GetPageCount() const");
		}
		size_t lret = self->GetPageCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiNotebook::GetPageIndex(wxWindow * page_wnd) const
	static int _bind_GetPageIndex(lua_State *L) {
		if (!_lg_typecheck_GetPageIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::GetPageIndex(wxWindow * page_wnd) const function, expected prototype:\nint wxAuiNotebook::GetPageIndex(wxWindow * page_wnd) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* page_wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::GetPageIndex(wxWindow *) const");
		}
		int lret = self->GetPageIndex(page_wnd);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxAuiNotebook::GetPageText(size_t page) const
	static int _bind_GetPageText(lua_State *L) {
		if (!_lg_typecheck_GetPageText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAuiNotebook::GetPageText(size_t page) const function, expected prototype:\nwxString wxAuiNotebook::GetPageText(size_t page) const\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAuiNotebook::GetPageText(size_t) const");
		}
		wxString lret = self->GetPageText(page);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxAuiNotebook::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::GetSelection() const function, expected prototype:\nint wxAuiNotebook::GetSelection() const\nClass arguments details:\n");
		}


		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiNotebook::GetTabCtrlHeight() const
	static int _bind_GetTabCtrlHeight(lua_State *L) {
		if (!_lg_typecheck_GetTabCtrlHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::GetTabCtrlHeight() const function, expected prototype:\nint wxAuiNotebook::GetTabCtrlHeight() const\nClass arguments details:\n");
		}


		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::GetTabCtrlHeight() const");
		}
		int lret = self->GetTabCtrlHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiNotebook::InsertPage(size_t page_idx, wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap)
	static int _bind_InsertPage_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertPage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::InsertPage(size_t page_idx, wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap) function, expected prototype:\nbool wxAuiNotebook::InsertPage(size_t page_idx, wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 5 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		size_t page_idx=(size_t)lua_tointeger(L,2);
		wxWindow* page=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		wxString caption(lua_tostring(L,4),lua_objlen(L,4));
		bool select=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;
		const wxBitmap* bitmap_ptr=luatop>5 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiNotebook::InsertPage function");
		}
		const wxBitmap & bitmap=luatop>5 ? *bitmap_ptr : wxNullBitmap;

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::InsertPage(size_t, wxWindow *, const wxString &, bool, const wxBitmap &)");
		}
		bool lret = self->InsertPage(page_idx, page, caption, select, bitmap);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
	static int _bind_InsertPage_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertPage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE) function, expected prototype:\nbool wxAuiNotebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		wxWindow* page=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		bool select=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;
		int imageId=luatop>5 ? (int)lua_tointeger(L,6) : wxBookCtrlBase::NO_IMAGE;

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::InsertPage(size_t, wxWindow *, const wxString &, bool, int)");
		}
		bool lret = self->InsertPage(index, page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxAuiNotebook::InsertPage
	static int _bind_InsertPage(lua_State *L) {
		if (_lg_typecheck_InsertPage_overload_1(L)) return _bind_InsertPage_overload_1(L);
		if (_lg_typecheck_InsertPage_overload_2(L)) return _bind_InsertPage_overload_2(L);

		luaL_error(L, "error in function InsertPage, cannot match any of the overloads for function InsertPage:\n  InsertPage(size_t, wxWindow *, const wxString &, bool, const wxBitmap &)\n  InsertPage(size_t, wxWindow *, const wxString &, bool, int)\n");
		return 0;
	}

	// bool wxAuiNotebook::RemovePage(size_t page)
	static int _bind_RemovePage(lua_State *L) {
		if (!_lg_typecheck_RemovePage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::RemovePage(size_t page) function, expected prototype:\nbool wxAuiNotebook::RemovePage(size_t page)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::RemovePage(size_t)");
		}
		bool lret = self->RemovePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::SetArtProvider(wxAuiTabArt * art)
	static int _bind_SetArtProvider(lua_State *L) {
		if (!_lg_typecheck_SetArtProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetArtProvider(wxAuiTabArt * art) function, expected prototype:\nvoid wxAuiNotebook::SetArtProvider(wxAuiTabArt * art)\nClass arguments details:\narg 1 ID = 24264105\n");
		}

		wxAuiTabArt* art=(Luna< wxAuiTabArt >::check(L,2));

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetArtProvider(wxAuiTabArt *)");
		}
		self->SetArtProvider(art);

		return 0;
	}

	// bool wxAuiNotebook::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::SetFont(const wxFont & font) function, expected prototype:\nbool wxAuiNotebook::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiNotebook::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::SetFont(const wxFont &)");
		}
		bool lret = self->SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::SetMeasuringFont(const wxFont & font)
	static int _bind_SetMeasuringFont(lua_State *L) {
		if (!_lg_typecheck_SetMeasuringFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetMeasuringFont(const wxFont & font) function, expected prototype:\nvoid wxAuiNotebook::SetMeasuringFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiNotebook::SetMeasuringFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetMeasuringFont(const wxFont &)");
		}
		self->SetMeasuringFont(font);

		return 0;
	}

	// void wxAuiNotebook::SetNormalFont(const wxFont & font)
	static int _bind_SetNormalFont(lua_State *L) {
		if (!_lg_typecheck_SetNormalFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetNormalFont(const wxFont & font) function, expected prototype:\nvoid wxAuiNotebook::SetNormalFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiNotebook::SetNormalFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetNormalFont(const wxFont &)");
		}
		self->SetNormalFont(font);

		return 0;
	}

	// bool wxAuiNotebook::SetPageBitmap(size_t page, const wxBitmap & bitmap)
	static int _bind_SetPageBitmap(lua_State *L) {
		if (!_lg_typecheck_SetPageBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::SetPageBitmap(size_t page, const wxBitmap & bitmap) function, expected prototype:\nbool wxAuiNotebook::SetPageBitmap(size_t page, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiNotebook::SetPageBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::SetPageBitmap(size_t, const wxBitmap &)");
		}
		bool lret = self->SetPageBitmap(page, bitmap);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::SetPageImage(size_t n, int imageId)
	static int _bind_SetPageImage(lua_State *L) {
		if (!_lg_typecheck_SetPageImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::SetPageImage(size_t n, int imageId) function, expected prototype:\nbool wxAuiNotebook::SetPageImage(size_t n, int imageId)\nClass arguments details:\n");
		}

		size_t n=(size_t)lua_tointeger(L,2);
		int imageId=(int)lua_tointeger(L,3);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::SetPageImage(size_t, int)");
		}
		bool lret = self->SetPageImage(n, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::SetPageText(size_t page, const wxString & text)
	static int _bind_SetPageText(lua_State *L) {
		if (!_lg_typecheck_SetPageText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::SetPageText(size_t page, const wxString & text) function, expected prototype:\nbool wxAuiNotebook::SetPageText(size_t page, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::SetPageText(size_t, const wxString &)");
		}
		bool lret = self->SetPageText(page, text);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::SetSelectedFont(const wxFont & font)
	static int _bind_SetSelectedFont(lua_State *L) {
		if (!_lg_typecheck_SetSelectedFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetSelectedFont(const wxFont & font) function, expected prototype:\nvoid wxAuiNotebook::SetSelectedFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiNotebook::SetSelectedFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetSelectedFont(const wxFont &)");
		}
		self->SetSelectedFont(font);

		return 0;
	}

	// size_t wxAuiNotebook::SetSelection(size_t new_page)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxAuiNotebook::SetSelection(size_t new_page) function, expected prototype:\nsize_t wxAuiNotebook::SetSelection(size_t new_page)\nClass arguments details:\n");
		}

		size_t new_page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxAuiNotebook::SetSelection(size_t)");
		}
		size_t lret = self->SetSelection(new_page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiNotebook::SetTabCtrlHeight(int height)
	static int _bind_SetTabCtrlHeight(lua_State *L) {
		if (!_lg_typecheck_SetTabCtrlHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetTabCtrlHeight(int height) function, expected prototype:\nvoid wxAuiNotebook::SetTabCtrlHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetTabCtrlHeight(int)");
		}
		self->SetTabCtrlHeight(height);

		return 0;
	}

	// void wxAuiNotebook::SetUniformBitmapSize(const wxSize & size)
	static int _bind_SetUniformBitmapSize(lua_State *L) {
		if (!_lg_typecheck_SetUniformBitmapSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetUniformBitmapSize(const wxSize & size) function, expected prototype:\nvoid wxAuiNotebook::SetUniformBitmapSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::SetUniformBitmapSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetUniformBitmapSize(const wxSize &)");
		}
		self->SetUniformBitmapSize(size);

		return 0;
	}

	// void wxAuiNotebook::Split(size_t page, int direction)
	static int _bind_Split(lua_State *L) {
		if (!_lg_typecheck_Split(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::Split(size_t page, int direction) function, expected prototype:\nvoid wxAuiNotebook::Split(size_t page, int direction)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);
		int direction=(int)lua_tointeger(L,3);

		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::Split(size_t, int)");
		}
		self->Split(page, direction);

		return 0;
	}

	// bool wxAuiNotebook::ShowWindowMenu()
	static int _bind_ShowWindowMenu(lua_State *L) {
		if (!_lg_typecheck_ShowWindowMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::ShowWindowMenu() function, expected prototype:\nbool wxAuiNotebook::ShowWindowMenu()\nClass arguments details:\n");
		}


		wxAuiNotebook* self=dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::ShowWindowMenu()");
		}
		bool lret = self->ShowWindowMenu();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxAuiNotebook* LunaTraits< wxAuiNotebook >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxBookCtrlBase::GetPageImage(size_t nPage) const
	// int wxBookCtrlBase::SetSelection(size_t page)

	// Abstract operators:
}

void LunaTraits< wxAuiNotebook >::_bind_dtor(wxAuiNotebook* obj) {
	delete obj;
}

const char LunaTraits< wxAuiNotebook >::className[] = "wxAuiNotebook";
const char LunaTraits< wxAuiNotebook >::fullName[] = "wxAuiNotebook";
const char LunaTraits< wxAuiNotebook >::moduleName[] = "wx";
const char* LunaTraits< wxAuiNotebook >::parents[] = {"wx.wxBookCtrlBase", 0};
const int LunaTraits< wxAuiNotebook >::hash = 15278854;
const int LunaTraits< wxAuiNotebook >::uniqueIDs[] = {56813631, 53506535, 14187710,0};

luna_RegType LunaTraits< wxAuiNotebook >::methods[] = {
	{"AddPage", &luna_wrapper_wxAuiNotebook::_bind_AddPage},
	{"AdvanceSelection", &luna_wrapper_wxAuiNotebook::_bind_AdvanceSelection},
	{"ChangeSelection", &luna_wrapper_wxAuiNotebook::_bind_ChangeSelection},
	{"Create", &luna_wrapper_wxAuiNotebook::_bind_Create},
	{"DeleteAllPages", &luna_wrapper_wxAuiNotebook::_bind_DeleteAllPages},
	{"DeletePage", &luna_wrapper_wxAuiNotebook::_bind_DeletePage},
	{"GetArtProvider", &luna_wrapper_wxAuiNotebook::_bind_GetArtProvider},
	{"GetCurrentPage", &luna_wrapper_wxAuiNotebook::_bind_GetCurrentPage},
	{"GetHeightForPageHeight", &luna_wrapper_wxAuiNotebook::_bind_GetHeightForPageHeight},
	{"GetPage", &luna_wrapper_wxAuiNotebook::_bind_GetPage},
	{"GetPageBitmap", &luna_wrapper_wxAuiNotebook::_bind_GetPageBitmap},
	{"GetPageCount", &luna_wrapper_wxAuiNotebook::_bind_GetPageCount},
	{"GetPageIndex", &luna_wrapper_wxAuiNotebook::_bind_GetPageIndex},
	{"GetPageText", &luna_wrapper_wxAuiNotebook::_bind_GetPageText},
	{"GetSelection", &luna_wrapper_wxAuiNotebook::_bind_GetSelection},
	{"GetTabCtrlHeight", &luna_wrapper_wxAuiNotebook::_bind_GetTabCtrlHeight},
	{"InsertPage", &luna_wrapper_wxAuiNotebook::_bind_InsertPage},
	{"RemovePage", &luna_wrapper_wxAuiNotebook::_bind_RemovePage},
	{"SetArtProvider", &luna_wrapper_wxAuiNotebook::_bind_SetArtProvider},
	{"SetFont", &luna_wrapper_wxAuiNotebook::_bind_SetFont},
	{"SetMeasuringFont", &luna_wrapper_wxAuiNotebook::_bind_SetMeasuringFont},
	{"SetNormalFont", &luna_wrapper_wxAuiNotebook::_bind_SetNormalFont},
	{"SetPageBitmap", &luna_wrapper_wxAuiNotebook::_bind_SetPageBitmap},
	{"SetPageImage", &luna_wrapper_wxAuiNotebook::_bind_SetPageImage},
	{"SetPageText", &luna_wrapper_wxAuiNotebook::_bind_SetPageText},
	{"SetSelectedFont", &luna_wrapper_wxAuiNotebook::_bind_SetSelectedFont},
	{"SetSelection", &luna_wrapper_wxAuiNotebook::_bind_SetSelection},
	{"SetTabCtrlHeight", &luna_wrapper_wxAuiNotebook::_bind_SetTabCtrlHeight},
	{"SetUniformBitmapSize", &luna_wrapper_wxAuiNotebook::_bind_SetUniformBitmapSize},
	{"Split", &luna_wrapper_wxAuiNotebook::_bind_Split},
	{"ShowWindowMenu", &luna_wrapper_wxAuiNotebook::_bind_ShowWindowMenu},
	{"__eq", &luna_wrapper_wxAuiNotebook::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiNotebook >::converters[] = {
	{"wxObject", &luna_wrapper_wxAuiNotebook::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxAuiNotebook::_cast_from_wxTrackable},
	{"wxWithImages", &luna_wrapper_wxAuiNotebook::_cast_from_wxWithImages},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiNotebook >::enumValues[] = {
	{0,0}
};


