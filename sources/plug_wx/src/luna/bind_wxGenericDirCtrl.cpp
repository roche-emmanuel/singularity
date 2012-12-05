#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGenericDirCtrl.h>

class luna_wrapper_wxGenericDirCtrl {
public:
	typedef Luna< wxGenericDirCtrl > luna_t;

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
		wxGenericDirCtrl* ptr= dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGenericDirCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CollapsePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollapseTree(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ExpandPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilePaths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilterListCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPaths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRootId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTreeCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReCreateTree(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDefaultPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowHidden(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectPath(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectPaths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnselectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGenericDirCtrl::wxGenericDirCtrl()
	static wxGenericDirCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericDirCtrl::wxGenericDirCtrl() function, expected prototype:\nwxGenericDirCtrl::wxGenericDirCtrl()\nClass arguments details:\n");
		}


		return new wxGenericDirCtrl();
	}

	// wxGenericDirCtrl::wxGenericDirCtrl(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)
	static wxGenericDirCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericDirCtrl::wxGenericDirCtrl(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr) function, expected prototype:\nwxGenericDirCtrl::wxGenericDirCtrl(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : ::wxID_ANY;
		wxString dir(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGenericDirCtrl::wxGenericDirCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::wxGenericDirCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxDIRCTRL_3D_INTERNAL;
		wxString filter(lua_tostring(L,7),lua_objlen(L,7));
		int defaultFilter=luatop>7 ? (int)lua_tointeger(L,8) : 0;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxGenericDirCtrl(parent, id, dir, pos, size, style, filter, defaultFilter, name);
	}

	// wxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data)
	static wxGenericDirCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data) function, expected prototype:\nwxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxGenericDirCtrl(L,NULL);
	}

	// wxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data, wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)
	static wxGenericDirCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data, wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr) function, expected prototype:\nwxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data, wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		wxString dir(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGenericDirCtrl::wxGenericDirCtrl function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::wxGenericDirCtrl function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDIRCTRL_3D_INTERNAL;
		wxString filter(lua_tostring(L,8),lua_objlen(L,8));
		int defaultFilter=luatop>8 ? (int)lua_tointeger(L,9) : 0;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wrapper_wxGenericDirCtrl(L,NULL, parent, id, dir, pos, size, style, filter, defaultFilter, name);
	}

	// Overload binder for wxGenericDirCtrl::wxGenericDirCtrl
	static wxGenericDirCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxGenericDirCtrl, cannot match any of the overloads for function wxGenericDirCtrl:\n  wxGenericDirCtrl()\n  wxGenericDirCtrl(wxWindow *, const int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &, int, const wxString &)\n  wxGenericDirCtrl(lua_Table *)\n  wxGenericDirCtrl(lua_Table *, wxWindow *, const int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &, int, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxGenericDirCtrl::CollapsePath(const wxString & path)
	static int _bind_CollapsePath(lua_State *L) {
		if (!_lg_typecheck_CollapsePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::CollapsePath(const wxString & path) function, expected prototype:\nbool wxGenericDirCtrl::CollapsePath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::CollapsePath(const wxString &)");
		}
		bool lret = self->CollapsePath(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::CollapseTree()
	static int _bind_CollapseTree(lua_State *L) {
		if (!_lg_typecheck_CollapseTree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::CollapseTree() function, expected prototype:\nvoid wxGenericDirCtrl::CollapseTree()\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::CollapseTree()");
		}
		self->CollapseTree();

		return 0;
	}

	// bool wxGenericDirCtrl::Create(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::Create(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr) function, expected prototype:\nbool wxGenericDirCtrl::Create(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		wxString dir(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGenericDirCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDIRCTRL_3D_INTERNAL;
		wxString filter(lua_tostring(L,8),lua_objlen(L,8));
		int defaultFilter=luatop>8 ? (int)lua_tointeger(L,9) : 0;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::Create(wxWindow *, const int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &, int, const wxString &)");
		}
		bool lret = self->Create(parent, id, dir, pos, size, style, filter, defaultFilter, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::ExpandPath(const wxString & path)
	static int _bind_ExpandPath(lua_State *L) {
		if (!_lg_typecheck_ExpandPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::ExpandPath(const wxString & path) function, expected prototype:\nbool wxGenericDirCtrl::ExpandPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::ExpandPath(const wxString &)");
		}
		bool lret = self->ExpandPath(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGenericDirCtrl::GetDefaultPath() const
	static int _bind_GetDefaultPath(lua_State *L) {
		if (!_lg_typecheck_GetDefaultPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::GetDefaultPath() const function, expected prototype:\nwxString wxGenericDirCtrl::GetDefaultPath() const\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::GetDefaultPath() const");
		}
		wxString lret = self->GetDefaultPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxGenericDirCtrl::GetFilePath() const
	static int _bind_GetFilePath(lua_State *L) {
		if (!_lg_typecheck_GetFilePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::GetFilePath() const function, expected prototype:\nwxString wxGenericDirCtrl::GetFilePath() const\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::GetFilePath() const");
		}
		wxString lret = self->GetFilePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGenericDirCtrl::GetFilePaths(wxArrayString & paths) const
	static int _bind_GetFilePaths(lua_State *L) {
		if (!_lg_typecheck_GetFilePaths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::GetFilePaths(wxArrayString & paths) const function, expected prototype:\nvoid wxGenericDirCtrl::GetFilePaths(wxArrayString & paths) const\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxGenericDirCtrl::GetFilePaths function");
		}
		wxArrayString & paths=*paths_ptr;

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::GetFilePaths(wxArrayString &) const");
		}
		self->GetFilePaths(paths);

		return 0;
	}

	// wxString wxGenericDirCtrl::GetFilter() const
	static int _bind_GetFilter(lua_State *L) {
		if (!_lg_typecheck_GetFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::GetFilter() const function, expected prototype:\nwxString wxGenericDirCtrl::GetFilter() const\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::GetFilter() const");
		}
		wxString lret = self->GetFilter();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxGenericDirCtrl::GetFilterIndex() const
	static int _bind_GetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_GetFilterIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGenericDirCtrl::GetFilterIndex() const function, expected prototype:\nint wxGenericDirCtrl::GetFilterIndex() const\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGenericDirCtrl::GetFilterIndex() const");
		}
		int lret = self->GetFilterIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDirFilterListCtrl * wxGenericDirCtrl::GetFilterListCtrl() const
	static int _bind_GetFilterListCtrl(lua_State *L) {
		if (!_lg_typecheck_GetFilterListCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDirFilterListCtrl * wxGenericDirCtrl::GetFilterListCtrl() const function, expected prototype:\nwxDirFilterListCtrl * wxGenericDirCtrl::GetFilterListCtrl() const\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDirFilterListCtrl * wxGenericDirCtrl::GetFilterListCtrl() const");
		}
		wxDirFilterListCtrl * lret = self->GetFilterListCtrl();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxDirFilterListCtrl *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// wxString wxGenericDirCtrl::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::GetPath() const function, expected prototype:\nwxString wxGenericDirCtrl::GetPath() const\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::GetPath() const");
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGenericDirCtrl::GetPaths(wxArrayString & paths) const
	static int _bind_GetPaths(lua_State *L) {
		if (!_lg_typecheck_GetPaths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::GetPaths(wxArrayString & paths) const function, expected prototype:\nvoid wxGenericDirCtrl::GetPaths(wxArrayString & paths) const\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxGenericDirCtrl::GetPaths function");
		}
		wxArrayString & paths=*paths_ptr;

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::GetPaths(wxArrayString &) const");
		}
		self->GetPaths(paths);

		return 0;
	}

	// wxTreeItemId wxGenericDirCtrl::GetRootId()
	static int _bind_GetRootId(lua_State *L) {
		if (!_lg_typecheck_GetRootId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxGenericDirCtrl::GetRootId() function, expected prototype:\nwxTreeItemId wxGenericDirCtrl::GetRootId()\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeItemId wxGenericDirCtrl::GetRootId()");
		}
		wxTreeItemId stack_lret = self->GetRootId();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeCtrl * wxGenericDirCtrl::GetTreeCtrl() const
	static int _bind_GetTreeCtrl(lua_State *L) {
		if (!_lg_typecheck_GetTreeCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeCtrl * wxGenericDirCtrl::GetTreeCtrl() const function, expected prototype:\nwxTreeCtrl * wxGenericDirCtrl::GetTreeCtrl() const\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeCtrl * wxGenericDirCtrl::GetTreeCtrl() const");
		}
		wxTreeCtrl * lret = self->GetTreeCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeCtrl >::push(L,lret,false);

		return 1;
	}

	// void wxGenericDirCtrl::Init()
	static int _bind_Init(lua_State *L) {
		if (!_lg_typecheck_Init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::Init() function, expected prototype:\nvoid wxGenericDirCtrl::Init()\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::Init()");
		}
		self->Init();

		return 0;
	}

	// void wxGenericDirCtrl::ReCreateTree()
	static int _bind_ReCreateTree(lua_State *L) {
		if (!_lg_typecheck_ReCreateTree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::ReCreateTree() function, expected prototype:\nvoid wxGenericDirCtrl::ReCreateTree()\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::ReCreateTree()");
		}
		self->ReCreateTree();

		return 0;
	}

	// void wxGenericDirCtrl::SetDefaultPath(const wxString & path)
	static int _bind_SetDefaultPath(lua_State *L) {
		if (!_lg_typecheck_SetDefaultPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SetDefaultPath(const wxString & path) function, expected prototype:\nvoid wxGenericDirCtrl::SetDefaultPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SetDefaultPath(const wxString &)");
		}
		self->SetDefaultPath(path);

		return 0;
	}

	// void wxGenericDirCtrl::SetFilter(const wxString & filter)
	static int _bind_SetFilter(lua_State *L) {
		if (!_lg_typecheck_SetFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SetFilter(const wxString & filter) function, expected prototype:\nvoid wxGenericDirCtrl::SetFilter(const wxString & filter)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filter(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SetFilter(const wxString &)");
		}
		self->SetFilter(filter);

		return 0;
	}

	// void wxGenericDirCtrl::SetFilterIndex(int n)
	static int _bind_SetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_SetFilterIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SetFilterIndex(int n) function, expected prototype:\nvoid wxGenericDirCtrl::SetFilterIndex(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SetFilterIndex(int)");
		}
		self->SetFilterIndex(n);

		return 0;
	}

	// void wxGenericDirCtrl::SetPath(const wxString & path)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SetPath(const wxString & path) function, expected prototype:\nvoid wxGenericDirCtrl::SetPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SetPath(const wxString &)");
		}
		self->SetPath(path);

		return 0;
	}

	// void wxGenericDirCtrl::ShowHidden(bool show)
	static int _bind_ShowHidden(lua_State *L) {
		if (!_lg_typecheck_ShowHidden(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::ShowHidden(bool show) function, expected prototype:\nvoid wxGenericDirCtrl::ShowHidden(bool show)\nClass arguments details:\n");
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::ShowHidden(bool)");
		}
		self->ShowHidden(show);

		return 0;
	}

	// void wxGenericDirCtrl::SelectPath(const wxString & path, bool select = true)
	static int _bind_SelectPath(lua_State *L) {
		if (!_lg_typecheck_SelectPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SelectPath(const wxString & path, bool select = true) function, expected prototype:\nvoid wxGenericDirCtrl::SelectPath(const wxString & path, bool select = true)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		bool select=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SelectPath(const wxString &, bool)");
		}
		self->SelectPath(path, select);

		return 0;
	}

	// void wxGenericDirCtrl::SelectPaths(const wxArrayString & paths)
	static int _bind_SelectPaths(lua_State *L) {
		if (!_lg_typecheck_SelectPaths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SelectPaths(const wxArrayString & paths) function, expected prototype:\nvoid wxGenericDirCtrl::SelectPaths(const wxArrayString & paths)\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxGenericDirCtrl::SelectPaths function");
		}
		const wxArrayString & paths=*paths_ptr;

		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SelectPaths(const wxArrayString &)");
		}
		self->SelectPaths(paths);

		return 0;
	}

	// void wxGenericDirCtrl::UnselectAll()
	static int _bind_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_UnselectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::UnselectAll() function, expected prototype:\nvoid wxGenericDirCtrl::UnselectAll()\nClass arguments details:\n");
		}


		wxGenericDirCtrl* self=dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::UnselectAll()");
		}
		self->UnselectAll();

		return 0;
	}


	// Operator binds:

};

wxGenericDirCtrl* LunaTraits< wxGenericDirCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGenericDirCtrl::_bind_ctor(L);
}

void LunaTraits< wxGenericDirCtrl >::_bind_dtor(wxGenericDirCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxGenericDirCtrl >::className[] = "wxGenericDirCtrl";
const char LunaTraits< wxGenericDirCtrl >::fullName[] = "wxGenericDirCtrl";
const char LunaTraits< wxGenericDirCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxGenericDirCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxGenericDirCtrl >::hash = 51084573;
const int LunaTraits< wxGenericDirCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxGenericDirCtrl >::methods[] = {
	{"CollapsePath", &luna_wrapper_wxGenericDirCtrl::_bind_CollapsePath},
	{"CollapseTree", &luna_wrapper_wxGenericDirCtrl::_bind_CollapseTree},
	{"Create", &luna_wrapper_wxGenericDirCtrl::_bind_Create},
	{"ExpandPath", &luna_wrapper_wxGenericDirCtrl::_bind_ExpandPath},
	{"GetDefaultPath", &luna_wrapper_wxGenericDirCtrl::_bind_GetDefaultPath},
	{"GetFilePath", &luna_wrapper_wxGenericDirCtrl::_bind_GetFilePath},
	{"GetFilePaths", &luna_wrapper_wxGenericDirCtrl::_bind_GetFilePaths},
	{"GetFilter", &luna_wrapper_wxGenericDirCtrl::_bind_GetFilter},
	{"GetFilterIndex", &luna_wrapper_wxGenericDirCtrl::_bind_GetFilterIndex},
	{"GetFilterListCtrl", &luna_wrapper_wxGenericDirCtrl::_bind_GetFilterListCtrl},
	{"GetPath", &luna_wrapper_wxGenericDirCtrl::_bind_GetPath},
	{"GetPaths", &luna_wrapper_wxGenericDirCtrl::_bind_GetPaths},
	{"GetRootId", &luna_wrapper_wxGenericDirCtrl::_bind_GetRootId},
	{"GetTreeCtrl", &luna_wrapper_wxGenericDirCtrl::_bind_GetTreeCtrl},
	{"Init", &luna_wrapper_wxGenericDirCtrl::_bind_Init},
	{"ReCreateTree", &luna_wrapper_wxGenericDirCtrl::_bind_ReCreateTree},
	{"SetDefaultPath", &luna_wrapper_wxGenericDirCtrl::_bind_SetDefaultPath},
	{"SetFilter", &luna_wrapper_wxGenericDirCtrl::_bind_SetFilter},
	{"SetFilterIndex", &luna_wrapper_wxGenericDirCtrl::_bind_SetFilterIndex},
	{"SetPath", &luna_wrapper_wxGenericDirCtrl::_bind_SetPath},
	{"ShowHidden", &luna_wrapper_wxGenericDirCtrl::_bind_ShowHidden},
	{"SelectPath", &luna_wrapper_wxGenericDirCtrl::_bind_SelectPath},
	{"SelectPaths", &luna_wrapper_wxGenericDirCtrl::_bind_SelectPaths},
	{"UnselectAll", &luna_wrapper_wxGenericDirCtrl::_bind_UnselectAll},
	{"__eq", &luna_wrapper_wxGenericDirCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGenericDirCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxGenericDirCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGenericDirCtrl >::enumValues[] = {
	{0,0}
};


