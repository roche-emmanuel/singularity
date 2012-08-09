#include <plug_common.h>

class luna_wrapper_osg_Texture2DArray_Extensions {
public:
	typedef Luna< osg::Texture2DArray::Extensions > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Texture2DArray::Extensions* ptr= dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture2DArray::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setTexture2DArraySupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTexture2DArraySupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexture3DSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTexture3DSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxLayerCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_maxLayerCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMax2DSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_max2DSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glTexImage3D(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( (lua_isnil(L,11)==0 && !Luna<void>::has_uniqueid(L,11,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glTexSubImage3D(lua_State *L) {
		if( lua_gettop(L)!=12 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( (lua_isnumber(L,11)==0 || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		if( (lua_isnil(L,12)==0 && !Luna<void>::has_uniqueid(L,12,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glCopyTexSubImage3D(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isCompressedTexImage3DSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glCompressedTexImage3D(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isCompressedTexSubImage3DSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glCompressedTexSubImage3D(lua_State *L) {
		if( lua_gettop(L)!=12 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( (lua_isnumber(L,11)==0 || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		if( (lua_isnil(L,12)==0 && !Luna<void>::has_uniqueid(L,12,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Texture2DArray::Extensions::Extensions(unsigned int contextID)
	static osg::Texture2DArray::Extensions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture2DArray::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::Texture2DArray::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::Texture2DArray::Extensions(contextID);
	}


	// Function binds:
	// void osg::Texture2DArray::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::Texture2DArray::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::Texture2DArray::Extensions::setTexture2DArraySupported(bool flag)
	static int _bind_setTexture2DArraySupported(lua_State *L) {
		if (!_lg_typecheck_setTexture2DArraySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::Extensions::setTexture2DArraySupported(bool flag) function, expected prototype:\nvoid osg::Texture2DArray::Extensions::setTexture2DArraySupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::Extensions::setTexture2DArraySupported(bool)");
		}
		self->setTexture2DArraySupported(flag);

		return 0;
	}

	// bool osg::Texture2DArray::Extensions::isTexture2DArraySupported() const
	static int _bind_isTexture2DArraySupported(lua_State *L) {
		if (!_lg_typecheck_isTexture2DArraySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture2DArray::Extensions::isTexture2DArraySupported() const function, expected prototype:\nbool osg::Texture2DArray::Extensions::isTexture2DArraySupported() const\nClass arguments details:\n");
		}


		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture2DArray::Extensions::isTexture2DArraySupported() const");
		}
		bool lret = self->isTexture2DArraySupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture2DArray::Extensions::setTexture3DSupported(bool flag)
	static int _bind_setTexture3DSupported(lua_State *L) {
		if (!_lg_typecheck_setTexture3DSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::Extensions::setTexture3DSupported(bool flag) function, expected prototype:\nvoid osg::Texture2DArray::Extensions::setTexture3DSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::Extensions::setTexture3DSupported(bool)");
		}
		self->setTexture3DSupported(flag);

		return 0;
	}

	// bool osg::Texture2DArray::Extensions::isTexture3DSupported() const
	static int _bind_isTexture3DSupported(lua_State *L) {
		if (!_lg_typecheck_isTexture3DSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture2DArray::Extensions::isTexture3DSupported() const function, expected prototype:\nbool osg::Texture2DArray::Extensions::isTexture3DSupported() const\nClass arguments details:\n");
		}


		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture2DArray::Extensions::isTexture3DSupported() const");
		}
		bool lret = self->isTexture3DSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture2DArray::Extensions::setMaxLayerCount(int count)
	static int _bind_setMaxLayerCount(lua_State *L) {
		if (!_lg_typecheck_setMaxLayerCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::Extensions::setMaxLayerCount(int count) function, expected prototype:\nvoid osg::Texture2DArray::Extensions::setMaxLayerCount(int count)\nClass arguments details:\n");
		}

		int count=(int)lua_tointeger(L,2);

		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::Extensions::setMaxLayerCount(int)");
		}
		self->setMaxLayerCount(count);

		return 0;
	}

	// int osg::Texture2DArray::Extensions::maxLayerCount() const
	static int _bind_maxLayerCount(lua_State *L) {
		if (!_lg_typecheck_maxLayerCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DArray::Extensions::maxLayerCount() const function, expected prototype:\nint osg::Texture2DArray::Extensions::maxLayerCount() const\nClass arguments details:\n");
		}


		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DArray::Extensions::maxLayerCount() const");
		}
		int lret = self->maxLayerCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DArray::Extensions::setMax2DSize(int size)
	static int _bind_setMax2DSize(lua_State *L) {
		if (!_lg_typecheck_setMax2DSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::Extensions::setMax2DSize(int size) function, expected prototype:\nvoid osg::Texture2DArray::Extensions::setMax2DSize(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::Extensions::setMax2DSize(int)");
		}
		self->setMax2DSize(size);

		return 0;
	}

	// int osg::Texture2DArray::Extensions::max2DSize() const
	static int _bind_max2DSize(lua_State *L) {
		if (!_lg_typecheck_max2DSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DArray::Extensions::max2DSize() const function, expected prototype:\nint osg::Texture2DArray::Extensions::max2DSize() const\nClass arguments details:\n");
		}


		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DArray::Extensions::max2DSize() const");
		}
		int lret = self->max2DSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DArray::Extensions::glTexImage3D(unsigned int target, int level, unsigned int internalFormat, int width, int height, int depth, int border, unsigned int format, unsigned int type, const void * pixels) const
	static int _bind_glTexImage3D(lua_State *L) {
		if (!_lg_typecheck_glTexImage3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::Extensions::glTexImage3D(unsigned int target, int level, unsigned int internalFormat, int width, int height, int depth, int border, unsigned int format, unsigned int type, const void * pixels) const function, expected prototype:\nvoid osg::Texture2DArray::Extensions::glTexImage3D(unsigned int target, int level, unsigned int internalFormat, int width, int height, int depth, int border, unsigned int format, unsigned int type, const void * pixels) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		int depth=(int)lua_tointeger(L,7);
		int border=(int)lua_tointeger(L,8);
		unsigned int format=(unsigned int)lua_tointeger(L,9);
		unsigned int type=(unsigned int)lua_tointeger(L,10);
		void* pixels=(Luna< void >::check(L,11));

		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::Extensions::glTexImage3D(unsigned int, int, unsigned int, int, int, int, int, unsigned int, unsigned int, const void *) const");
		}
		self->glTexImage3D(target, level, internalFormat, width, height, depth, border, format, type, pixels);

		return 0;
	}

	// void osg::Texture2DArray::Extensions::glTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, unsigned int type, const void * pixels) const
	static int _bind_glTexSubImage3D(lua_State *L) {
		if (!_lg_typecheck_glTexSubImage3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::Extensions::glTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, unsigned int type, const void * pixels) const function, expected prototype:\nvoid osg::Texture2DArray::Extensions::glTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, unsigned int type, const void * pixels) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int xoffset=(int)lua_tointeger(L,4);
		int yoffset=(int)lua_tointeger(L,5);
		int zoffset=(int)lua_tointeger(L,6);
		int width=(int)lua_tointeger(L,7);
		int height=(int)lua_tointeger(L,8);
		int depth=(int)lua_tointeger(L,9);
		unsigned int format=(unsigned int)lua_tointeger(L,10);
		unsigned int type=(unsigned int)lua_tointeger(L,11);
		void* pixels=(Luna< void >::check(L,12));

		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::Extensions::glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, const void *) const");
		}
		self->glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);

		return 0;
	}

	// void osg::Texture2DArray::Extensions::glCopyTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height) const
	static int _bind_glCopyTexSubImage3D(lua_State *L) {
		if (!_lg_typecheck_glCopyTexSubImage3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::Extensions::glCopyTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height) const function, expected prototype:\nvoid osg::Texture2DArray::Extensions::glCopyTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int xoffset=(int)lua_tointeger(L,4);
		int yoffset=(int)lua_tointeger(L,5);
		int zoffset=(int)lua_tointeger(L,6);
		int x=(int)lua_tointeger(L,7);
		int y=(int)lua_tointeger(L,8);
		int width=(int)lua_tointeger(L,9);
		int height=(int)lua_tointeger(L,10);

		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::Extensions::glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int) const");
		}
		self->glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);

		return 0;
	}

	// bool osg::Texture2DArray::Extensions::isCompressedTexImage3DSupported() const
	static int _bind_isCompressedTexImage3DSupported(lua_State *L) {
		if (!_lg_typecheck_isCompressedTexImage3DSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture2DArray::Extensions::isCompressedTexImage3DSupported() const function, expected prototype:\nbool osg::Texture2DArray::Extensions::isCompressedTexImage3DSupported() const\nClass arguments details:\n");
		}


		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture2DArray::Extensions::isCompressedTexImage3DSupported() const");
		}
		bool lret = self->isCompressedTexImage3DSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture2DArray::Extensions::glCompressedTexImage3D(unsigned int target, int level, unsigned int internalformat, int width, int height, int depth, int border, int imageSize, const void * data) const
	static int _bind_glCompressedTexImage3D(lua_State *L) {
		if (!_lg_typecheck_glCompressedTexImage3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::Extensions::glCompressedTexImage3D(unsigned int target, int level, unsigned int internalformat, int width, int height, int depth, int border, int imageSize, const void * data) const function, expected prototype:\nvoid osg::Texture2DArray::Extensions::glCompressedTexImage3D(unsigned int target, int level, unsigned int internalformat, int width, int height, int depth, int border, int imageSize, const void * data) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		unsigned int internalformat=(unsigned int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		int depth=(int)lua_tointeger(L,7);
		int border=(int)lua_tointeger(L,8);
		int imageSize=(int)lua_tointeger(L,9);
		void* data=(Luna< void >::check(L,10));

		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::Extensions::glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, const void *) const");
		}
		self->glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);

		return 0;
	}

	// bool osg::Texture2DArray::Extensions::isCompressedTexSubImage3DSupported() const
	static int _bind_isCompressedTexSubImage3DSupported(lua_State *L) {
		if (!_lg_typecheck_isCompressedTexSubImage3DSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture2DArray::Extensions::isCompressedTexSubImage3DSupported() const function, expected prototype:\nbool osg::Texture2DArray::Extensions::isCompressedTexSubImage3DSupported() const\nClass arguments details:\n");
		}


		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture2DArray::Extensions::isCompressedTexSubImage3DSupported() const");
		}
		bool lret = self->isCompressedTexSubImage3DSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture2DArray::Extensions::glCompressedTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, int imageSize, const void * data) const
	static int _bind_glCompressedTexSubImage3D(lua_State *L) {
		if (!_lg_typecheck_glCompressedTexSubImage3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::Extensions::glCompressedTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, int imageSize, const void * data) const function, expected prototype:\nvoid osg::Texture2DArray::Extensions::glCompressedTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, int imageSize, const void * data) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int xoffset=(int)lua_tointeger(L,4);
		int yoffset=(int)lua_tointeger(L,5);
		int zoffset=(int)lua_tointeger(L,6);
		int width=(int)lua_tointeger(L,7);
		int height=(int)lua_tointeger(L,8);
		int depth=(int)lua_tointeger(L,9);
		unsigned int format=(unsigned int)lua_tointeger(L,10);
		int imageSize=(int)lua_tointeger(L,11);
		void* data=(Luna< void >::check(L,12));

		osg::Texture2DArray::Extensions* self=dynamic_cast< osg::Texture2DArray::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::Extensions::glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, const void *) const");
		}
		self->glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);

		return 0;
	}


	// Operator binds:

};

osg::Texture2DArray::Extensions* LunaTraits< osg::Texture2DArray::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture2DArray_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::Texture2DArray::Extensions >::_bind_dtor(osg::Texture2DArray::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture2DArray::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::Texture2DArray::Extensions >::fullName[] = "osg::Texture2DArray::Extensions";
const char LunaTraits< osg::Texture2DArray::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture2DArray::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Texture2DArray::Extensions >::hash = 25749838;
const int LunaTraits< osg::Texture2DArray::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture2DArray::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_setupGLExtensions},
	{"setTexture2DArraySupported", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_setTexture2DArraySupported},
	{"isTexture2DArraySupported", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_isTexture2DArraySupported},
	{"setTexture3DSupported", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_setTexture3DSupported},
	{"isTexture3DSupported", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_isTexture3DSupported},
	{"setMaxLayerCount", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_setMaxLayerCount},
	{"maxLayerCount", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_maxLayerCount},
	{"setMax2DSize", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_setMax2DSize},
	{"max2DSize", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_max2DSize},
	{"glTexImage3D", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_glTexImage3D},
	{"glTexSubImage3D", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_glTexSubImage3D},
	{"glCopyTexSubImage3D", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_glCopyTexSubImage3D},
	{"isCompressedTexImage3DSupported", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_isCompressedTexImage3DSupported},
	{"glCompressedTexImage3D", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_glCompressedTexImage3D},
	{"isCompressedTexSubImage3DSupported", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_isCompressedTexSubImage3DSupported},
	{"glCompressedTexSubImage3D", &luna_wrapper_osg_Texture2DArray_Extensions::_bind_glCompressedTexSubImage3D},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture2DArray::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture2DArray_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture2DArray::Extensions >::enumValues[] = {
	{0,0}
};

