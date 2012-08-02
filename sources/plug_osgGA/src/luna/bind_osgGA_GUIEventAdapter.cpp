#include <plug_common.h>

class luna_wrapper_osgGA_GUIEventAdapter {
public:
	typedef Luna< osgGA::GUIEventAdapter > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgGA::GUIEventAdapter* ptr= dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::GUIEventAdapter >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setHandled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHandled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEventType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_time(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWindowRectangle(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUnmodifiedKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUnmodifiedKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInputRange(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getXmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getXmax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYmax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getXnormalized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYnormalized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMouseYOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMouseYOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setButtonMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getButtonMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setModKeyMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModKeyMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScrollingMotion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScrollingMotion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScrollingMotionDelta(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScrollingDeltaX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScrollingDeltaY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPenPressure(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPenPressure(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPenTiltX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPenTiltX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPenTiltY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPenTiltY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPenRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPenRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTabletPointerType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTabletPointerType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPenOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addTouchPoint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTouchData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isMultiTouchEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAccumulatedEventState(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::GUIEventAdapter::GUIEventAdapter()
	static osgGA::GUIEventAdapter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::GUIEventAdapter() function, expected prototype:\nosgGA::GUIEventAdapter::GUIEventAdapter()\nClass arguments details:\n");
		}


		return new osgGA::GUIEventAdapter();
	}

	// osgGA::GUIEventAdapter::GUIEventAdapter(const osgGA::GUIEventAdapter & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgGA::GUIEventAdapter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::GUIEventAdapter(const osgGA::GUIEventAdapter & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::GUIEventAdapter::GUIEventAdapter(const osgGA::GUIEventAdapter & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgGA::GUIEventAdapter* rhs_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgGA::GUIEventAdapter::GUIEventAdapter function");
		}
		const osgGA::GUIEventAdapter & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgGA::GUIEventAdapter::GUIEventAdapter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgGA::GUIEventAdapter(rhs, copyop);
	}

	// Overload binder for osgGA::GUIEventAdapter::GUIEventAdapter
	static osgGA::GUIEventAdapter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GUIEventAdapter, cannot match any of the overloads for function GUIEventAdapter:\n  GUIEventAdapter()\n  GUIEventAdapter(const osgGA::GUIEventAdapter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::GUIEventAdapter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventAdapter::cloneType() const function, expected prototype:\nosg::Object * osgGA::GUIEventAdapter::cloneType() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventAdapter::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::GUIEventAdapter::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventAdapter::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgGA::GUIEventAdapter::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventAdapter::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventAdapter::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::GUIEventAdapter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventAdapter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::GUIEventAdapter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventAdapter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::GUIEventAdapter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventAdapter::libraryName() const function, expected prototype:\nconst char * osgGA::GUIEventAdapter::libraryName() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventAdapter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::GUIEventAdapter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventAdapter::className() const function, expected prototype:\nconst char * osgGA::GUIEventAdapter::className() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventAdapter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setHandled(bool handled) const
	static int _bind_setHandled(lua_State *L) {
		if (!_lg_typecheck_setHandled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setHandled(bool handled) const function, expected prototype:\nvoid osgGA::GUIEventAdapter::setHandled(bool handled) const\nClass arguments details:\n");
		}

		bool handled=(bool)(lua_toboolean(L,2)==1);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setHandled(bool) const");
		}
		self->setHandled(handled);

		return 0;
	}

	// bool osgGA::GUIEventAdapter::getHandled() const
	static int _bind_getHandled(lua_State *L) {
		if (!_lg_typecheck_getHandled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventAdapter::getHandled() const function, expected prototype:\nbool osgGA::GUIEventAdapter::getHandled() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventAdapter::getHandled() const");
		}
		bool lret = self->getHandled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setEventType(osgGA::GUIEventAdapter::EventType Type)
	static int _bind_setEventType(lua_State *L) {
		if (!_lg_typecheck_setEventType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setEventType(osgGA::GUIEventAdapter::EventType Type) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setEventType(osgGA::GUIEventAdapter::EventType Type)\nClass arguments details:\n");
		}

		osgGA::GUIEventAdapter::EventType Type=(osgGA::GUIEventAdapter::EventType)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setEventType(osgGA::GUIEventAdapter::EventType)");
		}
		self->setEventType(Type);

		return 0;
	}

	// osgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::getEventType() const
	static int _bind_getEventType(lua_State *L) {
		if (!_lg_typecheck_getEventType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::getEventType() const function, expected prototype:\nosgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::getEventType() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::getEventType() const");
		}
		osgGA::GUIEventAdapter::EventType lret = self->getEventType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setTime(double time)
	static int _bind_setTime(lua_State *L) {
		if (!_lg_typecheck_setTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setTime(double time) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setTime(double time)\nClass arguments details:\n");
		}

		double time=(double)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setTime(double)");
		}
		self->setTime(time);

		return 0;
	}

	// double osgGA::GUIEventAdapter::getTime() const
	static int _bind_getTime(lua_State *L) {
		if (!_lg_typecheck_getTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::GUIEventAdapter::getTime() const function, expected prototype:\ndouble osgGA::GUIEventAdapter::getTime() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::GUIEventAdapter::getTime() const");
		}
		double lret = self->getTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgGA::GUIEventAdapter::time() const
	static int _bind_time(lua_State *L) {
		if (!_lg_typecheck_time(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::GUIEventAdapter::time() const function, expected prototype:\ndouble osgGA::GUIEventAdapter::time() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::GUIEventAdapter::time() const");
		}
		double lret = self->time();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setGraphicsContext(osg::GraphicsContext * context)
	static int _bind_setGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_setGraphicsContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setGraphicsContext(osg::GraphicsContext * context) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setGraphicsContext(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* context=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setGraphicsContext(osg::GraphicsContext *)");
		}
		self->setGraphicsContext(context);

		return 0;
	}

	// const osg::GraphicsContext * osgGA::GUIEventAdapter::getGraphicsContext() const
	static int _bind_getGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_getGraphicsContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext * osgGA::GUIEventAdapter::getGraphicsContext() const function, expected prototype:\nconst osg::GraphicsContext * osgGA::GUIEventAdapter::getGraphicsContext() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext * osgGA::GUIEventAdapter::getGraphicsContext() const");
		}
		const osg::GraphicsContext * lret = self->getGraphicsContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setWindowRectangle(int x, int y, int width, int height, bool updateMouseRange = true)
	static int _bind_setWindowRectangle(lua_State *L) {
		if (!_lg_typecheck_setWindowRectangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setWindowRectangle(int x, int y, int width, int height, bool updateMouseRange = true) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setWindowRectangle(int x, int y, int width, int height, bool updateMouseRange = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		bool updateMouseRange=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setWindowRectangle(int, int, int, int, bool)");
		}
		self->setWindowRectangle(x, y, width, height, updateMouseRange);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getWindowX() const
	static int _bind_getWindowX(lua_State *L) {
		if (!_lg_typecheck_getWindowX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getWindowX() const function, expected prototype:\nint osgGA::GUIEventAdapter::getWindowX() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getWindowX() const");
		}
		int lret = self->getWindowX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgGA::GUIEventAdapter::getWindowY() const
	static int _bind_getWindowY(lua_State *L) {
		if (!_lg_typecheck_getWindowY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getWindowY() const function, expected prototype:\nint osgGA::GUIEventAdapter::getWindowY() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getWindowY() const");
		}
		int lret = self->getWindowY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgGA::GUIEventAdapter::getWindowWidth() const
	static int _bind_getWindowWidth(lua_State *L) {
		if (!_lg_typecheck_getWindowWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getWindowWidth() const function, expected prototype:\nint osgGA::GUIEventAdapter::getWindowWidth() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getWindowWidth() const");
		}
		int lret = self->getWindowWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgGA::GUIEventAdapter::getWindowHeight() const
	static int _bind_getWindowHeight(lua_State *L) {
		if (!_lg_typecheck_getWindowHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getWindowHeight() const function, expected prototype:\nint osgGA::GUIEventAdapter::getWindowHeight() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getWindowHeight() const");
		}
		int lret = self->getWindowHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setKey(int key)
	static int _bind_setKey(lua_State *L) {
		if (!_lg_typecheck_setKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setKey(int key) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setKey(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setKey(int)");
		}
		self->setKey(key);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getKey() const
	static int _bind_getKey(lua_State *L) {
		if (!_lg_typecheck_getKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getKey() const function, expected prototype:\nint osgGA::GUIEventAdapter::getKey() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getKey() const");
		}
		int lret = self->getKey();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setUnmodifiedKey(int key)
	static int _bind_setUnmodifiedKey(lua_State *L) {
		if (!_lg_typecheck_setUnmodifiedKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setUnmodifiedKey(int key) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setUnmodifiedKey(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setUnmodifiedKey(int)");
		}
		self->setUnmodifiedKey(key);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getUnmodifiedKey() const
	static int _bind_getUnmodifiedKey(lua_State *L) {
		if (!_lg_typecheck_getUnmodifiedKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getUnmodifiedKey() const function, expected prototype:\nint osgGA::GUIEventAdapter::getUnmodifiedKey() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getUnmodifiedKey() const");
		}
		int lret = self->getUnmodifiedKey();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setButton(int button)
	static int _bind_setButton(lua_State *L) {
		if (!_lg_typecheck_setButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setButton(int button) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setButton(int button)\nClass arguments details:\n");
		}

		int button=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setButton(int)");
		}
		self->setButton(button);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getButton() const
	static int _bind_getButton(lua_State *L) {
		if (!_lg_typecheck_getButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getButton() const function, expected prototype:\nint osgGA::GUIEventAdapter::getButton() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getButton() const");
		}
		int lret = self->getButton();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setInputRange(float Xmin, float Ymin, float Xmax, float Ymax)
	static int _bind_setInputRange(lua_State *L) {
		if (!_lg_typecheck_setInputRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setInputRange(float Xmin, float Ymin, float Xmax, float Ymax) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setInputRange(float Xmin, float Ymin, float Xmax, float Ymax)\nClass arguments details:\n");
		}

		float Xmin=(float)lua_tonumber(L,2);
		float Ymin=(float)lua_tonumber(L,3);
		float Xmax=(float)lua_tonumber(L,4);
		float Ymax=(float)lua_tonumber(L,5);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setInputRange(float, float, float, float)");
		}
		self->setInputRange(Xmin, Ymin, Xmax, Ymax);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getXmin() const
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getXmin() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getXmin() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getXmin() const");
		}
		float lret = self->getXmin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::GUIEventAdapter::getXmax() const
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getXmax() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getXmax() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getXmax() const");
		}
		float lret = self->getXmax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::GUIEventAdapter::getYmin() const
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getYmin() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getYmin() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getYmin() const");
		}
		float lret = self->getYmin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::GUIEventAdapter::getYmax() const
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getYmax() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getYmax() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getYmax() const");
		}
		float lret = self->getYmax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setX(float x)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setX(float x) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setX(float x)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setX(float)");
		}
		self->setX(x);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getX() const
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getX() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getX() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getX() const");
		}
		float lret = self->getX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setY(float y)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setY(float y) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setY(float y)\nClass arguments details:\n");
		}

		float y=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setY(float)");
		}
		self->setY(y);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getY() const
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getY() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getY() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getY() const");
		}
		float lret = self->getY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::GUIEventAdapter::getXnormalized() const
	static int _bind_getXnormalized(lua_State *L) {
		if (!_lg_typecheck_getXnormalized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getXnormalized() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getXnormalized() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getXnormalized() const");
		}
		float lret = self->getXnormalized();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::GUIEventAdapter::getYnormalized() const
	static int _bind_getYnormalized(lua_State *L) {
		if (!_lg_typecheck_getYnormalized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getYnormalized() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getYnormalized() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getYnormalized() const");
		}
		float lret = self->getYnormalized();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setMouseYOrientation(osgGA::GUIEventAdapter::MouseYOrientation myo)
	static int _bind_setMouseYOrientation(lua_State *L) {
		if (!_lg_typecheck_setMouseYOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setMouseYOrientation(osgGA::GUIEventAdapter::MouseYOrientation myo) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setMouseYOrientation(osgGA::GUIEventAdapter::MouseYOrientation myo)\nClass arguments details:\n");
		}

		osgGA::GUIEventAdapter::MouseYOrientation myo=(osgGA::GUIEventAdapter::MouseYOrientation)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setMouseYOrientation(osgGA::GUIEventAdapter::MouseYOrientation)");
		}
		self->setMouseYOrientation(myo);

		return 0;
	}

	// osgGA::GUIEventAdapter::MouseYOrientation osgGA::GUIEventAdapter::getMouseYOrientation() const
	static int _bind_getMouseYOrientation(lua_State *L) {
		if (!_lg_typecheck_getMouseYOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::MouseYOrientation osgGA::GUIEventAdapter::getMouseYOrientation() const function, expected prototype:\nosgGA::GUIEventAdapter::MouseYOrientation osgGA::GUIEventAdapter::getMouseYOrientation() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::MouseYOrientation osgGA::GUIEventAdapter::getMouseYOrientation() const");
		}
		osgGA::GUIEventAdapter::MouseYOrientation lret = self->getMouseYOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setButtonMask(int mask)
	static int _bind_setButtonMask(lua_State *L) {
		if (!_lg_typecheck_setButtonMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setButtonMask(int mask) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setButtonMask(int mask)\nClass arguments details:\n");
		}

		int mask=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setButtonMask(int)");
		}
		self->setButtonMask(mask);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getButtonMask() const
	static int _bind_getButtonMask(lua_State *L) {
		if (!_lg_typecheck_getButtonMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getButtonMask() const function, expected prototype:\nint osgGA::GUIEventAdapter::getButtonMask() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getButtonMask() const");
		}
		int lret = self->getButtonMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setModKeyMask(int mask)
	static int _bind_setModKeyMask(lua_State *L) {
		if (!_lg_typecheck_setModKeyMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setModKeyMask(int mask) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setModKeyMask(int mask)\nClass arguments details:\n");
		}

		int mask=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setModKeyMask(int)");
		}
		self->setModKeyMask(mask);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getModKeyMask() const
	static int _bind_getModKeyMask(lua_State *L) {
		if (!_lg_typecheck_getModKeyMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getModKeyMask() const function, expected prototype:\nint osgGA::GUIEventAdapter::getModKeyMask() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getModKeyMask() const");
		}
		int lret = self->getModKeyMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setScrollingMotion(osgGA::GUIEventAdapter::ScrollingMotion motion)
	static int _bind_setScrollingMotion(lua_State *L) {
		if (!_lg_typecheck_setScrollingMotion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setScrollingMotion(osgGA::GUIEventAdapter::ScrollingMotion motion) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setScrollingMotion(osgGA::GUIEventAdapter::ScrollingMotion motion)\nClass arguments details:\n");
		}

		osgGA::GUIEventAdapter::ScrollingMotion motion=(osgGA::GUIEventAdapter::ScrollingMotion)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setScrollingMotion(osgGA::GUIEventAdapter::ScrollingMotion)");
		}
		self->setScrollingMotion(motion);

		return 0;
	}

	// osgGA::GUIEventAdapter::ScrollingMotion osgGA::GUIEventAdapter::getScrollingMotion() const
	static int _bind_getScrollingMotion(lua_State *L) {
		if (!_lg_typecheck_getScrollingMotion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::ScrollingMotion osgGA::GUIEventAdapter::getScrollingMotion() const function, expected prototype:\nosgGA::GUIEventAdapter::ScrollingMotion osgGA::GUIEventAdapter::getScrollingMotion() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::ScrollingMotion osgGA::GUIEventAdapter::getScrollingMotion() const");
		}
		osgGA::GUIEventAdapter::ScrollingMotion lret = self->getScrollingMotion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setScrollingMotionDelta(float x, float y)
	static int _bind_setScrollingMotionDelta(lua_State *L) {
		if (!_lg_typecheck_setScrollingMotionDelta(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setScrollingMotionDelta(float x, float y) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setScrollingMotionDelta(float x, float y)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setScrollingMotionDelta(float, float)");
		}
		self->setScrollingMotionDelta(x, y);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getScrollingDeltaX() const
	static int _bind_getScrollingDeltaX(lua_State *L) {
		if (!_lg_typecheck_getScrollingDeltaX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getScrollingDeltaX() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getScrollingDeltaX() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getScrollingDeltaX() const");
		}
		float lret = self->getScrollingDeltaX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::GUIEventAdapter::getScrollingDeltaY() const
	static int _bind_getScrollingDeltaY(lua_State *L) {
		if (!_lg_typecheck_getScrollingDeltaY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getScrollingDeltaY() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getScrollingDeltaY() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getScrollingDeltaY() const");
		}
		float lret = self->getScrollingDeltaY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setPenPressure(float pressure)
	static int _bind_setPenPressure(lua_State *L) {
		if (!_lg_typecheck_setPenPressure(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setPenPressure(float pressure) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setPenPressure(float pressure)\nClass arguments details:\n");
		}

		float pressure=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setPenPressure(float)");
		}
		self->setPenPressure(pressure);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getPenPressure() const
	static int _bind_getPenPressure(lua_State *L) {
		if (!_lg_typecheck_getPenPressure(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getPenPressure() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getPenPressure() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getPenPressure() const");
		}
		float lret = self->getPenPressure();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setPenTiltX(float tiltX)
	static int _bind_setPenTiltX(lua_State *L) {
		if (!_lg_typecheck_setPenTiltX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setPenTiltX(float tiltX) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setPenTiltX(float tiltX)\nClass arguments details:\n");
		}

		float tiltX=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setPenTiltX(float)");
		}
		self->setPenTiltX(tiltX);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getPenTiltX() const
	static int _bind_getPenTiltX(lua_State *L) {
		if (!_lg_typecheck_getPenTiltX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getPenTiltX() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getPenTiltX() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getPenTiltX() const");
		}
		float lret = self->getPenTiltX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setPenTiltY(float tiltY)
	static int _bind_setPenTiltY(lua_State *L) {
		if (!_lg_typecheck_setPenTiltY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setPenTiltY(float tiltY) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setPenTiltY(float tiltY)\nClass arguments details:\n");
		}

		float tiltY=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setPenTiltY(float)");
		}
		self->setPenTiltY(tiltY);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getPenTiltY() const
	static int _bind_getPenTiltY(lua_State *L) {
		if (!_lg_typecheck_getPenTiltY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getPenTiltY() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getPenTiltY() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getPenTiltY() const");
		}
		float lret = self->getPenTiltY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setPenRotation(float rotation)
	static int _bind_setPenRotation(lua_State *L) {
		if (!_lg_typecheck_setPenRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setPenRotation(float rotation) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setPenRotation(float rotation)\nClass arguments details:\n");
		}

		float rotation=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setPenRotation(float)");
		}
		self->setPenRotation(rotation);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getPenRotation() const
	static int _bind_getPenRotation(lua_State *L) {
		if (!_lg_typecheck_getPenRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getPenRotation() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getPenRotation() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getPenRotation() const");
		}
		float lret = self->getPenRotation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setTabletPointerType(osgGA::GUIEventAdapter::TabletPointerType pt)
	static int _bind_setTabletPointerType(lua_State *L) {
		if (!_lg_typecheck_setTabletPointerType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setTabletPointerType(osgGA::GUIEventAdapter::TabletPointerType pt) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setTabletPointerType(osgGA::GUIEventAdapter::TabletPointerType pt)\nClass arguments details:\n");
		}

		osgGA::GUIEventAdapter::TabletPointerType pt=(osgGA::GUIEventAdapter::TabletPointerType)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setTabletPointerType(osgGA::GUIEventAdapter::TabletPointerType)");
		}
		self->setTabletPointerType(pt);

		return 0;
	}

	// osgGA::GUIEventAdapter::TabletPointerType osgGA::GUIEventAdapter::getTabletPointerType() const
	static int _bind_getTabletPointerType(lua_State *L) {
		if (!_lg_typecheck_getTabletPointerType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::TabletPointerType osgGA::GUIEventAdapter::getTabletPointerType() const function, expected prototype:\nosgGA::GUIEventAdapter::TabletPointerType osgGA::GUIEventAdapter::getTabletPointerType() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::TabletPointerType osgGA::GUIEventAdapter::getTabletPointerType() const");
		}
		osgGA::GUIEventAdapter::TabletPointerType lret = self->getTabletPointerType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::Matrixd osgGA::GUIEventAdapter::getPenOrientation() const
	static int _bind_getPenOrientation(lua_State *L) {
		if (!_lg_typecheck_getPenOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd osgGA::GUIEventAdapter::getPenOrientation() const function, expected prototype:\nconst osg::Matrixd osgGA::GUIEventAdapter::getPenOrientation() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd osgGA::GUIEventAdapter::getPenOrientation() const");
		}
		const osg::Matrixd stack_lret = self->getPenOrientation();
		const osg::Matrixd* lret = new const osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::GUIEventAdapter::addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tapCount = 0)
	static int _bind_addTouchPoint(lua_State *L) {
		if (!_lg_typecheck_addTouchPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tapCount = 0) function, expected prototype:\nvoid osgGA::GUIEventAdapter::addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tapCount = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		osgGA::GUIEventAdapter::TouchPhase phase=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,3);
		float x=(float)lua_tonumber(L,4);
		float y=(float)lua_tonumber(L,5);
		unsigned int tapCount=luatop>5 ? (unsigned int)lua_tointeger(L,6) : 0;

		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::addTouchPoint(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, unsigned int)");
		}
		self->addTouchPoint(id, phase, x, y, tapCount);

		return 0;
	}

	// osgGA::GUIEventAdapter::TouchData * osgGA::GUIEventAdapter::getTouchData() const
	static int _bind_getTouchData(lua_State *L) {
		if (!_lg_typecheck_getTouchData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::TouchData * osgGA::GUIEventAdapter::getTouchData() const function, expected prototype:\nosgGA::GUIEventAdapter::TouchData * osgGA::GUIEventAdapter::getTouchData() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::TouchData * osgGA::GUIEventAdapter::getTouchData() const");
		}
		osgGA::GUIEventAdapter::TouchData * lret = self->getTouchData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter::TouchData >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::GUIEventAdapter::isMultiTouchEvent() const
	static int _bind_isMultiTouchEvent(lua_State *L) {
		if (!_lg_typecheck_isMultiTouchEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventAdapter::isMultiTouchEvent() const function, expected prototype:\nbool osgGA::GUIEventAdapter::isMultiTouchEvent() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter* self=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventAdapter::isMultiTouchEvent() const");
		}
		bool lret = self->isMultiTouchEvent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static osg::ref_ptr< osgGA::GUIEventAdapter > & osgGA::GUIEventAdapter::getAccumulatedEventState()
	static int _bind_getAccumulatedEventState(lua_State *L) {
		if (!_lg_typecheck_getAccumulatedEventState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::ref_ptr< osgGA::GUIEventAdapter > & osgGA::GUIEventAdapter::getAccumulatedEventState() function, expected prototype:\nstatic osg::ref_ptr< osgGA::GUIEventAdapter > & osgGA::GUIEventAdapter::getAccumulatedEventState()\nClass arguments details:\n");
		}


		osg::ref_ptr< osgGA::GUIEventAdapter > & lret = osgGA::GUIEventAdapter::getAccumulatedEventState();
		Luna< osgGA::GUIEventAdapter >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

osgGA::GUIEventAdapter* LunaTraits< osgGA::GUIEventAdapter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_GUIEventAdapter::_bind_ctor(L);
}

void LunaTraits< osgGA::GUIEventAdapter >::_bind_dtor(osgGA::GUIEventAdapter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::GUIEventAdapter >::className[] = "GUIEventAdapter";
const char LunaTraits< osgGA::GUIEventAdapter >::fullName[] = "osgGA::GUIEventAdapter";
const char LunaTraits< osgGA::GUIEventAdapter >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::GUIEventAdapter >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgGA::GUIEventAdapter >::hash = 91398620;
const int LunaTraits< osgGA::GUIEventAdapter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::GUIEventAdapter >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_GUIEventAdapter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_GUIEventAdapter::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_GUIEventAdapter::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_GUIEventAdapter::_bind_className},
	{"setHandled", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setHandled},
	{"getHandled", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getHandled},
	{"setEventType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setEventType},
	{"getEventType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getEventType},
	{"setTime", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setTime},
	{"getTime", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getTime},
	{"time", &luna_wrapper_osgGA_GUIEventAdapter::_bind_time},
	{"setGraphicsContext", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setGraphicsContext},
	{"getGraphicsContext", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getGraphicsContext},
	{"setWindowRectangle", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setWindowRectangle},
	{"getWindowX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getWindowX},
	{"getWindowY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getWindowY},
	{"getWindowWidth", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getWindowWidth},
	{"getWindowHeight", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getWindowHeight},
	{"setKey", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setKey},
	{"getKey", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getKey},
	{"setUnmodifiedKey", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setUnmodifiedKey},
	{"getUnmodifiedKey", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getUnmodifiedKey},
	{"setButton", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setButton},
	{"getButton", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getButton},
	{"setInputRange", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setInputRange},
	{"getXmin", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getXmin},
	{"getXmax", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getXmax},
	{"getYmin", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getYmin},
	{"getYmax", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getYmax},
	{"setX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setX},
	{"getX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getX},
	{"setY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setY},
	{"getY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getY},
	{"getXnormalized", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getXnormalized},
	{"getYnormalized", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getYnormalized},
	{"setMouseYOrientation", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setMouseYOrientation},
	{"getMouseYOrientation", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getMouseYOrientation},
	{"setButtonMask", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setButtonMask},
	{"getButtonMask", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getButtonMask},
	{"setModKeyMask", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setModKeyMask},
	{"getModKeyMask", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getModKeyMask},
	{"setScrollingMotion", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setScrollingMotion},
	{"getScrollingMotion", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getScrollingMotion},
	{"setScrollingMotionDelta", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setScrollingMotionDelta},
	{"getScrollingDeltaX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getScrollingDeltaX},
	{"getScrollingDeltaY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getScrollingDeltaY},
	{"setPenPressure", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setPenPressure},
	{"getPenPressure", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getPenPressure},
	{"setPenTiltX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setPenTiltX},
	{"getPenTiltX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getPenTiltX},
	{"setPenTiltY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setPenTiltY},
	{"getPenTiltY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getPenTiltY},
	{"setPenRotation", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setPenRotation},
	{"getPenRotation", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getPenRotation},
	{"setTabletPointerType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setTabletPointerType},
	{"getTabletPointerType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getTabletPointerType},
	{"getPenOrientation", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getPenOrientation},
	{"addTouchPoint", &luna_wrapper_osgGA_GUIEventAdapter::_bind_addTouchPoint},
	{"getTouchData", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getTouchData},
	{"isMultiTouchEvent", &luna_wrapper_osgGA_GUIEventAdapter::_bind_isMultiTouchEvent},
	{"getAccumulatedEventState", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getAccumulatedEventState},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::GUIEventAdapter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_GUIEventAdapter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::GUIEventAdapter >::enumValues[] = {
	{"LEFT_MOUSE_BUTTON", osgGA::GUIEventAdapter::LEFT_MOUSE_BUTTON},
	{"MIDDLE_MOUSE_BUTTON", osgGA::GUIEventAdapter::MIDDLE_MOUSE_BUTTON},
	{"RIGHT_MOUSE_BUTTON", osgGA::GUIEventAdapter::RIGHT_MOUSE_BUTTON},
	{"NONE", osgGA::GUIEventAdapter::NONE},
	{"PUSH", osgGA::GUIEventAdapter::PUSH},
	{"RELEASE", osgGA::GUIEventAdapter::RELEASE},
	{"DOUBLECLICK", osgGA::GUIEventAdapter::DOUBLECLICK},
	{"DRAG", osgGA::GUIEventAdapter::DRAG},
	{"MOVE", osgGA::GUIEventAdapter::MOVE},
	{"KEYDOWN", osgGA::GUIEventAdapter::KEYDOWN},
	{"KEYUP", osgGA::GUIEventAdapter::KEYUP},
	{"FRAME", osgGA::GUIEventAdapter::FRAME},
	{"RESIZE", osgGA::GUIEventAdapter::RESIZE},
	{"SCROLL", osgGA::GUIEventAdapter::SCROLL},
	{"PEN_PRESSURE", osgGA::GUIEventAdapter::PEN_PRESSURE},
	{"PEN_ORIENTATION", osgGA::GUIEventAdapter::PEN_ORIENTATION},
	{"PEN_PROXIMITY_ENTER", osgGA::GUIEventAdapter::PEN_PROXIMITY_ENTER},
	{"PEN_PROXIMITY_LEAVE", osgGA::GUIEventAdapter::PEN_PROXIMITY_LEAVE},
	{"CLOSE_WINDOW", osgGA::GUIEventAdapter::CLOSE_WINDOW},
	{"QUIT_APPLICATION", osgGA::GUIEventAdapter::QUIT_APPLICATION},
	{"USER", osgGA::GUIEventAdapter::USER},
	{"KEY_Space", osgGA::GUIEventAdapter::KEY_Space},
	{"KEY_0", osgGA::GUIEventAdapter::KEY_0},
	{"KEY_1", osgGA::GUIEventAdapter::KEY_1},
	{"KEY_2", osgGA::GUIEventAdapter::KEY_2},
	{"KEY_3", osgGA::GUIEventAdapter::KEY_3},
	{"KEY_4", osgGA::GUIEventAdapter::KEY_4},
	{"KEY_5", osgGA::GUIEventAdapter::KEY_5},
	{"KEY_6", osgGA::GUIEventAdapter::KEY_6},
	{"KEY_7", osgGA::GUIEventAdapter::KEY_7},
	{"KEY_8", osgGA::GUIEventAdapter::KEY_8},
	{"KEY_9", osgGA::GUIEventAdapter::KEY_9},
	{"KEY_A", osgGA::GUIEventAdapter::KEY_A},
	{"KEY_B", osgGA::GUIEventAdapter::KEY_B},
	{"KEY_C", osgGA::GUIEventAdapter::KEY_C},
	{"KEY_D", osgGA::GUIEventAdapter::KEY_D},
	{"KEY_E", osgGA::GUIEventAdapter::KEY_E},
	{"KEY_F", osgGA::GUIEventAdapter::KEY_F},
	{"KEY_G", osgGA::GUIEventAdapter::KEY_G},
	{"KEY_H", osgGA::GUIEventAdapter::KEY_H},
	{"KEY_I", osgGA::GUIEventAdapter::KEY_I},
	{"KEY_J", osgGA::GUIEventAdapter::KEY_J},
	{"KEY_K", osgGA::GUIEventAdapter::KEY_K},
	{"KEY_L", osgGA::GUIEventAdapter::KEY_L},
	{"KEY_M", osgGA::GUIEventAdapter::KEY_M},
	{"KEY_N", osgGA::GUIEventAdapter::KEY_N},
	{"KEY_O", osgGA::GUIEventAdapter::KEY_O},
	{"KEY_P", osgGA::GUIEventAdapter::KEY_P},
	{"KEY_Q", osgGA::GUIEventAdapter::KEY_Q},
	{"KEY_R", osgGA::GUIEventAdapter::KEY_R},
	{"KEY_S", osgGA::GUIEventAdapter::KEY_S},
	{"KEY_T", osgGA::GUIEventAdapter::KEY_T},
	{"KEY_U", osgGA::GUIEventAdapter::KEY_U},
	{"KEY_V", osgGA::GUIEventAdapter::KEY_V},
	{"KEY_W", osgGA::GUIEventAdapter::KEY_W},
	{"KEY_X", osgGA::GUIEventAdapter::KEY_X},
	{"KEY_Y", osgGA::GUIEventAdapter::KEY_Y},
	{"KEY_Z", osgGA::GUIEventAdapter::KEY_Z},
	{"KEY_Exclaim", osgGA::GUIEventAdapter::KEY_Exclaim},
	{"KEY_Quotedbl", osgGA::GUIEventAdapter::KEY_Quotedbl},
	{"KEY_Hash", osgGA::GUIEventAdapter::KEY_Hash},
	{"KEY_Dollar", osgGA::GUIEventAdapter::KEY_Dollar},
	{"KEY_Ampersand", osgGA::GUIEventAdapter::KEY_Ampersand},
	{"KEY_Quote", osgGA::GUIEventAdapter::KEY_Quote},
	{"KEY_Leftparen", osgGA::GUIEventAdapter::KEY_Leftparen},
	{"KEY_Rightparen", osgGA::GUIEventAdapter::KEY_Rightparen},
	{"KEY_Asterisk", osgGA::GUIEventAdapter::KEY_Asterisk},
	{"KEY_Plus", osgGA::GUIEventAdapter::KEY_Plus},
	{"KEY_Comma", osgGA::GUIEventAdapter::KEY_Comma},
	{"KEY_Minus", osgGA::GUIEventAdapter::KEY_Minus},
	{"KEY_Period", osgGA::GUIEventAdapter::KEY_Period},
	{"KEY_Slash", osgGA::GUIEventAdapter::KEY_Slash},
	{"KEY_Colon", osgGA::GUIEventAdapter::KEY_Colon},
	{"KEY_Semicolon", osgGA::GUIEventAdapter::KEY_Semicolon},
	{"KEY_Less", osgGA::GUIEventAdapter::KEY_Less},
	{"KEY_Equals", osgGA::GUIEventAdapter::KEY_Equals},
	{"KEY_Greater", osgGA::GUIEventAdapter::KEY_Greater},
	{"KEY_Question", osgGA::GUIEventAdapter::KEY_Question},
	{"KEY_At", osgGA::GUIEventAdapter::KEY_At},
	{"KEY_Leftbracket", osgGA::GUIEventAdapter::KEY_Leftbracket},
	{"KEY_Backslash", osgGA::GUIEventAdapter::KEY_Backslash},
	{"KEY_Rightbracket", osgGA::GUIEventAdapter::KEY_Rightbracket},
	{"KEY_Caret", osgGA::GUIEventAdapter::KEY_Caret},
	{"KEY_Underscore", osgGA::GUIEventAdapter::KEY_Underscore},
	{"KEY_Backquote", osgGA::GUIEventAdapter::KEY_Backquote},
	{"KEY_BackSpace", osgGA::GUIEventAdapter::KEY_BackSpace},
	{"KEY_Tab", osgGA::GUIEventAdapter::KEY_Tab},
	{"KEY_Linefeed", osgGA::GUIEventAdapter::KEY_Linefeed},
	{"KEY_Clear", osgGA::GUIEventAdapter::KEY_Clear},
	{"KEY_Return", osgGA::GUIEventAdapter::KEY_Return},
	{"KEY_Pause", osgGA::GUIEventAdapter::KEY_Pause},
	{"KEY_Scroll_Lock", osgGA::GUIEventAdapter::KEY_Scroll_Lock},
	{"KEY_Sys_Req", osgGA::GUIEventAdapter::KEY_Sys_Req},
	{"KEY_Escape", osgGA::GUIEventAdapter::KEY_Escape},
	{"KEY_Delete", osgGA::GUIEventAdapter::KEY_Delete},
	{"KEY_Home", osgGA::GUIEventAdapter::KEY_Home},
	{"KEY_Left", osgGA::GUIEventAdapter::KEY_Left},
	{"KEY_Up", osgGA::GUIEventAdapter::KEY_Up},
	{"KEY_Right", osgGA::GUIEventAdapter::KEY_Right},
	{"KEY_Down", osgGA::GUIEventAdapter::KEY_Down},
	{"KEY_Prior", osgGA::GUIEventAdapter::KEY_Prior},
	{"KEY_Page_Up", osgGA::GUIEventAdapter::KEY_Page_Up},
	{"KEY_Next", osgGA::GUIEventAdapter::KEY_Next},
	{"KEY_Page_Down", osgGA::GUIEventAdapter::KEY_Page_Down},
	{"KEY_End", osgGA::GUIEventAdapter::KEY_End},
	{"KEY_Begin", osgGA::GUIEventAdapter::KEY_Begin},
	{"KEY_Select", osgGA::GUIEventAdapter::KEY_Select},
	{"KEY_Print", osgGA::GUIEventAdapter::KEY_Print},
	{"KEY_Execute", osgGA::GUIEventAdapter::KEY_Execute},
	{"KEY_Insert", osgGA::GUIEventAdapter::KEY_Insert},
	{"KEY_Undo", osgGA::GUIEventAdapter::KEY_Undo},
	{"KEY_Redo", osgGA::GUIEventAdapter::KEY_Redo},
	{"KEY_Menu", osgGA::GUIEventAdapter::KEY_Menu},
	{"KEY_Find", osgGA::GUIEventAdapter::KEY_Find},
	{"KEY_Cancel", osgGA::GUIEventAdapter::KEY_Cancel},
	{"KEY_Help", osgGA::GUIEventAdapter::KEY_Help},
	{"KEY_Break", osgGA::GUIEventAdapter::KEY_Break},
	{"KEY_Mode_switch", osgGA::GUIEventAdapter::KEY_Mode_switch},
	{"KEY_Script_switch", osgGA::GUIEventAdapter::KEY_Script_switch},
	{"KEY_Num_Lock", osgGA::GUIEventAdapter::KEY_Num_Lock},
	{"KEY_KP_Space", osgGA::GUIEventAdapter::KEY_KP_Space},
	{"KEY_KP_Tab", osgGA::GUIEventAdapter::KEY_KP_Tab},
	{"KEY_KP_Enter", osgGA::GUIEventAdapter::KEY_KP_Enter},
	{"KEY_KP_F1", osgGA::GUIEventAdapter::KEY_KP_F1},
	{"KEY_KP_F2", osgGA::GUIEventAdapter::KEY_KP_F2},
	{"KEY_KP_F3", osgGA::GUIEventAdapter::KEY_KP_F3},
	{"KEY_KP_F4", osgGA::GUIEventAdapter::KEY_KP_F4},
	{"KEY_KP_Home", osgGA::GUIEventAdapter::KEY_KP_Home},
	{"KEY_KP_Left", osgGA::GUIEventAdapter::KEY_KP_Left},
	{"KEY_KP_Up", osgGA::GUIEventAdapter::KEY_KP_Up},
	{"KEY_KP_Right", osgGA::GUIEventAdapter::KEY_KP_Right},
	{"KEY_KP_Down", osgGA::GUIEventAdapter::KEY_KP_Down},
	{"KEY_KP_Prior", osgGA::GUIEventAdapter::KEY_KP_Prior},
	{"KEY_KP_Page_Up", osgGA::GUIEventAdapter::KEY_KP_Page_Up},
	{"KEY_KP_Next", osgGA::GUIEventAdapter::KEY_KP_Next},
	{"KEY_KP_Page_Down", osgGA::GUIEventAdapter::KEY_KP_Page_Down},
	{"KEY_KP_End", osgGA::GUIEventAdapter::KEY_KP_End},
	{"KEY_KP_Begin", osgGA::GUIEventAdapter::KEY_KP_Begin},
	{"KEY_KP_Insert", osgGA::GUIEventAdapter::KEY_KP_Insert},
	{"KEY_KP_Delete", osgGA::GUIEventAdapter::KEY_KP_Delete},
	{"KEY_KP_Equal", osgGA::GUIEventAdapter::KEY_KP_Equal},
	{"KEY_KP_Multiply", osgGA::GUIEventAdapter::KEY_KP_Multiply},
	{"KEY_KP_Add", osgGA::GUIEventAdapter::KEY_KP_Add},
	{"KEY_KP_Separator", osgGA::GUIEventAdapter::KEY_KP_Separator},
	{"KEY_KP_Subtract", osgGA::GUIEventAdapter::KEY_KP_Subtract},
	{"KEY_KP_Decimal", osgGA::GUIEventAdapter::KEY_KP_Decimal},
	{"KEY_KP_Divide", osgGA::GUIEventAdapter::KEY_KP_Divide},
	{"KEY_KP_0", osgGA::GUIEventAdapter::KEY_KP_0},
	{"KEY_KP_1", osgGA::GUIEventAdapter::KEY_KP_1},
	{"KEY_KP_2", osgGA::GUIEventAdapter::KEY_KP_2},
	{"KEY_KP_3", osgGA::GUIEventAdapter::KEY_KP_3},
	{"KEY_KP_4", osgGA::GUIEventAdapter::KEY_KP_4},
	{"KEY_KP_5", osgGA::GUIEventAdapter::KEY_KP_5},
	{"KEY_KP_6", osgGA::GUIEventAdapter::KEY_KP_6},
	{"KEY_KP_7", osgGA::GUIEventAdapter::KEY_KP_7},
	{"KEY_KP_8", osgGA::GUIEventAdapter::KEY_KP_8},
	{"KEY_KP_9", osgGA::GUIEventAdapter::KEY_KP_9},
	{"KEY_F1", osgGA::GUIEventAdapter::KEY_F1},
	{"KEY_F2", osgGA::GUIEventAdapter::KEY_F2},
	{"KEY_F3", osgGA::GUIEventAdapter::KEY_F3},
	{"KEY_F4", osgGA::GUIEventAdapter::KEY_F4},
	{"KEY_F5", osgGA::GUIEventAdapter::KEY_F5},
	{"KEY_F6", osgGA::GUIEventAdapter::KEY_F6},
	{"KEY_F7", osgGA::GUIEventAdapter::KEY_F7},
	{"KEY_F8", osgGA::GUIEventAdapter::KEY_F8},
	{"KEY_F9", osgGA::GUIEventAdapter::KEY_F9},
	{"KEY_F10", osgGA::GUIEventAdapter::KEY_F10},
	{"KEY_F11", osgGA::GUIEventAdapter::KEY_F11},
	{"KEY_F12", osgGA::GUIEventAdapter::KEY_F12},
	{"KEY_F13", osgGA::GUIEventAdapter::KEY_F13},
	{"KEY_F14", osgGA::GUIEventAdapter::KEY_F14},
	{"KEY_F15", osgGA::GUIEventAdapter::KEY_F15},
	{"KEY_F16", osgGA::GUIEventAdapter::KEY_F16},
	{"KEY_F17", osgGA::GUIEventAdapter::KEY_F17},
	{"KEY_F18", osgGA::GUIEventAdapter::KEY_F18},
	{"KEY_F19", osgGA::GUIEventAdapter::KEY_F19},
	{"KEY_F20", osgGA::GUIEventAdapter::KEY_F20},
	{"KEY_F21", osgGA::GUIEventAdapter::KEY_F21},
	{"KEY_F22", osgGA::GUIEventAdapter::KEY_F22},
	{"KEY_F23", osgGA::GUIEventAdapter::KEY_F23},
	{"KEY_F24", osgGA::GUIEventAdapter::KEY_F24},
	{"KEY_F25", osgGA::GUIEventAdapter::KEY_F25},
	{"KEY_F26", osgGA::GUIEventAdapter::KEY_F26},
	{"KEY_F27", osgGA::GUIEventAdapter::KEY_F27},
	{"KEY_F28", osgGA::GUIEventAdapter::KEY_F28},
	{"KEY_F29", osgGA::GUIEventAdapter::KEY_F29},
	{"KEY_F30", osgGA::GUIEventAdapter::KEY_F30},
	{"KEY_F31", osgGA::GUIEventAdapter::KEY_F31},
	{"KEY_F32", osgGA::GUIEventAdapter::KEY_F32},
	{"KEY_F33", osgGA::GUIEventAdapter::KEY_F33},
	{"KEY_F34", osgGA::GUIEventAdapter::KEY_F34},
	{"KEY_F35", osgGA::GUIEventAdapter::KEY_F35},
	{"KEY_Shift_L", osgGA::GUIEventAdapter::KEY_Shift_L},
	{"KEY_Shift_R", osgGA::GUIEventAdapter::KEY_Shift_R},
	{"KEY_Control_L", osgGA::GUIEventAdapter::KEY_Control_L},
	{"KEY_Control_R", osgGA::GUIEventAdapter::KEY_Control_R},
	{"KEY_Caps_Lock", osgGA::GUIEventAdapter::KEY_Caps_Lock},
	{"KEY_Shift_Lock", osgGA::GUIEventAdapter::KEY_Shift_Lock},
	{"KEY_Meta_L", osgGA::GUIEventAdapter::KEY_Meta_L},
	{"KEY_Meta_R", osgGA::GUIEventAdapter::KEY_Meta_R},
	{"KEY_Alt_L", osgGA::GUIEventAdapter::KEY_Alt_L},
	{"KEY_Alt_R", osgGA::GUIEventAdapter::KEY_Alt_R},
	{"KEY_Super_L", osgGA::GUIEventAdapter::KEY_Super_L},
	{"KEY_Super_R", osgGA::GUIEventAdapter::KEY_Super_R},
	{"KEY_Hyper_L", osgGA::GUIEventAdapter::KEY_Hyper_L},
	{"KEY_Hyper_R", osgGA::GUIEventAdapter::KEY_Hyper_R},
	{"MODKEY_LEFT_SHIFT", osgGA::GUIEventAdapter::MODKEY_LEFT_SHIFT},
	{"MODKEY_RIGHT_SHIFT", osgGA::GUIEventAdapter::MODKEY_RIGHT_SHIFT},
	{"MODKEY_LEFT_CTRL", osgGA::GUIEventAdapter::MODKEY_LEFT_CTRL},
	{"MODKEY_RIGHT_CTRL", osgGA::GUIEventAdapter::MODKEY_RIGHT_CTRL},
	{"MODKEY_LEFT_ALT", osgGA::GUIEventAdapter::MODKEY_LEFT_ALT},
	{"MODKEY_RIGHT_ALT", osgGA::GUIEventAdapter::MODKEY_RIGHT_ALT},
	{"MODKEY_LEFT_META", osgGA::GUIEventAdapter::MODKEY_LEFT_META},
	{"MODKEY_RIGHT_META", osgGA::GUIEventAdapter::MODKEY_RIGHT_META},
	{"MODKEY_LEFT_SUPER", osgGA::GUIEventAdapter::MODKEY_LEFT_SUPER},
	{"MODKEY_RIGHT_SUPER", osgGA::GUIEventAdapter::MODKEY_RIGHT_SUPER},
	{"MODKEY_LEFT_HYPER", osgGA::GUIEventAdapter::MODKEY_LEFT_HYPER},
	{"MODKEY_RIGHT_HYPER", osgGA::GUIEventAdapter::MODKEY_RIGHT_HYPER},
	{"MODKEY_NUM_LOCK", osgGA::GUIEventAdapter::MODKEY_NUM_LOCK},
	{"MODKEY_CAPS_LOCK", osgGA::GUIEventAdapter::MODKEY_CAPS_LOCK},
	{"MODKEY_CTRL", osgGA::GUIEventAdapter::MODKEY_CTRL},
	{"MODKEY_SHIFT", osgGA::GUIEventAdapter::MODKEY_SHIFT},
	{"MODKEY_ALT", osgGA::GUIEventAdapter::MODKEY_ALT},
	{"MODKEY_META", osgGA::GUIEventAdapter::MODKEY_META},
	{"MODKEY_SUPER", osgGA::GUIEventAdapter::MODKEY_SUPER},
	{"MODKEY_HYPER", osgGA::GUIEventAdapter::MODKEY_HYPER},
	{"Y_INCREASING_UPWARDS", osgGA::GUIEventAdapter::Y_INCREASING_UPWARDS},
	{"Y_INCREASING_DOWNWARDS", osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS},
	{"SCROLL_NONE", osgGA::GUIEventAdapter::SCROLL_NONE},
	{"SCROLL_LEFT", osgGA::GUIEventAdapter::SCROLL_LEFT},
	{"SCROLL_RIGHT", osgGA::GUIEventAdapter::SCROLL_RIGHT},
	{"SCROLL_UP", osgGA::GUIEventAdapter::SCROLL_UP},
	{"SCROLL_DOWN", osgGA::GUIEventAdapter::SCROLL_DOWN},
	{"SCROLL_2D", osgGA::GUIEventAdapter::SCROLL_2D},
	{"UNKNOWN", osgGA::GUIEventAdapter::UNKNOWN},
	{"PEN", osgGA::GUIEventAdapter::PEN},
	{"PUCK", osgGA::GUIEventAdapter::PUCK},
	{"ERASER", osgGA::GUIEventAdapter::ERASER},
	{"TOUCH_UNKNOWN", osgGA::GUIEventAdapter::TOUCH_UNKNOWN},
	{"TOUCH_BEGAN", osgGA::GUIEventAdapter::TOUCH_BEGAN},
	{"TOUCH_MOVED", osgGA::GUIEventAdapter::TOUCH_MOVED},
	{"TOUCH_STATIONERY", osgGA::GUIEventAdapter::TOUCH_STATIONERY},
	{"TOUCH_ENDED", osgGA::GUIEventAdapter::TOUCH_ENDED},
	{0,0}
};


