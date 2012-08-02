#include <plug_common.h>

class luna_wrapper_osgDB_FileList_FileNames {
public:
	typedef Luna< osgDB::FileList::FileNames > luna_t;

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

		osgDB::FileList::FileNames* self=(Luna< osgDB::FileList::FileNames >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::FileList::FileNames");
		
		return luna_dynamicCast(L,converters,"osgDB::FileList::FileNames",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::FileList::FileNames* LunaTraits< osgDB::FileList::FileNames >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::FileList::FileNames >::_bind_dtor(osgDB::FileList::FileNames* obj) {
	delete obj;
}

const char LunaTraits< osgDB::FileList::FileNames >::className[] = "FileNames";
const char LunaTraits< osgDB::FileList::FileNames >::fullName[] = "osgDB::FileList::FileNames";
const char LunaTraits< osgDB::FileList::FileNames >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FileList::FileNames >::parents[] = {0};
const int LunaTraits< osgDB::FileList::FileNames >::hash = 18196832;
const int LunaTraits< osgDB::FileList::FileNames >::uniqueIDs[] = {18196832,0};

luna_RegType LunaTraits< osgDB::FileList::FileNames >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_FileList_FileNames::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FileList::FileNames >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FileList::FileNames >::enumValues[] = {
	{0,0}
};


