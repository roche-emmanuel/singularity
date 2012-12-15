#include <plug_common.h>

class luna_wrapper_wxConfigPathChanger {
public:
	typedef Luna< wxConfigPathChanger > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70518091) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxConfigPathChanger*)");
		}

		wxConfigPathChanger* rhs =(Luna< wxConfigPathChanger >::check(L,2));
		wxConfigPathChanger* self=(Luna< wxConfigPathChanger >::check(L,1));
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

		wxConfigPathChanger* self=(Luna< wxConfigPathChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxConfigPathChanger");
		
		return luna_dynamicCast(L,converters,"wxConfigPathChanger",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UpdateIfDeleted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxConfigPathChanger::wxConfigPathChanger(const wxConfigBase * pContainer, const wxString & strEntry)
	static wxConfigPathChanger* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxConfigPathChanger::wxConfigPathChanger(const wxConfigBase * pContainer, const wxString & strEntry) function, expected prototype:\nwxConfigPathChanger::wxConfigPathChanger(const wxConfigBase * pContainer, const wxString & strEntry)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		const wxConfigBase* pContainer=(Luna< wxObject >::checkSubType< wxConfigBase >(L,1));
		wxString strEntry(lua_tostring(L,2),lua_objlen(L,2));

		return new wxConfigPathChanger(pContainer, strEntry);
	}


	// Function binds:
	// const wxString & wxConfigPathChanger::Name() const
	static int _bind_Name(lua_State *L) {
		if (!_lg_typecheck_Name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxConfigPathChanger::Name() const function, expected prototype:\nconst wxString & wxConfigPathChanger::Name() const\nClass arguments details:\n");
		}


		wxConfigPathChanger* self=(Luna< wxConfigPathChanger >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxConfigPathChanger::Name() const");
		}
		const wxString & lret = self->Name();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxConfigPathChanger::UpdateIfDeleted()
	static int _bind_UpdateIfDeleted(lua_State *L) {
		if (!_lg_typecheck_UpdateIfDeleted(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxConfigPathChanger::UpdateIfDeleted() function, expected prototype:\nvoid wxConfigPathChanger::UpdateIfDeleted()\nClass arguments details:\n");
		}


		wxConfigPathChanger* self=(Luna< wxConfigPathChanger >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxConfigPathChanger::UpdateIfDeleted()");
		}
		self->UpdateIfDeleted();

		return 0;
	}


	// Operator binds:

};

wxConfigPathChanger* LunaTraits< wxConfigPathChanger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxConfigPathChanger::_bind_ctor(L);
}

void LunaTraits< wxConfigPathChanger >::_bind_dtor(wxConfigPathChanger* obj) {
	delete obj;
}

const char LunaTraits< wxConfigPathChanger >::className[] = "wxConfigPathChanger";
const char LunaTraits< wxConfigPathChanger >::fullName[] = "wxConfigPathChanger";
const char LunaTraits< wxConfigPathChanger >::moduleName[] = "wx";
const char* LunaTraits< wxConfigPathChanger >::parents[] = {0};
const int LunaTraits< wxConfigPathChanger >::hash = 70518091;
const int LunaTraits< wxConfigPathChanger >::uniqueIDs[] = {70518091,0};

luna_RegType LunaTraits< wxConfigPathChanger >::methods[] = {
	{"Name", &luna_wrapper_wxConfigPathChanger::_bind_Name},
	{"UpdateIfDeleted", &luna_wrapper_wxConfigPathChanger::_bind_UpdateIfDeleted},
	{"dynCast", &luna_wrapper_wxConfigPathChanger::_bind_dynCast},
	{"__eq", &luna_wrapper_wxConfigPathChanger::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxConfigPathChanger >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxConfigPathChanger >::enumValues[] = {
	{0,0}
};


