#include <plug_common.h>

class luna_wrapper_wxExtHelpController {
public:
	typedef Luna< wxExtHelpController > luna_t;

	// Derived class converters:
	static int _cast_from_wxHelpController(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxExtHelpController* ptr= dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxExtHelpController >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_SetViewer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisplaySection_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisplaySection_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisplayBlock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_KeywordSearch(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Quit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnQuit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DisplayHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFrameParameters(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFrameParameters(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,20268751)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25723480)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxExtHelpController::wxExtHelpController(wxWindow * parentWindow = NULL)
	static wxExtHelpController* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxExtHelpController::wxExtHelpController(wxWindow * parentWindow = NULL) function, expected prototype:\nwxExtHelpController::wxExtHelpController(wxWindow * parentWindow = NULL)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parentWindow=luatop>0 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) : (wxWindow*)NULL;

		return new wxExtHelpController(parentWindow);
	}


	// Function binds:
	// void wxExtHelpController::SetViewer(const wxString & viewer = wxEmptyString, long flags = wxHELP_NETSCAPE)
	static int _bind_SetViewer(lua_State *L) {
		if (!_lg_typecheck_SetViewer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxExtHelpController::SetViewer(const wxString & viewer = wxEmptyString, long flags = wxHELP_NETSCAPE) function, expected prototype:\nvoid wxExtHelpController::SetViewer(const wxString & viewer = wxEmptyString, long flags = wxHELP_NETSCAPE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString viewer(lua_tostring(L,2),lua_objlen(L,2));
		long flags=luatop>2 ? (long)lua_tointeger(L,3) : wxHELP_NETSCAPE;

		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxExtHelpController::SetViewer(const wxString &, long)");
		}
		self->SetViewer(viewer, flags);

		return 0;
	}

	// bool wxExtHelpController::Initialize(const wxString & dir)
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxExtHelpController::Initialize(const wxString & dir) function, expected prototype:\nbool wxExtHelpController::Initialize(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));

		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxExtHelpController::Initialize(const wxString &)");
		}
		bool lret = self->Initialize(dir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxExtHelpController::LoadFile(const wxString & file = wxEmptyString)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxExtHelpController::LoadFile(const wxString & file = wxEmptyString) function, expected prototype:\nbool wxExtHelpController::LoadFile(const wxString & file = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString file(lua_tostring(L,2),lua_objlen(L,2));

		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxExtHelpController::LoadFile(const wxString &)");
		}
		bool lret = self->LoadFile(file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxExtHelpController::DisplaySection(int sectionNo)
	static int _bind_DisplaySection_overload_1(lua_State *L) {
		if (!_lg_typecheck_DisplaySection_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxExtHelpController::DisplaySection(int sectionNo) function, expected prototype:\nbool wxExtHelpController::DisplaySection(int sectionNo)\nClass arguments details:\n");
		}

		int sectionNo=(int)lua_tointeger(L,2);

		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxExtHelpController::DisplaySection(int)");
		}
		bool lret = self->DisplaySection(sectionNo);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxExtHelpController::DisplaySection(const wxString & section)
	static int _bind_DisplaySection_overload_2(lua_State *L) {
		if (!_lg_typecheck_DisplaySection_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxExtHelpController::DisplaySection(const wxString & section) function, expected prototype:\nbool wxExtHelpController::DisplaySection(const wxString & section)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString section(lua_tostring(L,2),lua_objlen(L,2));

		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxExtHelpController::DisplaySection(const wxString &)");
		}
		bool lret = self->DisplaySection(section);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxExtHelpController::DisplaySection
	static int _bind_DisplaySection(lua_State *L) {
		if (_lg_typecheck_DisplaySection_overload_1(L)) return _bind_DisplaySection_overload_1(L);
		if (_lg_typecheck_DisplaySection_overload_2(L)) return _bind_DisplaySection_overload_2(L);

		luaL_error(L, "error in function DisplaySection, cannot match any of the overloads for function DisplaySection:\n  DisplaySection(int)\n  DisplaySection(const wxString &)\n");
		return 0;
	}

	// bool wxExtHelpController::DisplayBlock(long blockNo)
	static int _bind_DisplayBlock(lua_State *L) {
		if (!_lg_typecheck_DisplayBlock(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxExtHelpController::DisplayBlock(long blockNo) function, expected prototype:\nbool wxExtHelpController::DisplayBlock(long blockNo)\nClass arguments details:\n");
		}

		long blockNo=(long)lua_tointeger(L,2);

		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxExtHelpController::DisplayBlock(long)");
		}
		bool lret = self->DisplayBlock(blockNo);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxExtHelpController::KeywordSearch(const wxString & k, wxHelpSearchMode mode = wxHELP_SEARCH_ALL)
	static int _bind_KeywordSearch(lua_State *L) {
		if (!_lg_typecheck_KeywordSearch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxExtHelpController::KeywordSearch(const wxString & k, wxHelpSearchMode mode = wxHELP_SEARCH_ALL) function, expected prototype:\nbool wxExtHelpController::KeywordSearch(const wxString & k, wxHelpSearchMode mode = wxHELP_SEARCH_ALL)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString k(lua_tostring(L,2),lua_objlen(L,2));
		wxHelpSearchMode mode=luatop>2 ? (wxHelpSearchMode)lua_tointeger(L,3) : wxHELP_SEARCH_ALL;

		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxExtHelpController::KeywordSearch(const wxString &, wxHelpSearchMode)");
		}
		bool lret = self->KeywordSearch(k, mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxExtHelpController::Quit()
	static int _bind_Quit(lua_State *L) {
		if (!_lg_typecheck_Quit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxExtHelpController::Quit() function, expected prototype:\nbool wxExtHelpController::Quit()\nClass arguments details:\n");
		}


		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxExtHelpController::Quit()");
		}
		bool lret = self->Quit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxExtHelpController::OnQuit()
	static int _bind_OnQuit(lua_State *L) {
		if (!_lg_typecheck_OnQuit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxExtHelpController::OnQuit() function, expected prototype:\nvoid wxExtHelpController::OnQuit()\nClass arguments details:\n");
		}


		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxExtHelpController::OnQuit()");
		}
		self->OnQuit();

		return 0;
	}

	// bool wxExtHelpController::DisplayHelp(const wxString & )
	static int _bind_DisplayHelp(lua_State *L) {
		if (!_lg_typecheck_DisplayHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxExtHelpController::DisplayHelp(const wxString & ) function, expected prototype:\nbool wxExtHelpController::DisplayHelp(const wxString & )\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString _arg1(lua_tostring(L,2),lua_objlen(L,2));

		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxExtHelpController::DisplayHelp(const wxString &)");
		}
		bool lret = self->DisplayHelp(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxExtHelpController::SetFrameParameters(const wxString & title, const wxSize & size, const wxPoint & pos = wxDefaultPosition, bool newFrameEachTime = false)
	static int _bind_SetFrameParameters(lua_State *L) {
		if (!_lg_typecheck_SetFrameParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxExtHelpController::SetFrameParameters(const wxString & title, const wxSize & size, const wxPoint & pos = wxDefaultPosition, bool newFrameEachTime = false) function, expected prototype:\nvoid wxExtHelpController::SetFrameParameters(const wxString & title, const wxSize & size, const wxPoint & pos = wxDefaultPosition, bool newFrameEachTime = false)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 20268751\narg 3 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,2),lua_objlen(L,2));
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxExtHelpController::SetFrameParameters function");
		}
		const wxSize & size=*size_ptr;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxExtHelpController::SetFrameParameters function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		bool newFrameEachTime=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxExtHelpController::SetFrameParameters(const wxString &, const wxSize &, const wxPoint &, bool)");
		}
		self->SetFrameParameters(title, size, pos, newFrameEachTime);

		return 0;
	}

	// wxFrame * wxExtHelpController::GetFrameParameters(wxSize * size = NULL, wxPoint * pos = NULL, bool * newFrameEachTime = NULL)
	static int _bind_GetFrameParameters(lua_State *L) {
		if (!_lg_typecheck_GetFrameParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFrame * wxExtHelpController::GetFrameParameters(wxSize * size = NULL, wxPoint * pos = NULL, bool * newFrameEachTime = NULL) function, expected prototype:\nwxFrame * wxExtHelpController::GetFrameParameters(wxSize * size = NULL, wxPoint * pos = NULL, bool * newFrameEachTime = NULL)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxSize* size=luatop>1 ? (Luna< wxSize >::check(L,2)) : (wxSize*)NULL;
		wxPoint* pos=luatop>2 ? (Luna< wxPoint >::check(L,3)) : (wxPoint*)NULL;
		bool newFrameEachTime=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : NULL;

		wxExtHelpController* self=dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFrame * wxExtHelpController::GetFrameParameters(wxSize *, wxPoint *, bool *)");
		}
		wxFrame * lret = self->GetFrameParameters(size, pos, &newFrameEachTime);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFrame >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxExtHelpController* LunaTraits< wxExtHelpController >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxExtHelpController::_bind_ctor(L);
}

void LunaTraits< wxExtHelpController >::_bind_dtor(wxExtHelpController* obj) {
	delete obj;
}

const char LunaTraits< wxExtHelpController >::className[] = "wxExtHelpController";
const char LunaTraits< wxExtHelpController >::fullName[] = "wxExtHelpController";
const char LunaTraits< wxExtHelpController >::moduleName[] = "wx";
const char* LunaTraits< wxExtHelpController >::parents[] = {"wx.wxHelpController", 0};
const int LunaTraits< wxExtHelpController >::hash = 16544864;
const int LunaTraits< wxExtHelpController >::uniqueIDs[] = {15941327,0};

luna_RegType LunaTraits< wxExtHelpController >::methods[] = {
	{"SetViewer", &luna_wrapper_wxExtHelpController::_bind_SetViewer},
	{"Initialize", &luna_wrapper_wxExtHelpController::_bind_Initialize},
	{"LoadFile", &luna_wrapper_wxExtHelpController::_bind_LoadFile},
	{"DisplaySection", &luna_wrapper_wxExtHelpController::_bind_DisplaySection},
	{"DisplayBlock", &luna_wrapper_wxExtHelpController::_bind_DisplayBlock},
	{"KeywordSearch", &luna_wrapper_wxExtHelpController::_bind_KeywordSearch},
	{"Quit", &luna_wrapper_wxExtHelpController::_bind_Quit},
	{"OnQuit", &luna_wrapper_wxExtHelpController::_bind_OnQuit},
	{"DisplayHelp", &luna_wrapper_wxExtHelpController::_bind_DisplayHelp},
	{"SetFrameParameters", &luna_wrapper_wxExtHelpController::_bind_SetFrameParameters},
	{"GetFrameParameters", &luna_wrapper_wxExtHelpController::_bind_GetFrameParameters},
	{0,0}
};

luna_ConverterType LunaTraits< wxExtHelpController >::converters[] = {
	{"wxHelpController", &luna_wrapper_wxExtHelpController::_cast_from_wxHelpController},
	{0,0}
};

luna_RegEnumType LunaTraits< wxExtHelpController >::enumValues[] = {
	{0,0}
};


