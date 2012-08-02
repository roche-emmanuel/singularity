#include <plug_common.h>

class luna_wrapper_wxLinuxDistributionInfo {
public:
	typedef Luna< wxLinuxDistributionInfo > luna_t;

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

		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxLinuxDistributionInfo");
		
		return luna_dynamicCast(L,converters,"wxLinuxDistributionInfo",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82275018) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82275018) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:

	// Operator binds:
	// bool wxLinuxDistributionInfo::operator==(const wxLinuxDistributionInfo & ldi) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLinuxDistributionInfo::operator==(const wxLinuxDistributionInfo & ldi) const function, expected prototype:\nbool wxLinuxDistributionInfo::operator==(const wxLinuxDistributionInfo & ldi) const\nClass arguments details:\narg 1 ID = 82275018\n");
		}

		const wxLinuxDistributionInfo* ldi_ptr=(Luna< wxLinuxDistributionInfo >::check(L,2));
		if( !ldi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ldi in wxLinuxDistributionInfo::operator== function");
		}
		const wxLinuxDistributionInfo & ldi=*ldi_ptr;

		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLinuxDistributionInfo::operator==(const wxLinuxDistributionInfo &) const");
		}
		bool lret = self->operator==(ldi);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLinuxDistributionInfo::operator!=(const wxLinuxDistributionInfo & ldi) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLinuxDistributionInfo::operator!=(const wxLinuxDistributionInfo & ldi) const function, expected prototype:\nbool wxLinuxDistributionInfo::operator!=(const wxLinuxDistributionInfo & ldi) const\nClass arguments details:\narg 1 ID = 82275018\n");
		}

		const wxLinuxDistributionInfo* ldi_ptr=(Luna< wxLinuxDistributionInfo >::check(L,2));
		if( !ldi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ldi in wxLinuxDistributionInfo::operator!= function");
		}
		const wxLinuxDistributionInfo & ldi=*ldi_ptr;

		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLinuxDistributionInfo::operator!=(const wxLinuxDistributionInfo &) const");
		}
		bool lret = self->operator!=(ldi);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxLinuxDistributionInfo* LunaTraits< wxLinuxDistributionInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxLinuxDistributionInfo >::_bind_dtor(wxLinuxDistributionInfo* obj) {
	delete obj;
}

const char LunaTraits< wxLinuxDistributionInfo >::className[] = "wxLinuxDistributionInfo";
const char LunaTraits< wxLinuxDistributionInfo >::fullName[] = "wxLinuxDistributionInfo";
const char LunaTraits< wxLinuxDistributionInfo >::moduleName[] = "wx";
const char* LunaTraits< wxLinuxDistributionInfo >::parents[] = {0};
const int LunaTraits< wxLinuxDistributionInfo >::hash = 82275018;
const int LunaTraits< wxLinuxDistributionInfo >::uniqueIDs[] = {82275018,0};

luna_RegType LunaTraits< wxLinuxDistributionInfo >::methods[] = {
	{"__eq", &luna_wrapper_wxLinuxDistributionInfo::_bind___eq},
	{"op_neq", &luna_wrapper_wxLinuxDistributionInfo::_bind_op_neq},
	{"dynCast", &luna_wrapper_wxLinuxDistributionInfo::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxLinuxDistributionInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxLinuxDistributionInfo >::enumValues[] = {
	{0,0}
};


