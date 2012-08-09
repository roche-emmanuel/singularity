#include <plug_common.h>

class luna_wrapper_osgText_TextBase {
public:
	typedef Luna< osgText::TextBase > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgText::TextBase* ptr= dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::TextBase >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFont_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFont_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,29036700) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFont_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStyle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStyle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrCreateStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFontResolution(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFontWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFontHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42086333) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setText_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setText_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getText_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCharacterSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCharacterSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCharacterHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCharacterAspectRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCharacterSizeMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCharacterSizeMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaximumWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaximumHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLineSpacing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLineSpacing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAxisAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAxisAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoRotateToScreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoRotateToScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLayout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLayout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBoundingBoxMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBoundingBoxMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBoundingBoxColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBoundingBoxColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKerningType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKerningType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLineCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resizeGLObjectBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool osgText::TextBase::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::TextBase::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::TextBase::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::TextBase::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::TextBase::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::TextBase::className() const function, expected prototype:\nconst char * osgText::TextBase::className() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::TextBase::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::TextBase::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::TextBase::libraryName() const function, expected prototype:\nconst char * osgText::TextBase::libraryName() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::TextBase::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::TextBase::setColor(const osg::Vec4f & color)
	static int _bind_setColor(lua_State *L) {
		if (!_lg_typecheck_setColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setColor(const osg::Vec4f & color) function, expected prototype:\nvoid osgText::TextBase::setColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgText::TextBase::setColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setColor(const osg::Vec4f &)");
		}
		self->setColor(color);

		return 0;
	}

	// const osg::Vec4f & osgText::TextBase::getColor() const
	static int _bind_getColor(lua_State *L) {
		if (!_lg_typecheck_getColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::TextBase::getColor() const function, expected prototype:\nconst osg::Vec4f & osgText::TextBase::getColor() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::TextBase::getColor() const");
		}
		const osg::Vec4f* lret = &self->getColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setFont(osgText::Font * font = 0)
	static int _bind_setFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFont_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setFont(osgText::Font * font = 0) function, expected prototype:\nvoid osgText::TextBase::setFont(osgText::Font * font = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osgText::Font* font=luatop>1 ? dynamic_cast< osgText::Font* >(Luna< osg::Referenced >::check(L,2)) : (osgText::Font*)0;

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setFont(osgText::Font *)");
		}
		self->setFont(font);

		return 0;
	}

	// void osgText::TextBase::setFont(osg::ref_ptr< osgText::Font > font)
	static int _bind_setFont_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFont_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setFont(osg::ref_ptr< osgText::Font > font) function, expected prototype:\nvoid osgText::TextBase::setFont(osg::ref_ptr< osgText::Font > font)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osgText::Font > font = dynamic_cast< osgText::Font* >(Luna< osg::Referenced >::check(L,2));

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setFont(osg::ref_ptr< osgText::Font >)");
		}
		self->setFont(font);

		return 0;
	}

	// void osgText::TextBase::setFont(const std::string & fontfile)
	static int _bind_setFont_overload_3(lua_State *L) {
		if (!_lg_typecheck_setFont_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setFont(const std::string & fontfile) function, expected prototype:\nvoid osgText::TextBase::setFont(const std::string & fontfile)\nClass arguments details:\n");
		}

		std::string fontfile(lua_tostring(L,2),lua_objlen(L,2));

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setFont(const std::string &)");
		}
		self->setFont(fontfile);

		return 0;
	}

	// Overload binder for osgText::TextBase::setFont
	static int _bind_setFont(lua_State *L) {
		if (_lg_typecheck_setFont_overload_1(L)) return _bind_setFont_overload_1(L);
		if (_lg_typecheck_setFont_overload_2(L)) return _bind_setFont_overload_2(L);
		if (_lg_typecheck_setFont_overload_3(L)) return _bind_setFont_overload_3(L);

		luaL_error(L, "error in function setFont, cannot match any of the overloads for function setFont:\n  setFont(osgText::Font *)\n  setFont(osg::ref_ptr< osgText::Font >)\n  setFont(const std::string &)\n");
		return 0;
	}

	// const osgText::Font * osgText::TextBase::getFont() const
	static int _bind_getFont(lua_State *L) {
		if (!_lg_typecheck_getFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Font * osgText::TextBase::getFont() const function, expected prototype:\nconst osgText::Font * osgText::TextBase::getFont() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Font * osgText::TextBase::getFont() const");
		}
		const osgText::Font * lret = self->getFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setStyle(osgText::Style * style)
	static int _bind_setStyle(lua_State *L) {
		if (!_lg_typecheck_setStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setStyle(osgText::Style * style) function, expected prototype:\nvoid osgText::TextBase::setStyle(osgText::Style * style)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgText::Style* style=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,2));

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setStyle(osgText::Style *)");
		}
		self->setStyle(style);

		return 0;
	}

	// osgText::Style * osgText::TextBase::getStyle()
	static int _bind_getStyle_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStyle_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Style * osgText::TextBase::getStyle() function, expected prototype:\nosgText::Style * osgText::TextBase::getStyle()\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Style * osgText::TextBase::getStyle()");
		}
		osgText::Style * lret = self->getStyle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Style >::push(L,lret,false);

		return 1;
	}

	// const osgText::Style * osgText::TextBase::getStyle() const
	static int _bind_getStyle_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStyle_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Style * osgText::TextBase::getStyle() const function, expected prototype:\nconst osgText::Style * osgText::TextBase::getStyle() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Style * osgText::TextBase::getStyle() const");
		}
		const osgText::Style * lret = self->getStyle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Style >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::TextBase::getStyle
	static int _bind_getStyle(lua_State *L) {
		if (_lg_typecheck_getStyle_overload_1(L)) return _bind_getStyle_overload_1(L);
		if (_lg_typecheck_getStyle_overload_2(L)) return _bind_getStyle_overload_2(L);

		luaL_error(L, "error in function getStyle, cannot match any of the overloads for function getStyle:\n  getStyle()\n  getStyle()\n");
		return 0;
	}

	// osgText::Style * osgText::TextBase::getOrCreateStyle()
	static int _bind_getOrCreateStyle(lua_State *L) {
		if (!_lg_typecheck_getOrCreateStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Style * osgText::TextBase::getOrCreateStyle() function, expected prototype:\nosgText::Style * osgText::TextBase::getOrCreateStyle()\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Style * osgText::TextBase::getOrCreateStyle()");
		}
		osgText::Style * lret = self->getOrCreateStyle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Style >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setFontResolution(unsigned int width, unsigned int height)
	static int _bind_setFontResolution(lua_State *L) {
		if (!_lg_typecheck_setFontResolution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setFontResolution(unsigned int width, unsigned int height) function, expected prototype:\nvoid osgText::TextBase::setFontResolution(unsigned int width, unsigned int height)\nClass arguments details:\n");
		}

		unsigned int width=(unsigned int)lua_tointeger(L,2);
		unsigned int height=(unsigned int)lua_tointeger(L,3);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setFontResolution(unsigned int, unsigned int)");
		}
		self->setFontResolution(width, height);

		return 0;
	}

	// unsigned int osgText::TextBase::getFontWidth() const
	static int _bind_getFontWidth(lua_State *L) {
		if (!_lg_typecheck_getFontWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::TextBase::getFontWidth() const function, expected prototype:\nunsigned int osgText::TextBase::getFontWidth() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::TextBase::getFontWidth() const");
		}
		unsigned int lret = self->getFontWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgText::TextBase::getFontHeight() const
	static int _bind_getFontHeight(lua_State *L) {
		if (!_lg_typecheck_getFontHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::TextBase::getFontHeight() const function, expected prototype:\nunsigned int osgText::TextBase::getFontHeight() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::TextBase::getFontHeight() const");
		}
		unsigned int lret = self->getFontHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setText(const osgText::String & text)
	static int _bind_setText_overload_1(lua_State *L) {
		if (!_lg_typecheck_setText_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setText(const osgText::String & text) function, expected prototype:\nvoid osgText::TextBase::setText(const osgText::String & text)\nClass arguments details:\narg 1 ID = 42086333\n");
		}

		const osgText::String* text_ptr=(Luna< osgText::String >::check(L,2));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::TextBase::setText function");
		}
		const osgText::String & text=*text_ptr;

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setText(const osgText::String &)");
		}
		self->setText(text);

		return 0;
	}

	// void osgText::TextBase::setText(const std::string & text)
	static int _bind_setText_overload_2(lua_State *L) {
		if (!_lg_typecheck_setText_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setText(const std::string & text) function, expected prototype:\nvoid osgText::TextBase::setText(const std::string & text)\nClass arguments details:\n");
		}

		std::string text(lua_tostring(L,2),lua_objlen(L,2));

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setText(const std::string &)");
		}
		self->setText(text);

		return 0;
	}

	// void osgText::TextBase::setText(const std::string & text, osgText::String::Encoding encoding)
	static int _bind_setText_overload_3(lua_State *L) {
		if (!_lg_typecheck_setText_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setText(const std::string & text, osgText::String::Encoding encoding) function, expected prototype:\nvoid osgText::TextBase::setText(const std::string & text, osgText::String::Encoding encoding)\nClass arguments details:\n");
		}

		std::string text(lua_tostring(L,2),lua_objlen(L,2));
		osgText::String::Encoding encoding=(osgText::String::Encoding)lua_tointeger(L,3);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setText(const std::string &, osgText::String::Encoding)");
		}
		self->setText(text, encoding);

		return 0;
	}

	// Overload binder for osgText::TextBase::setText
	static int _bind_setText(lua_State *L) {
		if (_lg_typecheck_setText_overload_1(L)) return _bind_setText_overload_1(L);
		if (_lg_typecheck_setText_overload_2(L)) return _bind_setText_overload_2(L);
		if (_lg_typecheck_setText_overload_3(L)) return _bind_setText_overload_3(L);

		luaL_error(L, "error in function setText, cannot match any of the overloads for function setText:\n  setText(const osgText::String &)\n  setText(const std::string &)\n  setText(const std::string &, osgText::String::Encoding)\n");
		return 0;
	}

	// osgText::String & osgText::TextBase::getText()
	static int _bind_getText_overload_1(lua_State *L) {
		if (!_lg_typecheck_getText_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::String & osgText::TextBase::getText() function, expected prototype:\nosgText::String & osgText::TextBase::getText()\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::String & osgText::TextBase::getText()");
		}
		const osgText::String* lret = &self->getText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::String >::push(L,lret,false);

		return 1;
	}

	// const osgText::String & osgText::TextBase::getText() const
	static int _bind_getText_overload_2(lua_State *L) {
		if (!_lg_typecheck_getText_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::String & osgText::TextBase::getText() const function, expected prototype:\nconst osgText::String & osgText::TextBase::getText() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::String & osgText::TextBase::getText() const");
		}
		const osgText::String* lret = &self->getText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::String >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::TextBase::getText
	static int _bind_getText(lua_State *L) {
		if (_lg_typecheck_getText_overload_1(L)) return _bind_getText_overload_1(L);
		if (_lg_typecheck_getText_overload_2(L)) return _bind_getText_overload_2(L);

		luaL_error(L, "error in function getText, cannot match any of the overloads for function getText:\n  getText()\n  getText()\n");
		return 0;
	}

	// void osgText::TextBase::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::update() function, expected prototype:\nvoid osgText::TextBase::update()\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::update()");
		}
		self->update();

		return 0;
	}

	// void osgText::TextBase::setCharacterSize(float height)
	static int _bind_setCharacterSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_setCharacterSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setCharacterSize(float height) function, expected prototype:\nvoid osgText::TextBase::setCharacterSize(float height)\nClass arguments details:\n");
		}

		float height=(float)lua_tonumber(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setCharacterSize(float)");
		}
		self->setCharacterSize(height);

		return 0;
	}

	// void osgText::TextBase::setCharacterSize(float height, float aspectRatio)
	static int _bind_setCharacterSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_setCharacterSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setCharacterSize(float height, float aspectRatio) function, expected prototype:\nvoid osgText::TextBase::setCharacterSize(float height, float aspectRatio)\nClass arguments details:\n");
		}

		float height=(float)lua_tonumber(L,2);
		float aspectRatio=(float)lua_tonumber(L,3);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setCharacterSize(float, float)");
		}
		self->setCharacterSize(height, aspectRatio);

		return 0;
	}

	// Overload binder for osgText::TextBase::setCharacterSize
	static int _bind_setCharacterSize(lua_State *L) {
		if (_lg_typecheck_setCharacterSize_overload_1(L)) return _bind_setCharacterSize_overload_1(L);
		if (_lg_typecheck_setCharacterSize_overload_2(L)) return _bind_setCharacterSize_overload_2(L);

		luaL_error(L, "error in function setCharacterSize, cannot match any of the overloads for function setCharacterSize:\n  setCharacterSize(float)\n  setCharacterSize(float, float)\n");
		return 0;
	}

	// float osgText::TextBase::getCharacterHeight() const
	static int _bind_getCharacterHeight(lua_State *L) {
		if (!_lg_typecheck_getCharacterHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getCharacterHeight() const function, expected prototype:\nfloat osgText::TextBase::getCharacterHeight() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getCharacterHeight() const");
		}
		float lret = self->getCharacterHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgText::TextBase::getCharacterAspectRatio() const
	static int _bind_getCharacterAspectRatio(lua_State *L) {
		if (!_lg_typecheck_getCharacterAspectRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getCharacterAspectRatio() const function, expected prototype:\nfloat osgText::TextBase::getCharacterAspectRatio() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getCharacterAspectRatio() const");
		}
		float lret = self->getCharacterAspectRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setCharacterSizeMode(osgText::TextBase::CharacterSizeMode mode)
	static int _bind_setCharacterSizeMode(lua_State *L) {
		if (!_lg_typecheck_setCharacterSizeMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setCharacterSizeMode(osgText::TextBase::CharacterSizeMode mode) function, expected prototype:\nvoid osgText::TextBase::setCharacterSizeMode(osgText::TextBase::CharacterSizeMode mode)\nClass arguments details:\n");
		}

		osgText::TextBase::CharacterSizeMode mode=(osgText::TextBase::CharacterSizeMode)lua_tointeger(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setCharacterSizeMode(osgText::TextBase::CharacterSizeMode)");
		}
		self->setCharacterSizeMode(mode);

		return 0;
	}

	// osgText::TextBase::CharacterSizeMode osgText::TextBase::getCharacterSizeMode() const
	static int _bind_getCharacterSizeMode(lua_State *L) {
		if (!_lg_typecheck_getCharacterSizeMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::TextBase::CharacterSizeMode osgText::TextBase::getCharacterSizeMode() const function, expected prototype:\nosgText::TextBase::CharacterSizeMode osgText::TextBase::getCharacterSizeMode() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::TextBase::CharacterSizeMode osgText::TextBase::getCharacterSizeMode() const");
		}
		osgText::TextBase::CharacterSizeMode lret = self->getCharacterSizeMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setMaximumWidth(float maximumWidth)
	static int _bind_setMaximumWidth(lua_State *L) {
		if (!_lg_typecheck_setMaximumWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setMaximumWidth(float maximumWidth) function, expected prototype:\nvoid osgText::TextBase::setMaximumWidth(float maximumWidth)\nClass arguments details:\n");
		}

		float maximumWidth=(float)lua_tonumber(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setMaximumWidth(float)");
		}
		self->setMaximumWidth(maximumWidth);

		return 0;
	}

	// float osgText::TextBase::getMaximumWidth() const
	static int _bind_getMaximumWidth(lua_State *L) {
		if (!_lg_typecheck_getMaximumWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getMaximumWidth() const function, expected prototype:\nfloat osgText::TextBase::getMaximumWidth() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getMaximumWidth() const");
		}
		float lret = self->getMaximumWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setMaximumHeight(float maximumHeight)
	static int _bind_setMaximumHeight(lua_State *L) {
		if (!_lg_typecheck_setMaximumHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setMaximumHeight(float maximumHeight) function, expected prototype:\nvoid osgText::TextBase::setMaximumHeight(float maximumHeight)\nClass arguments details:\n");
		}

		float maximumHeight=(float)lua_tonumber(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setMaximumHeight(float)");
		}
		self->setMaximumHeight(maximumHeight);

		return 0;
	}

	// float osgText::TextBase::getMaximumHeight() const
	static int _bind_getMaximumHeight(lua_State *L) {
		if (!_lg_typecheck_getMaximumHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getMaximumHeight() const function, expected prototype:\nfloat osgText::TextBase::getMaximumHeight() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getMaximumHeight() const");
		}
		float lret = self->getMaximumHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setLineSpacing(float lineSpacing)
	static int _bind_setLineSpacing(lua_State *L) {
		if (!_lg_typecheck_setLineSpacing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setLineSpacing(float lineSpacing) function, expected prototype:\nvoid osgText::TextBase::setLineSpacing(float lineSpacing)\nClass arguments details:\n");
		}

		float lineSpacing=(float)lua_tonumber(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setLineSpacing(float)");
		}
		self->setLineSpacing(lineSpacing);

		return 0;
	}

	// float osgText::TextBase::getLineSpacing() const
	static int _bind_getLineSpacing(lua_State *L) {
		if (!_lg_typecheck_getLineSpacing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getLineSpacing() const function, expected prototype:\nfloat osgText::TextBase::getLineSpacing() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getLineSpacing() const");
		}
		float lret = self->getLineSpacing();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setPosition(const osg::Vec3f & pos)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setPosition(const osg::Vec3f & pos) function, expected prototype:\nvoid osgText::TextBase::setPosition(const osg::Vec3f & pos)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgText::TextBase::setPosition function");
		}
		const osg::Vec3f & pos=*pos_ptr;

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setPosition(const osg::Vec3f &)");
		}
		self->setPosition(pos);

		return 0;
	}

	// const osg::Vec3f & osgText::TextBase::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgText::TextBase::getPosition() const function, expected prototype:\nconst osg::Vec3f & osgText::TextBase::getPosition() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgText::TextBase::getPosition() const");
		}
		const osg::Vec3f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setAlignment(osgText::TextBase::AlignmentType alignment)
	static int _bind_setAlignment(lua_State *L) {
		if (!_lg_typecheck_setAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setAlignment(osgText::TextBase::AlignmentType alignment) function, expected prototype:\nvoid osgText::TextBase::setAlignment(osgText::TextBase::AlignmentType alignment)\nClass arguments details:\n");
		}

		osgText::TextBase::AlignmentType alignment=(osgText::TextBase::AlignmentType)lua_tointeger(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setAlignment(osgText::TextBase::AlignmentType)");
		}
		self->setAlignment(alignment);

		return 0;
	}

	// osgText::TextBase::AlignmentType osgText::TextBase::getAlignment() const
	static int _bind_getAlignment(lua_State *L) {
		if (!_lg_typecheck_getAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::TextBase::AlignmentType osgText::TextBase::getAlignment() const function, expected prototype:\nosgText::TextBase::AlignmentType osgText::TextBase::getAlignment() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::TextBase::AlignmentType osgText::TextBase::getAlignment() const");
		}
		osgText::TextBase::AlignmentType lret = self->getAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setAxisAlignment(osgText::TextBase::AxisAlignment axis)
	static int _bind_setAxisAlignment(lua_State *L) {
		if (!_lg_typecheck_setAxisAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setAxisAlignment(osgText::TextBase::AxisAlignment axis) function, expected prototype:\nvoid osgText::TextBase::setAxisAlignment(osgText::TextBase::AxisAlignment axis)\nClass arguments details:\n");
		}

		osgText::TextBase::AxisAlignment axis=(osgText::TextBase::AxisAlignment)lua_tointeger(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setAxisAlignment(osgText::TextBase::AxisAlignment)");
		}
		self->setAxisAlignment(axis);

		return 0;
	}

	// osgText::TextBase::AxisAlignment osgText::TextBase::getAxisAlignment() const
	static int _bind_getAxisAlignment(lua_State *L) {
		if (!_lg_typecheck_getAxisAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::TextBase::AxisAlignment osgText::TextBase::getAxisAlignment() const function, expected prototype:\nosgText::TextBase::AxisAlignment osgText::TextBase::getAxisAlignment() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::TextBase::AxisAlignment osgText::TextBase::getAxisAlignment() const");
		}
		osgText::TextBase::AxisAlignment lret = self->getAxisAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setRotation(const osg::Quat & quat)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setRotation(const osg::Quat & quat) function, expected prototype:\nvoid osgText::TextBase::setRotation(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n");
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osgText::TextBase::setRotation function");
		}
		const osg::Quat & quat=*quat_ptr;

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setRotation(const osg::Quat &)");
		}
		self->setRotation(quat);

		return 0;
	}

	// const osg::Quat & osgText::TextBase::getRotation() const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Quat & osgText::TextBase::getRotation() const function, expected prototype:\nconst osg::Quat & osgText::TextBase::getRotation() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Quat & osgText::TextBase::getRotation() const");
		}
		const osg::Quat* lret = &self->getRotation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setAutoRotateToScreen(bool autoRotateToScreen)
	static int _bind_setAutoRotateToScreen(lua_State *L) {
		if (!_lg_typecheck_setAutoRotateToScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setAutoRotateToScreen(bool autoRotateToScreen) function, expected prototype:\nvoid osgText::TextBase::setAutoRotateToScreen(bool autoRotateToScreen)\nClass arguments details:\n");
		}

		bool autoRotateToScreen=(bool)(lua_toboolean(L,2)==1);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setAutoRotateToScreen(bool)");
		}
		self->setAutoRotateToScreen(autoRotateToScreen);

		return 0;
	}

	// bool osgText::TextBase::getAutoRotateToScreen() const
	static int _bind_getAutoRotateToScreen(lua_State *L) {
		if (!_lg_typecheck_getAutoRotateToScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::TextBase::getAutoRotateToScreen() const function, expected prototype:\nbool osgText::TextBase::getAutoRotateToScreen() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::TextBase::getAutoRotateToScreen() const");
		}
		bool lret = self->getAutoRotateToScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::TextBase::setLayout(osgText::TextBase::Layout layout)
	static int _bind_setLayout(lua_State *L) {
		if (!_lg_typecheck_setLayout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setLayout(osgText::TextBase::Layout layout) function, expected prototype:\nvoid osgText::TextBase::setLayout(osgText::TextBase::Layout layout)\nClass arguments details:\n");
		}

		osgText::TextBase::Layout layout=(osgText::TextBase::Layout)lua_tointeger(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setLayout(osgText::TextBase::Layout)");
		}
		self->setLayout(layout);

		return 0;
	}

	// osgText::TextBase::Layout osgText::TextBase::getLayout() const
	static int _bind_getLayout(lua_State *L) {
		if (!_lg_typecheck_getLayout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::TextBase::Layout osgText::TextBase::getLayout() const function, expected prototype:\nosgText::TextBase::Layout osgText::TextBase::getLayout() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::TextBase::Layout osgText::TextBase::getLayout() const");
		}
		osgText::TextBase::Layout lret = self->getLayout();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setDrawMode(unsigned int mode)
	static int _bind_setDrawMode(lua_State *L) {
		if (!_lg_typecheck_setDrawMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setDrawMode(unsigned int mode) function, expected prototype:\nvoid osgText::TextBase::setDrawMode(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setDrawMode(unsigned int)");
		}
		self->setDrawMode(mode);

		return 0;
	}

	// unsigned int osgText::TextBase::getDrawMode() const
	static int _bind_getDrawMode(lua_State *L) {
		if (!_lg_typecheck_getDrawMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::TextBase::getDrawMode() const function, expected prototype:\nunsigned int osgText::TextBase::getDrawMode() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::TextBase::getDrawMode() const");
		}
		unsigned int lret = self->getDrawMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setBoundingBoxMargin(float margin)
	static int _bind_setBoundingBoxMargin(lua_State *L) {
		if (!_lg_typecheck_setBoundingBoxMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setBoundingBoxMargin(float margin) function, expected prototype:\nvoid osgText::TextBase::setBoundingBoxMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setBoundingBoxMargin(float)");
		}
		self->setBoundingBoxMargin(margin);

		return 0;
	}

	// float osgText::TextBase::getBoundingBoxMargin() const
	static int _bind_getBoundingBoxMargin(lua_State *L) {
		if (!_lg_typecheck_getBoundingBoxMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getBoundingBoxMargin() const function, expected prototype:\nfloat osgText::TextBase::getBoundingBoxMargin() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getBoundingBoxMargin() const");
		}
		float lret = self->getBoundingBoxMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setBoundingBoxColor(const osg::Vec4f & color)
	static int _bind_setBoundingBoxColor(lua_State *L) {
		if (!_lg_typecheck_setBoundingBoxColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setBoundingBoxColor(const osg::Vec4f & color) function, expected prototype:\nvoid osgText::TextBase::setBoundingBoxColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgText::TextBase::setBoundingBoxColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setBoundingBoxColor(const osg::Vec4f &)");
		}
		self->setBoundingBoxColor(color);

		return 0;
	}

	// const osg::Vec4f & osgText::TextBase::getBoundingBoxColor() const
	static int _bind_getBoundingBoxColor(lua_State *L) {
		if (!_lg_typecheck_getBoundingBoxColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::TextBase::getBoundingBoxColor() const function, expected prototype:\nconst osg::Vec4f & osgText::TextBase::getBoundingBoxColor() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::TextBase::getBoundingBoxColor() const");
		}
		const osg::Vec4f* lret = &self->getBoundingBoxColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setKerningType(osgText::KerningType kerningType)
	static int _bind_setKerningType(lua_State *L) {
		if (!_lg_typecheck_setKerningType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setKerningType(osgText::KerningType kerningType) function, expected prototype:\nvoid osgText::TextBase::setKerningType(osgText::KerningType kerningType)\nClass arguments details:\n");
		}

		osgText::KerningType kerningType=(osgText::KerningType)lua_tointeger(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setKerningType(osgText::KerningType)");
		}
		self->setKerningType(kerningType);

		return 0;
	}

	// osgText::KerningType osgText::TextBase::getKerningType() const
	static int _bind_getKerningType(lua_State *L) {
		if (!_lg_typecheck_getKerningType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::KerningType osgText::TextBase::getKerningType() const function, expected prototype:\nosgText::KerningType osgText::TextBase::getKerningType() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::KerningType osgText::TextBase::getKerningType() const");
		}
		osgText::KerningType lret = self->getKerningType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgText::TextBase::getLineCount() const
	static int _bind_getLineCount(lua_State *L) {
		if (!_lg_typecheck_getLineCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::TextBase::getLineCount() const function, expected prototype:\nunsigned int osgText::TextBase::getLineCount() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::TextBase::getLineCount() const");
		}
		unsigned int lret = self->getLineCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::resizeGLObjectBuffers(unsigned int maxSize)
	static int _bind_resizeGLObjectBuffers(lua_State *L) {
		if (!_lg_typecheck_resizeGLObjectBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::resizeGLObjectBuffers(unsigned int maxSize) function, expected prototype:\nvoid osgText::TextBase::resizeGLObjectBuffers(unsigned int maxSize)\nClass arguments details:\n");
		}

		unsigned int maxSize=(unsigned int)lua_tointeger(L,2);

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::resizeGLObjectBuffers(unsigned int)");
		}
		self->resizeGLObjectBuffers(maxSize);

		return 0;
	}

	// void osgText::TextBase::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::TextBase::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// osg::BoundingBoxf osgText::TextBase::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxf osgText::TextBase::computeBound() const function, expected prototype:\nosg::BoundingBoxf osgText::TextBase::computeBound() const\nClass arguments details:\n");
		}


		osgText::TextBase* self=dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingBoxf osgText::TextBase::computeBound() const");
		}
		osg::BoundingBoxf stack_lret = self->computeBound();
		osg::BoundingBoxf* lret = new osg::BoundingBoxf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxf >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgText::TextBase* LunaTraits< osgText::TextBase >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgText::TextBase::computePositions(unsigned int contextID) const
	// void osgText::TextBase::computeGlyphRepresentation()
	// void osg::Drawable::drawImplementation(osg::RenderInfo & renderInfo) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osgText::TextBase >::_bind_dtor(osgText::TextBase* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::TextBase >::className[] = "TextBase";
const char LunaTraits< osgText::TextBase >::fullName[] = "osgText::TextBase";
const char LunaTraits< osgText::TextBase >::moduleName[] = "osgText";
const char* LunaTraits< osgText::TextBase >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< osgText::TextBase >::hash = 25636853;
const int LunaTraits< osgText::TextBase >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::TextBase >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osgText_TextBase::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgText_TextBase::_bind_className},
	{"libraryName", &luna_wrapper_osgText_TextBase::_bind_libraryName},
	{"setColor", &luna_wrapper_osgText_TextBase::_bind_setColor},
	{"getColor", &luna_wrapper_osgText_TextBase::_bind_getColor},
	{"setFont", &luna_wrapper_osgText_TextBase::_bind_setFont},
	{"getFont", &luna_wrapper_osgText_TextBase::_bind_getFont},
	{"setStyle", &luna_wrapper_osgText_TextBase::_bind_setStyle},
	{"getStyle", &luna_wrapper_osgText_TextBase::_bind_getStyle},
	{"getOrCreateStyle", &luna_wrapper_osgText_TextBase::_bind_getOrCreateStyle},
	{"setFontResolution", &luna_wrapper_osgText_TextBase::_bind_setFontResolution},
	{"getFontWidth", &luna_wrapper_osgText_TextBase::_bind_getFontWidth},
	{"getFontHeight", &luna_wrapper_osgText_TextBase::_bind_getFontHeight},
	{"setText", &luna_wrapper_osgText_TextBase::_bind_setText},
	{"getText", &luna_wrapper_osgText_TextBase::_bind_getText},
	{"update", &luna_wrapper_osgText_TextBase::_bind_update},
	{"setCharacterSize", &luna_wrapper_osgText_TextBase::_bind_setCharacterSize},
	{"getCharacterHeight", &luna_wrapper_osgText_TextBase::_bind_getCharacterHeight},
	{"getCharacterAspectRatio", &luna_wrapper_osgText_TextBase::_bind_getCharacterAspectRatio},
	{"setCharacterSizeMode", &luna_wrapper_osgText_TextBase::_bind_setCharacterSizeMode},
	{"getCharacterSizeMode", &luna_wrapper_osgText_TextBase::_bind_getCharacterSizeMode},
	{"setMaximumWidth", &luna_wrapper_osgText_TextBase::_bind_setMaximumWidth},
	{"getMaximumWidth", &luna_wrapper_osgText_TextBase::_bind_getMaximumWidth},
	{"setMaximumHeight", &luna_wrapper_osgText_TextBase::_bind_setMaximumHeight},
	{"getMaximumHeight", &luna_wrapper_osgText_TextBase::_bind_getMaximumHeight},
	{"setLineSpacing", &luna_wrapper_osgText_TextBase::_bind_setLineSpacing},
	{"getLineSpacing", &luna_wrapper_osgText_TextBase::_bind_getLineSpacing},
	{"setPosition", &luna_wrapper_osgText_TextBase::_bind_setPosition},
	{"getPosition", &luna_wrapper_osgText_TextBase::_bind_getPosition},
	{"setAlignment", &luna_wrapper_osgText_TextBase::_bind_setAlignment},
	{"getAlignment", &luna_wrapper_osgText_TextBase::_bind_getAlignment},
	{"setAxisAlignment", &luna_wrapper_osgText_TextBase::_bind_setAxisAlignment},
	{"getAxisAlignment", &luna_wrapper_osgText_TextBase::_bind_getAxisAlignment},
	{"setRotation", &luna_wrapper_osgText_TextBase::_bind_setRotation},
	{"getRotation", &luna_wrapper_osgText_TextBase::_bind_getRotation},
	{"setAutoRotateToScreen", &luna_wrapper_osgText_TextBase::_bind_setAutoRotateToScreen},
	{"getAutoRotateToScreen", &luna_wrapper_osgText_TextBase::_bind_getAutoRotateToScreen},
	{"setLayout", &luna_wrapper_osgText_TextBase::_bind_setLayout},
	{"getLayout", &luna_wrapper_osgText_TextBase::_bind_getLayout},
	{"setDrawMode", &luna_wrapper_osgText_TextBase::_bind_setDrawMode},
	{"getDrawMode", &luna_wrapper_osgText_TextBase::_bind_getDrawMode},
	{"setBoundingBoxMargin", &luna_wrapper_osgText_TextBase::_bind_setBoundingBoxMargin},
	{"getBoundingBoxMargin", &luna_wrapper_osgText_TextBase::_bind_getBoundingBoxMargin},
	{"setBoundingBoxColor", &luna_wrapper_osgText_TextBase::_bind_setBoundingBoxColor},
	{"getBoundingBoxColor", &luna_wrapper_osgText_TextBase::_bind_getBoundingBoxColor},
	{"setKerningType", &luna_wrapper_osgText_TextBase::_bind_setKerningType},
	{"getKerningType", &luna_wrapper_osgText_TextBase::_bind_getKerningType},
	{"getLineCount", &luna_wrapper_osgText_TextBase::_bind_getLineCount},
	{"resizeGLObjectBuffers", &luna_wrapper_osgText_TextBase::_bind_resizeGLObjectBuffers},
	{"releaseGLObjects", &luna_wrapper_osgText_TextBase::_bind_releaseGLObjects},
	{"computeBound", &luna_wrapper_osgText_TextBase::_bind_computeBound},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::TextBase >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_TextBase::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::TextBase >::enumValues[] = {
	{"OBJECT_COORDS", osgText::TextBase::OBJECT_COORDS},
	{"SCREEN_COORDS", osgText::TextBase::SCREEN_COORDS},
	{"OBJECT_COORDS_WITH_MAXIMUM_SCREEN_SIZE_CAPPED_BY_FONT_HEIGHT", osgText::TextBase::OBJECT_COORDS_WITH_MAXIMUM_SCREEN_SIZE_CAPPED_BY_FONT_HEIGHT},
	{"LEFT_TOP", osgText::TextBase::LEFT_TOP},
	{"LEFT_CENTER", osgText::TextBase::LEFT_CENTER},
	{"LEFT_BOTTOM", osgText::TextBase::LEFT_BOTTOM},
	{"CENTER_TOP", osgText::TextBase::CENTER_TOP},
	{"CENTER_CENTER", osgText::TextBase::CENTER_CENTER},
	{"CENTER_BOTTOM", osgText::TextBase::CENTER_BOTTOM},
	{"RIGHT_TOP", osgText::TextBase::RIGHT_TOP},
	{"RIGHT_CENTER", osgText::TextBase::RIGHT_CENTER},
	{"RIGHT_BOTTOM", osgText::TextBase::RIGHT_BOTTOM},
	{"LEFT_BASE_LINE", osgText::TextBase::LEFT_BASE_LINE},
	{"CENTER_BASE_LINE", osgText::TextBase::CENTER_BASE_LINE},
	{"RIGHT_BASE_LINE", osgText::TextBase::RIGHT_BASE_LINE},
	{"LEFT_BOTTOM_BASE_LINE", osgText::TextBase::LEFT_BOTTOM_BASE_LINE},
	{"CENTER_BOTTOM_BASE_LINE", osgText::TextBase::CENTER_BOTTOM_BASE_LINE},
	{"RIGHT_BOTTOM_BASE_LINE", osgText::TextBase::RIGHT_BOTTOM_BASE_LINE},
	{"BASE_LINE", osgText::TextBase::BASE_LINE},
	{"XY_PLANE", osgText::TextBase::XY_PLANE},
	{"REVERSED_XY_PLANE", osgText::TextBase::REVERSED_XY_PLANE},
	{"XZ_PLANE", osgText::TextBase::XZ_PLANE},
	{"REVERSED_XZ_PLANE", osgText::TextBase::REVERSED_XZ_PLANE},
	{"YZ_PLANE", osgText::TextBase::YZ_PLANE},
	{"REVERSED_YZ_PLANE", osgText::TextBase::REVERSED_YZ_PLANE},
	{"SCREEN", osgText::TextBase::SCREEN},
	{"USER_DEFINED_ROTATION", osgText::TextBase::USER_DEFINED_ROTATION},
	{"LEFT_TO_RIGHT", osgText::TextBase::LEFT_TO_RIGHT},
	{"RIGHT_TO_LEFT", osgText::TextBase::RIGHT_TO_LEFT},
	{"VERTICAL", osgText::TextBase::VERTICAL},
	{"TEXT", osgText::TextBase::TEXT},
	{"BOUNDINGBOX", osgText::TextBase::BOUNDINGBOX},
	{"FILLEDBOUNDINGBOX", osgText::TextBase::FILLEDBOUNDINGBOX},
	{"ALIGNMENT", osgText::TextBase::ALIGNMENT},
	{0,0}
};

