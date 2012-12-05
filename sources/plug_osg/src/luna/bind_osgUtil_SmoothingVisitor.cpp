#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_SmoothingVisitor.h>

class luna_wrapper_osgUtil_SmoothingVisitor {
public:
	typedef Luna< osgUtil::SmoothingVisitor > luna_t;

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
		osgUtil::SmoothingVisitor* ptr= dynamic_cast< osgUtil::SmoothingVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::SmoothingVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCreaseAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCreaseAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_smooth(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::SmoothingVisitor::SmoothingVisitor()
	static osgUtil::SmoothingVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SmoothingVisitor::SmoothingVisitor() function, expected prototype:\nosgUtil::SmoothingVisitor::SmoothingVisitor()\nClass arguments details:\n");
		}


		return new osgUtil::SmoothingVisitor();
	}

	// osgUtil::SmoothingVisitor::SmoothingVisitor(lua_Table * data)
	static osgUtil::SmoothingVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SmoothingVisitor::SmoothingVisitor(lua_Table * data) function, expected prototype:\nosgUtil::SmoothingVisitor::SmoothingVisitor(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgUtil_SmoothingVisitor(L,NULL);
	}

	// Overload binder for osgUtil::SmoothingVisitor::SmoothingVisitor
	static osgUtil::SmoothingVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SmoothingVisitor, cannot match any of the overloads for function SmoothingVisitor:\n  SmoothingVisitor()\n  SmoothingVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::SmoothingVisitor::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SmoothingVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::SmoothingVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::SmoothingVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::SmoothingVisitor* self=dynamic_cast< osgUtil::SmoothingVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SmoothingVisitor::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::SmoothingVisitor::setCreaseAngle(double angle)
	static int _bind_setCreaseAngle(lua_State *L) {
		if (!_lg_typecheck_setCreaseAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SmoothingVisitor::setCreaseAngle(double angle) function, expected prototype:\nvoid osgUtil::SmoothingVisitor::setCreaseAngle(double angle)\nClass arguments details:\n");
		}

		double angle=(double)lua_tonumber(L,2);

		osgUtil::SmoothingVisitor* self=dynamic_cast< osgUtil::SmoothingVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SmoothingVisitor::setCreaseAngle(double)");
		}
		self->setCreaseAngle(angle);

		return 0;
	}

	// double osgUtil::SmoothingVisitor::getCreaseAngle() const
	static int _bind_getCreaseAngle(lua_State *L) {
		if (!_lg_typecheck_getCreaseAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgUtil::SmoothingVisitor::getCreaseAngle() const function, expected prototype:\ndouble osgUtil::SmoothingVisitor::getCreaseAngle() const\nClass arguments details:\n");
		}


		osgUtil::SmoothingVisitor* self=dynamic_cast< osgUtil::SmoothingVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgUtil::SmoothingVisitor::getCreaseAngle() const");
		}
		double lret = self->getCreaseAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void osgUtil::SmoothingVisitor::smooth(osg::Geometry & geoset, double creaseAngle = osg::PI)
	static int _bind_smooth(lua_State *L) {
		if (!_lg_typecheck_smooth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osgUtil::SmoothingVisitor::smooth(osg::Geometry & geoset, double creaseAngle = osg::PI) function, expected prototype:\nstatic void osgUtil::SmoothingVisitor::smooth(osg::Geometry & geoset, double creaseAngle = osg::PI)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Geometry* geoset_ptr=dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,1));
		if( !geoset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geoset in osgUtil::SmoothingVisitor::smooth function");
		}
		osg::Geometry & geoset=*geoset_ptr;
		double creaseAngle=luatop>1 ? (double)lua_tonumber(L,2) : osg::PI;

		osgUtil::SmoothingVisitor::smooth(geoset, creaseAngle);

		return 0;
	}


	// Operator binds:

};

osgUtil::SmoothingVisitor* LunaTraits< osgUtil::SmoothingVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_SmoothingVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::SmoothingVisitor >::_bind_dtor(osgUtil::SmoothingVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::SmoothingVisitor >::className[] = "SmoothingVisitor";
const char LunaTraits< osgUtil::SmoothingVisitor >::fullName[] = "osgUtil::SmoothingVisitor";
const char LunaTraits< osgUtil::SmoothingVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::SmoothingVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::SmoothingVisitor >::hash = 89393238;
const int LunaTraits< osgUtil::SmoothingVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::SmoothingVisitor >::methods[] = {
	{"apply", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_apply},
	{"setCreaseAngle", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_setCreaseAngle},
	{"getCreaseAngle", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_getCreaseAngle},
	{"smooth", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_smooth},
	{"__eq", &luna_wrapper_osgUtil_SmoothingVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::SmoothingVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_SmoothingVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::SmoothingVisitor >::enumValues[] = {
	{0,0}
};


