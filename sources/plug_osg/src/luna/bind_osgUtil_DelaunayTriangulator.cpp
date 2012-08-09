#include <plug_common.h>

class luna_wrapper_osgUtil_DelaunayTriangulator {
public:
	typedef Luna< osgUtil::DelaunayTriangulator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::DelaunayTriangulator* ptr= dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::DelaunayTriangulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,7204710)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7204710)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setInputPointArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7204710)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInputPointArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInputPointArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOutputNormalArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7204710)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOutputNormalArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOutputNormalArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addInputConstraint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_triangulate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_removeInternalTriangles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::DelaunayTriangulator::DelaunayTriangulator()
	static osgUtil::DelaunayTriangulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::DelaunayTriangulator::DelaunayTriangulator() function, expected prototype:\nosgUtil::DelaunayTriangulator::DelaunayTriangulator()\nClass arguments details:\n");
		}


		return new osgUtil::DelaunayTriangulator();
	}

	// osgUtil::DelaunayTriangulator::DelaunayTriangulator(osg::Vec3Array * points, osg::Vec3Array * normals = 0)
	static osgUtil::DelaunayTriangulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::DelaunayTriangulator::DelaunayTriangulator(osg::Vec3Array * points, osg::Vec3Array * normals = 0) function, expected prototype:\nosgUtil::DelaunayTriangulator::DelaunayTriangulator(osg::Vec3Array * points, osg::Vec3Array * normals = 0)\nClass arguments details:\narg 1 ID = 7204710\narg 2 ID = 7204710\n");
		}

		int luatop = lua_gettop(L);

		osg::Vec3Array* points=(Luna< osg::Vec3Array >::check(L,1));
		osg::Vec3Array* normals=luatop>1 ? (Luna< osg::Vec3Array >::check(L,2)) : (osg::Vec3Array*)0;

		return new osgUtil::DelaunayTriangulator(points, normals);
	}

	// osgUtil::DelaunayTriangulator::DelaunayTriangulator(const osgUtil::DelaunayTriangulator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::DelaunayTriangulator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::DelaunayTriangulator::DelaunayTriangulator(const osgUtil::DelaunayTriangulator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::DelaunayTriangulator::DelaunayTriangulator(const osgUtil::DelaunayTriangulator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgUtil::DelaunayTriangulator* copy_ptr=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgUtil::DelaunayTriangulator::DelaunayTriangulator function");
		}
		const osgUtil::DelaunayTriangulator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::DelaunayTriangulator::DelaunayTriangulator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgUtil::DelaunayTriangulator(copy, copyop);
	}

	// Overload binder for osgUtil::DelaunayTriangulator::DelaunayTriangulator
	static osgUtil::DelaunayTriangulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function DelaunayTriangulator, cannot match any of the overloads for function DelaunayTriangulator:\n  DelaunayTriangulator()\n  DelaunayTriangulator(osg::Vec3Array *, osg::Vec3Array *)\n  DelaunayTriangulator(const osgUtil::DelaunayTriangulator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::DelaunayTriangulator::setInputPointArray(osg::Vec3Array * points)
	static int _bind_setInputPointArray(lua_State *L) {
		if (!_lg_typecheck_setInputPointArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayTriangulator::setInputPointArray(osg::Vec3Array * points) function, expected prototype:\nvoid osgUtil::DelaunayTriangulator::setInputPointArray(osg::Vec3Array * points)\nClass arguments details:\narg 1 ID = 7204710\n");
		}

		osg::Vec3Array* points=(Luna< osg::Vec3Array >::check(L,2));

		osgUtil::DelaunayTriangulator* self=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayTriangulator::setInputPointArray(osg::Vec3Array *)");
		}
		self->setInputPointArray(points);

		return 0;
	}

	// const osg::Vec3Array * osgUtil::DelaunayTriangulator::getInputPointArray() const
	static int _bind_getInputPointArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getInputPointArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3Array * osgUtil::DelaunayTriangulator::getInputPointArray() const function, expected prototype:\nconst osg::Vec3Array * osgUtil::DelaunayTriangulator::getInputPointArray() const\nClass arguments details:\n");
		}


		osgUtil::DelaunayTriangulator* self=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3Array * osgUtil::DelaunayTriangulator::getInputPointArray() const");
		}
		const osg::Vec3Array * lret = self->getInputPointArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3Array * osgUtil::DelaunayTriangulator::getInputPointArray()
	static int _bind_getInputPointArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getInputPointArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3Array * osgUtil::DelaunayTriangulator::getInputPointArray() function, expected prototype:\nosg::Vec3Array * osgUtil::DelaunayTriangulator::getInputPointArray()\nClass arguments details:\n");
		}


		osgUtil::DelaunayTriangulator* self=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3Array * osgUtil::DelaunayTriangulator::getInputPointArray()");
		}
		osg::Vec3Array * lret = self->getInputPointArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::DelaunayTriangulator::getInputPointArray
	static int _bind_getInputPointArray(lua_State *L) {
		if (_lg_typecheck_getInputPointArray_overload_1(L)) return _bind_getInputPointArray_overload_1(L);
		if (_lg_typecheck_getInputPointArray_overload_2(L)) return _bind_getInputPointArray_overload_2(L);

		luaL_error(L, "error in function getInputPointArray, cannot match any of the overloads for function getInputPointArray:\n  getInputPointArray()\n  getInputPointArray()\n");
		return 0;
	}

	// void osgUtil::DelaunayTriangulator::setOutputNormalArray(osg::Vec3Array * normals)
	static int _bind_setOutputNormalArray(lua_State *L) {
		if (!_lg_typecheck_setOutputNormalArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayTriangulator::setOutputNormalArray(osg::Vec3Array * normals) function, expected prototype:\nvoid osgUtil::DelaunayTriangulator::setOutputNormalArray(osg::Vec3Array * normals)\nClass arguments details:\narg 1 ID = 7204710\n");
		}

		osg::Vec3Array* normals=(Luna< osg::Vec3Array >::check(L,2));

		osgUtil::DelaunayTriangulator* self=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayTriangulator::setOutputNormalArray(osg::Vec3Array *)");
		}
		self->setOutputNormalArray(normals);

		return 0;
	}

	// const osg::Vec3Array * osgUtil::DelaunayTriangulator::getOutputNormalArray() const
	static int _bind_getOutputNormalArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOutputNormalArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3Array * osgUtil::DelaunayTriangulator::getOutputNormalArray() const function, expected prototype:\nconst osg::Vec3Array * osgUtil::DelaunayTriangulator::getOutputNormalArray() const\nClass arguments details:\n");
		}


		osgUtil::DelaunayTriangulator* self=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3Array * osgUtil::DelaunayTriangulator::getOutputNormalArray() const");
		}
		const osg::Vec3Array * lret = self->getOutputNormalArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3Array * osgUtil::DelaunayTriangulator::getOutputNormalArray()
	static int _bind_getOutputNormalArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOutputNormalArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3Array * osgUtil::DelaunayTriangulator::getOutputNormalArray() function, expected prototype:\nosg::Vec3Array * osgUtil::DelaunayTriangulator::getOutputNormalArray()\nClass arguments details:\n");
		}


		osgUtil::DelaunayTriangulator* self=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3Array * osgUtil::DelaunayTriangulator::getOutputNormalArray()");
		}
		osg::Vec3Array * lret = self->getOutputNormalArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::DelaunayTriangulator::getOutputNormalArray
	static int _bind_getOutputNormalArray(lua_State *L) {
		if (_lg_typecheck_getOutputNormalArray_overload_1(L)) return _bind_getOutputNormalArray_overload_1(L);
		if (_lg_typecheck_getOutputNormalArray_overload_2(L)) return _bind_getOutputNormalArray_overload_2(L);

		luaL_error(L, "error in function getOutputNormalArray, cannot match any of the overloads for function getOutputNormalArray:\n  getOutputNormalArray()\n  getOutputNormalArray()\n");
		return 0;
	}

	// void osgUtil::DelaunayTriangulator::addInputConstraint(osgUtil::DelaunayConstraint * dc)
	static int _bind_addInputConstraint(lua_State *L) {
		if (!_lg_typecheck_addInputConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayTriangulator::addInputConstraint(osgUtil::DelaunayConstraint * dc) function, expected prototype:\nvoid osgUtil::DelaunayTriangulator::addInputConstraint(osgUtil::DelaunayConstraint * dc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::DelaunayConstraint* dc=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::DelaunayTriangulator* self=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayTriangulator::addInputConstraint(osgUtil::DelaunayConstraint *)");
		}
		self->addInputConstraint(dc);

		return 0;
	}

	// bool osgUtil::DelaunayTriangulator::triangulate()
	static int _bind_triangulate(lua_State *L) {
		if (!_lg_typecheck_triangulate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::DelaunayTriangulator::triangulate() function, expected prototype:\nbool osgUtil::DelaunayTriangulator::triangulate()\nClass arguments details:\n");
		}


		osgUtil::DelaunayTriangulator* self=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::DelaunayTriangulator::triangulate()");
		}
		bool lret = self->triangulate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osg::DrawElementsUInt * osgUtil::DelaunayTriangulator::getTriangles() const
	static int _bind_getTriangles_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTriangles_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::DrawElementsUInt * osgUtil::DelaunayTriangulator::getTriangles() const function, expected prototype:\nconst osg::DrawElementsUInt * osgUtil::DelaunayTriangulator::getTriangles() const\nClass arguments details:\n");
		}


		osgUtil::DelaunayTriangulator* self=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::DrawElementsUInt * osgUtil::DelaunayTriangulator::getTriangles() const");
		}
		const osg::DrawElementsUInt * lret = self->getTriangles();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElementsUInt >::push(L,lret,false);

		return 1;
	}

	// osg::DrawElementsUInt * osgUtil::DelaunayTriangulator::getTriangles()
	static int _bind_getTriangles_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTriangles_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt * osgUtil::DelaunayTriangulator::getTriangles() function, expected prototype:\nosg::DrawElementsUInt * osgUtil::DelaunayTriangulator::getTriangles()\nClass arguments details:\n");
		}


		osgUtil::DelaunayTriangulator* self=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DrawElementsUInt * osgUtil::DelaunayTriangulator::getTriangles()");
		}
		osg::DrawElementsUInt * lret = self->getTriangles();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElementsUInt >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::DelaunayTriangulator::getTriangles
	static int _bind_getTriangles(lua_State *L) {
		if (_lg_typecheck_getTriangles_overload_1(L)) return _bind_getTriangles_overload_1(L);
		if (_lg_typecheck_getTriangles_overload_2(L)) return _bind_getTriangles_overload_2(L);

		luaL_error(L, "error in function getTriangles, cannot match any of the overloads for function getTriangles:\n  getTriangles()\n  getTriangles()\n");
		return 0;
	}

	// void osgUtil::DelaunayTriangulator::removeInternalTriangles(osgUtil::DelaunayConstraint * constraint)
	static int _bind_removeInternalTriangles(lua_State *L) {
		if (!_lg_typecheck_removeInternalTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayTriangulator::removeInternalTriangles(osgUtil::DelaunayConstraint * constraint) function, expected prototype:\nvoid osgUtil::DelaunayTriangulator::removeInternalTriangles(osgUtil::DelaunayConstraint * constraint)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::DelaunayConstraint* constraint=dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::DelaunayTriangulator* self=dynamic_cast< osgUtil::DelaunayTriangulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayTriangulator::removeInternalTriangles(osgUtil::DelaunayConstraint *)");
		}
		self->removeInternalTriangles(constraint);

		return 0;
	}


	// Operator binds:

};

osgUtil::DelaunayTriangulator* LunaTraits< osgUtil::DelaunayTriangulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_DelaunayTriangulator::_bind_ctor(L);
}

void LunaTraits< osgUtil::DelaunayTriangulator >::_bind_dtor(osgUtil::DelaunayTriangulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::DelaunayTriangulator >::className[] = "DelaunayTriangulator";
const char LunaTraits< osgUtil::DelaunayTriangulator >::fullName[] = "osgUtil::DelaunayTriangulator";
const char LunaTraits< osgUtil::DelaunayTriangulator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::DelaunayTriangulator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::DelaunayTriangulator >::hash = 25161392;
const int LunaTraits< osgUtil::DelaunayTriangulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::DelaunayTriangulator >::methods[] = {
	{"setInputPointArray", &luna_wrapper_osgUtil_DelaunayTriangulator::_bind_setInputPointArray},
	{"getInputPointArray", &luna_wrapper_osgUtil_DelaunayTriangulator::_bind_getInputPointArray},
	{"setOutputNormalArray", &luna_wrapper_osgUtil_DelaunayTriangulator::_bind_setOutputNormalArray},
	{"getOutputNormalArray", &luna_wrapper_osgUtil_DelaunayTriangulator::_bind_getOutputNormalArray},
	{"addInputConstraint", &luna_wrapper_osgUtil_DelaunayTriangulator::_bind_addInputConstraint},
	{"triangulate", &luna_wrapper_osgUtil_DelaunayTriangulator::_bind_triangulate},
	{"getTriangles", &luna_wrapper_osgUtil_DelaunayTriangulator::_bind_getTriangles},
	{"removeInternalTriangles", &luna_wrapper_osgUtil_DelaunayTriangulator::_bind_removeInternalTriangles},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::DelaunayTriangulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_DelaunayTriangulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::DelaunayTriangulator >::enumValues[] = {
	{0,0}
};


