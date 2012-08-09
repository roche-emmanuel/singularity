#include <plug_common.h>

class luna_wrapper_wxDocTemplate {
public:
	typedef Luna< wxDocTemplate > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDocTemplate* ptr= dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocTemplate >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		if( lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,96106697)) ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,96106697)) ) return false;
		if( luatop>9 && (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CreateDocument(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateView(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileMatchesTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultExtension(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDirectory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFileFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViewClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViewName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitDocument(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDefaultExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDirectory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocumentManager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFileFilter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDocTemplate::wxDocTemplate(wxDocManager * manager, const wxString & descr, const wxString & filter, const wxString & dir, const wxString & ext, const wxString & docTypeName, const wxString & viewTypeName, wxClassInfo * docClassInfo = 0, wxClassInfo * viewClassInfo = 0, long flags = wxTEMPLATE_VISIBLE)
	static wxDocTemplate* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocTemplate::wxDocTemplate(wxDocManager * manager, const wxString & descr, const wxString & filter, const wxString & dir, const wxString & ext, const wxString & docTypeName, const wxString & viewTypeName, wxClassInfo * docClassInfo = 0, wxClassInfo * viewClassInfo = 0, long flags = wxTEMPLATE_VISIBLE) function, expected prototype:\nwxDocTemplate::wxDocTemplate(wxDocManager * manager, const wxString & descr, const wxString & filter, const wxString & dir, const wxString & ext, const wxString & docTypeName, const wxString & viewTypeName, wxClassInfo * docClassInfo = 0, wxClassInfo * viewClassInfo = 0, long flags = wxTEMPLATE_VISIBLE)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 6 ID = 88196105\narg 7 ID = 88196105\narg 8 ID = 96106697\narg 9 ID = 96106697\n");
		}

		int luatop = lua_gettop(L);

		wxDocManager* manager=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		wxString descr(lua_tostring(L,2),lua_objlen(L,2));
		wxString filter(lua_tostring(L,3),lua_objlen(L,3));
		wxString dir(lua_tostring(L,4),lua_objlen(L,4));
		wxString ext(lua_tostring(L,5),lua_objlen(L,5));
		wxString docTypeName(lua_tostring(L,6),lua_objlen(L,6));
		wxString viewTypeName(lua_tostring(L,7),lua_objlen(L,7));
		wxClassInfo* docClassInfo=luatop>7 ? (Luna< wxClassInfo >::check(L,8)) : (wxClassInfo*)0;
		wxClassInfo* viewClassInfo=luatop>8 ? (Luna< wxClassInfo >::check(L,9)) : (wxClassInfo*)0;
		long flags=luatop>9 ? (long)lua_tointeger(L,10) : wxTEMPLATE_VISIBLE;

		return new wxDocTemplate(manager, descr, filter, dir, ext, docTypeName, viewTypeName, docClassInfo, viewClassInfo, flags);
	}


	// Function binds:
	// wxDocument * wxDocTemplate::CreateDocument(const wxString & path, long flags = 0)
	static int _bind_CreateDocument(lua_State *L) {
		if (!_lg_typecheck_CreateDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocTemplate::CreateDocument(const wxString & path, long flags = 0) function, expected prototype:\nwxDocument * wxDocTemplate::CreateDocument(const wxString & path, long flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		long flags=luatop>2 ? (long)lua_tointeger(L,3) : 0;

		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocument * wxDocTemplate::CreateDocument(const wxString &, long)");
		}
		wxDocument * lret = self->CreateDocument(path, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxView * wxDocTemplate::CreateView(wxDocument * doc, long flags = 0)
	static int _bind_CreateView(lua_State *L) {
		if (!_lg_typecheck_CreateView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxView * wxDocTemplate::CreateView(wxDocument * doc, long flags = 0) function, expected prototype:\nwxView * wxDocTemplate::CreateView(wxDocument * doc, long flags = 0)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,2));
		long flags=luatop>2 ? (long)lua_tointeger(L,3) : 0;

		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxView * wxDocTemplate::CreateView(wxDocument *, long)");
		}
		wxView * lret = self->CreateView(doc, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// bool wxDocTemplate::FileMatchesTemplate(const wxString & path)
	static int _bind_FileMatchesTemplate(lua_State *L) {
		if (!_lg_typecheck_FileMatchesTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocTemplate::FileMatchesTemplate(const wxString & path) function, expected prototype:\nbool wxDocTemplate::FileMatchesTemplate(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocTemplate::FileMatchesTemplate(const wxString &)");
		}
		bool lret = self->FileMatchesTemplate(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDocTemplate::GetDefaultExtension() const
	static int _bind_GetDefaultExtension(lua_State *L) {
		if (!_lg_typecheck_GetDefaultExtension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetDefaultExtension() const function, expected prototype:\nwxString wxDocTemplate::GetDefaultExtension() const\nClass arguments details:\n");
		}


		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetDefaultExtension() const");
		}
		wxString lret = self->GetDefaultExtension();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDocTemplate::GetDescription() const
	static int _bind_GetDescription(lua_State *L) {
		if (!_lg_typecheck_GetDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetDescription() const function, expected prototype:\nwxString wxDocTemplate::GetDescription() const\nClass arguments details:\n");
		}


		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetDescription() const");
		}
		wxString lret = self->GetDescription();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDocTemplate::GetDirectory() const
	static int _bind_GetDirectory(lua_State *L) {
		if (!_lg_typecheck_GetDirectory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetDirectory() const function, expected prototype:\nwxString wxDocTemplate::GetDirectory() const\nClass arguments details:\n");
		}


		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetDirectory() const");
		}
		wxString lret = self->GetDirectory();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxClassInfo * wxDocTemplate::GetDocClassInfo() const
	static int _bind_GetDocClassInfo(lua_State *L) {
		if (!_lg_typecheck_GetDocClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDocTemplate::GetDocClassInfo() const function, expected prototype:\nwxClassInfo * wxDocTemplate::GetDocClassInfo() const\nClass arguments details:\n");
		}


		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDocTemplate::GetDocClassInfo() const");
		}
		wxClassInfo * lret = self->GetDocClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxDocManager * wxDocTemplate::GetDocumentManager() const
	static int _bind_GetDocumentManager(lua_State *L) {
		if (!_lg_typecheck_GetDocumentManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocManager * wxDocTemplate::GetDocumentManager() const function, expected prototype:\nwxDocManager * wxDocTemplate::GetDocumentManager() const\nClass arguments details:\n");
		}


		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocManager * wxDocTemplate::GetDocumentManager() const");
		}
		wxDocManager * lret = self->GetDocumentManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocManager >::push(L,lret,false);

		return 1;
	}

	// wxString wxDocTemplate::GetDocumentName() const
	static int _bind_GetDocumentName(lua_State *L) {
		if (!_lg_typecheck_GetDocumentName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetDocumentName() const function, expected prototype:\nwxString wxDocTemplate::GetDocumentName() const\nClass arguments details:\n");
		}


		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetDocumentName() const");
		}
		wxString lret = self->GetDocumentName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDocTemplate::GetFileFilter() const
	static int _bind_GetFileFilter(lua_State *L) {
		if (!_lg_typecheck_GetFileFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetFileFilter() const function, expected prototype:\nwxString wxDocTemplate::GetFileFilter() const\nClass arguments details:\n");
		}


		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetFileFilter() const");
		}
		wxString lret = self->GetFileFilter();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxDocTemplate::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxDocTemplate::GetFlags() const function, expected prototype:\nlong wxDocTemplate::GetFlags() const\nClass arguments details:\n");
		}


		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxDocTemplate::GetFlags() const");
		}
		long lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxDocTemplate::GetViewClassInfo() const
	static int _bind_GetViewClassInfo(lua_State *L) {
		if (!_lg_typecheck_GetViewClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDocTemplate::GetViewClassInfo() const function, expected prototype:\nwxClassInfo * wxDocTemplate::GetViewClassInfo() const\nClass arguments details:\n");
		}


		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDocTemplate::GetViewClassInfo() const");
		}
		wxClassInfo * lret = self->GetViewClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxString wxDocTemplate::GetViewName() const
	static int _bind_GetViewName(lua_State *L) {
		if (!_lg_typecheck_GetViewName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetViewName() const function, expected prototype:\nwxString wxDocTemplate::GetViewName() const\nClass arguments details:\n");
		}


		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetViewName() const");
		}
		wxString lret = self->GetViewName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxDocTemplate::InitDocument(wxDocument * doc, const wxString & path, long flags = 0)
	static int _bind_InitDocument(lua_State *L) {
		if (!_lg_typecheck_InitDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocTemplate::InitDocument(wxDocument * doc, const wxString & path, long flags = 0) function, expected prototype:\nbool wxDocTemplate::InitDocument(wxDocument * doc, const wxString & path, long flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		long flags=luatop>3 ? (long)lua_tointeger(L,4) : 0;

		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocTemplate::InitDocument(wxDocument *, const wxString &, long)");
		}
		bool lret = self->InitDocument(doc, path, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocTemplate::IsVisible() const
	static int _bind_IsVisible(lua_State *L) {
		if (!_lg_typecheck_IsVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocTemplate::IsVisible() const function, expected prototype:\nbool wxDocTemplate::IsVisible() const\nClass arguments details:\n");
		}


		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocTemplate::IsVisible() const");
		}
		bool lret = self->IsVisible();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocTemplate::SetDefaultExtension(const wxString & ext)
	static int _bind_SetDefaultExtension(lua_State *L) {
		if (!_lg_typecheck_SetDefaultExtension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetDefaultExtension(const wxString & ext) function, expected prototype:\nvoid wxDocTemplate::SetDefaultExtension(const wxString & ext)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString ext(lua_tostring(L,2),lua_objlen(L,2));

		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetDefaultExtension(const wxString &)");
		}
		self->SetDefaultExtension(ext);

		return 0;
	}

	// void wxDocTemplate::SetDescription(const wxString & descr)
	static int _bind_SetDescription(lua_State *L) {
		if (!_lg_typecheck_SetDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetDescription(const wxString & descr) function, expected prototype:\nvoid wxDocTemplate::SetDescription(const wxString & descr)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString descr(lua_tostring(L,2),lua_objlen(L,2));

		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetDescription(const wxString &)");
		}
		self->SetDescription(descr);

		return 0;
	}

	// void wxDocTemplate::SetDirectory(const wxString & dir)
	static int _bind_SetDirectory(lua_State *L) {
		if (!_lg_typecheck_SetDirectory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetDirectory(const wxString & dir) function, expected prototype:\nvoid wxDocTemplate::SetDirectory(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));

		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetDirectory(const wxString &)");
		}
		self->SetDirectory(dir);

		return 0;
	}

	// void wxDocTemplate::SetDocumentManager(wxDocManager * manager)
	static int _bind_SetDocumentManager(lua_State *L) {
		if (!_lg_typecheck_SetDocumentManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetDocumentManager(wxDocManager * manager) function, expected prototype:\nvoid wxDocTemplate::SetDocumentManager(wxDocManager * manager)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDocManager* manager=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,2));

		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetDocumentManager(wxDocManager *)");
		}
		self->SetDocumentManager(manager);

		return 0;
	}

	// void wxDocTemplate::SetFileFilter(const wxString & filter)
	static int _bind_SetFileFilter(lua_State *L) {
		if (!_lg_typecheck_SetFileFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetFileFilter(const wxString & filter) function, expected prototype:\nvoid wxDocTemplate::SetFileFilter(const wxString & filter)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filter(lua_tostring(L,2),lua_objlen(L,2));

		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetFileFilter(const wxString &)");
		}
		self->SetFileFilter(filter);

		return 0;
	}

	// void wxDocTemplate::SetFlags(long flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetFlags(long flags) function, expected prototype:\nvoid wxDocTemplate::SetFlags(long flags)\nClass arguments details:\n");
		}

		long flags=(long)lua_tointeger(L,2);

		wxDocTemplate* self=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetFlags(long)");
		}
		self->SetFlags(flags);

		return 0;
	}


	// Operator binds:

};

wxDocTemplate* LunaTraits< wxDocTemplate >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDocTemplate::_bind_ctor(L);
}

void LunaTraits< wxDocTemplate >::_bind_dtor(wxDocTemplate* obj) {
	delete obj;
}

const char LunaTraits< wxDocTemplate >::className[] = "wxDocTemplate";
const char LunaTraits< wxDocTemplate >::fullName[] = "wxDocTemplate";
const char LunaTraits< wxDocTemplate >::moduleName[] = "wx";
const char* LunaTraits< wxDocTemplate >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxDocTemplate >::hash = 29895188;
const int LunaTraits< wxDocTemplate >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDocTemplate >::methods[] = {
	{"CreateDocument", &luna_wrapper_wxDocTemplate::_bind_CreateDocument},
	{"CreateView", &luna_wrapper_wxDocTemplate::_bind_CreateView},
	{"FileMatchesTemplate", &luna_wrapper_wxDocTemplate::_bind_FileMatchesTemplate},
	{"GetDefaultExtension", &luna_wrapper_wxDocTemplate::_bind_GetDefaultExtension},
	{"GetDescription", &luna_wrapper_wxDocTemplate::_bind_GetDescription},
	{"GetDirectory", &luna_wrapper_wxDocTemplate::_bind_GetDirectory},
	{"GetDocClassInfo", &luna_wrapper_wxDocTemplate::_bind_GetDocClassInfo},
	{"GetDocumentManager", &luna_wrapper_wxDocTemplate::_bind_GetDocumentManager},
	{"GetDocumentName", &luna_wrapper_wxDocTemplate::_bind_GetDocumentName},
	{"GetFileFilter", &luna_wrapper_wxDocTemplate::_bind_GetFileFilter},
	{"GetFlags", &luna_wrapper_wxDocTemplate::_bind_GetFlags},
	{"GetViewClassInfo", &luna_wrapper_wxDocTemplate::_bind_GetViewClassInfo},
	{"GetViewName", &luna_wrapper_wxDocTemplate::_bind_GetViewName},
	{"InitDocument", &luna_wrapper_wxDocTemplate::_bind_InitDocument},
	{"IsVisible", &luna_wrapper_wxDocTemplate::_bind_IsVisible},
	{"SetDefaultExtension", &luna_wrapper_wxDocTemplate::_bind_SetDefaultExtension},
	{"SetDescription", &luna_wrapper_wxDocTemplate::_bind_SetDescription},
	{"SetDirectory", &luna_wrapper_wxDocTemplate::_bind_SetDirectory},
	{"SetDocumentManager", &luna_wrapper_wxDocTemplate::_bind_SetDocumentManager},
	{"SetFileFilter", &luna_wrapper_wxDocTemplate::_bind_SetFileFilter},
	{"SetFlags", &luna_wrapper_wxDocTemplate::_bind_SetFlags},
	{0,0}
};

luna_ConverterType LunaTraits< wxDocTemplate >::converters[] = {
	{"wxObject", &luna_wrapper_wxDocTemplate::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDocTemplate >::enumValues[] = {
	{0,0}
};

