#include <plug_common.h>

class luna_wrapper_osg_NodePath {
public:
	typedef Luna< osg::NodePath > luna_t;

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

		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::NodePath");
		
		return luna_dynamicCast(L,converters,"osg::NodePath",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::NodePath* LunaTraits< osg::NodePath >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::NodePath >::_bind_dtor(osg::NodePath* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::NodePath >::className[] = "NodePath";
const char LunaTraits< osg::NodePath >::fullName[] = "osg::NodePath";
const char LunaTraits< osg::NodePath >::moduleName[] = "osg";
const char* LunaTraits< osg::NodePath >::parents[] = {0};
const int LunaTraits< osg::NodePath >::hash = 52841328;
const int LunaTraits< osg::NodePath >::uniqueIDs[] = {52841328,0};

luna_RegType LunaTraits< osg::NodePath >::methods[] = {
	{"dynCast", &luna_wrapper_osg_NodePath::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodePath >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodePath >::enumValues[] = {
	{0,0}
};


