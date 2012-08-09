#include <plug_common.h>

class luna_wrapper_osg_ClampColor_Extensions {
public:
	typedef Luna< osg::ClampColor::Extensions > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ClampColor::Extensions* ptr= dynamic_cast< osg::ClampColor::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ClampColor::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setClampColorSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isClampColorSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glClampColor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ClampColor::Extensions::Extensions(unsigned int contextID)
	static osg::ClampColor::Extensions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClampColor::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::ClampColor::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::ClampColor::Extensions(contextID);
	}


	// Function binds:
	// void osg::ClampColor::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClampColor::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::ClampColor::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::ClampColor::Extensions* self=dynamic_cast< osg::ClampColor::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClampColor::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::ClampColor::Extensions::setClampColorSupported(bool flag)
	static int _bind_setClampColorSupported(lua_State *L) {
		if (!_lg_typecheck_setClampColorSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClampColor::Extensions::setClampColorSupported(bool flag) function, expected prototype:\nvoid osg::ClampColor::Extensions::setClampColorSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::ClampColor::Extensions* self=dynamic_cast< osg::ClampColor::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClampColor::Extensions::setClampColorSupported(bool)");
		}
		self->setClampColorSupported(flag);

		return 0;
	}

	// bool osg::ClampColor::Extensions::isClampColorSupported() const
	static int _bind_isClampColorSupported(lua_State *L) {
		if (!_lg_typecheck_isClampColorSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClampColor::Extensions::isClampColorSupported() const function, expected prototype:\nbool osg::ClampColor::Extensions::isClampColorSupported() const\nClass arguments details:\n");
		}


		osg::ClampColor::Extensions* self=dynamic_cast< osg::ClampColor::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClampColor::Extensions::isClampColorSupported() const");
		}
		bool lret = self->isClampColorSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ClampColor::Extensions::glClampColor(unsigned int target, unsigned int mode) const
	static int _bind_glClampColor(lua_State *L) {
		if (!_lg_typecheck_glClampColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClampColor::Extensions::glClampColor(unsigned int target, unsigned int mode) const function, expected prototype:\nvoid osg::ClampColor::Extensions::glClampColor(unsigned int target, unsigned int mode) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);

		osg::ClampColor::Extensions* self=dynamic_cast< osg::ClampColor::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClampColor::Extensions::glClampColor(unsigned int, unsigned int) const");
		}
		self->glClampColor(target, mode);

		return 0;
	}


	// Operator binds:

};

osg::ClampColor::Extensions* LunaTraits< osg::ClampColor::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ClampColor_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::ClampColor::Extensions >::_bind_dtor(osg::ClampColor::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ClampColor::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::ClampColor::Extensions >::fullName[] = "osg::ClampColor::Extensions";
const char LunaTraits< osg::ClampColor::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::ClampColor::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::ClampColor::Extensions >::hash = 80623331;
const int LunaTraits< osg::ClampColor::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ClampColor::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_ClampColor_Extensions::_bind_setupGLExtensions},
	{"setClampColorSupported", &luna_wrapper_osg_ClampColor_Extensions::_bind_setClampColorSupported},
	{"isClampColorSupported", &luna_wrapper_osg_ClampColor_Extensions::_bind_isClampColorSupported},
	{"glClampColor", &luna_wrapper_osg_ClampColor_Extensions::_bind_glClampColor},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClampColor::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ClampColor_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClampColor::Extensions >::enumValues[] = {
	{0,0}
};

