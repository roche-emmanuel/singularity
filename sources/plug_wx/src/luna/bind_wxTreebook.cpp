#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTreebook.h>

class luna_wrapper_wxTreebook {
public:
	typedef Luna< wxTreebook > luna_t;

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
		wxTreebook* ptr= dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTreebook >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxWithImages(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTreebook* ptr= dynamic_cast< wxTreebook* >(Luna< wxWithImages >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTreebook >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_AddPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddSubPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollapseNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck_DeletePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ExpandNode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_InsertSubPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsNodeExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxTreebook::AddPage(wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND)
	static int _bind_AddPage(lua_State *L) {
		if (!_lg_typecheck_AddPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreebook::AddPage(wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND) function, expected prototype:\nbool wxTreebook::AddPage(wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* page=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		bool bSelect=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;
		int imageId=luatop>4 ? (int)lua_tointeger(L,5) : wxNOT_FOUND;

		wxTreebook* self=dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreebook::AddPage(wxWindow *, const wxString &, bool, int)");
		}
		bool lret = self->AddPage(page, text, bSelect, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreebook::AddSubPage(wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND)
	static int _bind_AddSubPage(lua_State *L) {
		if (!_lg_typecheck_AddSubPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreebook::AddSubPage(wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND) function, expected prototype:\nbool wxTreebook::AddSubPage(wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* page=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		bool bSelect=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;
		int imageId=luatop>4 ? (int)lua_tointeger(L,5) : wxNOT_FOUND;

		wxTreebook* self=dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreebook::AddSubPage(wxWindow *, const wxString &, bool, int)");
		}
		bool lret = self->AddSubPage(page, text, bSelect, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreebook::CollapseNode(size_t pageId)
	static int _bind_CollapseNode(lua_State *L) {
		if (!_lg_typecheck_CollapseNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreebook::CollapseNode(size_t pageId) function, expected prototype:\nbool wxTreebook::CollapseNode(size_t pageId)\nClass arguments details:\n");
		}

		size_t pageId=(size_t)lua_tointeger(L,2);

		wxTreebook* self=dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreebook::CollapseNode(size_t)");
		}
		bool lret = self->CollapseNode(pageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreebook::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBK_DEFAULT, const wxString & name = wxEmptyString)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreebook::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBK_DEFAULT, const wxString & name = wxEmptyString) function, expected prototype:\nbool wxTreebook::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBK_DEFAULT, const wxString & name = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTreebook::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreebook::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxBK_DEFAULT;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxTreebook* self=dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreebook::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreebook::DeletePage(size_t pagePos)
	static int _bind_DeletePage(lua_State *L) {
		if (!_lg_typecheck_DeletePage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreebook::DeletePage(size_t pagePos) function, expected prototype:\nbool wxTreebook::DeletePage(size_t pagePos)\nClass arguments details:\n");
		}

		size_t pagePos=(size_t)lua_tointeger(L,2);

		wxTreebook* self=dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreebook::DeletePage(size_t)");
		}
		bool lret = self->DeletePage(pagePos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreebook::ExpandNode(size_t pageId, bool expand = true)
	static int _bind_ExpandNode(lua_State *L) {
		if (!_lg_typecheck_ExpandNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreebook::ExpandNode(size_t pageId, bool expand = true) function, expected prototype:\nbool wxTreebook::ExpandNode(size_t pageId, bool expand = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t pageId=(size_t)lua_tointeger(L,2);
		bool expand=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxTreebook* self=dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreebook::ExpandNode(size_t, bool)");
		}
		bool lret = self->ExpandNode(pageId, expand);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxTreebook::GetPageParent(size_t page) const
	static int _bind_GetPageParent(lua_State *L) {
		if (!_lg_typecheck_GetPageParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTreebook::GetPageParent(size_t page) const function, expected prototype:\nint wxTreebook::GetPageParent(size_t page) const\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxTreebook* self=dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTreebook::GetPageParent(size_t) const");
		}
		int lret = self->GetPageParent(page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTreebook::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTreebook::GetSelection() const function, expected prototype:\nint wxTreebook::GetSelection() const\nClass arguments details:\n");
		}


		wxTreebook* self=dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTreebook::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTreebook::InsertPage(size_t pagePos, wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND)
	static int _bind_InsertPage(lua_State *L) {
		if (!_lg_typecheck_InsertPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreebook::InsertPage(size_t pagePos, wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND) function, expected prototype:\nbool wxTreebook::InsertPage(size_t pagePos, wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		size_t pagePos=(size_t)lua_tointeger(L,2);
		wxWindow* page=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		bool bSelect=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;
		int imageId=luatop>5 ? (int)lua_tointeger(L,6) : wxNOT_FOUND;

		wxTreebook* self=dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreebook::InsertPage(size_t, wxWindow *, const wxString &, bool, int)");
		}
		bool lret = self->InsertPage(pagePos, page, text, bSelect, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreebook::InsertSubPage(size_t pagePos, wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND)
	static int _bind_InsertSubPage(lua_State *L) {
		if (!_lg_typecheck_InsertSubPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreebook::InsertSubPage(size_t pagePos, wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND) function, expected prototype:\nbool wxTreebook::InsertSubPage(size_t pagePos, wxWindow * page, const wxString & text, bool bSelect = false, int imageId = wxNOT_FOUND)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		size_t pagePos=(size_t)lua_tointeger(L,2);
		wxWindow* page=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		bool bSelect=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;
		int imageId=luatop>5 ? (int)lua_tointeger(L,6) : wxNOT_FOUND;

		wxTreebook* self=dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreebook::InsertSubPage(size_t, wxWindow *, const wxString &, bool, int)");
		}
		bool lret = self->InsertSubPage(pagePos, page, text, bSelect, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreebook::IsNodeExpanded(size_t pageId) const
	static int _bind_IsNodeExpanded(lua_State *L) {
		if (!_lg_typecheck_IsNodeExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreebook::IsNodeExpanded(size_t pageId) const function, expected prototype:\nbool wxTreebook::IsNodeExpanded(size_t pageId) const\nClass arguments details:\n");
		}

		size_t pageId=(size_t)lua_tointeger(L,2);

		wxTreebook* self=dynamic_cast< wxTreebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreebook::IsNodeExpanded(size_t) const");
		}
		bool lret = self->IsNodeExpanded(pageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTreebook* LunaTraits< wxTreebook >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxBookCtrlBase::GetPageImage(size_t nPage) const
	// bool wxBookCtrlBase::SetPageImage(size_t page, int image)
	// wxString wxBookCtrlBase::GetPageText(size_t nPage) const
	// bool wxBookCtrlBase::SetPageText(size_t page, const wxString & text)
	// int wxBookCtrlBase::SetSelection(size_t page)
	// int wxBookCtrlBase::ChangeSelection(size_t page)
}

void LunaTraits< wxTreebook >::_bind_dtor(wxTreebook* obj) {
	delete obj;
}

const char LunaTraits< wxTreebook >::className[] = "wxTreebook";
const char LunaTraits< wxTreebook >::fullName[] = "wxTreebook";
const char LunaTraits< wxTreebook >::moduleName[] = "wx";
const char* LunaTraits< wxTreebook >::parents[] = {"wx.wxBookCtrlBase", 0};
const int LunaTraits< wxTreebook >::hash = 17835387;
const int LunaTraits< wxTreebook >::uniqueIDs[] = {56813631, 53506535, 14187710,0};

luna_RegType LunaTraits< wxTreebook >::methods[] = {
	{"AddPage", &luna_wrapper_wxTreebook::_bind_AddPage},
	{"AddSubPage", &luna_wrapper_wxTreebook::_bind_AddSubPage},
	{"CollapseNode", &luna_wrapper_wxTreebook::_bind_CollapseNode},
	{"Create", &luna_wrapper_wxTreebook::_bind_Create},
	{"DeletePage", &luna_wrapper_wxTreebook::_bind_DeletePage},
	{"ExpandNode", &luna_wrapper_wxTreebook::_bind_ExpandNode},
	{"GetPageParent", &luna_wrapper_wxTreebook::_bind_GetPageParent},
	{"GetSelection", &luna_wrapper_wxTreebook::_bind_GetSelection},
	{"InsertPage", &luna_wrapper_wxTreebook::_bind_InsertPage},
	{"InsertSubPage", &luna_wrapper_wxTreebook::_bind_InsertSubPage},
	{"IsNodeExpanded", &luna_wrapper_wxTreebook::_bind_IsNodeExpanded},
	{"__eq", &luna_wrapper_wxTreebook::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreebook >::converters[] = {
	{"wxObject", &luna_wrapper_wxTreebook::_cast_from_wxObject},
	{"wxWithImages", &luna_wrapper_wxTreebook::_cast_from_wxWithImages},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreebook >::enumValues[] = {
	{0,0}
};


