#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileList {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36919874) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::IncrementalCompileOperation::CompileList*)");
		}

		osgUtil::IncrementalCompileOperation::CompileList* rhs =(Luna< osgUtil::IncrementalCompileOperation::CompileList >::check(L,2));
		osgUtil::IncrementalCompileOperation::CompileList* self=(Luna< osgUtil::IncrementalCompileOperation::CompileList >::check(L,1));
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

		osgUtil::IncrementalCompileOperation::CompileList* self=(Luna< osgUtil::IncrementalCompileOperation::CompileList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::IncrementalCompileOperation::CompileList");
		
		return luna_dynamicCast(L,converters,"osgUtil::IncrementalCompileOperation::CompileList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::IncrementalCompileOperation::CompileList* LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::className[] = "IncrementalCompileOperation_CompileList";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileList";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::parents[] = {0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::hash = 36919874;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::uniqueIDs[] = {36919874,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::enumValues[] = {
	{0,0}
};


