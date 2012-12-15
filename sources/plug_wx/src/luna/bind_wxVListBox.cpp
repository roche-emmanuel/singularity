#include <plug_common.h>

#include <luna/wrappers/wrapper_wxVListBox.h>

class luna_wrapper_wxVListBox {
public:
	typedef Luna< wxVListBox > luna_t;

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
		//wxVListBox* ptr= dynamic_cast< wxVListBox* >(Luna< wxObject >::check(L,1));
		wxVListBox* ptr= luna_caster< wxObject, wxVListBox >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxVListBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxVarScrollHelperBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxVListBox* ptr= dynamic_cast< wxVListBox* >(Luna< wxVarScrollHelperBase >::check(L,1));
		wxVListBox* ptr= luna_caster< wxVarScrollHelperBase, wxVListBox >::cast(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxVListBox >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxVListBox* LunaTraits< wxVListBox >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxVListBox::OnDrawItem(wxDC & dc, const wxRect & rect, size_t n) const
	// int wxVListBox::OnMeasureItem(size_t n) const
	// int wxVarVScrollHelper::OnGetRowHeight(size_t row) const
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const
}

void LunaTraits< wxVListBox >::_bind_dtor(wxVListBox* obj) {
	delete obj;
}

const char LunaTraits< wxVListBox >::className[] = "wxVListBox";
const char LunaTraits< wxVListBox >::fullName[] = "wxVListBox";
const char LunaTraits< wxVListBox >::moduleName[] = "wx";
const char* LunaTraits< wxVListBox >::parents[] = {"wx.wxVScrolledWindow", 0};
const int LunaTraits< wxVListBox >::hash = 45860712;
const int LunaTraits< wxVListBox >::uniqueIDs[] = {56813631, 53506535, 94004845,0};

luna_RegType LunaTraits< wxVListBox >::methods[] = {
	{"__eq", &luna_wrapper_wxVListBox::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxVListBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxVListBox::_cast_from_wxObject},
	{"wxVarScrollHelperBase", &luna_wrapper_wxVListBox::_cast_from_wxVarScrollHelperBase},
	{0,0}
};

luna_RegEnumType LunaTraits< wxVListBox >::enumValues[] = {
	{0,0}
};


