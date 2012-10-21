#include <plug_common.h>

class luna_wrapper_wxHtmlWindow {
public:
	typedef Luna< wxHtmlWindow > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73577618) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHtmlWindow*)");
		}

		wxHtmlWindow* rhs =(Luna< wxHtmlWindow >::check(L,2));
		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHtmlWindow");
		
		return luna_dynamicCast(L,converters,"wxHtmlWindow",name);
	}


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
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AppendToPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInternalRepresentation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOpenedAnchor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOpenedPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOpenedPageTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRelatedFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HistoryBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HistoryCanBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HistoryCanForward(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HistoryClear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HistoryForward(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnLinkClicked(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnSetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SelectLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectWord(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectionToText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBorders(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFonts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStandardFonts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRelatedFrame(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRelatedStatusBar_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRelatedStatusBar_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WriteCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlWindow::wxHtmlWindow()
	static wxHtmlWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlWindow::wxHtmlWindow() function, expected prototype:\nwxHtmlWindow::wxHtmlWindow()\nClass arguments details:\n");
		}


		return new wxHtmlWindow();
	}

	// wxHtmlWindow::wxHtmlWindow(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHW_DEFAULT_STYLE, const wxString & name = "htmlWindow")
	static wxHtmlWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlWindow::wxHtmlWindow(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHW_DEFAULT_STYLE, const wxString & name = \"htmlWindow\") function, expected prototype:\nwxHtmlWindow::wxHtmlWindow(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHW_DEFAULT_STYLE, const wxString & name = \"htmlWindow\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHtmlWindow::wxHtmlWindow function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlWindow::wxHtmlWindow function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxHW_DEFAULT_STYLE;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxHtmlWindow(parent, id, pos, size, style, name);
	}

	// Overload binder for wxHtmlWindow::wxHtmlWindow
	static wxHtmlWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlWindow, cannot match any of the overloads for function wxHtmlWindow:\n  wxHtmlWindow()\n  wxHtmlWindow(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxHtmlWindow::AppendToPage(const wxString & source)
	static int _bind_AppendToPage(lua_State *L) {
		if (!_lg_typecheck_AppendToPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::AppendToPage(const wxString & source) function, expected prototype:\nbool wxHtmlWindow::AppendToPage(const wxString & source)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString source(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::AppendToPage(const wxString &)");
		}
		bool lret = self->AppendToPage(source);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxHtmlContainerCell * wxHtmlWindow::GetInternalRepresentation() const
	static int _bind_GetInternalRepresentation(lua_State *L) {
		if (!_lg_typecheck_GetInternalRepresentation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlContainerCell * wxHtmlWindow::GetInternalRepresentation() const function, expected prototype:\nwxHtmlContainerCell * wxHtmlWindow::GetInternalRepresentation() const\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlContainerCell * wxHtmlWindow::GetInternalRepresentation() const");
		}
		wxHtmlContainerCell * lret = self->GetInternalRepresentation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlContainerCell >::push(L,lret,false);

		return 1;
	}

	// wxString wxHtmlWindow::GetOpenedAnchor() const
	static int _bind_GetOpenedAnchor(lua_State *L) {
		if (!_lg_typecheck_GetOpenedAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::GetOpenedAnchor() const function, expected prototype:\nwxString wxHtmlWindow::GetOpenedAnchor() const\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::GetOpenedAnchor() const");
		}
		wxString lret = self->GetOpenedAnchor();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxHtmlWindow::GetOpenedPage() const
	static int _bind_GetOpenedPage(lua_State *L) {
		if (!_lg_typecheck_GetOpenedPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::GetOpenedPage() const function, expected prototype:\nwxString wxHtmlWindow::GetOpenedPage() const\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::GetOpenedPage() const");
		}
		wxString lret = self->GetOpenedPage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxHtmlWindow::GetOpenedPageTitle() const
	static int _bind_GetOpenedPageTitle(lua_State *L) {
		if (!_lg_typecheck_GetOpenedPageTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::GetOpenedPageTitle() const function, expected prototype:\nwxString wxHtmlWindow::GetOpenedPageTitle() const\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::GetOpenedPageTitle() const");
		}
		wxString lret = self->GetOpenedPageTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFrame * wxHtmlWindow::GetRelatedFrame() const
	static int _bind_GetRelatedFrame(lua_State *L) {
		if (!_lg_typecheck_GetRelatedFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFrame * wxHtmlWindow::GetRelatedFrame() const function, expected prototype:\nwxFrame * wxHtmlWindow::GetRelatedFrame() const\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFrame * wxHtmlWindow::GetRelatedFrame() const");
		}
		wxFrame * lret = self->GetRelatedFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFrame >::push(L,lret,false);

		return 1;
	}

	// bool wxHtmlWindow::HistoryBack()
	static int _bind_HistoryBack(lua_State *L) {
		if (!_lg_typecheck_HistoryBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::HistoryBack() function, expected prototype:\nbool wxHtmlWindow::HistoryBack()\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::HistoryBack()");
		}
		bool lret = self->HistoryBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::HistoryCanBack()
	static int _bind_HistoryCanBack(lua_State *L) {
		if (!_lg_typecheck_HistoryCanBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::HistoryCanBack() function, expected prototype:\nbool wxHtmlWindow::HistoryCanBack()\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::HistoryCanBack()");
		}
		bool lret = self->HistoryCanBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::HistoryCanForward()
	static int _bind_HistoryCanForward(lua_State *L) {
		if (!_lg_typecheck_HistoryCanForward(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::HistoryCanForward() function, expected prototype:\nbool wxHtmlWindow::HistoryCanForward()\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::HistoryCanForward()");
		}
		bool lret = self->HistoryCanForward();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::HistoryClear()
	static int _bind_HistoryClear(lua_State *L) {
		if (!_lg_typecheck_HistoryClear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::HistoryClear() function, expected prototype:\nvoid wxHtmlWindow::HistoryClear()\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::HistoryClear()");
		}
		self->HistoryClear();

		return 0;
	}

	// bool wxHtmlWindow::HistoryForward()
	static int _bind_HistoryForward(lua_State *L) {
		if (!_lg_typecheck_HistoryForward(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::HistoryForward() function, expected prototype:\nbool wxHtmlWindow::HistoryForward()\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::HistoryForward()");
		}
		bool lret = self->HistoryForward();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::LoadFile(const wxFileName & filename)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::LoadFile(const wxFileName & filename) function, expected prototype:\nbool wxHtmlWindow::LoadFile(const wxFileName & filename)\nClass arguments details:\narg 1 ID = 53530938\n");
		}

		const wxFileName* filename_ptr=(Luna< wxFileName >::check(L,2));
		if( !filename_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filename in wxHtmlWindow::LoadFile function");
		}
		const wxFileName & filename=*filename_ptr;

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::LoadFile(const wxFileName &)");
		}
		bool lret = self->LoadFile(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::LoadPage(const wxString & location)
	static int _bind_LoadPage(lua_State *L) {
		if (!_lg_typecheck_LoadPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::LoadPage(const wxString & location) function, expected prototype:\nbool wxHtmlWindow::LoadPage(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString location(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::LoadPage(const wxString &)");
		}
		bool lret = self->LoadPage(location);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::OnLinkClicked(const wxHtmlLinkInfo & link)
	static int _bind_OnLinkClicked(lua_State *L) {
		if (!_lg_typecheck_OnLinkClicked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::OnLinkClicked(const wxHtmlLinkInfo & link) function, expected prototype:\nvoid wxHtmlWindow::OnLinkClicked(const wxHtmlLinkInfo & link)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxHtmlLinkInfo* link_ptr=dynamic_cast< wxHtmlLinkInfo* >(Luna< wxObject >::check(L,2));
		if( !link_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg link in wxHtmlWindow::OnLinkClicked function");
		}
		const wxHtmlLinkInfo & link=*link_ptr;

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::OnLinkClicked(const wxHtmlLinkInfo &)");
		}
		self->OnLinkClicked(link);

		return 0;
	}

	// void wxHtmlWindow::OnSetTitle(const wxString & title)
	static int _bind_OnSetTitle(lua_State *L) {
		if (!_lg_typecheck_OnSetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::OnSetTitle(const wxString & title) function, expected prototype:\nvoid wxHtmlWindow::OnSetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::OnSetTitle(const wxString &)");
		}
		self->OnSetTitle(title);

		return 0;
	}

	// void wxHtmlWindow::ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)
	static int _bind_ReadCustomization(lua_State *L) {
		if (!_lg_typecheck_ReadCustomization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString) function, expected prototype:\nvoid wxHtmlWindow::ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::ReadCustomization(wxConfigBase *, wxString)");
		}
		self->ReadCustomization(cfg, path);

		return 0;
	}

	// void wxHtmlWindow::SelectAll()
	static int _bind_SelectAll(lua_State *L) {
		if (!_lg_typecheck_SelectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SelectAll() function, expected prototype:\nvoid wxHtmlWindow::SelectAll()\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SelectAll()");
		}
		self->SelectAll();

		return 0;
	}

	// void wxHtmlWindow::SelectLine(const wxPoint & pos)
	static int _bind_SelectLine(lua_State *L) {
		if (!_lg_typecheck_SelectLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SelectLine(const wxPoint & pos) function, expected prototype:\nvoid wxHtmlWindow::SelectLine(const wxPoint & pos)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHtmlWindow::SelectLine function");
		}
		const wxPoint & pos=*pos_ptr;

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SelectLine(const wxPoint &)");
		}
		self->SelectLine(pos);

		return 0;
	}

	// void wxHtmlWindow::SelectWord(const wxPoint & pos)
	static int _bind_SelectWord(lua_State *L) {
		if (!_lg_typecheck_SelectWord(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SelectWord(const wxPoint & pos) function, expected prototype:\nvoid wxHtmlWindow::SelectWord(const wxPoint & pos)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHtmlWindow::SelectWord function");
		}
		const wxPoint & pos=*pos_ptr;

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SelectWord(const wxPoint &)");
		}
		self->SelectWord(pos);

		return 0;
	}

	// wxString wxHtmlWindow::SelectionToText()
	static int _bind_SelectionToText(lua_State *L) {
		if (!_lg_typecheck_SelectionToText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::SelectionToText() function, expected prototype:\nwxString wxHtmlWindow::SelectionToText()\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::SelectionToText()");
		}
		wxString lret = self->SelectionToText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHtmlWindow::SetBorders(int b)
	static int _bind_SetBorders(lua_State *L) {
		if (!_lg_typecheck_SetBorders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetBorders(int b) function, expected prototype:\nvoid wxHtmlWindow::SetBorders(int b)\nClass arguments details:\n");
		}

		int b=(int)lua_tointeger(L,2);

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetBorders(int)");
		}
		self->SetBorders(b);

		return 0;
	}

	// void wxHtmlWindow::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL)
	static int _bind_SetFonts(lua_State *L) {
		if (!_lg_typecheck_SetFonts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL) function, expected prototype:\nvoid wxHtmlWindow::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString normal_face(lua_tostring(L,2),lua_objlen(L,2));
		wxString fixed_face(lua_tostring(L,3),lua_objlen(L,3));
		int sizes=luatop>3 ? (int)lua_tointeger(L,4) : NULL;

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetFonts(const wxString &, const wxString &, const int *)");
		}
		self->SetFonts(normal_face, fixed_face, &sizes);

		return 0;
	}

	// void wxHtmlWindow::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString)
	static int _bind_SetStandardFonts(lua_State *L) {
		if (!_lg_typecheck_SetStandardFonts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString) function, expected prototype:\nvoid wxHtmlWindow::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int size=luatop>1 ? (int)lua_tointeger(L,2) : -1;
		wxString normal_face(lua_tostring(L,3),lua_objlen(L,3));
		wxString fixed_face(lua_tostring(L,4),lua_objlen(L,4));

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetStandardFonts(int, const wxString &, const wxString &)");
		}
		self->SetStandardFonts(size, normal_face, fixed_face);

		return 0;
	}

	// bool wxHtmlWindow::SetPage(const wxString & source)
	static int _bind_SetPage(lua_State *L) {
		if (!_lg_typecheck_SetPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::SetPage(const wxString & source) function, expected prototype:\nbool wxHtmlWindow::SetPage(const wxString & source)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString source(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::SetPage(const wxString &)");
		}
		bool lret = self->SetPage(source);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::SetRelatedFrame(wxFrame * frame, const wxString & format)
	static int _bind_SetRelatedFrame(lua_State *L) {
		if (!_lg_typecheck_SetRelatedFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetRelatedFrame(wxFrame * frame, const wxString & format) function, expected prototype:\nvoid wxHtmlWindow::SetRelatedFrame(wxFrame * frame, const wxString & format)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		wxFrame* frame=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,2));
		wxString format(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetRelatedFrame(wxFrame *, const wxString &)");
		}
		self->SetRelatedFrame(frame, format);

		return 0;
	}

	// void wxHtmlWindow::SetRelatedStatusBar(int index)
	static int _bind_SetRelatedStatusBar_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetRelatedStatusBar_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetRelatedStatusBar(int index) function, expected prototype:\nvoid wxHtmlWindow::SetRelatedStatusBar(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetRelatedStatusBar(int)");
		}
		self->SetRelatedStatusBar(index);

		return 0;
	}

	// void wxHtmlWindow::SetRelatedStatusBar(wxStatusBar * statusbar, int index = 0)
	static int _bind_SetRelatedStatusBar_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetRelatedStatusBar_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetRelatedStatusBar(wxStatusBar * statusbar, int index = 0) function, expected prototype:\nvoid wxHtmlWindow::SetRelatedStatusBar(wxStatusBar * statusbar, int index = 0)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxStatusBar* statusbar=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,2));
		int index=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetRelatedStatusBar(wxStatusBar *, int)");
		}
		self->SetRelatedStatusBar(statusbar, index);

		return 0;
	}

	// Overload binder for wxHtmlWindow::SetRelatedStatusBar
	static int _bind_SetRelatedStatusBar(lua_State *L) {
		if (_lg_typecheck_SetRelatedStatusBar_overload_1(L)) return _bind_SetRelatedStatusBar_overload_1(L);
		if (_lg_typecheck_SetRelatedStatusBar_overload_2(L)) return _bind_SetRelatedStatusBar_overload_2(L);

		luaL_error(L, "error in function SetRelatedStatusBar, cannot match any of the overloads for function SetRelatedStatusBar:\n  SetRelatedStatusBar(int)\n  SetRelatedStatusBar(wxStatusBar *, int)\n");
		return 0;
	}

	// wxString wxHtmlWindow::ToText()
	static int _bind_ToText(lua_State *L) {
		if (!_lg_typecheck_ToText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::ToText() function, expected prototype:\nwxString wxHtmlWindow::ToText()\nClass arguments details:\n");
		}


		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::ToText()");
		}
		wxString lret = self->ToText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHtmlWindow::WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)
	static int _bind_WriteCustomization(lua_State *L) {
		if (!_lg_typecheck_WriteCustomization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString) function, expected prototype:\nvoid wxHtmlWindow::WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlWindow* self=(Luna< wxHtmlWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::WriteCustomization(wxConfigBase *, wxString)");
		}
		self->WriteCustomization(cfg, path);

		return 0;
	}

	// static void wxHtmlWindow::AddFilter(wxHtmlFilter * filter)
	static int _bind_AddFilter(lua_State *L) {
		if (!_lg_typecheck_AddFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxHtmlWindow::AddFilter(wxHtmlFilter * filter) function, expected prototype:\nstatic void wxHtmlWindow::AddFilter(wxHtmlFilter * filter)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxHtmlFilter* filter=dynamic_cast< wxHtmlFilter* >(Luna< wxObject >::check(L,1));

		wxHtmlWindow::AddFilter(filter);

		return 0;
	}


	// Operator binds:

};

wxHtmlWindow* LunaTraits< wxHtmlWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlWindow::_bind_ctor(L);
}

void LunaTraits< wxHtmlWindow >::_bind_dtor(wxHtmlWindow* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlWindow >::className[] = "wxHtmlWindow";
const char LunaTraits< wxHtmlWindow >::fullName[] = "wxHtmlWindow";
const char LunaTraits< wxHtmlWindow >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlWindow >::parents[] = {0};
const int LunaTraits< wxHtmlWindow >::hash = 73577618;
const int LunaTraits< wxHtmlWindow >::uniqueIDs[] = {73577618,0};

luna_RegType LunaTraits< wxHtmlWindow >::methods[] = {
	{"AppendToPage", &luna_wrapper_wxHtmlWindow::_bind_AppendToPage},
	{"GetInternalRepresentation", &luna_wrapper_wxHtmlWindow::_bind_GetInternalRepresentation},
	{"GetOpenedAnchor", &luna_wrapper_wxHtmlWindow::_bind_GetOpenedAnchor},
	{"GetOpenedPage", &luna_wrapper_wxHtmlWindow::_bind_GetOpenedPage},
	{"GetOpenedPageTitle", &luna_wrapper_wxHtmlWindow::_bind_GetOpenedPageTitle},
	{"GetRelatedFrame", &luna_wrapper_wxHtmlWindow::_bind_GetRelatedFrame},
	{"HistoryBack", &luna_wrapper_wxHtmlWindow::_bind_HistoryBack},
	{"HistoryCanBack", &luna_wrapper_wxHtmlWindow::_bind_HistoryCanBack},
	{"HistoryCanForward", &luna_wrapper_wxHtmlWindow::_bind_HistoryCanForward},
	{"HistoryClear", &luna_wrapper_wxHtmlWindow::_bind_HistoryClear},
	{"HistoryForward", &luna_wrapper_wxHtmlWindow::_bind_HistoryForward},
	{"LoadFile", &luna_wrapper_wxHtmlWindow::_bind_LoadFile},
	{"LoadPage", &luna_wrapper_wxHtmlWindow::_bind_LoadPage},
	{"OnLinkClicked", &luna_wrapper_wxHtmlWindow::_bind_OnLinkClicked},
	{"OnSetTitle", &luna_wrapper_wxHtmlWindow::_bind_OnSetTitle},
	{"ReadCustomization", &luna_wrapper_wxHtmlWindow::_bind_ReadCustomization},
	{"SelectAll", &luna_wrapper_wxHtmlWindow::_bind_SelectAll},
	{"SelectLine", &luna_wrapper_wxHtmlWindow::_bind_SelectLine},
	{"SelectWord", &luna_wrapper_wxHtmlWindow::_bind_SelectWord},
	{"SelectionToText", &luna_wrapper_wxHtmlWindow::_bind_SelectionToText},
	{"SetBorders", &luna_wrapper_wxHtmlWindow::_bind_SetBorders},
	{"SetFonts", &luna_wrapper_wxHtmlWindow::_bind_SetFonts},
	{"SetStandardFonts", &luna_wrapper_wxHtmlWindow::_bind_SetStandardFonts},
	{"SetPage", &luna_wrapper_wxHtmlWindow::_bind_SetPage},
	{"SetRelatedFrame", &luna_wrapper_wxHtmlWindow::_bind_SetRelatedFrame},
	{"SetRelatedStatusBar", &luna_wrapper_wxHtmlWindow::_bind_SetRelatedStatusBar},
	{"ToText", &luna_wrapper_wxHtmlWindow::_bind_ToText},
	{"WriteCustomization", &luna_wrapper_wxHtmlWindow::_bind_WriteCustomization},
	{"AddFilter", &luna_wrapper_wxHtmlWindow::_bind_AddFilter},
	{"dynCast", &luna_wrapper_wxHtmlWindow::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHtmlWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlWindow >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlWindow >::enumValues[] = {
	{0,0}
};


