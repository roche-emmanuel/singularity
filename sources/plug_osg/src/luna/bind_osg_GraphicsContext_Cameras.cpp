#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext_Cameras {
public:
	typedef Luna< osg::GraphicsContext::Cameras > luna_t;

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

		osg::GraphicsContext::Cameras* self=(Luna< osg::GraphicsContext::Cameras >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::GraphicsContext::Cameras");
		
		return luna_dynamicCast(L,converters,"osg::GraphicsContext::Cameras",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::GraphicsContext::Cameras* LunaTraits< osg::GraphicsContext::Cameras >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::GraphicsContext::Cameras >::_bind_dtor(osg::GraphicsContext::Cameras* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::GraphicsContext::Cameras >::className[] = "Cameras";
const char LunaTraits< osg::GraphicsContext::Cameras >::fullName[] = "osg::GraphicsContext::Cameras";
const char LunaTraits< osg::GraphicsContext::Cameras >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::Cameras >::parents[] = {0};
const int LunaTraits< osg::GraphicsContext::Cameras >::hash = 30655397;
const int LunaTraits< osg::GraphicsContext::Cameras >::uniqueIDs[] = {30655397,0};

luna_RegType LunaTraits< osg::GraphicsContext::Cameras >::methods[] = {
	{"dynCast", &luna_wrapper_osg_GraphicsContext_Cameras::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::Cameras >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::Cameras >::enumValues[] = {
	{0,0}
};


