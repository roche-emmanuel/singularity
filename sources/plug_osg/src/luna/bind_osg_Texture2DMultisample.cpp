#include <plug_common.h>

class luna_wrapper_osg_Texture2DMultisample {
public:
	typedef Luna< osg::Texture2DMultisample > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Texture2DMultisample* ptr= dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture2DMultisample >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setTextureSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_allocateMipmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osg::Object * osg::Texture2DMultisample::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2DMultisample::cloneType() const function, expected prototype:\nosg::Object * osg::Texture2DMultisample::cloneType() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2DMultisample::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Texture2DMultisample::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2DMultisample::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Texture2DMultisample::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture2DMultisample::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2DMultisample::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Texture2DMultisample::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture2DMultisample::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Texture2DMultisample::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture2DMultisample::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Texture2DMultisample::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2DMultisample::libraryName() const function, expected prototype:\nconst char * osg::Texture2DMultisample::libraryName() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture2DMultisample::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Texture2DMultisample::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2DMultisample::className() const function, expected prototype:\nconst char * osg::Texture2DMultisample::className() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture2DMultisample::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Texture2DMultisample::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Texture2DMultisample::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Texture2DMultisample::getType() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Texture2DMultisample::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DMultisample::compare(const osg::StateAttribute & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osg::Texture2DMultisample::compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* rhs_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture2DMultisample::compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture2DMultisample::getTextureTarget() const
	static int _bind_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_getTextureTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2DMultisample::getTextureTarget() const function, expected prototype:\nunsigned int osg::Texture2DMultisample::getTextureTarget() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2DMultisample::getTextureTarget() const");
		}
		unsigned int lret = self->getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DMultisample::setTextureSize(int width, int height) const
	static int _bind_setTextureSize(lua_State *L) {
		if (!_lg_typecheck_setTextureSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::setTextureSize(int width, int height) const function, expected prototype:\nvoid osg::Texture2DMultisample::setTextureSize(int width, int height) const\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::setTextureSize(int, int) const");
		}
		self->setTextureSize(width, height);

		return 0;
	}

	// void osg::Texture2DMultisample::setNumSamples(int samples)
	static int _bind_setNumSamples(lua_State *L) {
		if (!_lg_typecheck_setNumSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::setNumSamples(int samples) function, expected prototype:\nvoid osg::Texture2DMultisample::setNumSamples(int samples)\nClass arguments details:\n");
		}

		int samples=(int)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::setNumSamples(int)");
		}
		self->setNumSamples(samples);

		return 0;
	}

	// void osg::Texture2DMultisample::setImage(unsigned face, osg::Image * image)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::setImage(unsigned face, osg::Image * image) function, expected prototype:\nvoid osg::Texture2DMultisample::setImage(unsigned face, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned face=(unsigned)lua_tointeger(L,2);
		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,3));

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::setImage(unsigned, osg::Image *)");
		}
		self->setImage(face, image);

		return 0;
	}

	// osg::Image * osg::Texture2DMultisample::getImage(unsigned face)
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Texture2DMultisample::getImage(unsigned face) function, expected prototype:\nosg::Image * osg::Texture2DMultisample::getImage(unsigned face)\nClass arguments details:\n");
		}

		unsigned face=(unsigned)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::Texture2DMultisample::getImage(unsigned)");
		}
		osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Texture2DMultisample::getImage(unsigned face) const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Texture2DMultisample::getImage(unsigned face) const function, expected prototype:\nconst osg::Image * osg::Texture2DMultisample::getImage(unsigned face) const\nClass arguments details:\n");
		}

		unsigned face=(unsigned)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Texture2DMultisample::getImage(unsigned) const");
		}
		const osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2DMultisample::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage(unsigned)\n  getImage(unsigned)\n");
		return 0;
	}

	// unsigned int osg::Texture2DMultisample::getNumImages() const
	static int _bind_getNumImages(lua_State *L) {
		if (!_lg_typecheck_getNumImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2DMultisample::getNumImages() const function, expected prototype:\nunsigned int osg::Texture2DMultisample::getNumImages() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2DMultisample::getNumImages() const");
		}
		unsigned int lret = self->getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DMultisample::allocateMipmap(osg::State & state) const
	static int _bind_allocateMipmap(lua_State *L) {
		if (!_lg_typecheck_allocateMipmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::allocateMipmap(osg::State & state) const function, expected prototype:\nvoid osg::Texture2DMultisample::allocateMipmap(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DMultisample::allocateMipmap function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::allocateMipmap(osg::State &) const");
		}
		self->allocateMipmap(state);

		return 0;
	}

	// void osg::Texture2DMultisample::setTextureWidth(int width)
	static int _bind_setTextureWidth(lua_State *L) {
		if (!_lg_typecheck_setTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::setTextureWidth(int width) function, expected prototype:\nvoid osg::Texture2DMultisample::setTextureWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::setTextureWidth(int)");
		}
		self->setTextureWidth(width);

		return 0;
	}

	// void osg::Texture2DMultisample::setTextureHeight(int height)
	static int _bind_setTextureHeight(lua_State *L) {
		if (!_lg_typecheck_setTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::setTextureHeight(int height) function, expected prototype:\nvoid osg::Texture2DMultisample::setTextureHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::setTextureHeight(int)");
		}
		self->setTextureHeight(height);

		return 0;
	}

	// int osg::Texture2DMultisample::getTextureWidth() const
	static int _bind_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_getTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::getTextureWidth() const function, expected prototype:\nint osg::Texture2DMultisample::getTextureWidth() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::getTextureWidth() const");
		}
		int lret = self->getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DMultisample::getTextureHeight() const
	static int _bind_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_getTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::getTextureHeight() const function, expected prototype:\nint osg::Texture2DMultisample::getTextureHeight() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::getTextureHeight() const");
		}
		int lret = self->getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DMultisample::getTextureDepth() const
	static int _bind_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_getTextureDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::getTextureDepth() const function, expected prototype:\nint osg::Texture2DMultisample::getTextureDepth() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::getTextureDepth() const");
		}
		int lret = self->getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DMultisample::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::apply(osg::State & state) const function, expected prototype:\nvoid osg::Texture2DMultisample::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DMultisample::apply function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DMultisample* self=dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::apply(osg::State &) const");
		}
		self->apply(state);

		return 0;
	}


	// Operator binds:

};

osg::Texture2DMultisample* LunaTraits< osg::Texture2DMultisample >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::Texture::setImage(unsigned int face, osg::Image * image)
	// osg::Image * osg::Texture::getImage(unsigned int face)
	// const osg::Image * osg::Texture::getImage(unsigned int face) const

	// Abstract operators:
}

void LunaTraits< osg::Texture2DMultisample >::_bind_dtor(osg::Texture2DMultisample* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture2DMultisample >::className[] = "Texture2DMultisample";
const char LunaTraits< osg::Texture2DMultisample >::fullName[] = "osg::Texture2DMultisample";
const char LunaTraits< osg::Texture2DMultisample >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture2DMultisample >::parents[] = {"osg.Texture", 0};
const int LunaTraits< osg::Texture2DMultisample >::hash = 30392864;
const int LunaTraits< osg::Texture2DMultisample >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture2DMultisample >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Texture2DMultisample::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Texture2DMultisample::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Texture2DMultisample::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Texture2DMultisample::_bind_libraryName},
	{"className", &luna_wrapper_osg_Texture2DMultisample::_bind_className},
	{"getType", &luna_wrapper_osg_Texture2DMultisample::_bind_getType},
	{"compare", &luna_wrapper_osg_Texture2DMultisample::_bind_compare},
	{"getTextureTarget", &luna_wrapper_osg_Texture2DMultisample::_bind_getTextureTarget},
	{"setTextureSize", &luna_wrapper_osg_Texture2DMultisample::_bind_setTextureSize},
	{"setNumSamples", &luna_wrapper_osg_Texture2DMultisample::_bind_setNumSamples},
	{"setImage", &luna_wrapper_osg_Texture2DMultisample::_bind_setImage},
	{"getImage", &luna_wrapper_osg_Texture2DMultisample::_bind_getImage},
	{"getNumImages", &luna_wrapper_osg_Texture2DMultisample::_bind_getNumImages},
	{"allocateMipmap", &luna_wrapper_osg_Texture2DMultisample::_bind_allocateMipmap},
	{"setTextureWidth", &luna_wrapper_osg_Texture2DMultisample::_bind_setTextureWidth},
	{"setTextureHeight", &luna_wrapper_osg_Texture2DMultisample::_bind_setTextureHeight},
	{"getTextureWidth", &luna_wrapper_osg_Texture2DMultisample::_bind_getTextureWidth},
	{"getTextureHeight", &luna_wrapper_osg_Texture2DMultisample::_bind_getTextureHeight},
	{"getTextureDepth", &luna_wrapper_osg_Texture2DMultisample::_bind_getTextureDepth},
	{"apply", &luna_wrapper_osg_Texture2DMultisample::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture2DMultisample >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture2DMultisample::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture2DMultisample >::enumValues[] = {
	{0,0}
};

