#include <plug_common.h>

class luna_wrapper_osg_FrameBufferObject_MultipleRenderingTargets {
public:
	typedef Luna< osg::FrameBufferObject::MultipleRenderingTargets > luna_t;

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

		osg::FrameBufferObject::MultipleRenderingTargets* self=(Luna< osg::FrameBufferObject::MultipleRenderingTargets >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::FrameBufferObject::MultipleRenderingTargets");
		
		return luna_dynamicCast(L,converters,"osg::FrameBufferObject::MultipleRenderingTargets",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::FrameBufferObject::MultipleRenderingTargets* LunaTraits< osg::FrameBufferObject::MultipleRenderingTargets >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::FrameBufferObject::MultipleRenderingTargets >::_bind_dtor(osg::FrameBufferObject::MultipleRenderingTargets* obj) {
	delete obj;
}

const char LunaTraits< osg::FrameBufferObject::MultipleRenderingTargets >::className[] = "MultipleRenderingTargets";
const char LunaTraits< osg::FrameBufferObject::MultipleRenderingTargets >::fullName[] = "osg::FrameBufferObject::MultipleRenderingTargets";
const char LunaTraits< osg::FrameBufferObject::MultipleRenderingTargets >::moduleName[] = "osg";
const char* LunaTraits< osg::FrameBufferObject::MultipleRenderingTargets >::parents[] = {0};
const int LunaTraits< osg::FrameBufferObject::MultipleRenderingTargets >::hash = 20278517;
const int LunaTraits< osg::FrameBufferObject::MultipleRenderingTargets >::uniqueIDs[] = {20278517,0};

luna_RegType LunaTraits< osg::FrameBufferObject::MultipleRenderingTargets >::methods[] = {
	{"dynCast", &luna_wrapper_osg_FrameBufferObject_MultipleRenderingTargets::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FrameBufferObject::MultipleRenderingTargets >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FrameBufferObject::MultipleRenderingTargets >::enumValues[] = {
	{0,0}
};


