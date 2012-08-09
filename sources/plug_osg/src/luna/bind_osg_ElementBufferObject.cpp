#include <plug_common.h>

class luna_wrapper_osg_ElementBufferObject {
public:
	typedef Luna< osg::ElementBufferObject > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ElementBufferObject* ptr= dynamic_cast< osg::ElementBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ElementBufferObject >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getDrawElements_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawElements_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ElementBufferObject::ElementBufferObject()
	static osg::ElementBufferObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ElementBufferObject::ElementBufferObject() function, expected prototype:\nosg::ElementBufferObject::ElementBufferObject()\nClass arguments details:\n");
		}


		return new osg::ElementBufferObject();
	}

	// osg::ElementBufferObject::ElementBufferObject(const osg::ElementBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ElementBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ElementBufferObject::ElementBufferObject(const osg::ElementBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ElementBufferObject::ElementBufferObject(const osg::ElementBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ElementBufferObject* pbo_ptr=dynamic_cast< osg::ElementBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if( !pbo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pbo in osg::ElementBufferObject::ElementBufferObject function");
		}
		const osg::ElementBufferObject & pbo=*pbo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ElementBufferObject::ElementBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ElementBufferObject(pbo, copyop);
	}

	// Overload binder for osg::ElementBufferObject::ElementBufferObject
	static osg::ElementBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ElementBufferObject, cannot match any of the overloads for function ElementBufferObject:\n  ElementBufferObject()\n  ElementBufferObject(const osg::ElementBufferObject &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ElementBufferObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ElementBufferObject::cloneType() const function, expected prototype:\nosg::Object * osg::ElementBufferObject::cloneType() const\nClass arguments details:\n");
		}


		osg::ElementBufferObject* self=dynamic_cast< osg::ElementBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ElementBufferObject::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ElementBufferObject::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ElementBufferObject::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ElementBufferObject::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ElementBufferObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ElementBufferObject* self=dynamic_cast< osg::ElementBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ElementBufferObject::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ElementBufferObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ElementBufferObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ElementBufferObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ElementBufferObject* self=dynamic_cast< osg::ElementBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ElementBufferObject::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ElementBufferObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ElementBufferObject::libraryName() const function, expected prototype:\nconst char * osg::ElementBufferObject::libraryName() const\nClass arguments details:\n");
		}


		osg::ElementBufferObject* self=dynamic_cast< osg::ElementBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ElementBufferObject::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ElementBufferObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ElementBufferObject::className() const function, expected prototype:\nconst char * osg::ElementBufferObject::className() const\nClass arguments details:\n");
		}


		osg::ElementBufferObject* self=dynamic_cast< osg::ElementBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ElementBufferObject::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::DrawElements * osg::ElementBufferObject::getDrawElements(unsigned int i)
	static int _bind_getDrawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDrawElements_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElements * osg::ElementBufferObject::getDrawElements(unsigned int i) function, expected prototype:\nosg::DrawElements * osg::ElementBufferObject::getDrawElements(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ElementBufferObject* self=dynamic_cast< osg::ElementBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DrawElements * osg::ElementBufferObject::getDrawElements(unsigned int)");
		}
		osg::DrawElements * lret = self->getDrawElements(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// const osg::DrawElements * osg::ElementBufferObject::getDrawElements(unsigned int i) const
	static int _bind_getDrawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDrawElements_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::DrawElements * osg::ElementBufferObject::getDrawElements(unsigned int i) const function, expected prototype:\nconst osg::DrawElements * osg::ElementBufferObject::getDrawElements(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ElementBufferObject* self=dynamic_cast< osg::ElementBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::DrawElements * osg::ElementBufferObject::getDrawElements(unsigned int) const");
		}
		const osg::DrawElements * lret = self->getDrawElements(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ElementBufferObject::getDrawElements
	static int _bind_getDrawElements(lua_State *L) {
		if (_lg_typecheck_getDrawElements_overload_1(L)) return _bind_getDrawElements_overload_1(L);
		if (_lg_typecheck_getDrawElements_overload_2(L)) return _bind_getDrawElements_overload_2(L);

		luaL_error(L, "error in function getDrawElements, cannot match any of the overloads for function getDrawElements:\n  getDrawElements(unsigned int)\n  getDrawElements(unsigned int)\n");
		return 0;
	}


	// Operator binds:

};

osg::ElementBufferObject* LunaTraits< osg::ElementBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ElementBufferObject::_bind_ctor(L);
}

void LunaTraits< osg::ElementBufferObject >::_bind_dtor(osg::ElementBufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ElementBufferObject >::className[] = "ElementBufferObject";
const char LunaTraits< osg::ElementBufferObject >::fullName[] = "osg::ElementBufferObject";
const char LunaTraits< osg::ElementBufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::ElementBufferObject >::parents[] = {"osg.BufferObject", 0};
const int LunaTraits< osg::ElementBufferObject >::hash = 68136781;
const int LunaTraits< osg::ElementBufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ElementBufferObject >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ElementBufferObject::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ElementBufferObject::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ElementBufferObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ElementBufferObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_ElementBufferObject::_bind_className},
	{"getDrawElements", &luna_wrapper_osg_ElementBufferObject::_bind_getDrawElements},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ElementBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ElementBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ElementBufferObject >::enumValues[] = {
	{0,0}
};


