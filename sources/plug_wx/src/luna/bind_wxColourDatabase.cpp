#include <plug_common.h>

class luna_wrapper_wxColourDatabase {
public:
	typedef Luna< wxColourDatabase > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52531141) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxColourDatabase*)");
		}

		wxColourDatabase* rhs =(Luna< wxColourDatabase >::check(L,2));
		wxColourDatabase* self=(Luna< wxColourDatabase >::check(L,1));
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

		wxColourDatabase* self=(Luna< wxColourDatabase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxColourDatabase");
		
		return luna_dynamicCast(L,converters,"wxColourDatabase",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Find(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxColourDatabase::wxColourDatabase()
	static wxColourDatabase* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColourDatabase::wxColourDatabase() function, expected prototype:\nwxColourDatabase::wxColourDatabase()\nClass arguments details:\n");
		}


		return new wxColourDatabase();
	}


	// Function binds:
	// void wxColourDatabase::AddColour(const wxString & colourName, const wxColour & colour)
	static int _bind_AddColour(lua_State *L) {
		if (!_lg_typecheck_AddColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColourDatabase::AddColour(const wxString & colourName, const wxColour & colour) function, expected prototype:\nvoid wxColourDatabase::AddColour(const wxString & colourName, const wxColour & colour)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		wxString colourName(lua_tostring(L,2),lua_objlen(L,2));
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColourDatabase::AddColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxColourDatabase* self=(Luna< wxColourDatabase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColourDatabase::AddColour(const wxString &, const wxColour &)");
		}
		self->AddColour(colourName, colour);

		return 0;
	}

	// wxColour wxColourDatabase::Find(const wxString & colourName) const
	static int _bind_Find(lua_State *L) {
		if (!_lg_typecheck_Find(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxColourDatabase::Find(const wxString & colourName) const function, expected prototype:\nwxColour wxColourDatabase::Find(const wxString & colourName) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString colourName(lua_tostring(L,2),lua_objlen(L,2));

		wxColourDatabase* self=(Luna< wxColourDatabase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxColourDatabase::Find(const wxString &) const");
		}
		wxColour stack_lret = self->Find(colourName);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxString wxColourDatabase::FindName(const wxColour & colour) const
	static int _bind_FindName(lua_State *L) {
		if (!_lg_typecheck_FindName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxColourDatabase::FindName(const wxColour & colour) const function, expected prototype:\nwxString wxColourDatabase::FindName(const wxColour & colour) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColourDatabase::FindName function");
		}
		const wxColour & colour=*colour_ptr;

		wxColourDatabase* self=(Luna< wxColourDatabase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxColourDatabase::FindName(const wxColour &) const");
		}
		wxString lret = self->FindName(colour);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxColourDatabase* LunaTraits< wxColourDatabase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxColourDatabase::_bind_ctor(L);
}

void LunaTraits< wxColourDatabase >::_bind_dtor(wxColourDatabase* obj) {
	delete obj;
}

const char LunaTraits< wxColourDatabase >::className[] = "wxColourDatabase";
const char LunaTraits< wxColourDatabase >::fullName[] = "wxColourDatabase";
const char LunaTraits< wxColourDatabase >::moduleName[] = "wx";
const char* LunaTraits< wxColourDatabase >::parents[] = {0};
const int LunaTraits< wxColourDatabase >::hash = 52531141;
const int LunaTraits< wxColourDatabase >::uniqueIDs[] = {52531141,0};

luna_RegType LunaTraits< wxColourDatabase >::methods[] = {
	{"AddColour", &luna_wrapper_wxColourDatabase::_bind_AddColour},
	{"Find", &luna_wrapper_wxColourDatabase::_bind_Find},
	{"FindName", &luna_wrapper_wxColourDatabase::_bind_FindName},
	{"dynCast", &luna_wrapper_wxColourDatabase::_bind_dynCast},
	{"__eq", &luna_wrapper_wxColourDatabase::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxColourDatabase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxColourDatabase >::enumValues[] = {
	{0,0}
};


