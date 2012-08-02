#include <plug_common.h>

class luna_wrapper_osgDB_ReaderWriterInfoList {
public:
	typedef Luna< osgDB::ReaderWriterInfoList > luna_t;

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

		osgDB::ReaderWriterInfoList* self=(Luna< osgDB::ReaderWriterInfoList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ReaderWriterInfoList");
		
		return luna_dynamicCast(L,converters,"osgDB::ReaderWriterInfoList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::ReaderWriterInfoList* LunaTraits< osgDB::ReaderWriterInfoList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::ReaderWriterInfoList >::_bind_dtor(osgDB::ReaderWriterInfoList* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ReaderWriterInfoList >::className[] = "ReaderWriterInfoList";
const char LunaTraits< osgDB::ReaderWriterInfoList >::fullName[] = "osgDB::ReaderWriterInfoList";
const char LunaTraits< osgDB::ReaderWriterInfoList >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ReaderWriterInfoList >::parents[] = {0};
const int LunaTraits< osgDB::ReaderWriterInfoList >::hash = 75164642;
const int LunaTraits< osgDB::ReaderWriterInfoList >::uniqueIDs[] = {75164642,0};

luna_RegType LunaTraits< osgDB::ReaderWriterInfoList >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ReaderWriterInfoList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ReaderWriterInfoList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ReaderWriterInfoList >::enumValues[] = {
	{0,0}
};


