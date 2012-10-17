#include <plug_common.h>

class luna_wrapper_wxDocManager {
public:
	typedef Luna< wxDocManager > luna_t;

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
		wxDocManager* ptr= dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ActivateView(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFileToHistory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssociateTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96106697)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CloseDocument(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CloseDocuments(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateDocument(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateNewDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateView(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisassociateTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileHistoryAddFilesToMenu_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FileHistoryAddFilesToMenu_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileHistoryLoad(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileHistoryRemoveMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileHistorySave(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileHistoryUseMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindTemplateForPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCurrentDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocuments(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFileHistory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHistoryFilesCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLastDirectory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxDocsOpen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTemplates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeNewDocumentName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCreateFileHistory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnFileClose(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileCloseAll(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileNew(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileOpen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileRevert(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileSave(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileSaveAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLastDirectory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaxDocsOpen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDocManager::wxDocManager(long flags = 0, bool initialize = true)
	static wxDocManager* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocManager::wxDocManager(long flags = 0, bool initialize = true) function, expected prototype:\nwxDocManager::wxDocManager(long flags = 0, bool initialize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>0 ? (long)lua_tointeger(L,1) : 0;
		bool initialize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		return new wxDocManager(flags, initialize);
	}


	// Function binds:
	// void wxDocManager::ActivateView(wxView * doc, bool activate = true)
	static int _bind_ActivateView(lua_State *L) {
		if (!_lg_typecheck_ActivateView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::ActivateView(wxView * doc, bool activate = true) function, expected prototype:\nvoid wxDocManager::ActivateView(wxView * doc, bool activate = true)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxView* doc=dynamic_cast< wxView* >(Luna< wxObject >::check(L,2));
		bool activate=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::ActivateView(wxView *, bool)");
		}
		self->ActivateView(doc, activate);

		return 0;
	}

	// void wxDocManager::AddDocument(wxDocument * doc)
	static int _bind_AddDocument(lua_State *L) {
		if (!_lg_typecheck_AddDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::AddDocument(wxDocument * doc) function, expected prototype:\nvoid wxDocManager::AddDocument(wxDocument * doc)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,2));

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::AddDocument(wxDocument *)");
		}
		self->AddDocument(doc);

		return 0;
	}

	// void wxDocManager::AddFileToHistory(const wxString & filename)
	static int _bind_AddFileToHistory(lua_State *L) {
		if (!_lg_typecheck_AddFileToHistory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::AddFileToHistory(const wxString & filename) function, expected prototype:\nvoid wxDocManager::AddFileToHistory(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::AddFileToHistory(const wxString &)");
		}
		self->AddFileToHistory(filename);

		return 0;
	}

	// void wxDocManager::AssociateTemplate(wxDocTemplate * temp)
	static int _bind_AssociateTemplate(lua_State *L) {
		if (!_lg_typecheck_AssociateTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::AssociateTemplate(wxDocTemplate * temp) function, expected prototype:\nvoid wxDocManager::AssociateTemplate(wxDocTemplate * temp)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDocTemplate* temp=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,2));

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::AssociateTemplate(wxDocTemplate *)");
		}
		self->AssociateTemplate(temp);

		return 0;
	}

	// wxDocTemplate * wxDocManager::FindTemplate(const wxClassInfo * classinfo)
	static int _bind_FindTemplate(lua_State *L) {
		if (!_lg_typecheck_FindTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocTemplate * wxDocManager::FindTemplate(const wxClassInfo * classinfo) function, expected prototype:\nwxDocTemplate * wxDocManager::FindTemplate(const wxClassInfo * classinfo)\nClass arguments details:\narg 1 ID = 96106697\n");
		}

		const wxClassInfo* classinfo=(Luna< wxClassInfo >::check(L,2));

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocTemplate * wxDocManager::FindTemplate(const wxClassInfo *)");
		}
		wxDocTemplate * lret = self->FindTemplate(classinfo);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocTemplate >::push(L,lret,false);

		return 1;
	}

	// bool wxDocManager::CloseDocument(wxDocument * doc, bool force = false)
	static int _bind_CloseDocument(lua_State *L) {
		if (!_lg_typecheck_CloseDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocManager::CloseDocument(wxDocument * doc, bool force = false) function, expected prototype:\nbool wxDocManager::CloseDocument(wxDocument * doc, bool force = false)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,2));
		bool force=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocManager::CloseDocument(wxDocument *, bool)");
		}
		bool lret = self->CloseDocument(doc, force);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocManager::CloseDocuments(bool force = true)
	static int _bind_CloseDocuments(lua_State *L) {
		if (!_lg_typecheck_CloseDocuments(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocManager::CloseDocuments(bool force = true) function, expected prototype:\nbool wxDocManager::CloseDocuments(bool force = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool force=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocManager::CloseDocuments(bool)");
		}
		bool lret = self->CloseDocuments(force);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDocument * wxDocManager::CreateDocument(const wxString & path, long flags = 0)
	static int _bind_CreateDocument(lua_State *L) {
		if (!_lg_typecheck_CreateDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocManager::CreateDocument(const wxString & path, long flags = 0) function, expected prototype:\nwxDocument * wxDocManager::CreateDocument(const wxString & path, long flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		long flags=luatop>2 ? (long)lua_tointeger(L,3) : 0;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocument * wxDocManager::CreateDocument(const wxString &, long)");
		}
		wxDocument * lret = self->CreateDocument(path, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxDocument * wxDocManager::CreateNewDocument()
	static int _bind_CreateNewDocument(lua_State *L) {
		if (!_lg_typecheck_CreateNewDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocManager::CreateNewDocument() function, expected prototype:\nwxDocument * wxDocManager::CreateNewDocument()\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocument * wxDocManager::CreateNewDocument()");
		}
		wxDocument * lret = self->CreateNewDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxView * wxDocManager::CreateView(wxDocument * doc, long flags = 0)
	static int _bind_CreateView(lua_State *L) {
		if (!_lg_typecheck_CreateView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxView * wxDocManager::CreateView(wxDocument * doc, long flags = 0) function, expected prototype:\nwxView * wxDocManager::CreateView(wxDocument * doc, long flags = 0)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,2));
		long flags=luatop>2 ? (long)lua_tointeger(L,3) : 0;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxView * wxDocManager::CreateView(wxDocument *, long)");
		}
		wxView * lret = self->CreateView(doc, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// void wxDocManager::DisassociateTemplate(wxDocTemplate * temp)
	static int _bind_DisassociateTemplate(lua_State *L) {
		if (!_lg_typecheck_DisassociateTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::DisassociateTemplate(wxDocTemplate * temp) function, expected prototype:\nvoid wxDocManager::DisassociateTemplate(wxDocTemplate * temp)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDocTemplate* temp=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,2));

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::DisassociateTemplate(wxDocTemplate *)");
		}
		self->DisassociateTemplate(temp);

		return 0;
	}

	// void wxDocManager::FileHistoryAddFilesToMenu()
	static int _bind_FileHistoryAddFilesToMenu_overload_1(lua_State *L) {
		if (!_lg_typecheck_FileHistoryAddFilesToMenu_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistoryAddFilesToMenu() function, expected prototype:\nvoid wxDocManager::FileHistoryAddFilesToMenu()\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistoryAddFilesToMenu()");
		}
		self->FileHistoryAddFilesToMenu();

		return 0;
	}

	// void wxDocManager::FileHistoryAddFilesToMenu(wxMenu * menu)
	static int _bind_FileHistoryAddFilesToMenu_overload_2(lua_State *L) {
		if (!_lg_typecheck_FileHistoryAddFilesToMenu_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistoryAddFilesToMenu(wxMenu * menu) function, expected prototype:\nvoid wxDocManager::FileHistoryAddFilesToMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistoryAddFilesToMenu(wxMenu *)");
		}
		self->FileHistoryAddFilesToMenu(menu);

		return 0;
	}

	// Overload binder for wxDocManager::FileHistoryAddFilesToMenu
	static int _bind_FileHistoryAddFilesToMenu(lua_State *L) {
		if (_lg_typecheck_FileHistoryAddFilesToMenu_overload_1(L)) return _bind_FileHistoryAddFilesToMenu_overload_1(L);
		if (_lg_typecheck_FileHistoryAddFilesToMenu_overload_2(L)) return _bind_FileHistoryAddFilesToMenu_overload_2(L);

		luaL_error(L, "error in function FileHistoryAddFilesToMenu, cannot match any of the overloads for function FileHistoryAddFilesToMenu:\n  FileHistoryAddFilesToMenu()\n  FileHistoryAddFilesToMenu(wxMenu *)\n");
		return 0;
	}

	// void wxDocManager::FileHistoryLoad(const wxConfigBase & config)
	static int _bind_FileHistoryLoad(lua_State *L) {
		if (!_lg_typecheck_FileHistoryLoad(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistoryLoad(const wxConfigBase & config) function, expected prototype:\nvoid wxDocManager::FileHistoryLoad(const wxConfigBase & config)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxConfigBase* config_ptr=dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,2));
		if( !config_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg config in wxDocManager::FileHistoryLoad function");
		}
		const wxConfigBase & config=*config_ptr;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistoryLoad(const wxConfigBase &)");
		}
		self->FileHistoryLoad(config);

		return 0;
	}

	// void wxDocManager::FileHistoryRemoveMenu(wxMenu * menu)
	static int _bind_FileHistoryRemoveMenu(lua_State *L) {
		if (!_lg_typecheck_FileHistoryRemoveMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistoryRemoveMenu(wxMenu * menu) function, expected prototype:\nvoid wxDocManager::FileHistoryRemoveMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistoryRemoveMenu(wxMenu *)");
		}
		self->FileHistoryRemoveMenu(menu);

		return 0;
	}

	// void wxDocManager::FileHistorySave(wxConfigBase & resourceFile)
	static int _bind_FileHistorySave(lua_State *L) {
		if (!_lg_typecheck_FileHistorySave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistorySave(wxConfigBase & resourceFile) function, expected prototype:\nvoid wxDocManager::FileHistorySave(wxConfigBase & resourceFile)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxConfigBase* resourceFile_ptr=dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,2));
		if( !resourceFile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resourceFile in wxDocManager::FileHistorySave function");
		}
		wxConfigBase & resourceFile=*resourceFile_ptr;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistorySave(wxConfigBase &)");
		}
		self->FileHistorySave(resourceFile);

		return 0;
	}

	// void wxDocManager::FileHistoryUseMenu(wxMenu * menu)
	static int _bind_FileHistoryUseMenu(lua_State *L) {
		if (!_lg_typecheck_FileHistoryUseMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistoryUseMenu(wxMenu * menu) function, expected prototype:\nvoid wxDocManager::FileHistoryUseMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistoryUseMenu(wxMenu *)");
		}
		self->FileHistoryUseMenu(menu);

		return 0;
	}

	// wxDocTemplate * wxDocManager::FindTemplateForPath(const wxString & path)
	static int _bind_FindTemplateForPath(lua_State *L) {
		if (!_lg_typecheck_FindTemplateForPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocTemplate * wxDocManager::FindTemplateForPath(const wxString & path) function, expected prototype:\nwxDocTemplate * wxDocManager::FindTemplateForPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocTemplate * wxDocManager::FindTemplateForPath(const wxString &)");
		}
		wxDocTemplate * lret = self->FindTemplateForPath(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocTemplate >::push(L,lret,false);

		return 1;
	}

	// wxDocument * wxDocManager::GetCurrentDocument() const
	static int _bind_GetCurrentDocument(lua_State *L) {
		if (!_lg_typecheck_GetCurrentDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocManager::GetCurrentDocument() const function, expected prototype:\nwxDocument * wxDocManager::GetCurrentDocument() const\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocument * wxDocManager::GetCurrentDocument() const");
		}
		wxDocument * lret = self->GetCurrentDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxView * wxDocManager::GetCurrentView() const
	static int _bind_GetCurrentView(lua_State *L) {
		if (!_lg_typecheck_GetCurrentView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxView * wxDocManager::GetCurrentView() const function, expected prototype:\nwxView * wxDocManager::GetCurrentView() const\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxView * wxDocManager::GetCurrentView() const");
		}
		wxView * lret = self->GetCurrentView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// wxList & wxDocManager::GetDocuments()
	static int _bind_GetDocuments(lua_State *L) {
		if (!_lg_typecheck_GetDocuments(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxList & wxDocManager::GetDocuments() function, expected prototype:\nwxList & wxDocManager::GetDocuments()\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxList & wxDocManager::GetDocuments()");
		}
		const wxList* lret = &self->GetDocuments();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxList >::push(L,lret,false);

		return 1;
	}

	// wxFileHistory * wxDocManager::GetFileHistory() const
	static int _bind_GetFileHistory(lua_State *L) {
		if (!_lg_typecheck_GetFileHistory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileHistory * wxDocManager::GetFileHistory() const function, expected prototype:\nwxFileHistory * wxDocManager::GetFileHistory() const\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFileHistory * wxDocManager::GetFileHistory() const");
		}
		wxFileHistory * lret = self->GetFileHistory();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileHistory >::push(L,lret,false);

		return 1;
	}

	// size_t wxDocManager::GetHistoryFilesCount() const
	static int _bind_GetHistoryFilesCount(lua_State *L) {
		if (!_lg_typecheck_GetHistoryFilesCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxDocManager::GetHistoryFilesCount() const function, expected prototype:\nsize_t wxDocManager::GetHistoryFilesCount() const\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxDocManager::GetHistoryFilesCount() const");
		}
		size_t lret = self->GetHistoryFilesCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxDocManager::GetLastDirectory() const
	static int _bind_GetLastDirectory(lua_State *L) {
		if (!_lg_typecheck_GetLastDirectory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocManager::GetLastDirectory() const function, expected prototype:\nwxString wxDocManager::GetLastDirectory() const\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocManager::GetLastDirectory() const");
		}
		wxString lret = self->GetLastDirectory();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxDocManager::GetMaxDocsOpen() const
	static int _bind_GetMaxDocsOpen(lua_State *L) {
		if (!_lg_typecheck_GetMaxDocsOpen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDocManager::GetMaxDocsOpen() const function, expected prototype:\nint wxDocManager::GetMaxDocsOpen() const\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDocManager::GetMaxDocsOpen() const");
		}
		int lret = self->GetMaxDocsOpen();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxList & wxDocManager::GetTemplates()
	static int _bind_GetTemplates(lua_State *L) {
		if (!_lg_typecheck_GetTemplates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxList & wxDocManager::GetTemplates() function, expected prototype:\nwxList & wxDocManager::GetTemplates()\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxList & wxDocManager::GetTemplates()");
		}
		const wxList* lret = &self->GetTemplates();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxList >::push(L,lret,false);

		return 1;
	}

	// bool wxDocManager::Initialize()
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocManager::Initialize() function, expected prototype:\nbool wxDocManager::Initialize()\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocManager::Initialize()");
		}
		bool lret = self->Initialize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDocManager::MakeNewDocumentName()
	static int _bind_MakeNewDocumentName(lua_State *L) {
		if (!_lg_typecheck_MakeNewDocumentName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocManager::MakeNewDocumentName() function, expected prototype:\nwxString wxDocManager::MakeNewDocumentName()\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocManager::MakeNewDocumentName()");
		}
		wxString lret = self->MakeNewDocumentName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFileHistory * wxDocManager::OnCreateFileHistory()
	static int _bind_OnCreateFileHistory(lua_State *L) {
		if (!_lg_typecheck_OnCreateFileHistory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileHistory * wxDocManager::OnCreateFileHistory() function, expected prototype:\nwxFileHistory * wxDocManager::OnCreateFileHistory()\nClass arguments details:\n");
		}


		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFileHistory * wxDocManager::OnCreateFileHistory()");
		}
		wxFileHistory * lret = self->OnCreateFileHistory();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileHistory >::push(L,lret,false);

		return 1;
	}

	// void wxDocManager::OnFileClose(wxCommandEvent & event)
	static int _bind_OnFileClose(lua_State *L) {
		if (!_lg_typecheck_OnFileClose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileClose(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileClose(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileClose function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileClose(wxCommandEvent &)");
		}
		self->OnFileClose(event);

		return 0;
	}

	// void wxDocManager::OnFileCloseAll(wxCommandEvent & event)
	static int _bind_OnFileCloseAll(lua_State *L) {
		if (!_lg_typecheck_OnFileCloseAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileCloseAll(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileCloseAll(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileCloseAll function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileCloseAll(wxCommandEvent &)");
		}
		self->OnFileCloseAll(event);

		return 0;
	}

	// void wxDocManager::OnFileNew(wxCommandEvent & event)
	static int _bind_OnFileNew(lua_State *L) {
		if (!_lg_typecheck_OnFileNew(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileNew(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileNew(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileNew function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileNew(wxCommandEvent &)");
		}
		self->OnFileNew(event);

		return 0;
	}

	// void wxDocManager::OnFileOpen(wxCommandEvent & event)
	static int _bind_OnFileOpen(lua_State *L) {
		if (!_lg_typecheck_OnFileOpen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileOpen(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileOpen(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileOpen function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileOpen(wxCommandEvent &)");
		}
		self->OnFileOpen(event);

		return 0;
	}

	// void wxDocManager::OnFileRevert(wxCommandEvent & event)
	static int _bind_OnFileRevert(lua_State *L) {
		if (!_lg_typecheck_OnFileRevert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileRevert(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileRevert(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileRevert function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileRevert(wxCommandEvent &)");
		}
		self->OnFileRevert(event);

		return 0;
	}

	// void wxDocManager::OnFileSave(wxCommandEvent & event)
	static int _bind_OnFileSave(lua_State *L) {
		if (!_lg_typecheck_OnFileSave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileSave(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileSave(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileSave function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileSave(wxCommandEvent &)");
		}
		self->OnFileSave(event);

		return 0;
	}

	// void wxDocManager::OnFileSaveAs(wxCommandEvent & event)
	static int _bind_OnFileSaveAs(lua_State *L) {
		if (!_lg_typecheck_OnFileSaveAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileSaveAs(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileSaveAs(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandEvent* event_ptr=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileSaveAs function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileSaveAs(wxCommandEvent &)");
		}
		self->OnFileSaveAs(event);

		return 0;
	}

	// void wxDocManager::RemoveDocument(wxDocument * doc)
	static int _bind_RemoveDocument(lua_State *L) {
		if (!_lg_typecheck_RemoveDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::RemoveDocument(wxDocument * doc) function, expected prototype:\nvoid wxDocManager::RemoveDocument(wxDocument * doc)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,2));

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::RemoveDocument(wxDocument *)");
		}
		self->RemoveDocument(doc);

		return 0;
	}

	// void wxDocManager::SetLastDirectory(const wxString & dir)
	static int _bind_SetLastDirectory(lua_State *L) {
		if (!_lg_typecheck_SetLastDirectory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::SetLastDirectory(const wxString & dir) function, expected prototype:\nvoid wxDocManager::SetLastDirectory(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::SetLastDirectory(const wxString &)");
		}
		self->SetLastDirectory(dir);

		return 0;
	}

	// void wxDocManager::SetMaxDocsOpen(int n)
	static int _bind_SetMaxDocsOpen(lua_State *L) {
		if (!_lg_typecheck_SetMaxDocsOpen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocManager::SetMaxDocsOpen(int n) function, expected prototype:\nvoid wxDocManager::SetMaxDocsOpen(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxDocManager* self=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocManager::SetMaxDocsOpen(int)");
		}
		self->SetMaxDocsOpen(n);

		return 0;
	}


	// Operator binds:

};

wxDocManager* LunaTraits< wxDocManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDocManager::_bind_ctor(L);
}

void LunaTraits< wxDocManager >::_bind_dtor(wxDocManager* obj) {
	delete obj;
}

const char LunaTraits< wxDocManager >::className[] = "wxDocManager";
const char LunaTraits< wxDocManager >::fullName[] = "wxDocManager";
const char LunaTraits< wxDocManager >::moduleName[] = "wx";
const char* LunaTraits< wxDocManager >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxDocManager >::hash = 90523669;
const int LunaTraits< wxDocManager >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDocManager >::methods[] = {
	{"ActivateView", &luna_wrapper_wxDocManager::_bind_ActivateView},
	{"AddDocument", &luna_wrapper_wxDocManager::_bind_AddDocument},
	{"AddFileToHistory", &luna_wrapper_wxDocManager::_bind_AddFileToHistory},
	{"AssociateTemplate", &luna_wrapper_wxDocManager::_bind_AssociateTemplate},
	{"FindTemplate", &luna_wrapper_wxDocManager::_bind_FindTemplate},
	{"CloseDocument", &luna_wrapper_wxDocManager::_bind_CloseDocument},
	{"CloseDocuments", &luna_wrapper_wxDocManager::_bind_CloseDocuments},
	{"CreateDocument", &luna_wrapper_wxDocManager::_bind_CreateDocument},
	{"CreateNewDocument", &luna_wrapper_wxDocManager::_bind_CreateNewDocument},
	{"CreateView", &luna_wrapper_wxDocManager::_bind_CreateView},
	{"DisassociateTemplate", &luna_wrapper_wxDocManager::_bind_DisassociateTemplate},
	{"FileHistoryAddFilesToMenu", &luna_wrapper_wxDocManager::_bind_FileHistoryAddFilesToMenu},
	{"FileHistoryLoad", &luna_wrapper_wxDocManager::_bind_FileHistoryLoad},
	{"FileHistoryRemoveMenu", &luna_wrapper_wxDocManager::_bind_FileHistoryRemoveMenu},
	{"FileHistorySave", &luna_wrapper_wxDocManager::_bind_FileHistorySave},
	{"FileHistoryUseMenu", &luna_wrapper_wxDocManager::_bind_FileHistoryUseMenu},
	{"FindTemplateForPath", &luna_wrapper_wxDocManager::_bind_FindTemplateForPath},
	{"GetCurrentDocument", &luna_wrapper_wxDocManager::_bind_GetCurrentDocument},
	{"GetCurrentView", &luna_wrapper_wxDocManager::_bind_GetCurrentView},
	{"GetDocuments", &luna_wrapper_wxDocManager::_bind_GetDocuments},
	{"GetFileHistory", &luna_wrapper_wxDocManager::_bind_GetFileHistory},
	{"GetHistoryFilesCount", &luna_wrapper_wxDocManager::_bind_GetHistoryFilesCount},
	{"GetLastDirectory", &luna_wrapper_wxDocManager::_bind_GetLastDirectory},
	{"GetMaxDocsOpen", &luna_wrapper_wxDocManager::_bind_GetMaxDocsOpen},
	{"GetTemplates", &luna_wrapper_wxDocManager::_bind_GetTemplates},
	{"Initialize", &luna_wrapper_wxDocManager::_bind_Initialize},
	{"MakeNewDocumentName", &luna_wrapper_wxDocManager::_bind_MakeNewDocumentName},
	{"OnCreateFileHistory", &luna_wrapper_wxDocManager::_bind_OnCreateFileHistory},
	{"OnFileClose", &luna_wrapper_wxDocManager::_bind_OnFileClose},
	{"OnFileCloseAll", &luna_wrapper_wxDocManager::_bind_OnFileCloseAll},
	{"OnFileNew", &luna_wrapper_wxDocManager::_bind_OnFileNew},
	{"OnFileOpen", &luna_wrapper_wxDocManager::_bind_OnFileOpen},
	{"OnFileRevert", &luna_wrapper_wxDocManager::_bind_OnFileRevert},
	{"OnFileSave", &luna_wrapper_wxDocManager::_bind_OnFileSave},
	{"OnFileSaveAs", &luna_wrapper_wxDocManager::_bind_OnFileSaveAs},
	{"RemoveDocument", &luna_wrapper_wxDocManager::_bind_RemoveDocument},
	{"SetLastDirectory", &luna_wrapper_wxDocManager::_bind_SetLastDirectory},
	{"SetMaxDocsOpen", &luna_wrapper_wxDocManager::_bind_SetMaxDocsOpen},
	{"__eq", &luna_wrapper_wxDocManager::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDocManager >::converters[] = {
	{"wxObject", &luna_wrapper_wxDocManager::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDocManager >::enumValues[] = {
	{0,0}
};


