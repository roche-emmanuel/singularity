#ifndef _WRAPPERS_WRAPPER_OSG_GEODE_H_
#define _WRAPPERS_WRAPPER_OSG_GEODE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Geode>

class wrapper_osg_Geode : public osg::Geode {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Geode(lua_State* L, lua_Table* dum) : osg::Geode(), _obj(L,-1) {};
	wrapper_osg_Geode(lua_State* L, lua_Table* dum, const osg::Geode & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Geode(arg1, copyop), _obj(L,-1) {};

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

	// osg::Group * osg::Node::asGroup()
	osg::Group * asGroup() {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return osg::Node::asGroup();
	};

	// const osg::Group * osg::Node::asGroup() const
	const osg::Group * asGroup() const {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return osg::Node::asGroup();
	};

	// osg::Transform * osg::Node::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return osg::Node::asTransform();
	};

	// const osg::Transform * osg::Node::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return osg::Node::asTransform();
	};

	// osg::Switch * osg::Node::asSwitch()
	osg::Switch * asSwitch() {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return osg::Node::asSwitch();
	};

	// const osg::Switch * osg::Node::asSwitch() const
	const osg::Switch * asSwitch() const {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return osg::Node::asSwitch();
	};

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	void ascend(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("ascend")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return osg::Node::ascend(nv);
	};

	// void osg::Node::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Node::traverse(arg1);
	};

	// osg::Object * osg::Geode::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::Geode::cloneType();
	};

	// osg::Object * osg::Geode::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::Geode::clone(copyop);
	};

	// bool osg::Geode::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::Geode::isSameKindAs(obj);
	};

	// const char * osg::Geode::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::Geode::className();
	};

	// const char * osg::Geode::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::Geode::libraryName();
	};

	// void osg::Geode::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return osg::Geode::accept(nv);
	};

	// osg::Geode * osg::Geode::asGeode()
	osg::Geode * asGeode() {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return osg::Geode::asGeode();
	};

	// const osg::Geode * osg::Geode::asGeode() const
	const osg::Geode * asGeode() const {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return osg::Geode::asGeode();
	};

	// bool osg::Geode::addDrawable(osg::Drawable * drawable)
	bool addDrawable(osg::Drawable * drawable) {
		if(_obj.pushFunction("addDrawable")) {
			_obj.pushArg(drawable);
			return (_obj.callFunction<bool>());
		}

		return osg::Geode::addDrawable(drawable);
	};

	// bool osg::Geode::removeDrawable(osg::Drawable * drawable)
	bool removeDrawable(osg::Drawable * drawable) {
		if(_obj.pushFunction("removeDrawable")) {
			_obj.pushArg(drawable);
			return (_obj.callFunction<bool>());
		}

		return osg::Geode::removeDrawable(drawable);
	};

	// bool osg::Geode::removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1)
	bool removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1) {
		if(_obj.pushFunction("removeDrawables")) {
			_obj.pushArg(i);
			_obj.pushArg(numDrawablesToRemove);
			return (_obj.callFunction<bool>());
		}

		return osg::Geode::removeDrawables(i, numDrawablesToRemove);
	};

	// bool osg::Geode::replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw)
	bool replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw) {
		if(_obj.pushFunction("replaceDrawable")) {
			_obj.pushArg(origDraw);
			_obj.pushArg(newDraw);
			return (_obj.callFunction<bool>());
		}

		return osg::Geode::replaceDrawable(origDraw, newDraw);
	};

	// bool osg::Geode::setDrawable(unsigned int i, osg::Drawable * drawable)
	bool setDrawable(unsigned int i, osg::Drawable * drawable) {
		if(_obj.pushFunction("setDrawable")) {
			_obj.pushArg(i);
			_obj.pushArg(drawable);
			return (_obj.callFunction<bool>());
		}

		return osg::Geode::setDrawable(i, drawable);
	};

	// osg::BoundingSphered osg::Geode::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return osg::Geode::computeBound();
	};

	// void osg::Geode::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Geode::releaseGLObjects(arg1);
	};




};




#endif

