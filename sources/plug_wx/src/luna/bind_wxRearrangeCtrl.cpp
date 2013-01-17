#include <plug_common.h>

class luna_wrapper_wxRearrangeCtrl {
public:
	typedef Luna< wxRearrangeCtrl > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9606071) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRearrangeCtrl*)");
		}

		wxRearrangeCtrl* rhs =(Luna< wxRearrangeCtrl >::check(L,2));
		wxRearrangeCtrl* self=(Luna< wxRearrangeCtrl >::check(L,1));
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

		wxRearrangeCtrl* self=(Luna< wxRearrangeCtrl >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRearrangeCtrl");
		
		return luna_dynamicCast(L,converters,"wxRearrangeCtrl",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,47342076) ) return false;
		if( (!(Luna< wxArrayInt >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,59507769) ) return false;
		if( (!(Luna< wxArrayString >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,47342076) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRearrangeCtrl::wxRearrangeCtrl()
	static wxRearrangeCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRearrangeCtrl::wxRearrangeCtrl() function, expected prototype:\nwxRearrangeCtrl::wxRearrangeCtrl()\nClass arguments details:\n");
		}


		return new wxRearrangeCtrl();
	}

	// wxRearrangeCtrl::wxRearrangeCtrl(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)
	static wxRearrangeCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRearrangeCtrl::wxRearrangeCtrl(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr) function, expected prototype:\nwxRearrangeCtrl::wxRearrangeCtrl(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 5 ID = 47342076\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRearrangeCtrl::wxRearrangeCtrl function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,4));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeCtrl::wxRearrangeCtrl function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,5));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxRearrangeCtrl::wxRearrangeCtrl function");
		}
		const wxArrayInt & order=*order_ptr;
		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,6));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxRearrangeCtrl::wxRearrangeCtrl function");
		}
		const wxArrayString & items=*items_ptr;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? (Luna< wxObject >::checkSubType< wxValidator >(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRearrangeCtrl::wxRearrangeCtrl function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxRearrangeCtrl(parent, id, pos, size, order, items, style, validator, name);
	}

	// Overload binder for wxRearrangeCtrl::wxRearrangeCtrl
	static wxRearrangeCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRearrangeCtrl, cannot match any of the overloads for function wxRearrangeCtrl:\n  wxRearrangeCtrl()\n  wxRearrangeCtrl(wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayInt &, const wxArrayString &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRearrangeCtrl::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeCtrl::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr) function, expected prototype:\nbool wxRearrangeCtrl::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 5 ID = 47342076\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRearrangeCtrl::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeCtrl::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,6));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxRearrangeCtrl::Create function");
		}
		const wxArrayInt & order=*order_ptr;
		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,7));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxRearrangeCtrl::Create function");
		}
		const wxArrayString & items=*items_ptr;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : 0;
		const wxValidator* validator_ptr=luatop>8 ? (Luna< wxObject >::checkSubType< wxValidator >(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRearrangeCtrl::Create function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxRearrangeCtrl* self=(Luna< wxRearrangeCtrl >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayInt &, const wxArrayString &, long, const wxValidator &, const wxString &). Got : '%s'",typeid(Luna< wxRearrangeCtrl >::check(L,1)).name());
		}
		bool lret = self->Create(parent, id, pos, size, order, items, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxRearrangeList * wxRearrangeCtrl::GetList() const
	static int _bind_GetList(lua_State *L) {
		if (!_lg_typecheck_GetList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRearrangeList * wxRearrangeCtrl::GetList() const function, expected prototype:\nwxRearrangeList * wxRearrangeCtrl::GetList() const\nClass arguments details:\n");
		}


		wxRearrangeCtrl* self=(Luna< wxRearrangeCtrl >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRearrangeList * wxRearrangeCtrl::GetList() const. Got : '%s'",typeid(Luna< wxRearrangeCtrl >::check(L,1)).name());
		}
		wxRearrangeList * lret = self->GetList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRearrangeList >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxRearrangeCtrl* LunaTraits< wxRearrangeCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRearrangeCtrl::_bind_ctor(L);
}

void LunaTraits< wxRearrangeCtrl >::_bind_dtor(wxRearrangeCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxRearrangeCtrl >::className[] = "wxRearrangeCtrl";
const char LunaTraits< wxRearrangeCtrl >::fullName[] = "wxRearrangeCtrl";
const char LunaTraits< wxRearrangeCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxRearrangeCtrl >::parents[] = {0};
const int LunaTraits< wxRearrangeCtrl >::hash = 9606071;
const int LunaTraits< wxRearrangeCtrl >::uniqueIDs[] = {9606071,0};

luna_RegType LunaTraits< wxRearrangeCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxRearrangeCtrl::_bind_Create},
	{"GetList", &luna_wrapper_wxRearrangeCtrl::_bind_GetList},
	{"dynCast", &luna_wrapper_wxRearrangeCtrl::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRearrangeCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRearrangeCtrl >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRearrangeCtrl >::enumValues[] = {
	{0,0}
};


