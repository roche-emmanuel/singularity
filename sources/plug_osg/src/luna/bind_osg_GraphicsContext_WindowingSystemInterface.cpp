#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext_WindowingSystemInterface {
public:
	typedef Luna< osg::GraphicsContext::WindowingSystemInterface > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::GraphicsContext::WindowingSystemInterface* ptr= dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsContext::WindowingSystemInterface >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_getNumScreens(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,83590106) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScreenSettings(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83590106) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,15827252) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScreenSettings(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83590106) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,15827252) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enumerateScreenSettings(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83590106) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,96527715) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScreenResolution(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83590106) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScreenResolution(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83590106) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScreenRefreshRate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83590106) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// unsigned int osg::GraphicsContext::WindowingSystemInterface::getNumScreens(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier = osg::GraphicsContext::ScreenIdentifier ())
	static int _bind_getNumScreens(lua_State *L) {
		if (!_lg_typecheck_getNumScreens(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::WindowingSystemInterface::getNumScreens(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier = osg::GraphicsContext::ScreenIdentifier ()) function, expected prototype:\nunsigned int osg::GraphicsContext::WindowingSystemInterface::getNumScreens(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier = osg::GraphicsContext::ScreenIdentifier ())\nClass arguments details:\narg 1 ID = 83590106\n");
		}

		int luatop = lua_gettop(L);

		const osg::GraphicsContext::ScreenIdentifier* screenIdentifier_ptr=luatop>1 ? (Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,2)) : NULL;
		if( luatop>1 && !screenIdentifier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg screenIdentifier in osg::GraphicsContext::WindowingSystemInterface::getNumScreens function");
		}
		const osg::GraphicsContext::ScreenIdentifier & screenIdentifier=luatop>1 ? *screenIdentifier_ptr : osg::GraphicsContext::ScreenIdentifier ();

		osg::GraphicsContext::WindowingSystemInterface* self=dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::WindowingSystemInterface::getNumScreens(const osg::GraphicsContext::ScreenIdentifier &)");
		}
		unsigned int lret = self->getNumScreens(screenIdentifier);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GraphicsContext::WindowingSystemInterface::getScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettings & resolution)
	static int _bind_getScreenSettings(lua_State *L) {
		if (!_lg_typecheck_getScreenSettings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::WindowingSystemInterface::getScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettings & resolution) function, expected prototype:\nvoid osg::GraphicsContext::WindowingSystemInterface::getScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettings & resolution)\nClass arguments details:\narg 1 ID = 83590106\narg 2 ID = 15827252\n");
		}

		const osg::GraphicsContext::ScreenIdentifier* screenIdentifier_ptr=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,2));
		if( !screenIdentifier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg screenIdentifier in osg::GraphicsContext::WindowingSystemInterface::getScreenSettings function");
		}
		const osg::GraphicsContext::ScreenIdentifier & screenIdentifier=*screenIdentifier_ptr;
		osg::GraphicsContext::ScreenSettings* resolution_ptr=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,3));
		if( !resolution_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resolution in osg::GraphicsContext::WindowingSystemInterface::getScreenSettings function");
		}
		osg::GraphicsContext::ScreenSettings & resolution=*resolution_ptr;

		osg::GraphicsContext::WindowingSystemInterface* self=dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::WindowingSystemInterface::getScreenSettings(const osg::GraphicsContext::ScreenIdentifier &, osg::GraphicsContext::ScreenSettings &)");
		}
		self->getScreenSettings(screenIdentifier, resolution);

		return 0;
	}

	// bool osg::GraphicsContext::WindowingSystemInterface::setScreenSettings(const osg::GraphicsContext::ScreenIdentifier & , const osg::GraphicsContext::ScreenSettings & )
	static int _bind_setScreenSettings(lua_State *L) {
		if (!_lg_typecheck_setScreenSettings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::WindowingSystemInterface::setScreenSettings(const osg::GraphicsContext::ScreenIdentifier & , const osg::GraphicsContext::ScreenSettings & ) function, expected prototype:\nbool osg::GraphicsContext::WindowingSystemInterface::setScreenSettings(const osg::GraphicsContext::ScreenIdentifier & , const osg::GraphicsContext::ScreenSettings & )\nClass arguments details:\narg 1 ID = 83590106\narg 2 ID = 15827252\n");
		}

		const osg::GraphicsContext::ScreenIdentifier* _arg1_ptr=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::GraphicsContext::WindowingSystemInterface::setScreenSettings function");
		}
		const osg::GraphicsContext::ScreenIdentifier & _arg1=*_arg1_ptr;
		const osg::GraphicsContext::ScreenSettings* _arg2_ptr=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::GraphicsContext::WindowingSystemInterface::setScreenSettings function");
		}
		const osg::GraphicsContext::ScreenSettings & _arg2=*_arg2_ptr;

		osg::GraphicsContext::WindowingSystemInterface* self=dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::WindowingSystemInterface::setScreenSettings(const osg::GraphicsContext::ScreenIdentifier &, const osg::GraphicsContext::ScreenSettings &)");
		}
		bool lret = self->setScreenSettings(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettingsList & resolutionList)
	static int _bind_enumerateScreenSettings(lua_State *L) {
		if (!_lg_typecheck_enumerateScreenSettings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettingsList & resolutionList) function, expected prototype:\nvoid osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettingsList & resolutionList)\nClass arguments details:\narg 1 ID = 83590106\narg 2 ID = 96527715\n");
		}

		const osg::GraphicsContext::ScreenIdentifier* screenIdentifier_ptr=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,2));
		if( !screenIdentifier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg screenIdentifier in osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings function");
		}
		const osg::GraphicsContext::ScreenIdentifier & screenIdentifier=*screenIdentifier_ptr;
		osg::GraphicsContext::ScreenSettingsList* resolutionList_ptr=(Luna< osg::GraphicsContext::ScreenSettingsList >::check(L,3));
		if( !resolutionList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resolutionList in osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings function");
		}
		osg::GraphicsContext::ScreenSettingsList & resolutionList=*resolutionList_ptr;

		osg::GraphicsContext::WindowingSystemInterface* self=dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier &, osg::GraphicsContext::ScreenSettingsList &)");
		}
		self->enumerateScreenSettings(screenIdentifier, resolutionList);

		return 0;
	}

	// osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)
	static int _bind_createGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_createGraphicsContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits) function, expected prototype:\nosg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext::Traits* traits=dynamic_cast< osg::GraphicsContext::Traits* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext::WindowingSystemInterface* self=dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits *)");
		}
		osg::GraphicsContext * lret = self->createGraphicsContext(traits);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// void osg::GraphicsContext::WindowingSystemInterface::getScreenResolution(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, unsigned int & width, unsigned int & height)
	static int _bind_getScreenResolution(lua_State *L) {
		if (!_lg_typecheck_getScreenResolution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::WindowingSystemInterface::getScreenResolution(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, unsigned int & width, unsigned int & height) function, expected prototype:\nvoid osg::GraphicsContext::WindowingSystemInterface::getScreenResolution(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, unsigned int & width, unsigned int & height)\nClass arguments details:\narg 1 ID = 83590106\n");
		}

		const osg::GraphicsContext::ScreenIdentifier* screenIdentifier_ptr=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,2));
		if( !screenIdentifier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg screenIdentifier in osg::GraphicsContext::WindowingSystemInterface::getScreenResolution function");
		}
		const osg::GraphicsContext::ScreenIdentifier & screenIdentifier=*screenIdentifier_ptr;
		unsigned int width=(unsigned int)lua_tointeger(L,3);
		unsigned int height=(unsigned int)lua_tointeger(L,4);

		osg::GraphicsContext::WindowingSystemInterface* self=dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::WindowingSystemInterface::getScreenResolution(const osg::GraphicsContext::ScreenIdentifier &, unsigned int &, unsigned int &)");
		}
		self->getScreenResolution(screenIdentifier, width, height);

		return 0;
	}

	// bool osg::GraphicsContext::WindowingSystemInterface::setScreenResolution(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, unsigned int width, unsigned int height)
	static int _bind_setScreenResolution(lua_State *L) {
		if (!_lg_typecheck_setScreenResolution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::WindowingSystemInterface::setScreenResolution(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, unsigned int width, unsigned int height) function, expected prototype:\nbool osg::GraphicsContext::WindowingSystemInterface::setScreenResolution(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, unsigned int width, unsigned int height)\nClass arguments details:\narg 1 ID = 83590106\n");
		}

		const osg::GraphicsContext::ScreenIdentifier* screenIdentifier_ptr=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,2));
		if( !screenIdentifier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg screenIdentifier in osg::GraphicsContext::WindowingSystemInterface::setScreenResolution function");
		}
		const osg::GraphicsContext::ScreenIdentifier & screenIdentifier=*screenIdentifier_ptr;
		unsigned int width=(unsigned int)lua_tointeger(L,3);
		unsigned int height=(unsigned int)lua_tointeger(L,4);

		osg::GraphicsContext::WindowingSystemInterface* self=dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::WindowingSystemInterface::setScreenResolution(const osg::GraphicsContext::ScreenIdentifier &, unsigned int, unsigned int)");
		}
		bool lret = self->setScreenResolution(screenIdentifier, width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::WindowingSystemInterface::setScreenRefreshRate(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, double refreshRate)
	static int _bind_setScreenRefreshRate(lua_State *L) {
		if (!_lg_typecheck_setScreenRefreshRate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::WindowingSystemInterface::setScreenRefreshRate(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, double refreshRate) function, expected prototype:\nbool osg::GraphicsContext::WindowingSystemInterface::setScreenRefreshRate(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, double refreshRate)\nClass arguments details:\narg 1 ID = 83590106\n");
		}

		const osg::GraphicsContext::ScreenIdentifier* screenIdentifier_ptr=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,2));
		if( !screenIdentifier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg screenIdentifier in osg::GraphicsContext::WindowingSystemInterface::setScreenRefreshRate function");
		}
		const osg::GraphicsContext::ScreenIdentifier & screenIdentifier=*screenIdentifier_ptr;
		double refreshRate=(double)lua_tonumber(L,3);

		osg::GraphicsContext::WindowingSystemInterface* self=dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::WindowingSystemInterface::setScreenRefreshRate(const osg::GraphicsContext::ScreenIdentifier &, double)");
		}
		bool lret = self->setScreenRefreshRate(screenIdentifier, refreshRate);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::GraphicsContext::WindowingSystemInterface* LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// unsigned int osg::GraphicsContext::WindowingSystemInterface::getNumScreens(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier = osg::GraphicsContext::ScreenIdentifier ())
	// void osg::GraphicsContext::WindowingSystemInterface::getScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettings & resolution)
	// void osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettingsList & resolutionList)
	// osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)

	// Abstract operators:
}

void LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::_bind_dtor(osg::GraphicsContext::WindowingSystemInterface* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::className[] = "WindowingSystemInterface";
const char LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::fullName[] = "osg::GraphicsContext::WindowingSystemInterface";
const char LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::hash = 67801403;
const int LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::methods[] = {
	{"getNumScreens", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_getNumScreens},
	{"getScreenSettings", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_getScreenSettings},
	{"setScreenSettings", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_setScreenSettings},
	{"enumerateScreenSettings", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_enumerateScreenSettings},
	{"createGraphicsContext", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_createGraphicsContext},
	{"getScreenResolution", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_getScreenResolution},
	{"setScreenResolution", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_setScreenResolution},
	{"setScreenRefreshRate", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_setScreenRefreshRate},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::enumValues[] = {
	{0,0}
};


