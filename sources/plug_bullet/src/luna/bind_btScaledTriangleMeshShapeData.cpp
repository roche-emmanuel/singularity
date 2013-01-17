#include <plug_common.h>

class luna_wrapper_btScaledTriangleMeshShapeData {
public:
	typedef Luna< btScaledTriangleMeshShapeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52810247) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btScaledTriangleMeshShapeData*)");
		}

		btScaledTriangleMeshShapeData* rhs =(Luna< btScaledTriangleMeshShapeData >::check(L,2));
		btScaledTriangleMeshShapeData* self=(Luna< btScaledTriangleMeshShapeData >::check(L,1));
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

		btScaledTriangleMeshShapeData* self=(Luna< btScaledTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btScaledTriangleMeshShapeData");
		
		return luna_dynamicCast(L,converters,"btScaledTriangleMeshShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_trimeshShapeData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_localScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_trimeshShapeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3729562) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_localScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTriangleMeshShapeData btScaledTriangleMeshShapeData::m_trimeshShapeData()
	static int _bind_getM_trimeshShapeData(lua_State *L) {
		if (!_lg_typecheck_getM_trimeshShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleMeshShapeData btScaledTriangleMeshShapeData::m_trimeshShapeData() function, expected prototype:\nbtTriangleMeshShapeData btScaledTriangleMeshShapeData::m_trimeshShapeData()\nClass arguments details:\n");
		}


		btScaledTriangleMeshShapeData* self=(Luna< btScaledTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTriangleMeshShapeData btScaledTriangleMeshShapeData::m_trimeshShapeData(). Got : '%s'",typeid(Luna< btScaledTriangleMeshShapeData >::check(L,1)).name());
		}
		const btTriangleMeshShapeData* lret = &self->m_trimeshShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTriangleMeshShapeData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btScaledTriangleMeshShapeData::m_localScaling()
	static int _bind_getM_localScaling(lua_State *L) {
		if (!_lg_typecheck_getM_localScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3FloatData btScaledTriangleMeshShapeData::m_localScaling() function, expected prototype:\nbtVector3FloatData btScaledTriangleMeshShapeData::m_localScaling()\nClass arguments details:\n");
		}


		btScaledTriangleMeshShapeData* self=(Luna< btScaledTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3FloatData btScaledTriangleMeshShapeData::m_localScaling(). Got : '%s'",typeid(Luna< btScaledTriangleMeshShapeData >::check(L,1)).name());
		}
		const btVector3FloatData* lret = &self->m_localScaling;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// void btScaledTriangleMeshShapeData::m_trimeshShapeData(btTriangleMeshShapeData value)
	static int _bind_setM_trimeshShapeData(lua_State *L) {
		if (!_lg_typecheck_setM_trimeshShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btScaledTriangleMeshShapeData::m_trimeshShapeData(btTriangleMeshShapeData value) function, expected prototype:\nvoid btScaledTriangleMeshShapeData::m_trimeshShapeData(btTriangleMeshShapeData value)\nClass arguments details:\narg 1 ID = 3729562\n");
		}

		btTriangleMeshShapeData* value_ptr=(Luna< btTriangleMeshShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btScaledTriangleMeshShapeData::m_trimeshShapeData function");
		}
		btTriangleMeshShapeData value=*value_ptr;

		btScaledTriangleMeshShapeData* self=(Luna< btScaledTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btScaledTriangleMeshShapeData::m_trimeshShapeData(btTriangleMeshShapeData). Got : '%s'",typeid(Luna< btScaledTriangleMeshShapeData >::check(L,1)).name());
		}
		self->m_trimeshShapeData = value;

		return 0;
	}

	// void btScaledTriangleMeshShapeData::m_localScaling(btVector3FloatData value)
	static int _bind_setM_localScaling(lua_State *L) {
		if (!_lg_typecheck_setM_localScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btScaledTriangleMeshShapeData::m_localScaling(btVector3FloatData value) function, expected prototype:\nvoid btScaledTriangleMeshShapeData::m_localScaling(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n");
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btScaledTriangleMeshShapeData::m_localScaling function");
		}
		btVector3FloatData value=*value_ptr;

		btScaledTriangleMeshShapeData* self=(Luna< btScaledTriangleMeshShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btScaledTriangleMeshShapeData::m_localScaling(btVector3FloatData). Got : '%s'",typeid(Luna< btScaledTriangleMeshShapeData >::check(L,1)).name());
		}
		self->m_localScaling = value;

		return 0;
	}


	// Operator binds:

};

btScaledTriangleMeshShapeData* LunaTraits< btScaledTriangleMeshShapeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btScaledTriangleMeshShapeData >::_bind_dtor(btScaledTriangleMeshShapeData* obj) {
	delete obj;
}

const char LunaTraits< btScaledTriangleMeshShapeData >::className[] = "btScaledTriangleMeshShapeData";
const char LunaTraits< btScaledTriangleMeshShapeData >::fullName[] = "btScaledTriangleMeshShapeData";
const char LunaTraits< btScaledTriangleMeshShapeData >::moduleName[] = "bullet";
const char* LunaTraits< btScaledTriangleMeshShapeData >::parents[] = {0};
const int LunaTraits< btScaledTriangleMeshShapeData >::hash = 52810247;
const int LunaTraits< btScaledTriangleMeshShapeData >::uniqueIDs[] = {52810247,0};

luna_RegType LunaTraits< btScaledTriangleMeshShapeData >::methods[] = {
	{"getM_trimeshShapeData", &luna_wrapper_btScaledTriangleMeshShapeData::_bind_getM_trimeshShapeData},
	{"getM_localScaling", &luna_wrapper_btScaledTriangleMeshShapeData::_bind_getM_localScaling},
	{"setM_trimeshShapeData", &luna_wrapper_btScaledTriangleMeshShapeData::_bind_setM_trimeshShapeData},
	{"setM_localScaling", &luna_wrapper_btScaledTriangleMeshShapeData::_bind_setM_localScaling},
	{"dynCast", &luna_wrapper_btScaledTriangleMeshShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btScaledTriangleMeshShapeData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btScaledTriangleMeshShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btScaledTriangleMeshShapeData >::enumValues[] = {
	{0,0}
};


