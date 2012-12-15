#ifndef _WRAPPERS_WRAPPER_OSG_BILLBOARD_H_
#define _WRAPPERS_WRAPPER_OSG_BILLBOARD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Billboard>

class wrapper_osg_Billboard : public osg::Billboard {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Billboard(lua_State* L, lua_Table* dum) : osg::Billboard(), _obj(L,-1) {};
	wrapper_osg_Billboard(lua_State* L, lua_Table* dum, const osg::Billboard & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Billboard(arg1, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Billboard::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Billboard::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Billboard::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Billboard::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Billboard::getUserData();
	};

	// osg::Group * osg::Node::asGroup()
	osg::Group * asGroup() {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return Billboard::asGroup();
	};

	// const osg::Group * osg::Node::asGroup() const
	const osg::Group * asGroup() const {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return Billboard::asGroup();
	};

	// osg::Transform * osg::Node::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return Billboard::asTransform();
	};

	// const osg::Transform * osg::Node::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return Billboard::asTransform();
	};

	// osg::Switch * osg::Node::asSwitch()
	osg::Switch * asSwitch() {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return Billboard::asSwitch();
	};

	// const osg::Switch * osg::Node::asSwitch() const
	const osg::Switch * asSwitch() const {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return Billboard::asSwitch();
	};

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	void ascend(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("ascend")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return Billboard::ascend(nv);
	};

	// void osg::Node::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return Billboard::traverse(arg1);
	};

	// osg::Geode * osg::Geode::asGeode()
	osg::Geode * asGeode() {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return Billboard::asGeode();
	};

	// const osg::Geode * osg::Geode::asGeode() const
	const osg::Geode * asGeode() const {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return Billboard::asGeode();
	};

	// bool osg::Geode::removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1)
	bool removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1) {
		if(_obj.pushFunction("removeDrawables")) {
			_obj.pushArg(i);
			_obj.pushArg(numDrawablesToRemove);
			return (_obj.callFunction<bool>());
		}

		return Billboard::removeDrawables(i, numDrawablesToRemove);
	};

	// bool osg::Geode::replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw)
	bool replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw) {
		if(_obj.pushFunction("replaceDrawable")) {
			_obj.pushArg(origDraw);
			_obj.pushArg(newDraw);
			return (_obj.callFunction<bool>());
		}

		return Billboard::replaceDrawable(origDraw, newDraw);
	};

	// bool osg::Geode::setDrawable(unsigned int i, osg::Drawable * drawable)
	bool setDrawable(unsigned int i, osg::Drawable * drawable) {
		if(_obj.pushFunction("setDrawable")) {
			_obj.pushArg(i);
			_obj.pushArg(drawable);
			return (_obj.callFunction<bool>());
		}

		return Billboard::setDrawable(i, drawable);
	};

	// void osg::Geode::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Billboard::releaseGLObjects(arg1);
	};

	// osg::Object * osg::Billboard::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Billboard::cloneType();
	};

	// osg::Object * osg::Billboard::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return Billboard::clone(copyop);
	};

	// bool osg::Billboard::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Billboard::isSameKindAs(obj);
	};

	// const char * osg::Billboard::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Billboard::className();
	};

	// const char * osg::Billboard::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Billboard::libraryName();
	};

	// void osg::Billboard::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return Billboard::accept(nv);
	};

	// bool osg::Billboard::addDrawable(osg::Drawable * gset)
	bool addDrawable(osg::Drawable * gset) {
		if(_obj.pushFunction("addDrawable")) {
			_obj.pushArg(gset);
			return (_obj.callFunction<bool>());
		}

		return Billboard::addDrawable(gset);
	};

	// bool osg::Billboard::addDrawable(osg::Drawable * gset, const osg::Vec3f & pos)
	bool addDrawable(osg::Drawable * gset, const osg::Vec3f & pos) {
		if(_obj.pushFunction("addDrawable")) {
			_obj.pushArg(gset);
			_obj.pushArg(&pos);
			return (_obj.callFunction<bool>());
		}

		return Billboard::addDrawable(gset, pos);
	};

	// bool osg::Billboard::removeDrawable(osg::Drawable * gset)
	bool removeDrawable(osg::Drawable * gset) {
		if(_obj.pushFunction("removeDrawable")) {
			_obj.pushArg(gset);
			return (_obj.callFunction<bool>());
		}

		return Billboard::removeDrawable(gset);
	};

	// osg::BoundingSphered osg::Billboard::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return Billboard::computeBound();
	};




};




#endif

