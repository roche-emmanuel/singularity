#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_BufferCreator.h>

class luna_wrapper_SPK_BufferCreator {
public:
	typedef Luna< SPK::BufferCreator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::BufferCreator* self=(Luna< SPK::BufferCreator >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,22446991) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::BufferCreator*)");
		}

		SPK::BufferCreator* rhs =(Luna< SPK::BufferCreator >::check(L,2));
		SPK::BufferCreator* self=(Luna< SPK::BufferCreator >::check(L,1));
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

		SPK::BufferCreator* self=(Luna< SPK::BufferCreator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::BufferCreator");
		
		return luna_dynamicCast(L,converters,"SPK::BufferCreator",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SPK::BufferCreator* LunaTraits< SPK::BufferCreator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Buffer * SPK::BufferCreator::createBuffer(size_t nbParticles, const SPK::Group & group) const
}

void LunaTraits< SPK::BufferCreator >::_bind_dtor(SPK::BufferCreator* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SPK::BufferCreator >::className[] = "BufferCreator";
const char LunaTraits< SPK::BufferCreator >::fullName[] = "SPK::BufferCreator";
const char LunaTraits< SPK::BufferCreator >::moduleName[] = "SPK";
const char* LunaTraits< SPK::BufferCreator >::parents[] = {0};
const int LunaTraits< SPK::BufferCreator >::hash = 22446991;
const int LunaTraits< SPK::BufferCreator >::uniqueIDs[] = {22446991,0};

luna_RegType LunaTraits< SPK::BufferCreator >::methods[] = {
	{"dynCast", &luna_wrapper_SPK_BufferCreator::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_BufferCreator::_bind___eq},
	{"getTable", &luna_wrapper_SPK_BufferCreator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::BufferCreator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::BufferCreator >::enumValues[] = {
	{0,0}
};


