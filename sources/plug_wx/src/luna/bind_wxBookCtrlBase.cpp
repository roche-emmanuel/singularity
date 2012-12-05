#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBookCtrlBase.h>

class luna_wrapper_wxBookCtrlBase {
public:
	typedef Luna< wxBookCtrlBase > luna_t;

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
		wxBookCtrlBase* ptr= dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBookCtrlBase >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxWithImages(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxBookCtrlBase* ptr= dynamic_cast< wxBookCtrlBase* >(Luna< wxWithImages >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBookCtrlBase >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_SetPageSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HitTest(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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

	inline static bool _lg_typecheck_InsertPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
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

	inline static bool _lg_typecheck_GetPageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxBookCtrlBase::Create(wxWindow * parent, int winid, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxEmptyString)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBookCtrlBase::Create(wxWindow * parent, int winid, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxEmptyString) function, expected prototype:\nbool wxBookCtrlBase::Create(wxWindow * parent, int winid, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int winid=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBookCtrlBase::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBookCtrlBase::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBookCtrlBase::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, winid, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxBookCtrlBase::GetPageImage(size_t nPage) const
	static int _bind_GetPageImage(lua_State *L) {
		if (!_lg_typecheck_GetPageImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBookCtrlBase::GetPageImage(size_t nPage) const function, expected prototype:\nint wxBookCtrlBase::GetPageImage(size_t nPage) const\nClass arguments details:\n");
		}

		size_t nPage=(size_t)lua_tointeger(L,2);

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBookCtrlBase::GetPageImage(size_t) const");
		}
		int lret = self->GetPageImage(nPage);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxBookCtrlBase::SetPageImage(size_t page, int image)
	static int _bind_SetPageImage(lua_State *L) {
		if (!_lg_typecheck_SetPageImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBookCtrlBase::SetPageImage(size_t page, int image) function, expected prototype:\nbool wxBookCtrlBase::SetPageImage(size_t page, int image)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);
		int image=(int)lua_tointeger(L,3);

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBookCtrlBase::SetPageImage(size_t, int)");
		}
		bool lret = self->SetPageImage(page, image);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxBookCtrlBase::GetPageText(size_t nPage) const
	static int _bind_GetPageText(lua_State *L) {
		if (!_lg_typecheck_GetPageText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxBookCtrlBase::GetPageText(size_t nPage) const function, expected prototype:\nwxString wxBookCtrlBase::GetPageText(size_t nPage) const\nClass arguments details:\n");
		}

		size_t nPage=(size_t)lua_tointeger(L,2);

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxBookCtrlBase::GetPageText(size_t) const");
		}
		wxString lret = self->GetPageText(nPage);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxBookCtrlBase::SetPageText(size_t page, const wxString & text)
	static int _bind_SetPageText(lua_State *L) {
		if (!_lg_typecheck_SetPageText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBookCtrlBase::SetPageText(size_t page, const wxString & text) function, expected prototype:\nbool wxBookCtrlBase::SetPageText(size_t page, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBookCtrlBase::SetPageText(size_t, const wxString &)");
		}
		bool lret = self->SetPageText(page, text);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxBookCtrlBase::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBookCtrlBase::GetSelection() const function, expected prototype:\nint wxBookCtrlBase::GetSelection() const\nClass arguments details:\n");
		}


		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBookCtrlBase::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWindow * wxBookCtrlBase::GetCurrentPage() const
	static int _bind_GetCurrentPage(lua_State *L) {
		if (!_lg_typecheck_GetCurrentPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxBookCtrlBase::GetCurrentPage() const function, expected prototype:\nwxWindow * wxBookCtrlBase::GetCurrentPage() const\nClass arguments details:\n");
		}


		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxBookCtrlBase::GetCurrentPage() const");
		}
		wxWindow * lret = self->GetCurrentPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// int wxBookCtrlBase::SetSelection(size_t page)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBookCtrlBase::SetSelection(size_t page) function, expected prototype:\nint wxBookCtrlBase::SetSelection(size_t page)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBookCtrlBase::SetSelection(size_t)");
		}
		int lret = self->SetSelection(page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxBookCtrlBase::AdvanceSelection(bool forward = true)
	static int _bind_AdvanceSelection(lua_State *L) {
		if (!_lg_typecheck_AdvanceSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBookCtrlBase::AdvanceSelection(bool forward = true) function, expected prototype:\nvoid wxBookCtrlBase::AdvanceSelection(bool forward = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool forward=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBookCtrlBase::AdvanceSelection(bool)");
		}
		self->AdvanceSelection(forward);

		return 0;
	}

	// int wxBookCtrlBase::ChangeSelection(size_t page)
	static int _bind_ChangeSelection(lua_State *L) {
		if (!_lg_typecheck_ChangeSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBookCtrlBase::ChangeSelection(size_t page) function, expected prototype:\nint wxBookCtrlBase::ChangeSelection(size_t page)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBookCtrlBase::ChangeSelection(size_t)");
		}
		int lret = self->ChangeSelection(page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxBookCtrlBase::SetPageSize(const wxSize & size)
	static int _bind_SetPageSize(lua_State *L) {
		if (!_lg_typecheck_SetPageSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBookCtrlBase::SetPageSize(const wxSize & size) function, expected prototype:\nvoid wxBookCtrlBase::SetPageSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBookCtrlBase::SetPageSize function");
		}
		const wxSize & size=*size_ptr;

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBookCtrlBase::SetPageSize(const wxSize &)");
		}
		self->SetPageSize(size);

		return 0;
	}

	// int wxBookCtrlBase::HitTest(const wxPoint & pt, long * flags = NULL) const
	static int _bind_HitTest(lua_State *L) {
		if (!_lg_typecheck_HitTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBookCtrlBase::HitTest(const wxPoint & pt, long * flags = NULL) const function, expected prototype:\nint wxBookCtrlBase::HitTest(const wxPoint & pt, long * flags = NULL) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxBookCtrlBase::HitTest function");
		}
		const wxPoint & pt=*pt_ptr;
		long flags=luatop>2 ? (long)lua_tointeger(L,3) : NULL;

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBookCtrlBase::HitTest(const wxPoint &, long *) const");
		}
		int lret = self->HitTest(pt, &flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxBookCtrlBase::AddPage(wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
	static int _bind_AddPage(lua_State *L) {
		if (!_lg_typecheck_AddPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBookCtrlBase::AddPage(wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE) function, expected prototype:\nbool wxBookCtrlBase::AddPage(wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* page=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		bool select=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;
		int imageId=luatop>4 ? (int)lua_tointeger(L,5) : wxBookCtrlBase::NO_IMAGE;

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBookCtrlBase::AddPage(wxWindow *, const wxString &, bool, int)");
		}
		bool lret = self->AddPage(page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBookCtrlBase::DeleteAllPages()
	static int _bind_DeleteAllPages(lua_State *L) {
		if (!_lg_typecheck_DeleteAllPages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBookCtrlBase::DeleteAllPages() function, expected prototype:\nbool wxBookCtrlBase::DeleteAllPages()\nClass arguments details:\n");
		}


		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBookCtrlBase::DeleteAllPages()");
		}
		bool lret = self->DeleteAllPages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBookCtrlBase::DeletePage(size_t page)
	static int _bind_DeletePage(lua_State *L) {
		if (!_lg_typecheck_DeletePage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBookCtrlBase::DeletePage(size_t page) function, expected prototype:\nbool wxBookCtrlBase::DeletePage(size_t page)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBookCtrlBase::DeletePage(size_t)");
		}
		bool lret = self->DeletePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBookCtrlBase::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
	static int _bind_InsertPage(lua_State *L) {
		if (!_lg_typecheck_InsertPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBookCtrlBase::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE) function, expected prototype:\nbool wxBookCtrlBase::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		wxWindow* page=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		bool select=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;
		int imageId=luatop>5 ? (int)lua_tointeger(L,6) : wxBookCtrlBase::NO_IMAGE;

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBookCtrlBase::InsertPage(size_t, wxWindow *, const wxString &, bool, int)");
		}
		bool lret = self->InsertPage(index, page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBookCtrlBase::RemovePage(size_t page)
	static int _bind_RemovePage(lua_State *L) {
		if (!_lg_typecheck_RemovePage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBookCtrlBase::RemovePage(size_t page) function, expected prototype:\nbool wxBookCtrlBase::RemovePage(size_t page)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBookCtrlBase::RemovePage(size_t)");
		}
		bool lret = self->RemovePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxBookCtrlBase::GetPageCount() const
	static int _bind_GetPageCount(lua_State *L) {
		if (!_lg_typecheck_GetPageCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxBookCtrlBase::GetPageCount() const function, expected prototype:\nsize_t wxBookCtrlBase::GetPageCount() const\nClass arguments details:\n");
		}


		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxBookCtrlBase::GetPageCount() const");
		}
		size_t lret = self->GetPageCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWindow * wxBookCtrlBase::GetPage(size_t page) const
	static int _bind_GetPage(lua_State *L) {
		if (!_lg_typecheck_GetPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxBookCtrlBase::GetPage(size_t page) const function, expected prototype:\nwxWindow * wxBookCtrlBase::GetPage(size_t page) const\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxBookCtrlBase* self=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxBookCtrlBase::GetPage(size_t) const");
		}
		wxWindow * lret = self->GetPage(page);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxBookCtrlBase* LunaTraits< wxBookCtrlBase >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxBookCtrlBase::GetPageImage(size_t nPage) const
	// bool wxBookCtrlBase::SetPageImage(size_t page, int image)
	// wxString wxBookCtrlBase::GetPageText(size_t nPage) const
	// bool wxBookCtrlBase::SetPageText(size_t page, const wxString & text)
	// int wxBookCtrlBase::GetSelection() const
	// int wxBookCtrlBase::SetSelection(size_t page)
	// int wxBookCtrlBase::ChangeSelection(size_t page)
	// bool wxBookCtrlBase::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
}

void LunaTraits< wxBookCtrlBase >::_bind_dtor(wxBookCtrlBase* obj) {
	delete obj;
}

const char LunaTraits< wxBookCtrlBase >::className[] = "wxBookCtrlBase";
const char LunaTraits< wxBookCtrlBase >::fullName[] = "wxBookCtrlBase";
const char LunaTraits< wxBookCtrlBase >::moduleName[] = "wx";
const char* LunaTraits< wxBookCtrlBase >::parents[] = {"wx.wxControl", "wx.wxWithImages", 0};
const int LunaTraits< wxBookCtrlBase >::hash = 8131200;
const int LunaTraits< wxBookCtrlBase >::uniqueIDs[] = {56813631, 53506535, 14187710,0};

luna_RegType LunaTraits< wxBookCtrlBase >::methods[] = {
	{"Create", &luna_wrapper_wxBookCtrlBase::_bind_Create},
	{"GetPageImage", &luna_wrapper_wxBookCtrlBase::_bind_GetPageImage},
	{"SetPageImage", &luna_wrapper_wxBookCtrlBase::_bind_SetPageImage},
	{"GetPageText", &luna_wrapper_wxBookCtrlBase::_bind_GetPageText},
	{"SetPageText", &luna_wrapper_wxBookCtrlBase::_bind_SetPageText},
	{"GetSelection", &luna_wrapper_wxBookCtrlBase::_bind_GetSelection},
	{"GetCurrentPage", &luna_wrapper_wxBookCtrlBase::_bind_GetCurrentPage},
	{"SetSelection", &luna_wrapper_wxBookCtrlBase::_bind_SetSelection},
	{"AdvanceSelection", &luna_wrapper_wxBookCtrlBase::_bind_AdvanceSelection},
	{"ChangeSelection", &luna_wrapper_wxBookCtrlBase::_bind_ChangeSelection},
	{"SetPageSize", &luna_wrapper_wxBookCtrlBase::_bind_SetPageSize},
	{"HitTest", &luna_wrapper_wxBookCtrlBase::_bind_HitTest},
	{"AddPage", &luna_wrapper_wxBookCtrlBase::_bind_AddPage},
	{"DeleteAllPages", &luna_wrapper_wxBookCtrlBase::_bind_DeleteAllPages},
	{"DeletePage", &luna_wrapper_wxBookCtrlBase::_bind_DeletePage},
	{"InsertPage", &luna_wrapper_wxBookCtrlBase::_bind_InsertPage},
	{"RemovePage", &luna_wrapper_wxBookCtrlBase::_bind_RemovePage},
	{"GetPageCount", &luna_wrapper_wxBookCtrlBase::_bind_GetPageCount},
	{"GetPage", &luna_wrapper_wxBookCtrlBase::_bind_GetPage},
	{"__eq", &luna_wrapper_wxBookCtrlBase::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxBookCtrlBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxBookCtrlBase::_cast_from_wxObject},
	{"wxWithImages", &luna_wrapper_wxBookCtrlBase::_cast_from_wxWithImages},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBookCtrlBase >::enumValues[] = {
	{"NO_IMAGE", wxBookCtrlBase::NO_IMAGE},
	{0,0}
};


