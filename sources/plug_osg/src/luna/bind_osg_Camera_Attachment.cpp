#include <plug_common.h>

class luna_wrapper_osg_Camera_Attachment {
public:
	typedef Luna< osg::Camera::Attachment > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65796671) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Camera::Attachment*)");
		}

		osg::Camera::Attachment* rhs =(Luna< osg::Camera::Attachment >::check(L,2));
		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Camera::Attachment");
		
		return luna_dynamicCast(L,converters,"osg::Camera::Attachment",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_width(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_height(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_depth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_internalFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_image(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_texture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_level(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_face(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_mipMapGeneration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_multisampleSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_multisampleColorSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_internalFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_image(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15557275) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_texture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50788728) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_level(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_face(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_mipMapGeneration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_multisampleSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_multisampleColorSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Camera::Attachment::Attachment()
	static osg::Camera::Attachment* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera::Attachment::Attachment() function, expected prototype:\nosg::Camera::Attachment::Attachment()\nClass arguments details:\n");
		}


		return new osg::Camera::Attachment();
	}


	// Function binds:
	// int osg::Camera::Attachment::width() const
	static int _bind_width(lua_State *L) {
		if (!_lg_typecheck_width(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Camera::Attachment::width() const function, expected prototype:\nint osg::Camera::Attachment::width() const\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Camera::Attachment::width() const. Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		int lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Camera::Attachment::height() const
	static int _bind_height(lua_State *L) {
		if (!_lg_typecheck_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Camera::Attachment::height() const function, expected prototype:\nint osg::Camera::Attachment::height() const\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Camera::Attachment::height() const. Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		int lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Camera::Attachment::depth() const
	static int _bind_depth(lua_State *L) {
		if (!_lg_typecheck_depth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Camera::Attachment::depth() const function, expected prototype:\nint osg::Camera::Attachment::depth() const\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Camera::Attachment::depth() const. Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		int lret = self->depth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Camera::Attachment::_internalFormat()
	static int _bind_get_internalFormat(lua_State *L) {
		if (!_lg_typecheck_get_internalFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Camera::Attachment::_internalFormat() function, expected prototype:\nunsigned int osg::Camera::Attachment::_internalFormat()\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Camera::Attachment::_internalFormat(). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		unsigned int lret = self->_internalFormat;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ref_ptr< osg::Image > osg::Camera::Attachment::_image()
	static int _bind_get_image(lua_State *L) {
		if (!_lg_typecheck_get_image(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Image > osg::Camera::Attachment::_image() function, expected prototype:\nosg::ref_ptr< osg::Image > osg::Camera::Attachment::_image()\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Image > osg::Camera::Attachment::_image(). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		osg::ref_ptr< osg::Image > lret = self->_image;
		Luna< osg::Image >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::Texture > osg::Camera::Attachment::_texture()
	static int _bind_get_texture(lua_State *L) {
		if (!_lg_typecheck_get_texture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Texture > osg::Camera::Attachment::_texture() function, expected prototype:\nosg::ref_ptr< osg::Texture > osg::Camera::Attachment::_texture()\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Texture > osg::Camera::Attachment::_texture(). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		osg::ref_ptr< osg::Texture > lret = self->_texture;
		Luna< osg::Texture >::push(L,lret.get(),false);

		return 1;
	}

	// unsigned int osg::Camera::Attachment::_level()
	static int _bind_get_level(lua_State *L) {
		if (!_lg_typecheck_get_level(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Camera::Attachment::_level() function, expected prototype:\nunsigned int osg::Camera::Attachment::_level()\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Camera::Attachment::_level(). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		unsigned int lret = self->_level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Camera::Attachment::_face()
	static int _bind_get_face(lua_State *L) {
		if (!_lg_typecheck_get_face(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Camera::Attachment::_face() function, expected prototype:\nunsigned int osg::Camera::Attachment::_face()\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Camera::Attachment::_face(). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		unsigned int lret = self->_face;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Camera::Attachment::_mipMapGeneration()
	static int _bind_get_mipMapGeneration(lua_State *L) {
		if (!_lg_typecheck_get_mipMapGeneration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Camera::Attachment::_mipMapGeneration() function, expected prototype:\nbool osg::Camera::Attachment::_mipMapGeneration()\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Camera::Attachment::_mipMapGeneration(). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		bool lret = self->_mipMapGeneration;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Camera::Attachment::_multisampleSamples()
	static int _bind_get_multisampleSamples(lua_State *L) {
		if (!_lg_typecheck_get_multisampleSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Camera::Attachment::_multisampleSamples() function, expected prototype:\nunsigned int osg::Camera::Attachment::_multisampleSamples()\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Camera::Attachment::_multisampleSamples(). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		unsigned int lret = self->_multisampleSamples;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Camera::Attachment::_multisampleColorSamples()
	static int _bind_get_multisampleColorSamples(lua_State *L) {
		if (!_lg_typecheck_get_multisampleColorSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Camera::Attachment::_multisampleColorSamples() function, expected prototype:\nunsigned int osg::Camera::Attachment::_multisampleColorSamples()\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Camera::Attachment::_multisampleColorSamples(). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		unsigned int lret = self->_multisampleColorSamples;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Camera::Attachment::_internalFormat(unsigned int value)
	static int _bind_set_internalFormat(lua_State *L) {
		if (!_lg_typecheck_set_internalFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Camera::Attachment::_internalFormat(unsigned int value) function, expected prototype:\nvoid osg::Camera::Attachment::_internalFormat(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Camera::Attachment::_internalFormat(unsigned int). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		self->_internalFormat = value;

		return 0;
	}

	// void osg::Camera::Attachment::_image(osg::ref_ptr< osg::Image > value)
	static int _bind_set_image(lua_State *L) {
		if (!_lg_typecheck_set_image(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Camera::Attachment::_image(osg::ref_ptr< osg::Image > value) function, expected prototype:\nvoid osg::Camera::Attachment::_image(osg::ref_ptr< osg::Image > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osg::Image > value = dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Camera::Attachment::_image(osg::ref_ptr< osg::Image >). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		self->_image = value;

		return 0;
	}

	// void osg::Camera::Attachment::_texture(osg::ref_ptr< osg::Texture > value)
	static int _bind_set_texture(lua_State *L) {
		if (!_lg_typecheck_set_texture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Camera::Attachment::_texture(osg::ref_ptr< osg::Texture > value) function, expected prototype:\nvoid osg::Camera::Attachment::_texture(osg::ref_ptr< osg::Texture > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osg::Texture > value = dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2));

		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Camera::Attachment::_texture(osg::ref_ptr< osg::Texture >). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		self->_texture = value;

		return 0;
	}

	// void osg::Camera::Attachment::_level(unsigned int value)
	static int _bind_set_level(lua_State *L) {
		if (!_lg_typecheck_set_level(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Camera::Attachment::_level(unsigned int value) function, expected prototype:\nvoid osg::Camera::Attachment::_level(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Camera::Attachment::_level(unsigned int). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		self->_level = value;

		return 0;
	}

	// void osg::Camera::Attachment::_face(unsigned int value)
	static int _bind_set_face(lua_State *L) {
		if (!_lg_typecheck_set_face(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Camera::Attachment::_face(unsigned int value) function, expected prototype:\nvoid osg::Camera::Attachment::_face(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Camera::Attachment::_face(unsigned int). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		self->_face = value;

		return 0;
	}

	// void osg::Camera::Attachment::_mipMapGeneration(bool value)
	static int _bind_set_mipMapGeneration(lua_State *L) {
		if (!_lg_typecheck_set_mipMapGeneration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Camera::Attachment::_mipMapGeneration(bool value) function, expected prototype:\nvoid osg::Camera::Attachment::_mipMapGeneration(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Camera::Attachment::_mipMapGeneration(bool). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		self->_mipMapGeneration = value;

		return 0;
	}

	// void osg::Camera::Attachment::_multisampleSamples(unsigned int value)
	static int _bind_set_multisampleSamples(lua_State *L) {
		if (!_lg_typecheck_set_multisampleSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Camera::Attachment::_multisampleSamples(unsigned int value) function, expected prototype:\nvoid osg::Camera::Attachment::_multisampleSamples(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Camera::Attachment::_multisampleSamples(unsigned int). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		self->_multisampleSamples = value;

		return 0;
	}

	// void osg::Camera::Attachment::_multisampleColorSamples(unsigned int value)
	static int _bind_set_multisampleColorSamples(lua_State *L) {
		if (!_lg_typecheck_set_multisampleColorSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Camera::Attachment::_multisampleColorSamples(unsigned int value) function, expected prototype:\nvoid osg::Camera::Attachment::_multisampleColorSamples(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Camera::Attachment::_multisampleColorSamples(unsigned int). Got : '%s'",typeid(Luna< osg::Camera::Attachment >::check(L,1)).name());
		}
		self->_multisampleColorSamples = value;

		return 0;
	}


	// Operator binds:

};

osg::Camera::Attachment* LunaTraits< osg::Camera::Attachment >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Camera_Attachment::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Camera::Attachment >::_bind_dtor(osg::Camera::Attachment* obj) {
	delete obj;
}

const char LunaTraits< osg::Camera::Attachment >::className[] = "Camera_Attachment";
const char LunaTraits< osg::Camera::Attachment >::fullName[] = "osg::Camera::Attachment";
const char LunaTraits< osg::Camera::Attachment >::moduleName[] = "osg";
const char* LunaTraits< osg::Camera::Attachment >::parents[] = {0};
const int LunaTraits< osg::Camera::Attachment >::hash = 65796671;
const int LunaTraits< osg::Camera::Attachment >::uniqueIDs[] = {65796671,0};

luna_RegType LunaTraits< osg::Camera::Attachment >::methods[] = {
	{"width", &luna_wrapper_osg_Camera_Attachment::_bind_width},
	{"height", &luna_wrapper_osg_Camera_Attachment::_bind_height},
	{"depth", &luna_wrapper_osg_Camera_Attachment::_bind_depth},
	{"get_internalFormat", &luna_wrapper_osg_Camera_Attachment::_bind_get_internalFormat},
	{"get_image", &luna_wrapper_osg_Camera_Attachment::_bind_get_image},
	{"get_texture", &luna_wrapper_osg_Camera_Attachment::_bind_get_texture},
	{"get_level", &luna_wrapper_osg_Camera_Attachment::_bind_get_level},
	{"get_face", &luna_wrapper_osg_Camera_Attachment::_bind_get_face},
	{"get_mipMapGeneration", &luna_wrapper_osg_Camera_Attachment::_bind_get_mipMapGeneration},
	{"get_multisampleSamples", &luna_wrapper_osg_Camera_Attachment::_bind_get_multisampleSamples},
	{"get_multisampleColorSamples", &luna_wrapper_osg_Camera_Attachment::_bind_get_multisampleColorSamples},
	{"set_internalFormat", &luna_wrapper_osg_Camera_Attachment::_bind_set_internalFormat},
	{"set_image", &luna_wrapper_osg_Camera_Attachment::_bind_set_image},
	{"set_texture", &luna_wrapper_osg_Camera_Attachment::_bind_set_texture},
	{"set_level", &luna_wrapper_osg_Camera_Attachment::_bind_set_level},
	{"set_face", &luna_wrapper_osg_Camera_Attachment::_bind_set_face},
	{"set_mipMapGeneration", &luna_wrapper_osg_Camera_Attachment::_bind_set_mipMapGeneration},
	{"set_multisampleSamples", &luna_wrapper_osg_Camera_Attachment::_bind_set_multisampleSamples},
	{"set_multisampleColorSamples", &luna_wrapper_osg_Camera_Attachment::_bind_set_multisampleColorSamples},
	{"dynCast", &luna_wrapper_osg_Camera_Attachment::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Camera_Attachment::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Camera::Attachment >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Camera::Attachment >::enumValues[] = {
	{0,0}
};


