#include <plug_common.h>

class luna_wrapper_osgViewer_StatsHandler {
public:
	typedef Luna< osgViewer::StatsHandler > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::StatsHandler* ptr= dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::StatsHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setKeyEventTogglesOnScreenStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventTogglesOnScreenStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventPrintsOutStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventPrintsOutStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventToggleVSync(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleVSync(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBlockMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addUserStatsLine(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		if( lua_isboolean(L,8)==0 ) return false;
		if( lua_isstring(L,9)==0 ) return false;
		if( lua_isstring(L,10)==0 ) return false;
		if( lua_isnumber(L,11)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeUserStatsLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::StatsHandler::StatsHandler()
	static osgViewer::StatsHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::StatsHandler::StatsHandler() function, expected prototype:\nosgViewer::StatsHandler::StatsHandler()\nClass arguments details:\n");
		}


		return new osgViewer::StatsHandler();
	}


	// Function binds:
	// void osgViewer::StatsHandler::setKeyEventTogglesOnScreenStats(int key)
	static int _bind_setKeyEventTogglesOnScreenStats(lua_State *L) {
		if (!_lg_typecheck_setKeyEventTogglesOnScreenStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::setKeyEventTogglesOnScreenStats(int key) function, expected prototype:\nvoid osgViewer::StatsHandler::setKeyEventTogglesOnScreenStats(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::setKeyEventTogglesOnScreenStats(int)");
		}
		self->setKeyEventTogglesOnScreenStats(key);

		return 0;
	}

	// int osgViewer::StatsHandler::getKeyEventTogglesOnScreenStats() const
	static int _bind_getKeyEventTogglesOnScreenStats(lua_State *L) {
		if (!_lg_typecheck_getKeyEventTogglesOnScreenStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::StatsHandler::getKeyEventTogglesOnScreenStats() const function, expected prototype:\nint osgViewer::StatsHandler::getKeyEventTogglesOnScreenStats() const\nClass arguments details:\n");
		}


		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::StatsHandler::getKeyEventTogglesOnScreenStats() const");
		}
		int lret = self->getKeyEventTogglesOnScreenStats();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::StatsHandler::setKeyEventPrintsOutStats(int key)
	static int _bind_setKeyEventPrintsOutStats(lua_State *L) {
		if (!_lg_typecheck_setKeyEventPrintsOutStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::setKeyEventPrintsOutStats(int key) function, expected prototype:\nvoid osgViewer::StatsHandler::setKeyEventPrintsOutStats(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::setKeyEventPrintsOutStats(int)");
		}
		self->setKeyEventPrintsOutStats(key);

		return 0;
	}

	// int osgViewer::StatsHandler::getKeyEventPrintsOutStats() const
	static int _bind_getKeyEventPrintsOutStats(lua_State *L) {
		if (!_lg_typecheck_getKeyEventPrintsOutStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::StatsHandler::getKeyEventPrintsOutStats() const function, expected prototype:\nint osgViewer::StatsHandler::getKeyEventPrintsOutStats() const\nClass arguments details:\n");
		}


		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::StatsHandler::getKeyEventPrintsOutStats() const");
		}
		int lret = self->getKeyEventPrintsOutStats();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::StatsHandler::setKeyEventToggleVSync(int key)
	static int _bind_setKeyEventToggleVSync(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleVSync(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::setKeyEventToggleVSync(int key) function, expected prototype:\nvoid osgViewer::StatsHandler::setKeyEventToggleVSync(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::setKeyEventToggleVSync(int)");
		}
		self->setKeyEventToggleVSync(key);

		return 0;
	}

	// int osgViewer::StatsHandler::getKeyEventToggleVSync() const
	static int _bind_getKeyEventToggleVSync(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleVSync(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::StatsHandler::getKeyEventToggleVSync() const function, expected prototype:\nint osgViewer::StatsHandler::getKeyEventToggleVSync() const\nClass arguments details:\n");
		}


		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::StatsHandler::getKeyEventToggleVSync() const");
		}
		int lret = self->getKeyEventToggleVSync();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgViewer::StatsHandler::getBlockMultiplier() const
	static int _bind_getBlockMultiplier(lua_State *L) {
		if (!_lg_typecheck_getBlockMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgViewer::StatsHandler::getBlockMultiplier() const function, expected prototype:\ndouble osgViewer::StatsHandler::getBlockMultiplier() const\nClass arguments details:\n");
		}


		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgViewer::StatsHandler::getBlockMultiplier() const");
		}
		double lret = self->getBlockMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::StatsHandler::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::reset() function, expected prototype:\nvoid osgViewer::StatsHandler::reset()\nClass arguments details:\n");
		}


		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::reset()");
		}
		self->reset();

		return 0;
	}

	// osg::Camera * osgViewer::StatsHandler::getCamera()
	static int _bind_getCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera * osgViewer::StatsHandler::getCamera() function, expected prototype:\nosg::Camera * osgViewer::StatsHandler::getCamera()\nClass arguments details:\n");
		}


		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Camera * osgViewer::StatsHandler::getCamera()");
		}
		osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgViewer::StatsHandler::getCamera() const
	static int _bind_getCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgViewer::StatsHandler::getCamera() const function, expected prototype:\nconst osg::Camera * osgViewer::StatsHandler::getCamera() const\nClass arguments details:\n");
		}


		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Camera * osgViewer::StatsHandler::getCamera() const");
		}
		const osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::StatsHandler::getCamera
	static int _bind_getCamera(lua_State *L) {
		if (_lg_typecheck_getCamera_overload_1(L)) return _bind_getCamera_overload_1(L);
		if (_lg_typecheck_getCamera_overload_2(L)) return _bind_getCamera_overload_2(L);

		luaL_error(L, "error in function getCamera, cannot match any of the overloads for function getCamera:\n  getCamera()\n  getCamera()\n");
		return 0;
	}

	// bool osgViewer::StatsHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::StatsHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nbool osgViewer::StatsHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::StatsHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::StatsHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::StatsHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::StatsHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::StatsHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::StatsHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgViewer::StatsHandler::addUserStatsLine(const std::string & label, const osg::Vec4f & textColor, const osg::Vec4f & barColor, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName, float maxValue)
	static int _bind_addUserStatsLine(lua_State *L) {
		if (!_lg_typecheck_addUserStatsLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::addUserStatsLine(const std::string & label, const osg::Vec4f & textColor, const osg::Vec4f & barColor, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName, float maxValue) function, expected prototype:\nvoid osgViewer::StatsHandler::addUserStatsLine(const std::string & label, const osg::Vec4f & textColor, const osg::Vec4f & barColor, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName, float maxValue)\nClass arguments details:\narg 2 ID = 92303235\narg 3 ID = 92303235\n");
		}

		std::string label(lua_tostring(L,2),lua_objlen(L,2));
		const osg::Vec4f* textColor_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !textColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg textColor in osgViewer::StatsHandler::addUserStatsLine function");
		}
		const osg::Vec4f & textColor=*textColor_ptr;
		const osg::Vec4f* barColor_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !barColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg barColor in osgViewer::StatsHandler::addUserStatsLine function");
		}
		const osg::Vec4f & barColor=*barColor_ptr;
		std::string timeTakenName(lua_tostring(L,5),lua_objlen(L,5));
		float multiplier=(float)lua_tonumber(L,6);
		bool average=(bool)(lua_toboolean(L,7)==1);
		bool averageInInverseSpace=(bool)(lua_toboolean(L,8)==1);
		std::string beginTimeName(lua_tostring(L,9),lua_objlen(L,9));
		std::string endTimeName(lua_tostring(L,10),lua_objlen(L,10));
		float maxValue=(float)lua_tonumber(L,11);

		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::addUserStatsLine(const std::string &, const osg::Vec4f &, const osg::Vec4f &, const std::string &, float, bool, bool, const std::string &, const std::string &, float)");
		}
		self->addUserStatsLine(label, textColor, barColor, timeTakenName, multiplier, average, averageInInverseSpace, beginTimeName, endTimeName, maxValue);

		return 0;
	}

	// void osgViewer::StatsHandler::removeUserStatsLine(const std::string & label)
	static int _bind_removeUserStatsLine(lua_State *L) {
		if (!_lg_typecheck_removeUserStatsLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::removeUserStatsLine(const std::string & label) function, expected prototype:\nvoid osgViewer::StatsHandler::removeUserStatsLine(const std::string & label)\nClass arguments details:\n");
		}

		std::string label(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::StatsHandler* self=dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::removeUserStatsLine(const std::string &)");
		}
		self->removeUserStatsLine(label);

		return 0;
	}


	// Operator binds:

};

osgViewer::StatsHandler* LunaTraits< osgViewer::StatsHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_StatsHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::StatsHandler >::_bind_dtor(osgViewer::StatsHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::StatsHandler >::className[] = "StatsHandler";
const char LunaTraits< osgViewer::StatsHandler >::fullName[] = "osgViewer::StatsHandler";
const char LunaTraits< osgViewer::StatsHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::StatsHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::StatsHandler >::hash = 90944398;
const int LunaTraits< osgViewer::StatsHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::StatsHandler >::methods[] = {
	{"setKeyEventTogglesOnScreenStats", &luna_wrapper_osgViewer_StatsHandler::_bind_setKeyEventTogglesOnScreenStats},
	{"getKeyEventTogglesOnScreenStats", &luna_wrapper_osgViewer_StatsHandler::_bind_getKeyEventTogglesOnScreenStats},
	{"setKeyEventPrintsOutStats", &luna_wrapper_osgViewer_StatsHandler::_bind_setKeyEventPrintsOutStats},
	{"getKeyEventPrintsOutStats", &luna_wrapper_osgViewer_StatsHandler::_bind_getKeyEventPrintsOutStats},
	{"setKeyEventToggleVSync", &luna_wrapper_osgViewer_StatsHandler::_bind_setKeyEventToggleVSync},
	{"getKeyEventToggleVSync", &luna_wrapper_osgViewer_StatsHandler::_bind_getKeyEventToggleVSync},
	{"getBlockMultiplier", &luna_wrapper_osgViewer_StatsHandler::_bind_getBlockMultiplier},
	{"reset", &luna_wrapper_osgViewer_StatsHandler::_bind_reset},
	{"getCamera", &luna_wrapper_osgViewer_StatsHandler::_bind_getCamera},
	{"handle", &luna_wrapper_osgViewer_StatsHandler::_bind_handle},
	{"getUsage", &luna_wrapper_osgViewer_StatsHandler::_bind_getUsage},
	{"addUserStatsLine", &luna_wrapper_osgViewer_StatsHandler::_bind_addUserStatsLine},
	{"removeUserStatsLine", &luna_wrapper_osgViewer_StatsHandler::_bind_removeUserStatsLine},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::StatsHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_StatsHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::StatsHandler >::enumValues[] = {
	{"NO_STATS", osgViewer::StatsHandler::NO_STATS},
	{"FRAME_RATE", osgViewer::StatsHandler::FRAME_RATE},
	{"VIEWER_STATS", osgViewer::StatsHandler::VIEWER_STATS},
	{"CAMERA_SCENE_STATS", osgViewer::StatsHandler::CAMERA_SCENE_STATS},
	{"VIEWER_SCENE_STATS", osgViewer::StatsHandler::VIEWER_SCENE_STATS},
	{"LAST", osgViewer::StatsHandler::LAST},
	{0,0}
};


