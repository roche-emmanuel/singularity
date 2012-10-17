#include <plug_common.h>

class luna_wrapper_osgText_GlyphTexture {
public:
	typedef Luna< osgText::GlyphTexture > luna_t;

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
		osgText::GlyphTexture* ptr= dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::GlyphTexture >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlyphImageMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlyphImageMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGlyphImageMarginRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlyphImageMarginRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSpaceForGlyph(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addGlyph(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgText::GlyphTexture::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::GlyphTexture::className() const function, expected prototype:\nconst char * osgText::GlyphTexture::className() const\nClass arguments details:\n");
		}


		osgText::GlyphTexture* self=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::GlyphTexture::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osgText::GlyphTexture::compare(const osg::StateAttribute & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgText::GlyphTexture::compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osgText::GlyphTexture::compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* rhs_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgText::GlyphTexture::compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osgText::GlyphTexture* self=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgText::GlyphTexture::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::GlyphTexture::setGlyphImageMargin(unsigned int margin)
	static int _bind_setGlyphImageMargin(lua_State *L) {
		if (!_lg_typecheck_setGlyphImageMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::setGlyphImageMargin(unsigned int margin) function, expected prototype:\nvoid osgText::GlyphTexture::setGlyphImageMargin(unsigned int margin)\nClass arguments details:\n");
		}

		unsigned int margin=(unsigned int)lua_tointeger(L,2);

		osgText::GlyphTexture* self=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::setGlyphImageMargin(unsigned int)");
		}
		self->setGlyphImageMargin(margin);

		return 0;
	}

	// unsigned int osgText::GlyphTexture::getGlyphImageMargin() const
	static int _bind_getGlyphImageMargin(lua_State *L) {
		if (!_lg_typecheck_getGlyphImageMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::GlyphTexture::getGlyphImageMargin() const function, expected prototype:\nunsigned int osgText::GlyphTexture::getGlyphImageMargin() const\nClass arguments details:\n");
		}


		osgText::GlyphTexture* self=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::GlyphTexture::getGlyphImageMargin() const");
		}
		unsigned int lret = self->getGlyphImageMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::GlyphTexture::setGlyphImageMarginRatio(float margin)
	static int _bind_setGlyphImageMarginRatio(lua_State *L) {
		if (!_lg_typecheck_setGlyphImageMarginRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::setGlyphImageMarginRatio(float margin) function, expected prototype:\nvoid osgText::GlyphTexture::setGlyphImageMarginRatio(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		osgText::GlyphTexture* self=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::setGlyphImageMarginRatio(float)");
		}
		self->setGlyphImageMarginRatio(margin);

		return 0;
	}

	// float osgText::GlyphTexture::getGlyphImageMarginRatio() const
	static int _bind_getGlyphImageMarginRatio(lua_State *L) {
		if (!_lg_typecheck_getGlyphImageMarginRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::GlyphTexture::getGlyphImageMarginRatio() const function, expected prototype:\nfloat osgText::GlyphTexture::getGlyphImageMarginRatio() const\nClass arguments details:\n");
		}


		osgText::GlyphTexture* self=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::GlyphTexture::getGlyphImageMarginRatio() const");
		}
		float lret = self->getGlyphImageMarginRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgText::GlyphTexture::getSpaceForGlyph(osgText::Glyph * glyph, int & posX, int & posY)
	static int _bind_getSpaceForGlyph(lua_State *L) {
		if (!_lg_typecheck_getSpaceForGlyph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::GlyphTexture::getSpaceForGlyph(osgText::Glyph * glyph, int & posX, int & posY) function, expected prototype:\nbool osgText::GlyphTexture::getSpaceForGlyph(osgText::Glyph * glyph, int & posX, int & posY)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgText::Glyph* glyph=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,2));
		int posX=(int)lua_tointeger(L,3);
		int posY=(int)lua_tointeger(L,4);

		osgText::GlyphTexture* self=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::GlyphTexture::getSpaceForGlyph(osgText::Glyph *, int &, int &)");
		}
		bool lret = self->getSpaceForGlyph(glyph, posX, posY);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::GlyphTexture::addGlyph(osgText::Glyph * glyph, int posX, int posY)
	static int _bind_addGlyph(lua_State *L) {
		if (!_lg_typecheck_addGlyph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::addGlyph(osgText::Glyph * glyph, int posX, int posY) function, expected prototype:\nvoid osgText::GlyphTexture::addGlyph(osgText::Glyph * glyph, int posX, int posY)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgText::Glyph* glyph=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,2));
		int posX=(int)lua_tointeger(L,3);
		int posY=(int)lua_tointeger(L,4);

		osgText::GlyphTexture* self=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::addGlyph(osgText::Glyph *, int, int)");
		}
		self->addGlyph(glyph, posX, posY);

		return 0;
	}

	// void osgText::GlyphTexture::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::apply(osg::State & state) const function, expected prototype:\nvoid osgText::GlyphTexture::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::GlyphTexture::apply function");
		}
		osg::State & state=*state_ptr;

		osgText::GlyphTexture* self=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::apply(osg::State &) const");
		}
		self->apply(state);

		return 0;
	}

	// osg::Image * osgText::GlyphTexture::createImage()
	static int _bind_createImage(lua_State *L) {
		if (!_lg_typecheck_createImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osgText::GlyphTexture::createImage() function, expected prototype:\nosg::Image * osgText::GlyphTexture::createImage()\nClass arguments details:\n");
		}


		osgText::GlyphTexture* self=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osgText::GlyphTexture::createImage()");
		}
		osg::Image * lret = self->createImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgText::GlyphTexture* LunaTraits< osgText::GlyphTexture >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::Texture::setImage(unsigned int face, osg::Image * image)
	// osg::Image * osg::Texture::getImage(unsigned int face)
	// const osg::Image * osg::Texture::getImage(unsigned int face) const

	// Abstract operators:
}

void LunaTraits< osgText::GlyphTexture >::_bind_dtor(osgText::GlyphTexture* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::GlyphTexture >::className[] = "GlyphTexture";
const char LunaTraits< osgText::GlyphTexture >::fullName[] = "osgText::GlyphTexture";
const char LunaTraits< osgText::GlyphTexture >::moduleName[] = "osgText";
const char* LunaTraits< osgText::GlyphTexture >::parents[] = {"osg.Texture2D", 0};
const int LunaTraits< osgText::GlyphTexture >::hash = 31969951;
const int LunaTraits< osgText::GlyphTexture >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::GlyphTexture >::methods[] = {
	{"className", &luna_wrapper_osgText_GlyphTexture::_bind_className},
	{"compare", &luna_wrapper_osgText_GlyphTexture::_bind_compare},
	{"setGlyphImageMargin", &luna_wrapper_osgText_GlyphTexture::_bind_setGlyphImageMargin},
	{"getGlyphImageMargin", &luna_wrapper_osgText_GlyphTexture::_bind_getGlyphImageMargin},
	{"setGlyphImageMarginRatio", &luna_wrapper_osgText_GlyphTexture::_bind_setGlyphImageMarginRatio},
	{"getGlyphImageMarginRatio", &luna_wrapper_osgText_GlyphTexture::_bind_getGlyphImageMarginRatio},
	{"getSpaceForGlyph", &luna_wrapper_osgText_GlyphTexture::_bind_getSpaceForGlyph},
	{"addGlyph", &luna_wrapper_osgText_GlyphTexture::_bind_addGlyph},
	{"apply", &luna_wrapper_osgText_GlyphTexture::_bind_apply},
	{"createImage", &luna_wrapper_osgText_GlyphTexture::_bind_createImage},
	{"__eq", &luna_wrapper_osgText_GlyphTexture::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::GlyphTexture >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_GlyphTexture::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::GlyphTexture >::enumValues[] = {
	{0,0}
};


