#include <plug_common.h>

class luna_wrapper_wxPropertyGridManager {
public:
	typedef Luna< wxPropertyGridManager > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPropertyGridManager* ptr= dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGridManager >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxPropertyGridInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPropertyGridManager* ptr= dynamic_cast< wxPropertyGridManager* >(Luna< wxPropertyGridInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGridManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AddPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CommitChangesFromEditor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableCategories(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDescBoxHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGrid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageRoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectedPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectedProperty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsAnyModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFrozen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPageModified(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemovePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectPage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectPage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectPage_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnTitle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDescription(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDescBoxHeight(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSplitterLeft(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowHeader(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxPropertyGridPage * wxPropertyGridManager::AddPage(const wxString & label = wxEmptyString, const wxBitmap & bmp = wxPG_NULL_BITMAP, wxPropertyGridPage * pageObj = NULL)
	static int _bind_AddPage(lua_State *L) {
		if (!_lg_typecheck_AddPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage * wxPropertyGridManager::AddPage(const wxString & label = wxEmptyString, const wxBitmap & bmp = wxPG_NULL_BITMAP, wxPropertyGridPage * pageObj = NULL) function, expected prototype:\nwxPropertyGridPage * wxPropertyGridManager::AddPage(const wxString & label = wxEmptyString, const wxBitmap & bmp = wxPG_NULL_BITMAP, wxPropertyGridPage * pageObj = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\narg 3 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		const wxBitmap* bmp_ptr=luatop>2 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3)) : NULL;
		if( luatop>2 && !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxPropertyGridManager::AddPage function");
		}
		const wxBitmap & bmp=luatop>2 ? *bmp_ptr : wxPG_NULL_BITMAP;
		wxPropertyGridPage* pageObj=luatop>3 ? dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,4)) : (wxPropertyGridPage*)NULL;

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPropertyGridPage * wxPropertyGridManager::AddPage(const wxString &, const wxBitmap &, wxPropertyGridPage *)");
		}
		wxPropertyGridPage * lret = self->AddPage(label, bmp, pageObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridPage >::push(L,lret,false);

		return 1;
	}

	// void wxPropertyGridManager::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::Clear() function, expected prototype:\nvoid wxPropertyGridManager::Clear()\nClass arguments details:\n");
		}


		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::Clear()");
		}
		self->Clear();

		return 0;
	}

	// void wxPropertyGridManager::ClearPage(int page)
	static int _bind_ClearPage(lua_State *L) {
		if (!_lg_typecheck_ClearPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::ClearPage(int page) function, expected prototype:\nvoid wxPropertyGridManager::ClearPage(int page)\nClass arguments details:\n");
		}

		int page=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::ClearPage(int)");
		}
		self->ClearPage(page);

		return 0;
	}

	// bool wxPropertyGridManager::CommitChangesFromEditor(unsigned int flags = 0)
	static int _bind_CommitChangesFromEditor(lua_State *L) {
		if (!_lg_typecheck_CommitChangesFromEditor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::CommitChangesFromEditor(unsigned int flags = 0) function, expected prototype:\nbool wxPropertyGridManager::CommitChangesFromEditor(unsigned int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int flags=luatop>1 ? (unsigned int)lua_tointeger(L,2) : 0;

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::CommitChangesFromEditor(unsigned int)");
		}
		bool lret = self->CommitChangesFromEditor(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxPGMAN_DEFAULT_STYLE, const wxString & name = wxPropertyGridManagerNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxPGMAN_DEFAULT_STYLE, const wxString & name = wxPropertyGridManagerNameStr) function, expected prototype:\nbool wxPropertyGridManager::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxPGMAN_DEFAULT_STYLE, const wxString & name = wxPropertyGridManagerNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPropertyGridManager::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGridManager::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxPGMAN_DEFAULT_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::EnableCategories(bool enable)
	static int _bind_EnableCategories(lua_State *L) {
		if (!_lg_typecheck_EnableCategories(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::EnableCategories(bool enable) function, expected prototype:\nbool wxPropertyGridManager::EnableCategories(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::EnableCategories(bool)");
		}
		bool lret = self->EnableCategories(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxPropertyGridManager::GetColumnCount(int page = -1) const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::GetColumnCount(int page = -1) const function, expected prototype:\nint wxPropertyGridManager::GetColumnCount(int page = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int page=luatop>1 ? (int)lua_tointeger(L,2) : -1;

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::GetColumnCount(int) const");
		}
		int lret = self->GetColumnCount(page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGridManager::GetDescBoxHeight() const
	static int _bind_GetDescBoxHeight(lua_State *L) {
		if (!_lg_typecheck_GetDescBoxHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::GetDescBoxHeight() const function, expected prototype:\nint wxPropertyGridManager::GetDescBoxHeight() const\nClass arguments details:\n");
		}


		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::GetDescBoxHeight() const");
		}
		int lret = self->GetDescBoxHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPropertyGrid * wxPropertyGridManager::GetGrid()
	static int _bind_GetGrid(lua_State *L) {
		if (!_lg_typecheck_GetGrid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertyGrid * wxPropertyGridManager::GetGrid() function, expected prototype:\nwxPropertyGrid * wxPropertyGridManager::GetGrid()\nClass arguments details:\n");
		}


		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPropertyGrid * wxPropertyGridManager::GetGrid()");
		}
		wxPropertyGrid * lret = self->GetGrid();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGrid >::push(L,lret,false);

		return 1;
	}

	// wxPropertyGridPage * wxPropertyGridManager::GetCurrentPage() const
	static int _bind_GetCurrentPage(lua_State *L) {
		if (!_lg_typecheck_GetCurrentPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage * wxPropertyGridManager::GetCurrentPage() const function, expected prototype:\nwxPropertyGridPage * wxPropertyGridManager::GetCurrentPage() const\nClass arguments details:\n");
		}


		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPropertyGridPage * wxPropertyGridManager::GetCurrentPage() const");
		}
		wxPropertyGridPage * lret = self->GetCurrentPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridPage >::push(L,lret,false);

		return 1;
	}

	// wxPropertyGridPage * wxPropertyGridManager::GetPage(unsigned int ind) const
	static int _bind_GetPage_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage * wxPropertyGridManager::GetPage(unsigned int ind) const function, expected prototype:\nwxPropertyGridPage * wxPropertyGridManager::GetPage(unsigned int ind) const\nClass arguments details:\n");
		}

		unsigned int ind=(unsigned int)lua_tointeger(L,2);

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPropertyGridPage * wxPropertyGridManager::GetPage(unsigned int) const");
		}
		wxPropertyGridPage * lret = self->GetPage(ind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridPage >::push(L,lret,false);

		return 1;
	}

	// wxPropertyGridPage * wxPropertyGridManager::GetPage(const wxString & name) const
	static int _bind_GetPage_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage * wxPropertyGridManager::GetPage(const wxString & name) const function, expected prototype:\nwxPropertyGridPage * wxPropertyGridManager::GetPage(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPropertyGridPage * wxPropertyGridManager::GetPage(const wxString &) const");
		}
		wxPropertyGridPage * lret = self->GetPage(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridPage >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPropertyGridManager::GetPage
	static int _bind_GetPage(lua_State *L) {
		if (_lg_typecheck_GetPage_overload_1(L)) return _bind_GetPage_overload_1(L);
		if (_lg_typecheck_GetPage_overload_2(L)) return _bind_GetPage_overload_2(L);

		luaL_error(L, "error in function GetPage, cannot match any of the overloads for function GetPage:\n  GetPage(unsigned int)\n  GetPage(const wxString &)\n");
		return 0;
	}

	// int wxPropertyGridManager::GetPageByName(const wxString & name) const
	static int _bind_GetPageByName(lua_State *L) {
		if (!_lg_typecheck_GetPageByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::GetPageByName(const wxString & name) const function, expected prototype:\nint wxPropertyGridManager::GetPageByName(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::GetPageByName(const wxString &) const");
		}
		int lret = self->GetPageByName(name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxPropertyGridManager::GetPageCount() const
	static int _bind_GetPageCount(lua_State *L) {
		if (!_lg_typecheck_GetPageCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxPropertyGridManager::GetPageCount() const function, expected prototype:\nsize_t wxPropertyGridManager::GetPageCount() const\nClass arguments details:\n");
		}


		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxPropertyGridManager::GetPageCount() const");
		}
		size_t lret = self->GetPageCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxPropertyGridManager::GetPageName(int index) const
	static int _bind_GetPageName(lua_State *L) {
		if (!_lg_typecheck_GetPageName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxPropertyGridManager::GetPageName(int index) const function, expected prototype:\nconst wxString & wxPropertyGridManager::GetPageName(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxPropertyGridManager::GetPageName(int) const");
		}
		const wxString & lret = self->GetPageName(index);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxPGProperty * wxPropertyGridManager::GetPageRoot(int index) const
	static int _bind_GetPageRoot(lua_State *L) {
		if (!_lg_typecheck_GetPageRoot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridManager::GetPageRoot(int index) const function, expected prototype:\nwxPGProperty * wxPropertyGridManager::GetPageRoot(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridManager::GetPageRoot(int) const");
		}
		wxPGProperty * lret = self->GetPageRoot(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// int wxPropertyGridManager::GetSelectedPage() const
	static int _bind_GetSelectedPage(lua_State *L) {
		if (!_lg_typecheck_GetSelectedPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::GetSelectedPage() const function, expected prototype:\nint wxPropertyGridManager::GetSelectedPage() const\nClass arguments details:\n");
		}


		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::GetSelectedPage() const");
		}
		int lret = self->GetSelectedPage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPGProperty * wxPropertyGridManager::GetSelectedProperty() const
	static int _bind_GetSelectedProperty(lua_State *L) {
		if (!_lg_typecheck_GetSelectedProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridManager::GetSelectedProperty() const function, expected prototype:\nwxPGProperty * wxPropertyGridManager::GetSelectedProperty() const\nClass arguments details:\n");
		}


		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridManager::GetSelectedProperty() const");
		}
		wxPGProperty * lret = self->GetSelectedProperty();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPropertyGridManager::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridManager::GetSelection() const function, expected prototype:\nwxPGProperty * wxPropertyGridManager::GetSelection() const\nClass arguments details:\n");
		}


		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridManager::GetSelection() const");
		}
		wxPGProperty * lret = self->GetSelection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxPropertyGridManager::GetToolBar() const
	static int _bind_GetToolBar(lua_State *L) {
		if (!_lg_typecheck_GetToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxPropertyGridManager::GetToolBar() const function, expected prototype:\nwxToolBar * wxPropertyGridManager::GetToolBar() const\nClass arguments details:\n");
		}


		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxPropertyGridManager::GetToolBar() const");
		}
		wxToolBar * lret = self->GetToolBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxPropertyGridPage * wxPropertyGridManager::InsertPage(int index, const wxString & label, const wxBitmap & bmp = wxNullBitmap, wxPropertyGridPage * pageObj = NULL)
	static int _bind_InsertPage(lua_State *L) {
		if (!_lg_typecheck_InsertPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage * wxPropertyGridManager::InsertPage(int index, const wxString & label, const wxBitmap & bmp = wxNullBitmap, wxPropertyGridPage * pageObj = NULL) function, expected prototype:\nwxPropertyGridPage * wxPropertyGridManager::InsertPage(int index, const wxString & label, const wxBitmap & bmp = wxNullBitmap, wxPropertyGridPage * pageObj = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bmp_ptr=luatop>3 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxPropertyGridManager::InsertPage function");
		}
		const wxBitmap & bmp=luatop>3 ? *bmp_ptr : wxNullBitmap;
		wxPropertyGridPage* pageObj=luatop>4 ? dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,5)) : (wxPropertyGridPage*)NULL;

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPropertyGridPage * wxPropertyGridManager::InsertPage(int, const wxString &, const wxBitmap &, wxPropertyGridPage *)");
		}
		wxPropertyGridPage * lret = self->InsertPage(index, label, bmp, pageObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridPage >::push(L,lret,false);

		return 1;
	}

	// bool wxPropertyGridManager::IsAnyModified() const
	static int _bind_IsAnyModified(lua_State *L) {
		if (!_lg_typecheck_IsAnyModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::IsAnyModified() const function, expected prototype:\nbool wxPropertyGridManager::IsAnyModified() const\nClass arguments details:\n");
		}


		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::IsAnyModified() const");
		}
		bool lret = self->IsAnyModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::IsFrozen() const
	static int _bind_IsFrozen(lua_State *L) {
		if (!_lg_typecheck_IsFrozen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::IsFrozen() const function, expected prototype:\nbool wxPropertyGridManager::IsFrozen() const\nClass arguments details:\n");
		}


		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::IsFrozen() const");
		}
		bool lret = self->IsFrozen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::IsPageModified(size_t index) const
	static int _bind_IsPageModified(lua_State *L) {
		if (!_lg_typecheck_IsPageModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::IsPageModified(size_t index) const function, expected prototype:\nbool wxPropertyGridManager::IsPageModified(size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::IsPageModified(size_t) const");
		}
		bool lret = self->IsPageModified(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::RemovePage(int page)
	static int _bind_RemovePage(lua_State *L) {
		if (!_lg_typecheck_RemovePage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::RemovePage(int page) function, expected prototype:\nbool wxPropertyGridManager::RemovePage(int page)\nClass arguments details:\n");
		}

		int page=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::RemovePage(int)");
		}
		bool lret = self->RemovePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::SelectPage(int index)
	static int _bind_SelectPage_overload_1(lua_State *L) {
		if (!_lg_typecheck_SelectPage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SelectPage(int index) function, expected prototype:\nvoid wxPropertyGridManager::SelectPage(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SelectPage(int)");
		}
		self->SelectPage(index);

		return 0;
	}

	// void wxPropertyGridManager::SelectPage(const wxString & label)
	static int _bind_SelectPage_overload_2(lua_State *L) {
		if (!_lg_typecheck_SelectPage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SelectPage(const wxString & label) function, expected prototype:\nvoid wxPropertyGridManager::SelectPage(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SelectPage(const wxString &)");
		}
		self->SelectPage(label);

		return 0;
	}

	// void wxPropertyGridManager::SelectPage(wxPropertyGridPage * page)
	static int _bind_SelectPage_overload_3(lua_State *L) {
		if (!_lg_typecheck_SelectPage_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SelectPage(wxPropertyGridPage * page) function, expected prototype:\nvoid wxPropertyGridManager::SelectPage(wxPropertyGridPage * page)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxPropertyGridPage* page=dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,2));

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SelectPage(wxPropertyGridPage *)");
		}
		self->SelectPage(page);

		return 0;
	}

	// Overload binder for wxPropertyGridManager::SelectPage
	static int _bind_SelectPage(lua_State *L) {
		if (_lg_typecheck_SelectPage_overload_1(L)) return _bind_SelectPage_overload_1(L);
		if (_lg_typecheck_SelectPage_overload_2(L)) return _bind_SelectPage_overload_2(L);
		if (_lg_typecheck_SelectPage_overload_3(L)) return _bind_SelectPage_overload_3(L);

		luaL_error(L, "error in function SelectPage, cannot match any of the overloads for function SelectPage:\n  SelectPage(int)\n  SelectPage(const wxString &)\n  SelectPage(wxPropertyGridPage *)\n");
		return 0;
	}

	// void wxPropertyGridManager::SetColumnCount(int colCount, int page = -1)
	static int _bind_SetColumnCount(lua_State *L) {
		if (!_lg_typecheck_SetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetColumnCount(int colCount, int page = -1) function, expected prototype:\nvoid wxPropertyGridManager::SetColumnCount(int colCount, int page = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int colCount=(int)lua_tointeger(L,2);
		int page=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetColumnCount(int, int)");
		}
		self->SetColumnCount(colCount, page);

		return 0;
	}

	// void wxPropertyGridManager::SetColumnTitle(int idx, const wxString & title)
	static int _bind_SetColumnTitle(lua_State *L) {
		if (!_lg_typecheck_SetColumnTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetColumnTitle(int idx, const wxString & title) function, expected prototype:\nvoid wxPropertyGridManager::SetColumnTitle(int idx, const wxString & title)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int idx=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetColumnTitle(int, const wxString &)");
		}
		self->SetColumnTitle(idx, title);

		return 0;
	}

	// void wxPropertyGridManager::SetDescription(const wxString & label, const wxString & content)
	static int _bind_SetDescription(lua_State *L) {
		if (!_lg_typecheck_SetDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetDescription(const wxString & label, const wxString & content) function, expected prototype:\nvoid wxPropertyGridManager::SetDescription(const wxString & label, const wxString & content)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		wxString content(lua_tostring(L,3),lua_objlen(L,3));

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetDescription(const wxString &, const wxString &)");
		}
		self->SetDescription(label, content);

		return 0;
	}

	// void wxPropertyGridManager::SetDescBoxHeight(int ht, bool refresh = true)
	static int _bind_SetDescBoxHeight(lua_State *L) {
		if (!_lg_typecheck_SetDescBoxHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetDescBoxHeight(int ht, bool refresh = true) function, expected prototype:\nvoid wxPropertyGridManager::SetDescBoxHeight(int ht, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int ht=(int)lua_tointeger(L,2);
		bool refresh=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetDescBoxHeight(int, bool)");
		}
		self->SetDescBoxHeight(ht, refresh);

		return 0;
	}

	// void wxPropertyGridManager::SetSplitterLeft(bool subProps = false, bool allPages = true)
	static int _bind_SetSplitterLeft(lua_State *L) {
		if (!_lg_typecheck_SetSplitterLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetSplitterLeft(bool subProps = false, bool allPages = true) function, expected prototype:\nvoid wxPropertyGridManager::SetSplitterLeft(bool subProps = false, bool allPages = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool subProps=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;
		bool allPages=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetSplitterLeft(bool, bool)");
		}
		self->SetSplitterLeft(subProps, allPages);

		return 0;
	}

	// void wxPropertyGridManager::SetPageSplitterPosition(int page, int pos, int column = 0)
	static int _bind_SetPageSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_SetPageSplitterPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetPageSplitterPosition(int page, int pos, int column = 0) function, expected prototype:\nvoid wxPropertyGridManager::SetPageSplitterPosition(int page, int pos, int column = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int page=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		int column=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetPageSplitterPosition(int, int, int)");
		}
		self->SetPageSplitterPosition(page, pos, column);

		return 0;
	}

	// void wxPropertyGridManager::SetSplitterPosition(int pos, int column = 0)
	static int _bind_SetSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_SetSplitterPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetSplitterPosition(int pos, int column = 0) function, expected prototype:\nvoid wxPropertyGridManager::SetSplitterPosition(int pos, int column = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int pos=(int)lua_tointeger(L,2);
		int column=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetSplitterPosition(int, int)");
		}
		self->SetSplitterPosition(pos, column);

		return 0;
	}

	// void wxPropertyGridManager::ShowHeader(bool show = true)
	static int _bind_ShowHeader(lua_State *L) {
		if (!_lg_typecheck_ShowHeader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::ShowHeader(bool show = true) function, expected prototype:\nvoid wxPropertyGridManager::ShowHeader(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxPropertyGridManager* self=dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::ShowHeader(bool)");
		}
		self->ShowHeader(show);

		return 0;
	}


	// Operator binds:

};

wxPropertyGridManager* LunaTraits< wxPropertyGridManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPropertyGridManager >::_bind_dtor(wxPropertyGridManager* obj) {
	delete obj;
}

const char LunaTraits< wxPropertyGridManager >::className[] = "wxPropertyGridManager";
const char LunaTraits< wxPropertyGridManager >::fullName[] = "wxPropertyGridManager";
const char LunaTraits< wxPropertyGridManager >::moduleName[] = "wx";
const char* LunaTraits< wxPropertyGridManager >::parents[] = {"wx.wxPanel", "wx.wxPropertyGridInterface", 0};
const int LunaTraits< wxPropertyGridManager >::hash = 78575729;
const int LunaTraits< wxPropertyGridManager >::uniqueIDs[] = {56813631, 53506535, 61417741,0};

luna_RegType LunaTraits< wxPropertyGridManager >::methods[] = {
	{"AddPage", &luna_wrapper_wxPropertyGridManager::_bind_AddPage},
	{"Clear", &luna_wrapper_wxPropertyGridManager::_bind_Clear},
	{"ClearPage", &luna_wrapper_wxPropertyGridManager::_bind_ClearPage},
	{"CommitChangesFromEditor", &luna_wrapper_wxPropertyGridManager::_bind_CommitChangesFromEditor},
	{"Create", &luna_wrapper_wxPropertyGridManager::_bind_Create},
	{"EnableCategories", &luna_wrapper_wxPropertyGridManager::_bind_EnableCategories},
	{"GetColumnCount", &luna_wrapper_wxPropertyGridManager::_bind_GetColumnCount},
	{"GetDescBoxHeight", &luna_wrapper_wxPropertyGridManager::_bind_GetDescBoxHeight},
	{"GetGrid", &luna_wrapper_wxPropertyGridManager::_bind_GetGrid},
	{"GetCurrentPage", &luna_wrapper_wxPropertyGridManager::_bind_GetCurrentPage},
	{"GetPage", &luna_wrapper_wxPropertyGridManager::_bind_GetPage},
	{"GetPageByName", &luna_wrapper_wxPropertyGridManager::_bind_GetPageByName},
	{"GetPageCount", &luna_wrapper_wxPropertyGridManager::_bind_GetPageCount},
	{"GetPageName", &luna_wrapper_wxPropertyGridManager::_bind_GetPageName},
	{"GetPageRoot", &luna_wrapper_wxPropertyGridManager::_bind_GetPageRoot},
	{"GetSelectedPage", &luna_wrapper_wxPropertyGridManager::_bind_GetSelectedPage},
	{"GetSelectedProperty", &luna_wrapper_wxPropertyGridManager::_bind_GetSelectedProperty},
	{"GetSelection", &luna_wrapper_wxPropertyGridManager::_bind_GetSelection},
	{"GetToolBar", &luna_wrapper_wxPropertyGridManager::_bind_GetToolBar},
	{"InsertPage", &luna_wrapper_wxPropertyGridManager::_bind_InsertPage},
	{"IsAnyModified", &luna_wrapper_wxPropertyGridManager::_bind_IsAnyModified},
	{"IsFrozen", &luna_wrapper_wxPropertyGridManager::_bind_IsFrozen},
	{"IsPageModified", &luna_wrapper_wxPropertyGridManager::_bind_IsPageModified},
	{"RemovePage", &luna_wrapper_wxPropertyGridManager::_bind_RemovePage},
	{"SelectPage", &luna_wrapper_wxPropertyGridManager::_bind_SelectPage},
	{"SetColumnCount", &luna_wrapper_wxPropertyGridManager::_bind_SetColumnCount},
	{"SetColumnTitle", &luna_wrapper_wxPropertyGridManager::_bind_SetColumnTitle},
	{"SetDescription", &luna_wrapper_wxPropertyGridManager::_bind_SetDescription},
	{"SetDescBoxHeight", &luna_wrapper_wxPropertyGridManager::_bind_SetDescBoxHeight},
	{"SetSplitterLeft", &luna_wrapper_wxPropertyGridManager::_bind_SetSplitterLeft},
	{"SetPageSplitterPosition", &luna_wrapper_wxPropertyGridManager::_bind_SetPageSplitterPosition},
	{"SetSplitterPosition", &luna_wrapper_wxPropertyGridManager::_bind_SetSplitterPosition},
	{"ShowHeader", &luna_wrapper_wxPropertyGridManager::_bind_ShowHeader},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertyGridManager >::converters[] = {
	{"wxObject", &luna_wrapper_wxPropertyGridManager::_cast_from_wxObject},
	{"wxPropertyGridInterface", &luna_wrapper_wxPropertyGridManager::_cast_from_wxPropertyGridInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertyGridManager >::enumValues[] = {
	{0,0}
};


