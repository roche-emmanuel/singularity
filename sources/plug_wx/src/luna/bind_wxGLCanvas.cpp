#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGLCanvas.h>

class luna_wrapper_wxGLCanvas {
public:
	typedef Luna< wxGLCanvas > luna_t;

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
		wxGLCanvas* ptr= dynamic_cast< wxGLCanvas* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGLCanvas >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!dynamic_cast< wxPalette* >(Luna< wxObject >::check(L,8))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>8 && (!dynamic_cast< wxPalette* >(Luna< wxObject >::check(L,9))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCurrent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsDisplaySupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExtensionSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGLCanvas::wxGLCanvas(wxWindow * parent, int id = ::wxID_ANY, const int * attribList = NULL, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = "GLCanvas", const wxPalette & palette = wxNullPalette)
	static wxGLCanvas* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGLCanvas::wxGLCanvas(wxWindow * parent, int id = ::wxID_ANY, const int * attribList = NULL, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = \"GLCanvas\", const wxPalette & palette = wxNullPalette) function, expected prototype:\nwxGLCanvas::wxGLCanvas(wxWindow * parent, int id = ::wxID_ANY, const int * attribList = NULL, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = \"GLCanvas\", const wxPalette & palette = wxNullPalette)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\narg 8 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : ::wxID_ANY;
		int attribList=luatop>2 ? (int)lua_tointeger(L,3) : NULL;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGLCanvas::wxGLCanvas function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGLCanvas::wxGLCanvas function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));
		const wxPalette* palette_ptr=luatop>7 ? dynamic_cast< wxPalette* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !palette_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg palette in wxGLCanvas::wxGLCanvas function");
		}
		const wxPalette & palette=luatop>7 ? *palette_ptr : wxNullPalette;

		return new wxGLCanvas(parent, id, &attribList, pos, size, style, name, palette);
	}

	// wxGLCanvas::wxGLCanvas(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const int * attribList = NULL, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = "GLCanvas", const wxPalette & palette = wxNullPalette)
	static wxGLCanvas* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGLCanvas::wxGLCanvas(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const int * attribList = NULL, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = \"GLCanvas\", const wxPalette & palette = wxNullPalette) function, expected prototype:\nwxGLCanvas::wxGLCanvas(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const int * attribList = NULL, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = \"GLCanvas\", const wxPalette & palette = wxNullPalette)\nClass arguments details:\narg 2 ID = 56813631\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\narg 9 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : ::wxID_ANY;
		int attribList=luatop>3 ? (int)lua_tointeger(L,4) : NULL;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGLCanvas::wxGLCanvas function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGLCanvas::wxGLCanvas function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));
		const wxPalette* palette_ptr=luatop>8 ? dynamic_cast< wxPalette* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !palette_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg palette in wxGLCanvas::wxGLCanvas function");
		}
		const wxPalette & palette=luatop>8 ? *palette_ptr : wxNullPalette;

		return new wrapper_wxGLCanvas(L,NULL, parent, id, &attribList, pos, size, style, name, palette);
	}

	// Overload binder for wxGLCanvas::wxGLCanvas
	static wxGLCanvas* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGLCanvas, cannot match any of the overloads for function wxGLCanvas:\n  wxGLCanvas(wxWindow *, int, const int *, const wxPoint &, const wxSize &, long, const wxString &, const wxPalette &)\n  wxGLCanvas(lua_Table *, wxWindow *, int, const int *, const wxPoint &, const wxSize &, long, const wxString &, const wxPalette &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxGLCanvas::SetColour(const wxString & colour)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGLCanvas::SetColour(const wxString & colour) function, expected prototype:\nbool wxGLCanvas::SetColour(const wxString & colour)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString colour(lua_tostring(L,2),lua_objlen(L,2));

		wxGLCanvas* self=dynamic_cast< wxGLCanvas* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGLCanvas::SetColour(const wxString &)");
		}
		bool lret = self->SetColour(colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGLCanvas::SetCurrent(const wxGLContext & context) const
	static int _bind_SetCurrent(lua_State *L) {
		if (!_lg_typecheck_SetCurrent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGLCanvas::SetCurrent(const wxGLContext & context) const function, expected prototype:\nbool wxGLCanvas::SetCurrent(const wxGLContext & context) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxGLContext* context_ptr=dynamic_cast< wxGLContext* >(Luna< wxObject >::check(L,2));
		if( !context_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg context in wxGLCanvas::SetCurrent function");
		}
		const wxGLContext & context=*context_ptr;

		wxGLCanvas* self=dynamic_cast< wxGLCanvas* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGLCanvas::SetCurrent(const wxGLContext &) const");
		}
		bool lret = self->SetCurrent(context);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxGLCanvas::IsDisplaySupported(const int * attribList)
	static int _bind_IsDisplaySupported(lua_State *L) {
		if (!_lg_typecheck_IsDisplaySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxGLCanvas::IsDisplaySupported(const int * attribList) function, expected prototype:\nstatic bool wxGLCanvas::IsDisplaySupported(const int * attribList)\nClass arguments details:\n");
		}

		int attribList=(int)lua_tointeger(L,1);

		bool lret = wxGLCanvas::IsDisplaySupported(&attribList);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxGLCanvas::IsExtensionSupported(const char * extension)
	static int _bind_IsExtensionSupported(lua_State *L) {
		if (!_lg_typecheck_IsExtensionSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxGLCanvas::IsExtensionSupported(const char * extension) function, expected prototype:\nstatic bool wxGLCanvas::IsExtensionSupported(const char * extension)\nClass arguments details:\n");
		}

		const char * extension=(const char *)lua_tostring(L,1);

		bool lret = wxGLCanvas::IsExtensionSupported(extension);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxGLCanvas* LunaTraits< wxGLCanvas >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGLCanvas::_bind_ctor(L);
}

void LunaTraits< wxGLCanvas >::_bind_dtor(wxGLCanvas* obj) {
	delete obj;
}

const char LunaTraits< wxGLCanvas >::className[] = "wxGLCanvas";
const char LunaTraits< wxGLCanvas >::fullName[] = "wxGLCanvas";
const char LunaTraits< wxGLCanvas >::moduleName[] = "wx";
const char* LunaTraits< wxGLCanvas >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxGLCanvas >::hash = 52022100;
const int LunaTraits< wxGLCanvas >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxGLCanvas >::methods[] = {
	{"SetColour", &luna_wrapper_wxGLCanvas::_bind_SetColour},
	{"SetCurrent", &luna_wrapper_wxGLCanvas::_bind_SetCurrent},
	{"IsDisplaySupported", &luna_wrapper_wxGLCanvas::_bind_IsDisplaySupported},
	{"IsExtensionSupported", &luna_wrapper_wxGLCanvas::_bind_IsExtensionSupported},
	{"__eq", &luna_wrapper_wxGLCanvas::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGLCanvas >::converters[] = {
	{"wxObject", &luna_wrapper_wxGLCanvas::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGLCanvas >::enumValues[] = {
	{0,0}
};


