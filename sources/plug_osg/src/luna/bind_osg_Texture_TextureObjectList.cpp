#include <plug_common.h>

class luna_wrapper_osg_Texture_TextureObjectList {
public:
	typedef Luna< osg::Texture::TextureObjectList > luna_t;

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

		osg::Texture::TextureObjectList* self=(Luna< osg::Texture::TextureObjectList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Texture::TextureObjectList");
		
		return luna_dynamicCast(L,converters,"osg::Texture::TextureObjectList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Texture::TextureObjectList* LunaTraits< osg::Texture::TextureObjectList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Texture::TextureObjectList >::_bind_dtor(osg::Texture::TextureObjectList* obj) {
	delete obj;
}

const char LunaTraits< osg::Texture::TextureObjectList >::className[] = "TextureObjectList";
const char LunaTraits< osg::Texture::TextureObjectList >::fullName[] = "osg::Texture::TextureObjectList";
const char LunaTraits< osg::Texture::TextureObjectList >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture::TextureObjectList >::parents[] = {0};
const int LunaTraits< osg::Texture::TextureObjectList >::hash = 68159455;
const int LunaTraits< osg::Texture::TextureObjectList >::uniqueIDs[] = {68159455,0};

luna_RegType LunaTraits< osg::Texture::TextureObjectList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Texture_TextureObjectList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture::TextureObjectList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture::TextureObjectList >::enumValues[] = {
	{0,0}
};


