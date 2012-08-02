#include <plug_common.h>

class luna_wrapper_osg_FrameBufferObject_AttachmentMap {
public:
	typedef Luna< osg::FrameBufferObject::AttachmentMap > luna_t;

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

		osg::FrameBufferObject::AttachmentMap* self=(Luna< osg::FrameBufferObject::AttachmentMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::FrameBufferObject::AttachmentMap");
		
		return luna_dynamicCast(L,converters,"osg::FrameBufferObject::AttachmentMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::FrameBufferObject::AttachmentMap* LunaTraits< osg::FrameBufferObject::AttachmentMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::FrameBufferObject::AttachmentMap >::_bind_dtor(osg::FrameBufferObject::AttachmentMap* obj) {
	delete obj;
}

const char LunaTraits< osg::FrameBufferObject::AttachmentMap >::className[] = "AttachmentMap";
const char LunaTraits< osg::FrameBufferObject::AttachmentMap >::fullName[] = "osg::FrameBufferObject::AttachmentMap";
const char LunaTraits< osg::FrameBufferObject::AttachmentMap >::moduleName[] = "osg";
const char* LunaTraits< osg::FrameBufferObject::AttachmentMap >::parents[] = {0};
const int LunaTraits< osg::FrameBufferObject::AttachmentMap >::hash = 67520441;
const int LunaTraits< osg::FrameBufferObject::AttachmentMap >::uniqueIDs[] = {67520441,0};

luna_RegType LunaTraits< osg::FrameBufferObject::AttachmentMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_FrameBufferObject_AttachmentMap::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FrameBufferObject::AttachmentMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FrameBufferObject::AttachmentMap >::enumValues[] = {
	{0,0}
};


