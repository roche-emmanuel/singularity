#include <plug_common.h>

class luna_wrapper_wxView {
public:
	typedef Luna< wxView > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxView* ptr= dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxView >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Activate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViewName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnActivateView(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangeFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnClose(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnClosingDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCreate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnUpdate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetViewName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxView::Activate(bool activate)
	static int _bind_Activate(lua_State *L) {
		if (!_lg_typecheck_Activate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxView::Activate(bool activate) function, expected prototype:\nvoid wxView::Activate(bool activate)\nClass arguments details:\n");
		}

		bool activate=(bool)(lua_toboolean(L,2)==1);

		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxView::Activate(bool)");
		}
		self->Activate(activate);

		return 0;
	}

	// bool wxView::Close(bool deleteWindow = true)
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxView::Close(bool deleteWindow = true) function, expected prototype:\nbool wxView::Close(bool deleteWindow = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool deleteWindow=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxView::Close(bool)");
		}
		bool lret = self->Close(deleteWindow);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDocument * wxView::GetDocument() const
	static int _bind_GetDocument(lua_State *L) {
		if (!_lg_typecheck_GetDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocument * wxView::GetDocument() const function, expected prototype:\nwxDocument * wxView::GetDocument() const\nClass arguments details:\n");
		}


		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocument * wxView::GetDocument() const");
		}
		wxDocument * lret = self->GetDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxDocManager * wxView::GetDocumentManager() const
	static int _bind_GetDocumentManager(lua_State *L) {
		if (!_lg_typecheck_GetDocumentManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocManager * wxView::GetDocumentManager() const function, expected prototype:\nwxDocManager * wxView::GetDocumentManager() const\nClass arguments details:\n");
		}


		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocManager * wxView::GetDocumentManager() const");
		}
		wxDocManager * lret = self->GetDocumentManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocManager >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxView::GetFrame() const
	static int _bind_GetFrame(lua_State *L) {
		if (!_lg_typecheck_GetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxView::GetFrame() const function, expected prototype:\nwxWindow * wxView::GetFrame() const\nClass arguments details:\n");
		}


		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxView::GetFrame() const");
		}
		wxWindow * lret = self->GetFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxString wxView::GetViewName() const
	static int _bind_GetViewName(lua_State *L) {
		if (!_lg_typecheck_GetViewName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxView::GetViewName() const function, expected prototype:\nwxString wxView::GetViewName() const\nClass arguments details:\n");
		}


		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxView::GetViewName() const");
		}
		wxString lret = self->GetViewName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxView::OnActivateView(bool activate, wxView * activeView, wxView * deactiveView)
	static int _bind_OnActivateView(lua_State *L) {
		if (!_lg_typecheck_OnActivateView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxView::OnActivateView(bool activate, wxView * activeView, wxView * deactiveView) function, expected prototype:\nvoid wxView::OnActivateView(bool activate, wxView * activeView, wxView * deactiveView)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\n");
		}

		bool activate=(bool)(lua_toboolean(L,2)==1);
		wxView* activeView=dynamic_cast< wxView* >(Luna< wxObject >::check(L,3));
		wxView* deactiveView=dynamic_cast< wxView* >(Luna< wxObject >::check(L,4));

		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxView::OnActivateView(bool, wxView *, wxView *)");
		}
		self->OnActivateView(activate, activeView, deactiveView);

		return 0;
	}

	// void wxView::OnChangeFilename()
	static int _bind_OnChangeFilename(lua_State *L) {
		if (!_lg_typecheck_OnChangeFilename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxView::OnChangeFilename() function, expected prototype:\nvoid wxView::OnChangeFilename()\nClass arguments details:\n");
		}


		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxView::OnChangeFilename()");
		}
		self->OnChangeFilename();

		return 0;
	}

	// bool wxView::OnClose(bool deleteWindow)
	static int _bind_OnClose(lua_State *L) {
		if (!_lg_typecheck_OnClose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxView::OnClose(bool deleteWindow) function, expected prototype:\nbool wxView::OnClose(bool deleteWindow)\nClass arguments details:\n");
		}

		bool deleteWindow=(bool)(lua_toboolean(L,2)==1);

		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxView::OnClose(bool)");
		}
		bool lret = self->OnClose(deleteWindow);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxView::OnClosingDocument()
	static int _bind_OnClosingDocument(lua_State *L) {
		if (!_lg_typecheck_OnClosingDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxView::OnClosingDocument() function, expected prototype:\nvoid wxView::OnClosingDocument()\nClass arguments details:\n");
		}


		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxView::OnClosingDocument()");
		}
		self->OnClosingDocument();

		return 0;
	}

	// bool wxView::OnCreate(wxDocument * doc, long flags)
	static int _bind_OnCreate(lua_State *L) {
		if (!_lg_typecheck_OnCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxView::OnCreate(wxDocument * doc, long flags) function, expected prototype:\nbool wxView::OnCreate(wxDocument * doc, long flags)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,2));
		long flags=(long)lua_tointeger(L,3);

		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxView::OnCreate(wxDocument *, long)");
		}
		bool lret = self->OnCreate(doc, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxView::OnDraw(wxDC * dc)
	static int _bind_OnDraw(lua_State *L) {
		if (!_lg_typecheck_OnDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxView::OnDraw(wxDC * dc) function, expected prototype:\nvoid wxView::OnDraw(wxDC * dc)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDC* dc=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));

		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxView::OnDraw(wxDC *)");
		}
		self->OnDraw(dc);

		return 0;
	}

	// void wxView::OnUpdate(wxView * sender, wxObject * hint = 0)
	static int _bind_OnUpdate(lua_State *L) {
		if (!_lg_typecheck_OnUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxView::OnUpdate(wxView * sender, wxObject * hint = 0) function, expected prototype:\nvoid wxView::OnUpdate(wxView * sender, wxObject * hint = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxView* sender=dynamic_cast< wxView* >(Luna< wxObject >::check(L,2));
		wxObject* hint=luatop>2 ? (Luna< wxObject >::check(L,3)) : (wxObject*)0;

		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxView::OnUpdate(wxView *, wxObject *)");
		}
		self->OnUpdate(sender, hint);

		return 0;
	}

	// void wxView::SetDocument(wxDocument * doc)
	static int _bind_SetDocument(lua_State *L) {
		if (!_lg_typecheck_SetDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxView::SetDocument(wxDocument * doc) function, expected prototype:\nvoid wxView::SetDocument(wxDocument * doc)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDocument* doc=dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,2));

		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxView::SetDocument(wxDocument *)");
		}
		self->SetDocument(doc);

		return 0;
	}

	// void wxView::SetFrame(wxWindow * frame)
	static int _bind_SetFrame(lua_State *L) {
		if (!_lg_typecheck_SetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxView::SetFrame(wxWindow * frame) function, expected prototype:\nvoid wxView::SetFrame(wxWindow * frame)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* frame=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxView::SetFrame(wxWindow *)");
		}
		self->SetFrame(frame);

		return 0;
	}

	// void wxView::SetViewName(const wxString & name)
	static int _bind_SetViewName(lua_State *L) {
		if (!_lg_typecheck_SetViewName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxView::SetViewName(const wxString & name) function, expected prototype:\nvoid wxView::SetViewName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxView* self=dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxView::SetViewName(const wxString &)");
		}
		self->SetViewName(name);

		return 0;
	}


	// Operator binds:

};

wxView* LunaTraits< wxView >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxView::OnDraw(wxDC * dc)

	// Abstract operators:
}

void LunaTraits< wxView >::_bind_dtor(wxView* obj) {
	delete obj;
}

const char LunaTraits< wxView >::className[] = "wxView";
const char LunaTraits< wxView >::fullName[] = "wxView";
const char LunaTraits< wxView >::moduleName[] = "wx";
const char* LunaTraits< wxView >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxView >::hash = 20357491;
const int LunaTraits< wxView >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxView >::methods[] = {
	{"Activate", &luna_wrapper_wxView::_bind_Activate},
	{"Close", &luna_wrapper_wxView::_bind_Close},
	{"GetDocument", &luna_wrapper_wxView::_bind_GetDocument},
	{"GetDocumentManager", &luna_wrapper_wxView::_bind_GetDocumentManager},
	{"GetFrame", &luna_wrapper_wxView::_bind_GetFrame},
	{"GetViewName", &luna_wrapper_wxView::_bind_GetViewName},
	{"OnActivateView", &luna_wrapper_wxView::_bind_OnActivateView},
	{"OnChangeFilename", &luna_wrapper_wxView::_bind_OnChangeFilename},
	{"OnClose", &luna_wrapper_wxView::_bind_OnClose},
	{"OnClosingDocument", &luna_wrapper_wxView::_bind_OnClosingDocument},
	{"OnCreate", &luna_wrapper_wxView::_bind_OnCreate},
	{"OnDraw", &luna_wrapper_wxView::_bind_OnDraw},
	{"OnUpdate", &luna_wrapper_wxView::_bind_OnUpdate},
	{"SetDocument", &luna_wrapper_wxView::_bind_SetDocument},
	{"SetFrame", &luna_wrapper_wxView::_bind_SetFrame},
	{"SetViewName", &luna_wrapper_wxView::_bind_SetViewName},
	{0,0}
};

luna_ConverterType LunaTraits< wxView >::converters[] = {
	{"wxObject", &luna_wrapper_wxView::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxView >::enumValues[] = {
	{0,0}
};


