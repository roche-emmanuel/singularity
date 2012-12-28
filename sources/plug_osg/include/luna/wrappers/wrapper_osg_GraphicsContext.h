#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsContext>

class wrapper_osg_GraphicsContext : public osg::GraphicsContext, public luna_wrapper_base {

public:
		

	~wrapper_osg_GraphicsContext() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_GraphicsContext(lua_State* L, lua_Table* dum) : osg::GraphicsContext(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_GraphicsContext(lua_State* L, lua_Table* dum, const osg::GraphicsContext & arg1, const osg::CopyOp & arg2) : osg::GraphicsContext(arg1, arg2), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// osg::Object * osg::GraphicsContext::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return GraphicsContext::cloneType();
	};

	// osg::Object * osg::GraphicsContext::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return GraphicsContext::clone(arg1);
	};

public:
	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return GraphicsContext::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsContext::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return GraphicsContext::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return GraphicsContext::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return GraphicsContext::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsContext::releaseGLObjects(arg1);
	};

	// bool osg::GraphicsContext::valid() const
	bool valid() const {
		THROW_IF(!_obj.pushFunction("valid"),"No implementation for abstract function osg::GraphicsContext::valid");
		return (_obj.callFunction<bool>());
	};

	// void osg::GraphicsContext::clear()
	void clear() {
		if(_obj.pushFunction("clear")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsContext::clear();
	};

	// bool osg::GraphicsContext::realizeImplementation()
	bool realizeImplementation() {
		THROW_IF(!_obj.pushFunction("realizeImplementation"),"No implementation for abstract function osg::GraphicsContext::realizeImplementation");
		return (_obj.callFunction<bool>());
	};

	// bool osg::GraphicsContext::isRealizedImplementation() const
	bool isRealizedImplementation() const {
		THROW_IF(!_obj.pushFunction("isRealizedImplementation"),"No implementation for abstract function osg::GraphicsContext::isRealizedImplementation");
		return (_obj.callFunction<bool>());
	};

	// void osg::GraphicsContext::closeImplementation()
	void closeImplementation() {
		THROW_IF(!_obj.pushFunction("closeImplementation"),"No implementation for abstract function osg::GraphicsContext::closeImplementation");
		return (_obj.callFunction<void>());
	};

	// bool osg::GraphicsContext::makeCurrentImplementation()
	bool makeCurrentImplementation() {
		THROW_IF(!_obj.pushFunction("makeCurrentImplementation"),"No implementation for abstract function osg::GraphicsContext::makeCurrentImplementation");
		return (_obj.callFunction<bool>());
	};

	// bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)
	bool makeContextCurrentImplementation(osg::GraphicsContext * readContext) {
		THROW_IF(!_obj.pushFunction("makeContextCurrentImplementation"),"No implementation for abstract function osg::GraphicsContext::makeContextCurrentImplementation");
		_obj.pushArg(readContext);
		return (_obj.callFunction<bool>());
	};

	// bool osg::GraphicsContext::releaseContextImplementation()
	bool releaseContextImplementation() {
		THROW_IF(!_obj.pushFunction("releaseContextImplementation"),"No implementation for abstract function osg::GraphicsContext::releaseContextImplementation");
		return (_obj.callFunction<bool>());
	};

	// void osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int buffer)
	void bindPBufferToTextureImplementation(unsigned int buffer) {
		THROW_IF(!_obj.pushFunction("bindPBufferToTextureImplementation"),"No implementation for abstract function osg::GraphicsContext::bindPBufferToTextureImplementation");
		_obj.pushArg(buffer);
		return (_obj.callFunction<void>());
	};

	// void osg::GraphicsContext::swapBuffersImplementation()
	void swapBuffersImplementation() {
		THROW_IF(!_obj.pushFunction("swapBuffersImplementation"),"No implementation for abstract function osg::GraphicsContext::swapBuffersImplementation");
		return (_obj.callFunction<void>());
	};

	// void osg::GraphicsContext::resizedImplementation(int x, int y, int width, int height)
	void resizedImplementation(int x, int y, int width, int height) {
		if(_obj.pushFunction("resizedImplementation")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<void>());
		}

		return GraphicsContext::resizedImplementation(x, y, width, height);
	};

	// bool osg::GraphicsContext::isSameKindAs(const osg::Object * object) const
	bool isSameKindAs(const osg::Object * object) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(object);
			return (_obj.callFunction<bool>());
		}

		return GraphicsContext::isSameKindAs(object);
	};

	// const char * osg::GraphicsContext::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return GraphicsContext::libraryName();
	};

	// const char * osg::GraphicsContext::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return GraphicsContext::className();
	};


	// Protected non-virtual methods:
	// void osg::GraphicsContext::addCamera(osg::Camera * camera)
	void public_addCamera(osg::Camera * camera) {
		return osg::GraphicsContext::addCamera(camera);
	};

	// void osg::GraphicsContext::removeCamera(osg::Camera * camera)
	void public_removeCamera(osg::Camera * camera) {
		return osg::GraphicsContext::removeCamera(camera);
	};

	// static void osg::GraphicsContext::registerGraphicsContext(osg::GraphicsContext * gc)
	static void public_registerGraphicsContext(osg::GraphicsContext * gc) {
		return osg::GraphicsContext::registerGraphicsContext(gc);
	};

	// static void osg::GraphicsContext::unregisterGraphicsContext(osg::GraphicsContext * gc)
	static void public_unregisterGraphicsContext(osg::GraphicsContext * gc) {
		return osg::GraphicsContext::unregisterGraphicsContext(gc);
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
	inline static bool _lg_typecheck_public_addCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_registerGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_unregisterGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
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
	// void osg::GraphicsContext::public_addCamera(osg::Camera * camera)
	static int _bind_public_addCamera(lua_State *L) {
		if (!_lg_typecheck_public_addCamera(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::public_addCamera(osg::Camera * camera) function, expected prototype:\nvoid osg::GraphicsContext::public_addCamera(osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		wrapper_osg_GraphicsContext* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_GraphicsContext >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::public_addCamera(osg::Camera *)");
		}
		self->public_addCamera(camera);

		return 0;
	}

	// void osg::GraphicsContext::public_removeCamera(osg::Camera * camera)
	static int _bind_public_removeCamera(lua_State *L) {
		if (!_lg_typecheck_public_removeCamera(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::public_removeCamera(osg::Camera * camera) function, expected prototype:\nvoid osg::GraphicsContext::public_removeCamera(osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		wrapper_osg_GraphicsContext* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_GraphicsContext >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::public_removeCamera(osg::Camera *)");
		}
		self->public_removeCamera(camera);

		return 0;
	}

	// static void osg::GraphicsContext::public_registerGraphicsContext(osg::GraphicsContext * gc)
	static int _bind_public_registerGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_public_registerGraphicsContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::public_registerGraphicsContext(osg::GraphicsContext * gc) function, expected prototype:\nstatic void osg::GraphicsContext::public_registerGraphicsContext(osg::GraphicsContext * gc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* gc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1));

		wrapper_osg_GraphicsContext* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_GraphicsContext >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void osg::GraphicsContext::public_registerGraphicsContext(osg::GraphicsContext *)");
		}
		self->public_registerGraphicsContext(gc);

		return 0;
	}

	// static void osg::GraphicsContext::public_unregisterGraphicsContext(osg::GraphicsContext * gc)
	static int _bind_public_unregisterGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_public_unregisterGraphicsContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::public_unregisterGraphicsContext(osg::GraphicsContext * gc) function, expected prototype:\nstatic void osg::GraphicsContext::public_unregisterGraphicsContext(osg::GraphicsContext * gc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* gc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1));

		wrapper_osg_GraphicsContext* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_GraphicsContext >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void osg::GraphicsContext::public_unregisterGraphicsContext(osg::GraphicsContext *)");
		}
		self->public_unregisterGraphicsContext(gc);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_GraphicsContext* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_GraphicsContext >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const");
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


		wrapper_osg_GraphicsContext* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_GraphicsContext >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_addCamera",_bind_public_addCamera},
		{"protected_removeCamera",_bind_public_removeCamera},
		{"protected_registerGraphicsContext",_bind_public_registerGraphicsContext},
		{"protected_unregisterGraphicsContext",_bind_public_unregisterGraphicsContext},
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

