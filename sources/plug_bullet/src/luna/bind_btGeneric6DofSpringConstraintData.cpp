#include <plug_common.h>

class luna_wrapper_btGeneric6DofSpringConstraintData {
public:
	typedef Luna< btGeneric6DofSpringConstraintData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39358732) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGeneric6DofSpringConstraintData*)");
		}

		btGeneric6DofSpringConstraintData* rhs =(Luna< btGeneric6DofSpringConstraintData >::check(L,2));
		btGeneric6DofSpringConstraintData* self=(Luna< btGeneric6DofSpringConstraintData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btGeneric6DofSpringConstraintData* self= (btGeneric6DofSpringConstraintData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGeneric6DofSpringConstraintData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39358732) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btGeneric6DofSpringConstraintData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		btGeneric6DofSpringConstraintData* self=(Luna< btGeneric6DofSpringConstraintData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGeneric6DofSpringConstraintData");
		
		return luna_dynamicCast(L,converters,"btGeneric6DofSpringConstraintData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_get6dofData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set6dofData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56103271) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btGeneric6DofConstraintData btGeneric6DofSpringConstraintData::m_6dofData()
	static int _bind_get6dofData(lua_State *L) {
		if (!_lg_typecheck_get6dofData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGeneric6DofConstraintData btGeneric6DofSpringConstraintData::m_6dofData() function, expected prototype:\nbtGeneric6DofConstraintData btGeneric6DofSpringConstraintData::m_6dofData()\nClass arguments details:\n");
		}


		btGeneric6DofSpringConstraintData* self=(Luna< btGeneric6DofSpringConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btGeneric6DofConstraintData btGeneric6DofSpringConstraintData::m_6dofData(). Got : '%s'",typeid(Luna< btGeneric6DofSpringConstraintData >::check(L,1)).name());
		}
		const btGeneric6DofConstraintData* lret = &self->m_6dofData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGeneric6DofConstraintData >::push(L,lret,false);

		return 1;
	}

	// void btGeneric6DofSpringConstraintData::m_6dofData(btGeneric6DofConstraintData value)
	static int _bind_set6dofData(lua_State *L) {
		if (!_lg_typecheck_set6dofData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraintData::m_6dofData(btGeneric6DofConstraintData value) function, expected prototype:\nvoid btGeneric6DofSpringConstraintData::m_6dofData(btGeneric6DofConstraintData value)\nClass arguments details:\narg 1 ID = 56103271\n");
		}

		btGeneric6DofConstraintData* value_ptr=(Luna< btGeneric6DofConstraintData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGeneric6DofSpringConstraintData::m_6dofData function");
		}
		btGeneric6DofConstraintData value=*value_ptr;

		btGeneric6DofSpringConstraintData* self=(Luna< btGeneric6DofSpringConstraintData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraintData::m_6dofData(btGeneric6DofConstraintData). Got : '%s'",typeid(Luna< btGeneric6DofSpringConstraintData >::check(L,1)).name());
		}
		self->m_6dofData = value;

		return 0;
	}


	// Operator binds:

};

btGeneric6DofSpringConstraintData* LunaTraits< btGeneric6DofSpringConstraintData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btGeneric6DofSpringConstraintData >::_bind_dtor(btGeneric6DofSpringConstraintData* obj) {
	delete obj;
}

const char LunaTraits< btGeneric6DofSpringConstraintData >::className[] = "btGeneric6DofSpringConstraintData";
const char LunaTraits< btGeneric6DofSpringConstraintData >::fullName[] = "btGeneric6DofSpringConstraintData";
const char LunaTraits< btGeneric6DofSpringConstraintData >::moduleName[] = "bullet";
const char* LunaTraits< btGeneric6DofSpringConstraintData >::parents[] = {0};
const int LunaTraits< btGeneric6DofSpringConstraintData >::hash = 39358732;
const int LunaTraits< btGeneric6DofSpringConstraintData >::uniqueIDs[] = {39358732,0};

luna_RegType LunaTraits< btGeneric6DofSpringConstraintData >::methods[] = {
	{"get6dofData", &luna_wrapper_btGeneric6DofSpringConstraintData::_bind_get6dofData},
	{"set6dofData", &luna_wrapper_btGeneric6DofSpringConstraintData::_bind_set6dofData},
	{"dynCast", &luna_wrapper_btGeneric6DofSpringConstraintData::_bind_dynCast},
	{"__eq", &luna_wrapper_btGeneric6DofSpringConstraintData::_bind___eq},
	{"fromVoid", &luna_wrapper_btGeneric6DofSpringConstraintData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGeneric6DofSpringConstraintData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btGeneric6DofSpringConstraintData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGeneric6DofSpringConstraintData >::enumValues[] = {
	{0,0}
};


