#include <plug_common.h>

class luna_wrapper_osg_VertexBufferObject {
public:
	typedef Luna< osg::VertexBufferObject > luna_t;

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
		osg::VertexBufferObject* ptr= dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::VertexBufferObject >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_addArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::VertexBufferObject::VertexBufferObject()
	static osg::VertexBufferObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexBufferObject::VertexBufferObject() function, expected prototype:\nosg::VertexBufferObject::VertexBufferObject()\nClass arguments details:\n");
		}


		return new osg::VertexBufferObject();
	}

	// osg::VertexBufferObject::VertexBufferObject(const osg::VertexBufferObject & vbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::VertexBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexBufferObject::VertexBufferObject(const osg::VertexBufferObject & vbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::VertexBufferObject::VertexBufferObject(const osg::VertexBufferObject & vbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::VertexBufferObject* vbo_ptr=dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if( !vbo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vbo in osg::VertexBufferObject::VertexBufferObject function");
		}
		const osg::VertexBufferObject & vbo=*vbo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::VertexBufferObject::VertexBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::VertexBufferObject(vbo, copyop);
	}

	// Overload binder for osg::VertexBufferObject::VertexBufferObject
	static osg::VertexBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function VertexBufferObject, cannot match any of the overloads for function VertexBufferObject:\n  VertexBufferObject()\n  VertexBufferObject(const osg::VertexBufferObject &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::VertexBufferObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexBufferObject::cloneType() const function, expected prototype:\nosg::Object * osg::VertexBufferObject::cloneType() const\nClass arguments details:\n");
		}


		osg::VertexBufferObject* self=dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::VertexBufferObject::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::VertexBufferObject::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexBufferObject::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::VertexBufferObject::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexBufferObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::VertexBufferObject* self=dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::VertexBufferObject::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::VertexBufferObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::VertexBufferObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::VertexBufferObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::VertexBufferObject* self=dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::VertexBufferObject::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::VertexBufferObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::VertexBufferObject::libraryName() const function, expected prototype:\nconst char * osg::VertexBufferObject::libraryName() const\nClass arguments details:\n");
		}


		osg::VertexBufferObject* self=dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::VertexBufferObject::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::VertexBufferObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::VertexBufferObject::className() const function, expected prototype:\nconst char * osg::VertexBufferObject::className() const\nClass arguments details:\n");
		}


		osg::VertexBufferObject* self=dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::VertexBufferObject::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// unsigned int osg::VertexBufferObject::addArray(osg::Array * array)
	static int _bind_addArray(lua_State *L) {
		if (!_lg_typecheck_addArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::VertexBufferObject::addArray(osg::Array * array) function, expected prototype:\nunsigned int osg::VertexBufferObject::addArray(osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Array* array=dynamic_cast< osg::Array* >(Luna< osg::Referenced >::check(L,2));

		osg::VertexBufferObject* self=dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::VertexBufferObject::addArray(osg::Array *)");
		}
		unsigned int lret = self->addArray(array);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::VertexBufferObject::removeArray(osg::Array * array)
	static int _bind_removeArray(lua_State *L) {
		if (!_lg_typecheck_removeArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexBufferObject::removeArray(osg::Array * array) function, expected prototype:\nvoid osg::VertexBufferObject::removeArray(osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Array* array=dynamic_cast< osg::Array* >(Luna< osg::Referenced >::check(L,2));

		osg::VertexBufferObject* self=dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexBufferObject::removeArray(osg::Array *)");
		}
		self->removeArray(array);

		return 0;
	}

	// void osg::VertexBufferObject::setArray(unsigned int i, osg::Array * array)
	static int _bind_setArray(lua_State *L) {
		if (!_lg_typecheck_setArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexBufferObject::setArray(unsigned int i, osg::Array * array) function, expected prototype:\nvoid osg::VertexBufferObject::setArray(unsigned int i, osg::Array * array)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Array* array=dynamic_cast< osg::Array* >(Luna< osg::Referenced >::check(L,3));

		osg::VertexBufferObject* self=dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexBufferObject::setArray(unsigned int, osg::Array *)");
		}
		self->setArray(i, array);

		return 0;
	}

	// osg::Array * osg::VertexBufferObject::getArray(unsigned int i)
	static int _bind_getArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Array * osg::VertexBufferObject::getArray(unsigned int i) function, expected prototype:\nosg::Array * osg::VertexBufferObject::getArray(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::VertexBufferObject* self=dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Array * osg::VertexBufferObject::getArray(unsigned int)");
		}
		osg::Array * lret = self->getArray(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::VertexBufferObject::getArray(unsigned int i) const
	static int _bind_getArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::VertexBufferObject::getArray(unsigned int i) const function, expected prototype:\nconst osg::Array * osg::VertexBufferObject::getArray(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::VertexBufferObject* self=dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Array * osg::VertexBufferObject::getArray(unsigned int) const");
		}
		const osg::Array * lret = self->getArray(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::VertexBufferObject::getArray
	static int _bind_getArray(lua_State *L) {
		if (_lg_typecheck_getArray_overload_1(L)) return _bind_getArray_overload_1(L);
		if (_lg_typecheck_getArray_overload_2(L)) return _bind_getArray_overload_2(L);

		luaL_error(L, "error in function getArray, cannot match any of the overloads for function getArray:\n  getArray(unsigned int)\n  getArray(unsigned int)\n");
		return 0;
	}


	// Operator binds:

};

osg::VertexBufferObject* LunaTraits< osg::VertexBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_VertexBufferObject::_bind_ctor(L);
}

void LunaTraits< osg::VertexBufferObject >::_bind_dtor(osg::VertexBufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::VertexBufferObject >::className[] = "VertexBufferObject";
const char LunaTraits< osg::VertexBufferObject >::fullName[] = "osg::VertexBufferObject";
const char LunaTraits< osg::VertexBufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::VertexBufferObject >::parents[] = {"osg.BufferObject", 0};
const int LunaTraits< osg::VertexBufferObject >::hash = 70709163;
const int LunaTraits< osg::VertexBufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::VertexBufferObject >::methods[] = {
	{"cloneType", &luna_wrapper_osg_VertexBufferObject::_bind_cloneType},
	{"clone", &luna_wrapper_osg_VertexBufferObject::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_VertexBufferObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_VertexBufferObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_VertexBufferObject::_bind_className},
	{"addArray", &luna_wrapper_osg_VertexBufferObject::_bind_addArray},
	{"removeArray", &luna_wrapper_osg_VertexBufferObject::_bind_removeArray},
	{"setArray", &luna_wrapper_osg_VertexBufferObject::_bind_setArray},
	{"getArray", &luna_wrapper_osg_VertexBufferObject::_bind_getArray},
	{"__eq", &luna_wrapper_osg_VertexBufferObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::VertexBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_VertexBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::VertexBufferObject >::enumValues[] = {
	{0,0}
};


