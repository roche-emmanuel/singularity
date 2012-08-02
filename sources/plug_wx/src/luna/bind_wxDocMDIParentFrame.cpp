#include <plug_common.h>

class luna_wrapper_wxDocMDIParentFrame {
public:
	typedef Luna< wxDocMDIParentFrame > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDocMDIParentFrame* ptr= dynamic_cast< wxDocMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocMDIParentFrame >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDocMDIParentFrame::wxDocMDIParentFrame()
	static wxDocMDIParentFrame* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocMDIParentFrame::wxDocMDIParentFrame() function, expected prototype:\nwxDocMDIParentFrame::wxDocMDIParentFrame()\nClass arguments details:\n");
		}


		return new wxDocMDIParentFrame();
	}

	// wxDocMDIParentFrame::wxDocMDIParentFrame(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static wxDocMDIParentFrame* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocMDIParentFrame::wxDocMDIParentFrame(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxDocMDIParentFrame::wxDocMDIParentFrame(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxDocManager* manager=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		wxFrame* parent=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDocMDIParentFrame::wxDocMDIParentFrame function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIParentFrame::wxDocMDIParentFrame function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxDocMDIParentFrame(manager, parent, id, title, pos, size, style, name);
	}

	// Overload binder for wxDocMDIParentFrame::wxDocMDIParentFrame
	static wxDocMDIParentFrame* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDocMDIParentFrame, cannot match any of the overloads for function wxDocMDIParentFrame:\n  wxDocMDIParentFrame()\n  wxDocMDIParentFrame(wxDocManager *, wxFrame *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxDocMDIParentFrame::Create(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocMDIParentFrame::Create(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nbool wxDocMDIParentFrame::Create(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxDocManager* manager=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,2));
		wxFrame* parent=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,3));
		int id=(int)lua_tointeger(L,4);
		wxString title(lua_tostring(L,5),lua_objlen(L,5));
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDocMDIParentFrame::Create function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocMDIParentFrame::Create function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxDocMDIParentFrame* self=dynamic_cast< wxDocMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocMDIParentFrame::Create(wxDocManager *, wxFrame *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(manager, parent, id, title, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDocMDIParentFrame* LunaTraits< wxDocMDIParentFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDocMDIParentFrame::_bind_ctor(L);
}

void LunaTraits< wxDocMDIParentFrame >::_bind_dtor(wxDocMDIParentFrame* obj) {
	delete obj;
}

const char LunaTraits< wxDocMDIParentFrame >::className[] = "wxDocMDIParentFrame";
const char LunaTraits< wxDocMDIParentFrame >::fullName[] = "wxDocMDIParentFrame";
const char LunaTraits< wxDocMDIParentFrame >::moduleName[] = "wx";
const char* LunaTraits< wxDocMDIParentFrame >::parents[] = {"wx.wxMDIParentFrame", 0};
const int LunaTraits< wxDocMDIParentFrame >::hash = 510409;
const int LunaTraits< wxDocMDIParentFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDocMDIParentFrame >::methods[] = {
	{"Create", &luna_wrapper_wxDocMDIParentFrame::_bind_Create},
	{0,0}
};

luna_ConverterType LunaTraits< wxDocMDIParentFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxDocMDIParentFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDocMDIParentFrame >::enumValues[] = {
	{0,0}
};


