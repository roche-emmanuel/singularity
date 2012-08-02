#include <plug_common.h>

class luna_wrapper_osg_NodeCallback {
public:
	typedef Luna< osg::NodeCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::NodeCallback* ptr= dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::NodeCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNestedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNestedCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNestedCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addNestedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeNestedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::NodeCallback::NodeCallback()
	static osg::NodeCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeCallback::NodeCallback() function, expected prototype:\nosg::NodeCallback::NodeCallback()\nClass arguments details:\n");
		}


		return new osg::NodeCallback();
	}

	// osg::NodeCallback::NodeCallback(const osg::NodeCallback & nc, const osg::CopyOp & )
	static osg::NodeCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeCallback::NodeCallback(const osg::NodeCallback & nc, const osg::CopyOp & ) function, expected prototype:\nosg::NodeCallback::NodeCallback(const osg::NodeCallback & nc, const osg::CopyOp & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osg::NodeCallback* nc_ptr=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if( !nc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nc in osg::NodeCallback::NodeCallback function");
		}
		const osg::NodeCallback & nc=*nc_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::NodeCallback::NodeCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::NodeCallback(nc, _arg2);
	}

	// Overload binder for osg::NodeCallback::NodeCallback
	static osg::NodeCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function NodeCallback, cannot match any of the overloads for function NodeCallback:\n  NodeCallback()\n  NodeCallback(const osg::NodeCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::NodeCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::NodeCallback::cloneType() const function, expected prototype:\nosg::Object * osg::NodeCallback::cloneType() const\nClass arguments details:\n");
		}


		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::NodeCallback::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::NodeCallback::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::NodeCallback::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::NodeCallback::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::NodeCallback::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::NodeCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::NodeCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::NodeCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::NodeCallback::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::NodeCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::NodeCallback::libraryName() const function, expected prototype:\nconst char * osg::NodeCallback::libraryName() const\nClass arguments details:\n");
		}


		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::NodeCallback::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::NodeCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::NodeCallback::className() const function, expected prototype:\nconst char * osg::NodeCallback::className() const\nClass arguments details:\n");
		}


		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::NodeCallback::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::NodeCallback::traverse(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::traverse(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::NodeCallback::traverse(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::traverse(osg::Node *, osg::NodeVisitor *)");
		}
		self->traverse(node, nv);

		return 0;
	}

	// void osg::NodeCallback::setNestedCallback(osg::NodeCallback * nc)
	static int _bind_setNestedCallback(lua_State *L) {
		if (!_lg_typecheck_setNestedCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::setNestedCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::NodeCallback::setNestedCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeCallback* nc=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,2));

		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::setNestedCallback(osg::NodeCallback *)");
		}
		self->setNestedCallback(nc);

		return 0;
	}

	// osg::NodeCallback * osg::NodeCallback::getNestedCallback()
	static int _bind_getNestedCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNestedCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeCallback * osg::NodeCallback::getNestedCallback() function, expected prototype:\nosg::NodeCallback * osg::NodeCallback::getNestedCallback()\nClass arguments details:\n");
		}


		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodeCallback * osg::NodeCallback::getNestedCallback()");
		}
		osg::NodeCallback * lret = self->getNestedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::NodeCallback * osg::NodeCallback::getNestedCallback() const
	static int _bind_getNestedCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNestedCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::NodeCallback * osg::NodeCallback::getNestedCallback() const function, expected prototype:\nconst osg::NodeCallback * osg::NodeCallback::getNestedCallback() const\nClass arguments details:\n");
		}


		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::NodeCallback * osg::NodeCallback::getNestedCallback() const");
		}
		const osg::NodeCallback * lret = self->getNestedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeCallback::getNestedCallback
	static int _bind_getNestedCallback(lua_State *L) {
		if (_lg_typecheck_getNestedCallback_overload_1(L)) return _bind_getNestedCallback_overload_1(L);
		if (_lg_typecheck_getNestedCallback_overload_2(L)) return _bind_getNestedCallback_overload_2(L);

		luaL_error(L, "error in function getNestedCallback, cannot match any of the overloads for function getNestedCallback:\n  getNestedCallback()\n  getNestedCallback()\n");
		return 0;
	}

	// void osg::NodeCallback::addNestedCallback(osg::NodeCallback * nc)
	static int _bind_addNestedCallback(lua_State *L) {
		if (!_lg_typecheck_addNestedCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::addNestedCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::NodeCallback::addNestedCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeCallback* nc=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,2));

		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::addNestedCallback(osg::NodeCallback *)");
		}
		self->addNestedCallback(nc);

		return 0;
	}

	// void osg::NodeCallback::removeNestedCallback(osg::NodeCallback * nc)
	static int _bind_removeNestedCallback(lua_State *L) {
		if (!_lg_typecheck_removeNestedCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::removeNestedCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::NodeCallback::removeNestedCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeCallback* nc=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,2));

		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::removeNestedCallback(osg::NodeCallback *)");
		}
		self->removeNestedCallback(nc);

		return 0;
	}


	// Operator binds:
	// void osg::NodeCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::operator()(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::NodeCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::NodeCallback* self=dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::operator()(osg::Node *, osg::NodeVisitor *)");
		}
		self->operator()(node, nv);

		return 0;
	}


};

osg::NodeCallback* LunaTraits< osg::NodeCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_NodeCallback::_bind_ctor(L);
}

void LunaTraits< osg::NodeCallback >::_bind_dtor(osg::NodeCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::NodeCallback >::className[] = "NodeCallback";
const char LunaTraits< osg::NodeCallback >::fullName[] = "osg::NodeCallback";
const char LunaTraits< osg::NodeCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::NodeCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::NodeCallback >::hash = 82979481;
const int LunaTraits< osg::NodeCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::NodeCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_NodeCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_NodeCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_NodeCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_NodeCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_NodeCallback::_bind_className},
	{"traverse", &luna_wrapper_osg_NodeCallback::_bind_traverse},
	{"setNestedCallback", &luna_wrapper_osg_NodeCallback::_bind_setNestedCallback},
	{"getNestedCallback", &luna_wrapper_osg_NodeCallback::_bind_getNestedCallback},
	{"addNestedCallback", &luna_wrapper_osg_NodeCallback::_bind_addNestedCallback},
	{"removeNestedCallback", &luna_wrapper_osg_NodeCallback::_bind_removeNestedCallback},
	{"op_call", &luna_wrapper_osg_NodeCallback::_bind_op_call},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodeCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_NodeCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodeCallback >::enumValues[] = {
	{0,0}
};


