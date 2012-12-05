#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_DelaunayConstraint.h>

class luna_wrapper_osgUtil_DelaunayConstraint {
public:
	typedef Luna< osgUtil::DelaunayConstraint > luna_t;

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
		osgUtil::DelaunayConstraint* ptr= dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::DelaunayConstraint >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_addtriangle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTriangles_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangles_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPoints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7204710)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_merge(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeVerticesInside(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_windingNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_outside(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handleOverlaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::DelaunayConstraint::DelaunayConstraint()
	static osgUtil::DelaunayConstraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::DelaunayConstraint::DelaunayConstraint() function, expected prototype:\nosgUtil::DelaunayConstraint::DelaunayConstraint()\nClass arguments details:\n");
		}


		return new osgUtil::DelaunayConstraint();
	}

	// osgUtil::DelaunayConstraint::DelaunayConstraint(lua_Table * data)
	static osgUtil::DelaunayConstraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::DelaunayConstraint::DelaunayConstraint(lua_Table * data) function, expected prototype:\nosgUtil::DelaunayConstraint::DelaunayConstraint(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgUtil_DelaunayConstraint(L,NULL);
	}

	// Overload binder for osgUtil::DelaunayConstraint::DelaunayConstraint
	static osgUtil::DelaunayConstraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DelaunayConstraint, cannot match any of the overloads for function DelaunayConstraint:\n  DelaunayConstraint()\n  DelaunayConstraint(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::DelaunayConstraint::addtriangle(int i1, int i2, int i3)
	static int _bind_addtriangle(lua_State *L) {
		if (!_lg_typecheck_addtriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::addtriangle(int i1, int i2, int i3) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::addtriangle(int i1, int i2, int i3)\nClass arguments details:\n");
		}

		int i1=(int)lua_tointeger(L,2);
		int i2=(int)lua_tointeger(L,3);
		int i3=(int)lua_tointeger(L,4);

		osgUtil::DelaunayConstraint* self=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::addtriangle(int, int, int)");
		}
		self->addtriangle(i1, i2, i3);

		return 0;
	}

	// const osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles() const
	static int _bind_getTriangles_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTriangles_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles() const function, expected prototype:\nconst osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles() const\nClass arguments details:\n");
		}


		osgUtil::DelaunayConstraint* self=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles() const");
		}
		const osg::DrawElementsUInt * lret = self->getTriangles();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElementsUInt >::push(L,lret,false);

		return 1;
	}

	// osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles()
	static int _bind_getTriangles_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTriangles_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles() function, expected prototype:\nosg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles()\nClass arguments details:\n");
		}


		osgUtil::DelaunayConstraint* self=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles()");
		}
		osg::DrawElementsUInt * lret = self->getTriangles();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElementsUInt >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::DelaunayConstraint::getTriangles
	static int _bind_getTriangles(lua_State *L) {
		if (_lg_typecheck_getTriangles_overload_1(L)) return _bind_getTriangles_overload_1(L);
		if (_lg_typecheck_getTriangles_overload_2(L)) return _bind_getTriangles_overload_2(L);

		luaL_error(L, "error in function getTriangles, cannot match any of the overloads for function getTriangles:\n  getTriangles()\n  getTriangles()\n");
		return 0;
	}

	// osg::Vec3Array * osgUtil::DelaunayConstraint::getPoints(const osg::Vec3Array * points)
	static int _bind_getPoints(lua_State *L) {
		if (!_lg_typecheck_getPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3Array * osgUtil::DelaunayConstraint::getPoints(const osg::Vec3Array * points) function, expected prototype:\nosg::Vec3Array * osgUtil::DelaunayConstraint::getPoints(const osg::Vec3Array * points)\nClass arguments details:\narg 1 ID = 7204710\n");
		}

		const osg::Vec3Array* points=(Luna< osg::Vec3Array >::check(L,2));

		osgUtil::DelaunayConstraint* self=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3Array * osgUtil::DelaunayConstraint::getPoints(const osg::Vec3Array *)");
		}
		osg::Vec3Array * lret = self->getPoints(points);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// osg::DrawElementsUInt * osgUtil::DelaunayConstraint::makeDrawable()
	static int _bind_makeDrawable(lua_State *L) {
		if (!_lg_typecheck_makeDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt * osgUtil::DelaunayConstraint::makeDrawable() function, expected prototype:\nosg::DrawElementsUInt * osgUtil::DelaunayConstraint::makeDrawable()\nClass arguments details:\n");
		}


		osgUtil::DelaunayConstraint* self=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DrawElementsUInt * osgUtil::DelaunayConstraint::makeDrawable()");
		}
		osg::DrawElementsUInt * lret = self->makeDrawable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElementsUInt >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::DelaunayConstraint::merge(osgUtil::DelaunayConstraint * dco)
	static int _bind_merge(lua_State *L) {
		if (!_lg_typecheck_merge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::merge(osgUtil::DelaunayConstraint * dco) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::merge(osgUtil::DelaunayConstraint * dco)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::DelaunayConstraint* dco=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::DelaunayConstraint* self=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::merge(osgUtil::DelaunayConstraint *)");
		}
		self->merge(dco);

		return 0;
	}

	// void osgUtil::DelaunayConstraint::removeVerticesInside(const osgUtil::DelaunayConstraint * dco)
	static int _bind_removeVerticesInside(lua_State *L) {
		if (!_lg_typecheck_removeVerticesInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::removeVerticesInside(const osgUtil::DelaunayConstraint * dco) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::removeVerticesInside(const osgUtil::DelaunayConstraint * dco)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::DelaunayConstraint* dco=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::DelaunayConstraint* self=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::removeVerticesInside(const osgUtil::DelaunayConstraint *)");
		}
		self->removeVerticesInside(dco);

		return 0;
	}

	// float osgUtil::DelaunayConstraint::windingNumber(const osg::Vec3f & testpoint) const
	static int _bind_windingNumber(lua_State *L) {
		if (!_lg_typecheck_windingNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::DelaunayConstraint::windingNumber(const osg::Vec3f & testpoint) const function, expected prototype:\nfloat osgUtil::DelaunayConstraint::windingNumber(const osg::Vec3f & testpoint) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* testpoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !testpoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg testpoint in osgUtil::DelaunayConstraint::windingNumber function");
		}
		const osg::Vec3f & testpoint=*testpoint_ptr;

		osgUtil::DelaunayConstraint* self=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::DelaunayConstraint::windingNumber(const osg::Vec3f &) const");
		}
		float lret = self->windingNumber(testpoint);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgUtil::DelaunayConstraint::contains(const osg::Vec3f & testpoint) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::DelaunayConstraint::contains(const osg::Vec3f & testpoint) const function, expected prototype:\nbool osgUtil::DelaunayConstraint::contains(const osg::Vec3f & testpoint) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* testpoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !testpoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg testpoint in osgUtil::DelaunayConstraint::contains function");
		}
		const osg::Vec3f & testpoint=*testpoint_ptr;

		osgUtil::DelaunayConstraint* self=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::DelaunayConstraint::contains(const osg::Vec3f &) const");
		}
		bool lret = self->contains(testpoint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::DelaunayConstraint::outside(const osg::Vec3f & testpoint) const
	static int _bind_outside(lua_State *L) {
		if (!_lg_typecheck_outside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::DelaunayConstraint::outside(const osg::Vec3f & testpoint) const function, expected prototype:\nbool osgUtil::DelaunayConstraint::outside(const osg::Vec3f & testpoint) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* testpoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !testpoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg testpoint in osgUtil::DelaunayConstraint::outside function");
		}
		const osg::Vec3f & testpoint=*testpoint_ptr;

		osgUtil::DelaunayConstraint* self=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::DelaunayConstraint::outside(const osg::Vec3f &) const");
		}
		bool lret = self->outside(testpoint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::DelaunayConstraint::handleOverlaps()
	static int _bind_handleOverlaps(lua_State *L) {
		if (!_lg_typecheck_handleOverlaps(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::handleOverlaps() function, expected prototype:\nvoid osgUtil::DelaunayConstraint::handleOverlaps()\nClass arguments details:\n");
		}


		osgUtil::DelaunayConstraint* self=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::handleOverlaps()");
		}
		self->handleOverlaps();

		return 0;
	}


	// Operator binds:

};

osgUtil::DelaunayConstraint* LunaTraits< osgUtil::DelaunayConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_DelaunayConstraint::_bind_ctor(L);
}

void LunaTraits< osgUtil::DelaunayConstraint >::_bind_dtor(osgUtil::DelaunayConstraint* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::DelaunayConstraint >::className[] = "DelaunayConstraint";
const char LunaTraits< osgUtil::DelaunayConstraint >::fullName[] = "osgUtil::DelaunayConstraint";
const char LunaTraits< osgUtil::DelaunayConstraint >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::DelaunayConstraint >::parents[] = {"osg.Geometry", 0};
const int LunaTraits< osgUtil::DelaunayConstraint >::hash = 48712683;
const int LunaTraits< osgUtil::DelaunayConstraint >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::DelaunayConstraint >::methods[] = {
	{"addtriangle", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_addtriangle},
	{"getTriangles", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_getTriangles},
	{"getPoints", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_getPoints},
	{"makeDrawable", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_makeDrawable},
	{"merge", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_merge},
	{"removeVerticesInside", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_removeVerticesInside},
	{"windingNumber", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_windingNumber},
	{"contains", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_contains},
	{"outside", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_outside},
	{"handleOverlaps", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_handleOverlaps},
	{"__eq", &luna_wrapper_osgUtil_DelaunayConstraint::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::DelaunayConstraint >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_DelaunayConstraint::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::DelaunayConstraint >::enumValues[] = {
	{0,0}
};


