#ifndef _WRAPPERS_WRAPPER_OSG_CLUSTERCULLINGCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_CLUSTERCULLINGCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ClusterCullingCallback>

class wrapper_osg_ClusterCullingCallback : public osg::ClusterCullingCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ClusterCullingCallback(lua_State* L, lua_Table* dum) : osg::ClusterCullingCallback(), _obj(L,-1) {};
	wrapper_osg_ClusterCullingCallback(lua_State* L, lua_Table* dum, const osg::ClusterCullingCallback & ccc, const osg::CopyOp & copyop) : osg::ClusterCullingCallback(ccc, copyop), _obj(L,-1) {};
	wrapper_osg_ClusterCullingCallback(lua_State* L, lua_Table* dum, const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation) : osg::ClusterCullingCallback(controlPoint, normal, deviation), _obj(L,-1) {};
	wrapper_osg_ClusterCullingCallback(lua_State* L, lua_Table* dum, const osg::Drawable * drawable) : osg::ClusterCullingCallback(drawable), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return osg::Object::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return osg::Object::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return osg::Object::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return osg::Object::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return osg::Object::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Object::releaseGLObjects(arg1);
	};

	// osg::Object * osg::ClusterCullingCallback::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::ClusterCullingCallback::cloneType();
	};

	// osg::Object * osg::ClusterCullingCallback::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::ClusterCullingCallback::clone(arg1);
	};

	// bool osg::ClusterCullingCallback::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::ClusterCullingCallback::isSameKindAs(obj);
	};

	// const char * osg::ClusterCullingCallback::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::ClusterCullingCallback::libraryName();
	};

	// const char * osg::ClusterCullingCallback::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::ClusterCullingCallback::className();
	};

	// bool osg::ClusterCullingCallback::cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const
	bool cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const {
		if(_obj.pushFunction("cull")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<bool>());
		}

		return osg::ClusterCullingCallback::cull(arg1, arg2, arg3);
	};

	// void osg::ClusterCullingCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return osg::ClusterCullingCallback::operator()(node, nv);
	};




};




#endif
