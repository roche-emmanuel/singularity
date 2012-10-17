#include <plug_common.h>

class luna_wrapper_osg_ImageStream {
public:
	typedef Luna< osg::ImageStream > luna_t;

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
		osg::ImageStream* ptr= dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ImageStream >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_seek(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_play(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_rewind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_quit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStatus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLoopingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLoopingMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCreationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameRate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAudioStreams(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83757031) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAudioStreams_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAudioStreams_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ImageStream::ImageStream()
	static osg::ImageStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::ImageStream() function, expected prototype:\nosg::ImageStream::ImageStream()\nClass arguments details:\n");
		}


		return new osg::ImageStream();
	}

	// osg::ImageStream::ImageStream(const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ImageStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::ImageStream(const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ImageStream::ImageStream(const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ImageStream* image_ptr=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osg::ImageStream::ImageStream function");
		}
		const osg::ImageStream & image=*image_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ImageStream::ImageStream function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ImageStream(image, copyop);
	}

	// Overload binder for osg::ImageStream::ImageStream
	static osg::ImageStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ImageStream, cannot match any of the overloads for function ImageStream:\n  ImageStream()\n  ImageStream(const osg::ImageStream &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ImageStream::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageStream::cloneType() const function, expected prototype:\nosg::Object * osg::ImageStream::cloneType() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageStream::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ImageStream::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageStream::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ImageStream::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ImageStream::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageStream::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ImageStream::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ImageStream::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ImageStream::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ImageStream::libraryName() const function, expected prototype:\nconst char * osg::ImageStream::libraryName() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ImageStream::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ImageStream::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ImageStream::className() const function, expected prototype:\nconst char * osg::ImageStream::className() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ImageStream::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ImageStream::compare(const osg::Image & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ImageStream::compare(const osg::Image & rhs) const function, expected prototype:\nint osg::ImageStream::compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* rhs_ptr=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ImageStream::compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ImageStream::compare(const osg::Image &) const");
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::seek(double )
	static int _bind_seek(lua_State *L) {
		if (!_lg_typecheck_seek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::seek(double ) function, expected prototype:\nvoid osg::ImageStream::seek(double )\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::seek(double)");
		}
		self->seek(_arg1);

		return 0;
	}

	// void osg::ImageStream::play()
	static int _bind_play(lua_State *L) {
		if (!_lg_typecheck_play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::play() function, expected prototype:\nvoid osg::ImageStream::play()\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::play()");
		}
		self->play();

		return 0;
	}

	// void osg::ImageStream::pause()
	static int _bind_pause(lua_State *L) {
		if (!_lg_typecheck_pause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::pause() function, expected prototype:\nvoid osg::ImageStream::pause()\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::pause()");
		}
		self->pause();

		return 0;
	}

	// void osg::ImageStream::rewind()
	static int _bind_rewind(lua_State *L) {
		if (!_lg_typecheck_rewind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::rewind() function, expected prototype:\nvoid osg::ImageStream::rewind()\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::rewind()");
		}
		self->rewind();

		return 0;
	}

	// void osg::ImageStream::quit(bool  = true)
	static int _bind_quit(lua_State *L) {
		if (!_lg_typecheck_quit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::quit(bool  = true) function, expected prototype:\nvoid osg::ImageStream::quit(bool  = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool _arg1=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::quit(bool)");
		}
		self->quit(_arg1);

		return 0;
	}

	// osg::ImageStream::StreamStatus osg::ImageStream::getStatus()
	static int _bind_getStatus(lua_State *L) {
		if (!_lg_typecheck_getStatus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::StreamStatus osg::ImageStream::getStatus() function, expected prototype:\nosg::ImageStream::StreamStatus osg::ImageStream::getStatus()\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ImageStream::StreamStatus osg::ImageStream::getStatus()");
		}
		osg::ImageStream::StreamStatus lret = self->getStatus();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode mode)
	static int _bind_setLoopingMode(lua_State *L) {
		if (!_lg_typecheck_setLoopingMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode mode) function, expected prototype:\nvoid osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode mode)\nClass arguments details:\n");
		}

		osg::ImageStream::LoopingMode mode=(osg::ImageStream::LoopingMode)lua_tointeger(L,2);

		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode)");
		}
		self->setLoopingMode(mode);

		return 0;
	}

	// osg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const
	static int _bind_getLoopingMode(lua_State *L) {
		if (!_lg_typecheck_getLoopingMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const function, expected prototype:\nosg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const");
		}
		osg::ImageStream::LoopingMode lret = self->getLoopingMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::getCreationTime() const
	static int _bind_getCreationTime(lua_State *L) {
		if (!_lg_typecheck_getCreationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getCreationTime() const function, expected prototype:\ndouble osg::ImageStream::getCreationTime() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getCreationTime() const");
		}
		double lret = self->getCreationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::getLength() const
	static int _bind_getLength(lua_State *L) {
		if (!_lg_typecheck_getLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getLength() const function, expected prototype:\ndouble osg::ImageStream::getLength() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getLength() const");
		}
		double lret = self->getLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::getFrameRate() const
	static int _bind_getFrameRate(lua_State *L) {
		if (!_lg_typecheck_getFrameRate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getFrameRate() const function, expected prototype:\ndouble osg::ImageStream::getFrameRate() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getFrameRate() const");
		}
		double lret = self->getFrameRate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setReferenceTime(double )
	static int _bind_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_setReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setReferenceTime(double ) function, expected prototype:\nvoid osg::ImageStream::setReferenceTime(double )\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setReferenceTime(double)");
		}
		self->setReferenceTime(_arg1);

		return 0;
	}

	// double osg::ImageStream::getReferenceTime() const
	static int _bind_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_getReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getReferenceTime() const function, expected prototype:\ndouble osg::ImageStream::getReferenceTime() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getReferenceTime() const");
		}
		double lret = self->getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setTimeMultiplier(double )
	static int _bind_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_setTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setTimeMultiplier(double ) function, expected prototype:\nvoid osg::ImageStream::setTimeMultiplier(double )\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setTimeMultiplier(double)");
		}
		self->setTimeMultiplier(_arg1);

		return 0;
	}

	// double osg::ImageStream::getTimeMultiplier() const
	static int _bind_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_getTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getTimeMultiplier() const function, expected prototype:\ndouble osg::ImageStream::getTimeMultiplier() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getTimeMultiplier() const");
		}
		double lret = self->getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setVolume(float )
	static int _bind_setVolume(lua_State *L) {
		if (!_lg_typecheck_setVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setVolume(float ) function, expected prototype:\nvoid osg::ImageStream::setVolume(float )\nClass arguments details:\n");
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setVolume(float)");
		}
		self->setVolume(_arg1);

		return 0;
	}

	// float osg::ImageStream::getVolume() const
	static int _bind_getVolume(lua_State *L) {
		if (!_lg_typecheck_getVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::ImageStream::getVolume() const function, expected prototype:\nfloat osg::ImageStream::getVolume() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::ImageStream::getVolume() const");
		}
		float lret = self->getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams & asl)
	static int _bind_setAudioStreams(lua_State *L) {
		if (!_lg_typecheck_setAudioStreams(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams & asl) function, expected prototype:\nvoid osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams & asl)\nClass arguments details:\narg 1 ID = 83757031\n");
		}

		const osg::ImageStream::AudioStreams* asl_ptr=(Luna< osg::ImageStream::AudioStreams >::check(L,2));
		if( !asl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg asl in osg::ImageStream::setAudioStreams function");
		}
		const osg::ImageStream::AudioStreams & asl=*asl_ptr;

		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams &)");
		}
		self->setAudioStreams(asl);

		return 0;
	}

	// osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams()
	static int _bind_getAudioStreams_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAudioStreams_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() function, expected prototype:\nosg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams()\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams()");
		}
		const osg::ImageStream::AudioStreams* lret = &self->getAudioStreams();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ImageStream::AudioStreams >::push(L,lret,false);

		return 1;
	}

	// const osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const
	static int _bind_getAudioStreams_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAudioStreams_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const function, expected prototype:\nconst osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const");
		}
		const osg::ImageStream::AudioStreams* lret = &self->getAudioStreams();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ImageStream::AudioStreams >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageStream::getAudioStreams
	static int _bind_getAudioStreams(lua_State *L) {
		if (_lg_typecheck_getAudioStreams_overload_1(L)) return _bind_getAudioStreams_overload_1(L);
		if (_lg_typecheck_getAudioStreams_overload_2(L)) return _bind_getAudioStreams_overload_2(L);

		luaL_error(L, "error in function getAudioStreams, cannot match any of the overloads for function getAudioStreams:\n  getAudioStreams()\n  getAudioStreams()\n");
		return 0;
	}


	// Operator binds:

};

osg::ImageStream* LunaTraits< osg::ImageStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ImageStream::_bind_ctor(L);
}

void LunaTraits< osg::ImageStream >::_bind_dtor(osg::ImageStream* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ImageStream >::className[] = "ImageStream";
const char LunaTraits< osg::ImageStream >::fullName[] = "osg::ImageStream";
const char LunaTraits< osg::ImageStream >::moduleName[] = "osg";
const char* LunaTraits< osg::ImageStream >::parents[] = {"osg.Image", 0};
const int LunaTraits< osg::ImageStream >::hash = 46984585;
const int LunaTraits< osg::ImageStream >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ImageStream >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ImageStream::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ImageStream::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ImageStream::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ImageStream::_bind_libraryName},
	{"className", &luna_wrapper_osg_ImageStream::_bind_className},
	{"compare", &luna_wrapper_osg_ImageStream::_bind_compare},
	{"seek", &luna_wrapper_osg_ImageStream::_bind_seek},
	{"play", &luna_wrapper_osg_ImageStream::_bind_play},
	{"pause", &luna_wrapper_osg_ImageStream::_bind_pause},
	{"rewind", &luna_wrapper_osg_ImageStream::_bind_rewind},
	{"quit", &luna_wrapper_osg_ImageStream::_bind_quit},
	{"getStatus", &luna_wrapper_osg_ImageStream::_bind_getStatus},
	{"setLoopingMode", &luna_wrapper_osg_ImageStream::_bind_setLoopingMode},
	{"getLoopingMode", &luna_wrapper_osg_ImageStream::_bind_getLoopingMode},
	{"getCreationTime", &luna_wrapper_osg_ImageStream::_bind_getCreationTime},
	{"getLength", &luna_wrapper_osg_ImageStream::_bind_getLength},
	{"getFrameRate", &luna_wrapper_osg_ImageStream::_bind_getFrameRate},
	{"setReferenceTime", &luna_wrapper_osg_ImageStream::_bind_setReferenceTime},
	{"getReferenceTime", &luna_wrapper_osg_ImageStream::_bind_getReferenceTime},
	{"setTimeMultiplier", &luna_wrapper_osg_ImageStream::_bind_setTimeMultiplier},
	{"getTimeMultiplier", &luna_wrapper_osg_ImageStream::_bind_getTimeMultiplier},
	{"setVolume", &luna_wrapper_osg_ImageStream::_bind_setVolume},
	{"getVolume", &luna_wrapper_osg_ImageStream::_bind_getVolume},
	{"setAudioStreams", &luna_wrapper_osg_ImageStream::_bind_setAudioStreams},
	{"getAudioStreams", &luna_wrapper_osg_ImageStream::_bind_getAudioStreams},
	{"__eq", &luna_wrapper_osg_ImageStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ImageStream >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ImageStream::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ImageStream >::enumValues[] = {
	{"INVALID", osg::ImageStream::INVALID},
	{"PLAYING", osg::ImageStream::PLAYING},
	{"PAUSED", osg::ImageStream::PAUSED},
	{"REWINDING", osg::ImageStream::REWINDING},
	{"NO_LOOPING", osg::ImageStream::NO_LOOPING},
	{"LOOPING", osg::ImageStream::LOOPING},
	{0,0}
};


