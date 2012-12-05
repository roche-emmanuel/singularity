#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_UFOManipulator.h>

class luna_wrapper_osgGA_UFOManipulator {
public:
	typedef Luna< osgGA::UFOManipulator > luna_t;

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
		osgGA::UFOManipulator* ptr= dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::UFOManipulator >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getCurrentPositionAsLookAt(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setForwardSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getForwardSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSideSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSideSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotationSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotationSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::UFOManipulator::UFOManipulator()
	static osgGA::UFOManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::UFOManipulator::UFOManipulator() function, expected prototype:\nosgGA::UFOManipulator::UFOManipulator()\nClass arguments details:\n");
		}


		return new osgGA::UFOManipulator();
	}

	// osgGA::UFOManipulator::UFOManipulator(lua_Table * data)
	static osgGA::UFOManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::UFOManipulator::UFOManipulator(lua_Table * data) function, expected prototype:\nosgGA::UFOManipulator::UFOManipulator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgGA_UFOManipulator(L,NULL);
	}

	// Overload binder for osgGA::UFOManipulator::UFOManipulator
	static osgGA::UFOManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function UFOManipulator, cannot match any of the overloads for function UFOManipulator:\n  UFOManipulator()\n  UFOManipulator(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgGA::UFOManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::UFOManipulator::className() const function, expected prototype:\nconst char * osgGA::UFOManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::UFOManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::UFOManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::UFOManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setByMatrix(const osg::Matrixd &)");
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::UFOManipulator::setByInverseMatrix(const osg::Matrixd & invmat)
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setByInverseMatrix(const osg::Matrixd & invmat) function, expected prototype:\nvoid osgGA::UFOManipulator::setByInverseMatrix(const osg::Matrixd & invmat)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* invmat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !invmat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invmat in osgGA::UFOManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & invmat=*invmat_ptr;

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setByInverseMatrix(const osg::Matrixd &)");
		}
		self->setByInverseMatrix(invmat);

		return 0;
	}

	// osg::Matrixd osgGA::UFOManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::UFOManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::UFOManipulator::getMatrix() const\nClass arguments details:\n");
		}


		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::UFOManipulator::getMatrix() const");
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::UFOManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::UFOManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::UFOManipulator::getInverseMatrix() const\nClass arguments details:\n");
		}


		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::UFOManipulator::getInverseMatrix() const");
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::UFOManipulator::setNode(osg::Node * node)
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setNode(osg::Node * node) function, expected prototype:\nvoid osgGA::UFOManipulator::setNode(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setNode(osg::Node *)");
		}
		self->setNode(node);

		return 0;
	}

	// const osg::Node * osgGA::UFOManipulator::getNode() const
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::UFOManipulator::getNode() const function, expected prototype:\nconst osg::Node * osgGA::UFOManipulator::getNode() const\nClass arguments details:\n");
		}


		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::UFOManipulator::getNode() const");
		}
		const osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::UFOManipulator::getNode()
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::UFOManipulator::getNode() function, expected prototype:\nosg::Node * osgGA::UFOManipulator::getNode()\nClass arguments details:\n");
		}


		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::UFOManipulator::getNode()");
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::UFOManipulator::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode()\n  getNode()\n");
		return 0;
	}

	// void osgGA::UFOManipulator::computeHomePosition()
	static int _bind_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_computeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::computeHomePosition() function, expected prototype:\nvoid osgGA::UFOManipulator::computeHomePosition()\nClass arguments details:\n");
		}


		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::computeHomePosition()");
		}
		self->computeHomePosition();

		return 0;
	}

	// void osgGA::UFOManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_home_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::UFOManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::UFOManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::UFOManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::UFOManipulator::home(double arg1)
	static int _bind_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_home_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::home(double arg1) function, expected prototype:\nvoid osgGA::UFOManipulator::home(double arg1)\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::home(double)");
		}
		self->home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::UFOManipulator::home
	static int _bind_home(lua_State *L) {
		if (_lg_typecheck_home_overload_1(L)) return _bind_home_overload_1(L);
		if (_lg_typecheck_home_overload_2(L)) return _bind_home_overload_2(L);

		luaL_error(L, "error in function home, cannot match any of the overloads for function home:\n  home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  home(double)\n");
		return 0;
	}

	// void osgGA::UFOManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::UFOManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::UFOManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::UFOManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::UFOManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::UFOManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool osgGA::UFOManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::UFOManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgGA::UFOManipulator::handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::UFOManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::UFOManipulator::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::UFOManipulator::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::UFOManipulator::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgGA::UFOManipulator::getCurrentPositionAsLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up)
	static int _bind_getCurrentPositionAsLookAt(lua_State *L) {
		if (!_lg_typecheck_getCurrentPositionAsLookAt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::getCurrentPositionAsLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) function, expected prototype:\nvoid osgGA::UFOManipulator::getCurrentPositionAsLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::UFOManipulator::getCurrentPositionAsLookAt function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::UFOManipulator::getCurrentPositionAsLookAt function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::UFOManipulator::getCurrentPositionAsLookAt function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::getCurrentPositionAsLookAt(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &)");
		}
		self->getCurrentPositionAsLookAt(eye, center, up);

		return 0;
	}

	// void osgGA::UFOManipulator::setMinHeight(double in_min_height)
	static int _bind_setMinHeight(lua_State *L) {
		if (!_lg_typecheck_setMinHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setMinHeight(double in_min_height) function, expected prototype:\nvoid osgGA::UFOManipulator::setMinHeight(double in_min_height)\nClass arguments details:\n");
		}

		double in_min_height=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setMinHeight(double)");
		}
		self->setMinHeight(in_min_height);

		return 0;
	}

	// double osgGA::UFOManipulator::getMinHeight() const
	static int _bind_getMinHeight(lua_State *L) {
		if (!_lg_typecheck_getMinHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::UFOManipulator::getMinHeight() const function, expected prototype:\ndouble osgGA::UFOManipulator::getMinHeight() const\nClass arguments details:\n");
		}


		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::UFOManipulator::getMinHeight() const");
		}
		double lret = self->getMinHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::setMinDistance(double in_min_dist)
	static int _bind_setMinDistance(lua_State *L) {
		if (!_lg_typecheck_setMinDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setMinDistance(double in_min_dist) function, expected prototype:\nvoid osgGA::UFOManipulator::setMinDistance(double in_min_dist)\nClass arguments details:\n");
		}

		double in_min_dist=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setMinDistance(double)");
		}
		self->setMinDistance(in_min_dist);

		return 0;
	}

	// double osgGA::UFOManipulator::getMinDistance() const
	static int _bind_getMinDistance(lua_State *L) {
		if (!_lg_typecheck_getMinDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::UFOManipulator::getMinDistance() const function, expected prototype:\ndouble osgGA::UFOManipulator::getMinDistance() const\nClass arguments details:\n");
		}


		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::UFOManipulator::getMinDistance() const");
		}
		double lret = self->getMinDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::setForwardSpeed(double in_fs)
	static int _bind_setForwardSpeed(lua_State *L) {
		if (!_lg_typecheck_setForwardSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setForwardSpeed(double in_fs) function, expected prototype:\nvoid osgGA::UFOManipulator::setForwardSpeed(double in_fs)\nClass arguments details:\n");
		}

		double in_fs=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setForwardSpeed(double)");
		}
		self->setForwardSpeed(in_fs);

		return 0;
	}

	// double osgGA::UFOManipulator::getForwardSpeed() const
	static int _bind_getForwardSpeed(lua_State *L) {
		if (!_lg_typecheck_getForwardSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::UFOManipulator::getForwardSpeed() const function, expected prototype:\ndouble osgGA::UFOManipulator::getForwardSpeed() const\nClass arguments details:\n");
		}


		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::UFOManipulator::getForwardSpeed() const");
		}
		double lret = self->getForwardSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::setSideSpeed(double in_ss)
	static int _bind_setSideSpeed(lua_State *L) {
		if (!_lg_typecheck_setSideSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setSideSpeed(double in_ss) function, expected prototype:\nvoid osgGA::UFOManipulator::setSideSpeed(double in_ss)\nClass arguments details:\n");
		}

		double in_ss=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setSideSpeed(double)");
		}
		self->setSideSpeed(in_ss);

		return 0;
	}

	// double osgGA::UFOManipulator::getSideSpeed() const
	static int _bind_getSideSpeed(lua_State *L) {
		if (!_lg_typecheck_getSideSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::UFOManipulator::getSideSpeed() const function, expected prototype:\ndouble osgGA::UFOManipulator::getSideSpeed() const\nClass arguments details:\n");
		}


		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::UFOManipulator::getSideSpeed() const");
		}
		double lret = self->getSideSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::setRotationSpeed(double in_rot_speed)
	static int _bind_setRotationSpeed(lua_State *L) {
		if (!_lg_typecheck_setRotationSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setRotationSpeed(double in_rot_speed) function, expected prototype:\nvoid osgGA::UFOManipulator::setRotationSpeed(double in_rot_speed)\nClass arguments details:\n");
		}

		double in_rot_speed=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setRotationSpeed(double)");
		}
		self->setRotationSpeed(in_rot_speed);

		return 0;
	}

	// double osgGA::UFOManipulator::getRotationSpeed() const
	static int _bind_getRotationSpeed(lua_State *L) {
		if (!_lg_typecheck_getRotationSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::UFOManipulator::getRotationSpeed() const function, expected prototype:\ndouble osgGA::UFOManipulator::getRotationSpeed() const\nClass arguments details:\n");
		}


		osgGA::UFOManipulator* self=dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::UFOManipulator::getRotationSpeed() const");
		}
		double lret = self->getRotationSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgGA::UFOManipulator* LunaTraits< osgGA::UFOManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_UFOManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::UFOManipulator >::_bind_dtor(osgGA::UFOManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::UFOManipulator >::className[] = "UFOManipulator";
const char LunaTraits< osgGA::UFOManipulator >::fullName[] = "osgGA::UFOManipulator";
const char LunaTraits< osgGA::UFOManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::UFOManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::UFOManipulator >::hash = 93233893;
const int LunaTraits< osgGA::UFOManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::UFOManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_UFOManipulator::_bind_className},
	{"setByMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_getInverseMatrix},
	{"setNode", &luna_wrapper_osgGA_UFOManipulator::_bind_setNode},
	{"getNode", &luna_wrapper_osgGA_UFOManipulator::_bind_getNode},
	{"computeHomePosition", &luna_wrapper_osgGA_UFOManipulator::_bind_computeHomePosition},
	{"home", &luna_wrapper_osgGA_UFOManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_UFOManipulator::_bind_init},
	{"handle", &luna_wrapper_osgGA_UFOManipulator::_bind_handle},
	{"getUsage", &luna_wrapper_osgGA_UFOManipulator::_bind_getUsage},
	{"getCurrentPositionAsLookAt", &luna_wrapper_osgGA_UFOManipulator::_bind_getCurrentPositionAsLookAt},
	{"setMinHeight", &luna_wrapper_osgGA_UFOManipulator::_bind_setMinHeight},
	{"getMinHeight", &luna_wrapper_osgGA_UFOManipulator::_bind_getMinHeight},
	{"setMinDistance", &luna_wrapper_osgGA_UFOManipulator::_bind_setMinDistance},
	{"getMinDistance", &luna_wrapper_osgGA_UFOManipulator::_bind_getMinDistance},
	{"setForwardSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_setForwardSpeed},
	{"getForwardSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_getForwardSpeed},
	{"setSideSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_setSideSpeed},
	{"getSideSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_getSideSpeed},
	{"setRotationSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_setRotationSpeed},
	{"getRotationSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_getRotationSpeed},
	{"__eq", &luna_wrapper_osgGA_UFOManipulator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::UFOManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_UFOManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::UFOManipulator >::enumValues[] = {
	{0,0}
};


