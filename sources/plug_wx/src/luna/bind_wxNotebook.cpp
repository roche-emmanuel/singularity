#include <plug_common.h>

#include <luna/wrappers/wrapper_wxNotebook.h>

class luna_wrapper_wxNotebook {
public:
	typedef Luna< wxNotebook > luna_t;

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
		wxNotebook* ptr= dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxNotebook >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxWithImages(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxNotebook* ptr= dynamic_cast< wxNotebook* >(Luna< wxWithImages >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxNotebook >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRowCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetThemeBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPadding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
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

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChangeSelection(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxNotebook::wxNotebook()
	static wxNotebook* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxNotebook::wxNotebook() function, expected prototype:\nwxNotebook::wxNotebook()\nClass arguments details:\n");
		}


		return new wxNotebook();
	}

	// wxNotebook::wxNotebook(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxNotebookNameStr)
	static wxNotebook* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxNotebook::wxNotebook(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxNotebookNameStr) function, expected prototype:\nwxNotebook::wxNotebook(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxNotebookNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxNotebook::wxNotebook function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxNotebook::wxNotebook function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxNotebook(parent, id, pos, size, style, name);
	}

	// wxNotebook::wxNotebook(lua_Table * data)
	static wxNotebook* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxNotebook::wxNotebook(lua_Table * data) function, expected prototype:\nwxNotebook::wxNotebook(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxNotebook(L,NULL);
	}

	// wxNotebook::wxNotebook(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxNotebookNameStr)
	static wxNotebook* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxNotebook::wxNotebook(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxNotebookNameStr) function, expected prototype:\nwxNotebook::wxNotebook(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxNotebookNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxNotebook::wxNotebook function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxNotebook::wxNotebook function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_wxNotebook(L,NULL, parent, id, pos, size, style, name);
	}

	// Overload binder for wxNotebook::wxNotebook
	static wxNotebook* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxNotebook, cannot match any of the overloads for function wxNotebook:\n  wxNotebook()\n  wxNotebook(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n  wxNotebook(lua_Table *)\n  wxNotebook(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxNotebook::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxNotebookNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxNotebook::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxNotebookNameStr) function, expected prototype:\nbool wxNotebook::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxNotebookNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxNotebook::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxNotebook::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxNotebook::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxNotebook::GetRowCount() const
	static int _bind_GetRowCount(lua_State *L) {
		if (!_lg_typecheck_GetRowCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxNotebook::GetRowCount() const function, expected prototype:\nint wxNotebook::GetRowCount() const\nClass arguments details:\n");
		}


		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxNotebook::GetRowCount() const");
		}
		int lret = self->GetRowCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxNotebook::GetThemeBackgroundColour() const
	static int _bind_GetThemeBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetThemeBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxNotebook::GetThemeBackgroundColour() const function, expected prototype:\nwxColour wxNotebook::GetThemeBackgroundColour() const\nClass arguments details:\n");
		}


		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxNotebook::GetThemeBackgroundColour() const");
		}
		wxColour stack_lret = self->GetThemeBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxNotebook::SetPadding(const wxSize & padding)
	static int _bind_SetPadding(lua_State *L) {
		if (!_lg_typecheck_SetPadding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxNotebook::SetPadding(const wxSize & padding) function, expected prototype:\nvoid wxNotebook::SetPadding(const wxSize & padding)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* padding_ptr=(Luna< wxSize >::check(L,2));
		if( !padding_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg padding in wxNotebook::SetPadding function");
		}
		const wxSize & padding=*padding_ptr;

		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxNotebook::SetPadding(const wxSize &)");
		}
		self->SetPadding(padding);

		return 0;
	}

	// int wxNotebook::GetPageImage(size_t nPage) const
	static int _bind_GetPageImage(lua_State *L) {
		if (!_lg_typecheck_GetPageImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxNotebook::GetPageImage(size_t nPage) const function, expected prototype:\nint wxNotebook::GetPageImage(size_t nPage) const\nClass arguments details:\n");
		}

		size_t nPage=(size_t)lua_tointeger(L,2);

		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxNotebook::GetPageImage(size_t) const");
		}
		int lret = self->GetPageImage(nPage);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxNotebook::SetPageImage(size_t page, int image)
	static int _bind_SetPageImage(lua_State *L) {
		if (!_lg_typecheck_SetPageImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxNotebook::SetPageImage(size_t page, int image) function, expected prototype:\nbool wxNotebook::SetPageImage(size_t page, int image)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);
		int image=(int)lua_tointeger(L,3);

		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxNotebook::SetPageImage(size_t, int)");
		}
		bool lret = self->SetPageImage(page, image);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxNotebook::GetPageText(size_t nPage) const
	static int _bind_GetPageText(lua_State *L) {
		if (!_lg_typecheck_GetPageText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxNotebook::GetPageText(size_t nPage) const function, expected prototype:\nwxString wxNotebook::GetPageText(size_t nPage) const\nClass arguments details:\n");
		}

		size_t nPage=(size_t)lua_tointeger(L,2);

		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxNotebook::GetPageText(size_t) const");
		}
		wxString lret = self->GetPageText(nPage);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxNotebook::SetPageText(size_t page, const wxString & text)
	static int _bind_SetPageText(lua_State *L) {
		if (!_lg_typecheck_SetPageText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxNotebook::SetPageText(size_t page, const wxString & text) function, expected prototype:\nbool wxNotebook::SetPageText(size_t page, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxNotebook::SetPageText(size_t, const wxString &)");
		}
		bool lret = self->SetPageText(page, text);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxNotebook::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxNotebook::GetSelection() const function, expected prototype:\nint wxNotebook::GetSelection() const\nClass arguments details:\n");
		}


		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxNotebook::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxNotebook::SetSelection(size_t page)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxNotebook::SetSelection(size_t page) function, expected prototype:\nint wxNotebook::SetSelection(size_t page)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxNotebook::SetSelection(size_t)");
		}
		int lret = self->SetSelection(page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxNotebook::ChangeSelection(size_t page)
	static int _bind_ChangeSelection(lua_State *L) {
		if (!_lg_typecheck_ChangeSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxNotebook::ChangeSelection(size_t page) function, expected prototype:\nint wxNotebook::ChangeSelection(size_t page)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxNotebook::ChangeSelection(size_t)");
		}
		int lret = self->ChangeSelection(page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxNotebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
	static int _bind_InsertPage(lua_State *L) {
		if (!_lg_typecheck_InsertPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxNotebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE) function, expected prototype:\nbool wxNotebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		wxWindow* page=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		bool select=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;
		int imageId=luatop>5 ? (int)lua_tointeger(L,6) : wxBookCtrlBase::NO_IMAGE;

		wxNotebook* self=dynamic_cast< wxNotebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxNotebook::InsertPage(size_t, wxWindow *, const wxString &, bool, int)");
		}
		bool lret = self->InsertPage(index, page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxNotebook* LunaTraits< wxNotebook >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxNotebook::_bind_ctor(L);
}

void LunaTraits< wxNotebook >::_bind_dtor(wxNotebook* obj) {
	delete obj;
}

const char LunaTraits< wxNotebook >::className[] = "wxNotebook";
const char LunaTraits< wxNotebook >::fullName[] = "wxNotebook";
const char LunaTraits< wxNotebook >::moduleName[] = "wx";
const char* LunaTraits< wxNotebook >::parents[] = {"wx.wxBookCtrlBase", 0};
const int LunaTraits< wxNotebook >::hash = 9090077;
const int LunaTraits< wxNotebook >::uniqueIDs[] = {56813631, 53506535, 14187710,0};

luna_RegType LunaTraits< wxNotebook >::methods[] = {
	{"Create", &luna_wrapper_wxNotebook::_bind_Create},
	{"GetRowCount", &luna_wrapper_wxNotebook::_bind_GetRowCount},
	{"GetThemeBackgroundColour", &luna_wrapper_wxNotebook::_bind_GetThemeBackgroundColour},
	{"SetPadding", &luna_wrapper_wxNotebook::_bind_SetPadding},
	{"GetPageImage", &luna_wrapper_wxNotebook::_bind_GetPageImage},
	{"SetPageImage", &luna_wrapper_wxNotebook::_bind_SetPageImage},
	{"GetPageText", &luna_wrapper_wxNotebook::_bind_GetPageText},
	{"SetPageText", &luna_wrapper_wxNotebook::_bind_SetPageText},
	{"GetSelection", &luna_wrapper_wxNotebook::_bind_GetSelection},
	{"SetSelection", &luna_wrapper_wxNotebook::_bind_SetSelection},
	{"ChangeSelection", &luna_wrapper_wxNotebook::_bind_ChangeSelection},
	{"InsertPage", &luna_wrapper_wxNotebook::_bind_InsertPage},
	{"__eq", &luna_wrapper_wxNotebook::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxNotebook >::converters[] = {
	{"wxObject", &luna_wrapper_wxNotebook::_cast_from_wxObject},
	{"wxWithImages", &luna_wrapper_wxNotebook::_cast_from_wxWithImages},
	{0,0}
};

luna_RegEnumType LunaTraits< wxNotebook >::enumValues[] = {
	{0,0}
};


