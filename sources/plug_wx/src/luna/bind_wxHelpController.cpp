#include <plug_common.h>

class luna_wrapper_wxHelpController {
public:
	typedef Luna< wxHelpController > luna_t;

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

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHelpController");
		
		return luna_dynamicCast(L,converters,"wxHelpController",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_DisplayBlock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisplayContents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DisplayContextPopup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisplaySection_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisplaySection_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisplayTextPopup(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
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

	inline static bool _lg_typecheck_GetParentWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Initialize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Initialize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_KeywordSearch(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Quit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_SetParentWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetViewer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHelpController::wxHelpController(wxWindow * parentWindow = NULL)
	static wxHelpController* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHelpController::wxHelpController(wxWindow * parentWindow = NULL) function, expected prototype:\nwxHelpController::wxHelpController(wxWindow * parentWindow = NULL)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parentWindow=luatop>0 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) : (wxWindow*)NULL;

		return new wxHelpController(parentWindow);
	}


	// Function binds:
	// bool wxHelpController::DisplayBlock(long blockNo)
	static int _bind_DisplayBlock(lua_State *L) {
		if (!_lg_typecheck_DisplayBlock(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpController::DisplayBlock(long blockNo) function, expected prototype:\nbool wxHelpController::DisplayBlock(long blockNo)\nClass arguments details:\n");
		}

		long blockNo=(long)lua_tointeger(L,2);

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpController::DisplayBlock(long)");
		}
		bool lret = self->DisplayBlock(blockNo);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHelpController::DisplayContents()
	static int _bind_DisplayContents(lua_State *L) {
		if (!_lg_typecheck_DisplayContents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpController::DisplayContents() function, expected prototype:\nbool wxHelpController::DisplayContents()\nClass arguments details:\n");
		}


		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpController::DisplayContents()");
		}
		bool lret = self->DisplayContents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHelpController::DisplayContextPopup(int contextId)
	static int _bind_DisplayContextPopup(lua_State *L) {
		if (!_lg_typecheck_DisplayContextPopup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpController::DisplayContextPopup(int contextId) function, expected prototype:\nbool wxHelpController::DisplayContextPopup(int contextId)\nClass arguments details:\n");
		}

		int contextId=(int)lua_tointeger(L,2);

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpController::DisplayContextPopup(int)");
		}
		bool lret = self->DisplayContextPopup(contextId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHelpController::DisplaySection(const wxString & section)
	static int _bind_DisplaySection_overload_1(lua_State *L) {
		if (!_lg_typecheck_DisplaySection_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpController::DisplaySection(const wxString & section) function, expected prototype:\nbool wxHelpController::DisplaySection(const wxString & section)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString section(lua_tostring(L,2),lua_objlen(L,2));

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpController::DisplaySection(const wxString &)");
		}
		bool lret = self->DisplaySection(section);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHelpController::DisplaySection(int sectionNo)
	static int _bind_DisplaySection_overload_2(lua_State *L) {
		if (!_lg_typecheck_DisplaySection_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpController::DisplaySection(int sectionNo) function, expected prototype:\nbool wxHelpController::DisplaySection(int sectionNo)\nClass arguments details:\n");
		}

		int sectionNo=(int)lua_tointeger(L,2);

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpController::DisplaySection(int)");
		}
		bool lret = self->DisplaySection(sectionNo);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxHelpController::DisplaySection
	static int _bind_DisplaySection(lua_State *L) {
		if (_lg_typecheck_DisplaySection_overload_1(L)) return _bind_DisplaySection_overload_1(L);
		if (_lg_typecheck_DisplaySection_overload_2(L)) return _bind_DisplaySection_overload_2(L);

		luaL_error(L, "error in function DisplaySection, cannot match any of the overloads for function DisplaySection:\n  DisplaySection(const wxString &)\n  DisplaySection(int)\n");
		return 0;
	}

	// bool wxHelpController::DisplayTextPopup(const wxString & text, const wxPoint & pos)
	static int _bind_DisplayTextPopup(lua_State *L) {
		if (!_lg_typecheck_DisplayTextPopup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpController::DisplayTextPopup(const wxString & text, const wxPoint & pos) function, expected prototype:\nbool wxHelpController::DisplayTextPopup(const wxString & text, const wxPoint & pos)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 25723480\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHelpController::DisplayTextPopup function");
		}
		const wxPoint & pos=*pos_ptr;

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpController::DisplayTextPopup(const wxString &, const wxPoint &)");
		}
		bool lret = self->DisplayTextPopup(text, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFrame * wxHelpController::GetFrameParameters(wxSize * size = NULL, wxPoint * pos = NULL, bool * newFrameEachTime = NULL)
	static int _bind_GetFrameParameters(lua_State *L) {
		if (!_lg_typecheck_GetFrameParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFrame * wxHelpController::GetFrameParameters(wxSize * size = NULL, wxPoint * pos = NULL, bool * newFrameEachTime = NULL) function, expected prototype:\nwxFrame * wxHelpController::GetFrameParameters(wxSize * size = NULL, wxPoint * pos = NULL, bool * newFrameEachTime = NULL)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxSize* size=luatop>1 ? (Luna< wxSize >::check(L,2)) : (wxSize*)NULL;
		wxPoint* pos=luatop>2 ? (Luna< wxPoint >::check(L,3)) : (wxPoint*)NULL;
		bool newFrameEachTime=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : NULL;

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFrame * wxHelpController::GetFrameParameters(wxSize *, wxPoint *, bool *)");
		}
		wxFrame * lret = self->GetFrameParameters(size, pos, &newFrameEachTime);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFrame >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxHelpController::GetParentWindow() const
	static int _bind_GetParentWindow(lua_State *L) {
		if (!_lg_typecheck_GetParentWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxHelpController::GetParentWindow() const function, expected prototype:\nwxWindow * wxHelpController::GetParentWindow() const\nClass arguments details:\n");
		}


		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxHelpController::GetParentWindow() const");
		}
		wxWindow * lret = self->GetParentWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// bool wxHelpController::Initialize(const wxString & file)
	static int _bind_Initialize_overload_1(lua_State *L) {
		if (!_lg_typecheck_Initialize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpController::Initialize(const wxString & file) function, expected prototype:\nbool wxHelpController::Initialize(const wxString & file)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString file(lua_tostring(L,2),lua_objlen(L,2));

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpController::Initialize(const wxString &)");
		}
		bool lret = self->Initialize(file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHelpController::Initialize(const wxString & file, int server)
	static int _bind_Initialize_overload_2(lua_State *L) {
		if (!_lg_typecheck_Initialize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpController::Initialize(const wxString & file, int server) function, expected prototype:\nbool wxHelpController::Initialize(const wxString & file, int server)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString file(lua_tostring(L,2),lua_objlen(L,2));
		int server=(int)lua_tointeger(L,3);

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpController::Initialize(const wxString &, int)");
		}
		bool lret = self->Initialize(file, server);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxHelpController::Initialize
	static int _bind_Initialize(lua_State *L) {
		if (_lg_typecheck_Initialize_overload_1(L)) return _bind_Initialize_overload_1(L);
		if (_lg_typecheck_Initialize_overload_2(L)) return _bind_Initialize_overload_2(L);

		luaL_error(L, "error in function Initialize, cannot match any of the overloads for function Initialize:\n  Initialize(const wxString &)\n  Initialize(const wxString &, int)\n");
		return 0;
	}

	// bool wxHelpController::KeywordSearch(const wxString & keyWord, wxHelpSearchMode mode = wxHELP_SEARCH_ALL)
	static int _bind_KeywordSearch(lua_State *L) {
		if (!_lg_typecheck_KeywordSearch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpController::KeywordSearch(const wxString & keyWord, wxHelpSearchMode mode = wxHELP_SEARCH_ALL) function, expected prototype:\nbool wxHelpController::KeywordSearch(const wxString & keyWord, wxHelpSearchMode mode = wxHELP_SEARCH_ALL)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString keyWord(lua_tostring(L,2),lua_objlen(L,2));
		wxHelpSearchMode mode=luatop>2 ? (wxHelpSearchMode)lua_tointeger(L,3) : wxHELP_SEARCH_ALL;

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpController::KeywordSearch(const wxString &, wxHelpSearchMode)");
		}
		bool lret = self->KeywordSearch(keyWord, mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHelpController::LoadFile(const wxString & file = wxEmptyString)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpController::LoadFile(const wxString & file = wxEmptyString) function, expected prototype:\nbool wxHelpController::LoadFile(const wxString & file = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString file(lua_tostring(L,2),lua_objlen(L,2));

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpController::LoadFile(const wxString &)");
		}
		bool lret = self->LoadFile(file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHelpController::Quit()
	static int _bind_Quit(lua_State *L) {
		if (!_lg_typecheck_Quit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHelpController::Quit() function, expected prototype:\nbool wxHelpController::Quit()\nClass arguments details:\n");
		}


		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHelpController::Quit()");
		}
		bool lret = self->Quit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHelpController::SetFrameParameters(const wxString & title, const wxSize & size, const wxPoint & pos = wxDefaultPosition, bool newFrameEachTime = false)
	static int _bind_SetFrameParameters(lua_State *L) {
		if (!_lg_typecheck_SetFrameParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpController::SetFrameParameters(const wxString & title, const wxSize & size, const wxPoint & pos = wxDefaultPosition, bool newFrameEachTime = false) function, expected prototype:\nvoid wxHelpController::SetFrameParameters(const wxString & title, const wxSize & size, const wxPoint & pos = wxDefaultPosition, bool newFrameEachTime = false)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 20268751\narg 3 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,2),lua_objlen(L,2));
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHelpController::SetFrameParameters function");
		}
		const wxSize & size=*size_ptr;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHelpController::SetFrameParameters function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		bool newFrameEachTime=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpController::SetFrameParameters(const wxString &, const wxSize &, const wxPoint &, bool)");
		}
		self->SetFrameParameters(title, size, pos, newFrameEachTime);

		return 0;
	}

	// void wxHelpController::SetParentWindow(wxWindow * parentWindow)
	static int _bind_SetParentWindow(lua_State *L) {
		if (!_lg_typecheck_SetParentWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpController::SetParentWindow(wxWindow * parentWindow) function, expected prototype:\nvoid wxHelpController::SetParentWindow(wxWindow * parentWindow)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* parentWindow=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpController::SetParentWindow(wxWindow *)");
		}
		self->SetParentWindow(parentWindow);

		return 0;
	}

	// void wxHelpController::SetViewer(const wxString & viewer, long flags)
	static int _bind_SetViewer(lua_State *L) {
		if (!_lg_typecheck_SetViewer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpController::SetViewer(const wxString & viewer, long flags) function, expected prototype:\nvoid wxHelpController::SetViewer(const wxString & viewer, long flags)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString viewer(lua_tostring(L,2),lua_objlen(L,2));
		long flags=(long)lua_tointeger(L,3);

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpController::SetViewer(const wxString &, long)");
		}
		self->SetViewer(viewer, flags);

		return 0;
	}


	// Operator binds:

};

wxHelpController* LunaTraits< wxHelpController >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHelpController::_bind_ctor(L);
}

void LunaTraits< wxHelpController >::_bind_dtor(wxHelpController* obj) {
	delete obj;
}

const char LunaTraits< wxHelpController >::className[] = "wxHelpController";
const char LunaTraits< wxHelpController >::fullName[] = "wxHelpController";
const char LunaTraits< wxHelpController >::moduleName[] = "wx";
const char* LunaTraits< wxHelpController >::parents[] = {0};
const int LunaTraits< wxHelpController >::hash = 15941327;
const int LunaTraits< wxHelpController >::uniqueIDs[] = {15941327,0};

luna_RegType LunaTraits< wxHelpController >::methods[] = {
	{"DisplayBlock", &luna_wrapper_wxHelpController::_bind_DisplayBlock},
	{"DisplayContents", &luna_wrapper_wxHelpController::_bind_DisplayContents},
	{"DisplayContextPopup", &luna_wrapper_wxHelpController::_bind_DisplayContextPopup},
	{"DisplaySection", &luna_wrapper_wxHelpController::_bind_DisplaySection},
	{"DisplayTextPopup", &luna_wrapper_wxHelpController::_bind_DisplayTextPopup},
	{"GetFrameParameters", &luna_wrapper_wxHelpController::_bind_GetFrameParameters},
	{"GetParentWindow", &luna_wrapper_wxHelpController::_bind_GetParentWindow},
	{"Initialize", &luna_wrapper_wxHelpController::_bind_Initialize},
	{"KeywordSearch", &luna_wrapper_wxHelpController::_bind_KeywordSearch},
	{"LoadFile", &luna_wrapper_wxHelpController::_bind_LoadFile},
	{"Quit", &luna_wrapper_wxHelpController::_bind_Quit},
	{"SetFrameParameters", &luna_wrapper_wxHelpController::_bind_SetFrameParameters},
	{"SetParentWindow", &luna_wrapper_wxHelpController::_bind_SetParentWindow},
	{"SetViewer", &luna_wrapper_wxHelpController::_bind_SetViewer},
	{"dynCast", &luna_wrapper_wxHelpController::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxHelpController >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHelpController >::enumValues[] = {
	{0,0}
};

