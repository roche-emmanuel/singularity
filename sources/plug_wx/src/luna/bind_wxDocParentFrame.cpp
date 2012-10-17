#include <plug_common.h>

class luna_wrapper_wxDocParentFrame {
public:
	typedef Luna< wxDocParentFrame > luna_t;

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
		wxDocParentFrame* ptr= dynamic_cast< wxDocParentFrame* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocParentFrame >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_GetDocumentManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDocParentFrame::wxDocParentFrame()
	static wxDocParentFrame* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocParentFrame::wxDocParentFrame() function, expected prototype:\nwxDocParentFrame::wxDocParentFrame()\nClass arguments details:\n");
		}


		return new wxDocParentFrame();
	}

	// wxDocParentFrame::wxDocParentFrame(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static wxDocParentFrame* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocParentFrame::wxDocParentFrame(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxDocParentFrame::wxDocParentFrame(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxDocManager* manager=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		wxFrame* parent=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDocParentFrame::wxDocParentFrame function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocParentFrame::wxDocParentFrame function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxDocParentFrame(manager, parent, id, title, pos, size, style, name);
	}

	// Overload binder for wxDocParentFrame::wxDocParentFrame
	static wxDocParentFrame* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDocParentFrame, cannot match any of the overloads for function wxDocParentFrame:\n  wxDocParentFrame()\n  wxDocParentFrame(wxDocManager *, wxFrame *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxDocParentFrame::Create(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 541072960, const wxString & name = wxFrameNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDocParentFrame::Create(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 541072960, const wxString & name = wxFrameNameStr) function, expected prototype:\nbool wxDocParentFrame::Create(wxDocManager * manager, wxFrame * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 541072960, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxDocManager* manager=dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,2));
		wxFrame* parent=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,3));
		int id=(int)lua_tointeger(L,4);
		wxString title(lua_tostring(L,5),lua_objlen(L,5));
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDocParentFrame::Create function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDocParentFrame::Create function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : 541072960;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxDocParentFrame* self=dynamic_cast< wxDocParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDocParentFrame::Create(wxDocManager *, wxFrame *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(manager, parent, id, title, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDocManager * wxDocParentFrame::GetDocumentManager() const
	static int _bind_GetDocumentManager(lua_State *L) {
		if (!_lg_typecheck_GetDocumentManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDocManager * wxDocParentFrame::GetDocumentManager() const function, expected prototype:\nwxDocManager * wxDocParentFrame::GetDocumentManager() const\nClass arguments details:\n");
		}


		wxDocParentFrame* self=dynamic_cast< wxDocParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDocManager * wxDocParentFrame::GetDocumentManager() const");
		}
		wxDocManager * lret = self->GetDocumentManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocManager >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxDocParentFrame* LunaTraits< wxDocParentFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDocParentFrame::_bind_ctor(L);
}

void LunaTraits< wxDocParentFrame >::_bind_dtor(wxDocParentFrame* obj) {
	delete obj;
}

const char LunaTraits< wxDocParentFrame >::className[] = "wxDocParentFrame";
const char LunaTraits< wxDocParentFrame >::fullName[] = "wxDocParentFrame";
const char LunaTraits< wxDocParentFrame >::moduleName[] = "wx";
const char* LunaTraits< wxDocParentFrame >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxDocParentFrame >::hash = 12251630;
const int LunaTraits< wxDocParentFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDocParentFrame >::methods[] = {
	{"Create", &luna_wrapper_wxDocParentFrame::_bind_Create},
	{"GetDocumentManager", &luna_wrapper_wxDocParentFrame::_bind_GetDocumentManager},
	{"__eq", &luna_wrapper_wxDocParentFrame::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDocParentFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxDocParentFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDocParentFrame >::enumValues[] = {
	{0,0}
};


