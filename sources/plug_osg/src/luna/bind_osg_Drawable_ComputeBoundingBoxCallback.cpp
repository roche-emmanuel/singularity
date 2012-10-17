#include <plug_common.h>

class luna_wrapper_osg_Drawable_ComputeBoundingBoxCallback {
public:
	typedef Luna< osg::Drawable::ComputeBoundingBoxCallback > luna_t;

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
		osg::Drawable::ComputeBoundingBoxCallback* ptr= dynamic_cast< osg::Drawable::ComputeBoundingBoxCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Drawable::ComputeBoundingBoxCallback >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Drawable::ComputeBoundingBoxCallback::ComputeBoundingBoxCallback()
	static osg::Drawable::ComputeBoundingBoxCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::ComputeBoundingBoxCallback::ComputeBoundingBoxCallback() function, expected prototype:\nosg::Drawable::ComputeBoundingBoxCallback::ComputeBoundingBoxCallback()\nClass arguments details:\n");
		}


		return new osg::Drawable::ComputeBoundingBoxCallback();
	}

	// osg::Drawable::ComputeBoundingBoxCallback::ComputeBoundingBoxCallback(const osg::Drawable::ComputeBoundingBoxCallback & , const osg::CopyOp & )
	static osg::Drawable::ComputeBoundingBoxCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::ComputeBoundingBoxCallback::ComputeBoundingBoxCallback(const osg::Drawable::ComputeBoundingBoxCallback & , const osg::CopyOp & ) function, expected prototype:\nosg::Drawable::ComputeBoundingBoxCallback::ComputeBoundingBoxCallback(const osg::Drawable::ComputeBoundingBoxCallback & , const osg::CopyOp & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osg::Drawable::ComputeBoundingBoxCallback* _arg1_ptr=dynamic_cast< osg::Drawable::ComputeBoundingBoxCallback* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::ComputeBoundingBoxCallback::ComputeBoundingBoxCallback function");
		}
		const osg::Drawable::ComputeBoundingBoxCallback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Drawable::ComputeBoundingBoxCallback::ComputeBoundingBoxCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::Drawable::ComputeBoundingBoxCallback(_arg1, _arg2);
	}

	// Overload binder for osg::Drawable::ComputeBoundingBoxCallback::ComputeBoundingBoxCallback
	static osg::Drawable::ComputeBoundingBoxCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ComputeBoundingBoxCallback, cannot match any of the overloads for function ComputeBoundingBoxCallback:\n  ComputeBoundingBoxCallback()\n  ComputeBoundingBoxCallback(const osg::Drawable::ComputeBoundingBoxCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Drawable::ComputeBoundingBoxCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::ComputeBoundingBoxCallback::cloneType() const function, expected prototype:\nosg::Object * osg::Drawable::ComputeBoundingBoxCallback::cloneType() const\nClass arguments details:\n");
		}


		osg::Drawable::ComputeBoundingBoxCallback* self=dynamic_cast< osg::Drawable::ComputeBoundingBoxCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::ComputeBoundingBoxCallback::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Drawable::ComputeBoundingBoxCallback::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::ComputeBoundingBoxCallback::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Drawable::ComputeBoundingBoxCallback::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::ComputeBoundingBoxCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Drawable::ComputeBoundingBoxCallback* self=dynamic_cast< osg::Drawable::ComputeBoundingBoxCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::ComputeBoundingBoxCallback::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Drawable::ComputeBoundingBoxCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::ComputeBoundingBoxCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::ComputeBoundingBoxCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Drawable::ComputeBoundingBoxCallback* self=dynamic_cast< osg::Drawable::ComputeBoundingBoxCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::ComputeBoundingBoxCallback::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::ComputeBoundingBoxCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::ComputeBoundingBoxCallback::libraryName() const function, expected prototype:\nconst char * osg::Drawable::ComputeBoundingBoxCallback::libraryName() const\nClass arguments details:\n");
		}


		osg::Drawable::ComputeBoundingBoxCallback* self=dynamic_cast< osg::Drawable::ComputeBoundingBoxCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::ComputeBoundingBoxCallback::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::ComputeBoundingBoxCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::ComputeBoundingBoxCallback::className() const function, expected prototype:\nconst char * osg::Drawable::ComputeBoundingBoxCallback::className() const\nClass arguments details:\n");
		}


		osg::Drawable::ComputeBoundingBoxCallback* self=dynamic_cast< osg::Drawable::ComputeBoundingBoxCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::ComputeBoundingBoxCallback::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::BoundingBoxf osg::Drawable::ComputeBoundingBoxCallback::computeBound(const osg::Drawable & ) const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxf osg::Drawable::ComputeBoundingBoxCallback::computeBound(const osg::Drawable & ) const function, expected prototype:\nosg::BoundingBoxf osg::Drawable::ComputeBoundingBoxCallback::computeBound(const osg::Drawable & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Drawable* _arg1_ptr=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::ComputeBoundingBoxCallback::computeBound function");
		}
		const osg::Drawable & _arg1=*_arg1_ptr;

		osg::Drawable::ComputeBoundingBoxCallback* self=dynamic_cast< osg::Drawable::ComputeBoundingBoxCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingBoxf osg::Drawable::ComputeBoundingBoxCallback::computeBound(const osg::Drawable &) const");
		}
		osg::BoundingBoxf stack_lret = self->computeBound(_arg1);
		osg::BoundingBoxf* lret = new osg::BoundingBoxf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxf >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::Drawable::ComputeBoundingBoxCallback* LunaTraits< osg::Drawable::ComputeBoundingBoxCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Drawable_ComputeBoundingBoxCallback::_bind_ctor(L);
}

void LunaTraits< osg::Drawable::ComputeBoundingBoxCallback >::_bind_dtor(osg::Drawable::ComputeBoundingBoxCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Drawable::ComputeBoundingBoxCallback >::className[] = "ComputeBoundingBoxCallback";
const char LunaTraits< osg::Drawable::ComputeBoundingBoxCallback >::fullName[] = "osg::Drawable::ComputeBoundingBoxCallback";
const char LunaTraits< osg::Drawable::ComputeBoundingBoxCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Drawable::ComputeBoundingBoxCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Drawable::ComputeBoundingBoxCallback >::hash = 4139082;
const int LunaTraits< osg::Drawable::ComputeBoundingBoxCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Drawable::ComputeBoundingBoxCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Drawable_ComputeBoundingBoxCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Drawable_ComputeBoundingBoxCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Drawable_ComputeBoundingBoxCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Drawable_ComputeBoundingBoxCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_Drawable_ComputeBoundingBoxCallback::_bind_className},
	{"computeBound", &luna_wrapper_osg_Drawable_ComputeBoundingBoxCallback::_bind_computeBound},
	{"__eq", &luna_wrapper_osg_Drawable_ComputeBoundingBoxCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Drawable::ComputeBoundingBoxCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Drawable_ComputeBoundingBoxCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Drawable::ComputeBoundingBoxCallback >::enumValues[] = {
	{0,0}
};


