#include <plug_common.h>

class luna_wrapper_wxAcceleratorTable {
public:
	typedef Luna< wxAcceleratorTable > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxAcceleratorTable* ptr= dynamic_cast< wxAcceleratorTable* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAcceleratorTable >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAcceleratorTable::wxAcceleratorTable()
	static wxAcceleratorTable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAcceleratorTable::wxAcceleratorTable() function, expected prototype:\nwxAcceleratorTable::wxAcceleratorTable()\nClass arguments details:\n");
		}


		return new wxAcceleratorTable();
	}

	// wxAcceleratorTable::wxAcceleratorTable(const wxString & resource)
	static wxAcceleratorTable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAcceleratorTable::wxAcceleratorTable(const wxString & resource) function, expected prototype:\nwxAcceleratorTable::wxAcceleratorTable(const wxString & resource)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString resource(lua_tostring(L,1),lua_objlen(L,1));

		return new wxAcceleratorTable(resource);
	}

	// Overload binder for wxAcceleratorTable::wxAcceleratorTable
	static wxAcceleratorTable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxAcceleratorTable, cannot match any of the overloads for function wxAcceleratorTable:\n  wxAcceleratorTable()\n  wxAcceleratorTable(const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxAcceleratorTable::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAcceleratorTable::IsOk() const function, expected prototype:\nbool wxAcceleratorTable::IsOk() const\nClass arguments details:\n");
		}


		wxAcceleratorTable* self=dynamic_cast< wxAcceleratorTable* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAcceleratorTable::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxAcceleratorTable* LunaTraits< wxAcceleratorTable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAcceleratorTable::_bind_ctor(L);
}

void LunaTraits< wxAcceleratorTable >::_bind_dtor(wxAcceleratorTable* obj) {
	delete obj;
}

const char LunaTraits< wxAcceleratorTable >::className[] = "wxAcceleratorTable";
const char LunaTraits< wxAcceleratorTable >::fullName[] = "wxAcceleratorTable";
const char LunaTraits< wxAcceleratorTable >::moduleName[] = "wx";
const char* LunaTraits< wxAcceleratorTable >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxAcceleratorTable >::hash = 22002305;
const int LunaTraits< wxAcceleratorTable >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxAcceleratorTable >::methods[] = {
	{"IsOk", &luna_wrapper_wxAcceleratorTable::_bind_IsOk},
	{0,0}
};

luna_ConverterType LunaTraits< wxAcceleratorTable >::converters[] = {
	{"wxObject", &luna_wrapper_wxAcceleratorTable::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAcceleratorTable >::enumValues[] = {
	{0,0}
};


