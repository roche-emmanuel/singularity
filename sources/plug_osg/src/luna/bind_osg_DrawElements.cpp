#include <plug_common.h>

class luna_wrapper_osg_DrawElements {
public:
	typedef Luna< osg::DrawElements > luna_t;

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
		osg::DrawElements* ptr= dynamic_cast< osg::DrawElements* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DrawElements >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_getDrawElements_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawElements_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setElementBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElementBufferObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getElementBufferObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reserveElements(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addElement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osg::DrawElements * osg::DrawElements::getDrawElements()
	static int _bind_getDrawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDrawElements_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElements * osg::DrawElements::getDrawElements() function, expected prototype:\nosg::DrawElements * osg::DrawElements::getDrawElements()\nClass arguments details:\n");
		}


		osg::DrawElements* self=dynamic_cast< osg::DrawElements* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DrawElements * osg::DrawElements::getDrawElements()");
		}
		osg::DrawElements * lret = self->getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// const osg::DrawElements * osg::DrawElements::getDrawElements() const
	static int _bind_getDrawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDrawElements_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::DrawElements * osg::DrawElements::getDrawElements() const function, expected prototype:\nconst osg::DrawElements * osg::DrawElements::getDrawElements() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=dynamic_cast< osg::DrawElements* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::DrawElements * osg::DrawElements::getDrawElements() const");
		}
		const osg::DrawElements * lret = self->getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElements::getDrawElements
	static int _bind_getDrawElements(lua_State *L) {
		if (_lg_typecheck_getDrawElements_overload_1(L)) return _bind_getDrawElements_overload_1(L);
		if (_lg_typecheck_getDrawElements_overload_2(L)) return _bind_getDrawElements_overload_2(L);

		luaL_error(L, "error in function getDrawElements, cannot match any of the overloads for function getDrawElements:\n  getDrawElements()\n  getDrawElements()\n");
		return 0;
	}

	// void osg::DrawElements::setElementBufferObject(osg::ElementBufferObject * ebo)
	static int _bind_setElementBufferObject(lua_State *L) {
		if (!_lg_typecheck_setElementBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::setElementBufferObject(osg::ElementBufferObject * ebo) function, expected prototype:\nvoid osg::DrawElements::setElementBufferObject(osg::ElementBufferObject * ebo)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ElementBufferObject* ebo=dynamic_cast< osg::ElementBufferObject* >(Luna< osg::Referenced >::check(L,2));

		osg::DrawElements* self=dynamic_cast< osg::DrawElements* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::setElementBufferObject(osg::ElementBufferObject *)");
		}
		self->setElementBufferObject(ebo);

		return 0;
	}

	// osg::ElementBufferObject * osg::DrawElements::getElementBufferObject()
	static int _bind_getElementBufferObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getElementBufferObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ElementBufferObject * osg::DrawElements::getElementBufferObject() function, expected prototype:\nosg::ElementBufferObject * osg::DrawElements::getElementBufferObject()\nClass arguments details:\n");
		}


		osg::DrawElements* self=dynamic_cast< osg::DrawElements* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ElementBufferObject * osg::DrawElements::getElementBufferObject()");
		}
		osg::ElementBufferObject * lret = self->getElementBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ElementBufferObject >::push(L,lret,false);

		return 1;
	}

	// const osg::ElementBufferObject * osg::DrawElements::getElementBufferObject() const
	static int _bind_getElementBufferObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getElementBufferObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ElementBufferObject * osg::DrawElements::getElementBufferObject() const function, expected prototype:\nconst osg::ElementBufferObject * osg::DrawElements::getElementBufferObject() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=dynamic_cast< osg::DrawElements* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ElementBufferObject * osg::DrawElements::getElementBufferObject() const");
		}
		const osg::ElementBufferObject * lret = self->getElementBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ElementBufferObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElements::getElementBufferObject
	static int _bind_getElementBufferObject(lua_State *L) {
		if (_lg_typecheck_getElementBufferObject_overload_1(L)) return _bind_getElementBufferObject_overload_1(L);
		if (_lg_typecheck_getElementBufferObject_overload_2(L)) return _bind_getElementBufferObject_overload_2(L);

		luaL_error(L, "error in function getElementBufferObject, cannot match any of the overloads for function getElementBufferObject:\n  getElementBufferObject()\n  getElementBufferObject()\n");
		return 0;
	}

	// void osg::DrawElements::reserveElements(unsigned int numIndices)
	static int _bind_reserveElements(lua_State *L) {
		if (!_lg_typecheck_reserveElements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::reserveElements(unsigned int numIndices) function, expected prototype:\nvoid osg::DrawElements::reserveElements(unsigned int numIndices)\nClass arguments details:\n");
		}

		unsigned int numIndices=(unsigned int)lua_tointeger(L,2);

		osg::DrawElements* self=dynamic_cast< osg::DrawElements* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::reserveElements(unsigned int)");
		}
		self->reserveElements(numIndices);

		return 0;
	}

	// void osg::DrawElements::setElement(unsigned int, unsigned int)
	static int _bind_setElement(lua_State *L) {
		if (!_lg_typecheck_setElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::setElement(unsigned int, unsigned int) function, expected prototype:\nvoid osg::DrawElements::setElement(unsigned int, unsigned int)\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);

		osg::DrawElements* self=dynamic_cast< osg::DrawElements* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::setElement(unsigned, unsigned)");
		}
		self->setElement(_arg1, _arg2);

		return 0;
	}

	// unsigned int osg::DrawElements::getElement(unsigned int)
	static int _bind_getElement(lua_State *L) {
		if (!_lg_typecheck_getElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElements::getElement(unsigned int) function, expected prototype:\nunsigned int osg::DrawElements::getElement(unsigned int)\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osg::DrawElements* self=dynamic_cast< osg::DrawElements* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElements::getElement(unsigned)");
		}
		unsigned int lret = self->getElement(_arg1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElements::addElement(unsigned int)
	static int _bind_addElement(lua_State *L) {
		if (!_lg_typecheck_addElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::addElement(unsigned int) function, expected prototype:\nvoid osg::DrawElements::addElement(unsigned int)\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osg::DrawElements* self=dynamic_cast< osg::DrawElements* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::addElement(unsigned)");
		}
		self->addElement(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::DrawElements* LunaTraits< osg::DrawElements >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::DrawElements::reserveElements(unsigned int numIndices)
	// void osg::DrawElements::setElement(unsigned int, unsigned int)
	// unsigned int osg::DrawElements::getElement(unsigned int)
	// void osg::DrawElements::addElement(unsigned int)
	// void osg::PrimitiveSet::draw(osg::State & state, bool useVertexBufferObjects) const
	// void osg::PrimitiveSet::accept(PrimitiveFunctor & functor) const
	// void osg::PrimitiveSet::accept(PrimitiveIndexFunctor & functor) const
	// unsigned int osg::PrimitiveSet::index(unsigned int pos) const
	// unsigned int osg::PrimitiveSet::getNumIndices() const
	// void osg::PrimitiveSet::offsetIndices(int offset)
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osg::DrawElements >::_bind_dtor(osg::DrawElements* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DrawElements >::className[] = "DrawElements";
const char LunaTraits< osg::DrawElements >::fullName[] = "osg::DrawElements";
const char LunaTraits< osg::DrawElements >::moduleName[] = "osg";
const char* LunaTraits< osg::DrawElements >::parents[] = {"osg.PrimitiveSet", 0};
const int LunaTraits< osg::DrawElements >::hash = 7184520;
const int LunaTraits< osg::DrawElements >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::DrawElements >::methods[] = {
	{"getDrawElements", &luna_wrapper_osg_DrawElements::_bind_getDrawElements},
	{"setElementBufferObject", &luna_wrapper_osg_DrawElements::_bind_setElementBufferObject},
	{"getElementBufferObject", &luna_wrapper_osg_DrawElements::_bind_getElementBufferObject},
	{"reserveElements", &luna_wrapper_osg_DrawElements::_bind_reserveElements},
	{"setElement", &luna_wrapper_osg_DrawElements::_bind_setElement},
	{"getElement", &luna_wrapper_osg_DrawElements::_bind_getElement},
	{"addElement", &luna_wrapper_osg_DrawElements::_bind_addElement},
	{"__eq", &luna_wrapper_osg_DrawElements::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DrawElements >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DrawElements::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DrawElements >::enumValues[] = {
	{0,0}
};


