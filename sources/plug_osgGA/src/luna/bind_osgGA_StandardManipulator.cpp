#include <plug_common.h>

class luna_wrapper_osgGA_StandardManipulator {
public:
	typedef Luna< osgGA::StandardManipulator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgGA::StandardManipulator* ptr= dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::StandardManipulator >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTransformation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTransformation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTransformation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVerticalAxisFixed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVerticalAxisFixed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllowThrow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAllowThrow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAnimationTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAnimationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isAnimating(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_finishAnimation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_home_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_home_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgGA::StandardManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::StandardManipulator::className() const function, expected prototype:\nconst char * osgGA::StandardManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::StandardManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)
	static int _bind_setTransformation_overload_1(lua_State *L) {
		if (!_lg_typecheck_setTransformation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation) function, expected prototype:\nvoid osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::StandardManipulator::setTransformation function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::StandardManipulator::setTransformation function");
		}
		const osg::Quat & rotation=*rotation_ptr;

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setTransformation(const osg::Vec3d &, const osg::Quat &)");
		}
		self->setTransformation(eye, rotation);

		return 0;
	}

	// void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	static int _bind_setTransformation_overload_2(lua_State *L) {
		if (!_lg_typecheck_setTransformation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) function, expected prototype:\nvoid osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::StandardManipulator::setTransformation function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::StandardManipulator::setTransformation function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::StandardManipulator::setTransformation function");
		}
		const osg::Vec3d & up=*up_ptr;

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setTransformation(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)");
		}
		self->setTransformation(eye, center, up);

		return 0;
	}

	// Overload binder for osgGA::StandardManipulator::setTransformation
	static int _bind_setTransformation(lua_State *L) {
		if (_lg_typecheck_setTransformation_overload_1(L)) return _bind_setTransformation_overload_1(L);
		if (_lg_typecheck_setTransformation_overload_2(L)) return _bind_setTransformation_overload_2(L);

		luaL_error(L, "error in function setTransformation, cannot match any of the overloads for function setTransformation:\n  setTransformation(const osg::Vec3d &, const osg::Quat &)\n  setTransformation(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)\n");
		return 0;
	}

	// void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const
	static int _bind_getTransformation_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTransformation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const function, expected prototype:\nvoid osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::StandardManipulator::getTransformation function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::StandardManipulator::getTransformation function");
		}
		osg::Quat & rotation=*rotation_ptr;

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::getTransformation(osg::Vec3d &, osg::Quat &) const");
		}
		self->getTransformation(eye, rotation);

		return 0;
	}

	// void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_getTransformation_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTransformation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::StandardManipulator::getTransformation function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::StandardManipulator::getTransformation function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::StandardManipulator::getTransformation function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::getTransformation(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const");
		}
		self->getTransformation(eye, center, up);

		return 0;
	}

	// Overload binder for osgGA::StandardManipulator::getTransformation
	static int _bind_getTransformation(lua_State *L) {
		if (_lg_typecheck_getTransformation_overload_1(L)) return _bind_getTransformation_overload_1(L);
		if (_lg_typecheck_getTransformation_overload_2(L)) return _bind_getTransformation_overload_2(L);

		luaL_error(L, "error in function getTransformation, cannot match any of the overloads for function getTransformation:\n  getTransformation(osg::Vec3d &, osg::Quat &)\n  getTransformation(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &)\n");
		return 0;
	}

	// void osgGA::StandardManipulator::setNode(osg::Node * )
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setNode(osg::Node * ) function, expected prototype:\nvoid osgGA::StandardManipulator::setNode(osg::Node * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setNode(osg::Node *)");
		}
		self->setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::StandardManipulator::getNode() const
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::StandardManipulator::getNode() const function, expected prototype:\nconst osg::Node * osgGA::StandardManipulator::getNode() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::StandardManipulator::getNode() const");
		}
		const osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::StandardManipulator::getNode()
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::StandardManipulator::getNode() function, expected prototype:\nosg::Node * osgGA::StandardManipulator::getNode()\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::StandardManipulator::getNode()");
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::StandardManipulator::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode()\n  getNode()\n");
		return 0;
	}

	// void osgGA::StandardManipulator::setVerticalAxisFixed(bool value)
	static int _bind_setVerticalAxisFixed(lua_State *L) {
		if (!_lg_typecheck_setVerticalAxisFixed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setVerticalAxisFixed(bool value) function, expected prototype:\nvoid osgGA::StandardManipulator::setVerticalAxisFixed(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setVerticalAxisFixed(bool)");
		}
		self->setVerticalAxisFixed(value);

		return 0;
	}

	// bool osgGA::StandardManipulator::getVerticalAxisFixed() const
	static int _bind_getVerticalAxisFixed(lua_State *L) {
		if (!_lg_typecheck_getVerticalAxisFixed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::StandardManipulator::getVerticalAxisFixed() const function, expected prototype:\nbool osgGA::StandardManipulator::getVerticalAxisFixed() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::StandardManipulator::getVerticalAxisFixed() const");
		}
		bool lret = self->getVerticalAxisFixed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgGA::StandardManipulator::getAllowThrow() const
	static int _bind_getAllowThrow(lua_State *L) {
		if (!_lg_typecheck_getAllowThrow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::StandardManipulator::getAllowThrow() const function, expected prototype:\nbool osgGA::StandardManipulator::getAllowThrow() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::StandardManipulator::getAllowThrow() const");
		}
		bool lret = self->getAllowThrow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StandardManipulator::setAllowThrow(bool allowThrow)
	static int _bind_setAllowThrow(lua_State *L) {
		if (!_lg_typecheck_setAllowThrow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setAllowThrow(bool allowThrow) function, expected prototype:\nvoid osgGA::StandardManipulator::setAllowThrow(bool allowThrow)\nClass arguments details:\n");
		}

		bool allowThrow=(bool)(lua_toboolean(L,2)==1);

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setAllowThrow(bool)");
		}
		self->setAllowThrow(allowThrow);

		return 0;
	}

	// void osgGA::StandardManipulator::setAnimationTime(const double t)
	static int _bind_setAnimationTime(lua_State *L) {
		if (!_lg_typecheck_setAnimationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setAnimationTime(const double t) function, expected prototype:\nvoid osgGA::StandardManipulator::setAnimationTime(const double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setAnimationTime(const double)");
		}
		self->setAnimationTime(t);

		return 0;
	}

	// double osgGA::StandardManipulator::getAnimationTime() const
	static int _bind_getAnimationTime(lua_State *L) {
		if (!_lg_typecheck_getAnimationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::StandardManipulator::getAnimationTime() const function, expected prototype:\ndouble osgGA::StandardManipulator::getAnimationTime() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::StandardManipulator::getAnimationTime() const");
		}
		double lret = self->getAnimationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgGA::StandardManipulator::isAnimating() const
	static int _bind_isAnimating(lua_State *L) {
		if (!_lg_typecheck_isAnimating(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::StandardManipulator::isAnimating() const function, expected prototype:\nbool osgGA::StandardManipulator::isAnimating() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::StandardManipulator::isAnimating() const");
		}
		bool lret = self->isAnimating();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StandardManipulator::finishAnimation()
	static int _bind_finishAnimation(lua_State *L) {
		if (!_lg_typecheck_finishAnimation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::finishAnimation() function, expected prototype:\nvoid osgGA::StandardManipulator::finishAnimation()\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::finishAnimation()");
		}
		self->finishAnimation();

		return 0;
	}

	// void osgGA::StandardManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_home_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::StandardManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::StandardManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::StandardManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::StandardManipulator::home(double )
	static int _bind_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_home_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::home(double ) function, expected prototype:\nvoid osgGA::StandardManipulator::home(double )\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::home(double)");
		}
		self->home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::StandardManipulator::home
	static int _bind_home(lua_State *L) {
		if (_lg_typecheck_home_overload_1(L)) return _bind_home_overload_1(L);
		if (_lg_typecheck_home_overload_2(L)) return _bind_home_overload_2(L);

		luaL_error(L, "error in function home, cannot match any of the overloads for function home:\n  home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  home(double)\n");
		return 0;
	}

	// void osgGA::StandardManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::StandardManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::StandardManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::StandardManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::StandardManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::StandardManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::StandardManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::StandardManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::StandardManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::StandardManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StandardManipulator::getUsage(osg::ApplicationUsage & ) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::getUsage(osg::ApplicationUsage & ) const function, expected prototype:\nvoid osgGA::StandardManipulator::getUsage(osg::ApplicationUsage & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* _arg1_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::StandardManipulator::getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgGA::StandardManipulator* self=dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(_arg1);

		return 0;
	}


	// Operator binds:

};

osgGA::StandardManipulator* LunaTraits< osgGA::StandardManipulator >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)
	// void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	// void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const
	// void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	// void osgGA::CameraManipulator::setByMatrix(const osg::Matrixd & matrix)
	// void osgGA::CameraManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	// osg::Matrixd osgGA::CameraManipulator::getMatrix() const
	// osg::Matrixd osgGA::CameraManipulator::getInverseMatrix() const

	// Abstract operators:
}

void LunaTraits< osgGA::StandardManipulator >::_bind_dtor(osgGA::StandardManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::StandardManipulator >::className[] = "StandardManipulator";
const char LunaTraits< osgGA::StandardManipulator >::fullName[] = "osgGA::StandardManipulator";
const char LunaTraits< osgGA::StandardManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::StandardManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::StandardManipulator >::hash = 14466020;
const int LunaTraits< osgGA::StandardManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::StandardManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_StandardManipulator::_bind_className},
	{"setTransformation", &luna_wrapper_osgGA_StandardManipulator::_bind_setTransformation},
	{"getTransformation", &luna_wrapper_osgGA_StandardManipulator::_bind_getTransformation},
	{"setNode", &luna_wrapper_osgGA_StandardManipulator::_bind_setNode},
	{"getNode", &luna_wrapper_osgGA_StandardManipulator::_bind_getNode},
	{"setVerticalAxisFixed", &luna_wrapper_osgGA_StandardManipulator::_bind_setVerticalAxisFixed},
	{"getVerticalAxisFixed", &luna_wrapper_osgGA_StandardManipulator::_bind_getVerticalAxisFixed},
	{"getAllowThrow", &luna_wrapper_osgGA_StandardManipulator::_bind_getAllowThrow},
	{"setAllowThrow", &luna_wrapper_osgGA_StandardManipulator::_bind_setAllowThrow},
	{"setAnimationTime", &luna_wrapper_osgGA_StandardManipulator::_bind_setAnimationTime},
	{"getAnimationTime", &luna_wrapper_osgGA_StandardManipulator::_bind_getAnimationTime},
	{"isAnimating", &luna_wrapper_osgGA_StandardManipulator::_bind_isAnimating},
	{"finishAnimation", &luna_wrapper_osgGA_StandardManipulator::_bind_finishAnimation},
	{"home", &luna_wrapper_osgGA_StandardManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_StandardManipulator::_bind_init},
	{"handle", &luna_wrapper_osgGA_StandardManipulator::_bind_handle},
	{"getUsage", &luna_wrapper_osgGA_StandardManipulator::_bind_getUsage},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::StandardManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_StandardManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::StandardManipulator >::enumValues[] = {
	{"UPDATE_MODEL_SIZE", osgGA::StandardManipulator::UPDATE_MODEL_SIZE},
	{"COMPUTE_HOME_USING_BBOX", osgGA::StandardManipulator::COMPUTE_HOME_USING_BBOX},
	{"PROCESS_MOUSE_WHEEL", osgGA::StandardManipulator::PROCESS_MOUSE_WHEEL},
	{"SET_CENTER_ON_WHEEL_FORWARD_MOVEMENT", osgGA::StandardManipulator::SET_CENTER_ON_WHEEL_FORWARD_MOVEMENT},
	{"DEFAULT_SETTINGS", osgGA::StandardManipulator::DEFAULT_SETTINGS},
	{0,0}
};


