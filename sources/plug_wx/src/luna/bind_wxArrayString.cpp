#include <plug_common.h>

class luna_wrapper_wxArrayString {
public:
	typedef Luna< wxArrayString > luna_t;

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

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxArrayString");
		
		return luna_dynamicCast(L,converters,"wxArrayString",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Add(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Alloc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Index(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Item(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Last(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveAt(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Shrink(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Sort(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// wxArrayString::wxArrayString()
	static wxArrayString* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxArrayString::wxArrayString() function, expected prototype:\nwxArrayString::wxArrayString()\nClass arguments details:\n");
		}


		return new wxArrayString();
	}

	// wxArrayString::wxArrayString(const wxArrayString & array)
	static wxArrayString* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxArrayString::wxArrayString(const wxArrayString & array) function, expected prototype:\nwxArrayString::wxArrayString(const wxArrayString & array)\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* array_ptr=(Luna< wxArrayString >::check(L,1));
		if( !array_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg array in wxArrayString::wxArrayString function");
		}
		const wxArrayString & array=*array_ptr;

		return new wxArrayString(array);
	}

	// wxArrayString::wxArrayString(size_t sz, const wxString * arr)
	static wxArrayString* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxArrayString::wxArrayString(size_t sz, const wxString * arr) function, expected prototype:\nwxArrayString::wxArrayString(size_t sz, const wxString * arr)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		size_t sz=(size_t)lua_tointeger(L,1);
		wxString arr(lua_tostring(L,2),lua_objlen(L,2));

		return new wxArrayString(sz, &arr);
	}

	// Overload binder for wxArrayString::wxArrayString
	static wxArrayString* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxArrayString, cannot match any of the overloads for function wxArrayString:\n  wxArrayString()\n  wxArrayString(const wxArrayString &)\n  wxArrayString(size_t, const wxString *)\n");
		return NULL;
	}


	// Function binds:
	// size_t wxArrayString::Add(const wxString & str, size_t copies = 1)
	static int _bind_Add(lua_State *L) {
		if (!_lg_typecheck_Add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxArrayString::Add(const wxString & str, size_t copies = 1) function, expected prototype:\nsize_t wxArrayString::Add(const wxString & str, size_t copies = 1)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString str(lua_tostring(L,2),lua_objlen(L,2));
		size_t copies=luatop>2 ? (size_t)lua_tointeger(L,3) : 1;

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxArrayString::Add(const wxString &, size_t)");
		}
		size_t lret = self->Add(str, copies);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxArrayString::Alloc(size_t nCount)
	static int _bind_Alloc(lua_State *L) {
		if (!_lg_typecheck_Alloc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxArrayString::Alloc(size_t nCount) function, expected prototype:\nvoid wxArrayString::Alloc(size_t nCount)\nClass arguments details:\n");
		}

		size_t nCount=(size_t)lua_tointeger(L,2);

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxArrayString::Alloc(size_t)");
		}
		self->Alloc(nCount);

		return 0;
	}

	// void wxArrayString::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxArrayString::Clear() function, expected prototype:\nvoid wxArrayString::Clear()\nClass arguments details:\n");
		}


		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxArrayString::Clear()");
		}
		self->Clear();

		return 0;
	}

	// void wxArrayString::Empty()
	static int _bind_Empty(lua_State *L) {
		if (!_lg_typecheck_Empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxArrayString::Empty() function, expected prototype:\nvoid wxArrayString::Empty()\nClass arguments details:\n");
		}


		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxArrayString::Empty()");
		}
		self->Empty();

		return 0;
	}

	// size_t wxArrayString::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxArrayString::GetCount() const function, expected prototype:\nsize_t wxArrayString::GetCount() const\nClass arguments details:\n");
		}


		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxArrayString::GetCount() const");
		}
		size_t lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxArrayString::Index(const wxString & sz, bool bCase = true, bool bFromEnd = false) const
	static int _bind_Index(lua_State *L) {
		if (!_lg_typecheck_Index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxArrayString::Index(const wxString & sz, bool bCase = true, bool bFromEnd = false) const function, expected prototype:\nint wxArrayString::Index(const wxString & sz, bool bCase = true, bool bFromEnd = false) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString sz(lua_tostring(L,2),lua_objlen(L,2));
		bool bCase=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;
		bool bFromEnd=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxArrayString::Index(const wxString &, bool, bool) const");
		}
		int lret = self->Index(sz, bCase, bFromEnd);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxArrayString::Insert(wxString lItem, size_t nIndex, size_t copies = 1)
	static int _bind_Insert(lua_State *L) {
		if (!_lg_typecheck_Insert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxArrayString::Insert(wxString lItem, size_t nIndex, size_t copies = 1) function, expected prototype:\nvoid wxArrayString::Insert(wxString lItem, size_t nIndex, size_t copies = 1)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString lItem(lua_tostring(L,2),lua_objlen(L,2));
		size_t nIndex=(size_t)lua_tointeger(L,3);
		size_t copies=luatop>3 ? (size_t)lua_tointeger(L,4) : 1;

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxArrayString::Insert(wxString, size_t, size_t)");
		}
		self->Insert(lItem, nIndex, copies);

		return 0;
	}

	// bool wxArrayString::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxArrayString::IsEmpty() const function, expected prototype:\nbool wxArrayString::IsEmpty() const\nClass arguments details:\n");
		}


		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxArrayString::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString & wxArrayString::Item(size_t nIndex) const
	static int _bind_Item(lua_State *L) {
		if (!_lg_typecheck_Item(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString & wxArrayString::Item(size_t nIndex) const function, expected prototype:\nwxString & wxArrayString::Item(size_t nIndex) const\nClass arguments details:\n");
		}

		size_t nIndex=(size_t)lua_tointeger(L,2);

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString & wxArrayString::Item(size_t) const");
		}
		wxString & lret = self->Item(nIndex);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString & wxArrayString::Last() const
	static int _bind_Last(lua_State *L) {
		if (!_lg_typecheck_Last(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString & wxArrayString::Last() const function, expected prototype:\nwxString & wxArrayString::Last() const\nClass arguments details:\n");
		}


		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString & wxArrayString::Last() const");
		}
		wxString & lret = self->Last();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxArrayString::Remove(const wxString & sz)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxArrayString::Remove(const wxString & sz) function, expected prototype:\nvoid wxArrayString::Remove(const wxString & sz)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString sz(lua_tostring(L,2),lua_objlen(L,2));

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxArrayString::Remove(const wxString &)");
		}
		self->Remove(sz);

		return 0;
	}

	// void wxArrayString::RemoveAt(size_t nIndex, size_t count = 1)
	static int _bind_RemoveAt(lua_State *L) {
		if (!_lg_typecheck_RemoveAt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxArrayString::RemoveAt(size_t nIndex, size_t count = 1) function, expected prototype:\nvoid wxArrayString::RemoveAt(size_t nIndex, size_t count = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t nIndex=(size_t)lua_tointeger(L,2);
		size_t count=luatop>2 ? (size_t)lua_tointeger(L,3) : 1;

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxArrayString::RemoveAt(size_t, size_t)");
		}
		self->RemoveAt(nIndex, count);

		return 0;
	}

	// void wxArrayString::Shrink()
	static int _bind_Shrink(lua_State *L) {
		if (!_lg_typecheck_Shrink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxArrayString::Shrink() function, expected prototype:\nvoid wxArrayString::Shrink()\nClass arguments details:\n");
		}


		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxArrayString::Shrink()");
		}
		self->Shrink();

		return 0;
	}

	// void wxArrayString::Sort(bool reverseOrder = false)
	static int _bind_Sort(lua_State *L) {
		if (!_lg_typecheck_Sort(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxArrayString::Sort(bool reverseOrder = false) function, expected prototype:\nvoid wxArrayString::Sort(bool reverseOrder = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool reverseOrder=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxArrayString::Sort(bool)");
		}
		self->Sort(reverseOrder);

		return 0;
	}


	// Operator binds:
	// bool wxArrayString::operator!=(const wxArrayString & array) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxArrayString::operator!=(const wxArrayString & array) const function, expected prototype:\nbool wxArrayString::operator!=(const wxArrayString & array) const\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* array_ptr=(Luna< wxArrayString >::check(L,2));
		if( !array_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg array in wxArrayString::operator!= function");
		}
		const wxArrayString & array=*array_ptr;

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxArrayString::operator!=(const wxArrayString &) const");
		}
		bool lret = self->operator!=(array);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxArrayString::operator==(const wxArrayString & array) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxArrayString::operator==(const wxArrayString & array) const function, expected prototype:\nbool wxArrayString::operator==(const wxArrayString & array) const\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* array_ptr=(Luna< wxArrayString >::check(L,2));
		if( !array_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg array in wxArrayString::operator== function");
		}
		const wxArrayString & array=*array_ptr;

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxArrayString::operator==(const wxArrayString &) const");
		}
		bool lret = self->operator==(array);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString & wxArrayString::operator[](size_t nIndex) const
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString & wxArrayString::operator[](size_t nIndex) const function, expected prototype:\nwxString & wxArrayString::operator[](size_t nIndex) const\nClass arguments details:\n");
		}

		size_t nIndex=(size_t)lua_tointeger(L,2);

		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString & wxArrayString::operator[](size_t) const");
		}
		wxString & lret = self->operator[](nIndex);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


};

wxArrayString* LunaTraits< wxArrayString >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxArrayString::_bind_ctor(L);
}

void LunaTraits< wxArrayString >::_bind_dtor(wxArrayString* obj) {
	delete obj;
}

const char LunaTraits< wxArrayString >::className[] = "wxArrayString";
const char LunaTraits< wxArrayString >::fullName[] = "wxArrayString";
const char LunaTraits< wxArrayString >::moduleName[] = "wx";
const char* LunaTraits< wxArrayString >::parents[] = {0};
const int LunaTraits< wxArrayString >::hash = 59507769;
const int LunaTraits< wxArrayString >::uniqueIDs[] = {59507769,0};

luna_RegType LunaTraits< wxArrayString >::methods[] = {
	{"Add", &luna_wrapper_wxArrayString::_bind_Add},
	{"Alloc", &luna_wrapper_wxArrayString::_bind_Alloc},
	{"Clear", &luna_wrapper_wxArrayString::_bind_Clear},
	{"Empty", &luna_wrapper_wxArrayString::_bind_Empty},
	{"GetCount", &luna_wrapper_wxArrayString::_bind_GetCount},
	{"Index", &luna_wrapper_wxArrayString::_bind_Index},
	{"Insert", &luna_wrapper_wxArrayString::_bind_Insert},
	{"IsEmpty", &luna_wrapper_wxArrayString::_bind_IsEmpty},
	{"Item", &luna_wrapper_wxArrayString::_bind_Item},
	{"Last", &luna_wrapper_wxArrayString::_bind_Last},
	{"Remove", &luna_wrapper_wxArrayString::_bind_Remove},
	{"RemoveAt", &luna_wrapper_wxArrayString::_bind_RemoveAt},
	{"Shrink", &luna_wrapper_wxArrayString::_bind_Shrink},
	{"Sort", &luna_wrapper_wxArrayString::_bind_Sort},
	{"op_neq", &luna_wrapper_wxArrayString::_bind_op_neq},
	{"__eq", &luna_wrapper_wxArrayString::_bind___eq},
	{"op_index", &luna_wrapper_wxArrayString::_bind_op_index},
	{"dynCast", &luna_wrapper_wxArrayString::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxArrayString >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxArrayString >::enumValues[] = {
	{0,0}
};

