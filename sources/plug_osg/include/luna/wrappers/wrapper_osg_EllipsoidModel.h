#ifndef _WRAPPERS_WRAPPER_OSG_ELLIPSOIDMODEL_H_
#define _WRAPPERS_WRAPPER_OSG_ELLIPSOIDMODEL_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/CoordinateSystemNode>

class wrapper_osg_EllipsoidModel : public osg::EllipsoidModel, public luna_wrapper_base {

public:
		

	~wrapper_osg_EllipsoidModel() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_EllipsoidModel(lua_State* L, lua_Table* dum, double radiusEquator = osg::WGS_84_RADIUS_EQUATOR, double radiusPolar = osg::WGS_84_RADIUS_POLAR) : osg::EllipsoidModel(radiusEquator, radiusPolar), luna_wrapper_base(L) {};
	wrapper_osg_EllipsoidModel(lua_State* L, lua_Table* dum, const osg::EllipsoidModel & et, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::EllipsoidModel(et, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return EllipsoidModel::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return EllipsoidModel::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return EllipsoidModel::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return EllipsoidModel::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return EllipsoidModel::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return EllipsoidModel::releaseGLObjects(arg1);
	};

	// osg::Object * osg::EllipsoidModel::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return EllipsoidModel::cloneType();
	};

	// osg::Object * osg::EllipsoidModel::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return EllipsoidModel::clone(arg1);
	};

	// bool osg::EllipsoidModel::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return EllipsoidModel::isSameKindAs(obj);
	};

	// const char * osg::EllipsoidModel::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return EllipsoidModel::libraryName();
	};

	// const char * osg::EllipsoidModel::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return EllipsoidModel::className();
	};




// void osg::EllipsoidModel::computeCoefficients()
void public_computeCoefficients() {
	return osg::EllipsoidModel::computeCoefficients();
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

