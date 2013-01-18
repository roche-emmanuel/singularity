#include <plug_common.h>

class luna_wrapper_osg_PixelStorageModes {
public:
	typedef Luna< osg::PixelStorageModes > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58853759) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::PixelStorageModes*)");
		}

		osg::PixelStorageModes* rhs =(Luna< osg::PixelStorageModes >::check(L,2));
		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
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

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::PixelStorageModes");
		
		return luna_dynamicCast(L,converters,"osg::PixelStorageModes",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_retrieveStoreModes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_retrieveStoreModes3D(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_pack_alignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_pack_row_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_pack_skip_rows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_pack_skip_pixels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_pack_lsb_first(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_pack_swap_bytes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_pack_skip_images(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_pack_image_height(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_unpack_alignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_unpack_row_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_unpack_skip_rows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_unpack_skip_pixels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_unpack_lsb_first(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_unpack_swap_bytes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_unpack_skip_images(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_unpack_image_height(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_pack_alignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_pack_row_length(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_pack_skip_rows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_pack_skip_pixels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_pack_lsb_first(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_pack_swap_bytes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_pack_skip_images(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_pack_image_height(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_unpack_alignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_unpack_row_length(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_unpack_skip_rows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_unpack_skip_pixels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_unpack_lsb_first(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_unpack_swap_bytes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_unpack_skip_images(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_unpack_image_height(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PixelStorageModes::PixelStorageModes()
	static osg::PixelStorageModes* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PixelStorageModes::PixelStorageModes() function, expected prototype:\nosg::PixelStorageModes::PixelStorageModes()\nClass arguments details:\n");
		}


		return new osg::PixelStorageModes();
	}


	// Function binds:
	// void osg::PixelStorageModes::retrieveStoreModes()
	static int _bind_retrieveStoreModes(lua_State *L) {
		if (!_lg_typecheck_retrieveStoreModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::retrieveStoreModes() function, expected prototype:\nvoid osg::PixelStorageModes::retrieveStoreModes()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::retrieveStoreModes(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->retrieveStoreModes();

		return 0;
	}

	// void osg::PixelStorageModes::retrieveStoreModes3D()
	static int _bind_retrieveStoreModes3D(lua_State *L) {
		if (!_lg_typecheck_retrieveStoreModes3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::retrieveStoreModes3D() function, expected prototype:\nvoid osg::PixelStorageModes::retrieveStoreModes3D()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::retrieveStoreModes3D(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->retrieveStoreModes3D();

		return 0;
	}

	// int osg::PixelStorageModes::pack_alignment()
	static int _bind_get_pack_alignment(lua_State *L) {
		if (!_lg_typecheck_get_pack_alignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::pack_alignment() function, expected prototype:\nint osg::PixelStorageModes::pack_alignment()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::pack_alignment(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->pack_alignment;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::pack_row_length()
	static int _bind_get_pack_row_length(lua_State *L) {
		if (!_lg_typecheck_get_pack_row_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::pack_row_length() function, expected prototype:\nint osg::PixelStorageModes::pack_row_length()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::pack_row_length(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->pack_row_length;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::pack_skip_rows()
	static int _bind_get_pack_skip_rows(lua_State *L) {
		if (!_lg_typecheck_get_pack_skip_rows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::pack_skip_rows() function, expected prototype:\nint osg::PixelStorageModes::pack_skip_rows()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::pack_skip_rows(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->pack_skip_rows;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::pack_skip_pixels()
	static int _bind_get_pack_skip_pixels(lua_State *L) {
		if (!_lg_typecheck_get_pack_skip_pixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::pack_skip_pixels() function, expected prototype:\nint osg::PixelStorageModes::pack_skip_pixels()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::pack_skip_pixels(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->pack_skip_pixels;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::pack_lsb_first()
	static int _bind_get_pack_lsb_first(lua_State *L) {
		if (!_lg_typecheck_get_pack_lsb_first(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::pack_lsb_first() function, expected prototype:\nint osg::PixelStorageModes::pack_lsb_first()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::pack_lsb_first(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->pack_lsb_first;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::pack_swap_bytes()
	static int _bind_get_pack_swap_bytes(lua_State *L) {
		if (!_lg_typecheck_get_pack_swap_bytes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::pack_swap_bytes() function, expected prototype:\nint osg::PixelStorageModes::pack_swap_bytes()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::pack_swap_bytes(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->pack_swap_bytes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::pack_skip_images()
	static int _bind_get_pack_skip_images(lua_State *L) {
		if (!_lg_typecheck_get_pack_skip_images(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::pack_skip_images() function, expected prototype:\nint osg::PixelStorageModes::pack_skip_images()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::pack_skip_images(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->pack_skip_images;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::pack_image_height()
	static int _bind_get_pack_image_height(lua_State *L) {
		if (!_lg_typecheck_get_pack_image_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::pack_image_height() function, expected prototype:\nint osg::PixelStorageModes::pack_image_height()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::pack_image_height(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->pack_image_height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::unpack_alignment()
	static int _bind_get_unpack_alignment(lua_State *L) {
		if (!_lg_typecheck_get_unpack_alignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::unpack_alignment() function, expected prototype:\nint osg::PixelStorageModes::unpack_alignment()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::unpack_alignment(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->unpack_alignment;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::unpack_row_length()
	static int _bind_get_unpack_row_length(lua_State *L) {
		if (!_lg_typecheck_get_unpack_row_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::unpack_row_length() function, expected prototype:\nint osg::PixelStorageModes::unpack_row_length()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::unpack_row_length(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->unpack_row_length;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::unpack_skip_rows()
	static int _bind_get_unpack_skip_rows(lua_State *L) {
		if (!_lg_typecheck_get_unpack_skip_rows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::unpack_skip_rows() function, expected prototype:\nint osg::PixelStorageModes::unpack_skip_rows()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::unpack_skip_rows(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->unpack_skip_rows;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::unpack_skip_pixels()
	static int _bind_get_unpack_skip_pixels(lua_State *L) {
		if (!_lg_typecheck_get_unpack_skip_pixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::unpack_skip_pixels() function, expected prototype:\nint osg::PixelStorageModes::unpack_skip_pixels()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::unpack_skip_pixels(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->unpack_skip_pixels;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::unpack_lsb_first()
	static int _bind_get_unpack_lsb_first(lua_State *L) {
		if (!_lg_typecheck_get_unpack_lsb_first(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::unpack_lsb_first() function, expected prototype:\nint osg::PixelStorageModes::unpack_lsb_first()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::unpack_lsb_first(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->unpack_lsb_first;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::unpack_swap_bytes()
	static int _bind_get_unpack_swap_bytes(lua_State *L) {
		if (!_lg_typecheck_get_unpack_swap_bytes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::unpack_swap_bytes() function, expected prototype:\nint osg::PixelStorageModes::unpack_swap_bytes()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::unpack_swap_bytes(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->unpack_swap_bytes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::unpack_skip_images()
	static int _bind_get_unpack_skip_images(lua_State *L) {
		if (!_lg_typecheck_get_unpack_skip_images(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::unpack_skip_images() function, expected prototype:\nint osg::PixelStorageModes::unpack_skip_images()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::unpack_skip_images(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->unpack_skip_images;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PixelStorageModes::unpack_image_height()
	static int _bind_get_unpack_image_height(lua_State *L) {
		if (!_lg_typecheck_get_unpack_image_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PixelStorageModes::unpack_image_height() function, expected prototype:\nint osg::PixelStorageModes::unpack_image_height()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PixelStorageModes::unpack_image_height(). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		int lret = self->unpack_image_height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PixelStorageModes::pack_alignment(int value)
	static int _bind_set_pack_alignment(lua_State *L) {
		if (!_lg_typecheck_set_pack_alignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::pack_alignment(int value) function, expected prototype:\nvoid osg::PixelStorageModes::pack_alignment(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::pack_alignment(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->pack_alignment = value;

		return 0;
	}

	// void osg::PixelStorageModes::pack_row_length(int value)
	static int _bind_set_pack_row_length(lua_State *L) {
		if (!_lg_typecheck_set_pack_row_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::pack_row_length(int value) function, expected prototype:\nvoid osg::PixelStorageModes::pack_row_length(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::pack_row_length(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->pack_row_length = value;

		return 0;
	}

	// void osg::PixelStorageModes::pack_skip_rows(int value)
	static int _bind_set_pack_skip_rows(lua_State *L) {
		if (!_lg_typecheck_set_pack_skip_rows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::pack_skip_rows(int value) function, expected prototype:\nvoid osg::PixelStorageModes::pack_skip_rows(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::pack_skip_rows(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->pack_skip_rows = value;

		return 0;
	}

	// void osg::PixelStorageModes::pack_skip_pixels(int value)
	static int _bind_set_pack_skip_pixels(lua_State *L) {
		if (!_lg_typecheck_set_pack_skip_pixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::pack_skip_pixels(int value) function, expected prototype:\nvoid osg::PixelStorageModes::pack_skip_pixels(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::pack_skip_pixels(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->pack_skip_pixels = value;

		return 0;
	}

	// void osg::PixelStorageModes::pack_lsb_first(int value)
	static int _bind_set_pack_lsb_first(lua_State *L) {
		if (!_lg_typecheck_set_pack_lsb_first(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::pack_lsb_first(int value) function, expected prototype:\nvoid osg::PixelStorageModes::pack_lsb_first(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::pack_lsb_first(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->pack_lsb_first = value;

		return 0;
	}

	// void osg::PixelStorageModes::pack_swap_bytes(int value)
	static int _bind_set_pack_swap_bytes(lua_State *L) {
		if (!_lg_typecheck_set_pack_swap_bytes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::pack_swap_bytes(int value) function, expected prototype:\nvoid osg::PixelStorageModes::pack_swap_bytes(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::pack_swap_bytes(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->pack_swap_bytes = value;

		return 0;
	}

	// void osg::PixelStorageModes::pack_skip_images(int value)
	static int _bind_set_pack_skip_images(lua_State *L) {
		if (!_lg_typecheck_set_pack_skip_images(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::pack_skip_images(int value) function, expected prototype:\nvoid osg::PixelStorageModes::pack_skip_images(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::pack_skip_images(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->pack_skip_images = value;

		return 0;
	}

	// void osg::PixelStorageModes::pack_image_height(int value)
	static int _bind_set_pack_image_height(lua_State *L) {
		if (!_lg_typecheck_set_pack_image_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::pack_image_height(int value) function, expected prototype:\nvoid osg::PixelStorageModes::pack_image_height(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::pack_image_height(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->pack_image_height = value;

		return 0;
	}

	// void osg::PixelStorageModes::unpack_alignment(int value)
	static int _bind_set_unpack_alignment(lua_State *L) {
		if (!_lg_typecheck_set_unpack_alignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::unpack_alignment(int value) function, expected prototype:\nvoid osg::PixelStorageModes::unpack_alignment(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::unpack_alignment(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->unpack_alignment = value;

		return 0;
	}

	// void osg::PixelStorageModes::unpack_row_length(int value)
	static int _bind_set_unpack_row_length(lua_State *L) {
		if (!_lg_typecheck_set_unpack_row_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::unpack_row_length(int value) function, expected prototype:\nvoid osg::PixelStorageModes::unpack_row_length(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::unpack_row_length(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->unpack_row_length = value;

		return 0;
	}

	// void osg::PixelStorageModes::unpack_skip_rows(int value)
	static int _bind_set_unpack_skip_rows(lua_State *L) {
		if (!_lg_typecheck_set_unpack_skip_rows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::unpack_skip_rows(int value) function, expected prototype:\nvoid osg::PixelStorageModes::unpack_skip_rows(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::unpack_skip_rows(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->unpack_skip_rows = value;

		return 0;
	}

	// void osg::PixelStorageModes::unpack_skip_pixels(int value)
	static int _bind_set_unpack_skip_pixels(lua_State *L) {
		if (!_lg_typecheck_set_unpack_skip_pixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::unpack_skip_pixels(int value) function, expected prototype:\nvoid osg::PixelStorageModes::unpack_skip_pixels(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::unpack_skip_pixels(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->unpack_skip_pixels = value;

		return 0;
	}

	// void osg::PixelStorageModes::unpack_lsb_first(int value)
	static int _bind_set_unpack_lsb_first(lua_State *L) {
		if (!_lg_typecheck_set_unpack_lsb_first(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::unpack_lsb_first(int value) function, expected prototype:\nvoid osg::PixelStorageModes::unpack_lsb_first(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::unpack_lsb_first(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->unpack_lsb_first = value;

		return 0;
	}

	// void osg::PixelStorageModes::unpack_swap_bytes(int value)
	static int _bind_set_unpack_swap_bytes(lua_State *L) {
		if (!_lg_typecheck_set_unpack_swap_bytes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::unpack_swap_bytes(int value) function, expected prototype:\nvoid osg::PixelStorageModes::unpack_swap_bytes(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::unpack_swap_bytes(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->unpack_swap_bytes = value;

		return 0;
	}

	// void osg::PixelStorageModes::unpack_skip_images(int value)
	static int _bind_set_unpack_skip_images(lua_State *L) {
		if (!_lg_typecheck_set_unpack_skip_images(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::unpack_skip_images(int value) function, expected prototype:\nvoid osg::PixelStorageModes::unpack_skip_images(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::unpack_skip_images(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->unpack_skip_images = value;

		return 0;
	}

	// void osg::PixelStorageModes::unpack_image_height(int value)
	static int _bind_set_unpack_image_height(lua_State *L) {
		if (!_lg_typecheck_set_unpack_image_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::unpack_image_height(int value) function, expected prototype:\nvoid osg::PixelStorageModes::unpack_image_height(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::unpack_image_height(int). Got : '%s'",typeid(Luna< osg::PixelStorageModes >::check(L,1)).name());
		}
		self->unpack_image_height = value;

		return 0;
	}


	// Operator binds:

};

osg::PixelStorageModes* LunaTraits< osg::PixelStorageModes >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PixelStorageModes::_bind_ctor(L);
}

void LunaTraits< osg::PixelStorageModes >::_bind_dtor(osg::PixelStorageModes* obj) {
	delete obj;
}

const char LunaTraits< osg::PixelStorageModes >::className[] = "PixelStorageModes";
const char LunaTraits< osg::PixelStorageModes >::fullName[] = "osg::PixelStorageModes";
const char LunaTraits< osg::PixelStorageModes >::moduleName[] = "osg";
const char* LunaTraits< osg::PixelStorageModes >::parents[] = {0};
const int LunaTraits< osg::PixelStorageModes >::hash = 58853759;
const int LunaTraits< osg::PixelStorageModes >::uniqueIDs[] = {58853759,0};

luna_RegType LunaTraits< osg::PixelStorageModes >::methods[] = {
	{"retrieveStoreModes", &luna_wrapper_osg_PixelStorageModes::_bind_retrieveStoreModes},
	{"retrieveStoreModes3D", &luna_wrapper_osg_PixelStorageModes::_bind_retrieveStoreModes3D},
	{"get_pack_alignment", &luna_wrapper_osg_PixelStorageModes::_bind_get_pack_alignment},
	{"get_pack_row_length", &luna_wrapper_osg_PixelStorageModes::_bind_get_pack_row_length},
	{"get_pack_skip_rows", &luna_wrapper_osg_PixelStorageModes::_bind_get_pack_skip_rows},
	{"get_pack_skip_pixels", &luna_wrapper_osg_PixelStorageModes::_bind_get_pack_skip_pixels},
	{"get_pack_lsb_first", &luna_wrapper_osg_PixelStorageModes::_bind_get_pack_lsb_first},
	{"get_pack_swap_bytes", &luna_wrapper_osg_PixelStorageModes::_bind_get_pack_swap_bytes},
	{"get_pack_skip_images", &luna_wrapper_osg_PixelStorageModes::_bind_get_pack_skip_images},
	{"get_pack_image_height", &luna_wrapper_osg_PixelStorageModes::_bind_get_pack_image_height},
	{"get_unpack_alignment", &luna_wrapper_osg_PixelStorageModes::_bind_get_unpack_alignment},
	{"get_unpack_row_length", &luna_wrapper_osg_PixelStorageModes::_bind_get_unpack_row_length},
	{"get_unpack_skip_rows", &luna_wrapper_osg_PixelStorageModes::_bind_get_unpack_skip_rows},
	{"get_unpack_skip_pixels", &luna_wrapper_osg_PixelStorageModes::_bind_get_unpack_skip_pixels},
	{"get_unpack_lsb_first", &luna_wrapper_osg_PixelStorageModes::_bind_get_unpack_lsb_first},
	{"get_unpack_swap_bytes", &luna_wrapper_osg_PixelStorageModes::_bind_get_unpack_swap_bytes},
	{"get_unpack_skip_images", &luna_wrapper_osg_PixelStorageModes::_bind_get_unpack_skip_images},
	{"get_unpack_image_height", &luna_wrapper_osg_PixelStorageModes::_bind_get_unpack_image_height},
	{"set_pack_alignment", &luna_wrapper_osg_PixelStorageModes::_bind_set_pack_alignment},
	{"set_pack_row_length", &luna_wrapper_osg_PixelStorageModes::_bind_set_pack_row_length},
	{"set_pack_skip_rows", &luna_wrapper_osg_PixelStorageModes::_bind_set_pack_skip_rows},
	{"set_pack_skip_pixels", &luna_wrapper_osg_PixelStorageModes::_bind_set_pack_skip_pixels},
	{"set_pack_lsb_first", &luna_wrapper_osg_PixelStorageModes::_bind_set_pack_lsb_first},
	{"set_pack_swap_bytes", &luna_wrapper_osg_PixelStorageModes::_bind_set_pack_swap_bytes},
	{"set_pack_skip_images", &luna_wrapper_osg_PixelStorageModes::_bind_set_pack_skip_images},
	{"set_pack_image_height", &luna_wrapper_osg_PixelStorageModes::_bind_set_pack_image_height},
	{"set_unpack_alignment", &luna_wrapper_osg_PixelStorageModes::_bind_set_unpack_alignment},
	{"set_unpack_row_length", &luna_wrapper_osg_PixelStorageModes::_bind_set_unpack_row_length},
	{"set_unpack_skip_rows", &luna_wrapper_osg_PixelStorageModes::_bind_set_unpack_skip_rows},
	{"set_unpack_skip_pixels", &luna_wrapper_osg_PixelStorageModes::_bind_set_unpack_skip_pixels},
	{"set_unpack_lsb_first", &luna_wrapper_osg_PixelStorageModes::_bind_set_unpack_lsb_first},
	{"set_unpack_swap_bytes", &luna_wrapper_osg_PixelStorageModes::_bind_set_unpack_swap_bytes},
	{"set_unpack_skip_images", &luna_wrapper_osg_PixelStorageModes::_bind_set_unpack_skip_images},
	{"set_unpack_image_height", &luna_wrapper_osg_PixelStorageModes::_bind_set_unpack_image_height},
	{"dynCast", &luna_wrapper_osg_PixelStorageModes::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_PixelStorageModes::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PixelStorageModes >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PixelStorageModes >::enumValues[] = {
	{0,0}
};


