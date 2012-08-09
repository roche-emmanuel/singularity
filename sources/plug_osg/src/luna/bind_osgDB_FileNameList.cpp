#include <plug_common.h>

class luna_wrapper_osgDB_FileNameList {
public:
	typedef Luna< osgDB::FileNameList > luna_t;

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

		osgDB::FileNameList* self=(Luna< osgDB::FileNameList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::FileNameList");
		
		return luna_dynamicCast(L,converters,"osgDB::FileNameList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::FileNameList* LunaTraits< osgDB::FileNameList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::FileNameList >::_bind_dtor(osgDB::FileNameList* obj) {
	delete obj;
}

const char LunaTraits< osgDB::FileNameList >::className[] = "FileNameList";
const char LunaTraits< osgDB::FileNameList >::fullName[] = "osgDB::FileNameList";
const char LunaTraits< osgDB::FileNameList >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FileNameList >::parents[] = {0};
const int LunaTraits< osgDB::FileNameList >::hash = 26199076;
const int LunaTraits< osgDB::FileNameList >::uniqueIDs[] = {26199076,0};

luna_RegType LunaTraits< osgDB::FileNameList >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_FileNameList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FileNameList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FileNameList >::enumValues[] = {
	{0,0}
};


