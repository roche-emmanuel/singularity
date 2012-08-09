#include <plug_common.h>

class luna_wrapper_osg_ImageSequence_FileNames {
public:
	typedef Luna< osg::ImageSequence::FileNames > luna_t;

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

		osg::ImageSequence::FileNames* self=(Luna< osg::ImageSequence::FileNames >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ImageSequence::FileNames");
		
		return luna_dynamicCast(L,converters,"osg::ImageSequence::FileNames",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ImageSequence::FileNames* LunaTraits< osg::ImageSequence::FileNames >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ImageSequence::FileNames >::_bind_dtor(osg::ImageSequence::FileNames* obj) {
	delete obj;
}

const char LunaTraits< osg::ImageSequence::FileNames >::className[] = "FileNames";
const char LunaTraits< osg::ImageSequence::FileNames >::fullName[] = "osg::ImageSequence::FileNames";
const char LunaTraits< osg::ImageSequence::FileNames >::moduleName[] = "osg";
const char* LunaTraits< osg::ImageSequence::FileNames >::parents[] = {0};
const int LunaTraits< osg::ImageSequence::FileNames >::hash = 52401783;
const int LunaTraits< osg::ImageSequence::FileNames >::uniqueIDs[] = {52401783,0};

luna_RegType LunaTraits< osg::ImageSequence::FileNames >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ImageSequence_FileNames::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ImageSequence::FileNames >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ImageSequence::FileNames >::enumValues[] = {
	{0,0}
};

