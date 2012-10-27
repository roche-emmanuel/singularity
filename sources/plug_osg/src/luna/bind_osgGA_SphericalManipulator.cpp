#include <plug_common.h>

class luna_wrapper_osgGA_SphericalManipulator {
public:
	typedef Luna< osgGA::SphericalManipulator > luna_t;

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
		osgGA::SphericalManipulator* ptr= dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::SphericalManipulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_home_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (!dynamic_cast< osgGA::GUIActionAdapter* >(Luna< osgGA::GUIActionAdapter >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_zoomOn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54337300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeViewPosition(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54337300) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHomeDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHeading(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setElevation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElevtion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinimumZoomScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinimumZoomScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScroolWheelZoomDelta(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScroolWheelZoomDelta(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotationMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotationMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAllowThrow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAllowThrow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::SphericalManipulator::SphericalManipulator()
	static osgGA::SphericalManipulator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::SphericalManipulator::SphericalManipulator() function, expected prototype:\nosgGA::SphericalManipulator::SphericalManipulator()\nClass arguments details:\n");
		}


		return new osgGA::SphericalManipulator();
	}


	// Function binds:
	// const char * osgGA::SphericalManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::SphericalManipulator::className() const function, expected prototype:\nconst char * osgGA::SphericalManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::SphericalManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::SphericalManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::SphericalManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setByMatrix(const osg::Matrixd &)");
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::SphericalManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::SphericalManipulator::setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::SphericalManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setByInverseMatrix(const osg::Matrixd &)");
		}
		self->setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::SphericalManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::SphericalManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::SphericalManipulator::getMatrix() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::SphericalManipulator::getMatrix() const");
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::SphericalManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::SphericalManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::SphericalManipulator::getInverseMatrix() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::SphericalManipulator::getInverseMatrix() const");
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::getFusionDistanceMode() const
	static int _bind_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::getFusionDistanceMode() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::getFusionDistanceMode() const");
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::SphericalManipulator::getFusionDistanceValue() const
	static int _bind_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::SphericalManipulator::getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::SphericalManipulator::getFusionDistanceValue() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::SphericalManipulator::getFusionDistanceValue() const");
		}
		float lret = self->getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setNode(osg::Node * )
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setNode(osg::Node * ) function, expected prototype:\nvoid osgGA::SphericalManipulator::setNode(osg::Node * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setNode(osg::Node *)");
		}
		self->setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::SphericalManipulator::getNode() const
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::SphericalManipulator::getNode() const function, expected prototype:\nconst osg::Node * osgGA::SphericalManipulator::getNode() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::SphericalManipulator::getNode() const");
		}
		const osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::SphericalManipulator::getNode()
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::SphericalManipulator::getNode() function, expected prototype:\nosg::Node * osgGA::SphericalManipulator::getNode()\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::SphericalManipulator::getNode()");
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::SphericalManipulator::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode()\n  getNode()\n");
		return 0;
	}

	// void osgGA::SphericalManipulator::home(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_home_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::home(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nvoid osgGA::SphericalManipulator::home(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::SphericalManipulator::home function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::SphericalManipulator::home function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->home(ea, us);

		return 0;
	}

	// void osgGA::SphericalManipulator::home(double )
	static int _bind_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_home_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::home(double ) function, expected prototype:\nvoid osgGA::SphericalManipulator::home(double )\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::home(double)");
		}
		self->home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::SphericalManipulator::home
	static int _bind_home(lua_State *L) {
		if (_lg_typecheck_home_overload_1(L)) return _bind_home_overload_1(L);
		if (_lg_typecheck_home_overload_2(L)) return _bind_home_overload_2(L);

		luaL_error(L, "error in function home, cannot match any of the overloads for function home:\n  home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  home(double)\n");
		return 0;
	}

	// void osgGA::SphericalManipulator::init(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::init(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nvoid osgGA::SphericalManipulator::init(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::SphericalManipulator::init function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::SphericalManipulator::init function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->init(ea, us);

		return 0;
	}

	// void osgGA::SphericalManipulator::zoomOn(const osg::BoundingSphered & bound)
	static int _bind_zoomOn(lua_State *L) {
		if (!_lg_typecheck_zoomOn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::zoomOn(const osg::BoundingSphered & bound) function, expected prototype:\nvoid osgGA::SphericalManipulator::zoomOn(const osg::BoundingSphered & bound)\nClass arguments details:\narg 1 ID = 54337300\n");
		}

		const osg::BoundingSphered* bound_ptr=(Luna< osg::BoundingSphered >::check(L,2));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in osgGA::SphericalManipulator::zoomOn function");
		}
		const osg::BoundingSphered & bound=*bound_ptr;

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::zoomOn(const osg::BoundingSphered &)");
		}
		self->zoomOn(bound);

		return 0;
	}

	// bool osgGA::SphericalManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::SphericalManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::SphericalManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::SphericalManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::SphericalManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::SphericalManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::SphericalManipulator::computeHomePosition()
	static int _bind_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_computeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::computeHomePosition() function, expected prototype:\nvoid osgGA::SphericalManipulator::computeHomePosition()\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::computeHomePosition()");
		}
		self->computeHomePosition();

		return 0;
	}

	// void osgGA::SphericalManipulator::computeViewPosition(const osg::BoundingSphered & bound, double & scale, double & distance, osg::Vec3d & center)
	static int _bind_computeViewPosition(lua_State *L) {
		if (!_lg_typecheck_computeViewPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::computeViewPosition(const osg::BoundingSphered & bound, double & scale, double & distance, osg::Vec3d & center) function, expected prototype:\nvoid osgGA::SphericalManipulator::computeViewPosition(const osg::BoundingSphered & bound, double & scale, double & distance, osg::Vec3d & center)\nClass arguments details:\narg 1 ID = 54337300\narg 4 ID = 92303202\n");
		}

		const osg::BoundingSphered* bound_ptr=(Luna< osg::BoundingSphered >::check(L,2));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in osgGA::SphericalManipulator::computeViewPosition function");
		}
		const osg::BoundingSphered & bound=*bound_ptr;
		double scale=(double)lua_tonumber(L,3);
		double distance=(double)lua_tonumber(L,4);
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,5));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::SphericalManipulator::computeViewPosition function");
		}
		osg::Vec3d & center=*center_ptr;

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::computeViewPosition(const osg::BoundingSphered &, double &, double &, osg::Vec3d &)");
		}
		self->computeViewPosition(bound, scale, distance, center);

		return 0;
	}

	// void osgGA::SphericalManipulator::setCenter(const osg::Vec3d & center)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setCenter(const osg::Vec3d & center) function, expected prototype:\nvoid osgGA::SphericalManipulator::setCenter(const osg::Vec3d & center)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::SphericalManipulator::setCenter function");
		}
		const osg::Vec3d & center=*center_ptr;

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setCenter(const osg::Vec3d &)");
		}
		self->setCenter(center);

		return 0;
	}

	// const osg::Vec3d & osgGA::SphericalManipulator::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osgGA::SphericalManipulator::getCenter() const function, expected prototype:\nconst osg::Vec3d & osgGA::SphericalManipulator::getCenter() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osgGA::SphericalManipulator::getCenter() const");
		}
		const osg::Vec3d* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::SphericalManipulator::setDistance(double distance)
	static int _bind_setDistance(lua_State *L) {
		if (!_lg_typecheck_setDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::SphericalManipulator::setDistance(double distance) function, expected prototype:\nbool osgGA::SphericalManipulator::setDistance(double distance)\nClass arguments details:\n");
		}

		double distance=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::SphericalManipulator::setDistance(double)");
		}
		bool lret = self->setDistance(distance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double osgGA::SphericalManipulator::getDistance() const
	static int _bind_getDistance(lua_State *L) {
		if (!_lg_typecheck_getDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getDistance() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getDistance() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getDistance() const");
		}
		double lret = self->getDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgGA::SphericalManipulator::getHomeDistance() const
	static int _bind_getHomeDistance(lua_State *L) {
		if (!_lg_typecheck_getHomeDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getHomeDistance() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getHomeDistance() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getHomeDistance() const");
		}
		double lret = self->getHomeDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setHeading(double azimuth)
	static int _bind_setHeading(lua_State *L) {
		if (!_lg_typecheck_setHeading(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setHeading(double azimuth) function, expected prototype:\nvoid osgGA::SphericalManipulator::setHeading(double azimuth)\nClass arguments details:\n");
		}

		double azimuth=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setHeading(double)");
		}
		self->setHeading(azimuth);

		return 0;
	}

	// double osgGA::SphericalManipulator::getHeading() const
	static int _bind_getHeading(lua_State *L) {
		if (!_lg_typecheck_getHeading(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getHeading() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getHeading() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getHeading() const");
		}
		double lret = self->getHeading();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setElevation(double elevation)
	static int _bind_setElevation(lua_State *L) {
		if (!_lg_typecheck_setElevation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setElevation(double elevation) function, expected prototype:\nvoid osgGA::SphericalManipulator::setElevation(double elevation)\nClass arguments details:\n");
		}

		double elevation=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setElevation(double)");
		}
		self->setElevation(elevation);

		return 0;
	}

	// double osgGA::SphericalManipulator::getElevtion() const
	static int _bind_getElevtion(lua_State *L) {
		if (!_lg_typecheck_getElevtion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getElevtion() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getElevtion() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getElevtion() const");
		}
		double lret = self->getElevtion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgGA::SphericalManipulator::getMinimumZoomScale() const
	static int _bind_getMinimumZoomScale(lua_State *L) {
		if (!_lg_typecheck_getMinimumZoomScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getMinimumZoomScale() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getMinimumZoomScale() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getMinimumZoomScale() const");
		}
		double lret = self->getMinimumZoomScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setMinimumZoomScale(double minimumZoomScale)
	static int _bind_setMinimumZoomScale(lua_State *L) {
		if (!_lg_typecheck_setMinimumZoomScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setMinimumZoomScale(double minimumZoomScale) function, expected prototype:\nvoid osgGA::SphericalManipulator::setMinimumZoomScale(double minimumZoomScale)\nClass arguments details:\n");
		}

		double minimumZoomScale=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setMinimumZoomScale(double)");
		}
		self->setMinimumZoomScale(minimumZoomScale);

		return 0;
	}

	// void osgGA::SphericalManipulator::setScroolWheelZoomDelta(double zoomDelta)
	static int _bind_setScroolWheelZoomDelta(lua_State *L) {
		if (!_lg_typecheck_setScroolWheelZoomDelta(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setScroolWheelZoomDelta(double zoomDelta) function, expected prototype:\nvoid osgGA::SphericalManipulator::setScroolWheelZoomDelta(double zoomDelta)\nClass arguments details:\n");
		}

		double zoomDelta=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setScroolWheelZoomDelta(double)");
		}
		self->setScroolWheelZoomDelta(zoomDelta);

		return 0;
	}

	// double osgGA::SphericalManipulator::getScroolWheelZoomDelta() const
	static int _bind_getScroolWheelZoomDelta(lua_State *L) {
		if (!_lg_typecheck_getScroolWheelZoomDelta(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getScroolWheelZoomDelta() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getScroolWheelZoomDelta() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getScroolWheelZoomDelta() const");
		}
		double lret = self->getScroolWheelZoomDelta();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::SphericalManipulator::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::SphericalManipulator::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}

	// osgGA::SphericalManipulator::RotationMode osgGA::SphericalManipulator::getRotationMode() const
	static int _bind_getRotationMode(lua_State *L) {
		if (!_lg_typecheck_getRotationMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::SphericalManipulator::RotationMode osgGA::SphericalManipulator::getRotationMode() const function, expected prototype:\nosgGA::SphericalManipulator::RotationMode osgGA::SphericalManipulator::getRotationMode() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::SphericalManipulator::RotationMode osgGA::SphericalManipulator::getRotationMode() const");
		}
		osgGA::SphericalManipulator::RotationMode lret = self->getRotationMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setRotationMode(osgGA::SphericalManipulator::RotationMode mode)
	static int _bind_setRotationMode(lua_State *L) {
		if (!_lg_typecheck_setRotationMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setRotationMode(osgGA::SphericalManipulator::RotationMode mode) function, expected prototype:\nvoid osgGA::SphericalManipulator::setRotationMode(osgGA::SphericalManipulator::RotationMode mode)\nClass arguments details:\n");
		}

		osgGA::SphericalManipulator::RotationMode mode=(osgGA::SphericalManipulator::RotationMode)lua_tointeger(L,2);

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setRotationMode(osgGA::SphericalManipulator::RotationMode)");
		}
		self->setRotationMode(mode);

		return 0;
	}

	// bool osgGA::SphericalManipulator::getAllowThrow() const
	static int _bind_getAllowThrow(lua_State *L) {
		if (!_lg_typecheck_getAllowThrow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::SphericalManipulator::getAllowThrow() const function, expected prototype:\nbool osgGA::SphericalManipulator::getAllowThrow() const\nClass arguments details:\n");
		}


		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::SphericalManipulator::getAllowThrow() const");
		}
		bool lret = self->getAllowThrow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::SphericalManipulator::setAllowThrow(bool allowThrow)
	static int _bind_setAllowThrow(lua_State *L) {
		if (!_lg_typecheck_setAllowThrow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setAllowThrow(bool allowThrow) function, expected prototype:\nvoid osgGA::SphericalManipulator::setAllowThrow(bool allowThrow)\nClass arguments details:\n");
		}

		bool allowThrow=(bool)(lua_toboolean(L,2)==1);

		osgGA::SphericalManipulator* self=dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setAllowThrow(bool)");
		}
		self->setAllowThrow(allowThrow);

		return 0;
	}


	// Operator binds:

};

osgGA::SphericalManipulator* LunaTraits< osgGA::SphericalManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_SphericalManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::SphericalManipulator >::_bind_dtor(osgGA::SphericalManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::SphericalManipulator >::className[] = "SphericalManipulator";
const char LunaTraits< osgGA::SphericalManipulator >::fullName[] = "osgGA::SphericalManipulator";
const char LunaTraits< osgGA::SphericalManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::SphericalManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::SphericalManipulator >::hash = 3795876;
const int LunaTraits< osgGA::SphericalManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::SphericalManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_SphericalManipulator::_bind_className},
	{"setByMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_getInverseMatrix},
	{"getFusionDistanceMode", &luna_wrapper_osgGA_SphericalManipulator::_bind_getFusionDistanceMode},
	{"getFusionDistanceValue", &luna_wrapper_osgGA_SphericalManipulator::_bind_getFusionDistanceValue},
	{"setNode", &luna_wrapper_osgGA_SphericalManipulator::_bind_setNode},
	{"getNode", &luna_wrapper_osgGA_SphericalManipulator::_bind_getNode},
	{"home", &luna_wrapper_osgGA_SphericalManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_SphericalManipulator::_bind_init},
	{"zoomOn", &luna_wrapper_osgGA_SphericalManipulator::_bind_zoomOn},
	{"handle", &luna_wrapper_osgGA_SphericalManipulator::_bind_handle},
	{"computeHomePosition", &luna_wrapper_osgGA_SphericalManipulator::_bind_computeHomePosition},
	{"computeViewPosition", &luna_wrapper_osgGA_SphericalManipulator::_bind_computeViewPosition},
	{"setCenter", &luna_wrapper_osgGA_SphericalManipulator::_bind_setCenter},
	{"getCenter", &luna_wrapper_osgGA_SphericalManipulator::_bind_getCenter},
	{"setDistance", &luna_wrapper_osgGA_SphericalManipulator::_bind_setDistance},
	{"getDistance", &luna_wrapper_osgGA_SphericalManipulator::_bind_getDistance},
	{"getHomeDistance", &luna_wrapper_osgGA_SphericalManipulator::_bind_getHomeDistance},
	{"setHeading", &luna_wrapper_osgGA_SphericalManipulator::_bind_setHeading},
	{"getHeading", &luna_wrapper_osgGA_SphericalManipulator::_bind_getHeading},
	{"setElevation", &luna_wrapper_osgGA_SphericalManipulator::_bind_setElevation},
	{"getElevtion", &luna_wrapper_osgGA_SphericalManipulator::_bind_getElevtion},
	{"getMinimumZoomScale", &luna_wrapper_osgGA_SphericalManipulator::_bind_getMinimumZoomScale},
	{"setMinimumZoomScale", &luna_wrapper_osgGA_SphericalManipulator::_bind_setMinimumZoomScale},
	{"setScroolWheelZoomDelta", &luna_wrapper_osgGA_SphericalManipulator::_bind_setScroolWheelZoomDelta},
	{"getScroolWheelZoomDelta", &luna_wrapper_osgGA_SphericalManipulator::_bind_getScroolWheelZoomDelta},
	{"getUsage", &luna_wrapper_osgGA_SphericalManipulator::_bind_getUsage},
	{"getRotationMode", &luna_wrapper_osgGA_SphericalManipulator::_bind_getRotationMode},
	{"setRotationMode", &luna_wrapper_osgGA_SphericalManipulator::_bind_setRotationMode},
	{"getAllowThrow", &luna_wrapper_osgGA_SphericalManipulator::_bind_getAllowThrow},
	{"setAllowThrow", &luna_wrapper_osgGA_SphericalManipulator::_bind_setAllowThrow},
	{"__eq", &luna_wrapper_osgGA_SphericalManipulator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::SphericalManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_SphericalManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::SphericalManipulator >::enumValues[] = {
	{"ELEVATION_HEADING", osgGA::SphericalManipulator::ELEVATION_HEADING},
	{"HEADING", osgGA::SphericalManipulator::HEADING},
	{"ELEVATION", osgGA::SphericalManipulator::ELEVATION},
	{"MAP", osgGA::SphericalManipulator::MAP},
	{0,0}
};


