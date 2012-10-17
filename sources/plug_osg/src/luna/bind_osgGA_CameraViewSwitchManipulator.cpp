#include <plug_common.h>

class luna_wrapper_osgGA_CameraViewSwitchManipulator {
public:
	typedef Luna< osgGA::CameraViewSwitchManipulator > luna_t;

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
		osgGA::CameraViewSwitchManipulator* ptr= dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::CameraViewSwitchManipulator >::push(L,ptr,false);
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::CameraViewSwitchManipulator::CameraViewSwitchManipulator()
	static osgGA::CameraViewSwitchManipulator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::CameraViewSwitchManipulator::CameraViewSwitchManipulator() function, expected prototype:\nosgGA::CameraViewSwitchManipulator::CameraViewSwitchManipulator()\nClass arguments details:\n");
		}


		return new osgGA::CameraViewSwitchManipulator();
	}


	// Function binds:
	// const char * osgGA::CameraViewSwitchManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::CameraViewSwitchManipulator::className() const function, expected prototype:\nconst char * osgGA::CameraViewSwitchManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::CameraViewSwitchManipulator* self=dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::CameraViewSwitchManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::CameraViewSwitchManipulator::setByMatrix(const osg::Matrixd & )
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraViewSwitchManipulator::setByMatrix(const osg::Matrixd & ) function, expected prototype:\nvoid osgGA::CameraViewSwitchManipulator::setByMatrix(const osg::Matrixd & )\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* _arg1_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::CameraViewSwitchManipulator::setByMatrix function");
		}
		const osg::Matrixd & _arg1=*_arg1_ptr;

		osgGA::CameraViewSwitchManipulator* self=dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraViewSwitchManipulator::setByMatrix(const osg::Matrixd &)");
		}
		self->setByMatrix(_arg1);

		return 0;
	}

	// void osgGA::CameraViewSwitchManipulator::setByInverseMatrix(const osg::Matrixd & )
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraViewSwitchManipulator::setByInverseMatrix(const osg::Matrixd & ) function, expected prototype:\nvoid osgGA::CameraViewSwitchManipulator::setByInverseMatrix(const osg::Matrixd & )\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* _arg1_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::CameraViewSwitchManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & _arg1=*_arg1_ptr;

		osgGA::CameraViewSwitchManipulator* self=dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraViewSwitchManipulator::setByInverseMatrix(const osg::Matrixd &)");
		}
		self->setByInverseMatrix(_arg1);

		return 0;
	}

	// osg::Matrixd osgGA::CameraViewSwitchManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::CameraViewSwitchManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::CameraViewSwitchManipulator::getMatrix() const\nClass arguments details:\n");
		}


		osgGA::CameraViewSwitchManipulator* self=dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::CameraViewSwitchManipulator::getMatrix() const");
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::CameraViewSwitchManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::CameraViewSwitchManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::CameraViewSwitchManipulator::getInverseMatrix() const\nClass arguments details:\n");
		}


		osgGA::CameraViewSwitchManipulator* self=dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::CameraViewSwitchManipulator::getInverseMatrix() const");
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::CameraViewSwitchManipulator::setNode(osg::Node * )
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraViewSwitchManipulator::setNode(osg::Node * ) function, expected prototype:\nvoid osgGA::CameraViewSwitchManipulator::setNode(osg::Node * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgGA::CameraViewSwitchManipulator* self=dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraViewSwitchManipulator::setNode(osg::Node *)");
		}
		self->setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::CameraViewSwitchManipulator::getNode() const
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::CameraViewSwitchManipulator::getNode() const function, expected prototype:\nconst osg::Node * osgGA::CameraViewSwitchManipulator::getNode() const\nClass arguments details:\n");
		}


		osgGA::CameraViewSwitchManipulator* self=dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::CameraViewSwitchManipulator::getNode() const");
		}
		const osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::CameraViewSwitchManipulator::getNode()
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::CameraViewSwitchManipulator::getNode() function, expected prototype:\nosg::Node * osgGA::CameraViewSwitchManipulator::getNode()\nClass arguments details:\n");
		}


		osgGA::CameraViewSwitchManipulator* self=dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::CameraViewSwitchManipulator::getNode()");
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::CameraViewSwitchManipulator::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode()\n  getNode()\n");
		return 0;
	}

	// void osgGA::CameraViewSwitchManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraViewSwitchManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::CameraViewSwitchManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::CameraViewSwitchManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::CameraViewSwitchManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::CameraViewSwitchManipulator* self=dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraViewSwitchManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::CameraViewSwitchManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::CameraViewSwitchManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::CameraViewSwitchManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::CameraViewSwitchManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::CameraViewSwitchManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::CameraViewSwitchManipulator* self=dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::CameraViewSwitchManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::CameraViewSwitchManipulator::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::CameraViewSwitchManipulator::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::CameraViewSwitchManipulator::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::CameraViewSwitchManipulator::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::CameraViewSwitchManipulator* self=dynamic_cast< osgGA::CameraViewSwitchManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::CameraViewSwitchManipulator::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgGA::CameraViewSwitchManipulator* LunaTraits< osgGA::CameraViewSwitchManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::CameraViewSwitchManipulator >::_bind_dtor(osgGA::CameraViewSwitchManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::CameraViewSwitchManipulator >::className[] = "CameraViewSwitchManipulator";
const char LunaTraits< osgGA::CameraViewSwitchManipulator >::fullName[] = "osgGA::CameraViewSwitchManipulator";
const char LunaTraits< osgGA::CameraViewSwitchManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::CameraViewSwitchManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::CameraViewSwitchManipulator >::hash = 61530397;
const int LunaTraits< osgGA::CameraViewSwitchManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::CameraViewSwitchManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind_className},
	{"setByMatrix", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind_getInverseMatrix},
	{"setNode", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind_setNode},
	{"getNode", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind_getNode},
	{"init", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind_init},
	{"handle", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind_handle},
	{"getUsage", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind_getUsage},
	{"__eq", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::CameraViewSwitchManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_CameraViewSwitchManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::CameraViewSwitchManipulator >::enumValues[] = {
	{0,0}
};


