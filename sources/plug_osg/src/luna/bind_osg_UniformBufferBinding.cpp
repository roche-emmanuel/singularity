#include <plug_common.h>

class luna_wrapper_osg_UniformBufferBinding {
public:
	typedef Luna< osg::UniformBufferBinding > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::UniformBufferBinding* ptr= dynamic_cast< osg::UniformBufferBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::UniformBufferBinding >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::UniformBufferBinding::UniformBufferBinding()
	static osg::UniformBufferBinding* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding() function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding()\nClass arguments details:\n");
		}


		return new osg::UniformBufferBinding();
	}

	// osg::UniformBufferBinding::UniformBufferBinding(unsigned int index)
	static osg::UniformBufferBinding* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding(unsigned int index) function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding(unsigned int index)\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,1);

		return new osg::UniformBufferBinding(index);
	}

	// osg::UniformBufferBinding::UniformBufferBinding(unsigned int index, osg::BufferObject * bo, int offset, int size)
	static osg::UniformBufferBinding* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding(unsigned int index, osg::BufferObject * bo, int offset, int size) function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding(unsigned int index, osg::BufferObject * bo, int offset, int size)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,1);
		osg::BufferObject* bo=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,2));
		int offset=(int)lua_tointeger(L,3);
		int size=(int)lua_tointeger(L,4);

		return new osg::UniformBufferBinding(index, bo, offset, size);
	}

	// osg::UniformBufferBinding::UniformBufferBinding(const osg::UniformBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::UniformBufferBinding* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding(const osg::UniformBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding(const osg::UniformBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::UniformBufferBinding* rhs_ptr=dynamic_cast< osg::UniformBufferBinding* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::UniformBufferBinding::UniformBufferBinding function");
		}
		const osg::UniformBufferBinding & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::UniformBufferBinding::UniformBufferBinding function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::UniformBufferBinding(rhs, copyop);
	}

	// Overload binder for osg::UniformBufferBinding::UniformBufferBinding
	static osg::UniformBufferBinding* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function UniformBufferBinding, cannot match any of the overloads for function UniformBufferBinding:\n  UniformBufferBinding()\n  UniformBufferBinding(unsigned int)\n  UniformBufferBinding(unsigned int, osg::BufferObject *, int, int)\n  UniformBufferBinding(const osg::UniformBufferBinding &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::UniformBufferBinding::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::UniformBufferBinding::cloneType() const function, expected prototype:\nosg::Object * osg::UniformBufferBinding::cloneType() const\nClass arguments details:\n");
		}


		osg::UniformBufferBinding* self=dynamic_cast< osg::UniformBufferBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::UniformBufferBinding::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::UniformBufferBinding::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::UniformBufferBinding::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::UniformBufferBinding::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::UniformBufferBinding::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::UniformBufferBinding* self=dynamic_cast< osg::UniformBufferBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::UniformBufferBinding::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::UniformBufferBinding::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::UniformBufferBinding::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::UniformBufferBinding::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::UniformBufferBinding* self=dynamic_cast< osg::UniformBufferBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::UniformBufferBinding::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::UniformBufferBinding::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::UniformBufferBinding::libraryName() const function, expected prototype:\nconst char * osg::UniformBufferBinding::libraryName() const\nClass arguments details:\n");
		}


		osg::UniformBufferBinding* self=dynamic_cast< osg::UniformBufferBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::UniformBufferBinding::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::UniformBufferBinding::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::UniformBufferBinding::className() const function, expected prototype:\nconst char * osg::UniformBufferBinding::className() const\nClass arguments details:\n");
		}


		osg::UniformBufferBinding* self=dynamic_cast< osg::UniformBufferBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::UniformBufferBinding::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::UniformBufferBinding::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::UniformBufferBinding::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::UniformBufferBinding::getType() const\nClass arguments details:\n");
		}


		osg::UniformBufferBinding* self=dynamic_cast< osg::UniformBufferBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::UniformBufferBinding::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::UniformBufferBinding::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::UniformBufferBinding::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::UniformBufferBinding::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::UniformBufferBinding::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::UniformBufferBinding* self=dynamic_cast< osg::UniformBufferBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::UniformBufferBinding::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::UniformBufferBinding* LunaTraits< osg::UniformBufferBinding >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_UniformBufferBinding::_bind_ctor(L);
}

void LunaTraits< osg::UniformBufferBinding >::_bind_dtor(osg::UniformBufferBinding* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::UniformBufferBinding >::className[] = "UniformBufferBinding";
const char LunaTraits< osg::UniformBufferBinding >::fullName[] = "osg::UniformBufferBinding";
const char LunaTraits< osg::UniformBufferBinding >::moduleName[] = "osg";
const char* LunaTraits< osg::UniformBufferBinding >::parents[] = {"osg.BufferIndexBinding", 0};
const int LunaTraits< osg::UniformBufferBinding >::hash = 71213788;
const int LunaTraits< osg::UniformBufferBinding >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::UniformBufferBinding >::methods[] = {
	{"cloneType", &luna_wrapper_osg_UniformBufferBinding::_bind_cloneType},
	{"clone", &luna_wrapper_osg_UniformBufferBinding::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_UniformBufferBinding::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_UniformBufferBinding::_bind_libraryName},
	{"className", &luna_wrapper_osg_UniformBufferBinding::_bind_className},
	{"getType", &luna_wrapper_osg_UniformBufferBinding::_bind_getType},
	{"compare", &luna_wrapper_osg_UniformBufferBinding::_bind_compare},
	{0,0}
};

luna_ConverterType LunaTraits< osg::UniformBufferBinding >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_UniformBufferBinding::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::UniformBufferBinding >::enumValues[] = {
	{0,0}
};


