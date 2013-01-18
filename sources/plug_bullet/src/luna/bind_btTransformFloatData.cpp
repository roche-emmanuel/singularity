#include <plug_common.h>

class luna_wrapper_btTransformFloatData {
public:
	typedef Luna< btTransformFloatData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93855928) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTransformFloatData*)");
		}

		btTransformFloatData* rhs =(Luna< btTransformFloatData >::check(L,2));
		btTransformFloatData* self=(Luna< btTransformFloatData >::check(L,1));
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

		btTransformFloatData* self=(Luna< btTransformFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTransformFloatData");
		
		return luna_dynamicCast(L,converters,"btTransformFloatData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getBasis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBasis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4769007) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOrigin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btMatrix3x3FloatData btTransformFloatData::m_basis()
	static int _bind_getBasis(lua_State *L) {
		if (!_lg_typecheck_getBasis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3FloatData btTransformFloatData::m_basis() function, expected prototype:\nbtMatrix3x3FloatData btTransformFloatData::m_basis()\nClass arguments details:\n");
		}


		btTransformFloatData* self=(Luna< btTransformFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3FloatData btTransformFloatData::m_basis(). Got : '%s'",typeid(Luna< btTransformFloatData >::check(L,1)).name());
		}
		const btMatrix3x3FloatData* lret = &self->m_basis;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btTransformFloatData::m_origin()
	static int _bind_getOrigin(lua_State *L) {
		if (!_lg_typecheck_getOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btTransformFloatData::m_origin() function, expected prototype:\nbtVector3FloatData btTransformFloatData::m_origin()\nClass arguments details:\n");
		}


		btTransformFloatData* self=(Luna< btTransformFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btTransformFloatData::m_origin(). Got : '%s'",typeid(Luna< btTransformFloatData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_origin;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// void btTransformFloatData::m_basis(btMatrix3x3FloatData value)
	static int _bind_setBasis(lua_State *L) {
		if (!_lg_typecheck_setBasis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTransformFloatData::m_basis(btMatrix3x3FloatData value) function, expected prototype:\nvoid btTransformFloatData::m_basis(btMatrix3x3FloatData value)\nClass arguments details:\narg 1 ID = 4769007\n");
		}

		btMatrix3x3FloatData* value_ptr=(Luna< btMatrix3x3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTransformFloatData::m_basis function");
		}
		btMatrix3x3FloatData value=*value_ptr;

		btTransformFloatData* self=(Luna< btTransformFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTransformFloatData::m_basis(btMatrix3x3FloatData). Got : '%s'",typeid(Luna< btTransformFloatData >::check(L,1)).name());
		}
		self->m_basis = value;

		return 0;
	}

	// void btTransformFloatData::m_origin(btVector3FloatData value)
	static int _bind_setOrigin(lua_State *L) {
		if (!_lg_typecheck_setOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTransformFloatData::m_origin(btVector3FloatData value) function, expected prototype:\nvoid btTransformFloatData::m_origin(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTransformFloatData::m_origin function");
		}
		btVector3FloatData value=*value_ptr;

		btTransformFloatData* self=(Luna< btTransformFloatData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTransformFloatData::m_origin(btVector3FloatData). Got : '%s'",typeid(Luna< btTransformFloatData >::check(L,1)).name());
		}
		self->m_origin = value;

		return 0;
	}


	// Operator binds:

};

btTransformFloatData* LunaTraits< btTransformFloatData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btTransformFloatData >::_bind_dtor(btTransformFloatData* obj) {
	delete obj;
}

const char LunaTraits< btTransformFloatData >::className[] = "btTransformFloatData";
const char LunaTraits< btTransformFloatData >::fullName[] = "btTransformFloatData";
const char LunaTraits< btTransformFloatData >::moduleName[] = "bullet";
const char* LunaTraits< btTransformFloatData >::parents[] = {0};
const int LunaTraits< btTransformFloatData >::hash = 93855928;
const int LunaTraits< btTransformFloatData >::uniqueIDs[] = {93855928,0};

luna_RegType LunaTraits< btTransformFloatData >::methods[] = {
	{"getBasis", &luna_wrapper_btTransformFloatData::_bind_getBasis},
	{"getOrigin", &luna_wrapper_btTransformFloatData::_bind_getOrigin},
	{"setBasis", &luna_wrapper_btTransformFloatData::_bind_setBasis},
	{"setOrigin", &luna_wrapper_btTransformFloatData::_bind_setOrigin},
	{"dynCast", &luna_wrapper_btTransformFloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btTransformFloatData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btTransformFloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTransformFloatData >::enumValues[] = {
	{0,0}
};


