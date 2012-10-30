#include <plug_common.h>

class luna_wrapper_wxSimpleHtmlListBox {
public:
	typedef Luna< wxSimpleHtmlListBox > luna_t;

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
		wxSimpleHtmlListBox* ptr= dynamic_cast< wxSimpleHtmlListBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSimpleHtmlListBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSimpleHtmlListBox* ptr= static_cast< wxSimpleHtmlListBox* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSimpleHtmlListBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxVarScrollHelperBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSimpleHtmlListBox* ptr= dynamic_cast< wxSimpleHtmlListBox* >(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSimpleHtmlListBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxItemContainerImmutable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSimpleHtmlListBox* ptr= dynamic_cast< wxSimpleHtmlListBox* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSimpleHtmlListBox >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,59507769) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxSimpleHtmlListBox::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = wxHLB_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSimpleHtmlListBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSimpleHtmlListBox::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = wxHLB_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSimpleHtmlListBoxNameStr) function, expected prototype:\nbool wxSimpleHtmlListBox::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = wxHLB_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSimpleHtmlListBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 5 ID = 59507769\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSimpleHtmlListBox::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSimpleHtmlListBox::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,6));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxSimpleHtmlListBox::Create function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxHLB_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSimpleHtmlListBox::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxSimpleHtmlListBox* self=dynamic_cast< wxSimpleHtmlListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSimpleHtmlListBox::Create(wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, choices, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxSimpleHtmlListBox* LunaTraits< wxSimpleHtmlListBox >::_bind_ctor(lua_State *L) {
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
	// unsigned int wxItemContainerImmutable::GetCount() const
	// wxString wxItemContainerImmutable::GetString(unsigned int n) const
	// void wxItemContainerImmutable::SetString(unsigned int n, const wxString & string)
	// void wxItemContainerImmutable::SetSelection(int n)
	// int wxItemContainerImmutable::GetSelection() const

	// Abstract operators:
}

void LunaTraits< wxSimpleHtmlListBox >::_bind_dtor(wxSimpleHtmlListBox* obj) {
	delete obj;
}

const char LunaTraits< wxSimpleHtmlListBox >::className[] = "wxSimpleHtmlListBox";
const char LunaTraits< wxSimpleHtmlListBox >::fullName[] = "wxSimpleHtmlListBox";
const char LunaTraits< wxSimpleHtmlListBox >::moduleName[] = "wx";
const char* LunaTraits< wxSimpleHtmlListBox >::parents[] = {"wx.wxHtmlListBox", "wx.wxItemContainer", 0};
const int LunaTraits< wxSimpleHtmlListBox >::hash = 90573167;
const int LunaTraits< wxSimpleHtmlListBox >::uniqueIDs[] = {56813631, 53506535, 94004845, 69784830,0};

luna_RegType LunaTraits< wxSimpleHtmlListBox >::methods[] = {
	{"Create", &luna_wrapper_wxSimpleHtmlListBox::_bind_Create},
	{"__eq", &luna_wrapper_wxSimpleHtmlListBox::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSimpleHtmlListBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxSimpleHtmlListBox::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxSimpleHtmlListBox::_cast_from_wxTrackable},
	{"wxVarScrollHelperBase", &luna_wrapper_wxSimpleHtmlListBox::_cast_from_wxVarScrollHelperBase},
	{"wxItemContainerImmutable", &luna_wrapper_wxSimpleHtmlListBox::_cast_from_wxItemContainerImmutable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSimpleHtmlListBox >::enumValues[] = {
	{0,0}
};


