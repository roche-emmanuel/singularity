#include <plug_common.h>

class luna_wrapper_osgGA_DriveManipulator {
public:
	typedef Luna< osgGA::DriveManipulator > luna_t;

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
		osgGA::DriveManipulator* ptr= dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::DriveManipulator >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_computeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_home(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
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

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setModelScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModelScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::DriveManipulator::DriveManipulator()
	static osgGA::DriveManipulator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::DriveManipulator::DriveManipulator() function, expected prototype:\nosgGA::DriveManipulator::DriveManipulator()\nClass arguments details:\n");
		}


		return new osgGA::DriveManipulator();
	}


	// Function binds:
	// const char * osgGA::DriveManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::DriveManipulator::className() const function, expected prototype:\nconst char * osgGA::DriveManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::DriveManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::DriveManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::DriveManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::DriveManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::setByMatrix(const osg::Matrixd &)");
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::DriveManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::DriveManipulator::setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::DriveManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::setByInverseMatrix(const osg::Matrixd &)");
		}
		self->setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::DriveManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::DriveManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::DriveManipulator::getMatrix() const\nClass arguments details:\n");
		}


		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::DriveManipulator::getMatrix() const");
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::DriveManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::DriveManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::DriveManipulator::getInverseMatrix() const\nClass arguments details:\n");
		}


		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::DriveManipulator::getInverseMatrix() const");
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::DriveManipulator::setNode(osg::Node * )
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::setNode(osg::Node * ) function, expected prototype:\nvoid osgGA::DriveManipulator::setNode(osg::Node * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::setNode(osg::Node *)");
		}
		self->setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::DriveManipulator::getNode() const
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::DriveManipulator::getNode() const function, expected prototype:\nconst osg::Node * osgGA::DriveManipulator::getNode() const\nClass arguments details:\n");
		}


		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::DriveManipulator::getNode() const");
		}
		const osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::DriveManipulator::getNode()
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::DriveManipulator::getNode() function, expected prototype:\nosg::Node * osgGA::DriveManipulator::getNode()\nClass arguments details:\n");
		}


		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::DriveManipulator::getNode()");
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::DriveManipulator::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode()\n  getNode()\n");
		return 0;
	}

	// void osgGA::DriveManipulator::computeHomePosition()
	static int _bind_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_computeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::computeHomePosition() function, expected prototype:\nvoid osgGA::DriveManipulator::computeHomePosition()\nClass arguments details:\n");
		}


		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::computeHomePosition()");
		}
		self->computeHomePosition();

		return 0;
	}

	// void osgGA::DriveManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_home(lua_State *L) {
		if (!_lg_typecheck_home(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::DriveManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::DriveManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::DriveManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::DriveManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::DriveManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::DriveManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::DriveManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::DriveManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::DriveManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::DriveManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::DriveManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::DriveManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::DriveManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::DriveManipulator::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::DriveManipulator::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::DriveManipulator::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgGA::DriveManipulator::setModelScale(double in_ms)
	static int _bind_setModelScale(lua_State *L) {
		if (!_lg_typecheck_setModelScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::setModelScale(double in_ms) function, expected prototype:\nvoid osgGA::DriveManipulator::setModelScale(double in_ms)\nClass arguments details:\n");
		}

		double in_ms=(double)lua_tonumber(L,2);

		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::setModelScale(double)");
		}
		self->setModelScale(in_ms);

		return 0;
	}

	// double osgGA::DriveManipulator::getModelScale() const
	static int _bind_getModelScale(lua_State *L) {
		if (!_lg_typecheck_getModelScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::DriveManipulator::getModelScale() const function, expected prototype:\ndouble osgGA::DriveManipulator::getModelScale() const\nClass arguments details:\n");
		}


		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::DriveManipulator::getModelScale() const");
		}
		double lret = self->getModelScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::DriveManipulator::setVelocity(double in_vel)
	static int _bind_setVelocity(lua_State *L) {
		if (!_lg_typecheck_setVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::setVelocity(double in_vel) function, expected prototype:\nvoid osgGA::DriveManipulator::setVelocity(double in_vel)\nClass arguments details:\n");
		}

		double in_vel=(double)lua_tonumber(L,2);

		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::setVelocity(double)");
		}
		self->setVelocity(in_vel);

		return 0;
	}

	// double osgGA::DriveManipulator::getVelocity() const
	static int _bind_getVelocity(lua_State *L) {
		if (!_lg_typecheck_getVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::DriveManipulator::getVelocity() const function, expected prototype:\ndouble osgGA::DriveManipulator::getVelocity() const\nClass arguments details:\n");
		}


		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::DriveManipulator::getVelocity() const");
		}
		double lret = self->getVelocity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::DriveManipulator::setHeight(double in_h)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::DriveManipulator::setHeight(double in_h) function, expected prototype:\nvoid osgGA::DriveManipulator::setHeight(double in_h)\nClass arguments details:\n");
		}

		double in_h=(double)lua_tonumber(L,2);

		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::DriveManipulator::setHeight(double)");
		}
		self->setHeight(in_h);

		return 0;
	}

	// double osgGA::DriveManipulator::getHeight() const
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::DriveManipulator::getHeight() const function, expected prototype:\ndouble osgGA::DriveManipulator::getHeight() const\nClass arguments details:\n");
		}


		osgGA::DriveManipulator* self=dynamic_cast< osgGA::DriveManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::DriveManipulator::getHeight() const");
		}
		double lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgGA::DriveManipulator* LunaTraits< osgGA::DriveManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_DriveManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::DriveManipulator >::_bind_dtor(osgGA::DriveManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::DriveManipulator >::className[] = "DriveManipulator";
const char LunaTraits< osgGA::DriveManipulator >::fullName[] = "osgGA::DriveManipulator";
const char LunaTraits< osgGA::DriveManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::DriveManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::DriveManipulator >::hash = 96382496;
const int LunaTraits< osgGA::DriveManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::DriveManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_DriveManipulator::_bind_className},
	{"setByMatrix", &luna_wrapper_osgGA_DriveManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_DriveManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_DriveManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_DriveManipulator::_bind_getInverseMatrix},
	{"setNode", &luna_wrapper_osgGA_DriveManipulator::_bind_setNode},
	{"getNode", &luna_wrapper_osgGA_DriveManipulator::_bind_getNode},
	{"computeHomePosition", &luna_wrapper_osgGA_DriveManipulator::_bind_computeHomePosition},
	{"home", &luna_wrapper_osgGA_DriveManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_DriveManipulator::_bind_init},
	{"handle", &luna_wrapper_osgGA_DriveManipulator::_bind_handle},
	{"getUsage", &luna_wrapper_osgGA_DriveManipulator::_bind_getUsage},
	{"setModelScale", &luna_wrapper_osgGA_DriveManipulator::_bind_setModelScale},
	{"getModelScale", &luna_wrapper_osgGA_DriveManipulator::_bind_getModelScale},
	{"setVelocity", &luna_wrapper_osgGA_DriveManipulator::_bind_setVelocity},
	{"getVelocity", &luna_wrapper_osgGA_DriveManipulator::_bind_getVelocity},
	{"setHeight", &luna_wrapper_osgGA_DriveManipulator::_bind_setHeight},
	{"getHeight", &luna_wrapper_osgGA_DriveManipulator::_bind_getHeight},
	{"__eq", &luna_wrapper_osgGA_DriveManipulator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::DriveManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_DriveManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::DriveManipulator >::enumValues[] = {
	{0,0}
};


