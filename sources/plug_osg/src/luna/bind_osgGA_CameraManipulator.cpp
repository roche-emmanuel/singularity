#include <plug_common.h>

class luna_wrapper_osgGA_CameraManipulator {
public:
	typedef Luna< osgGA::CameraManipulator > luna_t;

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
		osgGA::CameraManipulator* ptr= dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::CameraManipulator >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCoordinateFrameCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCoordinateFrameCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCoordinateFrameCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSideVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrontVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setByMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setByInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFusionDistanceMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFusionDistanceValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIntersectTraversalMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntersectTraversalMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHomePosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHomePosition(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAutoComputeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoComputeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeHomePosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_home_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_home_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgGA::CameraManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::CameraManipulator::className() const function, expected prototype:\nconst char * osgGA::CameraManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::CameraManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::CameraManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	static int _bind_setCoordinateFrameCallback(lua_State *L) {
		if (!_lg_typecheck_setCoordinateFrameCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) function, expected prototype:\nvoid osgGA::CameraManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::CameraManipulator::CoordinateFrameCallback* cb=dynamic_cast< osgGA::CameraManipulator::CoordinateFrameCallback* >(Luna< osg::Referenced >::check(L,2));

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback *)");
		}
		self->setCoordinateFrameCallback(cb);

		return 0;
	}

	// osgGA::CameraManipulator::CoordinateFrameCallback * osgGA::CameraManipulator::getCoordinateFrameCallback()
	static int _bind_getCoordinateFrameCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCoordinateFrameCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::CameraManipulator::CoordinateFrameCallback * osgGA::CameraManipulator::getCoordinateFrameCallback() function, expected prototype:\nosgGA::CameraManipulator::CoordinateFrameCallback * osgGA::CameraManipulator::getCoordinateFrameCallback()\nClass arguments details:\n");
		}


		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::CameraManipulator::CoordinateFrameCallback * osgGA::CameraManipulator::getCoordinateFrameCallback()");
		}
		osgGA::CameraManipulator::CoordinateFrameCallback * lret = self->getCoordinateFrameCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator::CoordinateFrameCallback >::push(L,lret,false);

		return 1;
	}

	// const osgGA::CameraManipulator::CoordinateFrameCallback * osgGA::CameraManipulator::getCoordinateFrameCallback() const
	static int _bind_getCoordinateFrameCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCoordinateFrameCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::CameraManipulator::CoordinateFrameCallback * osgGA::CameraManipulator::getCoordinateFrameCallback() const function, expected prototype:\nconst osgGA::CameraManipulator::CoordinateFrameCallback * osgGA::CameraManipulator::getCoordinateFrameCallback() const\nClass arguments details:\n");
		}


		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::CameraManipulator::CoordinateFrameCallback * osgGA::CameraManipulator::getCoordinateFrameCallback() const");
		}
		const osgGA::CameraManipulator::CoordinateFrameCallback * lret = self->getCoordinateFrameCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator::CoordinateFrameCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::CameraManipulator::getCoordinateFrameCallback
	static int _bind_getCoordinateFrameCallback(lua_State *L) {
		if (_lg_typecheck_getCoordinateFrameCallback_overload_1(L)) return _bind_getCoordinateFrameCallback_overload_1(L);
		if (_lg_typecheck_getCoordinateFrameCallback_overload_2(L)) return _bind_getCoordinateFrameCallback_overload_2(L);

		luaL_error(L, "error in function getCoordinateFrameCallback, cannot match any of the overloads for function getCoordinateFrameCallback:\n  getCoordinateFrameCallback()\n  getCoordinateFrameCallback()\n");
		return 0;
	}

	// osg::Matrixd osgGA::CameraManipulator::getCoordinateFrame(const osg::Vec3d & position) const
	static int _bind_getCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_getCoordinateFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::CameraManipulator::getCoordinateFrame(const osg::Vec3d & position) const function, expected prototype:\nosg::Matrixd osgGA::CameraManipulator::getCoordinateFrame(const osg::Vec3d & position) const\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* position_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgGA::CameraManipulator::getCoordinateFrame function");
		}
		const osg::Vec3d & position=*position_ptr;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::CameraManipulator::getCoordinateFrame(const osg::Vec3d &) const");
		}
		osg::Matrixd stack_lret = self->getCoordinateFrame(position);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osgGA::CameraManipulator::getSideVector(const osg::Matrixd & cf) const
	static int _bind_getSideVector(lua_State *L) {
		if (!_lg_typecheck_getSideVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgGA::CameraManipulator::getSideVector(const osg::Matrixd & cf) const function, expected prototype:\nosg::Vec3d osgGA::CameraManipulator::getSideVector(const osg::Matrixd & cf) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* cf_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !cf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cf in osgGA::CameraManipulator::getSideVector function");
		}
		const osg::Matrixd & cf=*cf_ptr;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3d osgGA::CameraManipulator::getSideVector(const osg::Matrixd &) const");
		}
		osg::Vec3d stack_lret = self->getSideVector(cf);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osgGA::CameraManipulator::getFrontVector(const osg::Matrixd & cf) const
	static int _bind_getFrontVector(lua_State *L) {
		if (!_lg_typecheck_getFrontVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgGA::CameraManipulator::getFrontVector(const osg::Matrixd & cf) const function, expected prototype:\nosg::Vec3d osgGA::CameraManipulator::getFrontVector(const osg::Matrixd & cf) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* cf_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !cf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cf in osgGA::CameraManipulator::getFrontVector function");
		}
		const osg::Matrixd & cf=*cf_ptr;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3d osgGA::CameraManipulator::getFrontVector(const osg::Matrixd &) const");
		}
		osg::Vec3d stack_lret = self->getFrontVector(cf);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osgGA::CameraManipulator::getUpVector(const osg::Matrixd & cf) const
	static int _bind_getUpVector(lua_State *L) {
		if (!_lg_typecheck_getUpVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgGA::CameraManipulator::getUpVector(const osg::Matrixd & cf) const function, expected prototype:\nosg::Vec3d osgGA::CameraManipulator::getUpVector(const osg::Matrixd & cf) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* cf_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !cf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cf in osgGA::CameraManipulator::getUpVector function");
		}
		const osg::Matrixd & cf=*cf_ptr;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3d osgGA::CameraManipulator::getUpVector(const osg::Matrixd &) const");
		}
		osg::Vec3d stack_lret = self->getUpVector(cf);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// void osgGA::CameraManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::CameraManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::CameraManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::setByMatrix(const osg::Matrixd &)");
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::CameraManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::CameraManipulator::setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::CameraManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::setByInverseMatrix(const osg::Matrixd &)");
		}
		self->setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::CameraManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::CameraManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::CameraManipulator::getMatrix() const\nClass arguments details:\n");
		}


		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::CameraManipulator::getMatrix() const");
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::CameraManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::CameraManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::CameraManipulator::getInverseMatrix() const\nClass arguments details:\n");
		}


		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::CameraManipulator::getInverseMatrix() const");
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::CameraManipulator::getFusionDistanceMode() const
	static int _bind_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::CameraManipulator::getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::CameraManipulator::getFusionDistanceMode() const\nClass arguments details:\n");
		}


		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::CameraManipulator::getFusionDistanceMode() const");
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::CameraManipulator::getFusionDistanceValue() const
	static int _bind_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::CameraManipulator::getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::CameraManipulator::getFusionDistanceValue() const\nClass arguments details:\n");
		}


		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::CameraManipulator::getFusionDistanceValue() const");
		}
		float lret = self->getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::CameraManipulator::setIntersectTraversalMask(unsigned int mask)
	static int _bind_setIntersectTraversalMask(lua_State *L) {
		if (!_lg_typecheck_setIntersectTraversalMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::setIntersectTraversalMask(unsigned int mask) function, expected prototype:\nvoid osgGA::CameraManipulator::setIntersectTraversalMask(unsigned int mask)\nClass arguments details:\n");
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::setIntersectTraversalMask(unsigned int)");
		}
		self->setIntersectTraversalMask(mask);

		return 0;
	}

	// unsigned int osgGA::CameraManipulator::getIntersectTraversalMask() const
	static int _bind_getIntersectTraversalMask(lua_State *L) {
		if (!_lg_typecheck_getIntersectTraversalMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgGA::CameraManipulator::getIntersectTraversalMask() const function, expected prototype:\nunsigned int osgGA::CameraManipulator::getIntersectTraversalMask() const\nClass arguments details:\n");
		}


		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgGA::CameraManipulator::getIntersectTraversalMask() const");
		}
		unsigned int lret = self->getIntersectTraversalMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::CameraManipulator::setNode(osg::Node * )
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::setNode(osg::Node * ) function, expected prototype:\nvoid osgGA::CameraManipulator::setNode(osg::Node * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::setNode(osg::Node *)");
		}
		self->setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::CameraManipulator::getNode() const
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::CameraManipulator::getNode() const function, expected prototype:\nconst osg::Node * osgGA::CameraManipulator::getNode() const\nClass arguments details:\n");
		}


		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::CameraManipulator::getNode() const");
		}
		const osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::CameraManipulator::getNode()
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::CameraManipulator::getNode() function, expected prototype:\nosg::Node * osgGA::CameraManipulator::getNode()\nClass arguments details:\n");
		}


		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::CameraManipulator::getNode()");
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::CameraManipulator::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode()\n  getNode()\n");
		return 0;
	}

	// void osgGA::CameraManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	static int _bind_setHomePosition(lua_State *L) {
		if (!_lg_typecheck_setHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) function, expected prototype:\nvoid osgGA::CameraManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::CameraManipulator::setHomePosition function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::CameraManipulator::setHomePosition function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::CameraManipulator::setHomePosition function");
		}
		const osg::Vec3d & up=*up_ptr;
		bool autoComputeHomePosition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::setHomePosition(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, bool)");
		}
		self->setHomePosition(eye, center, up, autoComputeHomePosition);

		return 0;
	}

	// void osgGA::CameraManipulator::getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_getHomePosition(lua_State *L) {
		if (!_lg_typecheck_getHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::CameraManipulator::getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::CameraManipulator::getHomePosition function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::CameraManipulator::getHomePosition function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::CameraManipulator::getHomePosition function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::getHomePosition(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const");
		}
		self->getHomePosition(eye, center, up);

		return 0;
	}

	// void osgGA::CameraManipulator::setAutoComputeHomePosition(bool flag)
	static int _bind_setAutoComputeHomePosition(lua_State *L) {
		if (!_lg_typecheck_setAutoComputeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::setAutoComputeHomePosition(bool flag) function, expected prototype:\nvoid osgGA::CameraManipulator::setAutoComputeHomePosition(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::setAutoComputeHomePosition(bool)");
		}
		self->setAutoComputeHomePosition(flag);

		return 0;
	}

	// bool osgGA::CameraManipulator::getAutoComputeHomePosition() const
	static int _bind_getAutoComputeHomePosition(lua_State *L) {
		if (!_lg_typecheck_getAutoComputeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::CameraManipulator::getAutoComputeHomePosition() const function, expected prototype:\nbool osgGA::CameraManipulator::getAutoComputeHomePosition() const\nClass arguments details:\n");
		}


		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::CameraManipulator::getAutoComputeHomePosition() const");
		}
		bool lret = self->getAutoComputeHomePosition();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::CameraManipulator::computeHomePosition(const osg::Camera * camera = ((void *) 0), bool useBoundingBox = false)
	static int _bind_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_computeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::computeHomePosition(const osg::Camera * camera = ((void *) 0), bool useBoundingBox = false) function, expected prototype:\nvoid osgGA::CameraManipulator::computeHomePosition(const osg::Camera * camera = ((void *) 0), bool useBoundingBox = false)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Camera* camera=luatop>1 ? dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2)) : (const osg::Camera*)((void *) 0);
		bool useBoundingBox=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::computeHomePosition(const osg::Camera *, bool)");
		}
		self->computeHomePosition(camera, useBoundingBox);

		return 0;
	}

	// void osgGA::CameraManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_home_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::CameraManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::CameraManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::CameraManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::CameraManipulator::home(double )
	static int _bind_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_home_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::home(double ) function, expected prototype:\nvoid osgGA::CameraManipulator::home(double )\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::home(double)");
		}
		self->home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::CameraManipulator::home
	static int _bind_home(lua_State *L) {
		if (_lg_typecheck_home_overload_1(L)) return _bind_home_overload_1(L);
		if (_lg_typecheck_home_overload_2(L)) return _bind_home_overload_2(L);

		luaL_error(L, "error in function home, cannot match any of the overloads for function home:\n  home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  home(double)\n");
		return 0;
	}

	// void osgGA::CameraManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::CameraManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::CameraManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::CameraManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::CameraManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::CameraManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::CameraManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::CameraManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::CameraManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::CameraManipulator* self=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::CameraManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgGA::CameraManipulator* LunaTraits< osgGA::CameraManipulator >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgGA::CameraManipulator::setByMatrix(const osg::Matrixd & matrix)
	// void osgGA::CameraManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	// osg::Matrixd osgGA::CameraManipulator::getMatrix() const
	// osg::Matrixd osgGA::CameraManipulator::getInverseMatrix() const

	// Abstract operators:
}

void LunaTraits< osgGA::CameraManipulator >::_bind_dtor(osgGA::CameraManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::CameraManipulator >::className[] = "CameraManipulator";
const char LunaTraits< osgGA::CameraManipulator >::fullName[] = "osgGA::CameraManipulator";
const char LunaTraits< osgGA::CameraManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::CameraManipulator >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgGA::CameraManipulator >::hash = 58720515;
const int LunaTraits< osgGA::CameraManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::CameraManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_CameraManipulator::_bind_className},
	{"setCoordinateFrameCallback", &luna_wrapper_osgGA_CameraManipulator::_bind_setCoordinateFrameCallback},
	{"getCoordinateFrameCallback", &luna_wrapper_osgGA_CameraManipulator::_bind_getCoordinateFrameCallback},
	{"getCoordinateFrame", &luna_wrapper_osgGA_CameraManipulator::_bind_getCoordinateFrame},
	{"getSideVector", &luna_wrapper_osgGA_CameraManipulator::_bind_getSideVector},
	{"getFrontVector", &luna_wrapper_osgGA_CameraManipulator::_bind_getFrontVector},
	{"getUpVector", &luna_wrapper_osgGA_CameraManipulator::_bind_getUpVector},
	{"setByMatrix", &luna_wrapper_osgGA_CameraManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_CameraManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_CameraManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_CameraManipulator::_bind_getInverseMatrix},
	{"getFusionDistanceMode", &luna_wrapper_osgGA_CameraManipulator::_bind_getFusionDistanceMode},
	{"getFusionDistanceValue", &luna_wrapper_osgGA_CameraManipulator::_bind_getFusionDistanceValue},
	{"setIntersectTraversalMask", &luna_wrapper_osgGA_CameraManipulator::_bind_setIntersectTraversalMask},
	{"getIntersectTraversalMask", &luna_wrapper_osgGA_CameraManipulator::_bind_getIntersectTraversalMask},
	{"setNode", &luna_wrapper_osgGA_CameraManipulator::_bind_setNode},
	{"getNode", &luna_wrapper_osgGA_CameraManipulator::_bind_getNode},
	{"setHomePosition", &luna_wrapper_osgGA_CameraManipulator::_bind_setHomePosition},
	{"getHomePosition", &luna_wrapper_osgGA_CameraManipulator::_bind_getHomePosition},
	{"setAutoComputeHomePosition", &luna_wrapper_osgGA_CameraManipulator::_bind_setAutoComputeHomePosition},
	{"getAutoComputeHomePosition", &luna_wrapper_osgGA_CameraManipulator::_bind_getAutoComputeHomePosition},
	{"computeHomePosition", &luna_wrapper_osgGA_CameraManipulator::_bind_computeHomePosition},
	{"home", &luna_wrapper_osgGA_CameraManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_CameraManipulator::_bind_init},
	{"handle", &luna_wrapper_osgGA_CameraManipulator::_bind_handle},
	{"__eq", &luna_wrapper_osgGA_CameraManipulator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::CameraManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_CameraManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::CameraManipulator >::enumValues[] = {
	{0,0}
};


