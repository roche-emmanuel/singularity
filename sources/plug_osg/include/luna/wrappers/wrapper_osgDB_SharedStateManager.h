#ifndef _WRAPPERS_WRAPPER_OSGDB_SHAREDSTATEMANAGER_H_
#define _WRAPPERS_WRAPPER_OSGDB_SHAREDSTATEMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/SharedStateManager>

class wrapper_osgDB_SharedStateManager : public osgDB::SharedStateManager, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_SharedStateManager() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_SharedStateManager(lua_State* L, lua_Table* dum, unsigned int mode = osgDB::SharedStateManager::SHARE_ALL) : osgDB::SharedStateManager(mode), luna_wrapper_base(L) {};

	// void osg::NodeVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return SharedStateManager::reset();
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return SharedStateManager::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return SharedStateManager::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return SharedStateManager::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return SharedStateManager::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return SharedStateManager::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgDB::SharedStateManager::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return SharedStateManager::libraryName();
	};

	// const char * osgDB::SharedStateManager::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return SharedStateManager::className();
	};

	// void osgDB::SharedStateManager::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return SharedStateManager::apply(node);
	};

	// void osgDB::SharedStateManager::apply(osg::Geode & geode)
	void apply(osg::Geode & geode) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&geode);
			return (_obj.callFunction<void>());
		}

		return SharedStateManager::apply(geode);
	};




// bool osgDB::SharedStateManager::shareTexture(osg::Object::DataVariance variance)
bool public_shareTexture(osg::Object::DataVariance variance) {
	return osgDB::SharedStateManager::shareTexture(variance);
};

// bool osgDB::SharedStateManager::shareStateSet(osg::Object::DataVariance variance)
bool public_shareStateSet(osg::Object::DataVariance variance) {
	return osgDB::SharedStateManager::shareStateSet(variance);
};

// void osgDB::SharedStateManager::process(osg::StateSet * ss, osg::Object * parent)
void public_process(osg::StateSet * ss, osg::Object * parent) {
	return osgDB::SharedStateManager::process(ss, parent);
};

// osg::StateAttribute * osgDB::SharedStateManager::find(osg::StateAttribute * sa)
osg::StateAttribute * public_find(osg::StateAttribute * sa) {
	return osgDB::SharedStateManager::find(sa);
};

// osg::StateSet * osgDB::SharedStateManager::find(osg::StateSet * ss)
osg::StateSet * public_find(osg::StateSet * ss) {
	return osgDB::SharedStateManager::find(ss);
};

// void osgDB::SharedStateManager::setStateSet(osg::StateSet * ss, osg::Object * object)
void public_setStateSet(osg::StateSet * ss, osg::Object * object) {
	return osgDB::SharedStateManager::setStateSet(ss, object);
};

// void osgDB::SharedStateManager::shareTextures(osg::StateSet * ss)
void public_shareTextures(osg::StateSet * ss) {
	return osgDB::SharedStateManager::shareTextures(ss);
};

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

