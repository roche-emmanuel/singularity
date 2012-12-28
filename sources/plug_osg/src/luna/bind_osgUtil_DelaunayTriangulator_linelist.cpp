#include <plug_common.h>

class luna_wrapper_osgUtil_DelaunayTriangulator_linelist {
public:
	typedef Luna< osgUtil::DelaunayTriangulator::linelist > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91536996) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::DelaunayTriangulator::linelist*)");
		}

		osgUtil::DelaunayTriangulator::linelist* rhs =(Luna< osgUtil::DelaunayTriangulator::linelist >::check(L,2));
		osgUtil::DelaunayTriangulator::linelist* self=(Luna< osgUtil::DelaunayTriangulator::linelist >::check(L,1));
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

		osgUtil::DelaunayTriangulator::linelist* self=(Luna< osgUtil::DelaunayTriangulator::linelist >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::DelaunayTriangulator::linelist");
		
		return luna_dynamicCast(L,converters,"osgUtil::DelaunayTriangulator::linelist",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::DelaunayTriangulator::linelist* LunaTraits< osgUtil::DelaunayTriangulator::linelist >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::DelaunayTriangulator::linelist >::_bind_dtor(osgUtil::DelaunayTriangulator::linelist* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::DelaunayTriangulator::linelist >::className[] = "linelist";
const char LunaTraits< osgUtil::DelaunayTriangulator::linelist >::fullName[] = "osgUtil::DelaunayTriangulator::linelist";
const char LunaTraits< osgUtil::DelaunayTriangulator::linelist >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::DelaunayTriangulator::linelist >::parents[] = {0};
const int LunaTraits< osgUtil::DelaunayTriangulator::linelist >::hash = 91536996;
const int LunaTraits< osgUtil::DelaunayTriangulator::linelist >::uniqueIDs[] = {91536996,0};

luna_RegType LunaTraits< osgUtil::DelaunayTriangulator::linelist >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_DelaunayTriangulator_linelist::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_DelaunayTriangulator_linelist::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::DelaunayTriangulator::linelist >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::DelaunayTriangulator::linelist >::enumValues[] = {
	{0,0}
};


