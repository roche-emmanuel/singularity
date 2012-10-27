#include <plug_common.h>

class luna_wrapper_osgUtil_GLObjectsVisitor {
public:
	typedef Luna< osgUtil::GLObjectsVisitor > luna_t;

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
		osgUtil::GLObjectsVisitor* ptr= dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::GLObjectsVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::GLObjectsVisitor::GLObjectsVisitor(unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)
	static osgUtil::GLObjectsVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::GLObjectsVisitor::GLObjectsVisitor(unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) function, expected prototype:\nosgUtil::GLObjectsVisitor::GLObjectsVisitor(unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES;

		return new osgUtil::GLObjectsVisitor(mode);
	}


	// Function binds:
	// const char * osgUtil::GLObjectsVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::GLObjectsVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::GLObjectsVisitor::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::GLObjectsVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::GLObjectsVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::GLObjectsVisitor::className() const function, expected prototype:\nconst char * osgUtil::GLObjectsVisitor::className() const\nClass arguments details:\n");
		}


		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::GLObjectsVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::GLObjectsVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsVisitor::reset() function, expected prototype:\nvoid osgUtil::GLObjectsVisitor::reset()\nClass arguments details:\n");
		}


		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsVisitor::reset()");
		}
		self->reset();

		return 0;
	}

	// void osgUtil::GLObjectsVisitor::setMode(unsigned int mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsVisitor::setMode(unsigned int mode) function, expected prototype:\nvoid osgUtil::GLObjectsVisitor::setMode(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsVisitor::setMode(unsigned int)");
		}
		self->setMode(mode);

		return 0;
	}

	// unsigned int osgUtil::GLObjectsVisitor::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::GLObjectsVisitor::getMode() const function, expected prototype:\nunsigned int osgUtil::GLObjectsVisitor::getMode() const\nClass arguments details:\n");
		}


		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::GLObjectsVisitor::getMode() const");
		}
		unsigned int lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::GLObjectsVisitor::setState(osg::State * state)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsVisitor::setState(osg::State * state) function, expected prototype:\nvoid osgUtil::GLObjectsVisitor::setState(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsVisitor::setState(osg::State *)");
		}
		self->setState(state);

		return 0;
	}

	// osg::State * osgUtil::GLObjectsVisitor::getState()
	static int _bind_getState(lua_State *L) {
		if (!_lg_typecheck_getState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::State * osgUtil::GLObjectsVisitor::getState() function, expected prototype:\nosg::State * osgUtil::GLObjectsVisitor::getState()\nClass arguments details:\n");
		}


		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::State * osgUtil::GLObjectsVisitor::getState()");
		}
		osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::GLObjectsVisitor::setRenderInfo(osg::RenderInfo & renderInfo)
	static int _bind_setRenderInfo(lua_State *L) {
		if (!_lg_typecheck_setRenderInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsVisitor::setRenderInfo(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osgUtil::GLObjectsVisitor::setRenderInfo(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::GLObjectsVisitor::setRenderInfo function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsVisitor::setRenderInfo(osg::RenderInfo &)");
		}
		self->setRenderInfo(renderInfo);

		return 0;
	}

	// osg::RenderInfo & osgUtil::GLObjectsVisitor::getRenderInfo()
	static int _bind_getRenderInfo(lua_State *L) {
		if (!_lg_typecheck_getRenderInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RenderInfo & osgUtil::GLObjectsVisitor::getRenderInfo() function, expected prototype:\nosg::RenderInfo & osgUtil::GLObjectsVisitor::getRenderInfo()\nClass arguments details:\n");
		}


		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::RenderInfo & osgUtil::GLObjectsVisitor::getRenderInfo()");
		}
		const osg::RenderInfo* lret = &self->getRenderInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RenderInfo >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::GLObjectsVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::GLObjectsVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::GLObjectsVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsVisitor::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::GLObjectsVisitor::apply(osg::Geode & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::GLObjectsVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::GLObjectsVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsVisitor::apply(osg::Geode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::GLObjectsVisitor::apply(osg::Drawable & drawable)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsVisitor::apply(osg::Drawable & drawable) function, expected prototype:\nvoid osgUtil::GLObjectsVisitor::apply(osg::Drawable & drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Drawable* drawable_ptr=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::GLObjectsVisitor::apply function");
		}
		osg::Drawable & drawable=*drawable_ptr;

		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsVisitor::apply(osg::Drawable &)");
		}
		self->apply(drawable);

		return 0;
	}

	// void osgUtil::GLObjectsVisitor::apply(osg::StateSet & stateset)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsVisitor::apply(osg::StateSet & stateset) function, expected prototype:\nvoid osgUtil::GLObjectsVisitor::apply(osg::StateSet & stateset)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* stateset_ptr=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));
		if( !stateset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stateset in osgUtil::GLObjectsVisitor::apply function");
		}
		osg::StateSet & stateset=*stateset_ptr;

		osgUtil::GLObjectsVisitor* self=dynamic_cast< osgUtil::GLObjectsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsVisitor::apply(osg::StateSet &)");
		}
		self->apply(stateset);

		return 0;
	}

	// Overload binder for osgUtil::GLObjectsVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Drawable &)\n  apply(osg::StateSet &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::GLObjectsVisitor* LunaTraits< osgUtil::GLObjectsVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_GLObjectsVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::GLObjectsVisitor >::_bind_dtor(osgUtil::GLObjectsVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::GLObjectsVisitor >::className[] = "GLObjectsVisitor";
const char LunaTraits< osgUtil::GLObjectsVisitor >::fullName[] = "osgUtil::GLObjectsVisitor";
const char LunaTraits< osgUtil::GLObjectsVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::GLObjectsVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::GLObjectsVisitor >::hash = 44821489;
const int LunaTraits< osgUtil::GLObjectsVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::GLObjectsVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_GLObjectsVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_GLObjectsVisitor::_bind_className},
	{"reset", &luna_wrapper_osgUtil_GLObjectsVisitor::_bind_reset},
	{"setMode", &luna_wrapper_osgUtil_GLObjectsVisitor::_bind_setMode},
	{"getMode", &luna_wrapper_osgUtil_GLObjectsVisitor::_bind_getMode},
	{"setState", &luna_wrapper_osgUtil_GLObjectsVisitor::_bind_setState},
	{"getState", &luna_wrapper_osgUtil_GLObjectsVisitor::_bind_getState},
	{"setRenderInfo", &luna_wrapper_osgUtil_GLObjectsVisitor::_bind_setRenderInfo},
	{"getRenderInfo", &luna_wrapper_osgUtil_GLObjectsVisitor::_bind_getRenderInfo},
	{"apply", &luna_wrapper_osgUtil_GLObjectsVisitor::_bind_apply},
	{"__eq", &luna_wrapper_osgUtil_GLObjectsVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::GLObjectsVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_GLObjectsVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::GLObjectsVisitor >::enumValues[] = {
	{"SWITCH_ON_DISPLAY_LISTS", osgUtil::GLObjectsVisitor::SWITCH_ON_DISPLAY_LISTS},
	{"SWITCH_OFF_DISPLAY_LISTS", osgUtil::GLObjectsVisitor::SWITCH_OFF_DISPLAY_LISTS},
	{"COMPILE_DISPLAY_LISTS", osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS},
	{"COMPILE_STATE_ATTRIBUTES", osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES},
	{"RELEASE_DISPLAY_LISTS", osgUtil::GLObjectsVisitor::RELEASE_DISPLAY_LISTS},
	{"RELEASE_STATE_ATTRIBUTES", osgUtil::GLObjectsVisitor::RELEASE_STATE_ATTRIBUTES},
	{"SWITCH_ON_VERTEX_BUFFER_OBJECTS", osgUtil::GLObjectsVisitor::SWITCH_ON_VERTEX_BUFFER_OBJECTS},
	{"SWITCH_OFF_VERTEX_BUFFER_OBJECTS", osgUtil::GLObjectsVisitor::SWITCH_OFF_VERTEX_BUFFER_OBJECTS},
	{"CHECK_BLACK_LISTED_MODES", osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES},
	{0,0}
};


