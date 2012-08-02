#include <plug_common.h>

class luna_wrapper_osg_BlendEquation_Extensions {
public:
	typedef Luna< osg::BlendEquation::Extensions > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::BlendEquation::Extensions* ptr= dynamic_cast< osg::BlendEquation::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlendEquation::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_isBlendEquationSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isBlendEquationSeparateSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSGIXMinMaxSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLogicOpSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glBlendEquation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBlendEquationSeparate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::BlendEquation::Extensions::Extensions(unsigned int contextID)
	static osg::BlendEquation::Extensions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::BlendEquation::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::BlendEquation::Extensions(contextID);
	}


	// Function binds:
	// void osg::BlendEquation::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::BlendEquation::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::BlendEquation::Extensions* self=dynamic_cast< osg::BlendEquation::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// bool osg::BlendEquation::Extensions::isBlendEquationSupported() const
	static int _bind_isBlendEquationSupported(lua_State *L) {
		if (!_lg_typecheck_isBlendEquationSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::Extensions::isBlendEquationSupported() const function, expected prototype:\nbool osg::BlendEquation::Extensions::isBlendEquationSupported() const\nClass arguments details:\n");
		}


		osg::BlendEquation::Extensions* self=dynamic_cast< osg::BlendEquation::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::Extensions::isBlendEquationSupported() const");
		}
		bool lret = self->isBlendEquationSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BlendEquation::Extensions::isBlendEquationSeparateSupported() const
	static int _bind_isBlendEquationSeparateSupported(lua_State *L) {
		if (!_lg_typecheck_isBlendEquationSeparateSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::Extensions::isBlendEquationSeparateSupported() const function, expected prototype:\nbool osg::BlendEquation::Extensions::isBlendEquationSeparateSupported() const\nClass arguments details:\n");
		}


		osg::BlendEquation::Extensions* self=dynamic_cast< osg::BlendEquation::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::Extensions::isBlendEquationSeparateSupported() const");
		}
		bool lret = self->isBlendEquationSeparateSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BlendEquation::Extensions::isSGIXMinMaxSupported() const
	static int _bind_isSGIXMinMaxSupported(lua_State *L) {
		if (!_lg_typecheck_isSGIXMinMaxSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::Extensions::isSGIXMinMaxSupported() const function, expected prototype:\nbool osg::BlendEquation::Extensions::isSGIXMinMaxSupported() const\nClass arguments details:\n");
		}


		osg::BlendEquation::Extensions* self=dynamic_cast< osg::BlendEquation::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::Extensions::isSGIXMinMaxSupported() const");
		}
		bool lret = self->isSGIXMinMaxSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BlendEquation::Extensions::isLogicOpSupported() const
	static int _bind_isLogicOpSupported(lua_State *L) {
		if (!_lg_typecheck_isLogicOpSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::Extensions::isLogicOpSupported() const function, expected prototype:\nbool osg::BlendEquation::Extensions::isLogicOpSupported() const\nClass arguments details:\n");
		}


		osg::BlendEquation::Extensions* self=dynamic_cast< osg::BlendEquation::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::Extensions::isLogicOpSupported() const");
		}
		bool lret = self->isLogicOpSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendEquation::Extensions::glBlendEquation(unsigned int mode) const
	static int _bind_glBlendEquation(lua_State *L) {
		if (!_lg_typecheck_glBlendEquation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::Extensions::glBlendEquation(unsigned int mode) const function, expected prototype:\nvoid osg::BlendEquation::Extensions::glBlendEquation(unsigned int mode) const\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::BlendEquation::Extensions* self=dynamic_cast< osg::BlendEquation::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::Extensions::glBlendEquation(unsigned int) const");
		}
		self->glBlendEquation(mode);

		return 0;
	}

	// void osg::BlendEquation::Extensions::glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha) const
	static int _bind_glBlendEquationSeparate(lua_State *L) {
		if (!_lg_typecheck_glBlendEquationSeparate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::Extensions::glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha) const function, expected prototype:\nvoid osg::BlendEquation::Extensions::glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha) const\nClass arguments details:\n");
		}

		unsigned int modeRGB=(unsigned int)lua_tointeger(L,2);
		unsigned int modeAlpha=(unsigned int)lua_tointeger(L,3);

		osg::BlendEquation::Extensions* self=dynamic_cast< osg::BlendEquation::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::Extensions::glBlendEquationSeparate(unsigned int, unsigned int) const");
		}
		self->glBlendEquationSeparate(modeRGB, modeAlpha);

		return 0;
	}


	// Operator binds:

};

osg::BlendEquation::Extensions* LunaTraits< osg::BlendEquation::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlendEquation_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::BlendEquation::Extensions >::_bind_dtor(osg::BlendEquation::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlendEquation::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::BlendEquation::Extensions >::fullName[] = "osg::BlendEquation::Extensions";
const char LunaTraits< osg::BlendEquation::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::BlendEquation::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::BlendEquation::Extensions >::hash = 32642110;
const int LunaTraits< osg::BlendEquation::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BlendEquation::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_BlendEquation_Extensions::_bind_setupGLExtensions},
	{"isBlendEquationSupported", &luna_wrapper_osg_BlendEquation_Extensions::_bind_isBlendEquationSupported},
	{"isBlendEquationSeparateSupported", &luna_wrapper_osg_BlendEquation_Extensions::_bind_isBlendEquationSeparateSupported},
	{"isSGIXMinMaxSupported", &luna_wrapper_osg_BlendEquation_Extensions::_bind_isSGIXMinMaxSupported},
	{"isLogicOpSupported", &luna_wrapper_osg_BlendEquation_Extensions::_bind_isLogicOpSupported},
	{"glBlendEquation", &luna_wrapper_osg_BlendEquation_Extensions::_bind_glBlendEquation},
	{"glBlendEquationSeparate", &luna_wrapper_osg_BlendEquation_Extensions::_bind_glBlendEquationSeparate},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlendEquation::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlendEquation_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlendEquation::Extensions >::enumValues[] = {
	{0,0}
};


