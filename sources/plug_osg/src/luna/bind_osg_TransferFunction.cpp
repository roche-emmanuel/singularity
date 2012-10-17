#include <plug_common.h>

class luna_wrapper_osg_TransferFunction {
public:
	typedef Luna< osg::TransferFunction > luna_t;

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
		osg::TransferFunction* ptr= dynamic_cast< osg::TransferFunction* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TransferFunction >::push(L,ptr,false);
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

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TransferFunction::TransferFunction()
	static osg::TransferFunction* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TransferFunction::TransferFunction() function, expected prototype:\nosg::TransferFunction::TransferFunction()\nClass arguments details:\n");
		}


		return new osg::TransferFunction();
	}

	// osg::TransferFunction::TransferFunction(const osg::TransferFunction & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TransferFunction* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TransferFunction::TransferFunction(const osg::TransferFunction & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TransferFunction::TransferFunction(const osg::TransferFunction & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TransferFunction* tf_ptr=dynamic_cast< osg::TransferFunction* >(Luna< osg::Referenced >::check(L,1));
		if( !tf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tf in osg::TransferFunction::TransferFunction function");
		}
		const osg::TransferFunction & tf=*tf_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TransferFunction::TransferFunction function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::TransferFunction(tf, copyop);
	}

	// Overload binder for osg::TransferFunction::TransferFunction
	static osg::TransferFunction* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TransferFunction, cannot match any of the overloads for function TransferFunction:\n  TransferFunction()\n  TransferFunction(const osg::TransferFunction &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TransferFunction::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction::cloneType() const function, expected prototype:\nosg::Object * osg::TransferFunction::cloneType() const\nClass arguments details:\n");
		}


		osg::TransferFunction* self=dynamic_cast< osg::TransferFunction* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TransferFunction::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::TransferFunction::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TransferFunction::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TransferFunction* self=dynamic_cast< osg::TransferFunction* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TransferFunction::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TransferFunction::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TransferFunction::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::TransferFunction* self=dynamic_cast< osg::TransferFunction* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TransferFunction::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TransferFunction::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction::libraryName() const function, expected prototype:\nconst char * osg::TransferFunction::libraryName() const\nClass arguments details:\n");
		}


		osg::TransferFunction* self=dynamic_cast< osg::TransferFunction* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TransferFunction::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction::className() const function, expected prototype:\nconst char * osg::TransferFunction::className() const\nClass arguments details:\n");
		}


		osg::TransferFunction* self=dynamic_cast< osg::TransferFunction* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Image * osg::TransferFunction::getImage()
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::TransferFunction::getImage() function, expected prototype:\nosg::Image * osg::TransferFunction::getImage()\nClass arguments details:\n");
		}


		osg::TransferFunction* self=dynamic_cast< osg::TransferFunction* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::TransferFunction::getImage()");
		}
		osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::TransferFunction::getImage() const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::TransferFunction::getImage() const function, expected prototype:\nconst osg::Image * osg::TransferFunction::getImage() const\nClass arguments details:\n");
		}


		osg::TransferFunction* self=dynamic_cast< osg::TransferFunction* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::TransferFunction::getImage() const");
		}
		const osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TransferFunction::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage()\n  getImage()\n");
		return 0;
	}


	// Operator binds:

};

osg::TransferFunction* LunaTraits< osg::TransferFunction >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TransferFunction::_bind_ctor(L);
}

void LunaTraits< osg::TransferFunction >::_bind_dtor(osg::TransferFunction* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TransferFunction >::className[] = "TransferFunction";
const char LunaTraits< osg::TransferFunction >::fullName[] = "osg::TransferFunction";
const char LunaTraits< osg::TransferFunction >::moduleName[] = "osg";
const char* LunaTraits< osg::TransferFunction >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::TransferFunction >::hash = 14720112;
const int LunaTraits< osg::TransferFunction >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TransferFunction >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TransferFunction::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TransferFunction::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TransferFunction::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TransferFunction::_bind_libraryName},
	{"className", &luna_wrapper_osg_TransferFunction::_bind_className},
	{"getImage", &luna_wrapper_osg_TransferFunction::_bind_getImage},
	{"__eq", &luna_wrapper_osg_TransferFunction::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TransferFunction >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TransferFunction::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TransferFunction >::enumValues[] = {
	{0,0}
};


