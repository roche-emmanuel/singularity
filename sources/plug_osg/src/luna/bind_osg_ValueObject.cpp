#include <plug_common.h>

class luna_wrapper_osg_ValueObject {
public:
	typedef Luna< osg::ValueObject > luna_t;

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
		osg::ValueObject* ptr= dynamic_cast< osg::ValueObject* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ValueObject >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55012529) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ValueObject::ValueObject()
	static osg::ValueObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ValueObject::ValueObject() function, expected prototype:\nosg::ValueObject::ValueObject()\nClass arguments details:\n");
		}


		return new osg::ValueObject();
	}

	// osg::ValueObject::ValueObject(const std::string & name)
	static osg::ValueObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ValueObject::ValueObject(const std::string & name) function, expected prototype:\nosg::ValueObject::ValueObject(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,1),lua_objlen(L,1));

		return new osg::ValueObject(name);
	}

	// osg::ValueObject::ValueObject(const osg::ValueObject & rhs, const osg::CopyOp copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ValueObject* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ValueObject::ValueObject(const osg::ValueObject & rhs, const osg::CopyOp copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ValueObject::ValueObject(const osg::ValueObject & rhs, const osg::CopyOp copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ValueObject* rhs_ptr=dynamic_cast< osg::ValueObject* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ValueObject::ValueObject function");
		}
		const osg::ValueObject & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ValueObject::ValueObject function");
		}
		const osg::CopyOp copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ValueObject(rhs, copyop);
	}

	// Overload binder for osg::ValueObject::ValueObject
	static osg::ValueObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function ValueObject, cannot match any of the overloads for function ValueObject:\n  ValueObject()\n  ValueObject(const std::string &)\n  ValueObject(const osg::ValueObject &, const osg::CopyOp)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ValueObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ValueObject::cloneType() const function, expected prototype:\nosg::Object * osg::ValueObject::cloneType() const\nClass arguments details:\n");
		}


		osg::ValueObject* self=dynamic_cast< osg::ValueObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ValueObject::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ValueObject::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ValueObject::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ValueObject::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ValueObject* self=dynamic_cast< osg::ValueObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ValueObject::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ValueObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ValueObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ValueObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ValueObject* self=dynamic_cast< osg::ValueObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ValueObject::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ValueObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ValueObject::libraryName() const function, expected prototype:\nconst char * osg::ValueObject::libraryName() const\nClass arguments details:\n");
		}


		osg::ValueObject* self=dynamic_cast< osg::ValueObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ValueObject::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ValueObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ValueObject::className() const function, expected prototype:\nconst char * osg::ValueObject::className() const\nClass arguments details:\n");
		}


		osg::ValueObject* self=dynamic_cast< osg::ValueObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ValueObject::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osg::ValueObject::set(osg::ValueObject::SetValueVisitor & gvv)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ValueObject::set(osg::ValueObject::SetValueVisitor & gvv) function, expected prototype:\nbool osg::ValueObject::set(osg::ValueObject::SetValueVisitor & gvv)\nClass arguments details:\narg 1 ID = 55012529\n");
		}

		osg::ValueObject::SetValueVisitor* gvv_ptr=(Luna< osg::ValueObject::SetValueVisitor >::check(L,2));
		if( !gvv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gvv in osg::ValueObject::set function");
		}
		osg::ValueObject::SetValueVisitor & gvv=*gvv_ptr;

		osg::ValueObject* self=dynamic_cast< osg::ValueObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ValueObject::set(osg::ValueObject::SetValueVisitor &)");
		}
		bool lret = self->set(gvv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::ValueObject* LunaTraits< osg::ValueObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ValueObject::_bind_ctor(L);
}

void LunaTraits< osg::ValueObject >::_bind_dtor(osg::ValueObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ValueObject >::className[] = "ValueObject";
const char LunaTraits< osg::ValueObject >::fullName[] = "osg::ValueObject";
const char LunaTraits< osg::ValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObject >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::ValueObject >::hash = 31181139;
const int LunaTraits< osg::ValueObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ValueObject >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ValueObject::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ValueObject::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ValueObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ValueObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_ValueObject::_bind_className},
	{"set", &luna_wrapper_osg_ValueObject::_bind_set},
	{"__eq", &luna_wrapper_osg_ValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ValueObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObject >::enumValues[] = {
	{0,0}
};


