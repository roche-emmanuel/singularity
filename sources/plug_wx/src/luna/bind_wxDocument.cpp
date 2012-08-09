#include <plug_common.h>

class luna_wrapper_wxDocument {
public:
	typedef Luna< wxDocument > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDocument* ptr= dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocument >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AlreadySaved(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteAllViews(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteContents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCommandProcessor(lua_State *L) {
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

	inline static bool _lg_typecheck_GetDocumentSaved(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentTemplate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFirstView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserReadableName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViews_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViews_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsChildDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Modify(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangedViewList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCloseDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCreate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCreateCommandProcessor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnNewDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnOpenDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnSaveDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnSaveModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RemoveView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Save(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SaveAs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Revert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCommandProcessor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocumentName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocumentTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocumentSaved(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilename(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangeFilename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateAllViews(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDocument::wxDocument(wxDocument * parent = NULL)
	static wxDocument* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocument::wxDocument(wxDocument * parent = NULL) function, expected prototype:\nwxDocument::wxDocument(wxDocument * parent = NULL)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxDocument* parent=luatop>0 ? dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1)) : (wxDocument*)NULL;

		return new wxDocument(parent);
	}


	// Function binds:
	// bool wxDocument::AddView(wxView * view)
	static int _bind_AddView(lua_State *L) {
		if (!_lg_typecheck_AddView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::AddView(wxView * view) function, expected prototype:\nbool wxDocument::AddView(wxView * view)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxView* view=dynamic_cast< wxView* >(Luna< wxObject >::check(L,2));

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::AddView(wxView *)");
		}
		bool lret = self->AddView(view);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::AlreadySaved() const
	static int _bind_AlreadySaved(lua_State *L) {
		if (!_lg_typecheck_AlreadySaved(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::AlreadySaved() const function, expected prototype:\nbool wxDocument::AlreadySaved() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::AlreadySaved() const");
		}
		bool lret = self->AlreadySaved();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::Close() function, expected prototype:\nbool wxDocument::Close()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::Close()");
		}
		bool lret = self->Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::DeleteAllViews()
	static int _bind_DeleteAllViews(lua_State *L) {
		if (!_lg_typecheck_DeleteAllViews(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::DeleteAllViews() function, expected prototype:\nbool wxDocument::DeleteAllViews()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::DeleteAllViews()");
		}
		bool lret = self->DeleteAllViews();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::DeleteContents()
	static int _bind_DeleteContents(lua_State *L) {
		if (!_lg_typecheck_DeleteContents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::DeleteContents() function, expected prototype:\nbool wxDocument::DeleteContents()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::DeleteContents()");
		}
		bool lret = self->DeleteContents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxCommandProcessor * wxDocument::GetCommandProcessor() const
	static int _bind_GetCommandProcessor(lua_State *L) {
		if (!_lg_typecheck_GetCommandProcessor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCommandProcessor * wxDocument::GetCommandProcessor() const function, expected prototype:\nwxCommandProcessor * wxDocument::GetCommandProcessor() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxCommandProcessor * wxDocument::GetCommandProcessor() const");
		}
		wxCommandProcessor * lret = self->GetCommandProcessor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCommandProcessor >::push(L,lret,false);

		return 1;
	}

	// wxDocManager * wxDocument::GetDocumentManager() const
	static int _bind_GetDocumentManager(lua_State *L) {
		if (!_lg_typecheck_GetDocumentManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocManager * wxDocument::GetDocumentManager() const function, expected prototype:\nwxDocManager * wxDocument::GetDocumentManager() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocManager * wxDocument::GetDocumentManager() const");
		}
		wxDocManager * lret = self->GetDocumentManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocManager >::push(L,lret,false);

		return 1;
	}

	// wxString wxDocument::GetDocumentName() const
	static int _bind_GetDocumentName(lua_State *L) {
		if (!_lg_typecheck_GetDocumentName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocument::GetDocumentName() const function, expected prototype:\nwxString wxDocument::GetDocumentName() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocument::GetDocumentName() const");
		}
		wxString lret = self->GetDocumentName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxDocument::GetDocumentSaved() const
	static int _bind_GetDocumentSaved(lua_State *L) {
		if (!_lg_typecheck_GetDocumentSaved(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::GetDocumentSaved() const function, expected prototype:\nbool wxDocument::GetDocumentSaved() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::GetDocumentSaved() const");
		}
		bool lret = self->GetDocumentSaved();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDocTemplate * wxDocument::GetDocumentTemplate() const
	static int _bind_GetDocumentTemplate(lua_State *L) {
		if (!_lg_typecheck_GetDocumentTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocTemplate * wxDocument::GetDocumentTemplate() const function, expected prototype:\nwxDocTemplate * wxDocument::GetDocumentTemplate() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocTemplate * wxDocument::GetDocumentTemplate() const");
		}
		wxDocTemplate * lret = self->GetDocumentTemplate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocTemplate >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxDocument::GetDocumentWindow() const
	static int _bind_GetDocumentWindow(lua_State *L) {
		if (!_lg_typecheck_GetDocumentWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxDocument::GetDocumentWindow() const function, expected prototype:\nwxWindow * wxDocument::GetDocumentWindow() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxDocument::GetDocumentWindow() const");
		}
		wxWindow * lret = self->GetDocumentWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxString wxDocument::GetFilename() const
	static int _bind_GetFilename(lua_State *L) {
		if (!_lg_typecheck_GetFilename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocument::GetFilename() const function, expected prototype:\nwxString wxDocument::GetFilename() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocument::GetFilename() const");
		}
		wxString lret = self->GetFilename();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxView * wxDocument::GetFirstView() const
	static int _bind_GetFirstView(lua_State *L) {
		if (!_lg_typecheck_GetFirstView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxView * wxDocument::GetFirstView() const function, expected prototype:\nwxView * wxDocument::GetFirstView() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxView * wxDocument::GetFirstView() const");
		}
		wxView * lret = self->GetFirstView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// wxString wxDocument::GetTitle() const
	static int _bind_GetTitle(lua_State *L) {
		if (!_lg_typecheck_GetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocument::GetTitle() const function, expected prototype:\nwxString wxDocument::GetTitle() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocument::GetTitle() const");
		}
		wxString lret = self->GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDocument::GetUserReadableName() const
	static int _bind_GetUserReadableName(lua_State *L) {
		if (!_lg_typecheck_GetUserReadableName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDocument::GetUserReadableName() const function, expected prototype:\nwxString wxDocument::GetUserReadableName() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDocument::GetUserReadableName() const");
		}
		wxString lret = self->GetUserReadableName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxList & wxDocument::GetViews()
	static int _bind_GetViews_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetViews_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxList & wxDocument::GetViews() function, expected prototype:\nwxList & wxDocument::GetViews()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxList & wxDocument::GetViews()");
		}
		const wxList* lret = &self->GetViews();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxList >::push(L,lret,false);

		return 1;
	}

	// const wxList & wxDocument::GetViews() const
	static int _bind_GetViews_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetViews_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxList & wxDocument::GetViews() const function, expected prototype:\nconst wxList & wxDocument::GetViews() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxList & wxDocument::GetViews() const");
		}
		const wxList* lret = &self->GetViews();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDocument::GetViews
	static int _bind_GetViews(lua_State *L) {
		if (_lg_typecheck_GetViews_overload_1(L)) return _bind_GetViews_overload_1(L);
		if (_lg_typecheck_GetViews_overload_2(L)) return _bind_GetViews_overload_2(L);

		luaL_error(L, "error in function GetViews, cannot match any of the overloads for function GetViews:\n  GetViews()\n  GetViews()\n");
		return 0;
	}

	// bool wxDocument::IsChildDocument() const
	static int _bind_IsChildDocument(lua_State *L) {
		if (!_lg_typecheck_IsChildDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::IsChildDocument() const function, expected prototype:\nbool wxDocument::IsChildDocument() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::IsChildDocument() const");
		}
		bool lret = self->IsChildDocument();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::IsModified() const
	static int _bind_IsModified(lua_State *L) {
		if (!_lg_typecheck_IsModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::IsModified() const function, expected prototype:\nbool wxDocument::IsModified() const\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::IsModified() const");
		}
		bool lret = self->IsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocument::Modify(bool modify)
	static int _bind_Modify(lua_State *L) {
		if (!_lg_typecheck_Modify(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocument::Modify(bool modify) function, expected prototype:\nvoid wxDocument::Modify(bool modify)\nClass arguments details:\n");
		}

		bool modify=(bool)(lua_toboolean(L,2)==1);

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocument::Modify(bool)");
		}
		self->Modify(modify);

		return 0;
	}

	// void wxDocument::OnChangedViewList()
	static int _bind_OnChangedViewList(lua_State *L) {
		if (!_lg_typecheck_OnChangedViewList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocument::OnChangedViewList() function, expected prototype:\nvoid wxDocument::OnChangedViewList()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocument::OnChangedViewList()");
		}
		self->OnChangedViewList();

		return 0;
	}

	// bool wxDocument::OnCloseDocument()
	static int _bind_OnCloseDocument(lua_State *L) {
		if (!_lg_typecheck_OnCloseDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnCloseDocument() function, expected prototype:\nbool wxDocument::OnCloseDocument()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::OnCloseDocument()");
		}
		bool lret = self->OnCloseDocument();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::OnCreate(const wxString & path, long flags)
	static int _bind_OnCreate(lua_State *L) {
		if (!_lg_typecheck_OnCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnCreate(const wxString & path, long flags) function, expected prototype:\nbool wxDocument::OnCreate(const wxString & path, long flags)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		long flags=(long)lua_tointeger(L,3);

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::OnCreate(const wxString &, long)");
		}
		bool lret = self->OnCreate(path, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxCommandProcessor * wxDocument::OnCreateCommandProcessor()
	static int _bind_OnCreateCommandProcessor(lua_State *L) {
		if (!_lg_typecheck_OnCreateCommandProcessor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCommandProcessor * wxDocument::OnCreateCommandProcessor() function, expected prototype:\nwxCommandProcessor * wxDocument::OnCreateCommandProcessor()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxCommandProcessor * wxDocument::OnCreateCommandProcessor()");
		}
		wxCommandProcessor * lret = self->OnCreateCommandProcessor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCommandProcessor >::push(L,lret,false);

		return 1;
	}

	// bool wxDocument::OnNewDocument()
	static int _bind_OnNewDocument(lua_State *L) {
		if (!_lg_typecheck_OnNewDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnNewDocument() function, expected prototype:\nbool wxDocument::OnNewDocument()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::OnNewDocument()");
		}
		bool lret = self->OnNewDocument();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::OnOpenDocument(const wxString & filename)
	static int _bind_OnOpenDocument(lua_State *L) {
		if (!_lg_typecheck_OnOpenDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnOpenDocument(const wxString & filename) function, expected prototype:\nbool wxDocument::OnOpenDocument(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::OnOpenDocument(const wxString &)");
		}
		bool lret = self->OnOpenDocument(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::OnSaveDocument(const wxString & filename)
	static int _bind_OnSaveDocument(lua_State *L) {
		if (!_lg_typecheck_OnSaveDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnSaveDocument(const wxString & filename) function, expected prototype:\nbool wxDocument::OnSaveDocument(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::OnSaveDocument(const wxString &)");
		}
		bool lret = self->OnSaveDocument(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::OnSaveModified()
	static int _bind_OnSaveModified(lua_State *L) {
		if (!_lg_typecheck_OnSaveModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnSaveModified() function, expected prototype:\nbool wxDocument::OnSaveModified()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::OnSaveModified()");
		}
		bool lret = self->OnSaveModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::RemoveView(wxView * view)
	static int _bind_RemoveView(lua_State *L) {
		if (!_lg_typecheck_RemoveView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::RemoveView(wxView * view) function, expected prototype:\nbool wxDocument::RemoveView(wxView * view)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxView* view=dynamic_cast< wxView* >(Luna< wxObject >::check(L,2));

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::RemoveView(wxView *)");
		}
		bool lret = self->RemoveView(view);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::Save()
	static int _bind_Save(lua_State *L) {
		if (!_lg_typecheck_Save(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::Save() function, expected prototype:\nbool wxDocument::Save()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::Save()");
		}
		bool lret = self->Save();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::SaveAs()
	static int _bind_SaveAs(lua_State *L) {
		if (!_lg_typecheck_SaveAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::SaveAs() function, expected prototype:\nbool wxDocument::SaveAs()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::SaveAs()");
		}
		bool lret = self->SaveAs();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::Revert()
	static int _bind_Revert(lua_State *L) {
		if (!_lg_typecheck_Revert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocument::Revert() function, expected prototype:\nbool wxDocument::Revert()\nClass arguments details:\n");
		}


		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocument::Revert()");
		}
		bool lret = self->Revert();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocument::SetCommandProcessor(wxCommandProcessor * processor)
	static int _bind_SetCommandProcessor(lua_State *L) {
		if (!_lg_typecheck_SetCommandProcessor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocument::SetCommandProcessor(wxCommandProcessor * processor) function, expected prototype:\nvoid wxDocument::SetCommandProcessor(wxCommandProcessor * processor)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommandProcessor* processor=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,2));

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocument::SetCommandProcessor(wxCommandProcessor *)");
		}
		self->SetCommandProcessor(processor);

		return 0;
	}

	// void wxDocument::SetDocumentName(const wxString & name)
	static int _bind_SetDocumentName(lua_State *L) {
		if (!_lg_typecheck_SetDocumentName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocument::SetDocumentName(const wxString & name) function, expected prototype:\nvoid wxDocument::SetDocumentName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocument::SetDocumentName(const wxString &)");
		}
		self->SetDocumentName(name);

		return 0;
	}

	// void wxDocument::SetDocumentTemplate(wxDocTemplate * templ)
	static int _bind_SetDocumentTemplate(lua_State *L) {
		if (!_lg_typecheck_SetDocumentTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocument::SetDocumentTemplate(wxDocTemplate * templ) function, expected prototype:\nvoid wxDocument::SetDocumentTemplate(wxDocTemplate * templ)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDocTemplate* templ=dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,2));

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocument::SetDocumentTemplate(wxDocTemplate *)");
		}
		self->SetDocumentTemplate(templ);

		return 0;
	}

	// void wxDocument::SetDocumentSaved(bool saved = true)
	static int _bind_SetDocumentSaved(lua_State *L) {
		if (!_lg_typecheck_SetDocumentSaved(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocument::SetDocumentSaved(bool saved = true) function, expected prototype:\nvoid wxDocument::SetDocumentSaved(bool saved = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool saved=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocument::SetDocumentSaved(bool)");
		}
		self->SetDocumentSaved(saved);

		return 0;
	}

	// void wxDocument::SetFilename(const wxString & filename, bool notifyViews = false)
	static int _bind_SetFilename(lua_State *L) {
		if (!_lg_typecheck_SetFilename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocument::SetFilename(const wxString & filename, bool notifyViews = false) function, expected prototype:\nvoid wxDocument::SetFilename(const wxString & filename, bool notifyViews = false)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));
		bool notifyViews=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocument::SetFilename(const wxString &, bool)");
		}
		self->SetFilename(filename, notifyViews);

		return 0;
	}

	// void wxDocument::OnChangeFilename(bool notifyViews)
	static int _bind_OnChangeFilename(lua_State *L) {
		if (!_lg_typecheck_OnChangeFilename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocument::OnChangeFilename(bool notifyViews) function, expected prototype:\nvoid wxDocument::OnChangeFilename(bool notifyViews)\nClass arguments details:\n");
		}

		bool notifyViews=(bool)(lua_toboolean(L,2)==1);

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocument::OnChangeFilename(bool)");
		}
		self->OnChangeFilename(notifyViews);

		return 0;
	}

	// void wxDocument::SetTitle(const wxString & title)
	static int _bind_SetTitle(lua_State *L) {
		if (!_lg_typecheck_SetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocument::SetTitle(const wxString & title) function, expected prototype:\nvoid wxDocument::SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocument::SetTitle(const wxString &)");
		}
		self->SetTitle(title);

		return 0;
	}

	// void wxDocument::UpdateAllViews(wxView * sender = NULL, wxObject * hint = NULL)
	static int _bind_UpdateAllViews(lua_State *L) {
		if (!_lg_typecheck_UpdateAllViews(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDocument::UpdateAllViews(wxView * sender = NULL, wxObject * hint = NULL) function, expected prototype:\nvoid wxDocument::UpdateAllViews(wxView * sender = NULL, wxObject * hint = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxView* sender=luatop>1 ? dynamic_cast< wxView* >(Luna< wxObject >::check(L,2)) : (wxView*)NULL;
		wxObject* hint=luatop>2 ? (Luna< wxObject >::check(L,3)) : (wxObject*)NULL;

		wxDocument* self=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDocument::UpdateAllViews(wxView *, wxObject *)");
		}
		self->UpdateAllViews(sender, hint);

		return 0;
	}


	// Operator binds:

};

wxDocument* LunaTraits< wxDocument >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDocument::_bind_ctor(L);
}

void LunaTraits< wxDocument >::_bind_dtor(wxDocument* obj) {
	delete obj;
}

const char LunaTraits< wxDocument >::className[] = "wxDocument";
const char LunaTraits< wxDocument >::fullName[] = "wxDocument";
const char LunaTraits< wxDocument >::moduleName[] = "wx";
const char* LunaTraits< wxDocument >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxDocument >::hash = 11369723;
const int LunaTraits< wxDocument >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDocument >::methods[] = {
	{"AddView", &luna_wrapper_wxDocument::_bind_AddView},
	{"AlreadySaved", &luna_wrapper_wxDocument::_bind_AlreadySaved},
	{"Close", &luna_wrapper_wxDocument::_bind_Close},
	{"DeleteAllViews", &luna_wrapper_wxDocument::_bind_DeleteAllViews},
	{"DeleteContents", &luna_wrapper_wxDocument::_bind_DeleteContents},
	{"GetCommandProcessor", &luna_wrapper_wxDocument::_bind_GetCommandProcessor},
	{"GetDocumentManager", &luna_wrapper_wxDocument::_bind_GetDocumentManager},
	{"GetDocumentName", &luna_wrapper_wxDocument::_bind_GetDocumentName},
	{"GetDocumentSaved", &luna_wrapper_wxDocument::_bind_GetDocumentSaved},
	{"GetDocumentTemplate", &luna_wrapper_wxDocument::_bind_GetDocumentTemplate},
	{"GetDocumentWindow", &luna_wrapper_wxDocument::_bind_GetDocumentWindow},
	{"GetFilename", &luna_wrapper_wxDocument::_bind_GetFilename},
	{"GetFirstView", &luna_wrapper_wxDocument::_bind_GetFirstView},
	{"GetTitle", &luna_wrapper_wxDocument::_bind_GetTitle},
	{"GetUserReadableName", &luna_wrapper_wxDocument::_bind_GetUserReadableName},
	{"GetViews", &luna_wrapper_wxDocument::_bind_GetViews},
	{"IsChildDocument", &luna_wrapper_wxDocument::_bind_IsChildDocument},
	{"IsModified", &luna_wrapper_wxDocument::_bind_IsModified},
	{"Modify", &luna_wrapper_wxDocument::_bind_Modify},
	{"OnChangedViewList", &luna_wrapper_wxDocument::_bind_OnChangedViewList},
	{"OnCloseDocument", &luna_wrapper_wxDocument::_bind_OnCloseDocument},
	{"OnCreate", &luna_wrapper_wxDocument::_bind_OnCreate},
	{"OnCreateCommandProcessor", &luna_wrapper_wxDocument::_bind_OnCreateCommandProcessor},
	{"OnNewDocument", &luna_wrapper_wxDocument::_bind_OnNewDocument},
	{"OnOpenDocument", &luna_wrapper_wxDocument::_bind_OnOpenDocument},
	{"OnSaveDocument", &luna_wrapper_wxDocument::_bind_OnSaveDocument},
	{"OnSaveModified", &luna_wrapper_wxDocument::_bind_OnSaveModified},
	{"RemoveView", &luna_wrapper_wxDocument::_bind_RemoveView},
	{"Save", &luna_wrapper_wxDocument::_bind_Save},
	{"SaveAs", &luna_wrapper_wxDocument::_bind_SaveAs},
	{"Revert", &luna_wrapper_wxDocument::_bind_Revert},
	{"SetCommandProcessor", &luna_wrapper_wxDocument::_bind_SetCommandProcessor},
	{"SetDocumentName", &luna_wrapper_wxDocument::_bind_SetDocumentName},
	{"SetDocumentTemplate", &luna_wrapper_wxDocument::_bind_SetDocumentTemplate},
	{"SetDocumentSaved", &luna_wrapper_wxDocument::_bind_SetDocumentSaved},
	{"SetFilename", &luna_wrapper_wxDocument::_bind_SetFilename},
	{"OnChangeFilename", &luna_wrapper_wxDocument::_bind_OnChangeFilename},
	{"SetTitle", &luna_wrapper_wxDocument::_bind_SetTitle},
	{"UpdateAllViews", &luna_wrapper_wxDocument::_bind_UpdateAllViews},
	{0,0}
};

luna_ConverterType LunaTraits< wxDocument >::converters[] = {
	{"wxObject", &luna_wrapper_wxDocument::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDocument >::enumValues[] = {
	{0,0}
};

