#include <plug_common.h>

class luna_wrapper_GraphicsWindowWX {
public:
	typedef Luna< GraphicsWindowWX > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		GraphicsWindowWX* ptr= dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GraphicsWindowWX >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_init(lua_State *L) {
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

	inline static bool _lg_typecheck_useCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeCurrentImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_swapBuffersImplementation(lua_State *L) {
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

	inline static bool _lg_typecheck_releaseContextImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// GraphicsWindowWX::GraphicsWindowWX(wxGLCanvas * canvas, wxGLContext * context)
	static GraphicsWindowWX* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GraphicsWindowWX::GraphicsWindowWX(wxGLCanvas * canvas, wxGLContext * context) function, expected prototype:\nGraphicsWindowWX::GraphicsWindowWX(wxGLCanvas * canvas, wxGLContext * context)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxGLCanvas* canvas=(Luna< wxGLCanvas >::check(L,1));
		wxGLContext* context=(Luna< wxGLContext >::check(L,2));

		return new GraphicsWindowWX(canvas, context);
	}


	// Function binds:
	// void GraphicsWindowWX::init()
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::init() function, expected prototype:\nvoid GraphicsWindowWX::init()\nClass arguments details:\n");
		}


		GraphicsWindowWX* self=dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::init()");
		}
		self->init();

		return 0;
	}

	// void GraphicsWindowWX::grabFocus()
	static int _bind_grabFocus(lua_State *L) {
		if (!_lg_typecheck_grabFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::grabFocus() function, expected prototype:\nvoid GraphicsWindowWX::grabFocus()\nClass arguments details:\n");
		}


		GraphicsWindowWX* self=dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::grabFocus()");
		}
		self->grabFocus();

		return 0;
	}

	// void GraphicsWindowWX::grabFocusIfPointerInWindow()
	static int _bind_grabFocusIfPointerInWindow(lua_State *L) {
		if (!_lg_typecheck_grabFocusIfPointerInWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::grabFocusIfPointerInWindow() function, expected prototype:\nvoid GraphicsWindowWX::grabFocusIfPointerInWindow()\nClass arguments details:\n");
		}


		GraphicsWindowWX* self=dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::grabFocusIfPointerInWindow()");
		}
		self->grabFocusIfPointerInWindow();

		return 0;
	}

	// void GraphicsWindowWX::useCursor(bool cursorOn)
	static int _bind_useCursor(lua_State *L) {
		if (!_lg_typecheck_useCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::useCursor(bool cursorOn) function, expected prototype:\nvoid GraphicsWindowWX::useCursor(bool cursorOn)\nClass arguments details:\n");
		}

		bool cursorOn=(bool)(lua_toboolean(L,2)==1);

		GraphicsWindowWX* self=dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::useCursor(bool)");
		}
		self->useCursor(cursorOn);

		return 0;
	}

	// bool GraphicsWindowWX::makeCurrentImplementation()
	static int _bind_makeCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_makeCurrentImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::makeCurrentImplementation() function, expected prototype:\nbool GraphicsWindowWX::makeCurrentImplementation()\nClass arguments details:\n");
		}


		GraphicsWindowWX* self=dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::makeCurrentImplementation()");
		}
		bool lret = self->makeCurrentImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GraphicsWindowWX::swapBuffersImplementation()
	static int _bind_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::swapBuffersImplementation() function, expected prototype:\nvoid GraphicsWindowWX::swapBuffersImplementation()\nClass arguments details:\n");
		}


		GraphicsWindowWX* self=dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::swapBuffersImplementation()");
		}
		self->swapBuffersImplementation();

		return 0;
	}

	// bool GraphicsWindowWX::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::valid() const function, expected prototype:\nbool GraphicsWindowWX::valid() const\nClass arguments details:\n");
		}


		GraphicsWindowWX* self=dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::valid() const");
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool GraphicsWindowWX::realizeImplementation()
	static int _bind_realizeImplementation(lua_State *L) {
		if (!_lg_typecheck_realizeImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::realizeImplementation() function, expected prototype:\nbool GraphicsWindowWX::realizeImplementation()\nClass arguments details:\n");
		}


		GraphicsWindowWX* self=dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::realizeImplementation()");
		}
		bool lret = self->realizeImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool GraphicsWindowWX::isRealizedImplementation() const
	static int _bind_isRealizedImplementation(lua_State *L) {
		if (!_lg_typecheck_isRealizedImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::isRealizedImplementation() const function, expected prototype:\nbool GraphicsWindowWX::isRealizedImplementation() const\nClass arguments details:\n");
		}


		GraphicsWindowWX* self=dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::isRealizedImplementation() const");
		}
		bool lret = self->isRealizedImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GraphicsWindowWX::closeImplementation()
	static int _bind_closeImplementation(lua_State *L) {
		if (!_lg_typecheck_closeImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::closeImplementation() function, expected prototype:\nvoid GraphicsWindowWX::closeImplementation()\nClass arguments details:\n");
		}


		GraphicsWindowWX* self=dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::closeImplementation()");
		}
		self->closeImplementation();

		return 0;
	}

	// bool GraphicsWindowWX::releaseContextImplementation()
	static int _bind_releaseContextImplementation(lua_State *L) {
		if (!_lg_typecheck_releaseContextImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::releaseContextImplementation() function, expected prototype:\nbool GraphicsWindowWX::releaseContextImplementation()\nClass arguments details:\n");
		}


		GraphicsWindowWX* self=dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::releaseContextImplementation()");
		}
		bool lret = self->releaseContextImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

GraphicsWindowWX* LunaTraits< GraphicsWindowWX >::_bind_ctor(lua_State *L) {
	return luna_wrapper_GraphicsWindowWX::_bind_ctor(L);
}

void LunaTraits< GraphicsWindowWX >::_bind_dtor(GraphicsWindowWX* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< GraphicsWindowWX >::className[] = "GraphicsWindowWX";
const char LunaTraits< GraphicsWindowWX >::fullName[] = "GraphicsWindowWX";
const char LunaTraits< GraphicsWindowWX >::moduleName[] = "osgWX";
const char* LunaTraits< GraphicsWindowWX >::parents[] = {"osgViewer.GraphicsWindow", 0};
const int LunaTraits< GraphicsWindowWX >::hash = 43283849;
const int LunaTraits< GraphicsWindowWX >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< GraphicsWindowWX >::methods[] = {
	{"init", &luna_wrapper_GraphicsWindowWX::_bind_init},
	{"grabFocus", &luna_wrapper_GraphicsWindowWX::_bind_grabFocus},
	{"grabFocusIfPointerInWindow", &luna_wrapper_GraphicsWindowWX::_bind_grabFocusIfPointerInWindow},
	{"useCursor", &luna_wrapper_GraphicsWindowWX::_bind_useCursor},
	{"makeCurrentImplementation", &luna_wrapper_GraphicsWindowWX::_bind_makeCurrentImplementation},
	{"swapBuffersImplementation", &luna_wrapper_GraphicsWindowWX::_bind_swapBuffersImplementation},
	{"valid", &luna_wrapper_GraphicsWindowWX::_bind_valid},
	{"realizeImplementation", &luna_wrapper_GraphicsWindowWX::_bind_realizeImplementation},
	{"isRealizedImplementation", &luna_wrapper_GraphicsWindowWX::_bind_isRealizedImplementation},
	{"closeImplementation", &luna_wrapper_GraphicsWindowWX::_bind_closeImplementation},
	{"releaseContextImplementation", &luna_wrapper_GraphicsWindowWX::_bind_releaseContextImplementation},
	{0,0}
};

luna_ConverterType LunaTraits< GraphicsWindowWX >::converters[] = {
	{"osg::Referenced", &luna_wrapper_GraphicsWindowWX::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< GraphicsWindowWX >::enumValues[] = {
	{0,0}
};


