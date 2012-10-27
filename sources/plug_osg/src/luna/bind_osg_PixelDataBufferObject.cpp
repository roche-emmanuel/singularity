#include <plug_common.h>

class luna_wrapper_osg_PixelDataBufferObject {
public:
	typedef Luna< osg::PixelDataBufferObject > luna_t;

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
		osg::PixelDataBufferObject* ptr= dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PixelDataBufferObject >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_setDataSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compileBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_bindBufferInReadMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_bindBufferInWriteMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unbindBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PixelDataBufferObject::PixelDataBufferObject()
	static osg::PixelDataBufferObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PixelDataBufferObject::PixelDataBufferObject() function, expected prototype:\nosg::PixelDataBufferObject::PixelDataBufferObject()\nClass arguments details:\n");
		}


		return new osg::PixelDataBufferObject();
	}

	// osg::PixelDataBufferObject::PixelDataBufferObject(const osg::PixelDataBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PixelDataBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PixelDataBufferObject::PixelDataBufferObject(const osg::PixelDataBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PixelDataBufferObject::PixelDataBufferObject(const osg::PixelDataBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PixelDataBufferObject* pbo_ptr=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if( !pbo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pbo in osg::PixelDataBufferObject::PixelDataBufferObject function");
		}
		const osg::PixelDataBufferObject & pbo=*pbo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PixelDataBufferObject::PixelDataBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::PixelDataBufferObject(pbo, copyop);
	}

	// Overload binder for osg::PixelDataBufferObject::PixelDataBufferObject
	static osg::PixelDataBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PixelDataBufferObject, cannot match any of the overloads for function PixelDataBufferObject:\n  PixelDataBufferObject()\n  PixelDataBufferObject(const osg::PixelDataBufferObject &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PixelDataBufferObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelDataBufferObject::cloneType() const function, expected prototype:\nosg::Object * osg::PixelDataBufferObject::cloneType() const\nClass arguments details:\n");
		}


		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PixelDataBufferObject::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PixelDataBufferObject::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelDataBufferObject::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::PixelDataBufferObject::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PixelDataBufferObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PixelDataBufferObject::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PixelDataBufferObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PixelDataBufferObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PixelDataBufferObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PixelDataBufferObject::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PixelDataBufferObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PixelDataBufferObject::libraryName() const function, expected prototype:\nconst char * osg::PixelDataBufferObject::libraryName() const\nClass arguments details:\n");
		}


		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PixelDataBufferObject::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PixelDataBufferObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PixelDataBufferObject::className() const function, expected prototype:\nconst char * osg::PixelDataBufferObject::className() const\nClass arguments details:\n");
		}


		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PixelDataBufferObject::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::PixelDataBufferObject::setDataSize(unsigned int size)
	static int _bind_setDataSize(lua_State *L) {
		if (!_lg_typecheck_setDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::setDataSize(unsigned int size) function, expected prototype:\nvoid osg::PixelDataBufferObject::setDataSize(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::setDataSize(unsigned int)");
		}
		self->setDataSize(size);

		return 0;
	}

	// unsigned int osg::PixelDataBufferObject::getDataSize() const
	static int _bind_getDataSize(lua_State *L) {
		if (!_lg_typecheck_getDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PixelDataBufferObject::getDataSize() const function, expected prototype:\nunsigned int osg::PixelDataBufferObject::getDataSize() const\nClass arguments details:\n");
		}


		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PixelDataBufferObject::getDataSize() const");
		}
		unsigned int lret = self->getDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PixelDataBufferObject::compileBuffer(osg::State & state) const
	static int _bind_compileBuffer(lua_State *L) {
		if (!_lg_typecheck_compileBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::compileBuffer(osg::State & state) const function, expected prototype:\nvoid osg::PixelDataBufferObject::compileBuffer(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::PixelDataBufferObject::compileBuffer function");
		}
		osg::State & state=*state_ptr;

		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::compileBuffer(osg::State &) const");
		}
		self->compileBuffer(state);

		return 0;
	}

	// void osg::PixelDataBufferObject::bindBufferInReadMode(osg::State & state)
	static int _bind_bindBufferInReadMode(lua_State *L) {
		if (!_lg_typecheck_bindBufferInReadMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::bindBufferInReadMode(osg::State & state) function, expected prototype:\nvoid osg::PixelDataBufferObject::bindBufferInReadMode(osg::State & state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::PixelDataBufferObject::bindBufferInReadMode function");
		}
		osg::State & state=*state_ptr;

		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::bindBufferInReadMode(osg::State &)");
		}
		self->bindBufferInReadMode(state);

		return 0;
	}

	// void osg::PixelDataBufferObject::bindBufferInWriteMode(osg::State & state)
	static int _bind_bindBufferInWriteMode(lua_State *L) {
		if (!_lg_typecheck_bindBufferInWriteMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::bindBufferInWriteMode(osg::State & state) function, expected prototype:\nvoid osg::PixelDataBufferObject::bindBufferInWriteMode(osg::State & state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::PixelDataBufferObject::bindBufferInWriteMode function");
		}
		osg::State & state=*state_ptr;

		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::bindBufferInWriteMode(osg::State &)");
		}
		self->bindBufferInWriteMode(state);

		return 0;
	}

	// void osg::PixelDataBufferObject::unbindBuffer(unsigned int contextID) const
	static int _bind_unbindBuffer(lua_State *L) {
		if (!_lg_typecheck_unbindBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::unbindBuffer(unsigned int contextID) const function, expected prototype:\nvoid osg::PixelDataBufferObject::unbindBuffer(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::unbindBuffer(unsigned int) const");
		}
		self->unbindBuffer(contextID);

		return 0;
	}

	// osg::PixelDataBufferObject::Mode osg::PixelDataBufferObject::getMode(unsigned int contextID) const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PixelDataBufferObject::Mode osg::PixelDataBufferObject::getMode(unsigned int contextID) const function, expected prototype:\nosg::PixelDataBufferObject::Mode osg::PixelDataBufferObject::getMode(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::PixelDataBufferObject* self=dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::PixelDataBufferObject::Mode osg::PixelDataBufferObject::getMode(unsigned int) const");
		}
		osg::PixelDataBufferObject::Mode lret = self->getMode(contextID);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::PixelDataBufferObject* LunaTraits< osg::PixelDataBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PixelDataBufferObject::_bind_ctor(L);
}

void LunaTraits< osg::PixelDataBufferObject >::_bind_dtor(osg::PixelDataBufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PixelDataBufferObject >::className[] = "PixelDataBufferObject";
const char LunaTraits< osg::PixelDataBufferObject >::fullName[] = "osg::PixelDataBufferObject";
const char LunaTraits< osg::PixelDataBufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::PixelDataBufferObject >::parents[] = {"osg.BufferObject", 0};
const int LunaTraits< osg::PixelDataBufferObject >::hash = 74197586;
const int LunaTraits< osg::PixelDataBufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PixelDataBufferObject >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PixelDataBufferObject::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PixelDataBufferObject::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PixelDataBufferObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_PixelDataBufferObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_PixelDataBufferObject::_bind_className},
	{"setDataSize", &luna_wrapper_osg_PixelDataBufferObject::_bind_setDataSize},
	{"getDataSize", &luna_wrapper_osg_PixelDataBufferObject::_bind_getDataSize},
	{"compileBuffer", &luna_wrapper_osg_PixelDataBufferObject::_bind_compileBuffer},
	{"bindBufferInReadMode", &luna_wrapper_osg_PixelDataBufferObject::_bind_bindBufferInReadMode},
	{"bindBufferInWriteMode", &luna_wrapper_osg_PixelDataBufferObject::_bind_bindBufferInWriteMode},
	{"unbindBuffer", &luna_wrapper_osg_PixelDataBufferObject::_bind_unbindBuffer},
	{"getMode", &luna_wrapper_osg_PixelDataBufferObject::_bind_getMode},
	{"__eq", &luna_wrapper_osg_PixelDataBufferObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PixelDataBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PixelDataBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PixelDataBufferObject >::enumValues[] = {
	{"NONE", osg::PixelDataBufferObject::NONE},
	{"READ", osg::PixelDataBufferObject::READ},
	{"WRITE", osg::PixelDataBufferObject::WRITE},
	{0,0}
};


