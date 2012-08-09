#include <plug_common.h>

class luna_wrapper_osg_StencilTwoSided_Extensions {
public:
	typedef Luna< osg::StencilTwoSided::Extensions > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::StencilTwoSided::Extensions* ptr= dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::StencilTwoSided::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setStencilTwoSidedSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isStencilTwoSidedSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOpenGL20Supported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOpenGL20Supported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSeparateStencilSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSeparateStencilSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glActiveStencilFace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glStencilOpSeparate(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glStencilMaskSeparate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glStencilFuncSeparate(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glStencilFuncSeparateATI(lua_State *L) {
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
	// osg::StencilTwoSided::Extensions::Extensions(unsigned int contextID)
	static osg::StencilTwoSided::Extensions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::StencilTwoSided::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::StencilTwoSided::Extensions(contextID);
	}


	// Function binds:
	// void osg::StencilTwoSided::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::StencilTwoSided::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::StencilTwoSided::Extensions::setStencilTwoSidedSupported(bool flag)
	static int _bind_setStencilTwoSidedSupported(lua_State *L) {
		if (!_lg_typecheck_setStencilTwoSidedSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::Extensions::setStencilTwoSidedSupported(bool flag) function, expected prototype:\nvoid osg::StencilTwoSided::Extensions::setStencilTwoSidedSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::Extensions::setStencilTwoSidedSupported(bool)");
		}
		self->setStencilTwoSidedSupported(flag);

		return 0;
	}

	// bool osg::StencilTwoSided::Extensions::isStencilTwoSidedSupported() const
	static int _bind_isStencilTwoSidedSupported(lua_State *L) {
		if (!_lg_typecheck_isStencilTwoSidedSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::StencilTwoSided::Extensions::isStencilTwoSidedSupported() const function, expected prototype:\nbool osg::StencilTwoSided::Extensions::isStencilTwoSidedSupported() const\nClass arguments details:\n");
		}


		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::StencilTwoSided::Extensions::isStencilTwoSidedSupported() const");
		}
		bool lret = self->isStencilTwoSidedSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StencilTwoSided::Extensions::setOpenGL20Supported(bool flag)
	static int _bind_setOpenGL20Supported(lua_State *L) {
		if (!_lg_typecheck_setOpenGL20Supported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::Extensions::setOpenGL20Supported(bool flag) function, expected prototype:\nvoid osg::StencilTwoSided::Extensions::setOpenGL20Supported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::Extensions::setOpenGL20Supported(bool)");
		}
		self->setOpenGL20Supported(flag);

		return 0;
	}

	// bool osg::StencilTwoSided::Extensions::isOpenGL20Supported() const
	static int _bind_isOpenGL20Supported(lua_State *L) {
		if (!_lg_typecheck_isOpenGL20Supported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::StencilTwoSided::Extensions::isOpenGL20Supported() const function, expected prototype:\nbool osg::StencilTwoSided::Extensions::isOpenGL20Supported() const\nClass arguments details:\n");
		}


		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::StencilTwoSided::Extensions::isOpenGL20Supported() const");
		}
		bool lret = self->isOpenGL20Supported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StencilTwoSided::Extensions::setSeparateStencilSupported(bool flag)
	static int _bind_setSeparateStencilSupported(lua_State *L) {
		if (!_lg_typecheck_setSeparateStencilSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::Extensions::setSeparateStencilSupported(bool flag) function, expected prototype:\nvoid osg::StencilTwoSided::Extensions::setSeparateStencilSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::Extensions::setSeparateStencilSupported(bool)");
		}
		self->setSeparateStencilSupported(flag);

		return 0;
	}

	// bool osg::StencilTwoSided::Extensions::isSeparateStencilSupported() const
	static int _bind_isSeparateStencilSupported(lua_State *L) {
		if (!_lg_typecheck_isSeparateStencilSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::StencilTwoSided::Extensions::isSeparateStencilSupported() const function, expected prototype:\nbool osg::StencilTwoSided::Extensions::isSeparateStencilSupported() const\nClass arguments details:\n");
		}


		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::StencilTwoSided::Extensions::isSeparateStencilSupported() const");
		}
		bool lret = self->isSeparateStencilSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StencilTwoSided::Extensions::glActiveStencilFace(unsigned int face) const
	static int _bind_glActiveStencilFace(lua_State *L) {
		if (!_lg_typecheck_glActiveStencilFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::Extensions::glActiveStencilFace(unsigned int face) const function, expected prototype:\nvoid osg::StencilTwoSided::Extensions::glActiveStencilFace(unsigned int face) const\nClass arguments details:\n");
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);

		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::Extensions::glActiveStencilFace(unsigned int) const");
		}
		self->glActiveStencilFace(face);

		return 0;
	}

	// void osg::StencilTwoSided::Extensions::glStencilOpSeparate(unsigned int face, unsigned int sfail, unsigned int dpfail, unsigned int dppass) const
	static int _bind_glStencilOpSeparate(lua_State *L) {
		if (!_lg_typecheck_glStencilOpSeparate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::Extensions::glStencilOpSeparate(unsigned int face, unsigned int sfail, unsigned int dpfail, unsigned int dppass) const function, expected prototype:\nvoid osg::StencilTwoSided::Extensions::glStencilOpSeparate(unsigned int face, unsigned int sfail, unsigned int dpfail, unsigned int dppass) const\nClass arguments details:\n");
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);
		unsigned int sfail=(unsigned int)lua_tointeger(L,3);
		unsigned int dpfail=(unsigned int)lua_tointeger(L,4);
		unsigned int dppass=(unsigned int)lua_tointeger(L,5);

		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::Extensions::glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int) const");
		}
		self->glStencilOpSeparate(face, sfail, dpfail, dppass);

		return 0;
	}

	// void osg::StencilTwoSided::Extensions::glStencilMaskSeparate(unsigned int face, unsigned int mask) const
	static int _bind_glStencilMaskSeparate(lua_State *L) {
		if (!_lg_typecheck_glStencilMaskSeparate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::Extensions::glStencilMaskSeparate(unsigned int face, unsigned int mask) const function, expected prototype:\nvoid osg::StencilTwoSided::Extensions::glStencilMaskSeparate(unsigned int face, unsigned int mask) const\nClass arguments details:\n");
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);
		unsigned int mask=(unsigned int)lua_tointeger(L,3);

		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::Extensions::glStencilMaskSeparate(unsigned int, unsigned int) const");
		}
		self->glStencilMaskSeparate(face, mask);

		return 0;
	}

	// void osg::StencilTwoSided::Extensions::glStencilFuncSeparate(unsigned int face, unsigned int func, int ref, unsigned int mask) const
	static int _bind_glStencilFuncSeparate(lua_State *L) {
		if (!_lg_typecheck_glStencilFuncSeparate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::Extensions::glStencilFuncSeparate(unsigned int face, unsigned int func, int ref, unsigned int mask) const function, expected prototype:\nvoid osg::StencilTwoSided::Extensions::glStencilFuncSeparate(unsigned int face, unsigned int func, int ref, unsigned int mask) const\nClass arguments details:\n");
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);
		unsigned int func=(unsigned int)lua_tointeger(L,3);
		int ref=(int)lua_tointeger(L,4);
		unsigned int mask=(unsigned int)lua_tointeger(L,5);

		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::Extensions::glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int) const");
		}
		self->glStencilFuncSeparate(face, func, ref, mask);

		return 0;
	}

	// void osg::StencilTwoSided::Extensions::glStencilFuncSeparateATI(unsigned int frontfunc, unsigned int backfunc, int ref, unsigned int mask) const
	static int _bind_glStencilFuncSeparateATI(lua_State *L) {
		if (!_lg_typecheck_glStencilFuncSeparateATI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::Extensions::glStencilFuncSeparateATI(unsigned int frontfunc, unsigned int backfunc, int ref, unsigned int mask) const function, expected prototype:\nvoid osg::StencilTwoSided::Extensions::glStencilFuncSeparateATI(unsigned int frontfunc, unsigned int backfunc, int ref, unsigned int mask) const\nClass arguments details:\n");
		}

		unsigned int frontfunc=(unsigned int)lua_tointeger(L,2);
		unsigned int backfunc=(unsigned int)lua_tointeger(L,3);
		int ref=(int)lua_tointeger(L,4);
		unsigned int mask=(unsigned int)lua_tointeger(L,5);

		osg::StencilTwoSided::Extensions* self=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::Extensions::glStencilFuncSeparateATI(unsigned int, unsigned int, int, unsigned int) const");
		}
		self->glStencilFuncSeparateATI(frontfunc, backfunc, ref, mask);

		return 0;
	}


	// Operator binds:

};

osg::StencilTwoSided::Extensions* LunaTraits< osg::StencilTwoSided::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_StencilTwoSided_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::StencilTwoSided::Extensions >::_bind_dtor(osg::StencilTwoSided::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::StencilTwoSided::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::StencilTwoSided::Extensions >::fullName[] = "osg::StencilTwoSided::Extensions";
const char LunaTraits< osg::StencilTwoSided::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::StencilTwoSided::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::StencilTwoSided::Extensions >::hash = 51512429;
const int LunaTraits< osg::StencilTwoSided::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::StencilTwoSided::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_setupGLExtensions},
	{"setStencilTwoSidedSupported", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_setStencilTwoSidedSupported},
	{"isStencilTwoSidedSupported", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_isStencilTwoSidedSupported},
	{"setOpenGL20Supported", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_setOpenGL20Supported},
	{"isOpenGL20Supported", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_isOpenGL20Supported},
	{"setSeparateStencilSupported", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_setSeparateStencilSupported},
	{"isSeparateStencilSupported", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_isSeparateStencilSupported},
	{"glActiveStencilFace", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_glActiveStencilFace},
	{"glStencilOpSeparate", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_glStencilOpSeparate},
	{"glStencilMaskSeparate", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_glStencilMaskSeparate},
	{"glStencilFuncSeparate", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_glStencilFuncSeparate},
	{"glStencilFuncSeparateATI", &luna_wrapper_osg_StencilTwoSided_Extensions::_bind_glStencilFuncSeparateATI},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StencilTwoSided::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_StencilTwoSided_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StencilTwoSided::Extensions >::enumValues[] = {
	{0,0}
};

