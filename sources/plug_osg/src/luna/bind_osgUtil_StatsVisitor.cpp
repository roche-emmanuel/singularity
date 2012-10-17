#include <plug_common.h>

class luna_wrapper_osgUtil_StatsVisitor {
public:
	typedef Luna< osgUtil::StatsVisitor > luna_t;

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
		osgUtil::StatsVisitor* ptr= dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::StatsVisitor >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_totalUpStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::StatsVisitor::StatsVisitor()
	static osgUtil::StatsVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::StatsVisitor() function, expected prototype:\nosgUtil::StatsVisitor::StatsVisitor()\nClass arguments details:\n");
		}


		return new osgUtil::StatsVisitor();
	}


	// Function binds:
	// const char * osgUtil::StatsVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StatsVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::StatsVisitor::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::StatsVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StatsVisitor::className() const function, expected prototype:\nconst char * osgUtil::StatsVisitor::className() const\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::StatsVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::reset() function, expected prototype:\nvoid osgUtil::StatsVisitor::reset()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::reset()");
		}
		self->reset();

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::StatsVisitor* self=dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Group & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Group & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node_ptr=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Group & node=*node_ptr;

		osgUtil::StatsVisitor* self=dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Group &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Transform & node)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Transform & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* node_ptr=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Transform & node=*node_ptr;

		osgUtil::StatsVisitor* self=dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Transform &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::LOD & node)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::LOD & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* node_ptr=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::LOD & node=*node_ptr;

		osgUtil::StatsVisitor* self=dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::LOD &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Switch & node)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Switch & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Switch* node_ptr=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Switch & node=*node_ptr;

		osgUtil::StatsVisitor* self=dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Switch &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Geode & node)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::StatsVisitor* self=dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Geode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Drawable & drawable)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Drawable & drawable) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Drawable & drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Drawable* drawable_ptr=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::StatsVisitor::apply function");
		}
		osg::Drawable & drawable=*drawable_ptr;

		osgUtil::StatsVisitor* self=dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Drawable &)");
		}
		self->apply(drawable);

		return 0;
	}

	// Overload binder for osgUtil::StatsVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Group &)\n  apply(osg::Transform &)\n  apply(osg::LOD &)\n  apply(osg::Switch &)\n  apply(osg::Geode &)\n  apply(osg::Drawable &)\n");
		return 0;
	}

	// void osgUtil::StatsVisitor::totalUpStats()
	static int _bind_totalUpStats(lua_State *L) {
		if (!_lg_typecheck_totalUpStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::totalUpStats() function, expected prototype:\nvoid osgUtil::StatsVisitor::totalUpStats()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::totalUpStats()");
		}
		self->totalUpStats();

		return 0;
	}


	// Operator binds:

};

osgUtil::StatsVisitor* LunaTraits< osgUtil::StatsVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_StatsVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::StatsVisitor >::_bind_dtor(osgUtil::StatsVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::StatsVisitor >::className[] = "StatsVisitor";
const char LunaTraits< osgUtil::StatsVisitor >::fullName[] = "osgUtil::StatsVisitor";
const char LunaTraits< osgUtil::StatsVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::StatsVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::StatsVisitor >::hash = 36035742;
const int LunaTraits< osgUtil::StatsVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::StatsVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_StatsVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_StatsVisitor::_bind_className},
	{"reset", &luna_wrapper_osgUtil_StatsVisitor::_bind_reset},
	{"apply", &luna_wrapper_osgUtil_StatsVisitor::_bind_apply},
	{"totalUpStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_totalUpStats},
	{"__eq", &luna_wrapper_osgUtil_StatsVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StatsVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_StatsVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StatsVisitor >::enumValues[] = {
	{0,0}
};


