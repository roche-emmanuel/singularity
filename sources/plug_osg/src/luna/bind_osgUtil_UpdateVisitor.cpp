#include <plug_common.h>

class luna_wrapper_osgUtil_UpdateVisitor {
public:
	typedef Luna< osgUtil::UpdateVisitor > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::UpdateVisitor* ptr= dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::UpdateVisitor >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::UpdateVisitor::UpdateVisitor()
	static osgUtil::UpdateVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::UpdateVisitor::UpdateVisitor() function, expected prototype:\nosgUtil::UpdateVisitor::UpdateVisitor()\nClass arguments details:\n");
		}


		return new osgUtil::UpdateVisitor();
	}


	// Function binds:
	// const char * osgUtil::UpdateVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::UpdateVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::UpdateVisitor::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::UpdateVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::UpdateVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::UpdateVisitor::className() const function, expected prototype:\nconst char * osgUtil::UpdateVisitor::className() const\nClass arguments details:\n");
		}


		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::UpdateVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::UpdateVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::reset() function, expected prototype:\nvoid osgUtil::UpdateVisitor::reset()\nClass arguments details:\n");
		}


		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::reset()");
		}
		self->reset();

		return 0;
	}

	// void osgUtil::UpdateVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::UpdateVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::UpdateVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::UpdateVisitor::apply(osg::Geode & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::UpdateVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::UpdateVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::apply(osg::Geode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::UpdateVisitor::apply(osg::Billboard & node)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::apply(osg::Billboard & node) function, expected prototype:\nvoid osgUtil::UpdateVisitor::apply(osg::Billboard & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Billboard* node_ptr=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::UpdateVisitor::apply function");
		}
		osg::Billboard & node=*node_ptr;

		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::apply(osg::Billboard &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::UpdateVisitor::apply(osg::LightSource & node)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::apply(osg::LightSource & node) function, expected prototype:\nvoid osgUtil::UpdateVisitor::apply(osg::LightSource & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LightSource* node_ptr=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::UpdateVisitor::apply function");
		}
		osg::LightSource & node=*node_ptr;

		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::apply(osg::LightSource &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::UpdateVisitor::apply(osg::Group & node)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::apply(osg::Group & node) function, expected prototype:\nvoid osgUtil::UpdateVisitor::apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node_ptr=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::UpdateVisitor::apply function");
		}
		osg::Group & node=*node_ptr;

		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::apply(osg::Group &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::UpdateVisitor::apply(osg::Transform & node)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::apply(osg::Transform & node) function, expected prototype:\nvoid osgUtil::UpdateVisitor::apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* node_ptr=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::UpdateVisitor::apply function");
		}
		osg::Transform & node=*node_ptr;

		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::apply(osg::Transform &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::UpdateVisitor::apply(osg::Projection & node)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::apply(osg::Projection & node) function, expected prototype:\nvoid osgUtil::UpdateVisitor::apply(osg::Projection & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Projection* node_ptr=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::UpdateVisitor::apply function");
		}
		osg::Projection & node=*node_ptr;

		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::apply(osg::Projection &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::UpdateVisitor::apply(osg::Switch & node)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::apply(osg::Switch & node) function, expected prototype:\nvoid osgUtil::UpdateVisitor::apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Switch* node_ptr=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::UpdateVisitor::apply function");
		}
		osg::Switch & node=*node_ptr;

		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::apply(osg::Switch &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::UpdateVisitor::apply(osg::LOD & node)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::apply(osg::LOD & node) function, expected prototype:\nvoid osgUtil::UpdateVisitor::apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* node_ptr=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::UpdateVisitor::apply function");
		}
		osg::LOD & node=*node_ptr;

		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::apply(osg::LOD &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::UpdateVisitor::apply(osg::OccluderNode & node)
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::apply(osg::OccluderNode & node) function, expected prototype:\nvoid osgUtil::UpdateVisitor::apply(osg::OccluderNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::OccluderNode* node_ptr=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::UpdateVisitor::apply function");
		}
		osg::OccluderNode & node=*node_ptr;

		osgUtil::UpdateVisitor* self=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::apply(osg::OccluderNode &)");
		}
		self->apply(node);

		return 0;
	}

	// Overload binder for osgUtil::UpdateVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);
		if (_lg_typecheck_apply_overload_8(L)) return _bind_apply_overload_8(L);
		if (_lg_typecheck_apply_overload_9(L)) return _bind_apply_overload_9(L);
		if (_lg_typecheck_apply_overload_10(L)) return _bind_apply_overload_10(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Billboard &)\n  apply(osg::LightSource &)\n  apply(osg::Group &)\n  apply(osg::Transform &)\n  apply(osg::Projection &)\n  apply(osg::Switch &)\n  apply(osg::LOD &)\n  apply(osg::OccluderNode &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::UpdateVisitor* LunaTraits< osgUtil::UpdateVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_UpdateVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::UpdateVisitor >::_bind_dtor(osgUtil::UpdateVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::UpdateVisitor >::className[] = "UpdateVisitor";
const char LunaTraits< osgUtil::UpdateVisitor >::fullName[] = "osgUtil::UpdateVisitor";
const char LunaTraits< osgUtil::UpdateVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::UpdateVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::UpdateVisitor >::hash = 16445064;
const int LunaTraits< osgUtil::UpdateVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::UpdateVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_UpdateVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_UpdateVisitor::_bind_className},
	{"reset", &luna_wrapper_osgUtil_UpdateVisitor::_bind_reset},
	{"apply", &luna_wrapper_osgUtil_UpdateVisitor::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::UpdateVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_UpdateVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::UpdateVisitor >::enumValues[] = {
	{0,0}
};


