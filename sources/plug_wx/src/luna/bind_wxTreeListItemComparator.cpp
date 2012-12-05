#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTreeListItemComparator.h>

class luna_wrapper_wxTreeListItemComparator {
public:
	typedef Luna< wxTreeListItemComparator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87583976) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTreeListItemComparator*)");
		}

		wxTreeListItemComparator* rhs =(Luna< wxTreeListItemComparator >::check(L,2));
		wxTreeListItemComparator* self=(Luna< wxTreeListItemComparator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		wxTreeListItemComparator* self=(Luna< wxTreeListItemComparator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTreeListItemComparator");
		
		return luna_dynamicCast(L,converters,"wxTreeListItemComparator",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_Compare(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,75268455) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,75268455) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxTreeListItemComparator::Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second)
	static int _bind_Compare(lua_State *L) {
		if (!_lg_typecheck_Compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTreeListItemComparator::Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second) function, expected prototype:\nint wxTreeListItemComparator::Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 75268455\narg 4 ID = 75268455\n");
		}

		wxTreeListCtrl* treelist=dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,2));
		unsigned column=(unsigned)lua_tointeger(L,3);
		wxTreeListItem* first_ptr=(Luna< wxTreeListItem >::check(L,4));
		if( !first_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg first in wxTreeListItemComparator::Compare function");
		}
		wxTreeListItem first=*first_ptr;
		wxTreeListItem* second_ptr=(Luna< wxTreeListItem >::check(L,5));
		if( !second_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg second in wxTreeListItemComparator::Compare function");
		}
		wxTreeListItem second=*second_ptr;

		wxTreeListItemComparator* self=(Luna< wxTreeListItemComparator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTreeListItemComparator::Compare(wxTreeListCtrl *, unsigned int, wxTreeListItem, wxTreeListItem)");
		}
		int lret = self->Compare(treelist, column, first, second);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxTreeListItemComparator* LunaTraits< wxTreeListItemComparator >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxTreeListItemComparator::Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second)
}

void LunaTraits< wxTreeListItemComparator >::_bind_dtor(wxTreeListItemComparator* obj) {
	delete obj;
}

const char LunaTraits< wxTreeListItemComparator >::className[] = "wxTreeListItemComparator";
const char LunaTraits< wxTreeListItemComparator >::fullName[] = "wxTreeListItemComparator";
const char LunaTraits< wxTreeListItemComparator >::moduleName[] = "wx";
const char* LunaTraits< wxTreeListItemComparator >::parents[] = {0};
const int LunaTraits< wxTreeListItemComparator >::hash = 87583976;
const int LunaTraits< wxTreeListItemComparator >::uniqueIDs[] = {87583976,0};

luna_RegType LunaTraits< wxTreeListItemComparator >::methods[] = {
	{"Compare", &luna_wrapper_wxTreeListItemComparator::_bind_Compare},
	{"dynCast", &luna_wrapper_wxTreeListItemComparator::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTreeListItemComparator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeListItemComparator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeListItemComparator >::enumValues[] = {
	{0,0}
};


