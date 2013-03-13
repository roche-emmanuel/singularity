#ifndef _WRAPPERS_WRAPPER_SGT_MODULEPROVIDER_H_
#define _WRAPPERS_WRAPPER_SGT_MODULEPROVIDER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <lua/ModuleProvider.h>

class wrapper_sgt_ModuleProvider : public sgt::ModuleProvider, public luna_wrapper_base {

public:
		

	~wrapper_sgt_ModuleProvider() {
		logDEBUG3("Calling delete function for wrapper sgt_ModuleProvider");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::ModuleProvider*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_ModuleProvider(lua_State* L, lua_Table* dum) 
		: sgt::ModuleProvider(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_sgt_ModuleProvider(lua_State* L, lua_Table* dum, const sgt::ModuleProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY) 
		: sgt::ModuleProvider(tm, co), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return ModuleProvider::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ModuleProvider::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			return (_obj.callFunction<void>());
		}

		return ModuleProvider::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ModuleProvider::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ModuleProvider::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ModuleProvider::getUserData();
	};

	// void osg::Object::resizeGLObjectBuffers(unsigned int arg1)
	void resizeGLObjectBuffers(unsigned int arg1) {
		if(_obj.pushFunction("resizeGLObjectBuffers")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ModuleProvider::resizeGLObjectBuffers(arg1);
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ModuleProvider::releaseGLObjects(arg1);
	};

	// osg::Object * sgt::ModuleProvider::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return ModuleProvider::cloneType();
	};

	// osg::Object * sgt::ModuleProvider::clone() const
	osg::Object * clone() const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return ModuleProvider::clone();
	};

	// osg::Object * sgt::ModuleProvider::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ModuleProvider::clone(arg1);
	};

	// bool sgt::ModuleProvider::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ModuleProvider::isSameKindAs(obj);
	};

	// const char * sgt::ModuleProvider::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			return (_obj.callFunction<const char*>());
		}

		return ModuleProvider::libraryName();
	};

	// const char * sgt::ModuleProvider::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((sgt::ModuleProvider*)this);
			return (_obj.callFunction<const char*>());
		}

		return ModuleProvider::className();
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

		wrapper_sgt_ModuleProvider* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_ModuleProvider >(L,1);
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


		wrapper_sgt_ModuleProvider* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_ModuleProvider >(L,1);
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
