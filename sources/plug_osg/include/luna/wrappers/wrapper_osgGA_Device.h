#ifndef _WRAPPERS_WRAPPER_OSGGA_DEVICE_H_
#define _WRAPPERS_WRAPPER_OSGGA_DEVICE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/Device>

class wrapper_osgGA_Device : public osgGA::Device, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_Device() {
		logDEBUG3("Calling delete function for wrapper osgGA_Device");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgGA::Device*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_Device(lua_State* L, lua_Table* dum) 
		: osgGA::Device(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::Device*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgGA_Device(lua_State* L, lua_Table* dum, const osgGA::Device & es, const osg::CopyOp & copyop) 
		: osgGA::Device(es, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::Device*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgGA::Device*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Device::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgGA::Device*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Device::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgGA::Device*)this);
			return (_obj.callFunction<void>());
		}

		return Device::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgGA::Device*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Device::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::Device*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Device::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::Device*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Device::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgGA::Device*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Device::releaseGLObjects(arg1);
	};

	// osg::Object * osgGA::Device::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgGA::Device*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return Device::cloneType();
	};

	// osg::Object * osgGA::Device::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgGA::Device*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Device::clone(arg1);
	};

	// bool osgGA::Device::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgGA::Device*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Device::isSameKindAs(obj);
	};

	// const char * osgGA::Device::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgGA::Device*)this);
			return (_obj.callFunction<const char*>());
		}

		return Device::libraryName();
	};

	// const char * osgGA::Device::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgGA::Device*)this);
			return (_obj.callFunction<const char*>());
		}

		return Device::className();
	};

	// void osgGA::Device::checkEvents()
	void checkEvents() {
		if(_obj.pushFunction("checkEvents")) {
			_obj.pushArg((osgGA::Device*)this);
			return (_obj.callFunction<void>());
		}

		return Device::checkEvents();
	};

	// void osgGA::Device::sendEvent(const osgGA::GUIEventAdapter & ea)
	void sendEvent(const osgGA::GUIEventAdapter & ea) {
		if(_obj.pushFunction("sendEvent")) {
			_obj.pushArg((osgGA::Device*)this);
			_obj.pushArg(&ea);
			return (_obj.callFunction<void>());
		}

		return Device::sendEvent(ea);
	};

	// void osgGA::Device::sendEvents(const osgGA::EventQueue::Events & events)
	void sendEvents(const osgGA::EventQueue::Events & events) {
		if(_obj.pushFunction("sendEvents")) {
			_obj.pushArg((osgGA::Device*)this);
			_obj.pushArg(&events);
			return (_obj.callFunction<void>());
		}

		return Device::sendEvents(events);
	};


	// Protected non-virtual methods:
	// void osgGA::Device::setCapabilities(int capabilities)
	void public_setCapabilities(int capabilities) {
		return osgGA::Device::setCapabilities(capabilities);
	};

	// osgGA::Device & osgGA::Device::operator=(const osgGA::Device & arg1)
	osgGA::Device & public_op_assign(const osgGA::Device & arg1) {
		return osgGA::Device::operator=(arg1);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_setCapabilities(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osgGA::Device::public_setCapabilities(int capabilities)
	static int _bind_public_setCapabilities(lua_State *L) {
		if (!_lg_typecheck_public_setCapabilities(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::Device::public_setCapabilities(int capabilities) function, expected prototype:\nvoid osgGA::Device::public_setCapabilities(int capabilities)\nClass arguments details:\n");
		}

		int capabilities=(int)lua_tointeger(L,2);

		wrapper_osgGA_Device* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_Device >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::Device::public_setCapabilities(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_setCapabilities(capabilities);

		return 0;
	}

	// osgGA::Device & osgGA::Device::public_op_assign(const osgGA::Device & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::Device & osgGA::Device::public_op_assign(const osgGA::Device & arg1) function, expected prototype:\nosgGA::Device & osgGA::Device::public_op_assign(const osgGA::Device & arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgGA::Device* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::Device::public_op_assign function");
		}
		const osgGA::Device & _arg1=*_arg1_ptr;

		wrapper_osgGA_Device* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_Device >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::Device & osgGA::Device::public_op_assign(const osgGA::Device &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgGA::Device* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::Device >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgGA_Device* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_Device >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n");
		}


		wrapper_osgGA_Device* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_Device >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"setCapabilities",_bind_public_setCapabilities},
		{"op_assign",_bind_public_op_assign},
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif
