#ifndef _WRAPPERS_WRAPPER_SGT_ANYVECTOR_H_
#define _WRAPPERS_WRAPPER_SGT_ANYVECTOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"



class wrapper_sgt_AnyVector : public sgt::AnyVector, public luna_wrapper_base {

public:
		

	~wrapper_sgt_AnyVector() {
		logDEBUG3("Calling delete function for wrapper sgt_AnyVector");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::AnyVector*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_AnyVector(lua_State* L, lua_Table* dum) 
		: sgt::AnyVector(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::AnyVector*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((sgt::AnyVector*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return AnyVector::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((sgt::AnyVector*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return AnyVector::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((sgt::AnyVector*)this);
			return (_obj.callFunction<void>());
		}

		return AnyVector::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((sgt::AnyVector*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return AnyVector::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((sgt::AnyVector*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AnyVector::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((sgt::AnyVector*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AnyVector::getUserData();
	};

	// void osg::Object::resizeGLObjectBuffers(unsigned int arg1)
	void resizeGLObjectBuffers(unsigned int arg1) {
		if(_obj.pushFunction("resizeGLObjectBuffers")) {
			_obj.pushArg((sgt::AnyVector*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AnyVector::resizeGLObjectBuffers(arg1);
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((sgt::AnyVector*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AnyVector::releaseGLObjects(arg1);
	};

	// osg::Object * sgt::Object::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((sgt::AnyVector*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return AnyVector::cloneType();
	};

	// osg::Object * sgt::Object::clone() const
	osg::Object * clone() const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((sgt::AnyVector*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return AnyVector::clone();
	};

	// osg::Object * sgt::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((sgt::AnyVector*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return AnyVector::clone(arg1);
	};

	// bool sgt::Object::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((sgt::AnyVector*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return AnyVector::isSameKindAs(obj);
	};

	// const char * sgt::Object::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((sgt::AnyVector*)this);
			return (_obj.callFunction<const char*>());
		}

		return AnyVector::libraryName();
	};

	// const char * sgt::Object::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((sgt::AnyVector*)this);
			return (_obj.callFunction<const char*>());
		}

		return AnyVector::className();
	};


	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
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
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_sgt_AnyVector* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_AnyVector >(L,1);
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


		wrapper_sgt_AnyVector* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
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

