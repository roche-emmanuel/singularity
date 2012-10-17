#include <plug_common.h>

class luna_wrapper_osgViewer_ToggleSyncToVBlankHandler {
public:
	typedef Luna< osgViewer::ToggleSyncToVBlankHandler > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::ToggleSyncToVBlankHandler* ptr= dynamic_cast< osgViewer::ToggleSyncToVBlankHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ToggleSyncToVBlankHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setKeyEventToggleSyncToVBlankHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleSyncToVBlankHandler(lua_State *L) {
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
	// osgViewer::ToggleSyncToVBlankHandler::ToggleSyncToVBlankHandler()
	static osgViewer::ToggleSyncToVBlankHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::ToggleSyncToVBlankHandler::ToggleSyncToVBlankHandler() function, expected prototype:\nosgViewer::ToggleSyncToVBlankHandler::ToggleSyncToVBlankHandler()\nClass arguments details:\n");
		}


		return new osgViewer::ToggleSyncToVBlankHandler();
	}


	// Function binds:
	// void osgViewer::ToggleSyncToVBlankHandler::setKeyEventToggleSyncToVBlankHandler(int key)
	static int _bind_setKeyEventToggleSyncToVBlankHandler(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleSyncToVBlankHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ToggleSyncToVBlankHandler::setKeyEventToggleSyncToVBlankHandler(int key) function, expected prototype:\nvoid osgViewer::ToggleSyncToVBlankHandler::setKeyEventToggleSyncToVBlankHandler(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::ToggleSyncToVBlankHandler* self=dynamic_cast< osgViewer::ToggleSyncToVBlankHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ToggleSyncToVBlankHandler::setKeyEventToggleSyncToVBlankHandler(int)");
		}
		self->setKeyEventToggleSyncToVBlankHandler(key);

		return 0;
	}

	// int osgViewer::ToggleSyncToVBlankHandler::getKeyEventToggleSyncToVBlankHandler() const
	static int _bind_getKeyEventToggleSyncToVBlankHandler(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleSyncToVBlankHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::ToggleSyncToVBlankHandler::getKeyEventToggleSyncToVBlankHandler() const function, expected prototype:\nint osgViewer::ToggleSyncToVBlankHandler::getKeyEventToggleSyncToVBlankHandler() const\nClass arguments details:\n");
		}


		osgViewer::ToggleSyncToVBlankHandler* self=dynamic_cast< osgViewer::ToggleSyncToVBlankHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::ToggleSyncToVBlankHandler::getKeyEventToggleSyncToVBlankHandler() const");
		}
		int lret = self->getKeyEventToggleSyncToVBlankHandler();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgViewer::ToggleSyncToVBlankHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::ToggleSyncToVBlankHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nbool osgViewer::ToggleSyncToVBlankHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::ToggleSyncToVBlankHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::ToggleSyncToVBlankHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::ToggleSyncToVBlankHandler* self=dynamic_cast< osgViewer::ToggleSyncToVBlankHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::ToggleSyncToVBlankHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ToggleSyncToVBlankHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ToggleSyncToVBlankHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::ToggleSyncToVBlankHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::ToggleSyncToVBlankHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::ToggleSyncToVBlankHandler* self=dynamic_cast< osgViewer::ToggleSyncToVBlankHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ToggleSyncToVBlankHandler::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgViewer::ToggleSyncToVBlankHandler* LunaTraits< osgViewer::ToggleSyncToVBlankHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_ToggleSyncToVBlankHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::ToggleSyncToVBlankHandler >::_bind_dtor(osgViewer::ToggleSyncToVBlankHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ToggleSyncToVBlankHandler >::className[] = "ToggleSyncToVBlankHandler";
const char LunaTraits< osgViewer::ToggleSyncToVBlankHandler >::fullName[] = "osgViewer::ToggleSyncToVBlankHandler";
const char LunaTraits< osgViewer::ToggleSyncToVBlankHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ToggleSyncToVBlankHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::ToggleSyncToVBlankHandler >::hash = 67903858;
const int LunaTraits< osgViewer::ToggleSyncToVBlankHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ToggleSyncToVBlankHandler >::methods[] = {
	{"setKeyEventToggleSyncToVBlankHandler", &luna_wrapper_osgViewer_ToggleSyncToVBlankHandler::_bind_setKeyEventToggleSyncToVBlankHandler},
	{"getKeyEventToggleSyncToVBlankHandler", &luna_wrapper_osgViewer_ToggleSyncToVBlankHandler::_bind_getKeyEventToggleSyncToVBlankHandler},
	{"handle", &luna_wrapper_osgViewer_ToggleSyncToVBlankHandler::_bind_handle},
	{"getUsage", &luna_wrapper_osgViewer_ToggleSyncToVBlankHandler::_bind_getUsage},
	{"__eq", &luna_wrapper_osgViewer_ToggleSyncToVBlankHandler::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ToggleSyncToVBlankHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ToggleSyncToVBlankHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ToggleSyncToVBlankHandler >::enumValues[] = {
	{0,0}
};


