#include <plug_common.h>

class luna_wrapper_wxTarInputStream {
public:
	typedef Luna< wxTarInputStream > luna_t;

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

		wxTarInputStream* self=(Luna< wxTarInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTarInputStream");
		
		return luna_dynamicCast(L,converters,"wxTarInputStream",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CloseEntry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNextEntry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OpenEntry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73261869) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxTarInputStream::CloseEntry()
	static int _bind_CloseEntry(lua_State *L) {
		if (!_lg_typecheck_CloseEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTarInputStream::CloseEntry() function, expected prototype:\nbool wxTarInputStream::CloseEntry()\nClass arguments details:\n");
		}


		wxTarInputStream* self=(Luna< wxTarInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTarInputStream::CloseEntry()");
		}
		bool lret = self->CloseEntry();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTarEntry * wxTarInputStream::GetNextEntry()
	static int _bind_GetNextEntry(lua_State *L) {
		if (!_lg_typecheck_GetNextEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTarEntry * wxTarInputStream::GetNextEntry() function, expected prototype:\nwxTarEntry * wxTarInputStream::GetNextEntry()\nClass arguments details:\n");
		}


		wxTarInputStream* self=(Luna< wxTarInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTarEntry * wxTarInputStream::GetNextEntry()");
		}
		wxTarEntry * lret = self->GetNextEntry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTarEntry >::push(L,lret,false);

		return 1;
	}

	// bool wxTarInputStream::OpenEntry(wxTarEntry & entry)
	static int _bind_OpenEntry(lua_State *L) {
		if (!_lg_typecheck_OpenEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTarInputStream::OpenEntry(wxTarEntry & entry) function, expected prototype:\nbool wxTarInputStream::OpenEntry(wxTarEntry & entry)\nClass arguments details:\narg 1 ID = 73261869\n");
		}

		wxTarEntry* entry_ptr=(Luna< wxTarEntry >::check(L,2));
		if( !entry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg entry in wxTarInputStream::OpenEntry function");
		}
		wxTarEntry & entry=*entry_ptr;

		wxTarInputStream* self=(Luna< wxTarInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTarInputStream::OpenEntry(wxTarEntry &)");
		}
		bool lret = self->OpenEntry(entry);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTarInputStream* LunaTraits< wxTarInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxTarInputStream >::_bind_dtor(wxTarInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxTarInputStream >::className[] = "wxTarInputStream";
const char LunaTraits< wxTarInputStream >::fullName[] = "wxTarInputStream";
const char LunaTraits< wxTarInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxTarInputStream >::parents[] = {0};
const int LunaTraits< wxTarInputStream >::hash = 47912811;
const int LunaTraits< wxTarInputStream >::uniqueIDs[] = {47912811,0};

luna_RegType LunaTraits< wxTarInputStream >::methods[] = {
	{"CloseEntry", &luna_wrapper_wxTarInputStream::_bind_CloseEntry},
	{"GetNextEntry", &luna_wrapper_wxTarInputStream::_bind_GetNextEntry},
	{"OpenEntry", &luna_wrapper_wxTarInputStream::_bind_OpenEntry},
	{"dynCast", &luna_wrapper_wxTarInputStream::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxTarInputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTarInputStream >::enumValues[] = {
	{0,0}
};


