#include <plug_common.h>

class luna_wrapper_osgUtil_RenderStage_Attachment {
public:
	typedef Luna< osgUtil::RenderStage::Attachment > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25782964) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::RenderStage::Attachment*)");
		}

		osgUtil::RenderStage::Attachment* rhs =(Luna< osgUtil::RenderStage::Attachment >::check(L,2));
		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
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

		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::RenderStage::Attachment");
		
		return luna_dynamicCast(L,converters,"osgUtil::RenderStage::Attachment",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_get_image(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_imageReadPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_imageReadPixelDataType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_image(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15557275) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_imageReadPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_imageReadPixelDataType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// osg::ref_ptr< osg::Image > osgUtil::RenderStage::Attachment::_image()
	static int _bind_get_image(lua_State *L) {
		if (!_lg_typecheck_get_image(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Image > osgUtil::RenderStage::Attachment::_image() function, expected prototype:\nosg::ref_ptr< osg::Image > osgUtil::RenderStage::Attachment::_image()\nClass arguments details:\n");
		}


		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Image > osgUtil::RenderStage::Attachment::_image(). Got : '%s'",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name());
		}
		osg::ref_ptr< osg::Image > lret = self->_image;
		Luna< osg::Image >::push(L,lret.get(),false);

		return 1;
	}

	// unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelFormat()
	static int _bind_get_imageReadPixelFormat(lua_State *L) {
		if (!_lg_typecheck_get_imageReadPixelFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelFormat() function, expected prototype:\nunsigned int osgUtil::RenderStage::Attachment::_imageReadPixelFormat()\nClass arguments details:\n");
		}


		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelFormat(). Got : '%s'",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name());
		}
		unsigned int lret = self->_imageReadPixelFormat;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelDataType()
	static int _bind_get_imageReadPixelDataType(lua_State *L) {
		if (!_lg_typecheck_get_imageReadPixelDataType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelDataType() function, expected prototype:\nunsigned int osgUtil::RenderStage::Attachment::_imageReadPixelDataType()\nClass arguments details:\n");
		}


		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelDataType(). Got : '%s'",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name());
		}
		unsigned int lret = self->_imageReadPixelDataType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::Attachment::_image(osg::ref_ptr< osg::Image > value)
	static int _bind_set_image(lua_State *L) {
		if (!_lg_typecheck_set_image(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::Attachment::_image(osg::ref_ptr< osg::Image > value) function, expected prototype:\nvoid osgUtil::RenderStage::Attachment::_image(osg::ref_ptr< osg::Image > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osg::Image > value = dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::Attachment::_image(osg::ref_ptr< osg::Image >). Got : '%s'",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name());
		}
		self->_image = value;

		return 0;
	}

	// void osgUtil::RenderStage::Attachment::_imageReadPixelFormat(unsigned int value)
	static int _bind_set_imageReadPixelFormat(lua_State *L) {
		if (!_lg_typecheck_set_imageReadPixelFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::Attachment::_imageReadPixelFormat(unsigned int value) function, expected prototype:\nvoid osgUtil::RenderStage::Attachment::_imageReadPixelFormat(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::Attachment::_imageReadPixelFormat(unsigned int). Got : '%s'",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name());
		}
		self->_imageReadPixelFormat = value;

		return 0;
	}

	// void osgUtil::RenderStage::Attachment::_imageReadPixelDataType(unsigned int value)
	static int _bind_set_imageReadPixelDataType(lua_State *L) {
		if (!_lg_typecheck_set_imageReadPixelDataType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::Attachment::_imageReadPixelDataType(unsigned int value) function, expected prototype:\nvoid osgUtil::RenderStage::Attachment::_imageReadPixelDataType(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::Attachment::_imageReadPixelDataType(unsigned int). Got : '%s'",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name());
		}
		self->_imageReadPixelDataType = value;

		return 0;
	}


	// Operator binds:

};

osgUtil::RenderStage::Attachment* LunaTraits< osgUtil::RenderStage::Attachment >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::RenderStage::Attachment >::_bind_dtor(osgUtil::RenderStage::Attachment* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::RenderStage::Attachment >::className[] = "RenderStage_Attachment";
const char LunaTraits< osgUtil::RenderStage::Attachment >::fullName[] = "osgUtil::RenderStage::Attachment";
const char LunaTraits< osgUtil::RenderStage::Attachment >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderStage::Attachment >::parents[] = {0};
const int LunaTraits< osgUtil::RenderStage::Attachment >::hash = 25782964;
const int LunaTraits< osgUtil::RenderStage::Attachment >::uniqueIDs[] = {25782964,0};

luna_RegType LunaTraits< osgUtil::RenderStage::Attachment >::methods[] = {
	{"get_image", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_get_image},
	{"get_imageReadPixelFormat", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_get_imageReadPixelFormat},
	{"get_imageReadPixelDataType", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_get_imageReadPixelDataType},
	{"set_image", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_set_image},
	{"set_imageReadPixelFormat", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_set_imageReadPixelFormat},
	{"set_imageReadPixelDataType", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_set_imageReadPixelDataType},
	{"dynCast", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderStage::Attachment >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderStage::Attachment >::enumValues[] = {
	{0,0}
};


