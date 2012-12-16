#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlDCRenderer.h>

class luna_wrapper_wxHtmlDCRenderer {
public:
	typedef Luna< wxHtmlDCRenderer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxHtmlDCRenderer* ptr= dynamic_cast< wxHtmlDCRenderer* >(Luna< wxObject >::check(L,1));
		wxHtmlDCRenderer* ptr= luna_caster< wxObject, wxHtmlDCRenderer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlDCRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetTotalWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTotalHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Render(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47342076) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDC(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFonts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStandardFonts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHtmlText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlDCRenderer::wxHtmlDCRenderer()
	static wxHtmlDCRenderer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlDCRenderer::wxHtmlDCRenderer() function, expected prototype:\nwxHtmlDCRenderer::wxHtmlDCRenderer()\nClass arguments details:\n");
		}


		return new wxHtmlDCRenderer();
	}

	// wxHtmlDCRenderer::wxHtmlDCRenderer(lua_Table * data)
	static wxHtmlDCRenderer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlDCRenderer::wxHtmlDCRenderer(lua_Table * data) function, expected prototype:\nwxHtmlDCRenderer::wxHtmlDCRenderer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxHtmlDCRenderer(L,NULL);
	}

	// Overload binder for wxHtmlDCRenderer::wxHtmlDCRenderer
	static wxHtmlDCRenderer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlDCRenderer, cannot match any of the overloads for function wxHtmlDCRenderer:\n  wxHtmlDCRenderer()\n  wxHtmlDCRenderer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// int wxHtmlDCRenderer::GetTotalWidth() const
	static int _bind_GetTotalWidth(lua_State *L) {
		if (!_lg_typecheck_GetTotalWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlDCRenderer::GetTotalWidth() const function, expected prototype:\nint wxHtmlDCRenderer::GetTotalWidth() const\nClass arguments details:\n");
		}


		wxHtmlDCRenderer* self=Luna< wxObject >::checkSubType< wxHtmlDCRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlDCRenderer::GetTotalWidth() const");
		}
		int lret = self->GetTotalWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlDCRenderer::GetTotalHeight() const
	static int _bind_GetTotalHeight(lua_State *L) {
		if (!_lg_typecheck_GetTotalHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlDCRenderer::GetTotalHeight() const function, expected prototype:\nint wxHtmlDCRenderer::GetTotalHeight() const\nClass arguments details:\n");
		}


		wxHtmlDCRenderer* self=Luna< wxObject >::checkSubType< wxHtmlDCRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlDCRenderer::GetTotalHeight() const");
		}
		int lret = self->GetTotalHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlDCRenderer::Render(int x, int y, wxArrayInt & known_pagebreaks, int from = 0, int dont_render = false, int to = INT_MAX)
	static int _bind_Render(lua_State *L) {
		if (!_lg_typecheck_Render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlDCRenderer::Render(int x, int y, wxArrayInt & known_pagebreaks, int from = 0, int dont_render = false, int to = INT_MAX) function, expected prototype:\nint wxHtmlDCRenderer::Render(int x, int y, wxArrayInt & known_pagebreaks, int from = 0, int dont_render = false, int to = INT_MAX)\nClass arguments details:\narg 3 ID = 47342076\n");
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxArrayInt* known_pagebreaks_ptr=(Luna< wxArrayInt >::check(L,4));
		if( !known_pagebreaks_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg known_pagebreaks in wxHtmlDCRenderer::Render function");
		}
		wxArrayInt & known_pagebreaks=*known_pagebreaks_ptr;
		int from=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		int dont_render=luatop>5 ? (int)lua_tointeger(L,6) : false;
		int to=luatop>6 ? (int)lua_tointeger(L,7) : INT_MAX;

		wxHtmlDCRenderer* self=Luna< wxObject >::checkSubType< wxHtmlDCRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlDCRenderer::Render(int, int, wxArrayInt &, int, int, int)");
		}
		int lret = self->Render(x, y, known_pagebreaks, from, dont_render, to);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHtmlDCRenderer::SetDC(wxDC * dc, double pixel_scale = 1.0)
	static int _bind_SetDC(lua_State *L) {
		if (!_lg_typecheck_SetDC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlDCRenderer::SetDC(wxDC * dc, double pixel_scale = 1.0) function, expected prototype:\nvoid wxHtmlDCRenderer::SetDC(wxDC * dc, double pixel_scale = 1.0)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxDC* dc=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		double pixel_scale=luatop>2 ? (double)lua_tonumber(L,3) : 1.0;

		wxHtmlDCRenderer* self=Luna< wxObject >::checkSubType< wxHtmlDCRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlDCRenderer::SetDC(wxDC *, double)");
		}
		self->SetDC(dc, pixel_scale);

		return 0;
	}

	// void wxHtmlDCRenderer::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL)
	static int _bind_SetFonts(lua_State *L) {
		if (!_lg_typecheck_SetFonts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlDCRenderer::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL) function, expected prototype:\nvoid wxHtmlDCRenderer::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString normal_face(lua_tostring(L,2),lua_objlen(L,2));
		wxString fixed_face(lua_tostring(L,3),lua_objlen(L,3));
		int sizes=luatop>3 ? (int)lua_tointeger(L,4) : NULL;

		wxHtmlDCRenderer* self=Luna< wxObject >::checkSubType< wxHtmlDCRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlDCRenderer::SetFonts(const wxString &, const wxString &, const int *)");
		}
		self->SetFonts(normal_face, fixed_face, &sizes);

		return 0;
	}

	// void wxHtmlDCRenderer::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString)
	static int _bind_SetStandardFonts(lua_State *L) {
		if (!_lg_typecheck_SetStandardFonts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlDCRenderer::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString) function, expected prototype:\nvoid wxHtmlDCRenderer::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int size=luatop>1 ? (int)lua_tointeger(L,2) : -1;
		wxString normal_face(lua_tostring(L,3),lua_objlen(L,3));
		wxString fixed_face(lua_tostring(L,4),lua_objlen(L,4));

		wxHtmlDCRenderer* self=Luna< wxObject >::checkSubType< wxHtmlDCRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlDCRenderer::SetStandardFonts(int, const wxString &, const wxString &)");
		}
		self->SetStandardFonts(size, normal_face, fixed_face);

		return 0;
	}

	// void wxHtmlDCRenderer::SetHtmlText(const wxString & html, const wxString & basepath = wxEmptyString, bool isdir = true)
	static int _bind_SetHtmlText(lua_State *L) {
		if (!_lg_typecheck_SetHtmlText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlDCRenderer::SetHtmlText(const wxString & html, const wxString & basepath = wxEmptyString, bool isdir = true) function, expected prototype:\nvoid wxHtmlDCRenderer::SetHtmlText(const wxString & html, const wxString & basepath = wxEmptyString, bool isdir = true)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString html(lua_tostring(L,2),lua_objlen(L,2));
		wxString basepath(lua_tostring(L,3),lua_objlen(L,3));
		bool isdir=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxHtmlDCRenderer* self=Luna< wxObject >::checkSubType< wxHtmlDCRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlDCRenderer::SetHtmlText(const wxString &, const wxString &, bool)");
		}
		self->SetHtmlText(html, basepath, isdir);

		return 0;
	}

	// void wxHtmlDCRenderer::SetSize(int width, int height)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlDCRenderer::SetSize(int width, int height) function, expected prototype:\nvoid wxHtmlDCRenderer::SetSize(int width, int height)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxHtmlDCRenderer* self=Luna< wxObject >::checkSubType< wxHtmlDCRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlDCRenderer::SetSize(int, int)");
		}
		self->SetSize(width, height);

		return 0;
	}

	// wxClassInfo * wxHtmlDCRenderer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlDCRenderer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlDCRenderer::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHtmlDCRenderer* self=Luna< wxObject >::checkSubType< wxHtmlDCRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlDCRenderer::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxHtmlDCRenderer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHtmlDCRenderer* LunaTraits< wxHtmlDCRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlDCRenderer::_bind_ctor(L);
}

void LunaTraits< wxHtmlDCRenderer >::_bind_dtor(wxHtmlDCRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlDCRenderer >::className[] = "wxHtmlDCRenderer";
const char LunaTraits< wxHtmlDCRenderer >::fullName[] = "wxHtmlDCRenderer";
const char LunaTraits< wxHtmlDCRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlDCRenderer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxHtmlDCRenderer >::hash = 41374394;
const int LunaTraits< wxHtmlDCRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlDCRenderer >::methods[] = {
	{"GetTotalWidth", &luna_wrapper_wxHtmlDCRenderer::_bind_GetTotalWidth},
	{"GetTotalHeight", &luna_wrapper_wxHtmlDCRenderer::_bind_GetTotalHeight},
	{"Render", &luna_wrapper_wxHtmlDCRenderer::_bind_Render},
	{"SetDC", &luna_wrapper_wxHtmlDCRenderer::_bind_SetDC},
	{"SetFonts", &luna_wrapper_wxHtmlDCRenderer::_bind_SetFonts},
	{"SetStandardFonts", &luna_wrapper_wxHtmlDCRenderer::_bind_SetStandardFonts},
	{"SetHtmlText", &luna_wrapper_wxHtmlDCRenderer::_bind_SetHtmlText},
	{"SetSize", &luna_wrapper_wxHtmlDCRenderer::_bind_SetSize},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlDCRenderer::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxHtmlDCRenderer::_bind___eq},
	{"getTable", &luna_wrapper_wxHtmlDCRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlDCRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlDCRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlDCRenderer >::enumValues[] = {
	{0,0}
};


