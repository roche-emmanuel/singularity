#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileSet_CompileMap {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82923186) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::IncrementalCompileOperation::CompileSet::CompileMap*)");
		}

		osgUtil::IncrementalCompileOperation::CompileSet::CompileMap* rhs =(Luna< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::check(L,2));
		osgUtil::IncrementalCompileOperation::CompileSet::CompileMap* self=(Luna< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::check(L,1));
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

		osgUtil::IncrementalCompileOperation::CompileSet::CompileMap* self=(Luna< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::IncrementalCompileOperation::CompileSet::CompileMap");
		
		return luna_dynamicCast(L,converters,"osgUtil::IncrementalCompileOperation::CompileSet::CompileMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::IncrementalCompileOperation::CompileSet::CompileMap* LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileSet::CompileMap* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::className[] = "CompileMap";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileSet::CompileMap";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::parents[] = {0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::hash = 82923186;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::uniqueIDs[] = {82923186,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileSet_CompileMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileSet_CompileMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet::CompileMap >::enumValues[] = {
	{0,0}
};


