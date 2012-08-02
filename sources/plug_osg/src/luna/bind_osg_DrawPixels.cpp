#include <plug_common.h>

class luna_wrapper_osg_DrawPixels {
public:
	typedef Luna< osg::DrawPixels > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::DrawPixels* ptr= dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DrawPixels >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseSubImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseSubImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSubImageDimensions(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSubImageDimensions(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DrawPixels::DrawPixels()
	static osg::DrawPixels* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawPixels::DrawPixels() function, expected prototype:\nosg::DrawPixels::DrawPixels()\nClass arguments details:\n");
		}


		return new osg::DrawPixels();
	}

	// osg::DrawPixels::DrawPixels(const osg::DrawPixels & drawimage, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawPixels* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawPixels::DrawPixels(const osg::DrawPixels & drawimage, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawPixels::DrawPixels(const osg::DrawPixels & drawimage, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::DrawPixels* drawimage_ptr=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if( !drawimage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawimage in osg::DrawPixels::DrawPixels function");
		}
		const osg::DrawPixels & drawimage=*drawimage_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawPixels::DrawPixels function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::DrawPixels(drawimage, copyop);
	}

	// Overload binder for osg::DrawPixels::DrawPixels
	static osg::DrawPixels* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DrawPixels, cannot match any of the overloads for function DrawPixels:\n  DrawPixels()\n  DrawPixels(const osg::DrawPixels &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::DrawPixels::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawPixels::cloneType() const function, expected prototype:\nosg::Object * osg::DrawPixels::cloneType() const\nClass arguments details:\n");
		}


		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawPixels::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawPixels::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawPixels::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::DrawPixels::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawPixels::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawPixels::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawPixels::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DrawPixels::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawPixels::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawPixels::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawPixels::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawPixels::libraryName() const function, expected prototype:\nconst char * osg::DrawPixels::libraryName() const\nClass arguments details:\n");
		}


		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawPixels::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawPixels::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawPixels::className() const function, expected prototype:\nconst char * osg::DrawPixels::className() const\nClass arguments details:\n");
		}


		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawPixels::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DrawPixels::setPosition(const osg::Vec3f & position)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::setPosition(const osg::Vec3f & position) function, expected prototype:\nvoid osg::DrawPixels::setPosition(const osg::Vec3f & position)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osg::DrawPixels::setPosition function");
		}
		const osg::Vec3f & position=*position_ptr;

		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::setPosition(const osg::Vec3f &)");
		}
		self->setPosition(position);

		return 0;
	}

	// osg::Vec3f & osg::DrawPixels::getPosition()
	static int _bind_getPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPosition_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f & osg::DrawPixels::getPosition() function, expected prototype:\nosg::Vec3f & osg::DrawPixels::getPosition()\nClass arguments details:\n");
		}


		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f & osg::DrawPixels::getPosition()");
		}
		const osg::Vec3f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f & osg::DrawPixels::getPosition() const
	static int _bind_getPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPosition_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::DrawPixels::getPosition() const function, expected prototype:\nconst osg::Vec3f & osg::DrawPixels::getPosition() const\nClass arguments details:\n");
		}


		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::DrawPixels::getPosition() const");
		}
		const osg::Vec3f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawPixels::getPosition
	static int _bind_getPosition(lua_State *L) {
		if (_lg_typecheck_getPosition_overload_1(L)) return _bind_getPosition_overload_1(L);
		if (_lg_typecheck_getPosition_overload_2(L)) return _bind_getPosition_overload_2(L);

		luaL_error(L, "error in function getPosition, cannot match any of the overloads for function getPosition:\n  getPosition()\n  getPosition()\n");
		return 0;
	}

	// void osg::DrawPixels::setImage(osg::Image * image)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::setImage(osg::Image * image) function, expected prototype:\nvoid osg::DrawPixels::setImage(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::setImage(osg::Image *)");
		}
		self->setImage(image);

		return 0;
	}

	// osg::Image * osg::DrawPixels::getImage()
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::DrawPixels::getImage() function, expected prototype:\nosg::Image * osg::DrawPixels::getImage()\nClass arguments details:\n");
		}


		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::DrawPixels::getImage()");
		}
		osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::DrawPixels::getImage() const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::DrawPixels::getImage() const function, expected prototype:\nconst osg::Image * osg::DrawPixels::getImage() const\nClass arguments details:\n");
		}


		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::DrawPixels::getImage() const");
		}
		const osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawPixels::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage()\n  getImage()\n");
		return 0;
	}

	// void osg::DrawPixels::setUseSubImage(bool useSubImage)
	static int _bind_setUseSubImage(lua_State *L) {
		if (!_lg_typecheck_setUseSubImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::setUseSubImage(bool useSubImage) function, expected prototype:\nvoid osg::DrawPixels::setUseSubImage(bool useSubImage)\nClass arguments details:\n");
		}

		bool useSubImage=(bool)(lua_toboolean(L,2)==1);

		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::setUseSubImage(bool)");
		}
		self->setUseSubImage(useSubImage);

		return 0;
	}

	// bool osg::DrawPixels::getUseSubImage() const
	static int _bind_getUseSubImage(lua_State *L) {
		if (!_lg_typecheck_getUseSubImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DrawPixels::getUseSubImage() const function, expected prototype:\nbool osg::DrawPixels::getUseSubImage() const\nClass arguments details:\n");
		}


		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawPixels::getUseSubImage() const");
		}
		bool lret = self->getUseSubImage();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DrawPixels::setSubImageDimensions(unsigned int offsetX, unsigned int offsetY, unsigned int width, unsigned int height)
	static int _bind_setSubImageDimensions(lua_State *L) {
		if (!_lg_typecheck_setSubImageDimensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::setSubImageDimensions(unsigned int offsetX, unsigned int offsetY, unsigned int width, unsigned int height) function, expected prototype:\nvoid osg::DrawPixels::setSubImageDimensions(unsigned int offsetX, unsigned int offsetY, unsigned int width, unsigned int height)\nClass arguments details:\n");
		}

		unsigned int offsetX=(unsigned int)lua_tointeger(L,2);
		unsigned int offsetY=(unsigned int)lua_tointeger(L,3);
		unsigned int width=(unsigned int)lua_tointeger(L,4);
		unsigned int height=(unsigned int)lua_tointeger(L,5);

		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::setSubImageDimensions(unsigned int, unsigned int, unsigned int, unsigned int)");
		}
		self->setSubImageDimensions(offsetX, offsetY, width, height);

		return 0;
	}

	// void osg::DrawPixels::getSubImageDimensions(unsigned int & offsetX, unsigned int & offsetY, unsigned int & width, unsigned int & height) const
	static int _bind_getSubImageDimensions(lua_State *L) {
		if (!_lg_typecheck_getSubImageDimensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::getSubImageDimensions(unsigned int & offsetX, unsigned int & offsetY, unsigned int & width, unsigned int & height) const function, expected prototype:\nvoid osg::DrawPixels::getSubImageDimensions(unsigned int & offsetX, unsigned int & offsetY, unsigned int & width, unsigned int & height) const\nClass arguments details:\n");
		}

		unsigned int offsetX=(unsigned int)lua_tointeger(L,2);
		unsigned int offsetY=(unsigned int)lua_tointeger(L,3);
		unsigned int width=(unsigned int)lua_tointeger(L,4);
		unsigned int height=(unsigned int)lua_tointeger(L,5);

		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::getSubImageDimensions(unsigned int &, unsigned int &, unsigned int &, unsigned int &) const");
		}
		self->getSubImageDimensions(offsetX, offsetY, width, height);

		return 0;
	}

	// void osg::DrawPixels::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::DrawPixels::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::DrawPixels::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::drawImplementation(osg::RenderInfo &) const");
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// osg::BoundingBoxf osg::DrawPixels::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxf osg::DrawPixels::computeBound() const function, expected prototype:\nosg::BoundingBoxf osg::DrawPixels::computeBound() const\nClass arguments details:\n");
		}


		osg::DrawPixels* self=dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingBoxf osg::DrawPixels::computeBound() const");
		}
		osg::BoundingBoxf stack_lret = self->computeBound();
		osg::BoundingBoxf* lret = new osg::BoundingBoxf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxf >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::DrawPixels* LunaTraits< osg::DrawPixels >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DrawPixels::_bind_ctor(L);
}

void LunaTraits< osg::DrawPixels >::_bind_dtor(osg::DrawPixels* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DrawPixels >::className[] = "DrawPixels";
const char LunaTraits< osg::DrawPixels >::fullName[] = "osg::DrawPixels";
const char LunaTraits< osg::DrawPixels >::moduleName[] = "osg";
const char* LunaTraits< osg::DrawPixels >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< osg::DrawPixels >::hash = 5432009;
const int LunaTraits< osg::DrawPixels >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::DrawPixels >::methods[] = {
	{"cloneType", &luna_wrapper_osg_DrawPixels::_bind_cloneType},
	{"clone", &luna_wrapper_osg_DrawPixels::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_DrawPixels::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_DrawPixels::_bind_libraryName},
	{"className", &luna_wrapper_osg_DrawPixels::_bind_className},
	{"setPosition", &luna_wrapper_osg_DrawPixels::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_DrawPixels::_bind_getPosition},
	{"setImage", &luna_wrapper_osg_DrawPixels::_bind_setImage},
	{"getImage", &luna_wrapper_osg_DrawPixels::_bind_getImage},
	{"setUseSubImage", &luna_wrapper_osg_DrawPixels::_bind_setUseSubImage},
	{"getUseSubImage", &luna_wrapper_osg_DrawPixels::_bind_getUseSubImage},
	{"setSubImageDimensions", &luna_wrapper_osg_DrawPixels::_bind_setSubImageDimensions},
	{"getSubImageDimensions", &luna_wrapper_osg_DrawPixels::_bind_getSubImageDimensions},
	{"drawImplementation", &luna_wrapper_osg_DrawPixels::_bind_drawImplementation},
	{"computeBound", &luna_wrapper_osg_DrawPixels::_bind_computeBound},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DrawPixels >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DrawPixels::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DrawPixels >::enumValues[] = {
	{0,0}
};


