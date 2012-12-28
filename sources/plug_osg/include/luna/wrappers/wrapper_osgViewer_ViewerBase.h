#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_VIEWERBASE_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_VIEWERBASE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/ViewerBase>

class wrapper_osgViewer_ViewerBase : public osgViewer::ViewerBase, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_ViewerBase() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_ViewerBase(lua_State* L, lua_Table* dum) : osgViewer::ViewerBase(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgViewer_ViewerBase(lua_State* L, lua_Table* dum, const osgViewer::ViewerBase & vb) : osgViewer::ViewerBase(vb), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void osgViewer::ViewerBase::viewerInit()
	void viewerInit() {
		THROW_IF(!_obj.pushFunction("viewerInit"),"No implementation for abstract function osgViewer::ViewerBase::viewerInit");
		return (_obj.callFunction<void>());
	};

public:
	// Public virtual methods:
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

	// bool osg::Object::isSameKindAs(const osg::Object * arg1) const
	bool isSameKindAs(const osg::Object * arg1) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return ViewerBase::isSameKindAs(arg1);
	};

	// const char * osg::Object::libraryName() const
	const char * libraryName() const {
		THROW_IF(!_obj.pushFunction("libraryName"),"No implementation for abstract function osg::Object::libraryName");
		return (_obj.callFunction<const char*>());
	};

	// const char * osg::Object::className() const
	const char * className() const {
		THROW_IF(!_obj.pushFunction("className"),"No implementation for abstract function osg::Object::className");
		return (_obj.callFunction<const char*>());
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ViewerBase::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ViewerBase::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ViewerBase::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ViewerBase::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ViewerBase::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ViewerBase::releaseGLObjects(arg1);
	};

	// void osgViewer::ViewerBase::setViewerStats(osg::Stats * stats)
	void setViewerStats(osg::Stats * stats) {
		THROW_IF(!_obj.pushFunction("setViewerStats"),"No implementation for abstract function osgViewer::ViewerBase::setViewerStats");
		_obj.pushArg(stats);
		return (_obj.callFunction<void>());
	};

	// osg::Stats * osgViewer::ViewerBase::getViewerStats()
	osg::Stats * getViewerStats() {
		THROW_IF(!_obj.pushFunction("getViewerStats"),"No implementation for abstract function osgViewer::ViewerBase::getViewerStats");
		return (_obj.callFunction<osg::Stats*>());
	};

	// const osg::Stats * osgViewer::ViewerBase::getViewerStats() const
	const osg::Stats * getViewerStats() const {
		THROW_IF(!_obj.pushFunction("getViewerStats"),"No implementation for abstract function osgViewer::ViewerBase::getViewerStats");
		return (_obj.callFunction<osg::Stats*>());
	};

	// bool osgViewer::ViewerBase::readConfiguration(const std::string & filename)
	bool readConfiguration(const std::string & filename) {
		THROW_IF(!_obj.pushFunction("readConfiguration"),"No implementation for abstract function osgViewer::ViewerBase::readConfiguration");
		_obj.pushArg(filename);
		return (_obj.callFunction<bool>());
	};

	// bool osgViewer::ViewerBase::isRealized() const
	bool isRealized() const {
		THROW_IF(!_obj.pushFunction("isRealized"),"No implementation for abstract function osgViewer::ViewerBase::isRealized");
		return (_obj.callFunction<bool>());
	};

	// void osgViewer::ViewerBase::realize()
	void realize() {
		THROW_IF(!_obj.pushFunction("realize"),"No implementation for abstract function osgViewer::ViewerBase::realize");
		return (_obj.callFunction<void>());
	};

	// int osgViewer::ViewerBase::run()
	int run() {
		if(_obj.pushFunction("run")) {
			return (_obj.callFunction<int>());
		}

		return ViewerBase::run();
	};

	// bool osgViewer::ViewerBase::checkNeedToDoFrame()
	bool checkNeedToDoFrame() {
		THROW_IF(!_obj.pushFunction("checkNeedToDoFrame"),"No implementation for abstract function osgViewer::ViewerBase::checkNeedToDoFrame");
		return (_obj.callFunction<bool>());
	};

	// void osgViewer::ViewerBase::frame(double simulationTime = DBL_MAX)
	void frame(double simulationTime = DBL_MAX) {
		if(_obj.pushFunction("frame")) {
			_obj.pushArg(simulationTime);
			return (_obj.callFunction<void>());
		}

		return ViewerBase::frame(simulationTime);
	};

	// void osgViewer::ViewerBase::advance(double simulationTime = DBL_MAX)
	void advance(double simulationTime = DBL_MAX) {
		THROW_IF(!_obj.pushFunction("advance"),"No implementation for abstract function osgViewer::ViewerBase::advance");
		_obj.pushArg(simulationTime);
		return (_obj.callFunction<void>());
	};

	// void osgViewer::ViewerBase::eventTraversal()
	void eventTraversal() {
		THROW_IF(!_obj.pushFunction("eventTraversal"),"No implementation for abstract function osgViewer::ViewerBase::eventTraversal");
		return (_obj.callFunction<void>());
	};

	// void osgViewer::ViewerBase::updateTraversal()
	void updateTraversal() {
		THROW_IF(!_obj.pushFunction("updateTraversal"),"No implementation for abstract function osgViewer::ViewerBase::updateTraversal");
		return (_obj.callFunction<void>());
	};

	// void osgViewer::ViewerBase::renderingTraversals()
	void renderingTraversals() {
		if(_obj.pushFunction("renderingTraversals")) {
			return (_obj.callFunction<void>());
		}

		return ViewerBase::renderingTraversals();
	};

	// void osgViewer::ViewerBase::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)
	void getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true) {
		THROW_IF(!_obj.pushFunction("getCameras"),"No implementation for abstract function osgViewer::ViewerBase::getCameras");
		_obj.pushArg(&cameras);
		_obj.pushArg(onlyActive);
		return (_obj.callFunction<void>());
	};

	// void osgViewer::ViewerBase::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)
	void getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true) {
		THROW_IF(!_obj.pushFunction("getContexts"),"No implementation for abstract function osgViewer::ViewerBase::getContexts");
		_obj.pushArg(&contexts);
		_obj.pushArg(onlyValid);
		return (_obj.callFunction<void>());
	};

	// void osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)
	void getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true) {
		if(_obj.pushFunction("getWindows")) {
			_obj.pushArg(&windows);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return ViewerBase::getWindows(windows, onlyValid);
	};

	// void osgViewer::ViewerBase::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)
	void getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true) {
		THROW_IF(!_obj.pushFunction("getScenes"),"No implementation for abstract function osgViewer::ViewerBase::getScenes");
		_obj.pushArg(&scenes);
		_obj.pushArg(onlyValid);
		return (_obj.callFunction<void>());
	};

	// void osgViewer::ViewerBase::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)
	void getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true) {
		THROW_IF(!_obj.pushFunction("getViews"),"No implementation for abstract function osgViewer::ViewerBase::getViews");
		_obj.pushArg(&views);
		_obj.pushArg(onlyValid);
		return (_obj.callFunction<void>());
	};

	// double osgViewer::ViewerBase::elapsedTime()
	double elapsedTime() {
		THROW_IF(!_obj.pushFunction("elapsedTime"),"No implementation for abstract function osgViewer::ViewerBase::elapsedTime");
		return (_obj.callFunction<double>());
	};

	// osg::FrameStamp * osgViewer::ViewerBase::getViewerFrameStamp()
	osg::FrameStamp * getViewerFrameStamp() {
		THROW_IF(!_obj.pushFunction("getViewerFrameStamp"),"No implementation for abstract function osgViewer::ViewerBase::getViewerFrameStamp");
		return (_obj.callFunction<osg::FrameStamp*>());
	};

	// void osgViewer::ViewerBase::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		THROW_IF(!_obj.pushFunction("getUsage"),"No implementation for abstract function osgViewer::ViewerBase::getUsage");
		_obj.pushArg(&usage);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:
	// void osgViewer::ViewerBase::viewerBaseInit()
	void public_viewerBaseInit() {
		return osgViewer::ViewerBase::viewerBaseInit();
	};

	// void osgViewer::ViewerBase::makeCurrent(osg::GraphicsContext * gc)
	void public_makeCurrent(osg::GraphicsContext * gc) {
		return osgViewer::ViewerBase::makeCurrent(gc);
	};

	// void osgViewer::ViewerBase::releaseContext()
	void public_releaseContext() {
		return osgViewer::ViewerBase::releaseContext();
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
	inline static bool _lg_typecheck_public_viewerBaseInit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_makeCurrent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_releaseContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// void osgViewer::ViewerBase::public_viewerBaseInit()
	static int _bind_public_viewerBaseInit(lua_State *L) {
		if (!_lg_typecheck_public_viewerBaseInit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::public_viewerBaseInit() function, expected prototype:\nvoid osgViewer::ViewerBase::public_viewerBaseInit()\nClass arguments details:\n");
		}


		wrapper_osgViewer_ViewerBase* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ViewerBase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::public_viewerBaseInit()");
		}
		self->public_viewerBaseInit();

		return 0;
	}

	// void osgViewer::ViewerBase::public_makeCurrent(osg::GraphicsContext * gc)
	static int _bind_public_makeCurrent(lua_State *L) {
		if (!_lg_typecheck_public_makeCurrent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::public_makeCurrent(osg::GraphicsContext * gc) function, expected prototype:\nvoid osgViewer::ViewerBase::public_makeCurrent(osg::GraphicsContext * gc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* gc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		wrapper_osgViewer_ViewerBase* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ViewerBase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::public_makeCurrent(osg::GraphicsContext *)");
		}
		self->public_makeCurrent(gc);

		return 0;
	}

	// void osgViewer::ViewerBase::public_releaseContext()
	static int _bind_public_releaseContext(lua_State *L) {
		if (!_lg_typecheck_public_releaseContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::public_releaseContext() function, expected prototype:\nvoid osgViewer::ViewerBase::public_releaseContext()\nClass arguments details:\n");
		}


		wrapper_osgViewer_ViewerBase* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ViewerBase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::public_releaseContext()");
		}
		self->public_releaseContext();

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

		wrapper_osgViewer_ViewerBase* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ViewerBase >(L,1);
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


		wrapper_osgViewer_ViewerBase* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ViewerBase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_viewerBaseInit",_bind_public_viewerBaseInit},
		{"protected_makeCurrent",_bind_public_makeCurrent},
		{"protected_releaseContext",_bind_public_releaseContext},
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


public:
// void osgViewer::ViewerBase::getAllThreads(osgViewer::ViewerBase::Threads & threads, bool onlyActive = true)
void getAllThreads(osgViewer::ViewerBase::Threads &, bool) {
	THROW_IF(true,"The function call void osgViewer::ViewerBase::getAllThreads(osgViewer::ViewerBase::Threads &, bool) is not implemented in wrapper.");
};

public:
// void osgViewer::ViewerBase::getOperationThreads(osgViewer::ViewerBase::OperationThreads & threads, bool onlyActive = true)
void getOperationThreads(osgViewer::ViewerBase::OperationThreads &, bool) {
	THROW_IF(true,"The function call void osgViewer::ViewerBase::getOperationThreads(osgViewer::ViewerBase::OperationThreads &, bool) is not implemented in wrapper.");
};

};




#endif

