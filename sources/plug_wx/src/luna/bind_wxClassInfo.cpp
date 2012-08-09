#include <plug_common.h>

class luna_wrapper_wxClassInfo {
public:
	typedef Luna< wxClassInfo > luna_t;

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

		wxClassInfo* self=(Luna< wxClassInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxClassInfo");
		
		return luna_dynamicCast(L,converters,"wxClassInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CreateObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDynamic(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsKindOf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96106697)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindClass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxObject * wxClassInfo::CreateObject() const
	static int _bind_CreateObject(lua_State *L) {
		if (!_lg_typecheck_CreateObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxClassInfo::CreateObject() const function, expected prototype:\nwxObject * wxClassInfo::CreateObject() const\nClass arguments details:\n");
		}


		wxClassInfo* self=(Luna< wxClassInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxObject * wxClassInfo::CreateObject() const");
		}
		wxObject * lret = self->CreateObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// int wxClassInfo::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxClassInfo::GetSize() const function, expected prototype:\nint wxClassInfo::GetSize() const\nClass arguments details:\n");
		}


		wxClassInfo* self=(Luna< wxClassInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxClassInfo::GetSize() const");
		}
		int lret = self->GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxClassInfo::IsDynamic() const
	static int _bind_IsDynamic(lua_State *L) {
		if (!_lg_typecheck_IsDynamic(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxClassInfo::IsDynamic() const function, expected prototype:\nbool wxClassInfo::IsDynamic() const\nClass arguments details:\n");
		}


		wxClassInfo* self=(Luna< wxClassInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxClassInfo::IsDynamic() const");
		}
		bool lret = self->IsDynamic();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClassInfo::IsKindOf(const wxClassInfo * info) const
	static int _bind_IsKindOf(lua_State *L) {
		if (!_lg_typecheck_IsKindOf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxClassInfo::IsKindOf(const wxClassInfo * info) const function, expected prototype:\nbool wxClassInfo::IsKindOf(const wxClassInfo * info) const\nClass arguments details:\narg 1 ID = 96106697\n");
		}

		const wxClassInfo* info=(Luna< wxClassInfo >::check(L,2));

		wxClassInfo* self=(Luna< wxClassInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxClassInfo::IsKindOf(const wxClassInfo *) const");
		}
		bool lret = self->IsKindOf(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxClassInfo * wxClassInfo::FindClass(const wxString & className)
	static int _bind_FindClass(lua_State *L) {
		if (!_lg_typecheck_FindClass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxClassInfo * wxClassInfo::FindClass(const wxString & className) function, expected prototype:\nstatic wxClassInfo * wxClassInfo::FindClass(const wxString & className)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString className(lua_tostring(L,1),lua_objlen(L,1));

		wxClassInfo * lret = wxClassInfo::FindClass(className);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxClassInfo* LunaTraits< wxClassInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxClassInfo >::_bind_dtor(wxClassInfo* obj) {
	delete obj;
}

const char LunaTraits< wxClassInfo >::className[] = "wxClassInfo";
const char LunaTraits< wxClassInfo >::fullName[] = "wxClassInfo";
const char LunaTraits< wxClassInfo >::moduleName[] = "wx";
const char* LunaTraits< wxClassInfo >::parents[] = {0};
const int LunaTraits< wxClassInfo >::hash = 96106697;
const int LunaTraits< wxClassInfo >::uniqueIDs[] = {96106697,0};

luna_RegType LunaTraits< wxClassInfo >::methods[] = {
	{"CreateObject", &luna_wrapper_wxClassInfo::_bind_CreateObject},
	{"GetSize", &luna_wrapper_wxClassInfo::_bind_GetSize},
	{"IsDynamic", &luna_wrapper_wxClassInfo::_bind_IsDynamic},
	{"IsKindOf", &luna_wrapper_wxClassInfo::_bind_IsKindOf},
	{"FindClass", &luna_wrapper_wxClassInfo::_bind_FindClass},
	{"dynCast", &luna_wrapper_wxClassInfo::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxClassInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxClassInfo >::enumValues[] = {
	{0,0}
};

