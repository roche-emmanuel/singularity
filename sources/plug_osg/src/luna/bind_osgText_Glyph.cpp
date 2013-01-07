#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_Glyph.h>

class luna_wrapper_osgText_Glyph {
public:
	typedef Luna< osgText::Glyph > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osgText::Glyph* ptr= dynamic_cast< osgText::Glyph* >(Luna< osg::Referenced >::check(L,1));
		osgText::Glyph* ptr= luna_caster< osg::Referenced, osgText::Glyph >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Glyph >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgText::Font >(L,2)) ) ) return false;
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

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_allocateImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<9 || luatop>10 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readPixels(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readImageFromCurrentTexture(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_scaleImage(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_copySubImage(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isImageTranslucent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_requiresUpdateCall(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sendFocusHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sendPointerEvent(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sendKeyEvent(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setFrameLastRendered(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::Glyph::Glyph(osgText::Font * font, unsigned int glyphCode)
	static osgText::Glyph* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Glyph::Glyph(osgText::Font * font, unsigned int glyphCode) function, expected prototype:\nosgText::Glyph::Glyph(osgText::Font * font, unsigned int glyphCode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgText::Font* font=(Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1));
		unsigned int glyphCode=(unsigned int)lua_tointeger(L,2);

		return new osgText::Glyph(font, glyphCode);
	}

	// osgText::Glyph::Glyph(lua_Table * data, osgText::Font * font, unsigned int glyphCode)
	static osgText::Glyph* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Glyph::Glyph(lua_Table * data, osgText::Font * font, unsigned int glyphCode) function, expected prototype:\nosgText::Glyph::Glyph(lua_Table * data, osgText::Font * font, unsigned int glyphCode)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osgText::Font* font=(Luna< osg::Referenced >::checkSubType< osgText::Font >(L,2));
		unsigned int glyphCode=(unsigned int)lua_tointeger(L,3);

		return new wrapper_osgText_Glyph(L,NULL, font, glyphCode);
	}

	// Overload binder for osgText::Glyph::Glyph
	static osgText::Glyph* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Glyph, cannot match any of the overloads for function Glyph:\n  Glyph(osgText::Font *, unsigned int)\n  Glyph(lua_Table *, osgText::Font *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// osgText::Font * osgText::Glyph::getFont()
	static int _bind_getFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFont_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Font * osgText::Glyph::getFont() function, expected prototype:\nosgText::Font * osgText::Glyph::getFont()\nClass arguments details:\n");
		}


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Font * osgText::Glyph::getFont(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Font * osgText::Glyph::getFont() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::Glyph::getGlyphCode() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setWidth(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph::getWidth() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setHeight(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph::getHeight() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setHorizontalBearing(const osg::Vec2f &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec2f & osgText::Glyph::getHorizontalBearing() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setHorizontalAdvance(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph::getHorizontalAdvance() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setVerticalBearing(const osg::Vec2f &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec2f & osgText::Glyph::getVerticalBearing() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setVerticalAdvance(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Glyph::getVerticalAdvance() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osgText::GlyphTexture* texture=(Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,2));

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setTexture(osgText::GlyphTexture *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::GlyphTexture * osgText::Glyph::getTexture(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::GlyphTexture * osgText::Glyph::getTexture() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setTexturePosition(int, int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgText::Glyph::getTexturePositionX() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgText::Glyph::getTexturePositionY() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setMinTexCoord(const osg::Vec2f &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec2f & osgText::Glyph::getMinTexCoord() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::setMaxTexCoord(const osg::Vec2f &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec2f & osgText::Glyph::getMaxTexCoord() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::subload() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->subload();

		return 0;
	}

	// void osgText::Glyph::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::Glyph::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgText::Glyph::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_setName(const std::string & name) function, expected prototype:\nvoid osgText::Glyph::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::setName(name);

		return 0;
	}

	// void osgText::Glyph::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_computeDataVariance() function, expected prototype:\nvoid osgText::Glyph::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::computeDataVariance();

		return 0;
	}

	// void osgText::Glyph::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgText::Glyph::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgText::Glyph::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgText::Glyph::base_getUserData() function, expected prototype:\nosg::Referenced * osgText::Glyph::base_getUserData()\nClass arguments details:\n");
		}


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgText::Glyph::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->Glyph::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgText::Glyph::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgText::Glyph::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgText::Glyph::base_getUserData() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgText::Glyph::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->Glyph::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Glyph::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgText::Glyph::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::Glyph::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::releaseGLObjects(state);

		return 0;
	}

	// osg::Object * osgText::Glyph::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Glyph::base_cloneType() const function, expected prototype:\nosg::Object * osgText::Glyph::base_cloneType() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Glyph::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Glyph::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Glyph::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Glyph::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Glyph::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Glyph::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Glyph::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Glyph::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Glyph::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Glyph::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Glyph::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Glyph::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Glyph::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Glyph::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Glyph::base_libraryName() const function, expected prototype:\nconst char * osgText::Glyph::base_libraryName() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Glyph::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Glyph::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Glyph::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Glyph::base_className() const function, expected prototype:\nconst char * osgText::Glyph::base_className() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Glyph::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Glyph::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const void * osgText::Glyph::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osgText::Glyph::base_getDataPointer() const function, expected prototype:\nconst void * osgText::Glyph::base_getDataPointer() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osgText::Glyph::base_getDataPointer() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const void * lret = self->Glyph::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osgText::Glyph::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::Glyph::base_getTotalDataSize() const function, expected prototype:\nunsigned int osgText::Glyph::base_getTotalDataSize() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::Glyph::base_getTotalDataSize() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->Glyph::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgText::Glyph::base_compare(const osg::Image & rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgText::Glyph::base_compare(const osg::Image & rhs) const function, expected prototype:\nint osgText::Glyph::base_compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgText::Glyph::base_compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgText::Glyph::base_compare(const osg::Image &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->Glyph::compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Glyph::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)
	static int _bind_base_allocateImage(lua_State *L) {
		if (!_lg_typecheck_base_allocateImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1) function, expected prototype:\nvoid osgText::Glyph::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,5);
		unsigned int type=(unsigned int)lua_tointeger(L,6);
		int packing=luatop>6 ? (int)lua_tointeger(L,7) : 1;

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_allocateImage(int, int, int, unsigned int, unsigned int, int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::allocateImage(s, t, r, pixelFormat, type, packing);

		return 0;
	}

	// void osgText::Glyph::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)
	static int _bind_base_setImage(lua_State *L) {
		if (!_lg_typecheck_base_setImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1) function, expected prototype:\nvoid osgText::Glyph::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		int internalTextureformat=(int)lua_tointeger(L,5);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);
		unsigned char data = (unsigned char)(lua_tointeger(L,8));
		osg::Image::AllocationMode mode=(osg::Image::AllocationMode)lua_tointeger(L,9);
		int packing=luatop>9 ? (int)lua_tointeger(L,10) : 1;

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_setImage(int, int, int, int, unsigned int, unsigned int, unsigned char *, osg::Image::AllocationMode, int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::setImage(s, t, r, internalTextureformat, pixelFormat, type, &data, mode, packing);

		return 0;
	}

	// void osgText::Glyph::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type)
	static int _bind_base_readPixels(lua_State *L) {
		if (!_lg_typecheck_base_readPixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type) function, expected prototype:\nvoid osgText::Glyph::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_readPixels(int, int, int, int, unsigned int, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::readPixels(x, y, width, height, pixelFormat, type);

		return 0;
	}

	// void osgText::Glyph::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE)
	static int _bind_base_readImageFromCurrentTexture(lua_State *L) {
		if (!_lg_typecheck_base_readImageFromCurrentTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE) function, expected prototype:\nvoid osgText::Glyph::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		bool copyMipMapsIfAvailable=(bool)(lua_toboolean(L,3)==1);
		unsigned int type=luatop>3 ? (unsigned int)lua_tointeger(L,4) : GL_UNSIGNED_BYTE;

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_readImageFromCurrentTexture(unsigned int, bool, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::readImageFromCurrentTexture(contextID, copyMipMapsIfAvailable, type);

		return 0;
	}

	// void osgText::Glyph::base_scaleImage(int s, int t, int r, unsigned int newDataType)
	static int _bind_base_scaleImage(lua_State *L) {
		if (!_lg_typecheck_base_scaleImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_scaleImage(int s, int t, int r, unsigned int newDataType) function, expected prototype:\nvoid osgText::Glyph::base_scaleImage(int s, int t, int r, unsigned int newDataType)\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int newDataType=(unsigned int)lua_tointeger(L,5);

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_scaleImage(int, int, int, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::scaleImage(s, t, r, newDataType);

		return 0;
	}

	// void osgText::Glyph::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)
	static int _bind_base_copySubImage(lua_State *L) {
		if (!_lg_typecheck_base_copySubImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source) function, expected prototype:\nvoid osgText::Glyph::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)\nClass arguments details:\narg 4 ID = 50169651\n");
		}

		int s_offset=(int)lua_tointeger(L,2);
		int t_offset=(int)lua_tointeger(L,3);
		int r_offset=(int)lua_tointeger(L,4);
		const osg::Image* source=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,5));

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_copySubImage(int, int, int, const osg::Image *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::copySubImage(s_offset, t_offset, r_offset, source);

		return 0;
	}

	// bool osgText::Glyph::base_isImageTranslucent() const
	static int _bind_base_isImageTranslucent(lua_State *L) {
		if (!_lg_typecheck_base_isImageTranslucent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Glyph::base_isImageTranslucent() const function, expected prototype:\nbool osgText::Glyph::base_isImageTranslucent() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Glyph::base_isImageTranslucent() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Glyph::isImageTranslucent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgText::Glyph::base_requiresUpdateCall() const
	static int _bind_base_requiresUpdateCall(lua_State *L) {
		if (!_lg_typecheck_base_requiresUpdateCall(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Glyph::base_requiresUpdateCall() const function, expected prototype:\nbool osgText::Glyph::base_requiresUpdateCall() const\nClass arguments details:\n");
		}


		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Glyph::base_requiresUpdateCall() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Glyph::requiresUpdateCall();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::Glyph::base_update(osg::NodeVisitor * arg1)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_update(osg::NodeVisitor * arg1) function, expected prototype:\nvoid osgText::Glyph::base_update(osg::NodeVisitor * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_update(osg::NodeVisitor *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::update(_arg1);

		return 0;
	}

	// bool osgText::Glyph::base_sendFocusHint(bool arg1)
	static int _bind_base_sendFocusHint(lua_State *L) {
		if (!_lg_typecheck_base_sendFocusHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Glyph::base_sendFocusHint(bool arg1) function, expected prototype:\nbool osgText::Glyph::base_sendFocusHint(bool arg1)\nClass arguments details:\n");
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Glyph::base_sendFocusHint(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Glyph::sendFocusHint(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgText::Glyph::base_sendPointerEvent(int arg1, int arg2, int arg3)
	static int _bind_base_sendPointerEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendPointerEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Glyph::base_sendPointerEvent(int arg1, int arg2, int arg3) function, expected prototype:\nbool osgText::Glyph::base_sendPointerEvent(int arg1, int arg2, int arg3)\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Glyph::base_sendPointerEvent(int, int, int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Glyph::sendPointerEvent(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgText::Glyph::base_sendKeyEvent(int arg1, bool arg2)
	static int _bind_base_sendKeyEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendKeyEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Glyph::base_sendKeyEvent(int arg1, bool arg2) function, expected prototype:\nbool osgText::Glyph::base_sendKeyEvent(int arg1, bool arg2)\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Glyph::base_sendKeyEvent(int, bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Glyph::sendKeyEvent(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::Glyph::base_setFrameLastRendered(const osg::FrameStamp * arg1)
	static int _bind_base_setFrameLastRendered(lua_State *L) {
		if (!_lg_typecheck_base_setFrameLastRendered(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Glyph::base_setFrameLastRendered(const osg::FrameStamp * arg1) function, expected prototype:\nvoid osgText::Glyph::base_setFrameLastRendered(const osg::FrameStamp * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::FrameStamp* _arg1=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osgText::Glyph* self=Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Glyph::base_setFrameLastRendered(const osg::FrameStamp *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Glyph::setFrameLastRendered(_arg1);

		return 0;
	}


	// Operator binds:

};

osgText::Glyph* LunaTraits< osgText::Glyph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Glyph::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
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
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgText_Glyph::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgText_Glyph::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgText_Glyph::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgText_Glyph::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgText_Glyph::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgText_Glyph::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgText_Glyph::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgText_Glyph::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgText_Glyph::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgText_Glyph::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgText_Glyph::_bind_base_className},
	{"base_getDataPointer", &luna_wrapper_osgText_Glyph::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osgText_Glyph::_bind_base_getTotalDataSize},
	{"base_compare", &luna_wrapper_osgText_Glyph::_bind_base_compare},
	{"base_allocateImage", &luna_wrapper_osgText_Glyph::_bind_base_allocateImage},
	{"base_setImage", &luna_wrapper_osgText_Glyph::_bind_base_setImage},
	{"base_readPixels", &luna_wrapper_osgText_Glyph::_bind_base_readPixels},
	{"base_readImageFromCurrentTexture", &luna_wrapper_osgText_Glyph::_bind_base_readImageFromCurrentTexture},
	{"base_scaleImage", &luna_wrapper_osgText_Glyph::_bind_base_scaleImage},
	{"base_copySubImage", &luna_wrapper_osgText_Glyph::_bind_base_copySubImage},
	{"base_isImageTranslucent", &luna_wrapper_osgText_Glyph::_bind_base_isImageTranslucent},
	{"base_requiresUpdateCall", &luna_wrapper_osgText_Glyph::_bind_base_requiresUpdateCall},
	{"base_update", &luna_wrapper_osgText_Glyph::_bind_base_update},
	{"base_sendFocusHint", &luna_wrapper_osgText_Glyph::_bind_base_sendFocusHint},
	{"base_sendPointerEvent", &luna_wrapper_osgText_Glyph::_bind_base_sendPointerEvent},
	{"base_sendKeyEvent", &luna_wrapper_osgText_Glyph::_bind_base_sendKeyEvent},
	{"base_setFrameLastRendered", &luna_wrapper_osgText_Glyph::_bind_base_setFrameLastRendered},
	{"__eq", &luna_wrapper_osgText_Glyph::_bind___eq},
	{"getTable", &luna_wrapper_osgText_Glyph::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Glyph >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Glyph::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Glyph >::enumValues[] = {
	{0,0}
};


