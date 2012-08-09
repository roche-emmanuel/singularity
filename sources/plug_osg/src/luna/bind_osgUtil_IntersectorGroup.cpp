#include <plug_common.h>

class luna_wrapper_osgUtil_IntersectorGroup {
public:
	typedef Luna< osgUtil::IntersectorGroup > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::IntersectorGroup* ptr= dynamic_cast< osgUtil::IntersectorGroup* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IntersectorGroup >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addIntersector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntersectors(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_leave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_intersect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_containsIntersections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::IntersectorGroup::IntersectorGroup()
	static osgUtil::IntersectorGroup* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectorGroup::IntersectorGroup() function, expected prototype:\nosgUtil::IntersectorGroup::IntersectorGroup()\nClass arguments details:\n");
		}


		return new osgUtil::IntersectorGroup();
	}


	// Function binds:
	// void osgUtil::IntersectorGroup::addIntersector(osgUtil::Intersector * intersector)
	static int _bind_addIntersector(lua_State *L) {
		if (!_lg_typecheck_addIntersector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::addIntersector(osgUtil::Intersector * intersector) function, expected prototype:\nvoid osgUtil::IntersectorGroup::addIntersector(osgUtil::Intersector * intersector)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::Intersector* intersector=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::IntersectorGroup* self=dynamic_cast< osgUtil::IntersectorGroup* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::addIntersector(osgUtil::Intersector *)");
		}
		self->addIntersector(intersector);

		return 0;
	}

	// osgUtil::IntersectorGroup::Intersectors & osgUtil::IntersectorGroup::getIntersectors()
	static int _bind_getIntersectors(lua_State *L) {
		if (!_lg_typecheck_getIntersectors(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectorGroup::Intersectors & osgUtil::IntersectorGroup::getIntersectors() function, expected prototype:\nosgUtil::IntersectorGroup::Intersectors & osgUtil::IntersectorGroup::getIntersectors()\nClass arguments details:\n");
		}


		osgUtil::IntersectorGroup* self=dynamic_cast< osgUtil::IntersectorGroup* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::IntersectorGroup::Intersectors & osgUtil::IntersectorGroup::getIntersectors()");
		}
		const osgUtil::IntersectorGroup::Intersectors* lret = &self->getIntersectors();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::IntersectorGroup::Intersectors >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::IntersectorGroup::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::clear() function, expected prototype:\nvoid osgUtil::IntersectorGroup::clear()\nClass arguments details:\n");
		}


		osgUtil::IntersectorGroup* self=dynamic_cast< osgUtil::IntersectorGroup* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::clear()");
		}
		self->clear();

		return 0;
	}

	// osgUtil::Intersector * osgUtil::IntersectorGroup::clone(osgUtil::IntersectionVisitor & iv)
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::IntersectorGroup::clone(osgUtil::IntersectionVisitor & iv) function, expected prototype:\nosgUtil::Intersector * osgUtil::IntersectorGroup::clone(osgUtil::IntersectionVisitor & iv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::IntersectionVisitor* iv_ptr=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::IntersectorGroup::clone function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;

		osgUtil::IntersectorGroup* self=dynamic_cast< osgUtil::IntersectorGroup* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::IntersectorGroup::clone(osgUtil::IntersectionVisitor &)");
		}
		osgUtil::Intersector * lret = self->clone(iv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::IntersectorGroup::enter(const osg::Node & node)
	static int _bind_enter(lua_State *L) {
		if (!_lg_typecheck_enter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectorGroup::enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::IntersectorGroup::enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectorGroup::enter function");
		}
		const osg::Node & node=*node_ptr;

		osgUtil::IntersectorGroup* self=dynamic_cast< osgUtil::IntersectorGroup* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectorGroup::enter(const osg::Node &)");
		}
		bool lret = self->enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectorGroup::leave()
	static int _bind_leave(lua_State *L) {
		if (!_lg_typecheck_leave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::leave() function, expected prototype:\nvoid osgUtil::IntersectorGroup::leave()\nClass arguments details:\n");
		}


		osgUtil::IntersectorGroup* self=dynamic_cast< osgUtil::IntersectorGroup* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::leave()");
		}
		self->leave();

		return 0;
	}

	// void osgUtil::IntersectorGroup::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	static int _bind_intersect(lua_State *L) {
		if (!_lg_typecheck_intersect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::IntersectorGroup::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osgUtil::IntersectionVisitor* iv_ptr=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::IntersectorGroup::intersect function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;
		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));

		osgUtil::IntersectorGroup* self=dynamic_cast< osgUtil::IntersectorGroup* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::intersect(osgUtil::IntersectionVisitor &, osg::Drawable *)");
		}
		self->intersect(iv, drawable);

		return 0;
	}

	// void osgUtil::IntersectorGroup::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::reset() function, expected prototype:\nvoid osgUtil::IntersectorGroup::reset()\nClass arguments details:\n");
		}


		osgUtil::IntersectorGroup* self=dynamic_cast< osgUtil::IntersectorGroup* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::reset()");
		}
		self->reset();

		return 0;
	}

	// bool osgUtil::IntersectorGroup::containsIntersections()
	static int _bind_containsIntersections(lua_State *L) {
		if (!_lg_typecheck_containsIntersections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectorGroup::containsIntersections() function, expected prototype:\nbool osgUtil::IntersectorGroup::containsIntersections()\nClass arguments details:\n");
		}


		osgUtil::IntersectorGroup* self=dynamic_cast< osgUtil::IntersectorGroup* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectorGroup::containsIntersections()");
		}
		bool lret = self->containsIntersections();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgUtil::IntersectorGroup* LunaTraits< osgUtil::IntersectorGroup >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_IntersectorGroup::_bind_ctor(L);
}

void LunaTraits< osgUtil::IntersectorGroup >::_bind_dtor(osgUtil::IntersectorGroup* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IntersectorGroup >::className[] = "IntersectorGroup";
const char LunaTraits< osgUtil::IntersectorGroup >::fullName[] = "osgUtil::IntersectorGroup";
const char LunaTraits< osgUtil::IntersectorGroup >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IntersectorGroup >::parents[] = {"osgUtil.Intersector", 0};
const int LunaTraits< osgUtil::IntersectorGroup >::hash = 27288080;
const int LunaTraits< osgUtil::IntersectorGroup >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IntersectorGroup >::methods[] = {
	{"addIntersector", &luna_wrapper_osgUtil_IntersectorGroup::_bind_addIntersector},
	{"getIntersectors", &luna_wrapper_osgUtil_IntersectorGroup::_bind_getIntersectors},
	{"clear", &luna_wrapper_osgUtil_IntersectorGroup::_bind_clear},
	{"clone", &luna_wrapper_osgUtil_IntersectorGroup::_bind_clone},
	{"enter", &luna_wrapper_osgUtil_IntersectorGroup::_bind_enter},
	{"leave", &luna_wrapper_osgUtil_IntersectorGroup::_bind_leave},
	{"intersect", &luna_wrapper_osgUtil_IntersectorGroup::_bind_intersect},
	{"reset", &luna_wrapper_osgUtil_IntersectorGroup::_bind_reset},
	{"containsIntersections", &luna_wrapper_osgUtil_IntersectorGroup::_bind_containsIntersections},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IntersectorGroup >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IntersectorGroup::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IntersectorGroup >::enumValues[] = {
	{0,0}
};

