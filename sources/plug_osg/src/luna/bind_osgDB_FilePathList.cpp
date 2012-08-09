#include <plug_common.h>

class luna_wrapper_osgDB_FilePathList {
public:
	typedef Luna< osgDB::FilePathList > luna_t;

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

		osgDB::FilePathList* self=(Luna< osgDB::FilePathList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::FilePathList");
		
		return luna_dynamicCast(L,converters,"osgDB::FilePathList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::FilePathList* LunaTraits< osgDB::FilePathList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::FilePathList >::_bind_dtor(osgDB::FilePathList* obj) {
	delete obj;
}

const char LunaTraits< osgDB::FilePathList >::className[] = "FilePathList";
const char LunaTraits< osgDB::FilePathList >::fullName[] = "osgDB::FilePathList";
const char LunaTraits< osgDB::FilePathList >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FilePathList >::parents[] = {0};
const int LunaTraits< osgDB::FilePathList >::hash = 54591957;
const int LunaTraits< osgDB::FilePathList >::uniqueIDs[] = {54591957,0};

luna_RegType LunaTraits< osgDB::FilePathList >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_FilePathList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FilePathList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FilePathList >::enumValues[] = {
	{0,0}
};


