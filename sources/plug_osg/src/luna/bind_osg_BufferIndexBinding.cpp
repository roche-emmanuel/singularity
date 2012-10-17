#include <plug_common.h>

class luna_wrapper_osg_BufferIndexBinding {
public:
	typedef Luna< osg::BufferIndexBinding > luna_t;

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
		osg::BufferIndexBinding* ptr= dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BufferIndexBinding >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// unsigned osg::BufferIndexBinding::getMember() const
	static int _bind_getMember(lua_State *L) {
		if (!_lg_typecheck_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned osg::BufferIndexBinding::getMember() const function, expected prototype:\nunsigned osg::BufferIndexBinding::getMember() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned osg::BufferIndexBinding::getMember() const");
		}
		unsigned lret = self->getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::BufferIndexBinding::getTarget() const
	static int _bind_getTarget(lua_State *L) {
		if (!_lg_typecheck_getTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferIndexBinding::getTarget() const function, expected prototype:\nunsigned int osg::BufferIndexBinding::getTarget() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferIndexBinding::getTarget() const");
		}
		unsigned int lret = self->getTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::BufferIndexBinding::getIndex() const
	static int _bind_getIndex(lua_State *L) {
		if (!_lg_typecheck_getIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferIndexBinding::getIndex() const function, expected prototype:\nunsigned int osg::BufferIndexBinding::getIndex() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferIndexBinding::getIndex() const");
		}
		unsigned int lret = self->getIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferIndexBinding::setBufferObject(osg::BufferObject * bo)
	static int _bind_setBufferObject(lua_State *L) {
		if (!_lg_typecheck_setBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::setBufferObject(osg::BufferObject * bo) function, expected prototype:\nvoid osg::BufferIndexBinding::setBufferObject(osg::BufferObject * bo)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::BufferObject* bo=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,2));

		osg::BufferIndexBinding* self=dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::setBufferObject(osg::BufferObject *)");
		}
		self->setBufferObject(bo);

		return 0;
	}

	// osg::BufferObject * osg::BufferIndexBinding::getBufferObject() const
	static int _bind_getBufferObject(lua_State *L) {
		if (!_lg_typecheck_getBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferObject * osg::BufferIndexBinding::getBufferObject() const function, expected prototype:\nosg::BufferObject * osg::BufferIndexBinding::getBufferObject() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BufferObject * osg::BufferIndexBinding::getBufferObject() const");
		}
		osg::BufferObject * lret = self->getBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferObject >::push(L,lret,false);

		return 1;
	}

	// void osg::BufferIndexBinding::setOffset(int offset)
	static int _bind_setOffset(lua_State *L) {
		if (!_lg_typecheck_setOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::setOffset(int offset) function, expected prototype:\nvoid osg::BufferIndexBinding::setOffset(int offset)\nClass arguments details:\n");
		}

		int offset=(int)lua_tointeger(L,2);

		osg::BufferIndexBinding* self=dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::setOffset(int)");
		}
		self->setOffset(offset);

		return 0;
	}

	// int osg::BufferIndexBinding::getOffset() const
	static int _bind_getOffset(lua_State *L) {
		if (!_lg_typecheck_getOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::BufferIndexBinding::getOffset() const function, expected prototype:\nint osg::BufferIndexBinding::getOffset() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::BufferIndexBinding::getOffset() const");
		}
		int lret = self->getOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferIndexBinding::setSize(int size)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::setSize(int size) function, expected prototype:\nvoid osg::BufferIndexBinding::setSize(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		osg::BufferIndexBinding* self=dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::setSize(int)");
		}
		self->setSize(size);

		return 0;
	}

	// int osg::BufferIndexBinding::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::BufferIndexBinding::getSize() const function, expected prototype:\nint osg::BufferIndexBinding::getSize() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::BufferIndexBinding::getSize() const");
		}
		int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferIndexBinding::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::apply(osg::State & ) const function, expected prototype:\nvoid osg::BufferIndexBinding::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BufferIndexBinding::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BufferIndexBinding* self=dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::BufferIndexBinding* LunaTraits< osg::BufferIndexBinding >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Object * osg::StateAttribute::cloneType() const
	// osg::Object * osg::StateAttribute::clone(const osg::CopyOp & ) const
	// osg::StateAttribute::Type osg::StateAttribute::getType() const
	// int osg::StateAttribute::compare(const osg::StateAttribute & sa) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osg::BufferIndexBinding >::_bind_dtor(osg::BufferIndexBinding* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BufferIndexBinding >::className[] = "BufferIndexBinding";
const char LunaTraits< osg::BufferIndexBinding >::fullName[] = "osg::BufferIndexBinding";
const char LunaTraits< osg::BufferIndexBinding >::moduleName[] = "osg";
const char* LunaTraits< osg::BufferIndexBinding >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::BufferIndexBinding >::hash = 73994525;
const int LunaTraits< osg::BufferIndexBinding >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BufferIndexBinding >::methods[] = {
	{"getMember", &luna_wrapper_osg_BufferIndexBinding::_bind_getMember},
	{"getTarget", &luna_wrapper_osg_BufferIndexBinding::_bind_getTarget},
	{"getIndex", &luna_wrapper_osg_BufferIndexBinding::_bind_getIndex},
	{"setBufferObject", &luna_wrapper_osg_BufferIndexBinding::_bind_setBufferObject},
	{"getBufferObject", &luna_wrapper_osg_BufferIndexBinding::_bind_getBufferObject},
	{"setOffset", &luna_wrapper_osg_BufferIndexBinding::_bind_setOffset},
	{"getOffset", &luna_wrapper_osg_BufferIndexBinding::_bind_getOffset},
	{"setSize", &luna_wrapper_osg_BufferIndexBinding::_bind_setSize},
	{"getSize", &luna_wrapper_osg_BufferIndexBinding::_bind_getSize},
	{"apply", &luna_wrapper_osg_BufferIndexBinding::_bind_apply},
	{"__eq", &luna_wrapper_osg_BufferIndexBinding::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BufferIndexBinding >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BufferIndexBinding::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BufferIndexBinding >::enumValues[] = {
	{0,0}
};


