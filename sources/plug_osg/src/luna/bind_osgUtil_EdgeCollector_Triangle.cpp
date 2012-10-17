#include <plug_common.h>

class luna_wrapper_osgUtil_EdgeCollector_Triangle {
public:
	typedef Luna< osgUtil::EdgeCollector::Triangle > luna_t;

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
		osgUtil::EdgeCollector::Triangle* ptr= dynamic_cast< osgUtil::EdgeCollector::Triangle* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::EdgeCollector::Triangle >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOrderedPoints(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_distance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBoundaryTriangle(lua_State *L) {
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
	// osgUtil::EdgeCollector::Triangle::Triangle()
	static osgUtil::EdgeCollector::Triangle* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Triangle::Triangle() function, expected prototype:\nosgUtil::EdgeCollector::Triangle::Triangle()\nClass arguments details:\n");
		}


		return new osgUtil::EdgeCollector::Triangle();
	}


	// Function binds:
	// void osgUtil::EdgeCollector::Triangle::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::clear() function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::clear()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=dynamic_cast< osgUtil::EdgeCollector::Triangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::clear()");
		}
		self->clear();

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3)
	static int _bind_setOrderedPoints(lua_State *L) {
		if (!_lg_typecheck_setOrderedPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		osgUtil::EdgeCollector::Point* p1=dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));
		osgUtil::EdgeCollector::Point* p2=dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,3));
		osgUtil::EdgeCollector::Point* p3=dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,4));

		osgUtil::EdgeCollector::Triangle* self=dynamic_cast< osgUtil::EdgeCollector::Triangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *)");
		}
		self->setOrderedPoints(p1, p2, p3);

		return 0;
	}

	// float osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f & vertex) const
	static int _bind_distance(lua_State *L) {
		if (!_lg_typecheck_distance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f & vertex) const function, expected prototype:\nfloat osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f & vertex) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* vertex_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !vertex_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertex in osgUtil::EdgeCollector::Triangle::distance function");
		}
		const osg::Vec3f & vertex=*vertex_ptr;

		osgUtil::EdgeCollector::Triangle* self=dynamic_cast< osgUtil::EdgeCollector::Triangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f &) const");
		}
		float lret = self->distance(vertex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const
	static int _bind_isBoundaryTriangle(lua_State *L) {
		if (!_lg_typecheck_isBoundaryTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const function, expected prototype:\nbool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Triangle* self=dynamic_cast< osgUtil::EdgeCollector::Triangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const");
		}
		bool lret = self->isBoundaryTriangle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// bool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::EdgeCollector::Triangle* rhs_ptr=dynamic_cast< osgUtil::EdgeCollector::Triangle* >(Luna< osg::Referenced >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Triangle::operator< function");
		}
		const osgUtil::EdgeCollector::Triangle & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Triangle* self=dynamic_cast< osgUtil::EdgeCollector::Triangle* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle &) const");
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::EdgeCollector::Triangle* LunaTraits< osgUtil::EdgeCollector::Triangle >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_ctor(L);
}

void LunaTraits< osgUtil::EdgeCollector::Triangle >::_bind_dtor(osgUtil::EdgeCollector::Triangle* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::EdgeCollector::Triangle >::className[] = "Triangle";
const char LunaTraits< osgUtil::EdgeCollector::Triangle >::fullName[] = "osgUtil::EdgeCollector::Triangle";
const char LunaTraits< osgUtil::EdgeCollector::Triangle >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::Triangle >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::EdgeCollector::Triangle >::hash = 34878428;
const int LunaTraits< osgUtil::EdgeCollector::Triangle >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::Triangle >::methods[] = {
	{"clear", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_clear},
	{"setOrderedPoints", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setOrderedPoints},
	{"distance", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_distance},
	{"isBoundaryTriangle", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_isBoundaryTriangle},
	{"__lt", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind___lt},
	{"__eq", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::Triangle >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::Triangle >::enumValues[] = {
	{0,0}
};


