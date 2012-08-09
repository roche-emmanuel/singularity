#include <plug_common.h>

class luna_wrapper_wxCriticalSection {
public:
	typedef Luna< wxCriticalSection > luna_t;

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

		wxCriticalSection* self=(Luna< wxCriticalSection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxCriticalSection");
		
		return luna_dynamicCast(L,converters,"wxCriticalSection",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Enter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TryEnter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Leave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCriticalSection::wxCriticalSection(wxCriticalSectionType critSecType = wxCRITSEC_DEFAULT)
	static wxCriticalSection* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCriticalSection::wxCriticalSection(wxCriticalSectionType critSecType = wxCRITSEC_DEFAULT) function, expected prototype:\nwxCriticalSection::wxCriticalSection(wxCriticalSectionType critSecType = wxCRITSEC_DEFAULT)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxCriticalSectionType critSecType=luatop>0 ? (wxCriticalSectionType)lua_tointeger(L,1) : wxCRITSEC_DEFAULT;

		return new wxCriticalSection(critSecType);
	}


	// Function binds:
	// void wxCriticalSection::Enter()
	static int _bind_Enter(lua_State *L) {
		if (!_lg_typecheck_Enter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCriticalSection::Enter() function, expected prototype:\nvoid wxCriticalSection::Enter()\nClass arguments details:\n");
		}


		wxCriticalSection* self=(Luna< wxCriticalSection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCriticalSection::Enter()");
		}
		self->Enter();

		return 0;
	}

	// bool wxCriticalSection::TryEnter()
	static int _bind_TryEnter(lua_State *L) {
		if (!_lg_typecheck_TryEnter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCriticalSection::TryEnter() function, expected prototype:\nbool wxCriticalSection::TryEnter()\nClass arguments details:\n");
		}


		wxCriticalSection* self=(Luna< wxCriticalSection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCriticalSection::TryEnter()");
		}
		bool lret = self->TryEnter();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCriticalSection::Leave()
	static int _bind_Leave(lua_State *L) {
		if (!_lg_typecheck_Leave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCriticalSection::Leave() function, expected prototype:\nvoid wxCriticalSection::Leave()\nClass arguments details:\n");
		}


		wxCriticalSection* self=(Luna< wxCriticalSection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCriticalSection::Leave()");
		}
		self->Leave();

		return 0;
	}


	// Operator binds:

};

wxCriticalSection* LunaTraits< wxCriticalSection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCriticalSection::_bind_ctor(L);
}

void LunaTraits< wxCriticalSection >::_bind_dtor(wxCriticalSection* obj) {
	delete obj;
}

const char LunaTraits< wxCriticalSection >::className[] = "wxCriticalSection";
const char LunaTraits< wxCriticalSection >::fullName[] = "wxCriticalSection";
const char LunaTraits< wxCriticalSection >::moduleName[] = "wx";
const char* LunaTraits< wxCriticalSection >::parents[] = {0};
const int LunaTraits< wxCriticalSection >::hash = 50835119;
const int LunaTraits< wxCriticalSection >::uniqueIDs[] = {50835119,0};

luna_RegType LunaTraits< wxCriticalSection >::methods[] = {
	{"Enter", &luna_wrapper_wxCriticalSection::_bind_Enter},
	{"TryEnter", &luna_wrapper_wxCriticalSection::_bind_TryEnter},
	{"Leave", &luna_wrapper_wxCriticalSection::_bind_Leave},
	{"dynCast", &luna_wrapper_wxCriticalSection::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxCriticalSection >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxCriticalSection >::enumValues[] = {
	{0,0}
};

