#ifndef _WRAPPERS_WRAPPER_OSG_STATESET_H_
#define _WRAPPERS_WRAPPER_OSG_STATESET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/StateSet>

class wrapper_osg_StateSet : public osg::StateSet, public luna_wrapper_base {

public:
		

	~wrapper_osg_StateSet() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_StateSet(lua_State* L, lua_Table* dum) : osg::StateSet(), luna_wrapper_base(L) {};
	wrapper_osg_StateSet(lua_State* L, lua_Table* dum, const osg::StateSet & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::StateSet(arg1, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return StateSet::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return StateSet::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateSet::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateSet::getUserData();
	};

	// osg::Object * osg::StateSet::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return StateSet::cloneType();
	};

	// osg::Object * osg::StateSet::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return StateSet::clone(arg1);
	};

	// bool osg::StateSet::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return StateSet::isSameKindAs(obj);
	};

	// const char * osg::StateSet::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return StateSet::libraryName();
	};

	// const char * osg::StateSet::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return StateSet::className();
	};

	// void osg::StateSet::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return StateSet::computeDataVariance();
	};

	// void osg::StateSet::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return StateSet::releaseGLObjects(state);
	};




// void osg::StateSet::addParent(osg::Object * object)
void public_addParent(osg::Object * object) {
	return osg::StateSet::addParent(object);
};

// void osg::StateSet::removeParent(osg::Object * object)
void public_removeParent(osg::Object * object) {
	return osg::StateSet::removeParent(object);
};

// osg::StateSet::ModeList & osg::StateSet::getOrCreateTextureModeList(unsigned int unit)
osg::StateSet::ModeList & public_getOrCreateTextureModeList(unsigned int unit) {
	return osg::StateSet::getOrCreateTextureModeList(unit);
};

// osg::StateSet::AttributeList & osg::StateSet::getOrCreateTextureAttributeList(unsigned int unit)
osg::StateSet::AttributeList & public_getOrCreateTextureAttributeList(unsigned int unit) {
	return osg::StateSet::getOrCreateTextureAttributeList(unit);
};

// int osg::StateSet::compareModes(const osg::StateSet::ModeList & lhs, const osg::StateSet::ModeList & rhs)
int public_compareModes(const osg::StateSet::ModeList & lhs, const osg::StateSet::ModeList & rhs) {
	return osg::StateSet::compareModes(lhs, rhs);
};

// int osg::StateSet::compareAttributePtrs(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs)
int public_compareAttributePtrs(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs) {
	return osg::StateSet::compareAttributePtrs(lhs, rhs);
};

// int osg::StateSet::compareAttributeContents(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs)
int public_compareAttributeContents(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs) {
	return osg::StateSet::compareAttributeContents(lhs, rhs);
};

// void osg::StateSet::setMode(osg::StateSet::ModeList & modeList, unsigned int mode, unsigned int value)
void public_setMode(osg::StateSet::ModeList & modeList, unsigned int mode, unsigned int value) {
	return osg::StateSet::setMode(modeList, mode, value);
};

// void osg::StateSet::setModeToInherit(osg::StateSet::ModeList & modeList, unsigned int mode)
void public_setModeToInherit(osg::StateSet::ModeList & modeList, unsigned int mode) {
	return osg::StateSet::setModeToInherit(modeList, mode);
};

// unsigned int osg::StateSet::getMode(const osg::StateSet::ModeList & modeList, unsigned int mode) const
unsigned int public_getMode(const osg::StateSet::ModeList & modeList, unsigned int mode) const {
	return osg::StateSet::getMode(modeList, mode);
};

// void osg::StateSet::setAttribute(osg::StateSet::AttributeList & attributeList, osg::StateAttribute * attribute, const unsigned int value = osg::StateAttribute::OFF)
void public_setAttribute(osg::StateSet::AttributeList & attributeList, osg::StateAttribute * attribute, const unsigned int value = osg::StateAttribute::OFF) {
	return osg::StateSet::setAttribute(attributeList, attribute, value);
};

// osg::StateAttribute * osg::StateSet::getAttribute(osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member)
osg::StateAttribute * public_getAttribute(osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) {
	return osg::StateSet::getAttribute(attributeList, type, member);
};

// const osg::StateAttribute * osg::StateSet::getAttribute(const osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) const
const osg::StateAttribute * public_getAttribute(const osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) const {
	return osg::StateSet::getAttribute(attributeList, type, member);
};

// const osg::StateSet::RefAttributePair * osg::StateSet::getAttributePair(const osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) const
const osg::StateSet::RefAttributePair * public_getAttributePair(const osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) const {
	return osg::StateSet::getAttributePair(attributeList, type, member);
};

// void osg::StateSet::setNumChildrenRequiringUpdateTraversal(unsigned int num)
void public_setNumChildrenRequiringUpdateTraversal(unsigned int num) {
	return osg::StateSet::setNumChildrenRequiringUpdateTraversal(num);
};

// void osg::StateSet::setNumChildrenRequiringEventTraversal(unsigned int num)
void public_setNumChildrenRequiringEventTraversal(unsigned int num) {
	return osg::StateSet::setNumChildrenRequiringEventTraversal(num);
};

// osg::StateSet & osg::StateSet::operator=(const osg::StateSet & arg1)
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

