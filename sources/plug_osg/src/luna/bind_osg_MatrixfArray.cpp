#include <plug_common.h>

class luna_wrapper_osg_MatrixfArray {
public:
	typedef Luna< osg::MatrixfArray > luna_t;

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

		osg::MatrixfArray* self=(Luna< osg::MatrixfArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::MatrixfArray");
		
		return luna_dynamicCast(L,converters,"osg::MatrixfArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::MatrixfArray* LunaTraits< osg::MatrixfArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::MatrixfArray >::_bind_dtor(osg::MatrixfArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::MatrixfArray >::className[] = "MatrixfArray";
const char LunaTraits< osg::MatrixfArray >::fullName[] = "osg::MatrixfArray";
const char LunaTraits< osg::MatrixfArray >::moduleName[] = "osg";
const char* LunaTraits< osg::MatrixfArray >::parents[] = {0};
const int LunaTraits< osg::MatrixfArray >::hash = 82206572;
const int LunaTraits< osg::MatrixfArray >::uniqueIDs[] = {82206572,0};

luna_RegType LunaTraits< osg::MatrixfArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_MatrixfArray::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::MatrixfArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::MatrixfArray >::enumValues[] = {
	{0,0}
};


