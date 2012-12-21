#ifndef _WRAPPERS_WRAPPER_OSGGA_EVENTVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGGA_EVENTVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/EventVisitor>

class wrapper_osgGA_EventVisitor : public osgGA::EventVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_EventVisitor() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_EventVisitor(lua_State* L, lua_Table* dum) : osgGA::EventVisitor(), luna_wrapper_base(L) {};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return EventVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return EventVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return EventVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return EventVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return EventVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgGA::EventVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return EventVisitor::libraryName();
	};

	// const char * osgGA::EventVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return EventVisitor::className();
	};

	// void osgGA::EventVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return EventVisitor::reset();
	};

	// void osgGA::EventVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Billboard & node)
	void apply(osg::Billboard & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::LightSource & node)
	void apply(osg::LightSource & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Group & node)
	void apply(osg::Group & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Projection & node)
	void apply(osg::Projection & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::OccluderNode & node)
	void apply(osg::OccluderNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};




// void osgGA::EventVisitor::handle_callbacks(osg::StateSet * stateset)
void public_handle_callbacks(osg::StateSet * stateset) {
	return osgGA::EventVisitor::handle_callbacks(stateset);
};

// void osgGA::EventVisitor::handle_callbacks_and_traverse(osg::Node & node)
void public_handle_callbacks_and_traverse(osg::Node & node) {
	return osgGA::EventVisitor::handle_callbacks_and_traverse(node);
};

// void osgGA::EventVisitor::handle_geode_callbacks(osg::Geode & node)
void public_handle_geode_callbacks(osg::Geode & node) {
	return osgGA::EventVisitor::handle_geode_callbacks(node);
};

// void osgGA::EventVisitor::traverseGeode(osg::Geode & geode)
void public_traverseGeode(osg::Geode & geode) {
	return osgGA::EventVisitor::traverseGeode(geode);
};

// osgGA::EventVisitor & osgGA::EventVisitor::operator=(const osgGA::EventVisitor & arg1)
// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
	return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
};

// void osg::Referenced::deleteUsingDeleteHandler() const
void public_deleteUsingDeleteHandler() const {
	return osg::Referenced::deleteUsingDeleteHandler();
};


};




#endif

