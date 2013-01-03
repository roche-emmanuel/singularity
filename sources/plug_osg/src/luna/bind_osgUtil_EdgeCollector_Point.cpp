#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_EdgeCollector_Point.h>

class luna_wrapper_osgUtil_EdgeCollector_Point {
public:
	typedef Luna< osgUtil::EdgeCollector::Point > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osgUtil::EdgeCollector::Point* ptr= dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::EdgeCollector::Point* ptr= luna_caster< osg::Referenced, osgUtil::EdgeCollector::Point >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::EdgeCollector::Point >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isBoundaryPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::EdgeCollector::Point::Point()
	static osgUtil::EdgeCollector::Point* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Point::Point() function, expected prototype:\nosgUtil::EdgeCollector::Point::Point()\nClass arguments details:\n");
		}


		return new osgUtil::EdgeCollector::Point();
	}

	// osgUtil::EdgeCollector::Point::Point(lua_Table * data)
	static osgUtil::EdgeCollector::Point* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Point::Point(lua_Table * data) function, expected prototype:\nosgUtil::EdgeCollector::Point::Point(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgUtil_EdgeCollector_Point(L,NULL);
	}

	// Overload binder for osgUtil::EdgeCollector::Point::Point
	static osgUtil::EdgeCollector::Point* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Point, cannot match any of the overloads for function Point:\n  Point()\n  Point(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::EdgeCollector::Point::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Point::clear() function, expected prototype:\nvoid osgUtil::EdgeCollector::Point::clear()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Point::clear(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->clear();

		return 0;
	}

	// bool osgUtil::EdgeCollector::Point::isBoundaryPoint() const
	static int _bind_isBoundaryPoint(lua_State *L) {
		if (!_lg_typecheck_isBoundaryPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Point::isBoundaryPoint() const function, expected prototype:\nbool osgUtil::EdgeCollector::Point::isBoundaryPoint() const\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Point::isBoundaryPoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isBoundaryPoint();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// bool osgUtil::EdgeCollector::Point::operator<(const osgUtil::EdgeCollector::Point & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Point::operator<(const osgUtil::EdgeCollector::Point & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Point::operator<(const osgUtil::EdgeCollector::Point & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::EdgeCollector::Point* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Point::operator< function");
		}
		const osgUtil::EdgeCollector::Point & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Point::operator<(const osgUtil::EdgeCollector::Point &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::EdgeCollector::Point* LunaTraits< osgUtil::EdgeCollector::Point >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_EdgeCollector_Point::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::EdgeCollector::Point >::_bind_dtor(osgUtil::EdgeCollector::Point* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::EdgeCollector::Point >::className[] = "EdgeCollector_Point";
const char LunaTraits< osgUtil::EdgeCollector::Point >::fullName[] = "osgUtil::EdgeCollector::Point";
const char LunaTraits< osgUtil::EdgeCollector::Point >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::Point >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::EdgeCollector::Point >::hash = 78907547;
const int LunaTraits< osgUtil::EdgeCollector::Point >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::Point >::methods[] = {
	{"clear", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_clear},
	{"isBoundaryPoint", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_isBoundaryPoint},
	{"__lt", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind___lt},
	{"__eq", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::Point >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_EdgeCollector_Point::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::Point >::enumValues[] = {
	{0,0}
};


