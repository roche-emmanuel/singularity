#include <plug_common.h>

class luna_wrapper_osgUtil_Intersector {
public:
	typedef Luna< osgUtil::Intersector > luna_t;

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
		osgUtil::Intersector* ptr= dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::Intersector >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_setCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIntersectionLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntersectionLimit(lua_State *L) {
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

	inline static bool _lg_typecheck_disabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_incrementDisabledCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_decrementDisabledCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reachedLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osgUtil::Intersector::setCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf)
	static int _bind_setCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_setCoordinateFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::setCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf) function, expected prototype:\nvoid osgUtil::Intersector::setCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf)\nClass arguments details:\n");
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,2);

		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::setCoordinateFrame(osgUtil::Intersector::CoordinateFrame)");
		}
		self->setCoordinateFrame(cf);

		return 0;
	}

	// osgUtil::Intersector::CoordinateFrame osgUtil::Intersector::getCoordinateFrame() const
	static int _bind_getCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_getCoordinateFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector::CoordinateFrame osgUtil::Intersector::getCoordinateFrame() const function, expected prototype:\nosgUtil::Intersector::CoordinateFrame osgUtil::Intersector::getCoordinateFrame() const\nClass arguments details:\n");
		}


		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Intersector::CoordinateFrame osgUtil::Intersector::getCoordinateFrame() const");
		}
		osgUtil::Intersector::CoordinateFrame lret = self->getCoordinateFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Intersector::setIntersectionLimit(osgUtil::Intersector::IntersectionLimit limit)
	static int _bind_setIntersectionLimit(lua_State *L) {
		if (!_lg_typecheck_setIntersectionLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::setIntersectionLimit(osgUtil::Intersector::IntersectionLimit limit) function, expected prototype:\nvoid osgUtil::Intersector::setIntersectionLimit(osgUtil::Intersector::IntersectionLimit limit)\nClass arguments details:\n");
		}

		osgUtil::Intersector::IntersectionLimit limit=(osgUtil::Intersector::IntersectionLimit)lua_tointeger(L,2);

		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::setIntersectionLimit(osgUtil::Intersector::IntersectionLimit)");
		}
		self->setIntersectionLimit(limit);

		return 0;
	}

	// osgUtil::Intersector::IntersectionLimit osgUtil::Intersector::getIntersectionLimit() const
	static int _bind_getIntersectionLimit(lua_State *L) {
		if (!_lg_typecheck_getIntersectionLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector::IntersectionLimit osgUtil::Intersector::getIntersectionLimit() const function, expected prototype:\nosgUtil::Intersector::IntersectionLimit osgUtil::Intersector::getIntersectionLimit() const\nClass arguments details:\n");
		}


		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Intersector::IntersectionLimit osgUtil::Intersector::getIntersectionLimit() const");
		}
		osgUtil::Intersector::IntersectionLimit lret = self->getIntersectionLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor & iv)
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor & iv) function, expected prototype:\nosgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor & iv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::IntersectionVisitor* iv_ptr=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::Intersector::clone function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;

		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor &)");
		}
		osgUtil::Intersector * lret = self->clone(iv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::Intersector::enter(const osg::Node & node)
	static int _bind_enter(lua_State *L) {
		if (!_lg_typecheck_enter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::Intersector::enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::Intersector::enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::Intersector::enter function");
		}
		const osg::Node & node=*node_ptr;

		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::Intersector::enter(const osg::Node &)");
		}
		bool lret = self->enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Intersector::leave()
	static int _bind_leave(lua_State *L) {
		if (!_lg_typecheck_leave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::leave() function, expected prototype:\nvoid osgUtil::Intersector::leave()\nClass arguments details:\n");
		}


		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::leave()");
		}
		self->leave();

		return 0;
	}

	// void osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	static int _bind_intersect(lua_State *L) {
		if (!_lg_typecheck_intersect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osgUtil::IntersectionVisitor* iv_ptr=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::Intersector::intersect function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;
		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));

		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor &, osg::Drawable *)");
		}
		self->intersect(iv, drawable);

		return 0;
	}

	// void osgUtil::Intersector::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::reset() function, expected prototype:\nvoid osgUtil::Intersector::reset()\nClass arguments details:\n");
		}


		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::reset()");
		}
		self->reset();

		return 0;
	}

	// bool osgUtil::Intersector::containsIntersections()
	static int _bind_containsIntersections(lua_State *L) {
		if (!_lg_typecheck_containsIntersections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::Intersector::containsIntersections() function, expected prototype:\nbool osgUtil::Intersector::containsIntersections()\nClass arguments details:\n");
		}


		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::Intersector::containsIntersections()");
		}
		bool lret = self->containsIntersections();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::Intersector::disabled() const
	static int _bind_disabled(lua_State *L) {
		if (!_lg_typecheck_disabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::Intersector::disabled() const function, expected prototype:\nbool osgUtil::Intersector::disabled() const\nClass arguments details:\n");
		}


		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::Intersector::disabled() const");
		}
		bool lret = self->disabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Intersector::incrementDisabledCount()
	static int _bind_incrementDisabledCount(lua_State *L) {
		if (!_lg_typecheck_incrementDisabledCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::incrementDisabledCount() function, expected prototype:\nvoid osgUtil::Intersector::incrementDisabledCount()\nClass arguments details:\n");
		}


		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::incrementDisabledCount()");
		}
		self->incrementDisabledCount();

		return 0;
	}

	// void osgUtil::Intersector::decrementDisabledCount()
	static int _bind_decrementDisabledCount(lua_State *L) {
		if (!_lg_typecheck_decrementDisabledCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::decrementDisabledCount() function, expected prototype:\nvoid osgUtil::Intersector::decrementDisabledCount()\nClass arguments details:\n");
		}


		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::decrementDisabledCount()");
		}
		self->decrementDisabledCount();

		return 0;
	}

	// bool osgUtil::Intersector::reachedLimit()
	static int _bind_reachedLimit(lua_State *L) {
		if (!_lg_typecheck_reachedLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::Intersector::reachedLimit() function, expected prototype:\nbool osgUtil::Intersector::reachedLimit()\nClass arguments details:\n");
		}


		osgUtil::Intersector* self=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::Intersector::reachedLimit()");
		}
		bool lret = self->reachedLimit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgUtil::Intersector* LunaTraits< osgUtil::Intersector >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor & iv)
	// bool osgUtil::Intersector::enter(const osg::Node & node)
	// void osgUtil::Intersector::leave()
	// void osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	// bool osgUtil::Intersector::containsIntersections()

	// Abstract operators:
}

void LunaTraits< osgUtil::Intersector >::_bind_dtor(osgUtil::Intersector* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::Intersector >::className[] = "Intersector";
const char LunaTraits< osgUtil::Intersector >::fullName[] = "osgUtil::Intersector";
const char LunaTraits< osgUtil::Intersector >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Intersector >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::Intersector >::hash = 34879437;
const int LunaTraits< osgUtil::Intersector >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::Intersector >::methods[] = {
	{"setCoordinateFrame", &luna_wrapper_osgUtil_Intersector::_bind_setCoordinateFrame},
	{"getCoordinateFrame", &luna_wrapper_osgUtil_Intersector::_bind_getCoordinateFrame},
	{"setIntersectionLimit", &luna_wrapper_osgUtil_Intersector::_bind_setIntersectionLimit},
	{"getIntersectionLimit", &luna_wrapper_osgUtil_Intersector::_bind_getIntersectionLimit},
	{"clone", &luna_wrapper_osgUtil_Intersector::_bind_clone},
	{"enter", &luna_wrapper_osgUtil_Intersector::_bind_enter},
	{"leave", &luna_wrapper_osgUtil_Intersector::_bind_leave},
	{"intersect", &luna_wrapper_osgUtil_Intersector::_bind_intersect},
	{"reset", &luna_wrapper_osgUtil_Intersector::_bind_reset},
	{"containsIntersections", &luna_wrapper_osgUtil_Intersector::_bind_containsIntersections},
	{"disabled", &luna_wrapper_osgUtil_Intersector::_bind_disabled},
	{"incrementDisabledCount", &luna_wrapper_osgUtil_Intersector::_bind_incrementDisabledCount},
	{"decrementDisabledCount", &luna_wrapper_osgUtil_Intersector::_bind_decrementDisabledCount},
	{"reachedLimit", &luna_wrapper_osgUtil_Intersector::_bind_reachedLimit},
	{"__eq", &luna_wrapper_osgUtil_Intersector::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Intersector >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_Intersector::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Intersector >::enumValues[] = {
	{"WINDOW", osgUtil::Intersector::WINDOW},
	{"PROJECTION", osgUtil::Intersector::PROJECTION},
	{"VIEW", osgUtil::Intersector::VIEW},
	{"MODEL", osgUtil::Intersector::MODEL},
	{"NO_LIMIT", osgUtil::Intersector::NO_LIMIT},
	{"LIMIT_ONE_PER_DRAWABLE", osgUtil::Intersector::LIMIT_ONE_PER_DRAWABLE},
	{"LIMIT_ONE", osgUtil::Intersector::LIMIT_ONE},
	{"LIMIT_NEAREST", osgUtil::Intersector::LIMIT_NEAREST},
	{0,0}
};


