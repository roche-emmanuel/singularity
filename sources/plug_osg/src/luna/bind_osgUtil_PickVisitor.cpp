#include <plug_common.h>

class luna_wrapper_osgUtil_PickVisitor {
public:
	typedef Luna< osgUtil::PickVisitor > luna_t;

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
		osgUtil::PickVisitor* ptr= dynamic_cast< osgUtil::PickVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::PickVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_runNestedPickVisitor(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,18903838) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18903838) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
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
	// osgUtil::PickVisitor::PickVisitor(const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my)
	static osgUtil::PickVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PickVisitor::PickVisitor(const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my) function, expected prototype:\nosgUtil::PickVisitor::PickVisitor(const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 18903838\narg 3 ID = 18903838\n");
		}

		const osg::Viewport* viewport=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		const osg::Matrixd* proj_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !proj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg proj in osgUtil::PickVisitor::PickVisitor function");
		}
		const osg::Matrixd & proj=*proj_ptr;
		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::PickVisitor::PickVisitor function");
		}
		const osg::Matrixd & view=*view_ptr;
		float mx=(float)lua_tonumber(L,4);
		float my=(float)lua_tonumber(L,5);

		return new osgUtil::PickVisitor(viewport, proj, view, mx, my);
	}


	// Function binds:
	// void osgUtil::PickVisitor::runNestedPickVisitor(osg::Node & node, const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my)
	static int _bind_runNestedPickVisitor(lua_State *L) {
		if (!_lg_typecheck_runNestedPickVisitor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PickVisitor::runNestedPickVisitor(osg::Node & node, const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my) function, expected prototype:\nvoid osgUtil::PickVisitor::runNestedPickVisitor(osg::Node & node, const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 18903838\narg 4 ID = 18903838\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::PickVisitor::runNestedPickVisitor function");
		}
		osg::Node & node=*node_ptr;
		const osg::Viewport* viewport=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,3));
		const osg::Matrixd* proj_ptr=(Luna< osg::Matrixd >::check(L,4));
		if( !proj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg proj in osgUtil::PickVisitor::runNestedPickVisitor function");
		}
		const osg::Matrixd & proj=*proj_ptr;
		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,5));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::PickVisitor::runNestedPickVisitor function");
		}
		const osg::Matrixd & view=*view_ptr;
		float mx=(float)lua_tonumber(L,6);
		float my=(float)lua_tonumber(L,7);

		osgUtil::PickVisitor* self=dynamic_cast< osgUtil::PickVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PickVisitor::runNestedPickVisitor(osg::Node &, const osg::Viewport *, const osg::Matrixd &, const osg::Matrixd &, float, float)");
		}
		self->runNestedPickVisitor(node, viewport, proj, view, mx, my);

		return 0;
	}

	// void osgUtil::PickVisitor::apply(osg::Projection & projection)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PickVisitor::apply(osg::Projection & projection) function, expected prototype:\nvoid osgUtil::PickVisitor::apply(osg::Projection & projection)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Projection* projection_ptr=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::PickVisitor::apply function");
		}
		osg::Projection & projection=*projection_ptr;

		osgUtil::PickVisitor* self=dynamic_cast< osgUtil::PickVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PickVisitor::apply(osg::Projection &)");
		}
		self->apply(projection);

		return 0;
	}

	// void osgUtil::PickVisitor::apply(osg::Camera & camera)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PickVisitor::apply(osg::Camera & camera) function, expected prototype:\nvoid osgUtil::PickVisitor::apply(osg::Camera & camera)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Camera* camera_ptr=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in osgUtil::PickVisitor::apply function");
		}
		osg::Camera & camera=*camera_ptr;

		osgUtil::PickVisitor* self=dynamic_cast< osgUtil::PickVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PickVisitor::apply(osg::Camera &)");
		}
		self->apply(camera);

		return 0;
	}

	// Overload binder for osgUtil::PickVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Projection &)\n  apply(osg::Camera &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::PickVisitor* LunaTraits< osgUtil::PickVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PickVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::PickVisitor >::_bind_dtor(osgUtil::PickVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::PickVisitor >::className[] = "PickVisitor";
const char LunaTraits< osgUtil::PickVisitor >::fullName[] = "osgUtil::PickVisitor";
const char LunaTraits< osgUtil::PickVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PickVisitor >::parents[] = {"osgUtil.IntersectVisitor", 0};
const int LunaTraits< osgUtil::PickVisitor >::hash = 832843;
const int LunaTraits< osgUtil::PickVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::PickVisitor >::methods[] = {
	{"runNestedPickVisitor", &luna_wrapper_osgUtil_PickVisitor::_bind_runNestedPickVisitor},
	{"apply", &luna_wrapper_osgUtil_PickVisitor::_bind_apply},
	{"__eq", &luna_wrapper_osgUtil_PickVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PickVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_PickVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PickVisitor >::enumValues[] = {
	{0,0}
};


