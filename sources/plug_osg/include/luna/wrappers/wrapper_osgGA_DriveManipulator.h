#ifndef _WRAPPERS_WRAPPER_OSGGA_DRIVEMANIPULATOR_H_
#define _WRAPPERS_WRAPPER_OSGGA_DRIVEMANIPULATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/DriveManipulator>

class wrapper_osgGA_DriveManipulator : public osgGA::DriveManipulator, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_DriveManipulator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_DriveManipulator(lua_State* L, lua_Table* dum) : osgGA::DriveManipulator(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DriveManipulator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DriveManipulator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::releaseGLObjects(arg1);
	};

	// osg::Object * osgGA::GUIEventHandler::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return DriveManipulator::cloneType();
	};

	// osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return DriveManipulator::clone(arg1);
	};

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DriveManipulator::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return DriveManipulator::libraryName();
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::operator()(node, nv);
	};

	// void osgGA::CameraManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	void setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) {
		if(_obj.pushFunction("setCoordinateFrameCallback")) {
			_obj.pushArg(cb);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::setCoordinateFrameCallback(cb);
	};

	// osgUtil::SceneView::FusionDistanceMode osgGA::CameraManipulator::getFusionDistanceMode() const
	osgUtil::SceneView::FusionDistanceMode getFusionDistanceMode() const {
		if(_obj.pushFunction("getFusionDistanceMode")) {
			return (osgUtil::SceneView::FusionDistanceMode)(_obj.callFunction<int>());
		}

		return DriveManipulator::getFusionDistanceMode();
	};

	// float osgGA::CameraManipulator::getFusionDistanceValue() const
	float getFusionDistanceValue() const {
		if(_obj.pushFunction("getFusionDistanceValue")) {
			return (_obj.callFunction<float>());
		}

		return DriveManipulator::getFusionDistanceValue();
	};

	// void osgGA::CameraManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	void setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) {
		if(_obj.pushFunction("setHomePosition")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			_obj.pushArg(autoComputeHomePosition);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);
	};

	// void osgGA::CameraManipulator::getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	void getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const {
		if(_obj.pushFunction("getHomePosition")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::getHomePosition(eye, center, up);
	};

	// void osgGA::CameraManipulator::setAutoComputeHomePosition(bool flag)
	void setAutoComputeHomePosition(bool flag) {
		if(_obj.pushFunction("setAutoComputeHomePosition")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::setAutoComputeHomePosition(flag);
	};

	// const char * osgGA::DriveManipulator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return DriveManipulator::className();
	};

	// void osgGA::DriveManipulator::setByMatrix(const osg::Matrixd & matrix)
	void setByMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByMatrix")) {
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::setByMatrix(matrix);
	};

	// void osgGA::DriveManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	void setByInverseMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByInverseMatrix")) {
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::setByInverseMatrix(matrix);
	};

	// osg::Matrixd osgGA::DriveManipulator::getMatrix() const
	osg::Matrixd getMatrix() const {
		if(_obj.pushFunction("getMatrix")) {
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return DriveManipulator::getMatrix();
	};

	// osg::Matrixd osgGA::DriveManipulator::getInverseMatrix() const
	osg::Matrixd getInverseMatrix() const {
		if(_obj.pushFunction("getInverseMatrix")) {
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return DriveManipulator::getInverseMatrix();
	};

	// void osgGA::DriveManipulator::setNode(osg::Node * arg1)
	void setNode(osg::Node * arg1) {
		if(_obj.pushFunction("setNode")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::setNode(arg1);
	};

	// const osg::Node * osgGA::DriveManipulator::getNode() const
	const osg::Node * getNode() const {
		if(_obj.pushFunction("getNode")) {
			return (_obj.callFunction<osg::Node*>());
		}

		return DriveManipulator::getNode();
	};

	// osg::Node * osgGA::DriveManipulator::getNode()
	osg::Node * getNode() {
		if(_obj.pushFunction("getNode")) {
			return (_obj.callFunction<osg::Node*>());
		}

		return DriveManipulator::getNode();
	};

	// void osgGA::DriveManipulator::computeHomePosition()
	void computeHomePosition() {
		if(_obj.pushFunction("computeHomePosition")) {
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::computeHomePosition();
	};

	// void osgGA::DriveManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::home(arg1, arg2);
	};

	// void osgGA::DriveManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::init(arg1, arg2);
	};

	// bool osgGA::DriveManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return DriveManipulator::handle(ea, us);
	};

	// void osgGA::DriveManipulator::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return DriveManipulator::getUsage(usage);
	};


	// Protected non-virtual methods:
	// bool osgGA::DriveManipulator::intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::Vec3d & intersection, osg::Vec3d & normal) const
	bool public_intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::Vec3d & intersection, osg::Vec3d & normal) const {
		return osgGA::DriveManipulator::intersect(start, end, intersection, normal);
	};

	// void osgGA::DriveManipulator::flushMouseEventStack()
	void public_flushMouseEventStack() {
		return osgGA::DriveManipulator::flushMouseEventStack();
	};

	// void osgGA::DriveManipulator::addMouseEvent(const osgGA::GUIEventAdapter & ea)
	void public_addMouseEvent(const osgGA::GUIEventAdapter & ea) {
		return osgGA::DriveManipulator::addMouseEvent(ea);
	};

	// void osgGA::DriveManipulator::computePosition(const osg::Vec3d & eye, const osg::Vec3d & lv, const osg::Vec3d & up)
	void public_computePosition(const osg::Vec3d & eye, const osg::Vec3d & lv, const osg::Vec3d & up) {
		return osgGA::DriveManipulator::computePosition(eye, lv, up);
	};

	// bool osgGA::DriveManipulator::calcMovement()
	bool public_calcMovement() {
		return osgGA::DriveManipulator::calcMovement();
	};

	// std::string osgGA::CameraManipulator::getManipulatorName() const
	std::string public_getManipulatorName() const {
		return osgGA::CameraManipulator::getManipulatorName();
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_intersect(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_flushMouseEventStack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_addMouseEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computePosition(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_calcMovement(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getManipulatorName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// bool osgGA::DriveManipulator::public_intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::Vec3d & intersection, osg::Vec3d & normal) const
	static int _bind_public_intersect(lua_State *L) {
		if (!_lg_typecheck_public_intersect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::DriveManipulator::public_intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::Vec3d & intersection, osg::Vec3d & normal) const function, expected prototype:\nbool osgGA::DriveManipulator::public_intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::Vec3d & intersection, osg::Vec3d & normal) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\narg 4 ID = 92303202\n");
		}

		const osg::Vec3d* start_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in osgGA::DriveManipulator::public_intersect function");
		}
		const osg::Vec3d & start=*start_ptr;
		const osg::Vec3d* end_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in osgGA::DriveManipulator::public_intersect function");
		}
		const osg::Vec3d & end=*end_ptr;
		osg::Vec3d* intersection_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !intersection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersection in osgGA::DriveManipulator::public_intersect function");
		}
		osg::Vec3d & intersection=*intersection_ptr;
		osg::Vec3d* normal_ptr=(Luna< osg::Vec3d >::check(L,5));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osgGA::DriveManipulator::public_intersect function");
		}
		osg::Vec3d & normal=*normal_ptr;

		wrapper_osgGA_DriveManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_DriveManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::DriveManipulator::public_intersect(const osg::Vec3d &, const osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->public_intersect(start, end, intersection, normal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::DriveManipulator::public_flushMouseEventStack()
	static int _bind_public_flushMouseEventStack(lua_State *L) {
		if (!_lg_typecheck_public_flushMouseEventStack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::public_flushMouseEventStack() function, expected prototype:\nvoid osgGA::DriveManipulator::public_flushMouseEventStack()\nClass arguments details:\n");
		}


		wrapper_osgGA_DriveManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_DriveManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::public_flushMouseEventStack(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_flushMouseEventStack();

		return 0;
	}

	// void osgGA::DriveManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter & ea)
	static int _bind_public_addMouseEvent(lua_State *L) {
		if (!_lg_typecheck_public_addMouseEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter & ea) function, expected prototype:\nvoid osgGA::DriveManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter & ea)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::DriveManipulator::public_addMouseEvent function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;

		wrapper_osgGA_DriveManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_DriveManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_addMouseEvent(ea);

		return 0;
	}

	// void osgGA::DriveManipulator::public_computePosition(const osg::Vec3d & eye, const osg::Vec3d & lv, const osg::Vec3d & up)
	static int _bind_public_computePosition(lua_State *L) {
		if (!_lg_typecheck_public_computePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::public_computePosition(const osg::Vec3d & eye, const osg::Vec3d & lv, const osg::Vec3d & up) function, expected prototype:\nvoid osgGA::DriveManipulator::public_computePosition(const osg::Vec3d & eye, const osg::Vec3d & lv, const osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::DriveManipulator::public_computePosition function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* lv_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !lv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lv in osgGA::DriveManipulator::public_computePosition function");
		}
		const osg::Vec3d & lv=*lv_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::DriveManipulator::public_computePosition function");
		}
		const osg::Vec3d & up=*up_ptr;

		wrapper_osgGA_DriveManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_DriveManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::public_computePosition(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_computePosition(eye, lv, up);

		return 0;
	}

	// bool osgGA::DriveManipulator::public_calcMovement()
	static int _bind_public_calcMovement(lua_State *L) {
		if (!_lg_typecheck_public_calcMovement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::DriveManipulator::public_calcMovement() function, expected prototype:\nbool osgGA::DriveManipulator::public_calcMovement()\nClass arguments details:\n");
		}


		wrapper_osgGA_DriveManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_DriveManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::DriveManipulator::public_calcMovement(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->public_calcMovement();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// std::string osgGA::CameraManipulator::public_getManipulatorName() const
	static int _bind_public_getManipulatorName(lua_State *L) {
		if (!_lg_typecheck_public_getManipulatorName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgGA::CameraManipulator::public_getManipulatorName() const function, expected prototype:\nstd::string osgGA::CameraManipulator::public_getManipulatorName() const\nClass arguments details:\n");
		}


		wrapper_osgGA_DriveManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_DriveManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgGA::CameraManipulator::public_getManipulatorName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		std::string lret = self->public_getManipulatorName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgGA_DriveManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_DriveManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n");
		}


		wrapper_osgGA_DriveManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_DriveManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_intersect",_bind_public_intersect},
		{"protected_flushMouseEventStack",_bind_public_flushMouseEventStack},
		{"protected_addMouseEvent",_bind_public_addMouseEvent},
		{"protected_computePosition",_bind_public_computePosition},
		{"protected_calcMovement",_bind_public_calcMovement},
		{"protected_getManipulatorName",_bind_public_getManipulatorName},
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

