#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_VertexProgram_Extensions.h>

class luna_wrapper_osg_VertexProgram_Extensions {
public:
	typedef Luna< osg::VertexProgram::Extensions > luna_t;

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
		osg::VertexProgram::Extensions* ptr= dynamic_cast< osg::VertexProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::VertexProgram::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setVertexProgramSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isVertexProgramSupported(lua_State *L) {
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
	// osg::VertexProgram::Extensions::Extensions(unsigned int contextID)
	static osg::VertexProgram::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexProgram::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::VertexProgram::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::VertexProgram::Extensions(contextID);
	}

	// osg::VertexProgram::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::VertexProgram::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexProgram::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::VertexProgram::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_VertexProgram_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::VertexProgram::Extensions::Extensions
	static osg::VertexProgram::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::VertexProgram::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::VertexProgram::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::VertexProgram::Extensions* self=dynamic_cast< osg::VertexProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::VertexProgram::Extensions::setVertexProgramSupported(bool flag)
	static int _bind_setVertexProgramSupported(lua_State *L) {
		if (!_lg_typecheck_setVertexProgramSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::Extensions::setVertexProgramSupported(bool flag) function, expected prototype:\nvoid osg::VertexProgram::Extensions::setVertexProgramSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::VertexProgram::Extensions* self=dynamic_cast< osg::VertexProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::Extensions::setVertexProgramSupported(bool)");
		}
		self->setVertexProgramSupported(flag);

		return 0;
	}

	// bool osg::VertexProgram::Extensions::isVertexProgramSupported() const
	static int _bind_isVertexProgramSupported(lua_State *L) {
		if (!_lg_typecheck_isVertexProgramSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::VertexProgram::Extensions::isVertexProgramSupported() const function, expected prototype:\nbool osg::VertexProgram::Extensions::isVertexProgramSupported() const\nClass arguments details:\n");
		}


		osg::VertexProgram::Extensions* self=dynamic_cast< osg::VertexProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::VertexProgram::Extensions::isVertexProgramSupported() const");
		}
		bool lret = self->isVertexProgramSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::VertexProgram::Extensions::glBindProgram(unsigned int target, unsigned int id) const
	static int _bind_glBindProgram(lua_State *L) {
		if (!_lg_typecheck_glBindProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::Extensions::glBindProgram(unsigned int target, unsigned int id) const function, expected prototype:\nvoid osg::VertexProgram::Extensions::glBindProgram(unsigned int target, unsigned int id) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int id=(unsigned int)lua_tointeger(L,3);

		osg::VertexProgram::Extensions* self=dynamic_cast< osg::VertexProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::Extensions::glBindProgram(unsigned int, unsigned int) const");
		}
		self->glBindProgram(target, id);

		return 0;
	}

	// void osg::VertexProgram::Extensions::glGenPrograms(int n, unsigned int * programs) const
	static int _bind_glGenPrograms(lua_State *L) {
		if (!_lg_typecheck_glGenPrograms(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::Extensions::glGenPrograms(int n, unsigned int * programs) const function, expected prototype:\nvoid osg::VertexProgram::Extensions::glGenPrograms(int n, unsigned int * programs) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int programs=(unsigned int)lua_tointeger(L,3);

		osg::VertexProgram::Extensions* self=dynamic_cast< osg::VertexProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::Extensions::glGenPrograms(int, unsigned int *) const");
		}
		self->glGenPrograms(n, &programs);

		return 0;
	}

	// void osg::VertexProgram::Extensions::glDeletePrograms(int n, unsigned int * programs) const
	static int _bind_glDeletePrograms(lua_State *L) {
		if (!_lg_typecheck_glDeletePrograms(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::Extensions::glDeletePrograms(int n, unsigned int * programs) const function, expected prototype:\nvoid osg::VertexProgram::Extensions::glDeletePrograms(int n, unsigned int * programs) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int programs=(unsigned int)lua_tointeger(L,3);

		osg::VertexProgram::Extensions* self=dynamic_cast< osg::VertexProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::Extensions::glDeletePrograms(int, unsigned int *) const");
		}
		self->glDeletePrograms(n, &programs);

		return 0;
	}

	// void osg::VertexProgram::Extensions::glProgramString(unsigned int target, unsigned int format, int len, const void * string) const
	static int _bind_glProgramString(lua_State *L) {
		if (!_lg_typecheck_glProgramString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::Extensions::glProgramString(unsigned int target, unsigned int format, int len, const void * string) const function, expected prototype:\nvoid osg::VertexProgram::Extensions::glProgramString(unsigned int target, unsigned int format, int len, const void * string) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int format=(unsigned int)lua_tointeger(L,3);
		int len=(int)lua_tointeger(L,4);
		void* string=(Luna< void >::check(L,5));

		osg::VertexProgram::Extensions* self=dynamic_cast< osg::VertexProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::Extensions::glProgramString(unsigned int, unsigned int, int, const void *) const");
		}
		self->glProgramString(target, format, len, string);

		return 0;
	}

	// void osg::VertexProgram::Extensions::glProgramLocalParameter4fv(unsigned int target, unsigned int index, const float * params) const
	static int _bind_glProgramLocalParameter4fv(lua_State *L) {
		if (!_lg_typecheck_glProgramLocalParameter4fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::Extensions::glProgramLocalParameter4fv(unsigned int target, unsigned int index, const float * params) const function, expected prototype:\nvoid osg::VertexProgram::Extensions::glProgramLocalParameter4fv(unsigned int target, unsigned int index, const float * params) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int index=(unsigned int)lua_tointeger(L,3);
		float params=(float)lua_tonumber(L,4);

		osg::VertexProgram::Extensions* self=dynamic_cast< osg::VertexProgram::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::Extensions::glProgramLocalParameter4fv(unsigned int, unsigned int, const float *) const");
		}
		self->glProgramLocalParameter4fv(target, index, &params);

		return 0;
	}


	// Operator binds:

};

osg::VertexProgram::Extensions* LunaTraits< osg::VertexProgram::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_VertexProgram_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::VertexProgram::Extensions >::_bind_dtor(osg::VertexProgram::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::VertexProgram::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::VertexProgram::Extensions >::fullName[] = "osg::VertexProgram::Extensions";
const char LunaTraits< osg::VertexProgram::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::VertexProgram::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::VertexProgram::Extensions >::hash = 58046931;
const int LunaTraits< osg::VertexProgram::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::VertexProgram::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_VertexProgram_Extensions::_bind_setupGLExtensions},
	{"setVertexProgramSupported", &luna_wrapper_osg_VertexProgram_Extensions::_bind_setVertexProgramSupported},
	{"isVertexProgramSupported", &luna_wrapper_osg_VertexProgram_Extensions::_bind_isVertexProgramSupported},
	{"glBindProgram", &luna_wrapper_osg_VertexProgram_Extensions::_bind_glBindProgram},
	{"glGenPrograms", &luna_wrapper_osg_VertexProgram_Extensions::_bind_glGenPrograms},
	{"glDeletePrograms", &luna_wrapper_osg_VertexProgram_Extensions::_bind_glDeletePrograms},
	{"glProgramString", &luna_wrapper_osg_VertexProgram_Extensions::_bind_glProgramString},
	{"glProgramLocalParameter4fv", &luna_wrapper_osg_VertexProgram_Extensions::_bind_glProgramLocalParameter4fv},
	{"__eq", &luna_wrapper_osg_VertexProgram_Extensions::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::VertexProgram::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_VertexProgram_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::VertexProgram::Extensions >::enumValues[] = {
	{0,0}
};


