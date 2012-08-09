#include <plug_common.h>

class luna_wrapper_osg_Point_Extensions {
public:
	typedef Luna< osg::Point::Extensions > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Point::Extensions* ptr= dynamic_cast< osg::Point::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Point::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setPointParametersSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isPointParametersSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPointSpriteCoordOriginSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isPointSpriteCoordOriginSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glPointParameteri(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glPointParameterf(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glPointParameterfv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Point::Extensions::Extensions(unsigned int contextID)
	static osg::Point::Extensions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Point::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::Point::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::Point::Extensions(contextID);
	}


	// Function binds:
	// void osg::Point::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::Point::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Point::Extensions* self=dynamic_cast< osg::Point::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::Point::Extensions::setPointParametersSupported(bool flag)
	static int _bind_setPointParametersSupported(lua_State *L) {
		if (!_lg_typecheck_setPointParametersSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::setPointParametersSupported(bool flag) function, expected prototype:\nvoid osg::Point::Extensions::setPointParametersSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Point::Extensions* self=dynamic_cast< osg::Point::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::setPointParametersSupported(bool)");
		}
		self->setPointParametersSupported(flag);

		return 0;
	}

	// bool osg::Point::Extensions::isPointParametersSupported() const
	static int _bind_isPointParametersSupported(lua_State *L) {
		if (!_lg_typecheck_isPointParametersSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Point::Extensions::isPointParametersSupported() const function, expected prototype:\nbool osg::Point::Extensions::isPointParametersSupported() const\nClass arguments details:\n");
		}


		osg::Point::Extensions* self=dynamic_cast< osg::Point::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Point::Extensions::isPointParametersSupported() const");
		}
		bool lret = self->isPointParametersSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Point::Extensions::setPointSpriteCoordOriginSupported(bool flag)
	static int _bind_setPointSpriteCoordOriginSupported(lua_State *L) {
		if (!_lg_typecheck_setPointSpriteCoordOriginSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::setPointSpriteCoordOriginSupported(bool flag) function, expected prototype:\nvoid osg::Point::Extensions::setPointSpriteCoordOriginSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Point::Extensions* self=dynamic_cast< osg::Point::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::setPointSpriteCoordOriginSupported(bool)");
		}
		self->setPointSpriteCoordOriginSupported(flag);

		return 0;
	}

	// bool osg::Point::Extensions::isPointSpriteCoordOriginSupported() const
	static int _bind_isPointSpriteCoordOriginSupported(lua_State *L) {
		if (!_lg_typecheck_isPointSpriteCoordOriginSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Point::Extensions::isPointSpriteCoordOriginSupported() const function, expected prototype:\nbool osg::Point::Extensions::isPointSpriteCoordOriginSupported() const\nClass arguments details:\n");
		}


		osg::Point::Extensions* self=dynamic_cast< osg::Point::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Point::Extensions::isPointSpriteCoordOriginSupported() const");
		}
		bool lret = self->isPointSpriteCoordOriginSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Point::Extensions::glPointParameteri(unsigned int pname, int param) const
	static int _bind_glPointParameteri(lua_State *L) {
		if (!_lg_typecheck_glPointParameteri(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::glPointParameteri(unsigned int pname, int param) const function, expected prototype:\nvoid osg::Point::Extensions::glPointParameteri(unsigned int pname, int param) const\nClass arguments details:\n");
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);
		int param=(int)lua_tointeger(L,3);

		osg::Point::Extensions* self=dynamic_cast< osg::Point::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::glPointParameteri(unsigned int, int) const");
		}
		self->glPointParameteri(pname, param);

		return 0;
	}

	// void osg::Point::Extensions::glPointParameterf(unsigned int pname, float param) const
	static int _bind_glPointParameterf(lua_State *L) {
		if (!_lg_typecheck_glPointParameterf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::glPointParameterf(unsigned int pname, float param) const function, expected prototype:\nvoid osg::Point::Extensions::glPointParameterf(unsigned int pname, float param) const\nClass arguments details:\n");
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);
		float param=(float)lua_tonumber(L,3);

		osg::Point::Extensions* self=dynamic_cast< osg::Point::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::glPointParameterf(unsigned int, float) const");
		}
		self->glPointParameterf(pname, param);

		return 0;
	}

	// void osg::Point::Extensions::glPointParameterfv(unsigned int pname, const float * params) const
	static int _bind_glPointParameterfv(lua_State *L) {
		if (!_lg_typecheck_glPointParameterfv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::glPointParameterfv(unsigned int pname, const float * params) const function, expected prototype:\nvoid osg::Point::Extensions::glPointParameterfv(unsigned int pname, const float * params) const\nClass arguments details:\n");
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);
		float params=(float)lua_tonumber(L,3);

		osg::Point::Extensions* self=dynamic_cast< osg::Point::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::glPointParameterfv(unsigned int, const float *) const");
		}
		self->glPointParameterfv(pname, &params);

		return 0;
	}


	// Operator binds:

};

osg::Point::Extensions* LunaTraits< osg::Point::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Point_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::Point::Extensions >::_bind_dtor(osg::Point::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Point::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::Point::Extensions >::fullName[] = "osg::Point::Extensions";
const char LunaTraits< osg::Point::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::Point::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Point::Extensions >::hash = 7930307;
const int LunaTraits< osg::Point::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Point::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_Point_Extensions::_bind_setupGLExtensions},
	{"setPointParametersSupported", &luna_wrapper_osg_Point_Extensions::_bind_setPointParametersSupported},
	{"isPointParametersSupported", &luna_wrapper_osg_Point_Extensions::_bind_isPointParametersSupported},
	{"setPointSpriteCoordOriginSupported", &luna_wrapper_osg_Point_Extensions::_bind_setPointSpriteCoordOriginSupported},
	{"isPointSpriteCoordOriginSupported", &luna_wrapper_osg_Point_Extensions::_bind_isPointSpriteCoordOriginSupported},
	{"glPointParameteri", &luna_wrapper_osg_Point_Extensions::_bind_glPointParameteri},
	{"glPointParameterf", &luna_wrapper_osg_Point_Extensions::_bind_glPointParameterf},
	{"glPointParameterfv", &luna_wrapper_osg_Point_Extensions::_bind_glPointParameterfv},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Point::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Point_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Point::Extensions >::enumValues[] = {
	{0,0}
};

