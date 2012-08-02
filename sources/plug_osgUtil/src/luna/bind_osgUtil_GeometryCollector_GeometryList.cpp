#include <plug_common.h>

class luna_wrapper_osgUtil_GeometryCollector_GeometryList {
public:
	typedef Luna< osgUtil::GeometryCollector::GeometryList > luna_t;

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

		osgUtil::GeometryCollector::GeometryList* self=(Luna< osgUtil::GeometryCollector::GeometryList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::GeometryCollector::GeometryList");
		
		return luna_dynamicCast(L,converters,"osgUtil::GeometryCollector::GeometryList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::GeometryCollector::GeometryList* LunaTraits< osgUtil::GeometryCollector::GeometryList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::GeometryCollector::GeometryList >::_bind_dtor(osgUtil::GeometryCollector::GeometryList* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgUtil::GeometryCollector::GeometryList >::className[] = "GeometryList";
const char LunaTraits< osgUtil::GeometryCollector::GeometryList >::fullName[] = "osgUtil::GeometryCollector::GeometryList";
const char LunaTraits< osgUtil::GeometryCollector::GeometryList >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::GeometryCollector::GeometryList >::parents[] = {0};
const int LunaTraits< osgUtil::GeometryCollector::GeometryList >::hash = 43037357;
const int LunaTraits< osgUtil::GeometryCollector::GeometryList >::uniqueIDs[] = {43037357,0};

luna_RegType LunaTraits< osgUtil::GeometryCollector::GeometryList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_GeometryCollector_GeometryList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::GeometryCollector::GeometryList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::GeometryCollector::GeometryList >::enumValues[] = {
	{0,0}
};


