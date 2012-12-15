#ifndef _WRAPPERS_WRAPPER_OSGGA_STATESETMANIPULATOR_H_
#define _WRAPPERS_WRAPPER_OSGGA_STATESETMANIPULATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/StateSetManipulator>

class wrapper_osgGA_StateSetManipulator : public osgGA::StateSetManipulator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgGA_StateSetManipulator(lua_State* L, lua_Table* dum, osg::StateSet * stateset = 0) : osgGA::StateSetManipulator(stateset), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateSetManipulator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateSetManipulator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::releaseGLObjects(arg1);
	};

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return StateSetManipulator::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return StateSetManipulator::libraryName();
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::operator()(node, nv);
	};

	// const char * osgGA::StateSetManipulator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return StateSetManipulator::className();
	};

	// void osgGA::StateSetManipulator::setStateSet(osg::StateSet * arg1)
	void setStateSet(osg::StateSet * arg1) {
		if(_obj.pushFunction("setStateSet")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::setStateSet(arg1);
	};

	// osg::StateSet * osgGA::StateSetManipulator::getStateSet()
	osg::StateSet * getStateSet() {
		if(_obj.pushFunction("getStateSet")) {
			return (_obj.callFunction<osg::StateSet*>());
		}

		return StateSetManipulator::getStateSet();
	};

	// const osg::StateSet * osgGA::StateSetManipulator::getStateSet() const
	const osg::StateSet * getStateSet() const {
		if(_obj.pushFunction("getStateSet")) {
			return (_obj.callFunction<osg::StateSet*>());
		}

		return StateSetManipulator::getStateSet();
	};

	// bool osgGA::StateSetManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return StateSetManipulator::handle(ea, us);
	};

	// void osgGA::StateSetManipulator::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::getUsage(usage);
	};




};




#endif

