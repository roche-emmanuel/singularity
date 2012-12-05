#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_UniformBufferObject.h>

class luna_wrapper_osg_UniformBufferObject {
public:
	typedef Luna< osg::UniformBufferObject > luna_t;

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
		osg::UniformBufferObject* ptr= dynamic_cast< osg::UniformBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::UniformBufferObject >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::UniformBufferObject* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::UniformBufferObject* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::UniformBufferObject::UniformBufferObject()
	static osg::UniformBufferObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UniformBufferObject::UniformBufferObject() function, expected prototype:\nosg::UniformBufferObject::UniformBufferObject()\nClass arguments details:\n");
		}


		return new osg::UniformBufferObject();
	}

	// osg::UniformBufferObject::UniformBufferObject(const osg::UniformBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::UniformBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UniformBufferObject::UniformBufferObject(const osg::UniformBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::UniformBufferObject::UniformBufferObject(const osg::UniformBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::UniformBufferObject* ubo_ptr=dynamic_cast< osg::UniformBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if( !ubo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ubo in osg::UniformBufferObject::UniformBufferObject function");
		}
		const osg::UniformBufferObject & ubo=*ubo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::UniformBufferObject::UniformBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::UniformBufferObject(ubo, copyop);
	}

	// osg::UniformBufferObject::UniformBufferObject(lua_Table * data)
	static osg::UniformBufferObject* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UniformBufferObject::UniformBufferObject(lua_Table * data) function, expected prototype:\nosg::UniformBufferObject::UniformBufferObject(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_UniformBufferObject(L,NULL);
	}

	// osg::UniformBufferObject::UniformBufferObject(lua_Table * data, const osg::UniformBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::UniformBufferObject* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UniformBufferObject::UniformBufferObject(lua_Table * data, const osg::UniformBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::UniformBufferObject::UniformBufferObject(lua_Table * data, const osg::UniformBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::UniformBufferObject* ubo_ptr=dynamic_cast< osg::UniformBufferObject* >(Luna< osg::Referenced >::check(L,2));
		if( !ubo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ubo in osg::UniformBufferObject::UniformBufferObject function");
		}
		const osg::UniformBufferObject & ubo=*ubo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::UniformBufferObject::UniformBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_UniformBufferObject(L,NULL, ubo, copyop);
	}

	// Overload binder for osg::UniformBufferObject::UniformBufferObject
	static osg::UniformBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function UniformBufferObject, cannot match any of the overloads for function UniformBufferObject:\n  UniformBufferObject()\n  UniformBufferObject(const osg::UniformBufferObject &, const osg::CopyOp &)\n  UniformBufferObject(lua_Table *)\n  UniformBufferObject(lua_Table *, const osg::UniformBufferObject &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::UniformBufferObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::UniformBufferObject::cloneType() const function, expected prototype:\nosg::Object * osg::UniformBufferObject::cloneType() const\nClass arguments details:\n");
		}


		osg::UniformBufferObject* self=dynamic_cast< osg::UniformBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::UniformBufferObject::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::UniformBufferObject::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::UniformBufferObject::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::UniformBufferObject::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::UniformBufferObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::UniformBufferObject* self=dynamic_cast< osg::UniformBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::UniformBufferObject::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::UniformBufferObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::UniformBufferObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::UniformBufferObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::UniformBufferObject* self=dynamic_cast< osg::UniformBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::UniformBufferObject::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::UniformBufferObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::UniformBufferObject::libraryName() const function, expected prototype:\nconst char * osg::UniformBufferObject::libraryName() const\nClass arguments details:\n");
		}


		osg::UniformBufferObject* self=dynamic_cast< osg::UniformBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::UniformBufferObject::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::UniformBufferObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::UniformBufferObject::className() const function, expected prototype:\nconst char * osg::UniformBufferObject::className() const\nClass arguments details:\n");
		}


		osg::UniformBufferObject* self=dynamic_cast< osg::UniformBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::UniformBufferObject::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::UniformBufferObject* LunaTraits< osg::UniformBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_UniformBufferObject::_bind_ctor(L);
}

void LunaTraits< osg::UniformBufferObject >::_bind_dtor(osg::UniformBufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::UniformBufferObject >::className[] = "UniformBufferObject";
const char LunaTraits< osg::UniformBufferObject >::fullName[] = "osg::UniformBufferObject";
const char LunaTraits< osg::UniformBufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::UniformBufferObject >::parents[] = {"osg.BufferObject", 0};
const int LunaTraits< osg::UniformBufferObject >::hash = 9828547;
const int LunaTraits< osg::UniformBufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::UniformBufferObject >::methods[] = {
	{"cloneType", &luna_wrapper_osg_UniformBufferObject::_bind_cloneType},
	{"clone", &luna_wrapper_osg_UniformBufferObject::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_UniformBufferObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_UniformBufferObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_UniformBufferObject::_bind_className},
	{"__eq", &luna_wrapper_osg_UniformBufferObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::UniformBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_UniformBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::UniformBufferObject >::enumValues[] = {
	{0,0}
};


