#include <plug_common.h>

class luna_wrapper_btCollisionObjectWrapper {
public:
	typedef Luna< btCollisionObjectWrapper > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32391296) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionObjectWrapper*)");
		}

		btCollisionObjectWrapper* rhs =(Luna< btCollisionObjectWrapper >::check(L,2));
		btCollisionObjectWrapper* self=(Luna< btCollisionObjectWrapper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btCollisionObjectWrapper* self=(Luna< btCollisionObjectWrapper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionObjectWrapper");
		
		return luna_dynamicCast(L,converters,"btCollisionObjectWrapper",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,32391296)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionObjectWrapper::btCollisionObjectWrapper(const btCollisionObjectWrapper * parent, const btCollisionShape * shape, const btCollisionObject * collisionObject, const btTransform & worldTransform)
	static btCollisionObjectWrapper* _bind_ctor(lua_State *L) {
		return NULL; // Class can only be on stack.
	}


	// Function binds:
	// const btTransform & btCollisionObjectWrapper::getWorldTransform() const
	static int _bind_getWorldTransform(lua_State *L) {
		if (!_lg_typecheck_getWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btCollisionObjectWrapper::getWorldTransform() const function, expected prototype:\nconst btTransform & btCollisionObjectWrapper::getWorldTransform() const\nClass arguments details:\n");
		}


		btCollisionObjectWrapper* self=(Luna< btCollisionObjectWrapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btCollisionObjectWrapper::getWorldTransform() const. Got : '%s'",typeid(Luna< btCollisionObjectWrapper >::check(L,1)).name());
		}
		const btTransform* lret = &self->getWorldTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// const btCollisionObject * btCollisionObjectWrapper::getCollisionObject() const
	static int _bind_getCollisionObject(lua_State *L) {
		if (!_lg_typecheck_getCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObject * btCollisionObjectWrapper::getCollisionObject() const function, expected prototype:\nconst btCollisionObject * btCollisionObjectWrapper::getCollisionObject() const\nClass arguments details:\n");
		}


		btCollisionObjectWrapper* self=(Luna< btCollisionObjectWrapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObject * btCollisionObjectWrapper::getCollisionObject() const. Got : '%s'",typeid(Luna< btCollisionObjectWrapper >::check(L,1)).name());
		}
		const btCollisionObject * lret = self->getCollisionObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObject >::push(L,lret,false);

		return 1;
	}

	// const btCollisionShape * btCollisionObjectWrapper::getCollisionShape() const
	static int _bind_getCollisionShape(lua_State *L) {
		if (!_lg_typecheck_getCollisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btCollisionObjectWrapper::getCollisionShape() const function, expected prototype:\nconst btCollisionShape * btCollisionObjectWrapper::getCollisionShape() const\nClass arguments details:\n");
		}


		btCollisionObjectWrapper* self=(Luna< btCollisionObjectWrapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionShape * btCollisionObjectWrapper::getCollisionShape() const. Got : '%s'",typeid(Luna< btCollisionObjectWrapper >::check(L,1)).name());
		}
		const btCollisionShape * lret = self->getCollisionShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// const btCollisionObjectWrapper * btCollisionObjectWrapper::m_parent()
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObjectWrapper * btCollisionObjectWrapper::m_parent() function, expected prototype:\nconst btCollisionObjectWrapper * btCollisionObjectWrapper::m_parent()\nClass arguments details:\n");
		}


		btCollisionObjectWrapper* self=(Luna< btCollisionObjectWrapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObjectWrapper * btCollisionObjectWrapper::m_parent(). Got : '%s'",typeid(Luna< btCollisionObjectWrapper >::check(L,1)).name());
		}
		const btCollisionObjectWrapper * lret = self->m_parent;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObjectWrapper >::push(L,lret,false);

		return 1;
	}

	// const btCollisionShape * btCollisionObjectWrapper::m_shape()
	static int _bind_getShape(lua_State *L) {
		if (!_lg_typecheck_getShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btCollisionObjectWrapper::m_shape() function, expected prototype:\nconst btCollisionShape * btCollisionObjectWrapper::m_shape()\nClass arguments details:\n");
		}


		btCollisionObjectWrapper* self=(Luna< btCollisionObjectWrapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionShape * btCollisionObjectWrapper::m_shape(). Got : '%s'",typeid(Luna< btCollisionObjectWrapper >::check(L,1)).name());
		}
		const btCollisionShape * lret = self->m_shape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btCollisionObjectWrapper* LunaTraits< btCollisionObjectWrapper >::_bind_ctor(lua_State *L) {
	return NULL; // On stack only class.
}

void LunaTraits< btCollisionObjectWrapper >::_bind_dtor(btCollisionObjectWrapper* obj) {
	//delete obj; // stack only class.
}

const char LunaTraits< btCollisionObjectWrapper >::className[] = "btCollisionObjectWrapper";
const char LunaTraits< btCollisionObjectWrapper >::fullName[] = "btCollisionObjectWrapper";
const char LunaTraits< btCollisionObjectWrapper >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionObjectWrapper >::parents[] = {0};
const int LunaTraits< btCollisionObjectWrapper >::hash = 32391296;
const int LunaTraits< btCollisionObjectWrapper >::uniqueIDs[] = {32391296,0};

luna_RegType LunaTraits< btCollisionObjectWrapper >::methods[] = {
	{"getWorldTransform", &luna_wrapper_btCollisionObjectWrapper::_bind_getWorldTransform},
	{"getCollisionObject", &luna_wrapper_btCollisionObjectWrapper::_bind_getCollisionObject},
	{"getCollisionShape", &luna_wrapper_btCollisionObjectWrapper::_bind_getCollisionShape},
	{"getParent", &luna_wrapper_btCollisionObjectWrapper::_bind_getParent},
	{"getShape", &luna_wrapper_btCollisionObjectWrapper::_bind_getShape},
	{"dynCast", &luna_wrapper_btCollisionObjectWrapper::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionObjectWrapper::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionObjectWrapper >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionObjectWrapper >::enumValues[] = {
	{0,0}
};


