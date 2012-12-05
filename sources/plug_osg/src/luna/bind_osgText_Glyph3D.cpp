#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_Glyph3D.h>

class luna_wrapper_osgText_Glyph3D {
public:
	typedef Luna< osgText::Glyph3D > luna_t;

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
		osgText::Glyph3D* ptr= dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Glyph3D >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< osgText::Font* >(Luna< osg::Referenced >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osgText::Font* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_setBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82744897) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRawVertexArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7204710)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRawVertexArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRawVertexArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlyphGeometry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::Glyph3D::Glyph3D(osgText::Font * font, unsigned int glyphCode)
	static osgText::Glyph3D* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Glyph3D::Glyph3D(osgText::Font * font, unsigned int glyphCode) function, expected prototype:\nosgText::Glyph3D::Glyph3D(osgText::Font * font, unsigned int glyphCode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgText::Font* font=dynamic_cast< osgText::Font* >(Luna< osg::Referenced >::check(L,1));
		unsigned int glyphCode=(unsigned int)lua_tointeger(L,2);

		return new osgText::Glyph3D(font, glyphCode);
	}

	// osgText::Glyph3D::Glyph3D(lua_Table * data, osgText::Font * font, unsigned int glyphCode)
	static osgText::Glyph3D* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Glyph3D::Glyph3D(lua_Table * data, osgText::Font * font, unsigned int glyphCode) function, expected prototype:\nosgText::Glyph3D::Glyph3D(lua_Table * data, osgText::Font * font, unsigned int glyphCode)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osgText::Font* font=dynamic_cast< osgText::Font* >(Luna< osg::Referenced >::check(L,2));
		unsigned int glyphCode=(unsigned int)lua_tointeger(L,3);

		return new wrapper_osgText_Glyph3D(L,NULL, font, glyphCode);
	}

	// Overload binder for osgText::Glyph3D::Glyph3D
	static osgText::Glyph3D* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Glyph3D, cannot match any of the overloads for function Glyph3D:\n  Glyph3D(osgText::Font *, unsigned int)\n  Glyph3D(lua_Table *, osgText::Font *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// osgText::Font * osgText::Glyph3D::getFont()
	static int _bind_getFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFont_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Font * osgText::Glyph3D::getFont() function, expected prototype:\nosgText::Font * osgText::Glyph3D::getFont()\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Font * osgText::Glyph3D::getFont()");
		}
		osgText::Font * lret = self->getFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font >::push(L,lret,false);

		return 1;
	}

	// const osgText::Font * osgText::Glyph3D::getFont() const
	static int _bind_getFont_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFont_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Font * osgText::Glyph3D::getFont() const function, expected prototype:\nconst osgText::Font * osgText::Glyph3D::getFont() const\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Font * osgText::Glyph3D::getFont() const");
		}
		const osgText::Font * lret = self->getFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Glyph3D::getFont
	static int _bind_getFont(lua_State *L) {
		if (_lg_typecheck_getFont_overload_1(L)) return _bind_getFont_overload_1(L);
		if (_lg_typecheck_getFont_overload_2(L)) return _bind_getFont_overload_2(L);

		luaL_error(L, "error in function getFont, cannot match any of the overloads for function getFont:\n  getFont()\n  getFont()\n");
		return 0;
	}

	// unsigned int osgText::Glyph3D::getGlyphCode() const
	static int _bind_getGlyphCode(lua_State *L) {
		if (!_lg_typecheck_getGlyphCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::Glyph3D::getGlyphCode() const function, expected prototype:\nunsigned int osgText::Glyph3D::getGlyphCode() const\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::Glyph3D::getGlyphCode() const");
		}
		unsigned int lret = self->getGlyphCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph3D::setWidth(float width)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph3D::setWidth(float width) function, expected prototype:\nvoid osgText::Glyph3D::setWidth(float width)\nClass arguments details:\n");
		}

		float width=(float)lua_tonumber(L,2);

		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph3D::setWidth(float)");
		}
		self->setWidth(width);

		return 0;
	}

	// float osgText::Glyph3D::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Glyph3D::getWidth() const function, expected prototype:\nfloat osgText::Glyph3D::getWidth() const\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph3D::getWidth() const");
		}
		float lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph3D::setHeight(float height)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph3D::setHeight(float height) function, expected prototype:\nvoid osgText::Glyph3D::setHeight(float height)\nClass arguments details:\n");
		}

		float height=(float)lua_tonumber(L,2);

		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph3D::setHeight(float)");
		}
		self->setHeight(height);

		return 0;
	}

	// float osgText::Glyph3D::getHeight() const
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Glyph3D::getHeight() const function, expected prototype:\nfloat osgText::Glyph3D::getHeight() const\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph3D::getHeight() const");
		}
		float lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph3D::setHorizontalBearing(const osg::Vec2f & bearing)
	static int _bind_setHorizontalBearing(lua_State *L) {
		if (!_lg_typecheck_setHorizontalBearing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph3D::setHorizontalBearing(const osg::Vec2f & bearing) function, expected prototype:\nvoid osgText::Glyph3D::setHorizontalBearing(const osg::Vec2f & bearing)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		const osg::Vec2f* bearing_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !bearing_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bearing in osgText::Glyph3D::setHorizontalBearing function");
		}
		const osg::Vec2f & bearing=*bearing_ptr;

		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph3D::setHorizontalBearing(const osg::Vec2f &)");
		}
		self->setHorizontalBearing(bearing);

		return 0;
	}

	// const osg::Vec2f & osgText::Glyph3D::getHorizontalBearing() const
	static int _bind_getHorizontalBearing(lua_State *L) {
		if (!_lg_typecheck_getHorizontalBearing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec2f & osgText::Glyph3D::getHorizontalBearing() const function, expected prototype:\nconst osg::Vec2f & osgText::Glyph3D::getHorizontalBearing() const\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec2f & osgText::Glyph3D::getHorizontalBearing() const");
		}
		const osg::Vec2f* lret = &self->getHorizontalBearing();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,false);

		return 1;
	}

	// void osgText::Glyph3D::setHorizontalAdvance(float advance)
	static int _bind_setHorizontalAdvance(lua_State *L) {
		if (!_lg_typecheck_setHorizontalAdvance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph3D::setHorizontalAdvance(float advance) function, expected prototype:\nvoid osgText::Glyph3D::setHorizontalAdvance(float advance)\nClass arguments details:\n");
		}

		float advance=(float)lua_tonumber(L,2);

		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph3D::setHorizontalAdvance(float)");
		}
		self->setHorizontalAdvance(advance);

		return 0;
	}

	// float osgText::Glyph3D::getHorizontalAdvance() const
	static int _bind_getHorizontalAdvance(lua_State *L) {
		if (!_lg_typecheck_getHorizontalAdvance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Glyph3D::getHorizontalAdvance() const function, expected prototype:\nfloat osgText::Glyph3D::getHorizontalAdvance() const\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph3D::getHorizontalAdvance() const");
		}
		float lret = self->getHorizontalAdvance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph3D::setVerticalBearing(const osg::Vec2f & bearing)
	static int _bind_setVerticalBearing(lua_State *L) {
		if (!_lg_typecheck_setVerticalBearing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph3D::setVerticalBearing(const osg::Vec2f & bearing) function, expected prototype:\nvoid osgText::Glyph3D::setVerticalBearing(const osg::Vec2f & bearing)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		const osg::Vec2f* bearing_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !bearing_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bearing in osgText::Glyph3D::setVerticalBearing function");
		}
		const osg::Vec2f & bearing=*bearing_ptr;

		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph3D::setVerticalBearing(const osg::Vec2f &)");
		}
		self->setVerticalBearing(bearing);

		return 0;
	}

	// const osg::Vec2f & osgText::Glyph3D::getVerticalBearing() const
	static int _bind_getVerticalBearing(lua_State *L) {
		if (!_lg_typecheck_getVerticalBearing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec2f & osgText::Glyph3D::getVerticalBearing() const function, expected prototype:\nconst osg::Vec2f & osgText::Glyph3D::getVerticalBearing() const\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec2f & osgText::Glyph3D::getVerticalBearing() const");
		}
		const osg::Vec2f* lret = &self->getVerticalBearing();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,false);

		return 1;
	}

	// void osgText::Glyph3D::setVerticalAdvance(float advance)
	static int _bind_setVerticalAdvance(lua_State *L) {
		if (!_lg_typecheck_setVerticalAdvance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph3D::setVerticalAdvance(float advance) function, expected prototype:\nvoid osgText::Glyph3D::setVerticalAdvance(float advance)\nClass arguments details:\n");
		}

		float advance=(float)lua_tonumber(L,2);

		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph3D::setVerticalAdvance(float)");
		}
		self->setVerticalAdvance(advance);

		return 0;
	}

	// float osgText::Glyph3D::getVerticalAdvance() const
	static int _bind_getVerticalAdvance(lua_State *L) {
		if (!_lg_typecheck_getVerticalAdvance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Glyph3D::getVerticalAdvance() const function, expected prototype:\nfloat osgText::Glyph3D::getVerticalAdvance() const\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph3D::getVerticalAdvance() const");
		}
		float lret = self->getVerticalAdvance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph3D::setBoundingBox(osg::BoundingBoxd & bb)
	static int _bind_setBoundingBox(lua_State *L) {
		if (!_lg_typecheck_setBoundingBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph3D::setBoundingBox(osg::BoundingBoxd & bb) function, expected prototype:\nvoid osgText::Glyph3D::setBoundingBox(osg::BoundingBoxd & bb)\nClass arguments details:\narg 1 ID = 82744897\n");
		}

		osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxd >::check(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osgText::Glyph3D::setBoundingBox function");
		}
		osg::BoundingBoxd & bb=*bb_ptr;

		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph3D::setBoundingBox(osg::BoundingBoxd &)");
		}
		self->setBoundingBox(bb);

		return 0;
	}

	// const osg::BoundingBoxd & osgText::Glyph3D::getBoundingBox() const
	static int _bind_getBoundingBox(lua_State *L) {
		if (!_lg_typecheck_getBoundingBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::BoundingBoxd & osgText::Glyph3D::getBoundingBox() const function, expected prototype:\nconst osg::BoundingBoxd & osgText::Glyph3D::getBoundingBox() const\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::BoundingBoxd & osgText::Glyph3D::getBoundingBox() const");
		}
		const osg::BoundingBoxd* lret = &self->getBoundingBox();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,false);

		return 1;
	}

	// void osgText::Glyph3D::setRawVertexArray(osg::Vec3Array * vertices)
	static int _bind_setRawVertexArray(lua_State *L) {
		if (!_lg_typecheck_setRawVertexArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph3D::setRawVertexArray(osg::Vec3Array * vertices) function, expected prototype:\nvoid osgText::Glyph3D::setRawVertexArray(osg::Vec3Array * vertices)\nClass arguments details:\narg 1 ID = 7204710\n");
		}

		osg::Vec3Array* vertices=(Luna< osg::Vec3Array >::check(L,2));

		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph3D::setRawVertexArray(osg::Vec3Array *)");
		}
		self->setRawVertexArray(vertices);

		return 0;
	}

	// osg::Vec3Array * osgText::Glyph3D::getRawVertexArray()
	static int _bind_getRawVertexArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRawVertexArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3Array * osgText::Glyph3D::getRawVertexArray() function, expected prototype:\nosg::Vec3Array * osgText::Glyph3D::getRawVertexArray()\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3Array * osgText::Glyph3D::getRawVertexArray()");
		}
		osg::Vec3Array * lret = self->getRawVertexArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3Array * osgText::Glyph3D::getRawVertexArray() const
	static int _bind_getRawVertexArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRawVertexArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3Array * osgText::Glyph3D::getRawVertexArray() const function, expected prototype:\nconst osg::Vec3Array * osgText::Glyph3D::getRawVertexArray() const\nClass arguments details:\n");
		}


		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3Array * osgText::Glyph3D::getRawVertexArray() const");
		}
		const osg::Vec3Array * lret = self->getRawVertexArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Glyph3D::getRawVertexArray
	static int _bind_getRawVertexArray(lua_State *L) {
		if (_lg_typecheck_getRawVertexArray_overload_1(L)) return _bind_getRawVertexArray_overload_1(L);
		if (_lg_typecheck_getRawVertexArray_overload_2(L)) return _bind_getRawVertexArray_overload_2(L);

		luaL_error(L, "error in function getRawVertexArray, cannot match any of the overloads for function getRawVertexArray:\n  getRawVertexArray()\n  getRawVertexArray()\n");
		return 0;
	}

	// osgText::GlyphGeometry * osgText::Glyph3D::getGlyphGeometry(const osgText::Style * style)
	static int _bind_getGlyphGeometry(lua_State *L) {
		if (!_lg_typecheck_getGlyphGeometry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::GlyphGeometry * osgText::Glyph3D::getGlyphGeometry(const osgText::Style * style) function, expected prototype:\nosgText::GlyphGeometry * osgText::Glyph3D::getGlyphGeometry(const osgText::Style * style)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgText::Style* style=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,2));

		osgText::Glyph3D* self=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::GlyphGeometry * osgText::Glyph3D::getGlyphGeometry(const osgText::Style *)");
		}
		osgText::GlyphGeometry * lret = self->getGlyphGeometry(style);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::GlyphGeometry >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgText::Glyph3D* LunaTraits< osgText::Glyph3D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Glyph3D::_bind_ctor(L);
}

void LunaTraits< osgText::Glyph3D >::_bind_dtor(osgText::Glyph3D* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Glyph3D >::className[] = "Glyph3D";
const char LunaTraits< osgText::Glyph3D >::fullName[] = "osgText::Glyph3D";
const char LunaTraits< osgText::Glyph3D >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Glyph3D >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgText::Glyph3D >::hash = 32266229;
const int LunaTraits< osgText::Glyph3D >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Glyph3D >::methods[] = {
	{"getFont", &luna_wrapper_osgText_Glyph3D::_bind_getFont},
	{"getGlyphCode", &luna_wrapper_osgText_Glyph3D::_bind_getGlyphCode},
	{"setWidth", &luna_wrapper_osgText_Glyph3D::_bind_setWidth},
	{"getWidth", &luna_wrapper_osgText_Glyph3D::_bind_getWidth},
	{"setHeight", &luna_wrapper_osgText_Glyph3D::_bind_setHeight},
	{"getHeight", &luna_wrapper_osgText_Glyph3D::_bind_getHeight},
	{"setHorizontalBearing", &luna_wrapper_osgText_Glyph3D::_bind_setHorizontalBearing},
	{"getHorizontalBearing", &luna_wrapper_osgText_Glyph3D::_bind_getHorizontalBearing},
	{"setHorizontalAdvance", &luna_wrapper_osgText_Glyph3D::_bind_setHorizontalAdvance},
	{"getHorizontalAdvance", &luna_wrapper_osgText_Glyph3D::_bind_getHorizontalAdvance},
	{"setVerticalBearing", &luna_wrapper_osgText_Glyph3D::_bind_setVerticalBearing},
	{"getVerticalBearing", &luna_wrapper_osgText_Glyph3D::_bind_getVerticalBearing},
	{"setVerticalAdvance", &luna_wrapper_osgText_Glyph3D::_bind_setVerticalAdvance},
	{"getVerticalAdvance", &luna_wrapper_osgText_Glyph3D::_bind_getVerticalAdvance},
	{"setBoundingBox", &luna_wrapper_osgText_Glyph3D::_bind_setBoundingBox},
	{"getBoundingBox", &luna_wrapper_osgText_Glyph3D::_bind_getBoundingBox},
	{"setRawVertexArray", &luna_wrapper_osgText_Glyph3D::_bind_setRawVertexArray},
	{"getRawVertexArray", &luna_wrapper_osgText_Glyph3D::_bind_getRawVertexArray},
	{"getGlyphGeometry", &luna_wrapper_osgText_Glyph3D::_bind_getGlyphGeometry},
	{"__eq", &luna_wrapper_osgText_Glyph3D::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Glyph3D >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Glyph3D::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Glyph3D >::enumValues[] = {
	{0,0}
};


