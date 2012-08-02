#include <plug_common.h>

class luna_wrapper_osgText_Glyph {
public:
	typedef Luna< osgText::Glyph > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgText::Glyph* ptr= dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Glyph >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getFont_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFont_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlyphCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHorizontalBearing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHorizontalBearing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHorizontalAdvance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHorizontalAdvance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVerticalBearing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVerticalBearing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVerticalAdvance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVerticalAdvance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexturePosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexturePositionX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexturePositionY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinTexCoord(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinTexCoord(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxTexCoord(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxTexCoord(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_subload(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::Glyph::Glyph(osgText::Font * font, unsigned int glyphCode)
	static osgText::Glyph* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Glyph::Glyph(osgText::Font * font, unsigned int glyphCode) function, expected prototype:\nosgText::Glyph::Glyph(osgText::Font * font, unsigned int glyphCode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgText::Font* font=dynamic_cast< osgText::Font* >(Luna< osg::Referenced >::check(L,1));
		unsigned int glyphCode=(unsigned int)lua_tointeger(L,2);

		return new osgText::Glyph(font, glyphCode);
	}


	// Function binds:
	// osgText::Font * osgText::Glyph::getFont()
	static int _bind_getFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFont_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Font * osgText::Glyph::getFont() function, expected prototype:\nosgText::Font * osgText::Glyph::getFont()\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Font * osgText::Glyph::getFont()");
		}
		osgText::Font * lret = self->getFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font >::push(L,lret,false);

		return 1;
	}

	// const osgText::Font * osgText::Glyph::getFont() const
	static int _bind_getFont_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFont_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Font * osgText::Glyph::getFont() const function, expected prototype:\nconst osgText::Font * osgText::Glyph::getFont() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Font * osgText::Glyph::getFont() const");
		}
		const osgText::Font * lret = self->getFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Glyph::getFont
	static int _bind_getFont(lua_State *L) {
		if (_lg_typecheck_getFont_overload_1(L)) return _bind_getFont_overload_1(L);
		if (_lg_typecheck_getFont_overload_2(L)) return _bind_getFont_overload_2(L);

		luaL_error(L, "error in function getFont, cannot match any of the overloads for function getFont:\n  getFont()\n  getFont()\n");
		return 0;
	}

	// unsigned int osgText::Glyph::getGlyphCode() const
	static int _bind_getGlyphCode(lua_State *L) {
		if (!_lg_typecheck_getGlyphCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::Glyph::getGlyphCode() const function, expected prototype:\nunsigned int osgText::Glyph::getGlyphCode() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::Glyph::getGlyphCode() const");
		}
		unsigned int lret = self->getGlyphCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph::setWidth(float width)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::setWidth(float width) function, expected prototype:\nvoid osgText::Glyph::setWidth(float width)\nClass arguments details:\n");
		}

		float width=(float)lua_tonumber(L,2);

		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setWidth(float)");
		}
		self->setWidth(width);

		return 0;
	}

	// float osgText::Glyph::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Glyph::getWidth() const function, expected prototype:\nfloat osgText::Glyph::getWidth() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph::getWidth() const");
		}
		float lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph::setHeight(float height)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::setHeight(float height) function, expected prototype:\nvoid osgText::Glyph::setHeight(float height)\nClass arguments details:\n");
		}

		float height=(float)lua_tonumber(L,2);

		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setHeight(float)");
		}
		self->setHeight(height);

		return 0;
	}

	// float osgText::Glyph::getHeight() const
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Glyph::getHeight() const function, expected prototype:\nfloat osgText::Glyph::getHeight() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph::getHeight() const");
		}
		float lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph::setHorizontalBearing(const osg::Vec2f & bearing)
	static int _bind_setHorizontalBearing(lua_State *L) {
		if (!_lg_typecheck_setHorizontalBearing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::setHorizontalBearing(const osg::Vec2f & bearing) function, expected prototype:\nvoid osgText::Glyph::setHorizontalBearing(const osg::Vec2f & bearing)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		const osg::Vec2f* bearing_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !bearing_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bearing in osgText::Glyph::setHorizontalBearing function");
		}
		const osg::Vec2f & bearing=*bearing_ptr;

		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setHorizontalBearing(const osg::Vec2f &)");
		}
		self->setHorizontalBearing(bearing);

		return 0;
	}

	// const osg::Vec2f & osgText::Glyph::getHorizontalBearing() const
	static int _bind_getHorizontalBearing(lua_State *L) {
		if (!_lg_typecheck_getHorizontalBearing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec2f & osgText::Glyph::getHorizontalBearing() const function, expected prototype:\nconst osg::Vec2f & osgText::Glyph::getHorizontalBearing() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec2f & osgText::Glyph::getHorizontalBearing() const");
		}
		const osg::Vec2f* lret = &self->getHorizontalBearing();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,false);

		return 1;
	}

	// void osgText::Glyph::setHorizontalAdvance(float advance)
	static int _bind_setHorizontalAdvance(lua_State *L) {
		if (!_lg_typecheck_setHorizontalAdvance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::setHorizontalAdvance(float advance) function, expected prototype:\nvoid osgText::Glyph::setHorizontalAdvance(float advance)\nClass arguments details:\n");
		}

		float advance=(float)lua_tonumber(L,2);

		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setHorizontalAdvance(float)");
		}
		self->setHorizontalAdvance(advance);

		return 0;
	}

	// float osgText::Glyph::getHorizontalAdvance() const
	static int _bind_getHorizontalAdvance(lua_State *L) {
		if (!_lg_typecheck_getHorizontalAdvance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Glyph::getHorizontalAdvance() const function, expected prototype:\nfloat osgText::Glyph::getHorizontalAdvance() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph::getHorizontalAdvance() const");
		}
		float lret = self->getHorizontalAdvance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph::setVerticalBearing(const osg::Vec2f & bearing)
	static int _bind_setVerticalBearing(lua_State *L) {
		if (!_lg_typecheck_setVerticalBearing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::setVerticalBearing(const osg::Vec2f & bearing) function, expected prototype:\nvoid osgText::Glyph::setVerticalBearing(const osg::Vec2f & bearing)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		const osg::Vec2f* bearing_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !bearing_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bearing in osgText::Glyph::setVerticalBearing function");
		}
		const osg::Vec2f & bearing=*bearing_ptr;

		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setVerticalBearing(const osg::Vec2f &)");
		}
		self->setVerticalBearing(bearing);

		return 0;
	}

	// const osg::Vec2f & osgText::Glyph::getVerticalBearing() const
	static int _bind_getVerticalBearing(lua_State *L) {
		if (!_lg_typecheck_getVerticalBearing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec2f & osgText::Glyph::getVerticalBearing() const function, expected prototype:\nconst osg::Vec2f & osgText::Glyph::getVerticalBearing() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec2f & osgText::Glyph::getVerticalBearing() const");
		}
		const osg::Vec2f* lret = &self->getVerticalBearing();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,false);

		return 1;
	}

	// void osgText::Glyph::setVerticalAdvance(float advance)
	static int _bind_setVerticalAdvance(lua_State *L) {
		if (!_lg_typecheck_setVerticalAdvance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::setVerticalAdvance(float advance) function, expected prototype:\nvoid osgText::Glyph::setVerticalAdvance(float advance)\nClass arguments details:\n");
		}

		float advance=(float)lua_tonumber(L,2);

		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setVerticalAdvance(float)");
		}
		self->setVerticalAdvance(advance);

		return 0;
	}

	// float osgText::Glyph::getVerticalAdvance() const
	static int _bind_getVerticalAdvance(lua_State *L) {
		if (!_lg_typecheck_getVerticalAdvance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Glyph::getVerticalAdvance() const function, expected prototype:\nfloat osgText::Glyph::getVerticalAdvance() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph::getVerticalAdvance() const");
		}
		float lret = self->getVerticalAdvance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph::setTexture(osgText::GlyphTexture * texture)
	static int _bind_setTexture(lua_State *L) {
		if (!_lg_typecheck_setTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::setTexture(osgText::GlyphTexture * texture) function, expected prototype:\nvoid osgText::Glyph::setTexture(osgText::GlyphTexture * texture)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgText::GlyphTexture* texture=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,2));

		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setTexture(osgText::GlyphTexture *)");
		}
		self->setTexture(texture);

		return 0;
	}

	// osgText::GlyphTexture * osgText::Glyph::getTexture()
	static int _bind_getTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::GlyphTexture * osgText::Glyph::getTexture() function, expected prototype:\nosgText::GlyphTexture * osgText::Glyph::getTexture()\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::GlyphTexture * osgText::Glyph::getTexture()");
		}
		osgText::GlyphTexture * lret = self->getTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::GlyphTexture >::push(L,lret,false);

		return 1;
	}

	// const osgText::GlyphTexture * osgText::Glyph::getTexture() const
	static int _bind_getTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::GlyphTexture * osgText::Glyph::getTexture() const function, expected prototype:\nconst osgText::GlyphTexture * osgText::Glyph::getTexture() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::GlyphTexture * osgText::Glyph::getTexture() const");
		}
		const osgText::GlyphTexture * lret = self->getTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::GlyphTexture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Glyph::getTexture
	static int _bind_getTexture(lua_State *L) {
		if (_lg_typecheck_getTexture_overload_1(L)) return _bind_getTexture_overload_1(L);
		if (_lg_typecheck_getTexture_overload_2(L)) return _bind_getTexture_overload_2(L);

		luaL_error(L, "error in function getTexture, cannot match any of the overloads for function getTexture:\n  getTexture()\n  getTexture()\n");
		return 0;
	}

	// void osgText::Glyph::setTexturePosition(int posX, int posY)
	static int _bind_setTexturePosition(lua_State *L) {
		if (!_lg_typecheck_setTexturePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::setTexturePosition(int posX, int posY) function, expected prototype:\nvoid osgText::Glyph::setTexturePosition(int posX, int posY)\nClass arguments details:\n");
		}

		int posX=(int)lua_tointeger(L,2);
		int posY=(int)lua_tointeger(L,3);

		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setTexturePosition(int, int)");
		}
		self->setTexturePosition(posX, posY);

		return 0;
	}

	// int osgText::Glyph::getTexturePositionX() const
	static int _bind_getTexturePositionX(lua_State *L) {
		if (!_lg_typecheck_getTexturePositionX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgText::Glyph::getTexturePositionX() const function, expected prototype:\nint osgText::Glyph::getTexturePositionX() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgText::Glyph::getTexturePositionX() const");
		}
		int lret = self->getTexturePositionX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgText::Glyph::getTexturePositionY() const
	static int _bind_getTexturePositionY(lua_State *L) {
		if (!_lg_typecheck_getTexturePositionY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgText::Glyph::getTexturePositionY() const function, expected prototype:\nint osgText::Glyph::getTexturePositionY() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgText::Glyph::getTexturePositionY() const");
		}
		int lret = self->getTexturePositionY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph::setMinTexCoord(const osg::Vec2f & coord)
	static int _bind_setMinTexCoord(lua_State *L) {
		if (!_lg_typecheck_setMinTexCoord(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::setMinTexCoord(const osg::Vec2f & coord) function, expected prototype:\nvoid osgText::Glyph::setMinTexCoord(const osg::Vec2f & coord)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		const osg::Vec2f* coord_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !coord_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coord in osgText::Glyph::setMinTexCoord function");
		}
		const osg::Vec2f & coord=*coord_ptr;

		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setMinTexCoord(const osg::Vec2f &)");
		}
		self->setMinTexCoord(coord);

		return 0;
	}

	// const osg::Vec2f & osgText::Glyph::getMinTexCoord() const
	static int _bind_getMinTexCoord(lua_State *L) {
		if (!_lg_typecheck_getMinTexCoord(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec2f & osgText::Glyph::getMinTexCoord() const function, expected prototype:\nconst osg::Vec2f & osgText::Glyph::getMinTexCoord() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec2f & osgText::Glyph::getMinTexCoord() const");
		}
		const osg::Vec2f* lret = &self->getMinTexCoord();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,false);

		return 1;
	}

	// void osgText::Glyph::setMaxTexCoord(const osg::Vec2f & coord)
	static int _bind_setMaxTexCoord(lua_State *L) {
		if (!_lg_typecheck_setMaxTexCoord(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::setMaxTexCoord(const osg::Vec2f & coord) function, expected prototype:\nvoid osgText::Glyph::setMaxTexCoord(const osg::Vec2f & coord)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		const osg::Vec2f* coord_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !coord_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coord in osgText::Glyph::setMaxTexCoord function");
		}
		const osg::Vec2f & coord=*coord_ptr;

		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setMaxTexCoord(const osg::Vec2f &)");
		}
		self->setMaxTexCoord(coord);

		return 0;
	}

	// const osg::Vec2f & osgText::Glyph::getMaxTexCoord() const
	static int _bind_getMaxTexCoord(lua_State *L) {
		if (!_lg_typecheck_getMaxTexCoord(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec2f & osgText::Glyph::getMaxTexCoord() const function, expected prototype:\nconst osg::Vec2f & osgText::Glyph::getMaxTexCoord() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec2f & osgText::Glyph::getMaxTexCoord() const");
		}
		const osg::Vec2f* lret = &self->getMaxTexCoord();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,false);

		return 1;
	}

	// void osgText::Glyph::subload() const
	static int _bind_subload(lua_State *L) {
		if (!_lg_typecheck_subload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::subload() const function, expected prototype:\nvoid osgText::Glyph::subload() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::subload() const");
		}
		self->subload();

		return 0;
	}


	// Operator binds:

};

osgText::Glyph* LunaTraits< osgText::Glyph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Glyph::_bind_ctor(L);
}

void LunaTraits< osgText::Glyph >::_bind_dtor(osgText::Glyph* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Glyph >::className[] = "Glyph";
const char LunaTraits< osgText::Glyph >::fullName[] = "osgText::Glyph";
const char LunaTraits< osgText::Glyph >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Glyph >::parents[] = {"osg.Image", 0};
const int LunaTraits< osgText::Glyph >::hash = 6173013;
const int LunaTraits< osgText::Glyph >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Glyph >::methods[] = {
	{"getFont", &luna_wrapper_osgText_Glyph::_bind_getFont},
	{"getGlyphCode", &luna_wrapper_osgText_Glyph::_bind_getGlyphCode},
	{"setWidth", &luna_wrapper_osgText_Glyph::_bind_setWidth},
	{"getWidth", &luna_wrapper_osgText_Glyph::_bind_getWidth},
	{"setHeight", &luna_wrapper_osgText_Glyph::_bind_setHeight},
	{"getHeight", &luna_wrapper_osgText_Glyph::_bind_getHeight},
	{"setHorizontalBearing", &luna_wrapper_osgText_Glyph::_bind_setHorizontalBearing},
	{"getHorizontalBearing", &luna_wrapper_osgText_Glyph::_bind_getHorizontalBearing},
	{"setHorizontalAdvance", &luna_wrapper_osgText_Glyph::_bind_setHorizontalAdvance},
	{"getHorizontalAdvance", &luna_wrapper_osgText_Glyph::_bind_getHorizontalAdvance},
	{"setVerticalBearing", &luna_wrapper_osgText_Glyph::_bind_setVerticalBearing},
	{"getVerticalBearing", &luna_wrapper_osgText_Glyph::_bind_getVerticalBearing},
	{"setVerticalAdvance", &luna_wrapper_osgText_Glyph::_bind_setVerticalAdvance},
	{"getVerticalAdvance", &luna_wrapper_osgText_Glyph::_bind_getVerticalAdvance},
	{"setTexture", &luna_wrapper_osgText_Glyph::_bind_setTexture},
	{"getTexture", &luna_wrapper_osgText_Glyph::_bind_getTexture},
	{"setTexturePosition", &luna_wrapper_osgText_Glyph::_bind_setTexturePosition},
	{"getTexturePositionX", &luna_wrapper_osgText_Glyph::_bind_getTexturePositionX},
	{"getTexturePositionY", &luna_wrapper_osgText_Glyph::_bind_getTexturePositionY},
	{"setMinTexCoord", &luna_wrapper_osgText_Glyph::_bind_setMinTexCoord},
	{"getMinTexCoord", &luna_wrapper_osgText_Glyph::_bind_getMinTexCoord},
	{"setMaxTexCoord", &luna_wrapper_osgText_Glyph::_bind_setMaxTexCoord},
	{"getMaxTexCoord", &luna_wrapper_osgText_Glyph::_bind_getMaxTexCoord},
	{"subload", &luna_wrapper_osgText_Glyph::_bind_subload},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Glyph >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Glyph::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Glyph >::enumValues[] = {
	{0,0}
};


