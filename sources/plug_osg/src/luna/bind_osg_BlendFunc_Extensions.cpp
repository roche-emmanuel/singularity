#include <plug_common.h>

class luna_wrapper_osg_BlendFunc_Extensions {
public:
	typedef Luna< osg::BlendFunc::Extensions > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::BlendFunc::Extensions* ptr= dynamic_cast< osg::BlendFunc::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlendFunc::Extensions >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setupGLExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlendFuncSeparateSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBlendFuncSeparateSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glBlendFuncSeparate(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::BlendFunc::Extensions::Extensions(unsigned int contextID)
	static osg::BlendFunc::Extensions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendFunc::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::BlendFunc::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::BlendFunc::Extensions(contextID);
	}


	// Function binds:
	// void osg::BlendFunc::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::BlendFunc::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::BlendFunc::Extensions* self=dynamic_cast< osg::BlendFunc::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::BlendFunc::Extensions::setBlendFuncSeparateSupported(bool flag)
	static int _bind_setBlendFuncSeparateSupported(lua_State *L) {
		if (!_lg_typecheck_setBlendFuncSeparateSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::Extensions::setBlendFuncSeparateSupported(bool flag) function, expected prototype:\nvoid osg::BlendFunc::Extensions::setBlendFuncSeparateSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::BlendFunc::Extensions* self=dynamic_cast< osg::BlendFunc::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::Extensions::setBlendFuncSeparateSupported(bool)");
		}
		self->setBlendFuncSeparateSupported(flag);

		return 0;
	}

	// bool osg::BlendFunc::Extensions::isBlendFuncSeparateSupported() const
	static int _bind_isBlendFuncSeparateSupported(lua_State *L) {
		if (!_lg_typecheck_isBlendFuncSeparateSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendFunc::Extensions::isBlendFuncSeparateSupported() const function, expected prototype:\nbool osg::BlendFunc::Extensions::isBlendFuncSeparateSupported() const\nClass arguments details:\n");
		}


		osg::BlendFunc::Extensions* self=dynamic_cast< osg::BlendFunc::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendFunc::Extensions::isBlendFuncSeparateSupported() const");
		}
		bool lret = self->isBlendFuncSeparateSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendFunc::Extensions::glBlendFuncSeparate(unsigned int sfactorRGB, unsigned int dfactorRGB, unsigned int sfactorAlpha, unsigned int dfactorAlpha) const
	static int _bind_glBlendFuncSeparate(lua_State *L) {
		if (!_lg_typecheck_glBlendFuncSeparate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::Extensions::glBlendFuncSeparate(unsigned int sfactorRGB, unsigned int dfactorRGB, unsigned int sfactorAlpha, unsigned int dfactorAlpha) const function, expected prototype:\nvoid osg::BlendFunc::Extensions::glBlendFuncSeparate(unsigned int sfactorRGB, unsigned int dfactorRGB, unsigned int sfactorAlpha, unsigned int dfactorAlpha) const\nClass arguments details:\n");
		}

		unsigned int sfactorRGB=(unsigned int)lua_tointeger(L,2);
		unsigned int dfactorRGB=(unsigned int)lua_tointeger(L,3);
		unsigned int sfactorAlpha=(unsigned int)lua_tointeger(L,4);
		unsigned int dfactorAlpha=(unsigned int)lua_tointeger(L,5);

		osg::BlendFunc::Extensions* self=dynamic_cast< osg::BlendFunc::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::Extensions::glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int) const");
		}
		self->glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);

		return 0;
	}


	// Operator binds:

};

osg::BlendFunc::Extensions* LunaTraits< osg::BlendFunc::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlendFunc_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::BlendFunc::Extensions >::_bind_dtor(osg::BlendFunc::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlendFunc::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::BlendFunc::Extensions >::fullName[] = "osg::BlendFunc::Extensions";
const char LunaTraits< osg::BlendFunc::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::BlendFunc::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::BlendFunc::Extensions >::hash = 38271692;
const int LunaTraits< osg::BlendFunc::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BlendFunc::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_BlendFunc_Extensions::_bind_setupGLExtensions},
	{"setBlendFuncSeparateSupported", &luna_wrapper_osg_BlendFunc_Extensions::_bind_setBlendFuncSeparateSupported},
	{"isBlendFuncSeparateSupported", &luna_wrapper_osg_BlendFunc_Extensions::_bind_isBlendFuncSeparateSupported},
	{"glBlendFuncSeparate", &luna_wrapper_osg_BlendFunc_Extensions::_bind_glBlendFuncSeparate},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlendFunc::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlendFunc_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlendFunc::Extensions >::enumValues[] = {
	{0,0}
};

