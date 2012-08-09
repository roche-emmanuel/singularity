#include <plug_common.h>

class luna_wrapper_osgUtil_Tessellator {
public:
	typedef Luna< osgUtil::Tessellator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::Tessellator* ptr= dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::Tessellator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setBoundaryOnly(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBoundaryOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWindingType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindingType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTessellationType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTessellationType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_retessellatePolygons(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTessellationNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginTessellation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_beginContour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92303204)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endContour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_endTessellation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::Tessellator::Tessellator()
	static osgUtil::Tessellator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Tessellator::Tessellator() function, expected prototype:\nosgUtil::Tessellator::Tessellator()\nClass arguments details:\n");
		}


		return new osgUtil::Tessellator();
	}


	// Function binds:
	// void osgUtil::Tessellator::setBoundaryOnly(const bool tt)
	static int _bind_setBoundaryOnly(lua_State *L) {
		if (!_lg_typecheck_setBoundaryOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::setBoundaryOnly(const bool tt) function, expected prototype:\nvoid osgUtil::Tessellator::setBoundaryOnly(const bool tt)\nClass arguments details:\n");
		}

		bool tt=(bool)(lua_toboolean(L,2)==1);

		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::setBoundaryOnly(const bool)");
		}
		self->setBoundaryOnly(tt);

		return 0;
	}

	// bool osgUtil::Tessellator::getBoundaryOnly()
	static int _bind_getBoundaryOnly(lua_State *L) {
		if (!_lg_typecheck_getBoundaryOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::Tessellator::getBoundaryOnly() function, expected prototype:\nbool osgUtil::Tessellator::getBoundaryOnly()\nClass arguments details:\n");
		}


		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::Tessellator::getBoundaryOnly()");
		}
		bool lret = self->getBoundaryOnly();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Tessellator::setWindingType(const osgUtil::Tessellator::WindingType wt)
	static int _bind_setWindingType(lua_State *L) {
		if (!_lg_typecheck_setWindingType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::setWindingType(const osgUtil::Tessellator::WindingType wt) function, expected prototype:\nvoid osgUtil::Tessellator::setWindingType(const osgUtil::Tessellator::WindingType wt)\nClass arguments details:\n");
		}

		osgUtil::Tessellator::WindingType wt=(osgUtil::Tessellator::WindingType)lua_tointeger(L,2);

		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::setWindingType(const osgUtil::Tessellator::WindingType)");
		}
		self->setWindingType(wt);

		return 0;
	}

	// osgUtil::Tessellator::WindingType osgUtil::Tessellator::getWindingType()
	static int _bind_getWindingType(lua_State *L) {
		if (!_lg_typecheck_getWindingType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Tessellator::WindingType osgUtil::Tessellator::getWindingType() function, expected prototype:\nosgUtil::Tessellator::WindingType osgUtil::Tessellator::getWindingType()\nClass arguments details:\n");
		}


		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Tessellator::WindingType osgUtil::Tessellator::getWindingType()");
		}
		osgUtil::Tessellator::WindingType lret = self->getWindingType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Tessellator::setTessellationType(const osgUtil::Tessellator::TessellationType tt)
	static int _bind_setTessellationType(lua_State *L) {
		if (!_lg_typecheck_setTessellationType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::setTessellationType(const osgUtil::Tessellator::TessellationType tt) function, expected prototype:\nvoid osgUtil::Tessellator::setTessellationType(const osgUtil::Tessellator::TessellationType tt)\nClass arguments details:\n");
		}

		osgUtil::Tessellator::TessellationType tt=(osgUtil::Tessellator::TessellationType)lua_tointeger(L,2);

		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::setTessellationType(const osgUtil::Tessellator::TessellationType)");
		}
		self->setTessellationType(tt);

		return 0;
	}

	// osgUtil::Tessellator::TessellationType osgUtil::Tessellator::getTessellationType()
	static int _bind_getTessellationType(lua_State *L) {
		if (!_lg_typecheck_getTessellationType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Tessellator::TessellationType osgUtil::Tessellator::getTessellationType() function, expected prototype:\nosgUtil::Tessellator::TessellationType osgUtil::Tessellator::getTessellationType()\nClass arguments details:\n");
		}


		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Tessellator::TessellationType osgUtil::Tessellator::getTessellationType()");
		}
		osgUtil::Tessellator::TessellationType lret = self->getTessellationType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Tessellator::retessellatePolygons(osg::Geometry & cxgeom)
	static int _bind_retessellatePolygons(lua_State *L) {
		if (!_lg_typecheck_retessellatePolygons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::retessellatePolygons(osg::Geometry & cxgeom) function, expected prototype:\nvoid osgUtil::Tessellator::retessellatePolygons(osg::Geometry & cxgeom)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geometry* cxgeom_ptr=dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2));
		if( !cxgeom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cxgeom in osgUtil::Tessellator::retessellatePolygons function");
		}
		osg::Geometry & cxgeom=*cxgeom_ptr;

		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::retessellatePolygons(osg::Geometry &)");
		}
		self->retessellatePolygons(cxgeom);

		return 0;
	}

	// void osgUtil::Tessellator::setTessellationNormal(const osg::Vec3f norm)
	static int _bind_setTessellationNormal(lua_State *L) {
		if (!_lg_typecheck_setTessellationNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::setTessellationNormal(const osg::Vec3f norm) function, expected prototype:\nvoid osgUtil::Tessellator::setTessellationNormal(const osg::Vec3f norm)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* norm_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !norm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg norm in osgUtil::Tessellator::setTessellationNormal function");
		}
		const osg::Vec3f norm=*norm_ptr;

		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::setTessellationNormal(const osg::Vec3f)");
		}
		self->setTessellationNormal(norm);

		return 0;
	}

	// void osgUtil::Tessellator::beginTessellation()
	static int _bind_beginTessellation(lua_State *L) {
		if (!_lg_typecheck_beginTessellation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::beginTessellation() function, expected prototype:\nvoid osgUtil::Tessellator::beginTessellation()\nClass arguments details:\n");
		}


		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::beginTessellation()");
		}
		self->beginTessellation();

		return 0;
	}

	// void osgUtil::Tessellator::beginContour()
	static int _bind_beginContour(lua_State *L) {
		if (!_lg_typecheck_beginContour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::beginContour() function, expected prototype:\nvoid osgUtil::Tessellator::beginContour()\nClass arguments details:\n");
		}


		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::beginContour()");
		}
		self->beginContour();

		return 0;
	}

	// void osgUtil::Tessellator::addVertex(osg::Vec3f * vertex)
	static int _bind_addVertex(lua_State *L) {
		if (!_lg_typecheck_addVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::addVertex(osg::Vec3f * vertex) function, expected prototype:\nvoid osgUtil::Tessellator::addVertex(osg::Vec3f * vertex)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		osg::Vec3f* vertex=(Luna< osg::Vec3f >::check(L,2));

		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::addVertex(osg::Vec3f *)");
		}
		self->addVertex(vertex);

		return 0;
	}

	// void osgUtil::Tessellator::endContour()
	static int _bind_endContour(lua_State *L) {
		if (!_lg_typecheck_endContour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::endContour() function, expected prototype:\nvoid osgUtil::Tessellator::endContour()\nClass arguments details:\n");
		}


		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::endContour()");
		}
		self->endContour();

		return 0;
	}

	// void osgUtil::Tessellator::endTessellation()
	static int _bind_endTessellation(lua_State *L) {
		if (!_lg_typecheck_endTessellation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::endTessellation() function, expected prototype:\nvoid osgUtil::Tessellator::endTessellation()\nClass arguments details:\n");
		}


		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::endTessellation()");
		}
		self->endTessellation();

		return 0;
	}

	// void osgUtil::Tessellator::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::reset() function, expected prototype:\nvoid osgUtil::Tessellator::reset()\nClass arguments details:\n");
		}


		osgUtil::Tessellator* self=dynamic_cast< osgUtil::Tessellator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::reset()");
		}
		self->reset();

		return 0;
	}


	// Operator binds:

};

osgUtil::Tessellator* LunaTraits< osgUtil::Tessellator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_Tessellator::_bind_ctor(L);
}

void LunaTraits< osgUtil::Tessellator >::_bind_dtor(osgUtil::Tessellator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::Tessellator >::className[] = "Tessellator";
const char LunaTraits< osgUtil::Tessellator >::fullName[] = "osgUtil::Tessellator";
const char LunaTraits< osgUtil::Tessellator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Tessellator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::Tessellator >::hash = 27675580;
const int LunaTraits< osgUtil::Tessellator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::Tessellator >::methods[] = {
	{"setBoundaryOnly", &luna_wrapper_osgUtil_Tessellator::_bind_setBoundaryOnly},
	{"getBoundaryOnly", &luna_wrapper_osgUtil_Tessellator::_bind_getBoundaryOnly},
	{"setWindingType", &luna_wrapper_osgUtil_Tessellator::_bind_setWindingType},
	{"getWindingType", &luna_wrapper_osgUtil_Tessellator::_bind_getWindingType},
	{"setTessellationType", &luna_wrapper_osgUtil_Tessellator::_bind_setTessellationType},
	{"getTessellationType", &luna_wrapper_osgUtil_Tessellator::_bind_getTessellationType},
	{"retessellatePolygons", &luna_wrapper_osgUtil_Tessellator::_bind_retessellatePolygons},
	{"setTessellationNormal", &luna_wrapper_osgUtil_Tessellator::_bind_setTessellationNormal},
	{"beginTessellation", &luna_wrapper_osgUtil_Tessellator::_bind_beginTessellation},
	{"beginContour", &luna_wrapper_osgUtil_Tessellator::_bind_beginContour},
	{"addVertex", &luna_wrapper_osgUtil_Tessellator::_bind_addVertex},
	{"endContour", &luna_wrapper_osgUtil_Tessellator::_bind_endContour},
	{"endTessellation", &luna_wrapper_osgUtil_Tessellator::_bind_endTessellation},
	{"reset", &luna_wrapper_osgUtil_Tessellator::_bind_reset},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Tessellator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_Tessellator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Tessellator >::enumValues[] = {
	{"TESS_WINDING_ODD", osgUtil::Tessellator::TESS_WINDING_ODD},
	{"TESS_WINDING_NONZERO", osgUtil::Tessellator::TESS_WINDING_NONZERO},
	{"TESS_WINDING_POSITIVE", osgUtil::Tessellator::TESS_WINDING_POSITIVE},
	{"TESS_WINDING_NEGATIVE", osgUtil::Tessellator::TESS_WINDING_NEGATIVE},
	{"TESS_WINDING_ABS_GEQ_TWO", osgUtil::Tessellator::TESS_WINDING_ABS_GEQ_TWO},
	{"TESS_TYPE_GEOMETRY", osgUtil::Tessellator::TESS_TYPE_GEOMETRY},
	{"TESS_TYPE_DRAWABLE", osgUtil::Tessellator::TESS_TYPE_DRAWABLE},
	{"TESS_TYPE_POLYGONS", osgUtil::Tessellator::TESS_TYPE_POLYGONS},
	{0,0}
};

