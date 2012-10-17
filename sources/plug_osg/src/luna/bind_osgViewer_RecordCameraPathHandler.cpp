#include <plug_common.h>

class luna_wrapper_osgViewer_RecordCameraPathHandler {
public:
	typedef Luna< osgViewer::RecordCameraPathHandler > luna_t;

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
		osgViewer::RecordCameraPathHandler* ptr= dynamic_cast< osgViewer::RecordCameraPathHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::RecordCameraPathHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setKeyEventToggleRecord(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleRecord(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventTogglePlayback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventTogglePlayback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoIncrementFilename(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::RecordCameraPathHandler::RecordCameraPathHandler(const std::string & filename = "saved_animation.path", float fps = 25.0f)
	static osgViewer::RecordCameraPathHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::RecordCameraPathHandler::RecordCameraPathHandler(const std::string & filename = \"saved_animation.path\", float fps = 25.0f) function, expected prototype:\nosgViewer::RecordCameraPathHandler::RecordCameraPathHandler(const std::string & filename = \"saved_animation.path\", float fps = 25.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,1),lua_objlen(L,1));
		float fps=luatop>1 ? (float)lua_tonumber(L,2) : 25.0f;

		return new osgViewer::RecordCameraPathHandler(filename, fps);
	}


	// Function binds:
	// void osgViewer::RecordCameraPathHandler::setKeyEventToggleRecord(int key)
	static int _bind_setKeyEventToggleRecord(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleRecord(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::setKeyEventToggleRecord(int key) function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::setKeyEventToggleRecord(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::RecordCameraPathHandler* self=dynamic_cast< osgViewer::RecordCameraPathHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::setKeyEventToggleRecord(int)");
		}
		self->setKeyEventToggleRecord(key);

		return 0;
	}

	// int osgViewer::RecordCameraPathHandler::getKeyEventToggleRecord() const
	static int _bind_getKeyEventToggleRecord(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleRecord(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::RecordCameraPathHandler::getKeyEventToggleRecord() const function, expected prototype:\nint osgViewer::RecordCameraPathHandler::getKeyEventToggleRecord() const\nClass arguments details:\n");
		}


		osgViewer::RecordCameraPathHandler* self=dynamic_cast< osgViewer::RecordCameraPathHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::RecordCameraPathHandler::getKeyEventToggleRecord() const");
		}
		int lret = self->getKeyEventToggleRecord();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::RecordCameraPathHandler::setKeyEventTogglePlayback(int key)
	static int _bind_setKeyEventTogglePlayback(lua_State *L) {
		if (!_lg_typecheck_setKeyEventTogglePlayback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::setKeyEventTogglePlayback(int key) function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::setKeyEventTogglePlayback(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::RecordCameraPathHandler* self=dynamic_cast< osgViewer::RecordCameraPathHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::setKeyEventTogglePlayback(int)");
		}
		self->setKeyEventTogglePlayback(key);

		return 0;
	}

	// int osgViewer::RecordCameraPathHandler::getKeyEventTogglePlayback() const
	static int _bind_getKeyEventTogglePlayback(lua_State *L) {
		if (!_lg_typecheck_getKeyEventTogglePlayback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::RecordCameraPathHandler::getKeyEventTogglePlayback() const function, expected prototype:\nint osgViewer::RecordCameraPathHandler::getKeyEventTogglePlayback() const\nClass arguments details:\n");
		}


		osgViewer::RecordCameraPathHandler* self=dynamic_cast< osgViewer::RecordCameraPathHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::RecordCameraPathHandler::getKeyEventTogglePlayback() const");
		}
		int lret = self->getKeyEventTogglePlayback();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::RecordCameraPathHandler::setAutoIncrementFilename(bool autoinc = true)
	static int _bind_setAutoIncrementFilename(lua_State *L) {
		if (!_lg_typecheck_setAutoIncrementFilename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::setAutoIncrementFilename(bool autoinc = true) function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::setAutoIncrementFilename(bool autoinc = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool autoinc=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osgViewer::RecordCameraPathHandler* self=dynamic_cast< osgViewer::RecordCameraPathHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::setAutoIncrementFilename(bool)");
		}
		self->setAutoIncrementFilename(autoinc);

		return 0;
	}

	// void osgViewer::RecordCameraPathHandler::getUsage(osg::ApplicationUsage & ) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::getUsage(osg::ApplicationUsage & ) const function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::getUsage(osg::ApplicationUsage & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* _arg1_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::RecordCameraPathHandler::getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgViewer::RecordCameraPathHandler* self=dynamic_cast< osgViewer::RecordCameraPathHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(_arg1);

		return 0;
	}

	// bool osgViewer::RecordCameraPathHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::RecordCameraPathHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nbool osgViewer::RecordCameraPathHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::RecordCameraPathHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::RecordCameraPathHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::RecordCameraPathHandler* self=dynamic_cast< osgViewer::RecordCameraPathHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::RecordCameraPathHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgViewer::RecordCameraPathHandler* LunaTraits< osgViewer::RecordCameraPathHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::RecordCameraPathHandler >::_bind_dtor(osgViewer::RecordCameraPathHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::RecordCameraPathHandler >::className[] = "RecordCameraPathHandler";
const char LunaTraits< osgViewer::RecordCameraPathHandler >::fullName[] = "osgViewer::RecordCameraPathHandler";
const char LunaTraits< osgViewer::RecordCameraPathHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::RecordCameraPathHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::RecordCameraPathHandler >::hash = 77463182;
const int LunaTraits< osgViewer::RecordCameraPathHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::RecordCameraPathHandler >::methods[] = {
	{"setKeyEventToggleRecord", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_setKeyEventToggleRecord},
	{"getKeyEventToggleRecord", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_getKeyEventToggleRecord},
	{"setKeyEventTogglePlayback", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_setKeyEventTogglePlayback},
	{"getKeyEventTogglePlayback", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_getKeyEventTogglePlayback},
	{"setAutoIncrementFilename", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_setAutoIncrementFilename},
	{"getUsage", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_getUsage},
	{"handle", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_handle},
	{"__eq", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::RecordCameraPathHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_RecordCameraPathHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::RecordCameraPathHandler >::enumValues[] = {
	{0,0}
};


