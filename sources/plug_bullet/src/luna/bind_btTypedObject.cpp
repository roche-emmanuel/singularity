#include <plug_common.h>

class luna_wrapper_btTypedObject {
public:
	typedef Luna< btTypedObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66271199) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTypedObject*)");
		}

		btTypedObject* rhs =(Luna< btTypedObject >::check(L,2));
		btTypedObject* self=(Luna< btTypedObject >::check(L,1));
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

		btTypedObject* self=(Luna< btTypedObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTypedObject");
		
		return luna_dynamicCast(L,converters,"btTypedObject",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getObjectType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setObjectType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTypedObject::btTypedObject(int objectType)
	static btTypedObject* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedObject::btTypedObject(int objectType) function, expected prototype:\nbtTypedObject::btTypedObject(int objectType)\nClass arguments details:\n");
		}

		int objectType=(int)lua_tointeger(L,1);

		return new btTypedObject(objectType);
	}


	// Function binds:
	// int btTypedObject::getObjectType() const
	static int _bind_getObjectType(lua_State *L) {
		if (!_lg_typecheck_getObjectType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedObject::getObjectType() const function, expected prototype:\nint btTypedObject::getObjectType() const\nClass arguments details:\n");
		}


		btTypedObject* self=(Luna< btTypedObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedObject::getObjectType() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->getObjectType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTypedObject::m_objectType(int value)
	static int _bind_setObjectType(lua_State *L) {
		if (!_lg_typecheck_setObjectType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedObject::m_objectType(int value) function, expected prototype:\nvoid btTypedObject::m_objectType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedObject* self=(Luna< btTypedObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedObject::m_objectType(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->m_objectType = value;

		return 0;
	}


	// Operator binds:

};

btTypedObject* LunaTraits< btTypedObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTypedObject::_bind_ctor(L);
}

void LunaTraits< btTypedObject >::_bind_dtor(btTypedObject* obj) {
	delete obj;
}

const char LunaTraits< btTypedObject >::className[] = "btTypedObject";
const char LunaTraits< btTypedObject >::fullName[] = "btTypedObject";
const char LunaTraits< btTypedObject >::moduleName[] = "bullet";
const char* LunaTraits< btTypedObject >::parents[] = {0};
const int LunaTraits< btTypedObject >::hash = 66271199;
const int LunaTraits< btTypedObject >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btTypedObject >::methods[] = {
	{"getObjectType", &luna_wrapper_btTypedObject::_bind_getObjectType},
	{"setObjectType", &luna_wrapper_btTypedObject::_bind_setObjectType},
	{"dynCast", &luna_wrapper_btTypedObject::_bind_dynCast},
	{"__eq", &luna_wrapper_btTypedObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btTypedObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTypedObject >::enumValues[] = {
	{0,0}
};


