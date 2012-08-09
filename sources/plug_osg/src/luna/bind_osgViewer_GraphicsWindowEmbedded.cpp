#include <plug_common.h>

class luna_wrapper_osgViewer_GraphicsWindowEmbedded {
public:
	typedef Luna< osgViewer::GraphicsWindowEmbedded > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::GraphicsWindowEmbedded* ptr= dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::GraphicsWindowEmbedded >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GUIActionAdapter(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::GraphicsWindowEmbedded* ptr= dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::GraphicsWindowEmbedded >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_swapBuffersImplementation(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgViewer::GraphicsWindowEmbedded::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindowEmbedded::libraryName() const function, expected prototype:\nconst char * osgViewer::GraphicsWindowEmbedded::libraryName() const\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindowEmbedded::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::GraphicsWindowEmbedded::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindowEmbedded::className() const function, expected prototype:\nconst char * osgViewer::GraphicsWindowEmbedded::className() const\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindowEmbedded::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::init()
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::init() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::init()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::init()");
		}
		self->init();

		return 0;
	}

	// bool osgViewer::GraphicsWindowEmbedded::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::valid() const function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::valid() const\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::valid() const");
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindowEmbedded::realizeImplementation()
	static int _bind_realizeImplementation(lua_State *L) {
		if (!_lg_typecheck_realizeImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::realizeImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::realizeImplementation()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::realizeImplementation()");
		}
		bool lret = self->realizeImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindowEmbedded::isRealizedImplementation() const
	static int _bind_isRealizedImplementation(lua_State *L) {
		if (!_lg_typecheck_isRealizedImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::isRealizedImplementation() const function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::isRealizedImplementation() const\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::isRealizedImplementation() const");
		}
		bool lret = self->isRealizedImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::closeImplementation()
	static int _bind_closeImplementation(lua_State *L) {
		if (!_lg_typecheck_closeImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::closeImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::closeImplementation()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::closeImplementation()");
		}
		self->closeImplementation();

		return 0;
	}

	// bool osgViewer::GraphicsWindowEmbedded::makeCurrentImplementation()
	static int _bind_makeCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_makeCurrentImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::makeCurrentImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::makeCurrentImplementation()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::makeCurrentImplementation()");
		}
		bool lret = self->makeCurrentImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindowEmbedded::releaseContextImplementation()
	static int _bind_releaseContextImplementation(lua_State *L) {
		if (!_lg_typecheck_releaseContextImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::releaseContextImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::releaseContextImplementation()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::releaseContextImplementation()");
		}
		bool lret = self->releaseContextImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::swapBuffersImplementation()
	static int _bind_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::swapBuffersImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::swapBuffersImplementation()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::swapBuffersImplementation()");
		}
		self->swapBuffersImplementation();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::grabFocus()
	static int _bind_grabFocus(lua_State *L) {
		if (!_lg_typecheck_grabFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::grabFocus() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::grabFocus()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::grabFocus()");
		}
		self->grabFocus();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::grabFocusIfPointerInWindow()
	static int _bind_grabFocusIfPointerInWindow(lua_State *L) {
		if (!_lg_typecheck_grabFocusIfPointerInWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::grabFocusIfPointerInWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::grabFocusIfPointerInWindow()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::grabFocusIfPointerInWindow()");
		}
		self->grabFocusIfPointerInWindow();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::raiseWindow()
	static int _bind_raiseWindow(lua_State *L) {
		if (!_lg_typecheck_raiseWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::raiseWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::raiseWindow()\nClass arguments details:\n");
		}


		osgViewer::GraphicsWindowEmbedded* self=dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::raiseWindow()");
		}
		self->raiseWindow();

		return 0;
	}


	// Operator binds:

};

osgViewer::GraphicsWindowEmbedded* LunaTraits< osgViewer::GraphicsWindowEmbedded >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)

	// Abstract operators:
}

void LunaTraits< osgViewer::GraphicsWindowEmbedded >::_bind_dtor(osgViewer::GraphicsWindowEmbedded* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::GraphicsWindowEmbedded >::className[] = "GraphicsWindowEmbedded";
const char LunaTraits< osgViewer::GraphicsWindowEmbedded >::fullName[] = "osgViewer::GraphicsWindowEmbedded";
const char LunaTraits< osgViewer::GraphicsWindowEmbedded >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::GraphicsWindowEmbedded >::parents[] = {"osgViewer.GraphicsWindow", 0};
const int LunaTraits< osgViewer::GraphicsWindowEmbedded >::hash = 38900406;
const int LunaTraits< osgViewer::GraphicsWindowEmbedded >::uniqueIDs[] = {50169651, 85302998,0};

luna_RegType LunaTraits< osgViewer::GraphicsWindowEmbedded >::methods[] = {
	{"libraryName", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_libraryName},
	{"className", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_className},
	{"init", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_init},
	{"valid", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_valid},
	{"realizeImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_realizeImplementation},
	{"isRealizedImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_isRealizedImplementation},
	{"closeImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_closeImplementation},
	{"makeCurrentImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_makeCurrentImplementation},
	{"releaseContextImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_releaseContextImplementation},
	{"swapBuffersImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_swapBuffersImplementation},
	{"grabFocus", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_grabFocus},
	{"grabFocusIfPointerInWindow", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_grabFocusIfPointerInWindow},
	{"raiseWindow", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_raiseWindow},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::GraphicsWindowEmbedded >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_cast_from_Referenced},
	{"osgGA::GUIActionAdapter", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_cast_from_GUIActionAdapter},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::GraphicsWindowEmbedded >::enumValues[] = {
	{0,0}
};


