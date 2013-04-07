#ifndef _WRAPPERS_WRAPPER_KINECTDATADRAWER_H_
#define _WRAPPERS_WRAPPER_KINECTDATADRAWER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <KinectDataDrawer.h>

class wrapper_KinectDataDrawer : public KinectDataDrawer, public luna_wrapper_base {

public:
		

	~wrapper_KinectDataDrawer() {
		logDEBUG3("Calling delete function for wrapper KinectDataDrawer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((KinectDataDrawer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_KinectDataDrawer(lua_State* L, lua_Table* dum) 
		: KinectDataDrawer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((KinectDataDrawer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool KinectHandler::initialize(int kid)
	bool initialize(int kid) {
		if(_obj.pushFunction("initialize")) {
			_obj.pushArg((KinectDataDrawer*)this);
			_obj.pushArg(kid);
			return (_obj.callFunction<bool>());
		}

		return KinectDataDrawer::initialize(kid);
	};

	// bool KinectHandler::quit()
	bool quit() {
		if(_obj.pushFunction("quit")) {
			_obj.pushArg((KinectDataDrawer*)this);
			return (_obj.callFunction<bool>());
		}

		return KinectDataDrawer::quit();
	};

	// bool KinectHandler::handleJoints(NUI_SKELETON_DATA & skeletonData)
	bool handleJoints(NUI_SKELETON_DATA & skeletonData) {
		if(_obj.pushFunction("handleJoints")) {
			_obj.pushArg((KinectDataDrawer*)this);
			_obj.pushArg(&skeletonData);
			return (_obj.callFunction<bool>());
		}

		return KinectDataDrawer::handleJoints(skeletonData);
	};

	// bool KinectHandler::handleImages(NUI_IMAGE_FRAME & imageFrame)
	bool handleImages(NUI_IMAGE_FRAME & imageFrame) {
		if(_obj.pushFunction("handleImages")) {
			_obj.pushArg((KinectDataDrawer*)this);
			_obj.pushArg(&imageFrame);
			return (_obj.callFunction<bool>());
		}

		return KinectDataDrawer::handleImages(imageFrame);
	};

	// bool KinectHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg((KinectDataDrawer*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&aa);
			return (_obj.callFunction<bool>());
		}

		return KinectDataDrawer::handle(ea, aa);
	};

	// void KinectDataDrawer::handleCurrentData()
	void handleCurrentData() {
		if(_obj.pushFunction("handleCurrentData")) {
			_obj.pushArg((KinectDataDrawer*)this);
			return (_obj.callFunction<void>());
		}

		return KinectDataDrawer::handleCurrentData();
	};


	// Protected non-virtual methods:
	// int KinectHandler::runNuiThread()
	int public_runNuiThread() {
		return KinectHandler::runNuiThread();
	};

	// static int KinectHandler::nuiProcessThread(void * param)
	static int public_nuiProcessThread(void * param) {
		return KinectHandler::nuiProcessThread(param);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_runNuiThread(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_nuiProcessThread(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// int KinectHandler::public_runNuiThread()
	static int _bind_public_runNuiThread(lua_State *L) {
		if (!_lg_typecheck_public_runNuiThread(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int KinectHandler::public_runNuiThread() function, expected prototype:\nint KinectHandler::public_runNuiThread()\nClass arguments details:\n");
		}


		wrapper_KinectDataDrawer* self=Luna< osg::Referenced >::checkSubType< wrapper_KinectDataDrawer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int KinectHandler::public_runNuiThread(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->public_runNuiThread();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int KinectHandler::public_nuiProcessThread(void * param)
	static int _bind_public_nuiProcessThread(lua_State *L) {
		if (!_lg_typecheck_public_nuiProcessThread(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int KinectHandler::public_nuiProcessThread(void * param) function, expected prototype:\nstatic int KinectHandler::public_nuiProcessThread(void * param)\nClass arguments details:\n");
		}

		void* param=(Luna< void >::check(L,1));

		wrapper_KinectDataDrawer* self=Luna< osg::Referenced >::checkSubType< wrapper_KinectDataDrawer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static int KinectHandler::public_nuiProcessThread(void *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->public_nuiProcessThread(param);
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"runNuiThread",_bind_public_runNuiThread},
		{"nuiProcessThread",_bind_public_nuiProcessThread},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

