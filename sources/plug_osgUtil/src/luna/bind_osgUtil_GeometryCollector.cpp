#include <plug_common.h>

class luna_wrapper_osgUtil_GeometryCollector {
public:
	typedef Luna< osgUtil::GeometryCollector > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::GeometryCollector* ptr= dynamic_cast< osgUtil::GeometryCollector* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::GeometryCollector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85233381)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGeometryList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::GeometryCollector::GeometryCollector(osgUtil::Optimizer * optimizer, osgUtil::Optimizer::OptimizationOptions options)
	static osgUtil::GeometryCollector* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::GeometryCollector::GeometryCollector(osgUtil::Optimizer * optimizer, osgUtil::Optimizer::OptimizationOptions options) function, expected prototype:\nosgUtil::GeometryCollector::GeometryCollector(osgUtil::Optimizer * optimizer, osgUtil::Optimizer::OptimizationOptions options)\nClass arguments details:\narg 1 ID = 85233381\n");
		}

		osgUtil::Optimizer* optimizer=(Luna< osgUtil::Optimizer >::check(L,1));
		osgUtil::Optimizer::OptimizationOptions options=(osgUtil::Optimizer::OptimizationOptions)lua_tointeger(L,2);

		return new osgUtil::GeometryCollector(optimizer, options);
	}


	// Function binds:
	// void osgUtil::GeometryCollector::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GeometryCollector::reset() function, expected prototype:\nvoid osgUtil::GeometryCollector::reset()\nClass arguments details:\n");
		}


		osgUtil::GeometryCollector* self=dynamic_cast< osgUtil::GeometryCollector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GeometryCollector::reset()");
		}
		self->reset();

		return 0;
	}

	// void osgUtil::GeometryCollector::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GeometryCollector::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::GeometryCollector::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::GeometryCollector::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::GeometryCollector* self=dynamic_cast< osgUtil::GeometryCollector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GeometryCollector::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}

	// osgUtil::GeometryCollector::GeometryList & osgUtil::GeometryCollector::getGeometryList()
	static int _bind_getGeometryList(lua_State *L) {
		if (!_lg_typecheck_getGeometryList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::GeometryCollector::GeometryList & osgUtil::GeometryCollector::getGeometryList() function, expected prototype:\nosgUtil::GeometryCollector::GeometryList & osgUtil::GeometryCollector::getGeometryList()\nClass arguments details:\n");
		}


		osgUtil::GeometryCollector* self=dynamic_cast< osgUtil::GeometryCollector* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::GeometryCollector::GeometryList & osgUtil::GeometryCollector::getGeometryList()");
		}
		const osgUtil::GeometryCollector::GeometryList* lret = &self->getGeometryList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::GeometryCollector::GeometryList >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgUtil::GeometryCollector* LunaTraits< osgUtil::GeometryCollector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_GeometryCollector::_bind_ctor(L);
}

void LunaTraits< osgUtil::GeometryCollector >::_bind_dtor(osgUtil::GeometryCollector* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::GeometryCollector >::className[] = "GeometryCollector";
const char LunaTraits< osgUtil::GeometryCollector >::fullName[] = "osgUtil::GeometryCollector";
const char LunaTraits< osgUtil::GeometryCollector >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::GeometryCollector >::parents[] = {"osgUtil.BaseOptimizerVisitor", 0};
const int LunaTraits< osgUtil::GeometryCollector >::hash = 62755262;
const int LunaTraits< osgUtil::GeometryCollector >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::GeometryCollector >::methods[] = {
	{"reset", &luna_wrapper_osgUtil_GeometryCollector::_bind_reset},
	{"apply", &luna_wrapper_osgUtil_GeometryCollector::_bind_apply},
	{"getGeometryList", &luna_wrapper_osgUtil_GeometryCollector::_bind_getGeometryList},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::GeometryCollector >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_GeometryCollector::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::GeometryCollector >::enumValues[] = {
	{0,0}
};


