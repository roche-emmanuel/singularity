#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Buffer.h>

class luna_wrapper_SPK_Buffer {
public:
	typedef Luna< SPK::Buffer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::Buffer* self=(Luna< SPK::Buffer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99782100) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Buffer*)");
		}

		SPK::Buffer* rhs =(Luna< SPK::Buffer >::check(L,2));
		SPK::Buffer* self=(Luna< SPK::Buffer >::check(L,1));
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

		SPK::Buffer* self=(Luna< SPK::Buffer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Buffer");
		
		return luna_dynamicCast(L,converters,"SPK::Buffer",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSwapEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int SPK::Buffer::getFlag() const
	static int _bind_getFlag(lua_State *L) {
		if (!_lg_typecheck_getFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int SPK::Buffer::getFlag() const function, expected prototype:\nunsigned int SPK::Buffer::getFlag() const\nClass arguments details:\n");
		}


		SPK::Buffer* self=(Luna< SPK::Buffer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int SPK::Buffer::getFlag() const");
		}
		unsigned int lret = self->getFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Buffer::isSwapEnabled() const
	static int _bind_isSwapEnabled(lua_State *L) {
		if (!_lg_typecheck_isSwapEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Buffer::isSwapEnabled() const function, expected prototype:\nbool SPK::Buffer::isSwapEnabled() const\nClass arguments details:\n");
		}


		SPK::Buffer* self=(Luna< SPK::Buffer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Buffer::isSwapEnabled() const");
		}
		bool lret = self->isSwapEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

SPK::Buffer* LunaTraits< SPK::Buffer >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void SPK::Buffer::swap(size_t index0, size_t index1)
}

void LunaTraits< SPK::Buffer >::_bind_dtor(SPK::Buffer* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SPK::Buffer >::className[] = "Buffer";
const char LunaTraits< SPK::Buffer >::fullName[] = "SPK::Buffer";
const char LunaTraits< SPK::Buffer >::moduleName[] = "spark";
const char* LunaTraits< SPK::Buffer >::parents[] = {0};
const int LunaTraits< SPK::Buffer >::hash = 99782100;
const int LunaTraits< SPK::Buffer >::uniqueIDs[] = {99782100,0};

luna_RegType LunaTraits< SPK::Buffer >::methods[] = {
	{"getFlag", &luna_wrapper_SPK_Buffer::_bind_getFlag},
	{"isSwapEnabled", &luna_wrapper_SPK_Buffer::_bind_isSwapEnabled},
	{"dynCast", &luna_wrapper_SPK_Buffer::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Buffer::_bind___eq},
	{"getTable", &luna_wrapper_SPK_Buffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Buffer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Buffer >::enumValues[] = {
	{0,0}
};


