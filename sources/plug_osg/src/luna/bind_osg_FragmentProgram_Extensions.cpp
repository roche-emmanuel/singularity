#include <plug_common.h>

class luna_wrapper_osg_FragmentProgram_Extensions {
public:
	typedef Luna< osg::FragmentProgram::Extensions > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::FragmentProgram::Extensions* ptr= dynamic_cast< osg::FragmentProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FragmentProgram::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setFragmentProgramSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isFragmentProgramSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glBindProgram(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGenPrograms(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDeletePrograms(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glProgramString(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glProgramLocalParameter4fv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::FragmentProgram::Extensions::Extensions(unsigned int contextID)
	static osg::FragmentProgram::Extensions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FragmentProgram::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::FragmentProgram::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::FragmentProgram::Extensions(contextID);
	}


	// Function binds:
	// void osg::FragmentProgram::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::FragmentProgram::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::FragmentProgram::Extensions* self=dynamic_cast< osg::FragmentProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::FragmentProgram::Extensions::setFragmentProgramSupported(bool flag)
	static int _bind_setFragmentProgramSupported(lua_State *L) {
		if (!_lg_typecheck_setFragmentProgramSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::Extensions::setFragmentProgramSupported(bool flag) function, expected prototype:\nvoid osg::FragmentProgram::Extensions::setFragmentProgramSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::FragmentProgram::Extensions* self=dynamic_cast< osg::FragmentProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::Extensions::setFragmentProgramSupported(bool)");
		}
		self->setFragmentProgramSupported(flag);

		return 0;
	}

	// bool osg::FragmentProgram::Extensions::isFragmentProgramSupported() const
	static int _bind_isFragmentProgramSupported(lua_State *L) {
		if (!_lg_typecheck_isFragmentProgramSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FragmentProgram::Extensions::isFragmentProgramSupported() const function, expected prototype:\nbool osg::FragmentProgram::Extensions::isFragmentProgramSupported() const\nClass arguments details:\n");
		}


		osg::FragmentProgram::Extensions* self=dynamic_cast< osg::FragmentProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FragmentProgram::Extensions::isFragmentProgramSupported() const");
		}
		bool lret = self->isFragmentProgramSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::FragmentProgram::Extensions::glBindProgram(unsigned int target, unsigned int id) const
	static int _bind_glBindProgram(lua_State *L) {
		if (!_lg_typecheck_glBindProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::Extensions::glBindProgram(unsigned int target, unsigned int id) const function, expected prototype:\nvoid osg::FragmentProgram::Extensions::glBindProgram(unsigned int target, unsigned int id) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int id=(unsigned int)lua_tointeger(L,3);

		osg::FragmentProgram::Extensions* self=dynamic_cast< osg::FragmentProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::Extensions::glBindProgram(unsigned int, unsigned int) const");
		}
		self->glBindProgram(target, id);

		return 0;
	}

	// void osg::FragmentProgram::Extensions::glGenPrograms(int n, unsigned int * programs) const
	static int _bind_glGenPrograms(lua_State *L) {
		if (!_lg_typecheck_glGenPrograms(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::Extensions::glGenPrograms(int n, unsigned int * programs) const function, expected prototype:\nvoid osg::FragmentProgram::Extensions::glGenPrograms(int n, unsigned int * programs) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int programs=(unsigned int)lua_tointeger(L,3);

		osg::FragmentProgram::Extensions* self=dynamic_cast< osg::FragmentProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::Extensions::glGenPrograms(int, unsigned int *) const");
		}
		self->glGenPrograms(n, &programs);

		return 0;
	}

	// void osg::FragmentProgram::Extensions::glDeletePrograms(int n, unsigned int * programs) const
	static int _bind_glDeletePrograms(lua_State *L) {
		if (!_lg_typecheck_glDeletePrograms(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::Extensions::glDeletePrograms(int n, unsigned int * programs) const function, expected prototype:\nvoid osg::FragmentProgram::Extensions::glDeletePrograms(int n, unsigned int * programs) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int programs=(unsigned int)lua_tointeger(L,3);

		osg::FragmentProgram::Extensions* self=dynamic_cast< osg::FragmentProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::Extensions::glDeletePrograms(int, unsigned int *) const");
		}
		self->glDeletePrograms(n, &programs);

		return 0;
	}

	// void osg::FragmentProgram::Extensions::glProgramString(unsigned int target, unsigned int format, int len, const void * string) const
	static int _bind_glProgramString(lua_State *L) {
		if (!_lg_typecheck_glProgramString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::Extensions::glProgramString(unsigned int target, unsigned int format, int len, const void * string) const function, expected prototype:\nvoid osg::FragmentProgram::Extensions::glProgramString(unsigned int target, unsigned int format, int len, const void * string) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int format=(unsigned int)lua_tointeger(L,3);
		int len=(int)lua_tointeger(L,4);
		void* string=(Luna< void >::check(L,5));

		osg::FragmentProgram::Extensions* self=dynamic_cast< osg::FragmentProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::Extensions::glProgramString(unsigned int, unsigned int, int, const void *) const");
		}
		self->glProgramString(target, format, len, string);

		return 0;
	}

	// void osg::FragmentProgram::Extensions::glProgramLocalParameter4fv(unsigned int target, unsigned int index, const float * params) const
	static int _bind_glProgramLocalParameter4fv(lua_State *L) {
		if (!_lg_typecheck_glProgramLocalParameter4fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::Extensions::glProgramLocalParameter4fv(unsigned int target, unsigned int index, const float * params) const function, expected prototype:\nvoid osg::FragmentProgram::Extensions::glProgramLocalParameter4fv(unsigned int target, unsigned int index, const float * params) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int index=(unsigned int)lua_tointeger(L,3);
		float params=(float)lua_tonumber(L,4);

		osg::FragmentProgram::Extensions* self=dynamic_cast< osg::FragmentProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::Extensions::glProgramLocalParameter4fv(unsigned int, unsigned int, const float *) const");
		}
		self->glProgramLocalParameter4fv(target, index, &params);

		return 0;
	}


	// Operator binds:

};

osg::FragmentProgram::Extensions* LunaTraits< osg::FragmentProgram::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FragmentProgram_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::FragmentProgram::Extensions >::_bind_dtor(osg::FragmentProgram::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FragmentProgram::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::FragmentProgram::Extensions >::fullName[] = "osg::FragmentProgram::Extensions";
const char LunaTraits< osg::FragmentProgram::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::FragmentProgram::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::FragmentProgram::Extensions >::hash = 76991288;
const int LunaTraits< osg::FragmentProgram::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FragmentProgram::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_FragmentProgram_Extensions::_bind_setupGLExtensions},
	{"setFragmentProgramSupported", &luna_wrapper_osg_FragmentProgram_Extensions::_bind_setFragmentProgramSupported},
	{"isFragmentProgramSupported", &luna_wrapper_osg_FragmentProgram_Extensions::_bind_isFragmentProgramSupported},
	{"glBindProgram", &luna_wrapper_osg_FragmentProgram_Extensions::_bind_glBindProgram},
	{"glGenPrograms", &luna_wrapper_osg_FragmentProgram_Extensions::_bind_glGenPrograms},
	{"glDeletePrograms", &luna_wrapper_osg_FragmentProgram_Extensions::_bind_glDeletePrograms},
	{"glProgramString", &luna_wrapper_osg_FragmentProgram_Extensions::_bind_glProgramString},
	{"glProgramLocalParameter4fv", &luna_wrapper_osg_FragmentProgram_Extensions::_bind_glProgramLocalParameter4fv},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FragmentProgram::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FragmentProgram_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FragmentProgram::Extensions >::enumValues[] = {
	{0,0}
};


