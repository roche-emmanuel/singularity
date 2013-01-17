#include <plug_common.h>

class luna_wrapper_osg_Texture_TextureProfile {
public:
	typedef Luna< osg::Texture::TextureProfile > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Texture::TextureProfile");
		
		return luna_dynamicCast(L,converters,"osg::Texture::TextureProfile",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_match(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_target(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_numMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_internalFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_width(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_height(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_depth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_border(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_target(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_numMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_internalFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_width(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_height(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_depth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_border(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_size(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69361645) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69361645) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Texture::TextureProfile::TextureProfile(unsigned int target)
	static osg::Texture::TextureProfile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureProfile::TextureProfile(unsigned int target) function, expected prototype:\nosg::Texture::TextureProfile::TextureProfile(unsigned int target)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,1);

		return new osg::Texture::TextureProfile(target);
	}

	// osg::Texture::TextureProfile::TextureProfile(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static osg::Texture::TextureProfile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureProfile::TextureProfile(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nosg::Texture::TextureProfile::TextureProfile(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,1);
		int numMipmapLevels=(int)lua_tointeger(L,2);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		int depth=(int)lua_tointeger(L,6);
		int border=(int)lua_tointeger(L,7);

		return new osg::Texture::TextureProfile(target, numMipmapLevels, internalFormat, width, height, depth, border);
	}

	// Overload binder for osg::Texture::TextureProfile::TextureProfile
	static osg::Texture::TextureProfile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TextureProfile, cannot match any of the overloads for function TextureProfile:\n  TextureProfile(unsigned int)\n  TextureProfile(unsigned int, int, unsigned int, int, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Texture::TextureProfile::set(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::set(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nvoid osg::Texture::TextureProfile::set(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\n");
		}

		int numMipmapLevels=(int)lua_tointeger(L,2);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		int depth=(int)lua_tointeger(L,6);
		int border=(int)lua_tointeger(L,7);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::set(int, unsigned int, int, int, int, int). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		self->set(numMipmapLevels, internalFormat, width, height, depth, border);

		return 0;
	}

	// bool osg::Texture::TextureProfile::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static int _bind_match(lua_State *L) {
		if (!_lg_typecheck_match(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureProfile::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nbool osg::Texture::TextureProfile::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int numMipmapLevels=(int)lua_tointeger(L,3);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		int depth=(int)lua_tointeger(L,7);
		int border=(int)lua_tointeger(L,8);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureProfile::match(unsigned int, int, unsigned int, int, int, int, int). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		bool lret = self->match(target, numMipmapLevels, internalFormat, width, height, depth, border);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::TextureProfile::computeSize()
	static int _bind_computeSize(lua_State *L) {
		if (!_lg_typecheck_computeSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::computeSize() function, expected prototype:\nvoid osg::Texture::TextureProfile::computeSize()\nClass arguments details:\n");
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::computeSize(). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		self->computeSize();

		return 0;
	}

	// unsigned int osg::Texture::TextureProfile::_target()
	static int _bind_get_target(lua_State *L) {
		if (!_lg_typecheck_get_target(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureProfile::_target() function, expected prototype:\nunsigned int osg::Texture::TextureProfile::_target()\nClass arguments details:\n");
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureProfile::_target(). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		unsigned int lret = self->_target;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::TextureProfile::_numMipmapLevels()
	static int _bind_get_numMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_get_numMipmapLevels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::TextureProfile::_numMipmapLevels() function, expected prototype:\nint osg::Texture::TextureProfile::_numMipmapLevels()\nClass arguments details:\n");
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::TextureProfile::_numMipmapLevels(). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		int lret = self->_numMipmapLevels;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureProfile::_internalFormat()
	static int _bind_get_internalFormat(lua_State *L) {
		if (!_lg_typecheck_get_internalFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureProfile::_internalFormat() function, expected prototype:\nunsigned int osg::Texture::TextureProfile::_internalFormat()\nClass arguments details:\n");
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureProfile::_internalFormat(). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		unsigned int lret = self->_internalFormat;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::TextureProfile::_width()
	static int _bind_get_width(lua_State *L) {
		if (!_lg_typecheck_get_width(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::TextureProfile::_width() function, expected prototype:\nint osg::Texture::TextureProfile::_width()\nClass arguments details:\n");
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::TextureProfile::_width(). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		int lret = self->_width;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::TextureProfile::_height()
	static int _bind_get_height(lua_State *L) {
		if (!_lg_typecheck_get_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::TextureProfile::_height() function, expected prototype:\nint osg::Texture::TextureProfile::_height()\nClass arguments details:\n");
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::TextureProfile::_height(). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		int lret = self->_height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::TextureProfile::_depth()
	static int _bind_get_depth(lua_State *L) {
		if (!_lg_typecheck_get_depth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::TextureProfile::_depth() function, expected prototype:\nint osg::Texture::TextureProfile::_depth()\nClass arguments details:\n");
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::TextureProfile::_depth(). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		int lret = self->_depth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::TextureProfile::_border()
	static int _bind_get_border(lua_State *L) {
		if (!_lg_typecheck_get_border(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::TextureProfile::_border() function, expected prototype:\nint osg::Texture::TextureProfile::_border()\nClass arguments details:\n");
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::TextureProfile::_border(). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		int lret = self->_border;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureProfile::_size()
	static int _bind_get_size(lua_State *L) {
		if (!_lg_typecheck_get_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureProfile::_size() function, expected prototype:\nunsigned int osg::Texture::TextureProfile::_size()\nClass arguments details:\n");
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureProfile::_size(). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		unsigned int lret = self->_size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::TextureProfile::_target(unsigned int value)
	static int _bind_set_target(lua_State *L) {
		if (!_lg_typecheck_set_target(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_target(unsigned int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_target(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_target(unsigned int). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		self->_target = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_numMipmapLevels(int value)
	static int _bind_set_numMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_set_numMipmapLevels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_numMipmapLevels(int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_numMipmapLevels(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_numMipmapLevels(int). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		self->_numMipmapLevels = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_internalFormat(unsigned int value)
	static int _bind_set_internalFormat(lua_State *L) {
		if (!_lg_typecheck_set_internalFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_internalFormat(unsigned int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_internalFormat(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_internalFormat(unsigned int). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		self->_internalFormat = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_width(int value)
	static int _bind_set_width(lua_State *L) {
		if (!_lg_typecheck_set_width(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_width(int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_width(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_width(int). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		self->_width = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_height(int value)
	static int _bind_set_height(lua_State *L) {
		if (!_lg_typecheck_set_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_height(int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_height(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_height(int). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		self->_height = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_depth(int value)
	static int _bind_set_depth(lua_State *L) {
		if (!_lg_typecheck_set_depth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_depth(int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_depth(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_depth(int). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		self->_depth = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_border(int value)
	static int _bind_set_border(lua_State *L) {
		if (!_lg_typecheck_set_border(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_border(int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_border(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_border(int). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		self->_border = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_size(unsigned int value)
	static int _bind_set_size(lua_State *L) {
		if (!_lg_typecheck_set_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_size(unsigned int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_size(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_size(unsigned int). Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		self->_size = value;

		return 0;
	}


	// Operator binds:
	// bool osg::Texture::TextureProfile::operator<(const osg::Texture::TextureProfile & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureProfile::operator<(const osg::Texture::TextureProfile & rhs) const function, expected prototype:\nbool osg::Texture::TextureProfile::operator<(const osg::Texture::TextureProfile & rhs) const\nClass arguments details:\narg 1 ID = 69361645\n");
		}

		const osg::Texture::TextureProfile* rhs_ptr=(Luna< osg::Texture::TextureProfile >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture::TextureProfile::operator< function");
		}
		const osg::Texture::TextureProfile & rhs=*rhs_ptr;

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureProfile::operator<(const osg::Texture::TextureProfile &) const. Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture::TextureProfile::operator==(const osg::Texture::TextureProfile & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureProfile::operator==(const osg::Texture::TextureProfile & rhs) const function, expected prototype:\nbool osg::Texture::TextureProfile::operator==(const osg::Texture::TextureProfile & rhs) const\nClass arguments details:\narg 1 ID = 69361645\n");
		}

		const osg::Texture::TextureProfile* rhs_ptr=(Luna< osg::Texture::TextureProfile >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture::TextureProfile::operator== function");
		}
		const osg::Texture::TextureProfile & rhs=*rhs_ptr;

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureProfile::operator==(const osg::Texture::TextureProfile &) const. Got : '%s'",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osg::Texture::TextureProfile* LunaTraits< osg::Texture::TextureProfile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture_TextureProfile::_bind_ctor(L);
}

void LunaTraits< osg::Texture::TextureProfile >::_bind_dtor(osg::Texture::TextureProfile* obj) {
	delete obj;
}

const char LunaTraits< osg::Texture::TextureProfile >::className[] = "Texture_TextureProfile";
const char LunaTraits< osg::Texture::TextureProfile >::fullName[] = "osg::Texture::TextureProfile";
const char LunaTraits< osg::Texture::TextureProfile >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture::TextureProfile >::parents[] = {0};
const int LunaTraits< osg::Texture::TextureProfile >::hash = 69361645;
const int LunaTraits< osg::Texture::TextureProfile >::uniqueIDs[] = {69361645,0};

luna_RegType LunaTraits< osg::Texture::TextureProfile >::methods[] = {
	{"set", &luna_wrapper_osg_Texture_TextureProfile::_bind_set},
	{"match", &luna_wrapper_osg_Texture_TextureProfile::_bind_match},
	{"computeSize", &luna_wrapper_osg_Texture_TextureProfile::_bind_computeSize},
	{"get_target", &luna_wrapper_osg_Texture_TextureProfile::_bind_get_target},
	{"get_numMipmapLevels", &luna_wrapper_osg_Texture_TextureProfile::_bind_get_numMipmapLevels},
	{"get_internalFormat", &luna_wrapper_osg_Texture_TextureProfile::_bind_get_internalFormat},
	{"get_width", &luna_wrapper_osg_Texture_TextureProfile::_bind_get_width},
	{"get_height", &luna_wrapper_osg_Texture_TextureProfile::_bind_get_height},
	{"get_depth", &luna_wrapper_osg_Texture_TextureProfile::_bind_get_depth},
	{"get_border", &luna_wrapper_osg_Texture_TextureProfile::_bind_get_border},
	{"get_size", &luna_wrapper_osg_Texture_TextureProfile::_bind_get_size},
	{"set_target", &luna_wrapper_osg_Texture_TextureProfile::_bind_set_target},
	{"set_numMipmapLevels", &luna_wrapper_osg_Texture_TextureProfile::_bind_set_numMipmapLevels},
	{"set_internalFormat", &luna_wrapper_osg_Texture_TextureProfile::_bind_set_internalFormat},
	{"set_width", &luna_wrapper_osg_Texture_TextureProfile::_bind_set_width},
	{"set_height", &luna_wrapper_osg_Texture_TextureProfile::_bind_set_height},
	{"set_depth", &luna_wrapper_osg_Texture_TextureProfile::_bind_set_depth},
	{"set_border", &luna_wrapper_osg_Texture_TextureProfile::_bind_set_border},
	{"set_size", &luna_wrapper_osg_Texture_TextureProfile::_bind_set_size},
	{"__lt", &luna_wrapper_osg_Texture_TextureProfile::_bind___lt},
	{"__eq", &luna_wrapper_osg_Texture_TextureProfile::_bind___eq},
	{"dynCast", &luna_wrapper_osg_Texture_TextureProfile::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture::TextureProfile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture::TextureProfile >::enumValues[] = {
	{0,0}
};


