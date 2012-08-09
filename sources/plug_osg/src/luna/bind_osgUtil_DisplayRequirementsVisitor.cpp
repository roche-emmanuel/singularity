#include <plug_common.h>

class luna_wrapper_osgUtil_DisplayRequirementsVisitor {
public:
	typedef Luna< osgUtil::DisplayRequirementsVisitor > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::DisplayRequirementsVisitor* ptr= dynamic_cast< osgUtil::DisplayRequirementsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::DisplayRequirementsVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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

	inline static bool _lg_typecheck_setDisplaySettings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDisplaySettings(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::DisplayRequirementsVisitor::DisplayRequirementsVisitor()
	static osgUtil::DisplayRequirementsVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::DisplayRequirementsVisitor::DisplayRequirementsVisitor() function, expected prototype:\nosgUtil::DisplayRequirementsVisitor::DisplayRequirementsVisitor()\nClass arguments details:\n");
		}


		return new osgUtil::DisplayRequirementsVisitor();
	}


	// Function binds:
	// const char * osgUtil::DisplayRequirementsVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DisplayRequirementsVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::DisplayRequirementsVisitor::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::DisplayRequirementsVisitor* self=dynamic_cast< osgUtil::DisplayRequirementsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::DisplayRequirementsVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::DisplayRequirementsVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DisplayRequirementsVisitor::className() const function, expected prototype:\nconst char * osgUtil::DisplayRequirementsVisitor::className() const\nClass arguments details:\n");
		}


		osgUtil::DisplayRequirementsVisitor* self=dynamic_cast< osgUtil::DisplayRequirementsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::DisplayRequirementsVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::DisplayRequirementsVisitor::setDisplaySettings(osg::DisplaySettings * ds)
	static int _bind_setDisplaySettings(lua_State *L) {
		if (!_lg_typecheck_setDisplaySettings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::setDisplaySettings(osg::DisplaySettings * ds) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::setDisplaySettings(osg::DisplaySettings * ds)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::DisplaySettings* ds=dynamic_cast< osg::DisplaySettings* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::DisplayRequirementsVisitor* self=dynamic_cast< osgUtil::DisplayRequirementsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::setDisplaySettings(osg::DisplaySettings *)");
		}
		self->setDisplaySettings(ds);

		return 0;
	}

	// const osg::DisplaySettings * osgUtil::DisplayRequirementsVisitor::getDisplaySettings() const
	static int _bind_getDisplaySettings(lua_State *L) {
		if (!_lg_typecheck_getDisplaySettings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::DisplaySettings * osgUtil::DisplayRequirementsVisitor::getDisplaySettings() const function, expected prototype:\nconst osg::DisplaySettings * osgUtil::DisplayRequirementsVisitor::getDisplaySettings() const\nClass arguments details:\n");
		}


		osgUtil::DisplayRequirementsVisitor* self=dynamic_cast< osgUtil::DisplayRequirementsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::DisplaySettings * osgUtil::DisplayRequirementsVisitor::getDisplaySettings() const");
		}
		const osg::DisplaySettings * lret = self->getDisplaySettings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::DisplayRequirementsVisitor::applyStateSet(osg::StateSet & stateset)
	static int _bind_applyStateSet(lua_State *L) {
		if (!_lg_typecheck_applyStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::applyStateSet(osg::StateSet & stateset) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::applyStateSet(osg::StateSet & stateset)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* stateset_ptr=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));
		if( !stateset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stateset in osgUtil::DisplayRequirementsVisitor::applyStateSet function");
		}
		osg::StateSet & stateset=*stateset_ptr;

		osgUtil::DisplayRequirementsVisitor* self=dynamic_cast< osgUtil::DisplayRequirementsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::applyStateSet(osg::StateSet &)");
		}
		self->applyStateSet(stateset);

		return 0;
	}

	// void osgUtil::DisplayRequirementsVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::DisplayRequirementsVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::DisplayRequirementsVisitor* self=dynamic_cast< osgUtil::DisplayRequirementsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::DisplayRequirementsVisitor::apply(osg::Geode & geode)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::DisplayRequirementsVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::DisplayRequirementsVisitor* self=dynamic_cast< osgUtil::DisplayRequirementsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}

	// Overload binder for osgUtil::DisplayRequirementsVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::DisplayRequirementsVisitor* LunaTraits< osgUtil::DisplayRequirementsVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::DisplayRequirementsVisitor >::_bind_dtor(osgUtil::DisplayRequirementsVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::DisplayRequirementsVisitor >::className[] = "DisplayRequirementsVisitor";
const char LunaTraits< osgUtil::DisplayRequirementsVisitor >::fullName[] = "osgUtil::DisplayRequirementsVisitor";
const char LunaTraits< osgUtil::DisplayRequirementsVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::DisplayRequirementsVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::DisplayRequirementsVisitor >::hash = 54611615;
const int LunaTraits< osgUtil::DisplayRequirementsVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::DisplayRequirementsVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_className},
	{"setDisplaySettings", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_setDisplaySettings},
	{"getDisplaySettings", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_getDisplaySettings},
	{"applyStateSet", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_applyStateSet},
	{"apply", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::DisplayRequirementsVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::DisplayRequirementsVisitor >::enumValues[] = {
	{0,0}
};


