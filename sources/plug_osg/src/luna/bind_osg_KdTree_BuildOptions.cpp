#include <plug_common.h>

class luna_wrapper_osg_KdTree_BuildOptions {
public:
	typedef Luna< osg::KdTree::BuildOptions > luna_t;

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

		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::BuildOptions");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::BuildOptions",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::KdTree::BuildOptions::BuildOptions()
	static osg::KdTree::BuildOptions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::BuildOptions::BuildOptions() function, expected prototype:\nosg::KdTree::BuildOptions::BuildOptions()\nClass arguments details:\n");
		}


		return new osg::KdTree::BuildOptions();
	}


	// Function binds:

	// Operator binds:

};

osg::KdTree::BuildOptions* LunaTraits< osg::KdTree::BuildOptions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTree_BuildOptions::_bind_ctor(L);
}

void LunaTraits< osg::KdTree::BuildOptions >::_bind_dtor(osg::KdTree::BuildOptions* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::BuildOptions >::className[] = "BuildOptions";
const char LunaTraits< osg::KdTree::BuildOptions >::fullName[] = "osg::KdTree::BuildOptions";
const char LunaTraits< osg::KdTree::BuildOptions >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::BuildOptions >::parents[] = {0};
const int LunaTraits< osg::KdTree::BuildOptions >::hash = 4714115;
const int LunaTraits< osg::KdTree::BuildOptions >::uniqueIDs[] = {4714115,0};

luna_RegType LunaTraits< osg::KdTree::BuildOptions >::methods[] = {
	{"dynCast", &luna_wrapper_osg_KdTree_BuildOptions::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::BuildOptions >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::BuildOptions >::enumValues[] = {
	{0,0}
};


