#include <plug_common.h>

class luna_wrapper_osg_GLBufferObject_Extensions {
public:
	typedef Luna< osg::GLBufferObject::Extensions > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::GLBufferObject::Extensions* ptr= dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GLBufferObject::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_isBufferObjectSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isPBOSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isUniformBufferObjectSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glGenBuffers(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBindBuffer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBufferData(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBufferSubData(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDeleteBuffers(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glIsBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetBufferSubData(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glMapBuffer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUnmapBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetBufferParameteriv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBindBufferRange(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBindBufferBase(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GLBufferObject::Extensions::Extensions(unsigned int contextID)
	static osg::GLBufferObject::Extensions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::GLBufferObject::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::GLBufferObject::Extensions(contextID);
	}


	// Function binds:
	// void osg::GLBufferObject::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::GLBufferObject::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// bool osg::GLBufferObject::Extensions::isBufferObjectSupported() const
	static int _bind_isBufferObjectSupported(lua_State *L) {
		if (!_lg_typecheck_isBufferObjectSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GLBufferObject::Extensions::isBufferObjectSupported() const function, expected prototype:\nbool osg::GLBufferObject::Extensions::isBufferObjectSupported() const\nClass arguments details:\n");
		}


		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GLBufferObject::Extensions::isBufferObjectSupported() const");
		}
		bool lret = self->isBufferObjectSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GLBufferObject::Extensions::isPBOSupported() const
	static int _bind_isPBOSupported(lua_State *L) {
		if (!_lg_typecheck_isPBOSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GLBufferObject::Extensions::isPBOSupported() const function, expected prototype:\nbool osg::GLBufferObject::Extensions::isPBOSupported() const\nClass arguments details:\n");
		}


		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GLBufferObject::Extensions::isPBOSupported() const");
		}
		bool lret = self->isPBOSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GLBufferObject::Extensions::isUniformBufferObjectSupported() const
	static int _bind_isUniformBufferObjectSupported(lua_State *L) {
		if (!_lg_typecheck_isUniformBufferObjectSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GLBufferObject::Extensions::isUniformBufferObjectSupported() const function, expected prototype:\nbool osg::GLBufferObject::Extensions::isUniformBufferObjectSupported() const\nClass arguments details:\n");
		}


		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GLBufferObject::Extensions::isUniformBufferObjectSupported() const");
		}
		bool lret = self->isUniformBufferObjectSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GLBufferObject::Extensions::glGenBuffers(int n, unsigned int * buffers) const
	static int _bind_glGenBuffers(lua_State *L) {
		if (!_lg_typecheck_glGenBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::Extensions::glGenBuffers(int n, unsigned int * buffers) const function, expected prototype:\nvoid osg::GLBufferObject::Extensions::glGenBuffers(int n, unsigned int * buffers) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int buffers=(unsigned int)lua_tointeger(L,3);

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::Extensions::glGenBuffers(int, unsigned int *) const");
		}
		self->glGenBuffers(n, &buffers);

		return 0;
	}

	// void osg::GLBufferObject::Extensions::glBindBuffer(unsigned int target, unsigned int buffer) const
	static int _bind_glBindBuffer(lua_State *L) {
		if (!_lg_typecheck_glBindBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::Extensions::glBindBuffer(unsigned int target, unsigned int buffer) const function, expected prototype:\nvoid osg::GLBufferObject::Extensions::glBindBuffer(unsigned int target, unsigned int buffer) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int buffer=(unsigned int)lua_tointeger(L,3);

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::Extensions::glBindBuffer(unsigned int, unsigned int) const");
		}
		self->glBindBuffer(target, buffer);

		return 0;
	}

	// void osg::GLBufferObject::Extensions::glBufferData(unsigned int target, int size, const void * data, unsigned int usage) const
	static int _bind_glBufferData(lua_State *L) {
		if (!_lg_typecheck_glBufferData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::Extensions::glBufferData(unsigned int target, int size, const void * data, unsigned int usage) const function, expected prototype:\nvoid osg::GLBufferObject::Extensions::glBufferData(unsigned int target, int size, const void * data, unsigned int usage) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		void* data=(Luna< void >::check(L,4));
		unsigned int usage=(unsigned int)lua_tointeger(L,5);

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::Extensions::glBufferData(unsigned int, int, const void *, unsigned int) const");
		}
		self->glBufferData(target, size, data, usage);

		return 0;
	}

	// void osg::GLBufferObject::Extensions::glBufferSubData(unsigned int target, int offset, int size, const void * data) const
	static int _bind_glBufferSubData(lua_State *L) {
		if (!_lg_typecheck_glBufferSubData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::Extensions::glBufferSubData(unsigned int target, int offset, int size, const void * data) const function, expected prototype:\nvoid osg::GLBufferObject::Extensions::glBufferSubData(unsigned int target, int offset, int size, const void * data) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int offset=(int)lua_tointeger(L,3);
		int size=(int)lua_tointeger(L,4);
		void* data=(Luna< void >::check(L,5));

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::Extensions::glBufferSubData(unsigned int, int, int, const void *) const");
		}
		self->glBufferSubData(target, offset, size, data);

		return 0;
	}

	// void osg::GLBufferObject::Extensions::glDeleteBuffers(int n, const unsigned int * buffers) const
	static int _bind_glDeleteBuffers(lua_State *L) {
		if (!_lg_typecheck_glDeleteBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::Extensions::glDeleteBuffers(int n, const unsigned int * buffers) const function, expected prototype:\nvoid osg::GLBufferObject::Extensions::glDeleteBuffers(int n, const unsigned int * buffers) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int buffers=(unsigned int)lua_tointeger(L,3);

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::Extensions::glDeleteBuffers(int, const unsigned int *) const");
		}
		self->glDeleteBuffers(n, &buffers);

		return 0;
	}

	// unsigned char osg::GLBufferObject::Extensions::glIsBuffer(unsigned int buffer) const
	static int _bind_glIsBuffer(lua_State *L) {
		if (!_lg_typecheck_glIsBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char osg::GLBufferObject::Extensions::glIsBuffer(unsigned int buffer) const function, expected prototype:\nunsigned char osg::GLBufferObject::Extensions::glIsBuffer(unsigned int buffer) const\nClass arguments details:\n");
		}

		unsigned int buffer=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char osg::GLBufferObject::Extensions::glIsBuffer(unsigned int) const");
		}
		unsigned char lret = self->glIsBuffer(buffer);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void osg::GLBufferObject::Extensions::glGetBufferSubData(unsigned int target, int offset, int size, void * data) const
	static int _bind_glGetBufferSubData(lua_State *L) {
		if (!_lg_typecheck_glGetBufferSubData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::Extensions::glGetBufferSubData(unsigned int target, int offset, int size, void * data) const function, expected prototype:\nvoid osg::GLBufferObject::Extensions::glGetBufferSubData(unsigned int target, int offset, int size, void * data) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int offset=(int)lua_tointeger(L,3);
		int size=(int)lua_tointeger(L,4);
		void* data=(Luna< void >::check(L,5));

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::Extensions::glGetBufferSubData(unsigned int, int, int, void *) const");
		}
		self->glGetBufferSubData(target, offset, size, data);

		return 0;
	}

	// void * osg::GLBufferObject::Extensions::glMapBuffer(unsigned int target, unsigned int access) const
	static int _bind_glMapBuffer(lua_State *L) {
		if (!_lg_typecheck_glMapBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * osg::GLBufferObject::Extensions::glMapBuffer(unsigned int target, unsigned int access) const function, expected prototype:\nvoid * osg::GLBufferObject::Extensions::glMapBuffer(unsigned int target, unsigned int access) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int access=(unsigned int)lua_tointeger(L,3);

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * osg::GLBufferObject::Extensions::glMapBuffer(unsigned int, unsigned int) const");
		}
		void * lret = self->glMapBuffer(target, access);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned char osg::GLBufferObject::Extensions::glUnmapBuffer(unsigned int target) const
	static int _bind_glUnmapBuffer(lua_State *L) {
		if (!_lg_typecheck_glUnmapBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char osg::GLBufferObject::Extensions::glUnmapBuffer(unsigned int target) const function, expected prototype:\nunsigned char osg::GLBufferObject::Extensions::glUnmapBuffer(unsigned int target) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char osg::GLBufferObject::Extensions::glUnmapBuffer(unsigned int) const");
		}
		unsigned char lret = self->glUnmapBuffer(target);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void osg::GLBufferObject::Extensions::glGetBufferParameteriv(unsigned int target, unsigned int pname, int * params) const
	static int _bind_glGetBufferParameteriv(lua_State *L) {
		if (!_lg_typecheck_glGetBufferParameteriv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::Extensions::glGetBufferParameteriv(unsigned int target, unsigned int pname, int * params) const function, expected prototype:\nvoid osg::GLBufferObject::Extensions::glGetBufferParameteriv(unsigned int target, unsigned int pname, int * params) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		int params=(int)lua_tointeger(L,4);

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::Extensions::glGetBufferParameteriv(unsigned int, unsigned int, int *) const");
		}
		self->glGetBufferParameteriv(target, pname, &params);

		return 0;
	}

	// void osg::GLBufferObject::Extensions::glBindBufferRange(unsigned int target, unsigned int index, unsigned int buffer, int offset, int size)
	static int _bind_glBindBufferRange(lua_State *L) {
		if (!_lg_typecheck_glBindBufferRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::Extensions::glBindBufferRange(unsigned int target, unsigned int index, unsigned int buffer, int offset, int size) function, expected prototype:\nvoid osg::GLBufferObject::Extensions::glBindBufferRange(unsigned int target, unsigned int index, unsigned int buffer, int offset, int size)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int index=(unsigned int)lua_tointeger(L,3);
		unsigned int buffer=(unsigned int)lua_tointeger(L,4);
		int offset=(int)lua_tointeger(L,5);
		int size=(int)lua_tointeger(L,6);

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::Extensions::glBindBufferRange(unsigned int, unsigned int, unsigned int, int, int)");
		}
		self->glBindBufferRange(target, index, buffer, offset, size);

		return 0;
	}

	// void osg::GLBufferObject::Extensions::glBindBufferBase(unsigned int target, unsigned int index, unsigned int buffer)
	static int _bind_glBindBufferBase(lua_State *L) {
		if (!_lg_typecheck_glBindBufferBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::Extensions::glBindBufferBase(unsigned int target, unsigned int index, unsigned int buffer) function, expected prototype:\nvoid osg::GLBufferObject::Extensions::glBindBufferBase(unsigned int target, unsigned int index, unsigned int buffer)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int index=(unsigned int)lua_tointeger(L,3);
		unsigned int buffer=(unsigned int)lua_tointeger(L,4);

		osg::GLBufferObject::Extensions* self=dynamic_cast< osg::GLBufferObject::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::Extensions::glBindBufferBase(unsigned int, unsigned int, unsigned int)");
		}
		self->glBindBufferBase(target, index, buffer);

		return 0;
	}


	// Operator binds:

};

osg::GLBufferObject::Extensions* LunaTraits< osg::GLBufferObject::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GLBufferObject_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::GLBufferObject::Extensions >::_bind_dtor(osg::GLBufferObject::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GLBufferObject::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::GLBufferObject::Extensions >::fullName[] = "osg::GLBufferObject::Extensions";
const char LunaTraits< osg::GLBufferObject::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::GLBufferObject::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GLBufferObject::Extensions >::hash = 724059;
const int LunaTraits< osg::GLBufferObject::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GLBufferObject::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_setupGLExtensions},
	{"isBufferObjectSupported", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_isBufferObjectSupported},
	{"isPBOSupported", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_isPBOSupported},
	{"isUniformBufferObjectSupported", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_isUniformBufferObjectSupported},
	{"glGenBuffers", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glGenBuffers},
	{"glBindBuffer", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glBindBuffer},
	{"glBufferData", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glBufferData},
	{"glBufferSubData", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glBufferSubData},
	{"glDeleteBuffers", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glDeleteBuffers},
	{"glIsBuffer", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glIsBuffer},
	{"glGetBufferSubData", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glGetBufferSubData},
	{"glMapBuffer", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glMapBuffer},
	{"glUnmapBuffer", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glUnmapBuffer},
	{"glGetBufferParameteriv", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glGetBufferParameteriv},
	{"glBindBufferRange", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glBindBufferRange},
	{"glBindBufferBase", &luna_wrapper_osg_GLBufferObject_Extensions::_bind_glBindBufferBase},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GLBufferObject::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GLBufferObject_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GLBufferObject::Extensions >::enumValues[] = {
	{0,0}
};

