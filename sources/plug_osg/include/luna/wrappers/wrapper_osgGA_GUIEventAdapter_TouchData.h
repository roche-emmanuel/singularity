#ifndef _WRAPPERS_WRAPPER_OSGGA_GUIEVENTADAPTER_TOUCHDATA_H_
#define _WRAPPERS_WRAPPER_OSGGA_GUIEVENTADAPTER_TOUCHDATA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/GUIEventAdapter>

class wrapper_osgGA_GUIEventAdapter_TouchData : public osgGA::GUIEventAdapter::TouchData, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_GUIEventAdapter_TouchData() {
		logDEBUG3("Calling delete function for wrapper osgGA_GUIEventAdapter_TouchData");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_GUIEventAdapter_TouchData(lua_State* L, lua_Table* dum) 
		: osgGA::GUIEventAdapter::TouchData(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return TouchData::setThreadSafeRefUnref(threadSafe);
	};


	// Protected non-virtual methods:
	// void osgGA::GUIEventAdapter::TouchData::addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count)
	void public_addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count) {
		return osgGA::GUIEventAdapter::TouchData::addTouchPoint(id, phase, x, y, tap_count);
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
	inline static bool _lg_typecheck_public_addTouchPoint(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
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
	// void osgGA::GUIEventAdapter::TouchData::public_addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count)
	static int _bind_public_addTouchPoint(lua_State *L) {
		if (!_lg_typecheck_public_addTouchPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::TouchData::public_addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count) function, expected prototype:\nvoid osgGA::GUIEventAdapter::TouchData::public_addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count)\nClass arguments details:\n");
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		osgGA::GUIEventAdapter::TouchPhase phase=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,3);
		float x=(float)lua_tonumber(L,4);
		float y=(float)lua_tonumber(L,5);
		unsigned int tap_count=(unsigned int)lua_tointeger(L,6);

		wrapper_osgGA_GUIEventAdapter_TouchData* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_GUIEventAdapter_TouchData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::TouchData::public_addTouchPoint(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_addTouchPoint(id, phase, x, y, tap_count);

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

		wrapper_osgGA_GUIEventAdapter_TouchData* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_GUIEventAdapter_TouchData >(L,1);
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


		wrapper_osgGA_GUIEventAdapter_TouchData* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_GUIEventAdapter_TouchData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"addTouchPoint",_bind_public_addTouchPoint},
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

