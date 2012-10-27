#include <plug_common.h>

class luna_wrapper_osg_Node_ComputeBoundingSphereCallback {
public:
	typedef Luna< osg::Node::ComputeBoundingSphereCallback > luna_t;

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
		osg::Node::ComputeBoundingSphereCallback* ptr= dynamic_cast< osg::Node::ComputeBoundingSphereCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Node::ComputeBoundingSphereCallback >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::Node::ComputeBoundingSphereCallback* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Node::ComputeBoundingSphereCallback::ComputeBoundingSphereCallback()
	static osg::Node::ComputeBoundingSphereCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node::ComputeBoundingSphereCallback::ComputeBoundingSphereCallback() function, expected prototype:\nosg::Node::ComputeBoundingSphereCallback::ComputeBoundingSphereCallback()\nClass arguments details:\n");
		}


		return new osg::Node::ComputeBoundingSphereCallback();
	}

	// osg::Node::ComputeBoundingSphereCallback::ComputeBoundingSphereCallback(const osg::Node::ComputeBoundingSphereCallback & , const osg::CopyOp & )
	static osg::Node::ComputeBoundingSphereCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node::ComputeBoundingSphereCallback::ComputeBoundingSphereCallback(const osg::Node::ComputeBoundingSphereCallback & , const osg::CopyOp & ) function, expected prototype:\nosg::Node::ComputeBoundingSphereCallback::ComputeBoundingSphereCallback(const osg::Node::ComputeBoundingSphereCallback & , const osg::CopyOp & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osg::Node::ComputeBoundingSphereCallback* _arg1_ptr=dynamic_cast< osg::Node::ComputeBoundingSphereCallback* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Node::ComputeBoundingSphereCallback::ComputeBoundingSphereCallback function");
		}
		const osg::Node::ComputeBoundingSphereCallback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Node::ComputeBoundingSphereCallback::ComputeBoundingSphereCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::Node::ComputeBoundingSphereCallback(_arg1, _arg2);
	}

	// Overload binder for osg::Node::ComputeBoundingSphereCallback::ComputeBoundingSphereCallback
	static osg::Node::ComputeBoundingSphereCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ComputeBoundingSphereCallback, cannot match any of the overloads for function ComputeBoundingSphereCallback:\n  ComputeBoundingSphereCallback()\n  ComputeBoundingSphereCallback(const osg::Node::ComputeBoundingSphereCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Node::ComputeBoundingSphereCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Node::ComputeBoundingSphereCallback::cloneType() const function, expected prototype:\nosg::Object * osg::Node::ComputeBoundingSphereCallback::cloneType() const\nClass arguments details:\n");
		}


		osg::Node::ComputeBoundingSphereCallback* self=dynamic_cast< osg::Node::ComputeBoundingSphereCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Node::ComputeBoundingSphereCallback::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Node::ComputeBoundingSphereCallback::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Node::ComputeBoundingSphereCallback::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Node::ComputeBoundingSphereCallback::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Node::ComputeBoundingSphereCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Node::ComputeBoundingSphereCallback* self=dynamic_cast< osg::Node::ComputeBoundingSphereCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Node::ComputeBoundingSphereCallback::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Node::ComputeBoundingSphereCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Node::ComputeBoundingSphereCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Node::ComputeBoundingSphereCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Node::ComputeBoundingSphereCallback* self=dynamic_cast< osg::Node::ComputeBoundingSphereCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Node::ComputeBoundingSphereCallback::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Node::ComputeBoundingSphereCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Node::ComputeBoundingSphereCallback::libraryName() const function, expected prototype:\nconst char * osg::Node::ComputeBoundingSphereCallback::libraryName() const\nClass arguments details:\n");
		}


		osg::Node::ComputeBoundingSphereCallback* self=dynamic_cast< osg::Node::ComputeBoundingSphereCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Node::ComputeBoundingSphereCallback::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Node::ComputeBoundingSphereCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Node::ComputeBoundingSphereCallback::className() const function, expected prototype:\nconst char * osg::Node::ComputeBoundingSphereCallback::className() const\nClass arguments details:\n");
		}


		osg::Node::ComputeBoundingSphereCallback* self=dynamic_cast< osg::Node::ComputeBoundingSphereCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Node::ComputeBoundingSphereCallback::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::BoundingSphered osg::Node::ComputeBoundingSphereCallback::computeBound(const osg::Node & ) const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Node::ComputeBoundingSphereCallback::computeBound(const osg::Node & ) const function, expected prototype:\nosg::BoundingSphered osg::Node::ComputeBoundingSphereCallback::computeBound(const osg::Node & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* _arg1_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Node::ComputeBoundingSphereCallback::computeBound function");
		}
		const osg::Node & _arg1=*_arg1_ptr;

		osg::Node::ComputeBoundingSphereCallback* self=dynamic_cast< osg::Node::ComputeBoundingSphereCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Node::ComputeBoundingSphereCallback::computeBound(const osg::Node &) const");
		}
		osg::BoundingSphered stack_lret = self->computeBound(_arg1);
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::Node::ComputeBoundingSphereCallback* LunaTraits< osg::Node::ComputeBoundingSphereCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Node_ComputeBoundingSphereCallback::_bind_ctor(L);
}

void LunaTraits< osg::Node::ComputeBoundingSphereCallback >::_bind_dtor(osg::Node::ComputeBoundingSphereCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Node::ComputeBoundingSphereCallback >::className[] = "ComputeBoundingSphereCallback";
const char LunaTraits< osg::Node::ComputeBoundingSphereCallback >::fullName[] = "osg::Node::ComputeBoundingSphereCallback";
const char LunaTraits< osg::Node::ComputeBoundingSphereCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Node::ComputeBoundingSphereCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Node::ComputeBoundingSphereCallback >::hash = 64774377;
const int LunaTraits< osg::Node::ComputeBoundingSphereCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Node::ComputeBoundingSphereCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Node_ComputeBoundingSphereCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Node_ComputeBoundingSphereCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Node_ComputeBoundingSphereCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Node_ComputeBoundingSphereCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_Node_ComputeBoundingSphereCallback::_bind_className},
	{"computeBound", &luna_wrapper_osg_Node_ComputeBoundingSphereCallback::_bind_computeBound},
	{"__eq", &luna_wrapper_osg_Node_ComputeBoundingSphereCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Node::ComputeBoundingSphereCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Node_ComputeBoundingSphereCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Node::ComputeBoundingSphereCallback >::enumValues[] = {
	{0,0}
};


