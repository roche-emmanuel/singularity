#ifndef _WRAPPERS_WRAPPER_OSG_USERDATACONTAINER_H_
#define _WRAPPERS_WRAPPER_OSG_USERDATACONTAINER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/UserDataContainer>

class wrapper_osg_UserDataContainer : public osg::UserDataContainer, public luna_wrapper_base {

public:
		

	~wrapper_osg_UserDataContainer() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_UserDataContainer(lua_State* L, lua_Table* dum) : osg::UserDataContainer(), luna_wrapper_base(L) {};
	wrapper_osg_UserDataContainer(lua_State* L, lua_Table* dum, const osg::UserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::UserDataContainer(udc, copyop), luna_wrapper_base(L) {};

	// osg::Object * osg::Object::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Object::cloneType");
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Object::clone");
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return UserDataContainer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return UserDataContainer::computeDataVariance();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return UserDataContainer::releaseGLObjects(arg1);
	};

	// bool osg::UserDataContainer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return UserDataContainer::isSameKindAs(obj);
	};

	// const char * osg::UserDataContainer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return UserDataContainer::libraryName();
	};

	// const char * osg::UserDataContainer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return UserDataContainer::className();
	};

	// void osg::UserDataContainer::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		THROW_IF(!_obj.pushFunction("setUserData"),"No implementation for abstract function osg::UserDataContainer::setUserData");
		_obj.pushArg(obj);
		return (_obj.callFunction<void>());
	};

	// osg::Referenced * osg::UserDataContainer::getUserData()
	osg::Referenced * getUserData() {
		THROW_IF(!_obj.pushFunction("getUserData"),"No implementation for abstract function osg::UserDataContainer::getUserData");
		return (_obj.callFunction<osg::Referenced*>());
	};

	// const osg::Referenced * osg::UserDataContainer::getUserData() const
	const osg::Referenced * getUserData() const {
		THROW_IF(!_obj.pushFunction("getUserData"),"No implementation for abstract function osg::UserDataContainer::getUserData");
		return (_obj.callFunction<osg::Referenced*>());
	};

	// unsigned int osg::UserDataContainer::addUserObject(osg::Object * obj)
	unsigned int addUserObject(osg::Object * obj) {
		THROW_IF(!_obj.pushFunction("addUserObject"),"No implementation for abstract function osg::UserDataContainer::addUserObject");
		_obj.pushArg(obj);
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::UserDataContainer::setUserObject(unsigned int i, osg::Object * obj)
	void setUserObject(unsigned int i, osg::Object * obj) {
		THROW_IF(!_obj.pushFunction("setUserObject"),"No implementation for abstract function osg::UserDataContainer::setUserObject");
		_obj.pushArg(i);
		_obj.pushArg(obj);
		return (_obj.callFunction<void>());
	};

	// void osg::UserDataContainer::removeUserObject(unsigned int i)
	void removeUserObject(unsigned int i) {
		THROW_IF(!_obj.pushFunction("removeUserObject"),"No implementation for abstract function osg::UserDataContainer::removeUserObject");
		_obj.pushArg(i);
		return (_obj.callFunction<void>());
	};

	// osg::Object * osg::UserDataContainer::getUserObject(unsigned int i)
	osg::Object * getUserObject(unsigned int i) {
		THROW_IF(!_obj.pushFunction("getUserObject"),"No implementation for abstract function osg::UserDataContainer::getUserObject");
		_obj.pushArg(i);
		return (_obj.callFunction<osg::Object*>());
	};

	// const osg::Object * osg::UserDataContainer::getUserObject(unsigned int i) const
	const osg::Object * getUserObject(unsigned int i) const {
		THROW_IF(!_obj.pushFunction("getUserObject"),"No implementation for abstract function osg::UserDataContainer::getUserObject");
		_obj.pushArg(i);
		return (_obj.callFunction<osg::Object*>());
	};

	// unsigned int osg::UserDataContainer::getNumUserObjects() const
	unsigned int getNumUserObjects() const {
		THROW_IF(!_obj.pushFunction("getNumUserObjects"),"No implementation for abstract function osg::UserDataContainer::getNumUserObjects");
		return (_obj.callFunction<unsigned int>());
	};

	// unsigned int osg::UserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const
	unsigned int getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const {
		THROW_IF(!_obj.pushFunction("getUserObjectIndex"),"No implementation for abstract function osg::UserDataContainer::getUserObjectIndex");
		_obj.pushArg(obj);
		_obj.pushArg(startPos);
		return (_obj.callFunction<unsigned int>());
	};

	// unsigned int osg::UserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const
	unsigned int getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const {
		THROW_IF(!_obj.pushFunction("getUserObjectIndex"),"No implementation for abstract function osg::UserDataContainer::getUserObjectIndex");
		_obj.pushArg(name);
		_obj.pushArg(startPos);
		return (_obj.callFunction<unsigned int>());
	};

	// osg::Object * osg::UserDataContainer::getUserObject(const std::string & name, unsigned int startPos = 0)
	osg::Object * getUserObject(const std::string & name, unsigned int startPos = 0) {
		if(_obj.pushFunction("getUserObject")) {
			_obj.pushArg(name);
			_obj.pushArg(startPos);
			return (_obj.callFunction<osg::Object*>());
		}

		return UserDataContainer::getUserObject(name, startPos);
	};

	// const osg::Object * osg::UserDataContainer::getUserObject(const std::string & name, unsigned int startPos = 0) const
	const osg::Object * getUserObject(const std::string & name, unsigned int startPos = 0) const {
		if(_obj.pushFunction("getUserObject")) {
			_obj.pushArg(name);
			_obj.pushArg(startPos);
			return (_obj.callFunction<osg::Object*>());
		}

		return UserDataContainer::getUserObject(name, startPos);
	};

	// void osg::UserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)
	void setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions) {
		THROW_IF(!_obj.pushFunction("setDescriptions"),"No implementation for abstract function osg::UserDataContainer::setDescriptions");
		_obj.pushArg(&descriptions);
		return (_obj.callFunction<void>());
	};

	// osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions()
	osg::UserDataContainer::DescriptionList & getDescriptions() {
		THROW_IF(!_obj.pushFunction("getDescriptions"),"No implementation for abstract function osg::UserDataContainer::getDescriptions");
		return *(_obj.callFunction<osg::UserDataContainer::DescriptionList*>());
	};

	// const osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions() const
	const osg::UserDataContainer::DescriptionList & getDescriptions() const {
		THROW_IF(!_obj.pushFunction("getDescriptions"),"No implementation for abstract function osg::UserDataContainer::getDescriptions");
		return *(_obj.callFunction<osg::UserDataContainer::DescriptionList*>());
	};

	// unsigned int osg::UserDataContainer::getNumDescriptions() const
	unsigned int getNumDescriptions() const {
		THROW_IF(!_obj.pushFunction("getNumDescriptions"),"No implementation for abstract function osg::UserDataContainer::getNumDescriptions");
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::UserDataContainer::addDescription(const std::string & desc)
	void addDescription(const std::string & desc) {
		THROW_IF(!_obj.pushFunction("addDescription"),"No implementation for abstract function osg::UserDataContainer::addDescription");
		_obj.pushArg(desc);
		return (_obj.callFunction<void>());
	};




};




#endif

