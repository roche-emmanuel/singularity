#include <plug_common.h>

class luna_wrapper_osgText_Text {
public:
	typedef Luna< osgText::Text > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgText::Text* ptr= dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Text >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck_setEnableDepthWrites(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnableDepthWrites(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackdropType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBackdropType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackdropOffset_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBackdropOffset_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBackdropHorizontalOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBackdropVerticalOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackdropColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBackdropColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackdropImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBackdropImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColorGradientMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorGradientMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColorGradientCorners(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorGradientTopLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorGradientBottomLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorGradientBottomRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorGradientTopRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlyphQuads(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureGlyphQuadMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::Text::Text()
	static osgText::Text* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::Text() function, expected prototype:\nosgText::Text::Text()\nClass arguments details:\n");
		}


		return new osgText::Text();
	}

	// osgText::Text::Text(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Text* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::Text(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Text::Text(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgText::Text* text_ptr=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::Text::Text function");
		}
		const osgText::Text & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Text::Text function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgText::Text(text, copyop);
	}

	// Overload binder for osgText::Text::Text
	static osgText::Text* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Text, cannot match any of the overloads for function Text:\n  Text()\n  Text(const osgText::Text &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgText::Text::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text::cloneType() const function, expected prototype:\nosg::Object * osgText::Text::cloneType() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Text::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgText::Text::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Text::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Text::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Text::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Text::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Text::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Text::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Text::className() const function, expected prototype:\nconst char * osgText::Text::className() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Text::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Text::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Text::libraryName() const function, expected prototype:\nconst char * osgText::Text::libraryName() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Text::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::Text::setFont(osgText::Font * font = 0)
	static int _bind_setFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFont_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::setFont(osgText::Font * font = 0) function, expected prototype:\nvoid osgText::Text::setFont(osgText::Font * font = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osgText::Font* font=luatop>1 ? dynamic_cast< osgText::Font* >(Luna< osg::Referenced >::check(L,2)) : (osgText::Font*)0;

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::setFont(osgText::Font *)");
		}
		self->setFont(font);

		return 0;
	}

	// void osgText::Text::setFont(osg::ref_ptr< osgText::Font > font)
	static int _bind_setFont_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFont_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::setFont(osg::ref_ptr< osgText::Font > font) function, expected prototype:\nvoid osgText::Text::setFont(osg::ref_ptr< osgText::Font > font)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osgText::Font > font = dynamic_cast< osgText::Font* >(Luna< osg::Referenced >::check(L,2));

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::setFont(osg::ref_ptr< osgText::Font >)");
		}
		self->setFont(font);

		return 0;
	}

	// void osgText::Text::setFont(const std::string & fontfile)
	static int _bind_setFont_overload_3(lua_State *L) {
		if (!_lg_typecheck_setFont_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::setFont(const std::string & fontfile) function, expected prototype:\nvoid osgText::Text::setFont(const std::string & fontfile)\nClass arguments details:\n");
		}

		std::string fontfile(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::setFont(const std::string &)");
		}
		self->setFont(fontfile);

		return 0;
	}

	// Overload binder for osgText::Text::setFont
	static int _bind_setFont(lua_State *L) {
		if (_lg_typecheck_setFont_overload_1(L)) return _bind_setFont_overload_1(L);
		if (_lg_typecheck_setFont_overload_2(L)) return _bind_setFont_overload_2(L);
		if (_lg_typecheck_setFont_overload_3(L)) return _bind_setFont_overload_3(L);

		luaL_error(L, "error in function setFont, cannot match any of the overloads for function setFont:\n  setFont(osgText::Font *)\n  setFont(osg::ref_ptr< osgText::Font >)\n  setFont(const std::string &)\n");
		return 0;
	}

	// void osgText::Text::setEnableDepthWrites(bool enable)
	static int _bind_setEnableDepthWrites(lua_State *L) {
		if (!_lg_typecheck_setEnableDepthWrites(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::setEnableDepthWrites(bool enable) function, expected prototype:\nvoid osgText::Text::setEnableDepthWrites(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::setEnableDepthWrites(bool)");
		}
		self->setEnableDepthWrites(enable);

		return 0;
	}

	// bool osgText::Text::getEnableDepthWrites() const
	static int _bind_getEnableDepthWrites(lua_State *L) {
		if (!_lg_typecheck_getEnableDepthWrites(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Text::getEnableDepthWrites() const function, expected prototype:\nbool osgText::Text::getEnableDepthWrites() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Text::getEnableDepthWrites() const");
		}
		bool lret = self->getEnableDepthWrites();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::Text::setBackdropType(osgText::Text::BackdropType type)
	static int _bind_setBackdropType(lua_State *L) {
		if (!_lg_typecheck_setBackdropType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::setBackdropType(osgText::Text::BackdropType type) function, expected prototype:\nvoid osgText::Text::setBackdropType(osgText::Text::BackdropType type)\nClass arguments details:\n");
		}

		osgText::Text::BackdropType type=(osgText::Text::BackdropType)lua_tointeger(L,2);

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::setBackdropType(osgText::Text::BackdropType)");
		}
		self->setBackdropType(type);

		return 0;
	}

	// osgText::Text::BackdropType osgText::Text::getBackdropType() const
	static int _bind_getBackdropType(lua_State *L) {
		if (!_lg_typecheck_getBackdropType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::BackdropType osgText::Text::getBackdropType() const function, expected prototype:\nosgText::Text::BackdropType osgText::Text::getBackdropType() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::BackdropType osgText::Text::getBackdropType() const");
		}
		osgText::Text::BackdropType lret = self->getBackdropType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text::setBackdropOffset(float offset = 0.07f)
	static int _bind_setBackdropOffset_overload_1(lua_State *L) {
		if (!_lg_typecheck_setBackdropOffset_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::setBackdropOffset(float offset = 0.07f) function, expected prototype:\nvoid osgText::Text::setBackdropOffset(float offset = 0.07f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float offset=luatop>1 ? (float)lua_tonumber(L,2) : 0.07f;

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::setBackdropOffset(float)");
		}
		self->setBackdropOffset(offset);

		return 0;
	}

	// void osgText::Text::setBackdropOffset(float horizontal, float vertical)
	static int _bind_setBackdropOffset_overload_2(lua_State *L) {
		if (!_lg_typecheck_setBackdropOffset_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::setBackdropOffset(float horizontal, float vertical) function, expected prototype:\nvoid osgText::Text::setBackdropOffset(float horizontal, float vertical)\nClass arguments details:\n");
		}

		float horizontal=(float)lua_tonumber(L,2);
		float vertical=(float)lua_tonumber(L,3);

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::setBackdropOffset(float, float)");
		}
		self->setBackdropOffset(horizontal, vertical);

		return 0;
	}

	// Overload binder for osgText::Text::setBackdropOffset
	static int _bind_setBackdropOffset(lua_State *L) {
		if (_lg_typecheck_setBackdropOffset_overload_1(L)) return _bind_setBackdropOffset_overload_1(L);
		if (_lg_typecheck_setBackdropOffset_overload_2(L)) return _bind_setBackdropOffset_overload_2(L);

		luaL_error(L, "error in function setBackdropOffset, cannot match any of the overloads for function setBackdropOffset:\n  setBackdropOffset(float)\n  setBackdropOffset(float, float)\n");
		return 0;
	}

	// float osgText::Text::getBackdropHorizontalOffset() const
	static int _bind_getBackdropHorizontalOffset(lua_State *L) {
		if (!_lg_typecheck_getBackdropHorizontalOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Text::getBackdropHorizontalOffset() const function, expected prototype:\nfloat osgText::Text::getBackdropHorizontalOffset() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Text::getBackdropHorizontalOffset() const");
		}
		float lret = self->getBackdropHorizontalOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgText::Text::getBackdropVerticalOffset() const
	static int _bind_getBackdropVerticalOffset(lua_State *L) {
		if (!_lg_typecheck_getBackdropVerticalOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Text::getBackdropVerticalOffset() const function, expected prototype:\nfloat osgText::Text::getBackdropVerticalOffset() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Text::getBackdropVerticalOffset() const");
		}
		float lret = self->getBackdropVerticalOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text::setBackdropColor(const osg::Vec4f & color)
	static int _bind_setBackdropColor(lua_State *L) {
		if (!_lg_typecheck_setBackdropColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::setBackdropColor(const osg::Vec4f & color) function, expected prototype:\nvoid osgText::Text::setBackdropColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgText::Text::setBackdropColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::setBackdropColor(const osg::Vec4f &)");
		}
		self->setBackdropColor(color);

		return 0;
	}

	// const osg::Vec4f & osgText::Text::getBackdropColor() const
	static int _bind_getBackdropColor(lua_State *L) {
		if (!_lg_typecheck_getBackdropColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::Text::getBackdropColor() const function, expected prototype:\nconst osg::Vec4f & osgText::Text::getBackdropColor() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::Text::getBackdropColor() const");
		}
		const osg::Vec4f* lret = &self->getBackdropColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgText::Text::setBackdropImplementation(osgText::Text::BackdropImplementation implementation)
	static int _bind_setBackdropImplementation(lua_State *L) {
		if (!_lg_typecheck_setBackdropImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::setBackdropImplementation(osgText::Text::BackdropImplementation implementation) function, expected prototype:\nvoid osgText::Text::setBackdropImplementation(osgText::Text::BackdropImplementation implementation)\nClass arguments details:\n");
		}

		osgText::Text::BackdropImplementation implementation=(osgText::Text::BackdropImplementation)lua_tointeger(L,2);

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::setBackdropImplementation(osgText::Text::BackdropImplementation)");
		}
		self->setBackdropImplementation(implementation);

		return 0;
	}

	// osgText::Text::BackdropImplementation osgText::Text::getBackdropImplementation() const
	static int _bind_getBackdropImplementation(lua_State *L) {
		if (!_lg_typecheck_getBackdropImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::BackdropImplementation osgText::Text::getBackdropImplementation() const function, expected prototype:\nosgText::Text::BackdropImplementation osgText::Text::getBackdropImplementation() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::BackdropImplementation osgText::Text::getBackdropImplementation() const");
		}
		osgText::Text::BackdropImplementation lret = self->getBackdropImplementation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text::setColorGradientMode(osgText::Text::ColorGradientMode mode)
	static int _bind_setColorGradientMode(lua_State *L) {
		if (!_lg_typecheck_setColorGradientMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::setColorGradientMode(osgText::Text::ColorGradientMode mode) function, expected prototype:\nvoid osgText::Text::setColorGradientMode(osgText::Text::ColorGradientMode mode)\nClass arguments details:\n");
		}

		osgText::Text::ColorGradientMode mode=(osgText::Text::ColorGradientMode)lua_tointeger(L,2);

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::setColorGradientMode(osgText::Text::ColorGradientMode)");
		}
		self->setColorGradientMode(mode);

		return 0;
	}

	// osgText::Text::ColorGradientMode osgText::Text::getColorGradientMode() const
	static int _bind_getColorGradientMode(lua_State *L) {
		if (!_lg_typecheck_getColorGradientMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::ColorGradientMode osgText::Text::getColorGradientMode() const function, expected prototype:\nosgText::Text::ColorGradientMode osgText::Text::getColorGradientMode() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::ColorGradientMode osgText::Text::getColorGradientMode() const");
		}
		osgText::Text::ColorGradientMode lret = self->getColorGradientMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text::setColorGradientCorners(const osg::Vec4f & topLeft, const osg::Vec4f & bottomLeft, const osg::Vec4f & bottomRight, const osg::Vec4f & topRight)
	static int _bind_setColorGradientCorners(lua_State *L) {
		if (!_lg_typecheck_setColorGradientCorners(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::setColorGradientCorners(const osg::Vec4f & topLeft, const osg::Vec4f & bottomLeft, const osg::Vec4f & bottomRight, const osg::Vec4f & topRight) function, expected prototype:\nvoid osgText::Text::setColorGradientCorners(const osg::Vec4f & topLeft, const osg::Vec4f & bottomLeft, const osg::Vec4f & bottomRight, const osg::Vec4f & topRight)\nClass arguments details:\narg 1 ID = 92303235\narg 2 ID = 92303235\narg 3 ID = 92303235\narg 4 ID = 92303235\n");
		}

		const osg::Vec4f* topLeft_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !topLeft_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg topLeft in osgText::Text::setColorGradientCorners function");
		}
		const osg::Vec4f & topLeft=*topLeft_ptr;
		const osg::Vec4f* bottomLeft_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !bottomLeft_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bottomLeft in osgText::Text::setColorGradientCorners function");
		}
		const osg::Vec4f & bottomLeft=*bottomLeft_ptr;
		const osg::Vec4f* bottomRight_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !bottomRight_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bottomRight in osgText::Text::setColorGradientCorners function");
		}
		const osg::Vec4f & bottomRight=*bottomRight_ptr;
		const osg::Vec4f* topRight_ptr=(Luna< osg::Vec4f >::check(L,5));
		if( !topRight_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg topRight in osgText::Text::setColorGradientCorners function");
		}
		const osg::Vec4f & topRight=*topRight_ptr;

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::setColorGradientCorners(const osg::Vec4f &, const osg::Vec4f &, const osg::Vec4f &, const osg::Vec4f &)");
		}
		self->setColorGradientCorners(topLeft, bottomLeft, bottomRight, topRight);

		return 0;
	}

	// const osg::Vec4f & osgText::Text::getColorGradientTopLeft() const
	static int _bind_getColorGradientTopLeft(lua_State *L) {
		if (!_lg_typecheck_getColorGradientTopLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::Text::getColorGradientTopLeft() const function, expected prototype:\nconst osg::Vec4f & osgText::Text::getColorGradientTopLeft() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::Text::getColorGradientTopLeft() const");
		}
		const osg::Vec4f* lret = &self->getColorGradientTopLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osgText::Text::getColorGradientBottomLeft() const
	static int _bind_getColorGradientBottomLeft(lua_State *L) {
		if (!_lg_typecheck_getColorGradientBottomLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::Text::getColorGradientBottomLeft() const function, expected prototype:\nconst osg::Vec4f & osgText::Text::getColorGradientBottomLeft() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::Text::getColorGradientBottomLeft() const");
		}
		const osg::Vec4f* lret = &self->getColorGradientBottomLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osgText::Text::getColorGradientBottomRight() const
	static int _bind_getColorGradientBottomRight(lua_State *L) {
		if (!_lg_typecheck_getColorGradientBottomRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::Text::getColorGradientBottomRight() const function, expected prototype:\nconst osg::Vec4f & osgText::Text::getColorGradientBottomRight() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::Text::getColorGradientBottomRight() const");
		}
		const osg::Vec4f* lret = &self->getColorGradientBottomRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osgText::Text::getColorGradientTopRight() const
	static int _bind_getColorGradientTopRight(lua_State *L) {
		if (!_lg_typecheck_getColorGradientTopRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::Text::getColorGradientTopRight() const function, expected prototype:\nconst osg::Vec4f & osgText::Text::getColorGradientTopRight() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::Text::getColorGradientTopRight() const");
		}
		const osg::Vec4f* lret = &self->getColorGradientTopRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgText::Text::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::Text::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::Text::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::drawImplementation(osg::RenderInfo &) const");
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// void osgText::Text::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::Text::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// const osgText::Text::GlyphQuads * osgText::Text::getGlyphQuads(osgText::GlyphTexture * texture) const
	static int _bind_getGlyphQuads(lua_State *L) {
		if (!_lg_typecheck_getGlyphQuads(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Text::GlyphQuads * osgText::Text::getGlyphQuads(osgText::GlyphTexture * texture) const function, expected prototype:\nconst osgText::Text::GlyphQuads * osgText::Text::getGlyphQuads(osgText::GlyphTexture * texture) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgText::GlyphTexture* texture=dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,2));

		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads * osgText::Text::getGlyphQuads(osgText::GlyphTexture *) const");
		}
		const osgText::Text::GlyphQuads * lret = self->getGlyphQuads(texture);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads >::push(L,lret,false);

		return 1;
	}

	// const osgText::Text::TextureGlyphQuadMap & osgText::Text::getTextureGlyphQuadMap() const
	static int _bind_getTextureGlyphQuadMap(lua_State *L) {
		if (!_lg_typecheck_getTextureGlyphQuadMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Text::TextureGlyphQuadMap & osgText::Text::getTextureGlyphQuadMap() const function, expected prototype:\nconst osgText::Text::TextureGlyphQuadMap & osgText::Text::getTextureGlyphQuadMap() const\nClass arguments details:\n");
		}


		osgText::Text* self=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Text::TextureGlyphQuadMap & osgText::Text::getTextureGlyphQuadMap() const");
		}
		const osgText::Text::TextureGlyphQuadMap* lret = &self->getTextureGlyphQuadMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::TextureGlyphQuadMap >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgText::Text* LunaTraits< osgText::Text >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Text::_bind_ctor(L);
}

void LunaTraits< osgText::Text >::_bind_dtor(osgText::Text* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Text >::className[] = "Text";
const char LunaTraits< osgText::Text >::fullName[] = "osgText::Text";
const char LunaTraits< osgText::Text >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Text >::parents[] = {"osgText.TextBase", 0};
const int LunaTraits< osgText::Text >::hash = 3805462;
const int LunaTraits< osgText::Text >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Text >::methods[] = {
	{"cloneType", &luna_wrapper_osgText_Text::_bind_cloneType},
	{"clone", &luna_wrapper_osgText_Text::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgText_Text::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgText_Text::_bind_className},
	{"libraryName", &luna_wrapper_osgText_Text::_bind_libraryName},
	{"setFont", &luna_wrapper_osgText_Text::_bind_setFont},
	{"setEnableDepthWrites", &luna_wrapper_osgText_Text::_bind_setEnableDepthWrites},
	{"getEnableDepthWrites", &luna_wrapper_osgText_Text::_bind_getEnableDepthWrites},
	{"setBackdropType", &luna_wrapper_osgText_Text::_bind_setBackdropType},
	{"getBackdropType", &luna_wrapper_osgText_Text::_bind_getBackdropType},
	{"setBackdropOffset", &luna_wrapper_osgText_Text::_bind_setBackdropOffset},
	{"getBackdropHorizontalOffset", &luna_wrapper_osgText_Text::_bind_getBackdropHorizontalOffset},
	{"getBackdropVerticalOffset", &luna_wrapper_osgText_Text::_bind_getBackdropVerticalOffset},
	{"setBackdropColor", &luna_wrapper_osgText_Text::_bind_setBackdropColor},
	{"getBackdropColor", &luna_wrapper_osgText_Text::_bind_getBackdropColor},
	{"setBackdropImplementation", &luna_wrapper_osgText_Text::_bind_setBackdropImplementation},
	{"getBackdropImplementation", &luna_wrapper_osgText_Text::_bind_getBackdropImplementation},
	{"setColorGradientMode", &luna_wrapper_osgText_Text::_bind_setColorGradientMode},
	{"getColorGradientMode", &luna_wrapper_osgText_Text::_bind_getColorGradientMode},
	{"setColorGradientCorners", &luna_wrapper_osgText_Text::_bind_setColorGradientCorners},
	{"getColorGradientTopLeft", &luna_wrapper_osgText_Text::_bind_getColorGradientTopLeft},
	{"getColorGradientBottomLeft", &luna_wrapper_osgText_Text::_bind_getColorGradientBottomLeft},
	{"getColorGradientBottomRight", &luna_wrapper_osgText_Text::_bind_getColorGradientBottomRight},
	{"getColorGradientTopRight", &luna_wrapper_osgText_Text::_bind_getColorGradientTopRight},
	{"drawImplementation", &luna_wrapper_osgText_Text::_bind_drawImplementation},
	{"releaseGLObjects", &luna_wrapper_osgText_Text::_bind_releaseGLObjects},
	{"getGlyphQuads", &luna_wrapper_osgText_Text::_bind_getGlyphQuads},
	{"getTextureGlyphQuadMap", &luna_wrapper_osgText_Text::_bind_getTextureGlyphQuadMap},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Text >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Text::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Text >::enumValues[] = {
	{"DROP_SHADOW_BOTTOM_RIGHT", osgText::Text::DROP_SHADOW_BOTTOM_RIGHT},
	{"DROP_SHADOW_CENTER_RIGHT", osgText::Text::DROP_SHADOW_CENTER_RIGHT},
	{"DROP_SHADOW_TOP_RIGHT", osgText::Text::DROP_SHADOW_TOP_RIGHT},
	{"DROP_SHADOW_BOTTOM_CENTER", osgText::Text::DROP_SHADOW_BOTTOM_CENTER},
	{"DROP_SHADOW_TOP_CENTER", osgText::Text::DROP_SHADOW_TOP_CENTER},
	{"DROP_SHADOW_BOTTOM_LEFT", osgText::Text::DROP_SHADOW_BOTTOM_LEFT},
	{"DROP_SHADOW_CENTER_LEFT", osgText::Text::DROP_SHADOW_CENTER_LEFT},
	{"DROP_SHADOW_TOP_LEFT", osgText::Text::DROP_SHADOW_TOP_LEFT},
	{"OUTLINE", osgText::Text::OUTLINE},
	{"NONE", osgText::Text::NONE},
	{"POLYGON_OFFSET", osgText::Text::POLYGON_OFFSET},
	{"NO_DEPTH_BUFFER", osgText::Text::NO_DEPTH_BUFFER},
	{"DEPTH_RANGE", osgText::Text::DEPTH_RANGE},
	{"STENCIL_BUFFER", osgText::Text::STENCIL_BUFFER},
	{"DELAYED_DEPTH_WRITES", osgText::Text::DELAYED_DEPTH_WRITES},
	{"SOLID", osgText::Text::SOLID},
	{"PER_CHARACTER", osgText::Text::PER_CHARACTER},
	{"OVERALL", osgText::Text::OVERALL},
	{0,0}
};


