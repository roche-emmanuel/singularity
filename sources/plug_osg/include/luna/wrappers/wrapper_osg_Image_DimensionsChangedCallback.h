#ifndef _WRAPPERS_WRAPPER_OSG_IMAGE_DIMENSIONSCHANGEDCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_IMAGE_DIMENSIONSCHANGEDCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Image>

class wrapper_osg_Image_DimensionsChangedCallback : public osg::Image::DimensionsChangedCallback, public luna_wrapper_base {

public:
		

	~wrapper_osg_Image_DimensionsChangedCallback() {
		logDEBUG3("Calling delete function for wrapper osg_Image_DimensionsChangedCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::Image::DimensionsChangedCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Image_DimensionsChangedCallback(lua_State* L, lua_Table* dum) 
		: osg::Image::DimensionsChangedCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::Image::DimensionsChangedCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::Image::DimensionsChangedCallback*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return DimensionsChangedCallback::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Image::DimensionsChangedCallback::operator()(osg::Image * image)
	void operator()(osg::Image * image) {
		THROW_IF(!_obj.pushFunction("op_call"),"No implementation for abstract function osg::Image::DimensionsChangedCallback::operator()");
		_obj.pushArg((osg::Image::DimensionsChangedCallback*)this);
		_obj.pushArg(image);
		return (_obj.callFunction<void>());
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

		wrapper_osg_Image_DimensionsChangedCallback* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Image_DimensionsChangedCallback >(L,1);
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


		wrapper_osg_Image_DimensionsChangedCallback* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Image_DimensionsChangedCallback >(L,1);
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
