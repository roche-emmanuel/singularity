#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_TriStripVisitor.h>

class luna_wrapper_osgUtil_TriStripVisitor {
public:
	typedef Luna< osgUtil::TriStripVisitor > luna_t;

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
		osgUtil::TriStripVisitor* ptr= dynamic_cast< osgUtil::TriStripVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::TriStripVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85233381)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !dynamic_cast< osgUtil::Optimizer* >(Luna< osgUtil::Optimizer >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85233381)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !dynamic_cast< osgUtil::Optimizer* >(Luna< osgUtil::Optimizer >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_stripify_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_stripify_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCacheSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCacheSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinStripSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinStripSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::TriStripVisitor::TriStripVisitor(osgUtil::Optimizer * optimizer = 0)
	static osgUtil::TriStripVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::TriStripVisitor::TriStripVisitor(osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::TriStripVisitor::TriStripVisitor(osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 1 ID = 85233381\n");
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>0 ? (Luna< osgUtil::Optimizer >::check(L,1)) : (osgUtil::Optimizer*)0;

		return new osgUtil::TriStripVisitor(optimizer);
	}

	// osgUtil::TriStripVisitor::TriStripVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0)
	static osgUtil::TriStripVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::TriStripVisitor::TriStripVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::TriStripVisitor::TriStripVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 2 ID = 85233381\n");
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>1 ? (Luna< osgUtil::Optimizer >::check(L,2)) : (osgUtil::Optimizer*)0;

		return new wrapper_osgUtil_TriStripVisitor(L,NULL, optimizer);
	}

	// Overload binder for osgUtil::TriStripVisitor::TriStripVisitor
	static osgUtil::TriStripVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TriStripVisitor, cannot match any of the overloads for function TriStripVisitor:\n  TriStripVisitor(osgUtil::Optimizer *)\n  TriStripVisitor(lua_Table *, osgUtil::Optimizer *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::TriStripVisitor::stripify(osg::Geometry & drawable)
	static int _bind_stripify_overload_1(lua_State *L) {
		if (!_lg_typecheck_stripify_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::stripify(osg::Geometry & drawable) function, expected prototype:\nvoid osgUtil::TriStripVisitor::stripify(osg::Geometry & drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geometry* drawable_ptr=dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::TriStripVisitor::stripify function");
		}
		osg::Geometry & drawable=*drawable_ptr;

		osgUtil::TriStripVisitor* self=dynamic_cast< osgUtil::TriStripVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::stripify(osg::Geometry &)");
		}
		self->stripify(drawable);

		return 0;
	}

	// void osgUtil::TriStripVisitor::stripify()
	static int _bind_stripify_overload_2(lua_State *L) {
		if (!_lg_typecheck_stripify_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::stripify() function, expected prototype:\nvoid osgUtil::TriStripVisitor::stripify()\nClass arguments details:\n");
		}


		osgUtil::TriStripVisitor* self=dynamic_cast< osgUtil::TriStripVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::stripify()");
		}
		self->stripify();

		return 0;
	}

	// Overload binder for osgUtil::TriStripVisitor::stripify
	static int _bind_stripify(lua_State *L) {
		if (_lg_typecheck_stripify_overload_1(L)) return _bind_stripify_overload_1(L);
		if (_lg_typecheck_stripify_overload_2(L)) return _bind_stripify_overload_2(L);

		luaL_error(L, "error in function stripify, cannot match any of the overloads for function stripify:\n  stripify(osg::Geometry &)\n  stripify()\n");
		return 0;
	}

	// void osgUtil::TriStripVisitor::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::TriStripVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::TriStripVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::TriStripVisitor* self=dynamic_cast< osgUtil::TriStripVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::TriStripVisitor::setCacheSize(unsigned int size)
	static int _bind_setCacheSize(lua_State *L) {
		if (!_lg_typecheck_setCacheSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::setCacheSize(unsigned int size) function, expected prototype:\nvoid osgUtil::TriStripVisitor::setCacheSize(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osgUtil::TriStripVisitor* self=dynamic_cast< osgUtil::TriStripVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::setCacheSize(unsigned int)");
		}
		self->setCacheSize(size);

		return 0;
	}

	// unsigned int osgUtil::TriStripVisitor::getCacheSize() const
	static int _bind_getCacheSize(lua_State *L) {
		if (!_lg_typecheck_getCacheSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::TriStripVisitor::getCacheSize() const function, expected prototype:\nunsigned int osgUtil::TriStripVisitor::getCacheSize() const\nClass arguments details:\n");
		}


		osgUtil::TriStripVisitor* self=dynamic_cast< osgUtil::TriStripVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::TriStripVisitor::getCacheSize() const");
		}
		unsigned int lret = self->getCacheSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::TriStripVisitor::setMinStripSize(unsigned int size)
	static int _bind_setMinStripSize(lua_State *L) {
		if (!_lg_typecheck_setMinStripSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::setMinStripSize(unsigned int size) function, expected prototype:\nvoid osgUtil::TriStripVisitor::setMinStripSize(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osgUtil::TriStripVisitor* self=dynamic_cast< osgUtil::TriStripVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::setMinStripSize(unsigned int)");
		}
		self->setMinStripSize(size);

		return 0;
	}

	// unsigned int osgUtil::TriStripVisitor::getMinStripSize() const
	static int _bind_getMinStripSize(lua_State *L) {
		if (!_lg_typecheck_getMinStripSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::TriStripVisitor::getMinStripSize() const function, expected prototype:\nunsigned int osgUtil::TriStripVisitor::getMinStripSize() const\nClass arguments details:\n");
		}


		osgUtil::TriStripVisitor* self=dynamic_cast< osgUtil::TriStripVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::TriStripVisitor::getMinStripSize() const");
		}
		unsigned int lret = self->getMinStripSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgUtil::TriStripVisitor* LunaTraits< osgUtil::TriStripVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_TriStripVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::TriStripVisitor >::_bind_dtor(osgUtil::TriStripVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::TriStripVisitor >::className[] = "TriStripVisitor";
const char LunaTraits< osgUtil::TriStripVisitor >::fullName[] = "osgUtil::TriStripVisitor";
const char LunaTraits< osgUtil::TriStripVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::TriStripVisitor >::parents[] = {"osgUtil.BaseOptimizerVisitor", 0};
const int LunaTraits< osgUtil::TriStripVisitor >::hash = 2177155;
const int LunaTraits< osgUtil::TriStripVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::TriStripVisitor >::methods[] = {
	{"stripify", &luna_wrapper_osgUtil_TriStripVisitor::_bind_stripify},
	{"apply", &luna_wrapper_osgUtil_TriStripVisitor::_bind_apply},
	{"setCacheSize", &luna_wrapper_osgUtil_TriStripVisitor::_bind_setCacheSize},
	{"getCacheSize", &luna_wrapper_osgUtil_TriStripVisitor::_bind_getCacheSize},
	{"setMinStripSize", &luna_wrapper_osgUtil_TriStripVisitor::_bind_setMinStripSize},
	{"getMinStripSize", &luna_wrapper_osgUtil_TriStripVisitor::_bind_getMinStripSize},
	{"__eq", &luna_wrapper_osgUtil_TriStripVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::TriStripVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_TriStripVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::TriStripVisitor >::enumValues[] = {
	{0,0}
};


