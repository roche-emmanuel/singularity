#include <plug_common.h>

class luna_wrapper_wxDateTime_Tm {
public:
	typedef Luna< wxDateTime::Tm > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62164632) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDateTime::Tm*)");
		}

		wxDateTime::Tm* rhs =(Luna< wxDateTime::Tm >::check(L,2));
		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
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

		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDateTime::Tm");
		
		return luna_dynamicCast(L,converters,"wxDateTime::Tm",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_IsValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWeekDay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxDateTime::Tm::IsValid() const
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDateTime::Tm::IsValid() const function, expected prototype:\nbool wxDateTime::Tm::IsValid() const\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDateTime::Tm::IsValid() const");
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDateTime::WeekDay wxDateTime::Tm::GetWeekDay()
	static int _bind_GetWeekDay(lua_State *L) {
		if (!_lg_typecheck_GetWeekDay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDateTime::WeekDay wxDateTime::Tm::GetWeekDay() function, expected prototype:\nwxDateTime::WeekDay wxDateTime::Tm::GetWeekDay()\nClass arguments details:\n");
		}


		wxDateTime::Tm* self=(Luna< wxDateTime::Tm >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDateTime::WeekDay wxDateTime::Tm::GetWeekDay()");
		}
		wxDateTime::WeekDay lret = self->GetWeekDay();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxDateTime::Tm* LunaTraits< wxDateTime::Tm >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxDateTime::Tm >::_bind_dtor(wxDateTime::Tm* obj) {
	delete obj;
}

const char LunaTraits< wxDateTime::Tm >::className[] = "Tm";
const char LunaTraits< wxDateTime::Tm >::fullName[] = "wxDateTime::Tm";
const char LunaTraits< wxDateTime::Tm >::moduleName[] = "wxDateTime";
const char* LunaTraits< wxDateTime::Tm >::parents[] = {0};
const int LunaTraits< wxDateTime::Tm >::hash = 62164632;
const int LunaTraits< wxDateTime::Tm >::uniqueIDs[] = {62164632,0};

luna_RegType LunaTraits< wxDateTime::Tm >::methods[] = {
	{"IsValid", &luna_wrapper_wxDateTime_Tm::_bind_IsValid},
	{"GetWeekDay", &luna_wrapper_wxDateTime_Tm::_bind_GetWeekDay},
	{"dynCast", &luna_wrapper_wxDateTime_Tm::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDateTime_Tm::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDateTime::Tm >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDateTime::Tm >::enumValues[] = {
	{0,0}
};


