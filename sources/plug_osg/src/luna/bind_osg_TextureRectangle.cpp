#include <plug_common.h>

class luna_wrapper_osg_TextureRectangle {
public:
	typedef Luna< osg::TextureRectangle > luna_t;

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
		osg::TextureRectangle* ptr= dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TextureRectangle >::push(L,ptr,false);
		return 1;
	};


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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,3)) ) ) return false;
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

	inline static bool _lg_typecheck_getImage_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModifiedCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSubloadCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSubloadCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSubloadCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_copyTexImage2D(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyTexSubImage2D(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osg::Object * osg::TextureRectangle::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TextureRectangle::cloneType() const function, expected prototype:\nosg::Object * osg::TextureRectangle::cloneType() const\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TextureRectangle::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TextureRectangle::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TextureRectangle::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::TextureRectangle::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TextureRectangle::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TextureRectangle::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TextureRectangle::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TextureRectangle::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TextureRectangle::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TextureRectangle::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TextureRectangle::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TextureRectangle::libraryName() const function, expected prototype:\nconst char * osg::TextureRectangle::libraryName() const\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TextureRectangle::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TextureRectangle::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TextureRectangle::className() const function, expected prototype:\nconst char * osg::TextureRectangle::className() const\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TextureRectangle::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TextureRectangle::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TextureRectangle::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TextureRectangle::getType() const\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TextureRectangle::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TextureRectangle::compare(const osg::StateAttribute & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TextureRectangle::compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osg::TextureRectangle::compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* rhs_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::TextureRectangle::compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TextureRectangle::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::TextureRectangle::getTextureTarget() const
	static int _bind_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_getTextureTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::TextureRectangle::getTextureTarget() const function, expected prototype:\nunsigned int osg::TextureRectangle::getTextureTarget() const\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::TextureRectangle::getTextureTarget() const");
		}
		unsigned int lret = self->getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TextureRectangle::setImage(osg::Image * image)
	static int _bind_setImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_setImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::setImage(osg::Image * image) function, expected prototype:\nvoid osg::TextureRectangle::setImage(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::setImage(osg::Image *)");
		}
		self->setImage(image);

		return 0;
	}

	// void osg::TextureRectangle::setImage(unsigned int, osg::Image * image)
	static int _bind_setImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_setImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::setImage(unsigned int, osg::Image * image) function, expected prototype:\nvoid osg::TextureRectangle::setImage(unsigned int, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,3));

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::setImage(unsigned, osg::Image *)");
		}
		self->setImage(_arg1, image);

		return 0;
	}

	// Overload binder for osg::TextureRectangle::setImage
	static int _bind_setImage(lua_State *L) {
		if (_lg_typecheck_setImage_overload_1(L)) return _bind_setImage_overload_1(L);
		if (_lg_typecheck_setImage_overload_2(L)) return _bind_setImage_overload_2(L);

		luaL_error(L, "error in function setImage, cannot match any of the overloads for function setImage:\n  setImage(osg::Image *)\n  setImage(unsigned, osg::Image *)\n");
		return 0;
	}

	// osg::Image * osg::TextureRectangle::getImage()
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::TextureRectangle::getImage() function, expected prototype:\nosg::Image * osg::TextureRectangle::getImage()\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::TextureRectangle::getImage()");
		}
		osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::TextureRectangle::getImage() const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::TextureRectangle::getImage() const function, expected prototype:\nconst osg::Image * osg::TextureRectangle::getImage() const\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::TextureRectangle::getImage() const");
		}
		const osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::Image * osg::TextureRectangle::getImage(unsigned int)
	static int _bind_getImage_overload_3(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::TextureRectangle::getImage(unsigned int) function, expected prototype:\nosg::Image * osg::TextureRectangle::getImage(unsigned int)\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::TextureRectangle::getImage(unsigned)");
		}
		osg::Image * lret = self->getImage(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::TextureRectangle::getImage(unsigned int) const
	static int _bind_getImage_overload_4(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::TextureRectangle::getImage(unsigned int) const function, expected prototype:\nconst osg::Image * osg::TextureRectangle::getImage(unsigned int) const\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::TextureRectangle::getImage(unsigned) const");
		}
		const osg::Image * lret = self->getImage(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TextureRectangle::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);
		if (_lg_typecheck_getImage_overload_3(L)) return _bind_getImage_overload_3(L);
		if (_lg_typecheck_getImage_overload_4(L)) return _bind_getImage_overload_4(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage()\n  getImage()\n  getImage(unsigned)\n  getImage(unsigned)\n");
		return 0;
	}

	// unsigned int & osg::TextureRectangle::getModifiedCount(unsigned int contextID) const
	static int _bind_getModifiedCount(lua_State *L) {
		if (!_lg_typecheck_getModifiedCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::TextureRectangle::getModifiedCount(unsigned int contextID) const function, expected prototype:\nunsigned int & osg::TextureRectangle::getModifiedCount(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::TextureRectangle::getModifiedCount(unsigned int) const");
		}
		unsigned int & lret = self->getModifiedCount(contextID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::TextureRectangle::getNumImages() const
	static int _bind_getNumImages(lua_State *L) {
		if (!_lg_typecheck_getNumImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::TextureRectangle::getNumImages() const function, expected prototype:\nunsigned int osg::TextureRectangle::getNumImages() const\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::TextureRectangle::getNumImages() const");
		}
		unsigned int lret = self->getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TextureRectangle::setTextureSize(int width, int height) const
	static int _bind_setTextureSize(lua_State *L) {
		if (!_lg_typecheck_setTextureSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::setTextureSize(int width, int height) const function, expected prototype:\nvoid osg::TextureRectangle::setTextureSize(int width, int height) const\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::setTextureSize(int, int) const");
		}
		self->setTextureSize(width, height);

		return 0;
	}

	// void osg::TextureRectangle::setTextureWidth(int width)
	static int _bind_setTextureWidth(lua_State *L) {
		if (!_lg_typecheck_setTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::setTextureWidth(int width) function, expected prototype:\nvoid osg::TextureRectangle::setTextureWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::setTextureWidth(int)");
		}
		self->setTextureWidth(width);

		return 0;
	}

	// void osg::TextureRectangle::setTextureHeight(int height)
	static int _bind_setTextureHeight(lua_State *L) {
		if (!_lg_typecheck_setTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::setTextureHeight(int height) function, expected prototype:\nvoid osg::TextureRectangle::setTextureHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::setTextureHeight(int)");
		}
		self->setTextureHeight(height);

		return 0;
	}

	// int osg::TextureRectangle::getTextureWidth() const
	static int _bind_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_getTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TextureRectangle::getTextureWidth() const function, expected prototype:\nint osg::TextureRectangle::getTextureWidth() const\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TextureRectangle::getTextureWidth() const");
		}
		int lret = self->getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TextureRectangle::getTextureHeight() const
	static int _bind_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_getTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TextureRectangle::getTextureHeight() const function, expected prototype:\nint osg::TextureRectangle::getTextureHeight() const\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TextureRectangle::getTextureHeight() const");
		}
		int lret = self->getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TextureRectangle::getTextureDepth() const
	static int _bind_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_getTextureDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TextureRectangle::getTextureDepth() const function, expected prototype:\nint osg::TextureRectangle::getTextureDepth() const\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TextureRectangle::getTextureDepth() const");
		}
		int lret = self->getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TextureRectangle::setSubloadCallback(osg::TextureRectangle::SubloadCallback * cb)
	static int _bind_setSubloadCallback(lua_State *L) {
		if (!_lg_typecheck_setSubloadCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::setSubloadCallback(osg::TextureRectangle::SubloadCallback * cb) function, expected prototype:\nvoid osg::TextureRectangle::setSubloadCallback(osg::TextureRectangle::SubloadCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::TextureRectangle::SubloadCallback* cb=dynamic_cast< osg::TextureRectangle::SubloadCallback* >(Luna< osg::Referenced >::check(L,2));

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::setSubloadCallback(osg::TextureRectangle::SubloadCallback *)");
		}
		self->setSubloadCallback(cb);

		return 0;
	}

	// osg::TextureRectangle::SubloadCallback * osg::TextureRectangle::getSubloadCallback()
	static int _bind_getSubloadCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSubloadCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TextureRectangle::SubloadCallback * osg::TextureRectangle::getSubloadCallback() function, expected prototype:\nosg::TextureRectangle::SubloadCallback * osg::TextureRectangle::getSubloadCallback()\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::TextureRectangle::SubloadCallback * osg::TextureRectangle::getSubloadCallback()");
		}
		osg::TextureRectangle::SubloadCallback * lret = self->getSubloadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TextureRectangle::SubloadCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::TextureRectangle::SubloadCallback * osg::TextureRectangle::getSubloadCallback() const
	static int _bind_getSubloadCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSubloadCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::TextureRectangle::SubloadCallback * osg::TextureRectangle::getSubloadCallback() const function, expected prototype:\nconst osg::TextureRectangle::SubloadCallback * osg::TextureRectangle::getSubloadCallback() const\nClass arguments details:\n");
		}


		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::TextureRectangle::SubloadCallback * osg::TextureRectangle::getSubloadCallback() const");
		}
		const osg::TextureRectangle::SubloadCallback * lret = self->getSubloadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TextureRectangle::SubloadCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TextureRectangle::getSubloadCallback
	static int _bind_getSubloadCallback(lua_State *L) {
		if (_lg_typecheck_getSubloadCallback_overload_1(L)) return _bind_getSubloadCallback_overload_1(L);
		if (_lg_typecheck_getSubloadCallback_overload_2(L)) return _bind_getSubloadCallback_overload_2(L);

		luaL_error(L, "error in function getSubloadCallback, cannot match any of the overloads for function getSubloadCallback:\n  getSubloadCallback()\n  getSubloadCallback()\n");
		return 0;
	}

	// void osg::TextureRectangle::copyTexImage2D(osg::State & state, int x, int y, int width, int height)
	static int _bind_copyTexImage2D(lua_State *L) {
		if (!_lg_typecheck_copyTexImage2D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::copyTexImage2D(osg::State & state, int x, int y, int width, int height) function, expected prototype:\nvoid osg::TextureRectangle::copyTexImage2D(osg::State & state, int x, int y, int width, int height)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureRectangle::copyTexImage2D function");
		}
		osg::State & state=*state_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::copyTexImage2D(osg::State &, int, int, int, int)");
		}
		self->copyTexImage2D(state, x, y, width, height);

		return 0;
	}

	// void osg::TextureRectangle::copyTexSubImage2D(osg::State & state, int xoffset, int yoffset, int x, int y, int width, int height)
	static int _bind_copyTexSubImage2D(lua_State *L) {
		if (!_lg_typecheck_copyTexSubImage2D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::copyTexSubImage2D(osg::State & state, int xoffset, int yoffset, int x, int y, int width, int height) function, expected prototype:\nvoid osg::TextureRectangle::copyTexSubImage2D(osg::State & state, int xoffset, int yoffset, int x, int y, int width, int height)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureRectangle::copyTexSubImage2D function");
		}
		osg::State & state=*state_ptr;
		int xoffset=(int)lua_tointeger(L,3);
		int yoffset=(int)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);
		int width=(int)lua_tointeger(L,7);
		int height=(int)lua_tointeger(L,8);

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::copyTexSubImage2D(osg::State &, int, int, int, int, int, int)");
		}
		self->copyTexSubImage2D(state, xoffset, yoffset, x, y, width, height);

		return 0;
	}

	// void osg::TextureRectangle::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::apply(osg::State & state) const function, expected prototype:\nvoid osg::TextureRectangle::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureRectangle::apply function");
		}
		osg::State & state=*state_ptr;

		osg::TextureRectangle* self=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::apply(osg::State &) const");
		}
		self->apply(state);

		return 0;
	}


	// Operator binds:

};

osg::TextureRectangle* LunaTraits< osg::TextureRectangle >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::Texture::setImage(unsigned int face, osg::Image * image)
	// osg::Image * osg::Texture::getImage(unsigned int face)
	// const osg::Image * osg::Texture::getImage(unsigned int face) const

	// Abstract operators:
}

void LunaTraits< osg::TextureRectangle >::_bind_dtor(osg::TextureRectangle* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TextureRectangle >::className[] = "TextureRectangle";
const char LunaTraits< osg::TextureRectangle >::fullName[] = "osg::TextureRectangle";
const char LunaTraits< osg::TextureRectangle >::moduleName[] = "osg";
const char* LunaTraits< osg::TextureRectangle >::parents[] = {"osg.Texture", 0};
const int LunaTraits< osg::TextureRectangle >::hash = 96136098;
const int LunaTraits< osg::TextureRectangle >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TextureRectangle >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TextureRectangle::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TextureRectangle::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TextureRectangle::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TextureRectangle::_bind_libraryName},
	{"className", &luna_wrapper_osg_TextureRectangle::_bind_className},
	{"getType", &luna_wrapper_osg_TextureRectangle::_bind_getType},
	{"compare", &luna_wrapper_osg_TextureRectangle::_bind_compare},
	{"getTextureTarget", &luna_wrapper_osg_TextureRectangle::_bind_getTextureTarget},
	{"setImage", &luna_wrapper_osg_TextureRectangle::_bind_setImage},
	{"getImage", &luna_wrapper_osg_TextureRectangle::_bind_getImage},
	{"getModifiedCount", &luna_wrapper_osg_TextureRectangle::_bind_getModifiedCount},
	{"getNumImages", &luna_wrapper_osg_TextureRectangle::_bind_getNumImages},
	{"setTextureSize", &luna_wrapper_osg_TextureRectangle::_bind_setTextureSize},
	{"setTextureWidth", &luna_wrapper_osg_TextureRectangle::_bind_setTextureWidth},
	{"setTextureHeight", &luna_wrapper_osg_TextureRectangle::_bind_setTextureHeight},
	{"getTextureWidth", &luna_wrapper_osg_TextureRectangle::_bind_getTextureWidth},
	{"getTextureHeight", &luna_wrapper_osg_TextureRectangle::_bind_getTextureHeight},
	{"getTextureDepth", &luna_wrapper_osg_TextureRectangle::_bind_getTextureDepth},
	{"setSubloadCallback", &luna_wrapper_osg_TextureRectangle::_bind_setSubloadCallback},
	{"getSubloadCallback", &luna_wrapper_osg_TextureRectangle::_bind_getSubloadCallback},
	{"copyTexImage2D", &luna_wrapper_osg_TextureRectangle::_bind_copyTexImage2D},
	{"copyTexSubImage2D", &luna_wrapper_osg_TextureRectangle::_bind_copyTexSubImage2D},
	{"apply", &luna_wrapper_osg_TextureRectangle::_bind_apply},
	{"__eq", &luna_wrapper_osg_TextureRectangle::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TextureRectangle >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TextureRectangle::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TextureRectangle >::enumValues[] = {
	{0,0}
};


