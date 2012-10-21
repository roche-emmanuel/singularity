#include <plug_common.h>

class luna_wrapper_wxMiniFrame {
public:
	typedef Luna< wxMiniFrame > luna_t;

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
		wxMiniFrame* ptr= dynamic_cast< wxMiniFrame* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMiniFrame >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMiniFrame::wxMiniFrame()
	static wxMiniFrame* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMiniFrame::wxMiniFrame() function, expected prototype:\nwxMiniFrame::wxMiniFrame()\nClass arguments details:\n");
		}


		return new wxMiniFrame();
	}

	// wxMiniFrame::wxMiniFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAPTION | wxRESIZE_BORDER, const wxString & name = wxFrameNameStr)
	static wxMiniFrame* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMiniFrame::wxMiniFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAPTION | wxRESIZE_BORDER, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxMiniFrame::wxMiniFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAPTION | wxRESIZE_BORDER, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMiniFrame::wxMiniFrame function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMiniFrame::wxMiniFrame function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxCAPTION | wxRESIZE_BORDER;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxMiniFrame(parent, id, title, pos, size, style, name);
	}

	// Overload binder for wxMiniFrame::wxMiniFrame
	static wxMiniFrame* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMiniFrame, cannot match any of the overloads for function wxMiniFrame:\n  wxMiniFrame()\n  wxMiniFrame(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxMiniFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAPTION | wxRESIZE_BORDER, const wxString & name = wxFrameNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMiniFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAPTION | wxRESIZE_BORDER, const wxString & name = wxFrameNameStr) function, expected prototype:\nbool wxMiniFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCAPTION | wxRESIZE_BORDER, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMiniFrame::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMiniFrame::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxCAPTION | wxRESIZE_BORDER;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxMiniFrame* self=dynamic_cast< wxMiniFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMiniFrame::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, title, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxMiniFrame* LunaTraits< wxMiniFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMiniFrame::_bind_ctor(L);
}

void LunaTraits< wxMiniFrame >::_bind_dtor(wxMiniFrame* obj) {
	delete obj;
}

const char LunaTraits< wxMiniFrame >::className[] = "wxMiniFrame";
const char LunaTraits< wxMiniFrame >::fullName[] = "wxMiniFrame";
const char LunaTraits< wxMiniFrame >::moduleName[] = "wx";
const char* LunaTraits< wxMiniFrame >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxMiniFrame >::hash = 78874021;
const int LunaTraits< wxMiniFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMiniFrame >::methods[] = {
	{"Create", &luna_wrapper_wxMiniFrame::_bind_Create},
	{"__eq", &luna_wrapper_wxMiniFrame::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMiniFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxMiniFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMiniFrame >::enumValues[] = {
	{0,0}
};


