#ifndef _WRAPPERS_WRAPPER_OSG_DEFAULTUSERDATACONTAINER_H_
#define _WRAPPERS_WRAPPER_OSG_DEFAULTUSERDATACONTAINER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/UserDataContainer>

class wrapper_osg_DefaultUserDataContainer : public osg::DefaultUserDataContainer, public luna_wrapper_base {

public:
	

	wrapper_osg_DefaultUserDataContainer(lua_State* L, lua_Table* dum) : osg::DefaultUserDataContainer(), luna_wrapper_base(L) {};
	wrapper_osg_DefaultUserDataContainer(lua_State* L, lua_Table* dum, const osg::DefaultUserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::DefaultUserDataContainer(udc, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::computeDataVariance();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::releaseGLObjects(arg1);
	};

	// osg::Object * osg::DefaultUserDataContainer::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return DefaultUserDataContainer::cloneType();
	};

	// osg::Object * osg::DefaultUserDataContainer::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return DefaultUserDataContainer::clone(arg1);
	};

	// bool osg::DefaultUserDataContainer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DefaultUserDataContainer::isSameKindAs(obj);
	};

	// const char * osg::DefaultUserDataContainer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return DefaultUserDataContainer::libraryName();
	};

	// const char * osg::DefaultUserDataContainer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return DefaultUserDataContainer::className();
	};

	// void osg::DefaultUserDataContainer::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::setUserData(obj);
	};

	// osg::Referenced * osg::DefaultUserDataContainer::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DefaultUserDataContainer::getUserData();
	};

	// const osg::Referenced * osg::DefaultUserDataContainer::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DefaultUserDataContainer::getUserData();
	};

	// unsigned int osg::DefaultUserDataContainer::addUserObject(osg::Object * obj)
	unsigned int addUserObject(osg::Object * obj) {
		if(_obj.pushFunction("addUserObject")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<unsigned int>());
		}

		return DefaultUserDataContainer::addUserObject(obj);
	};

	// void osg::DefaultUserDataContainer::setUserObject(unsigned int i, osg::Object * obj)
	void setUserObject(unsigned int i, osg::Object * obj) {
		if(_obj.pushFunction("setUserObject")) {
			_obj.pushArg(i);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::setUserObject(i, obj);
	};

	// void osg::DefaultUserDataContainer::removeUserObject(unsigned int i)
	void removeUserObject(unsigned int i) {
		if(_obj.pushFunction("removeUserObject")) {
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::removeUserObject(i);
	};

	// osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i)
	osg::Object * getUserObject(unsigned int i) {
		if(_obj.pushFunction("getUserObject")) {
			_obj.pushArg(i);
			return (_obj.callFunction<osg::Object*>());
		}

		return DefaultUserDataContainer::getUserObject(i);
	};

	// const osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i) const
	const osg::Object * getUserObject(unsigned int i) const {
		if(_obj.pushFunction("getUserObject")) {
			_obj.pushArg(i);
			return (_obj.callFunction<osg::Object*>());
		}

		return DefaultUserDataContainer::getUserObject(i);
	};

	// unsigned int osg::DefaultUserDataContainer::getNumUserObjects() const
	unsigned int getNumUserObjects() const {
		if(_obj.pushFunction("getNumUserObjects")) {
			return (_obj.callFunction<unsigned int>());
		}

		return DefaultUserDataContainer::getNumUserObjects();
	};

	// unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const
	unsigned int getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const {
		if(_obj.pushFunction("getUserObjectIndex")) {
			_obj.pushArg(obj);
			_obj.pushArg(startPos);
			return (_obj.callFunction<unsigned int>());
		}

		return DefaultUserDataContainer::getUserObjectIndex(obj, startPos);
	};

	// unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const
	unsigned int getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const {
		if(_obj.pushFunction("getUserObjectIndex")) {
			_obj.pushArg(name);
			_obj.pushArg(startPos);
			return (_obj.callFunction<unsigned int>());
		}

		return DefaultUserDataContainer::getUserObjectIndex(name, startPos);
	};

	// void osg::DefaultUserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)
	void setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions) {
		if(_obj.pushFunction("setDescriptions")) {
			_obj.pushArg(&descriptions);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::setDescriptions(descriptions);
	};

	// osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions()
	osg::UserDataContainer::DescriptionList & getDescriptions() {
		if(_obj.pushFunction("getDescriptions")) {
			return *(_obj.callFunction<osg::UserDataContainer::DescriptionList*>());
		}

		return DefaultUserDataContainer::getDescriptions();
	};

	// const osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() const
	const osg::UserDataContainer::DescriptionList & getDescriptions() const {
		if(_obj.pushFunction("getDescriptions")) {
			return *(_obj.callFunction<osg::UserDataContainer::DescriptionList*>());
		}

		return DefaultUserDataContainer::getDescriptions();
	};

	// unsigned int osg::DefaultUserDataContainer::getNumDescriptions() const
	unsigned int getNumDescriptions() const {
		if(_obj.pushFunction("getNumDescriptions")) {
			return (_obj.callFunction<unsigned int>());
		}

		return DefaultUserDataContainer::getNumDescriptions();
	};

	// void osg::DefaultUserDataContainer::addDescription(const std::string & desc)
	void addDescription(const std::string & desc) {
		if(_obj.pushFunction("addDescription")) {
			_obj.pushArg(desc);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::addDescription(desc);
	};




};




#endif

