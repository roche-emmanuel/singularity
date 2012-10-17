#include <plug_common.h>

class luna_wrapper_osgViewer_GraphicsWindow {
public:
	typedef Luna< osgViewer::GraphicsWindow > luna_t;

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
		osgViewer::GraphicsWindow* ptr= dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::GraphicsWindow >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GUIActionAdapter(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::GraphicsWindow* ptr= dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::GraphicsWindow >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEventQueue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventQueue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEventQueue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWindowRectangle(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowRectangleImplementation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowRectangle(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowDecoration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowDecorationImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowDecoration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_grabFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_grabFocusIfPointerInWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_raiseWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWindowName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_useCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSyncToVBlank(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSyncToVBlank(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSwapGroup(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSwapGroup(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_realizeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRealizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_closeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeCurrentImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseContextImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bindPBufferToTextureImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_swapBuffersImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViews(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,51540588) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requestRedraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestContinuousUpdate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requestWarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgViewer::GraphicsWindow::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindow::libraryName() const function, expected prototype:\nconst char * osgViewer::GraphicsWindow::libraryName() const\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindow::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::GraphicsWindow::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindow::className() const function, expected prototype:\nconst char * osgViewer::GraphicsWindow::className() const\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindow::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::GraphicsWindow::setEventQueue(osgGA::EventQueue * eventQueue)
	static int _bind_setEventQueue(lua_State *L) {
		if (!_lg_typecheck_setEventQueue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setEventQueue(osgGA::EventQueue * eventQueue) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setEventQueue(osgGA::EventQueue * eventQueue)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::EventQueue* eventQueue=dynamic_cast< osgGA::EventQueue* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setEventQueue(osgGA::EventQueue *)");
		}
		self->setEventQueue(eventQueue);

		return 0;
	}

	// osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue()
	static int _bind_getEventQueue_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventQueue_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue() function, expected prototype:\nosgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue()");
		}
		osgGA::EventQueue * lret = self->getEventQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue >::push(L,lret,false);

		return 1;
	}

	// const osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue() const
	static int _bind_getEventQueue_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventQueue_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue() const function, expected prototype:\nconst osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue() const\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue() const");
		}
		const osgGA::EventQueue * lret = self->getEventQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::GraphicsWindow::getEventQueue
	static int _bind_getEventQueue(lua_State *L) {
		if (_lg_typecheck_getEventQueue_overload_1(L)) return _bind_getEventQueue_overload_1(L);
		if (_lg_typecheck_getEventQueue_overload_2(L)) return _bind_getEventQueue_overload_2(L);

		luaL_error(L, "error in function getEventQueue, cannot match any of the overloads for function getEventQueue:\n  getEventQueue()\n  getEventQueue()\n");
		return 0;
	}

	// void osgViewer::GraphicsWindow::checkEvents()
	static int _bind_checkEvents(lua_State *L) {
		if (!_lg_typecheck_checkEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::checkEvents() function, expected prototype:\nvoid osgViewer::GraphicsWindow::checkEvents()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::checkEvents()");
		}
		self->checkEvents();

		return 0;
	}

	// void osgViewer::GraphicsWindow::setWindowRectangle(int x, int y, int width, int height)
	static int _bind_setWindowRectangle(lua_State *L) {
		if (!_lg_typecheck_setWindowRectangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setWindowRectangle(int x, int y, int width, int height) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setWindowRectangle(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setWindowRectangle(int, int, int, int)");
		}
		self->setWindowRectangle(x, y, width, height);

		return 0;
	}

	// bool osgViewer::GraphicsWindow::setWindowRectangleImplementation(int , int , int , int )
	static int _bind_setWindowRectangleImplementation(lua_State *L) {
		if (!_lg_typecheck_setWindowRectangleImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::setWindowRectangleImplementation(int , int , int , int ) function, expected prototype:\nbool osgViewer::GraphicsWindow::setWindowRectangleImplementation(int , int , int , int )\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);
		int _arg4=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::setWindowRectangleImplementation(int, int, int, int)");
		}
		bool lret = self->setWindowRectangleImplementation(_arg1, _arg2, _arg3, _arg4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::getWindowRectangle(int & x, int & y, int & width, int & height)
	static int _bind_getWindowRectangle(lua_State *L) {
		if (!_lg_typecheck_getWindowRectangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::getWindowRectangle(int & x, int & y, int & width, int & height) function, expected prototype:\nvoid osgViewer::GraphicsWindow::getWindowRectangle(int & x, int & y, int & width, int & height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::getWindowRectangle(int &, int &, int &, int &)");
		}
		self->getWindowRectangle(x, y, width, height);

		return 0;
	}

	// void osgViewer::GraphicsWindow::setWindowDecoration(bool flag)
	static int _bind_setWindowDecoration(lua_State *L) {
		if (!_lg_typecheck_setWindowDecoration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setWindowDecoration(bool flag) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setWindowDecoration(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setWindowDecoration(bool)");
		}
		self->setWindowDecoration(flag);

		return 0;
	}

	// bool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool )
	static int _bind_setWindowDecorationImplementation(lua_State *L) {
		if (!_lg_typecheck_setWindowDecorationImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool ) function, expected prototype:\nbool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool )\nClass arguments details:\n");
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool)");
		}
		bool lret = self->setWindowDecorationImplementation(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::getWindowDecoration() const
	static int _bind_getWindowDecoration(lua_State *L) {
		if (!_lg_typecheck_getWindowDecoration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::getWindowDecoration() const function, expected prototype:\nbool osgViewer::GraphicsWindow::getWindowDecoration() const\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::getWindowDecoration() const");
		}
		bool lret = self->getWindowDecoration();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::grabFocus()
	static int _bind_grabFocus(lua_State *L) {
		if (!_lg_typecheck_grabFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::grabFocus() function, expected prototype:\nvoid osgViewer::GraphicsWindow::grabFocus()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::grabFocus()");
		}
		self->grabFocus();

		return 0;
	}

	// void osgViewer::GraphicsWindow::grabFocusIfPointerInWindow()
	static int _bind_grabFocusIfPointerInWindow(lua_State *L) {
		if (!_lg_typecheck_grabFocusIfPointerInWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::grabFocusIfPointerInWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindow::grabFocusIfPointerInWindow()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::grabFocusIfPointerInWindow()");
		}
		self->grabFocusIfPointerInWindow();

		return 0;
	}

	// void osgViewer::GraphicsWindow::raiseWindow()
	static int _bind_raiseWindow(lua_State *L) {
		if (!_lg_typecheck_raiseWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::raiseWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindow::raiseWindow()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::raiseWindow()");
		}
		self->raiseWindow();

		return 0;
	}

	// void osgViewer::GraphicsWindow::setWindowName(const std::string & )
	static int _bind_setWindowName(lua_State *L) {
		if (!_lg_typecheck_setWindowName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setWindowName(const std::string & ) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setWindowName(const std::string & )\nClass arguments details:\n");
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setWindowName(const std::string &)");
		}
		self->setWindowName(_arg1);

		return 0;
	}

	// std::string osgViewer::GraphicsWindow::getWindowName()
	static int _bind_getWindowName(lua_State *L) {
		if (!_lg_typecheck_getWindowName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgViewer::GraphicsWindow::getWindowName() function, expected prototype:\nstd::string osgViewer::GraphicsWindow::getWindowName()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgViewer::GraphicsWindow::getWindowName()");
		}
		std::string lret = self->getWindowName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgViewer::GraphicsWindow::useCursor(bool cursorOn)
	static int _bind_useCursor(lua_State *L) {
		if (!_lg_typecheck_useCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::useCursor(bool cursorOn) function, expected prototype:\nvoid osgViewer::GraphicsWindow::useCursor(bool cursorOn)\nClass arguments details:\n");
		}

		bool cursorOn=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::useCursor(bool)");
		}
		self->useCursor(cursorOn);

		return 0;
	}

	// void osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor )
	static int _bind_setCursor(lua_State *L) {
		if (!_lg_typecheck_setCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor ) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor )\nClass arguments details:\n");
		}

		osgViewer::GraphicsWindow::MouseCursor _arg1=(osgViewer::GraphicsWindow::MouseCursor)lua_tointeger(L,2);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor)");
		}
		self->setCursor(_arg1);

		return 0;
	}

	// void osgViewer::GraphicsWindow::setSyncToVBlank(bool on)
	static int _bind_setSyncToVBlank(lua_State *L) {
		if (!_lg_typecheck_setSyncToVBlank(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setSyncToVBlank(bool on) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setSyncToVBlank(bool on)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setSyncToVBlank(bool)");
		}
		self->setSyncToVBlank(on);

		return 0;
	}

	// bool osgViewer::GraphicsWindow::getSyncToVBlank() const
	static int _bind_getSyncToVBlank(lua_State *L) {
		if (!_lg_typecheck_getSyncToVBlank(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::getSyncToVBlank() const function, expected prototype:\nbool osgViewer::GraphicsWindow::getSyncToVBlank() const\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::getSyncToVBlank() const");
		}
		bool lret = self->getSyncToVBlank();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::setSwapGroup(bool on, unsigned int group, unsigned int barrier)
	static int _bind_setSwapGroup(lua_State *L) {
		if (!_lg_typecheck_setSwapGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setSwapGroup(bool on, unsigned int group, unsigned int barrier) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setSwapGroup(bool on, unsigned int group, unsigned int barrier)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);
		unsigned int group=(unsigned int)lua_tointeger(L,3);
		unsigned int barrier=(unsigned int)lua_tointeger(L,4);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setSwapGroup(bool, unsigned int, unsigned int)");
		}
		self->setSwapGroup(on, group, barrier);

		return 0;
	}

	// void osgViewer::GraphicsWindow::getSwapGroup(bool & on, unsigned int & group, unsigned int & barrier) const
	static int _bind_getSwapGroup(lua_State *L) {
		if (!_lg_typecheck_getSwapGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::getSwapGroup(bool & on, unsigned int & group, unsigned int & barrier) const function, expected prototype:\nvoid osgViewer::GraphicsWindow::getSwapGroup(bool & on, unsigned int & group, unsigned int & barrier) const\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);
		unsigned int group=(unsigned int)lua_tointeger(L,3);
		unsigned int barrier=(unsigned int)lua_tointeger(L,4);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::getSwapGroup(bool &, unsigned int &, unsigned int &) const");
		}
		self->getSwapGroup(on, group, barrier);

		return 0;
	}

	// bool osgViewer::GraphicsWindow::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::valid() const function, expected prototype:\nbool osgViewer::GraphicsWindow::valid() const\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::valid() const");
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::realizeImplementation()
	static int _bind_realizeImplementation(lua_State *L) {
		if (!_lg_typecheck_realizeImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::realizeImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindow::realizeImplementation()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::realizeImplementation()");
		}
		bool lret = self->realizeImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::isRealizedImplementation() const
	static int _bind_isRealizedImplementation(lua_State *L) {
		if (!_lg_typecheck_isRealizedImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::isRealizedImplementation() const function, expected prototype:\nbool osgViewer::GraphicsWindow::isRealizedImplementation() const\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::isRealizedImplementation() const");
		}
		bool lret = self->isRealizedImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::closeImplementation()
	static int _bind_closeImplementation(lua_State *L) {
		if (!_lg_typecheck_closeImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::closeImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindow::closeImplementation()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::closeImplementation()");
		}
		self->closeImplementation();

		return 0;
	}

	// bool osgViewer::GraphicsWindow::makeCurrentImplementation()
	static int _bind_makeCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_makeCurrentImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::makeCurrentImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindow::makeCurrentImplementation()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::makeCurrentImplementation()");
		}
		bool lret = self->makeCurrentImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::releaseContextImplementation()
	static int _bind_releaseContextImplementation(lua_State *L) {
		if (!_lg_typecheck_releaseContextImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::releaseContextImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindow::releaseContextImplementation()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::releaseContextImplementation()");
		}
		bool lret = self->releaseContextImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int )
	static int _bind_bindPBufferToTextureImplementation(lua_State *L) {
		if (!_lg_typecheck_bindPBufferToTextureImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int ) function, expected prototype:\nvoid osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int)");
		}
		self->bindPBufferToTextureImplementation(_arg1);

		return 0;
	}

	// void osgViewer::GraphicsWindow::swapBuffersImplementation()
	static int _bind_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::swapBuffersImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindow::swapBuffersImplementation()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::swapBuffersImplementation()");
		}
		self->swapBuffersImplementation();

		return 0;
	}

	// void osgViewer::GraphicsWindow::getViews(osgViewer::GraphicsWindow::Views & views)
	static int _bind_getViews(lua_State *L) {
		if (!_lg_typecheck_getViews(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::getViews(osgViewer::GraphicsWindow::Views & views) function, expected prototype:\nvoid osgViewer::GraphicsWindow::getViews(osgViewer::GraphicsWindow::Views & views)\nClass arguments details:\narg 1 ID = 51540588\n");
		}

		osgViewer::GraphicsWindow::Views* views_ptr=(Luna< osgViewer::GraphicsWindow::Views >::check(L,2));
		if( !views_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg views in osgViewer::GraphicsWindow::getViews function");
		}
		osgViewer::GraphicsWindow::Views & views=*views_ptr;

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::getViews(osgViewer::GraphicsWindow::Views &)");
		}
		self->getViews(views);

		return 0;
	}

	// void osgViewer::GraphicsWindow::requestRedraw()
	static int _bind_requestRedraw(lua_State *L) {
		if (!_lg_typecheck_requestRedraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::requestRedraw() function, expected prototype:\nvoid osgViewer::GraphicsWindow::requestRedraw()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::requestRedraw()");
		}
		self->requestRedraw();

		return 0;
	}

	// void osgViewer::GraphicsWindow::requestContinuousUpdate(bool needed = true)
	static int _bind_requestContinuousUpdate(lua_State *L) {
		if (!_lg_typecheck_requestContinuousUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::requestContinuousUpdate(bool needed = true) function, expected prototype:\nvoid osgViewer::GraphicsWindow::requestContinuousUpdate(bool needed = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool needed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::requestContinuousUpdate(bool)");
		}
		self->requestContinuousUpdate(needed);

		return 0;
	}

	// void osgViewer::GraphicsWindow::requestWarpPointer(float x, float y)
	static int _bind_requestWarpPointer(lua_State *L) {
		if (!_lg_typecheck_requestWarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::requestWarpPointer(float x, float y) function, expected prototype:\nvoid osgViewer::GraphicsWindow::requestWarpPointer(float x, float y)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgViewer::GraphicsWindow* self=dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::requestWarpPointer(float, float)");
		}
		self->requestWarpPointer(x, y);

		return 0;
	}


	// Operator binds:

};

osgViewer::GraphicsWindow* LunaTraits< osgViewer::GraphicsWindow >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)

	// Abstract operators:
}

void LunaTraits< osgViewer::GraphicsWindow >::_bind_dtor(osgViewer::GraphicsWindow* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::GraphicsWindow >::className[] = "GraphicsWindow";
const char LunaTraits< osgViewer::GraphicsWindow >::fullName[] = "osgViewer::GraphicsWindow";
const char LunaTraits< osgViewer::GraphicsWindow >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::GraphicsWindow >::parents[] = {"osg.GraphicsContext", "osgGA.GUIActionAdapter", 0};
const int LunaTraits< osgViewer::GraphicsWindow >::hash = 90342307;
const int LunaTraits< osgViewer::GraphicsWindow >::uniqueIDs[] = {50169651, 85302998,0};

luna_RegType LunaTraits< osgViewer::GraphicsWindow >::methods[] = {
	{"libraryName", &luna_wrapper_osgViewer_GraphicsWindow::_bind_libraryName},
	{"className", &luna_wrapper_osgViewer_GraphicsWindow::_bind_className},
	{"setEventQueue", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setEventQueue},
	{"getEventQueue", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getEventQueue},
	{"checkEvents", &luna_wrapper_osgViewer_GraphicsWindow::_bind_checkEvents},
	{"setWindowRectangle", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setWindowRectangle},
	{"setWindowRectangleImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setWindowRectangleImplementation},
	{"getWindowRectangle", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getWindowRectangle},
	{"setWindowDecoration", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setWindowDecoration},
	{"setWindowDecorationImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setWindowDecorationImplementation},
	{"getWindowDecoration", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getWindowDecoration},
	{"grabFocus", &luna_wrapper_osgViewer_GraphicsWindow::_bind_grabFocus},
	{"grabFocusIfPointerInWindow", &luna_wrapper_osgViewer_GraphicsWindow::_bind_grabFocusIfPointerInWindow},
	{"raiseWindow", &luna_wrapper_osgViewer_GraphicsWindow::_bind_raiseWindow},
	{"setWindowName", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setWindowName},
	{"getWindowName", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getWindowName},
	{"useCursor", &luna_wrapper_osgViewer_GraphicsWindow::_bind_useCursor},
	{"setCursor", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setCursor},
	{"setSyncToVBlank", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setSyncToVBlank},
	{"getSyncToVBlank", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getSyncToVBlank},
	{"setSwapGroup", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setSwapGroup},
	{"getSwapGroup", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getSwapGroup},
	{"valid", &luna_wrapper_osgViewer_GraphicsWindow::_bind_valid},
	{"realizeImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_realizeImplementation},
	{"isRealizedImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_isRealizedImplementation},
	{"closeImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_closeImplementation},
	{"makeCurrentImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_makeCurrentImplementation},
	{"releaseContextImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_releaseContextImplementation},
	{"bindPBufferToTextureImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_bindPBufferToTextureImplementation},
	{"swapBuffersImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_swapBuffersImplementation},
	{"getViews", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getViews},
	{"requestRedraw", &luna_wrapper_osgViewer_GraphicsWindow::_bind_requestRedraw},
	{"requestContinuousUpdate", &luna_wrapper_osgViewer_GraphicsWindow::_bind_requestContinuousUpdate},
	{"requestWarpPointer", &luna_wrapper_osgViewer_GraphicsWindow::_bind_requestWarpPointer},
	{"__eq", &luna_wrapper_osgViewer_GraphicsWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::GraphicsWindow >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_GraphicsWindow::_cast_from_Referenced},
	{"osgGA::GUIActionAdapter", &luna_wrapper_osgViewer_GraphicsWindow::_cast_from_GUIActionAdapter},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::GraphicsWindow >::enumValues[] = {
	{"InheritCursor", osgViewer::GraphicsWindow::InheritCursor},
	{"NoCursor", osgViewer::GraphicsWindow::NoCursor},
	{"RightArrowCursor", osgViewer::GraphicsWindow::RightArrowCursor},
	{"LeftArrowCursor", osgViewer::GraphicsWindow::LeftArrowCursor},
	{"InfoCursor", osgViewer::GraphicsWindow::InfoCursor},
	{"DestroyCursor", osgViewer::GraphicsWindow::DestroyCursor},
	{"HelpCursor", osgViewer::GraphicsWindow::HelpCursor},
	{"CycleCursor", osgViewer::GraphicsWindow::CycleCursor},
	{"SprayCursor", osgViewer::GraphicsWindow::SprayCursor},
	{"WaitCursor", osgViewer::GraphicsWindow::WaitCursor},
	{"TextCursor", osgViewer::GraphicsWindow::TextCursor},
	{"CrosshairCursor", osgViewer::GraphicsWindow::CrosshairCursor},
	{"HandCursor", osgViewer::GraphicsWindow::HandCursor},
	{"UpDownCursor", osgViewer::GraphicsWindow::UpDownCursor},
	{"LeftRightCursor", osgViewer::GraphicsWindow::LeftRightCursor},
	{"TopSideCursor", osgViewer::GraphicsWindow::TopSideCursor},
	{"BottomSideCursor", osgViewer::GraphicsWindow::BottomSideCursor},
	{"LeftSideCursor", osgViewer::GraphicsWindow::LeftSideCursor},
	{"RightSideCursor", osgViewer::GraphicsWindow::RightSideCursor},
	{"TopLeftCorner", osgViewer::GraphicsWindow::TopLeftCorner},
	{"TopRightCorner", osgViewer::GraphicsWindow::TopRightCorner},
	{"BottomRightCorner", osgViewer::GraphicsWindow::BottomRightCorner},
	{"BottomLeftCorner", osgViewer::GraphicsWindow::BottomLeftCorner},
	{0,0}
};


