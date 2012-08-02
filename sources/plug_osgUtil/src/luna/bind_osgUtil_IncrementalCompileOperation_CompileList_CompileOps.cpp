#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileList_CompileOps {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileList::CompileOps > luna_t;

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

		osgUtil::IncrementalCompileOperation::CompileList::CompileOps* self=(Luna< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::IncrementalCompileOperation::CompileList::CompileOps");
		
		return luna_dynamicCast(L,converters,"osgUtil::IncrementalCompileOperation::CompileList::CompileOps",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::IncrementalCompileOperation::CompileList::CompileOps* LunaTraits< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileList::CompileOps* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::className[] = "CompileOps";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileList::CompileOps";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::parents[] = {0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::hash = 95636375;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::uniqueIDs[] = {95636375,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileList_CompileOps::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileList::CompileOps >::enumValues[] = {
	{0,0}
};


