#include <plug_common.h>

class luna_wrapper_osgViewer_LODScaleHandler {
public:
	typedef Luna< osgViewer::LODScaleHandler > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::LODScaleHandler* ptr= dynamic_cast< osgViewer::LODScaleHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::LODScaleHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setKeyEventIncreaseLODScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventIncreaseLODScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventDecreaseLODScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventDecreaseLODScale(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::LODScaleHandler::LODScaleHandler()
	static osgViewer::LODScaleHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::LODScaleHandler::LODScaleHandler() function, expected prototype:\nosgViewer::LODScaleHandler::LODScaleHandler()\nClass arguments details:\n");
		}


		return new osgViewer::LODScaleHandler();
	}


	// Function binds:
	// void osgViewer::LODScaleHandler::setKeyEventIncreaseLODScale(int key)
	static int _bind_setKeyEventIncreaseLODScale(lua_State *L) {
		if (!_lg_typecheck_setKeyEventIncreaseLODScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::setKeyEventIncreaseLODScale(int key) function, expected prototype:\nvoid osgViewer::LODScaleHandler::setKeyEventIncreaseLODScale(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::LODScaleHandler* self=dynamic_cast< osgViewer::LODScaleHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::setKeyEventIncreaseLODScale(int)");
		}
		self->setKeyEventIncreaseLODScale(key);

		return 0;
	}

	// int osgViewer::LODScaleHandler::getKeyEventIncreaseLODScale() const
	static int _bind_getKeyEventIncreaseLODScale(lua_State *L) {
		if (!_lg_typecheck_getKeyEventIncreaseLODScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::LODScaleHandler::getKeyEventIncreaseLODScale() const function, expected prototype:\nint osgViewer::LODScaleHandler::getKeyEventIncreaseLODScale() const\nClass arguments details:\n");
		}


		osgViewer::LODScaleHandler* self=dynamic_cast< osgViewer::LODScaleHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::LODScaleHandler::getKeyEventIncreaseLODScale() const");
		}
		int lret = self->getKeyEventIncreaseLODScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::LODScaleHandler::setKeyEventDecreaseLODScale(int key)
	static int _bind_setKeyEventDecreaseLODScale(lua_State *L) {
		if (!_lg_typecheck_setKeyEventDecreaseLODScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::setKeyEventDecreaseLODScale(int key) function, expected prototype:\nvoid osgViewer::LODScaleHandler::setKeyEventDecreaseLODScale(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::LODScaleHandler* self=dynamic_cast< osgViewer::LODScaleHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::setKeyEventDecreaseLODScale(int)");
		}
		self->setKeyEventDecreaseLODScale(key);

		return 0;
	}

	// int osgViewer::LODScaleHandler::getKeyEventDecreaseLODScale() const
	static int _bind_getKeyEventDecreaseLODScale(lua_State *L) {
		if (!_lg_typecheck_getKeyEventDecreaseLODScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::LODScaleHandler::getKeyEventDecreaseLODScale() const function, expected prototype:\nint osgViewer::LODScaleHandler::getKeyEventDecreaseLODScale() const\nClass arguments details:\n");
		}


		osgViewer::LODScaleHandler* self=dynamic_cast< osgViewer::LODScaleHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::LODScaleHandler::getKeyEventDecreaseLODScale() const");
		}
		int lret = self->getKeyEventDecreaseLODScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgViewer::LODScaleHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::LODScaleHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nbool osgViewer::LODScaleHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::LODScaleHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::LODScaleHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::LODScaleHandler* self=dynamic_cast< osgViewer::LODScaleHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::LODScaleHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::LODScaleHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::LODScaleHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::LODScaleHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::LODScaleHandler* self=dynamic_cast< osgViewer::LODScaleHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgViewer::LODScaleHandler* LunaTraits< osgViewer::LODScaleHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_LODScaleHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::LODScaleHandler >::_bind_dtor(osgViewer::LODScaleHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::LODScaleHandler >::className[] = "LODScaleHandler";
const char LunaTraits< osgViewer::LODScaleHandler >::fullName[] = "osgViewer::LODScaleHandler";
const char LunaTraits< osgViewer::LODScaleHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::LODScaleHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::LODScaleHandler >::hash = 43754236;
const int LunaTraits< osgViewer::LODScaleHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::LODScaleHandler >::methods[] = {
	{"setKeyEventIncreaseLODScale", &luna_wrapper_osgViewer_LODScaleHandler::_bind_setKeyEventIncreaseLODScale},
	{"getKeyEventIncreaseLODScale", &luna_wrapper_osgViewer_LODScaleHandler::_bind_getKeyEventIncreaseLODScale},
	{"setKeyEventDecreaseLODScale", &luna_wrapper_osgViewer_LODScaleHandler::_bind_setKeyEventDecreaseLODScale},
	{"getKeyEventDecreaseLODScale", &luna_wrapper_osgViewer_LODScaleHandler::_bind_getKeyEventDecreaseLODScale},
	{"handle", &luna_wrapper_osgViewer_LODScaleHandler::_bind_handle},
	{"getUsage", &luna_wrapper_osgViewer_LODScaleHandler::_bind_getUsage},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::LODScaleHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_LODScaleHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::LODScaleHandler >::enumValues[] = {
	{0,0}
};


