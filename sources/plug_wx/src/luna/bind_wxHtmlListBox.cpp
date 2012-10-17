#include <plug_common.h>

class luna_wrapper_wxHtmlListBox {
public:
	typedef Luna< wxHtmlListBox > luna_t;

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
		wxHtmlListBox* ptr= dynamic_cast< wxHtmlListBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlListBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxVarScrollHelperBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHtmlListBox* ptr= dynamic_cast< wxHtmlListBox* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlListBox >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFileSystem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFileSystem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxHtmlListBox::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxHtmlListBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlListBox::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxHtmlListBoxNameStr) function, expected prototype:\nbool wxHtmlListBox::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxHtmlListBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHtmlListBox::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlListBox::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxHtmlListBox* self=dynamic_cast< wxHtmlListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlListBox::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFileSystem & wxHtmlListBox::GetFileSystem() const
	static int _bind_GetFileSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetFileSystem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileSystem & wxHtmlListBox::GetFileSystem() const function, expected prototype:\nwxFileSystem & wxHtmlListBox::GetFileSystem() const\nClass arguments details:\n");
		}


		wxHtmlListBox* self=dynamic_cast< wxHtmlListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFileSystem & wxHtmlListBox::GetFileSystem() const");
		}
		const wxFileSystem* lret = &self->GetFileSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileSystem >::push(L,lret,false);

		return 1;
	}

	// const wxFileSystem & wxHtmlListBox::GetFileSystem() const
	static int _bind_GetFileSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetFileSystem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxFileSystem & wxHtmlListBox::GetFileSystem() const function, expected prototype:\nconst wxFileSystem & wxHtmlListBox::GetFileSystem() const\nClass arguments details:\n");
		}


		wxHtmlListBox* self=dynamic_cast< wxHtmlListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxFileSystem & wxHtmlListBox::GetFileSystem() const");
		}
		const wxFileSystem* lret = &self->GetFileSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileSystem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxHtmlListBox::GetFileSystem
	static int _bind_GetFileSystem(lua_State *L) {
		if (_lg_typecheck_GetFileSystem_overload_1(L)) return _bind_GetFileSystem_overload_1(L);
		if (_lg_typecheck_GetFileSystem_overload_2(L)) return _bind_GetFileSystem_overload_2(L);

		luaL_error(L, "error in function GetFileSystem, cannot match any of the overloads for function GetFileSystem:\n  GetFileSystem()\n  GetFileSystem()\n");
		return 0;
	}


	// Operator binds:

};

wxHtmlListBox* LunaTraits< wxHtmlListBox >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxString wxHtmlListBox::OnGetItem(size_t n) const
	// void wxVListBox::OnDrawItem(wxDC & dc, const wxRect & rect, size_t n) const
	// int wxVListBox::OnMeasureItem(size_t n) const
	// int wxVarVScrollHelper::OnGetRowHeight(size_t row) const
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const

	// Abstract operators:
}

void LunaTraits< wxHtmlListBox >::_bind_dtor(wxHtmlListBox* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlListBox >::className[] = "wxHtmlListBox";
const char LunaTraits< wxHtmlListBox >::fullName[] = "wxHtmlListBox";
const char LunaTraits< wxHtmlListBox >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlListBox >::parents[] = {"wx.wxVListBox", 0};
const int LunaTraits< wxHtmlListBox >::hash = 23417437;
const int LunaTraits< wxHtmlListBox >::uniqueIDs[] = {56813631, 53506535, 94004845,0};

luna_RegType LunaTraits< wxHtmlListBox >::methods[] = {
	{"Create", &luna_wrapper_wxHtmlListBox::_bind_Create},
	{"GetFileSystem", &luna_wrapper_wxHtmlListBox::_bind_GetFileSystem},
	{"__eq", &luna_wrapper_wxHtmlListBox::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlListBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlListBox::_cast_from_wxObject},
	{"wxVarScrollHelperBase", &luna_wrapper_wxHtmlListBox::_cast_from_wxVarScrollHelperBase},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlListBox >::enumValues[] = {
	{0,0}
};


