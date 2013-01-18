#include <plug_common.h>

class luna_wrapper_btTransformDoubleData {
public:
	typedef Luna< btTransformDoubleData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10173309) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTransformDoubleData*)");
		}

		btTransformDoubleData* rhs =(Luna< btTransformDoubleData >::check(L,2));
		btTransformDoubleData* self=(Luna< btTransformDoubleData >::check(L,1));
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

		btTransformDoubleData* self=(Luna< btTransformDoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTransformDoubleData");
		
		return luna_dynamicCast(L,converters,"btTransformDoubleData",name);
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

		if( !Luna<void>::has_uniqueid(L,2,48479346) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOrigin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89582070) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btMatrix3x3DoubleData btTransformDoubleData::m_basis()
	static int _bind_getBasis(lua_State *L) {
		if (!_lg_typecheck_getBasis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3DoubleData btTransformDoubleData::m_basis() function, expected prototype:\nbtMatrix3x3DoubleData btTransformDoubleData::m_basis()\nClass arguments details:\n");
		}


		btTransformDoubleData* self=(Luna< btTransformDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3DoubleData btTransformDoubleData::m_basis(). Got : '%s'",typeid(Luna< btTransformDoubleData >::check(L,1)).name());
		}
		const btMatrix3x3DoubleData* lret = &self->m_basis;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3DoubleData >::push(L,lret,false);

		return 1;
	}

	// btVector3DoubleData btTransformDoubleData::m_origin()
	static int _bind_getOrigin(lua_State *L) {
		if (!_lg_typecheck_getOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3DoubleData btTransformDoubleData::m_origin() function, expected prototype:\nbtVector3DoubleData btTransformDoubleData::m_origin()\nClass arguments details:\n");
		}


		btTransformDoubleData* self=(Luna< btTransformDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3DoubleData btTransformDoubleData::m_origin(). Got : '%s'",typeid(Luna< btTransformDoubleData >::check(L,1)).name());
		}
		const btVector3DoubleData* lret = &self->m_origin;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3DoubleData >::push(L,lret,false);

		return 1;
	}

	// void btTransformDoubleData::m_basis(btMatrix3x3DoubleData value)
	static int _bind_setBasis(lua_State *L) {
		if (!_lg_typecheck_setBasis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTransformDoubleData::m_basis(btMatrix3x3DoubleData value) function, expected prototype:\nvoid btTransformDoubleData::m_basis(btMatrix3x3DoubleData value)\nClass arguments details:\narg 1 ID = 48479346\n");
		}

		btMatrix3x3DoubleData* value_ptr=(Luna< btMatrix3x3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTransformDoubleData::m_basis function");
		}
		btMatrix3x3DoubleData value=*value_ptr;

		btTransformDoubleData* self=(Luna< btTransformDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTransformDoubleData::m_basis(btMatrix3x3DoubleData). Got : '%s'",typeid(Luna< btTransformDoubleData >::check(L,1)).name());
		}
		self->m_basis = value;

		return 0;
	}

	// void btTransformDoubleData::m_origin(btVector3DoubleData value)
	static int _bind_setOrigin(lua_State *L) {
		if (!_lg_typecheck_setOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTransformDoubleData::m_origin(btVector3DoubleData value) function, expected prototype:\nvoid btTransformDoubleData::m_origin(btVector3DoubleData value)\nClass arguments details:\narg 1 ID = 89582070\n");
		}

		btVector3DoubleData* value_ptr=(Luna< btVector3DoubleData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTransformDoubleData::m_origin function");
		}
		btVector3DoubleData value=*value_ptr;

		btTransformDoubleData* self=(Luna< btTransformDoubleData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTransformDoubleData::m_origin(btVector3DoubleData). Got : '%s'",typeid(Luna< btTransformDoubleData >::check(L,1)).name());
		}
		self->m_origin = value;

		return 0;
	}


	// Operator binds:

};

btTransformDoubleData* LunaTraits< btTransformDoubleData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btTransformDoubleData >::_bind_dtor(btTransformDoubleData* obj) {
	delete obj;
}

const char LunaTraits< btTransformDoubleData >::className[] = "btTransformDoubleData";
const char LunaTraits< btTransformDoubleData >::fullName[] = "btTransformDoubleData";
const char LunaTraits< btTransformDoubleData >::moduleName[] = "bullet";
const char* LunaTraits< btTransformDoubleData >::parents[] = {0};
const int LunaTraits< btTransformDoubleData >::hash = 10173309;
const int LunaTraits< btTransformDoubleData >::uniqueIDs[] = {10173309,0};

luna_RegType LunaTraits< btTransformDoubleData >::methods[] = {
	{"getBasis", &luna_wrapper_btTransformDoubleData::_bind_getBasis},
	{"getOrigin", &luna_wrapper_btTransformDoubleData::_bind_getOrigin},
	{"setBasis", &luna_wrapper_btTransformDoubleData::_bind_setBasis},
	{"setOrigin", &luna_wrapper_btTransformDoubleData::_bind_setOrigin},
	{"dynCast", &luna_wrapper_btTransformDoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btTransformDoubleData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btTransformDoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTransformDoubleData >::enumValues[] = {
	{0,0}
};


