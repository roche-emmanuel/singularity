#include <plug_common.h>

class luna_wrapper_osg_Camera_BufferAttachmentMap {
public:
	typedef Luna< osg::Camera::BufferAttachmentMap > luna_t;

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

		osg::Camera::BufferAttachmentMap* self=(Luna< osg::Camera::BufferAttachmentMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Camera::BufferAttachmentMap");
		
		return luna_dynamicCast(L,converters,"osg::Camera::BufferAttachmentMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Camera::BufferAttachmentMap* LunaTraits< osg::Camera::BufferAttachmentMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Camera::BufferAttachmentMap >::_bind_dtor(osg::Camera::BufferAttachmentMap* obj) {
	delete obj;
}

const char LunaTraits< osg::Camera::BufferAttachmentMap >::className[] = "BufferAttachmentMap";
const char LunaTraits< osg::Camera::BufferAttachmentMap >::fullName[] = "osg::Camera::BufferAttachmentMap";
const char LunaTraits< osg::Camera::BufferAttachmentMap >::moduleName[] = "osg";
const char* LunaTraits< osg::Camera::BufferAttachmentMap >::parents[] = {0};
const int LunaTraits< osg::Camera::BufferAttachmentMap >::hash = 89024977;
const int LunaTraits< osg::Camera::BufferAttachmentMap >::uniqueIDs[] = {89024977,0};

luna_RegType LunaTraits< osg::Camera::BufferAttachmentMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Camera_BufferAttachmentMap::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Camera::BufferAttachmentMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Camera::BufferAttachmentMap >::enumValues[] = {
	{0,0}
};


