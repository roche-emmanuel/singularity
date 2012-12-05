#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Multisample_Extensions.h>

class luna_wrapper_osg_Multisample_Extensions {
public:
	typedef Luna< osg::Multisample::Extensions > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Multisample::Extensions* ptr= dynamic_cast< osg::Multisample::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Multisample::Extensions >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setupGLExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMultisampleSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMultisampleFilterHintSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isMultisampleSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isMultisampleFilterHintSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glSampleCoverage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Multisample::Extensions::Extensions(unsigned int contextID)
	static osg::Multisample::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Multisample::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::Multisample::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::Multisample::Extensions(contextID);
	}

	// osg::Multisample::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::Multisample::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Multisample::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::Multisample::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_Multisample_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::Multisample::Extensions::Extensions
	static osg::Multisample::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Multisample::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::Multisample::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Multisample::Extensions* self=dynamic_cast< osg::Multisample::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::Multisample::Extensions::setMultisampleSupported(bool flag)
	static int _bind_setMultisampleSupported(lua_State *L) {
		if (!_lg_typecheck_setMultisampleSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::Extensions::setMultisampleSupported(bool flag) function, expected prototype:\nvoid osg::Multisample::Extensions::setMultisampleSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Multisample::Extensions* self=dynamic_cast< osg::Multisample::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::Extensions::setMultisampleSupported(bool)");
		}
		self->setMultisampleSupported(flag);

		return 0;
	}

	// void osg::Multisample::Extensions::setMultisampleFilterHintSupported(bool flag)
	static int _bind_setMultisampleFilterHintSupported(lua_State *L) {
		if (!_lg_typecheck_setMultisampleFilterHintSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::Extensions::setMultisampleFilterHintSupported(bool flag) function, expected prototype:\nvoid osg::Multisample::Extensions::setMultisampleFilterHintSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Multisample::Extensions* self=dynamic_cast< osg::Multisample::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::Extensions::setMultisampleFilterHintSupported(bool)");
		}
		self->setMultisampleFilterHintSupported(flag);

		return 0;
	}

	// bool osg::Multisample::Extensions::isMultisampleSupported() const
	static int _bind_isMultisampleSupported(lua_State *L) {
		if (!_lg_typecheck_isMultisampleSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::Extensions::isMultisampleSupported() const function, expected prototype:\nbool osg::Multisample::Extensions::isMultisampleSupported() const\nClass arguments details:\n");
		}


		osg::Multisample::Extensions* self=dynamic_cast< osg::Multisample::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Multisample::Extensions::isMultisampleSupported() const");
		}
		bool lret = self->isMultisampleSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Multisample::Extensions::isMultisampleFilterHintSupported() const
	static int _bind_isMultisampleFilterHintSupported(lua_State *L) {
		if (!_lg_typecheck_isMultisampleFilterHintSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::Extensions::isMultisampleFilterHintSupported() const function, expected prototype:\nbool osg::Multisample::Extensions::isMultisampleFilterHintSupported() const\nClass arguments details:\n");
		}


		osg::Multisample::Extensions* self=dynamic_cast< osg::Multisample::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Multisample::Extensions::isMultisampleFilterHintSupported() const");
		}
		bool lret = self->isMultisampleFilterHintSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Multisample::Extensions::glSampleCoverage(float value, unsigned char invert) const
	static int _bind_glSampleCoverage(lua_State *L) {
		if (!_lg_typecheck_glSampleCoverage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::Extensions::glSampleCoverage(float value, unsigned char invert) const function, expected prototype:\nvoid osg::Multisample::Extensions::glSampleCoverage(float value, unsigned char invert) const\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);
		unsigned char invert = (unsigned char)(lua_tointeger(L,3));

		osg::Multisample::Extensions* self=dynamic_cast< osg::Multisample::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::Extensions::glSampleCoverage(float, unsigned char) const");
		}
		self->glSampleCoverage(value, invert);

		return 0;
	}


	// Operator binds:

};

osg::Multisample::Extensions* LunaTraits< osg::Multisample::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Multisample_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::Multisample::Extensions >::_bind_dtor(osg::Multisample::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Multisample::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::Multisample::Extensions >::fullName[] = "osg::Multisample::Extensions";
const char LunaTraits< osg::Multisample::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::Multisample::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Multisample::Extensions >::hash = 56776103;
const int LunaTraits< osg::Multisample::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Multisample::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_Multisample_Extensions::_bind_setupGLExtensions},
	{"setMultisampleSupported", &luna_wrapper_osg_Multisample_Extensions::_bind_setMultisampleSupported},
	{"setMultisampleFilterHintSupported", &luna_wrapper_osg_Multisample_Extensions::_bind_setMultisampleFilterHintSupported},
	{"isMultisampleSupported", &luna_wrapper_osg_Multisample_Extensions::_bind_isMultisampleSupported},
	{"isMultisampleFilterHintSupported", &luna_wrapper_osg_Multisample_Extensions::_bind_isMultisampleFilterHintSupported},
	{"glSampleCoverage", &luna_wrapper_osg_Multisample_Extensions::_bind_glSampleCoverage},
	{"__eq", &luna_wrapper_osg_Multisample_Extensions::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Multisample::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Multisample_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Multisample::Extensions >::enumValues[] = {
	{0,0}
};


