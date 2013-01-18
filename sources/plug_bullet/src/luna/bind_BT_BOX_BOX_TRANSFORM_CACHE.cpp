#include <plug_common.h>

class luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE {
public:
	typedef Luna< BT_BOX_BOX_TRANSFORM_CACHE > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92922844) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(BT_BOX_BOX_TRANSFORM_CACHE*)");
		}

		BT_BOX_BOX_TRANSFORM_CACHE* rhs =(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,2));
		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
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

		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("BT_BOX_BOX_TRANSFORM_CACHE");
		
		return luna_dynamicCast(L,converters,"BT_BOX_BOX_TRANSFORM_CACHE",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_calc_absolute_matrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calc_from_homogenic(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calc_from_full_invert(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getT1to0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getR1to0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setT1to0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setR1to0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// BT_BOX_BOX_TRANSFORM_CACHE::BT_BOX_BOX_TRANSFORM_CACHE()
	static BT_BOX_BOX_TRANSFORM_CACHE* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in BT_BOX_BOX_TRANSFORM_CACHE::BT_BOX_BOX_TRANSFORM_CACHE() function, expected prototype:\nBT_BOX_BOX_TRANSFORM_CACHE::BT_BOX_BOX_TRANSFORM_CACHE()\nClass arguments details:\n");
		}


		return new BT_BOX_BOX_TRANSFORM_CACHE();
	}


	// Function binds:
	// void BT_BOX_BOX_TRANSFORM_CACHE::calc_absolute_matrix()
	static int _bind_calc_absolute_matrix(lua_State *L) {
		if (!_lg_typecheck_calc_absolute_matrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void BT_BOX_BOX_TRANSFORM_CACHE::calc_absolute_matrix() function, expected prototype:\nvoid BT_BOX_BOX_TRANSFORM_CACHE::calc_absolute_matrix()\nClass arguments details:\n");
		}


		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void BT_BOX_BOX_TRANSFORM_CACHE::calc_absolute_matrix(). Got : '%s'",typeid(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1)).name());
		}
		self->calc_absolute_matrix();

		return 0;
	}

	// void BT_BOX_BOX_TRANSFORM_CACHE::calc_from_homogenic(const btTransform & trans0, const btTransform & trans1)
	static int _bind_calc_from_homogenic(lua_State *L) {
		if (!_lg_typecheck_calc_from_homogenic(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void BT_BOX_BOX_TRANSFORM_CACHE::calc_from_homogenic(const btTransform & trans0, const btTransform & trans1) function, expected prototype:\nvoid BT_BOX_BOX_TRANSFORM_CACHE::calc_from_homogenic(const btTransform & trans0, const btTransform & trans1)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* trans0_ptr=(Luna< btTransform >::check(L,2));
		if( !trans0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans0 in BT_BOX_BOX_TRANSFORM_CACHE::calc_from_homogenic function");
		}
		const btTransform & trans0=*trans0_ptr;
		const btTransform* trans1_ptr=(Luna< btTransform >::check(L,3));
		if( !trans1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans1 in BT_BOX_BOX_TRANSFORM_CACHE::calc_from_homogenic function");
		}
		const btTransform & trans1=*trans1_ptr;

		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void BT_BOX_BOX_TRANSFORM_CACHE::calc_from_homogenic(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1)).name());
		}
		self->calc_from_homogenic(trans0, trans1);

		return 0;
	}

	// void BT_BOX_BOX_TRANSFORM_CACHE::calc_from_full_invert(const btTransform & trans0, const btTransform & trans1)
	static int _bind_calc_from_full_invert(lua_State *L) {
		if (!_lg_typecheck_calc_from_full_invert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void BT_BOX_BOX_TRANSFORM_CACHE::calc_from_full_invert(const btTransform & trans0, const btTransform & trans1) function, expected prototype:\nvoid BT_BOX_BOX_TRANSFORM_CACHE::calc_from_full_invert(const btTransform & trans0, const btTransform & trans1)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* trans0_ptr=(Luna< btTransform >::check(L,2));
		if( !trans0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans0 in BT_BOX_BOX_TRANSFORM_CACHE::calc_from_full_invert function");
		}
		const btTransform & trans0=*trans0_ptr;
		const btTransform* trans1_ptr=(Luna< btTransform >::check(L,3));
		if( !trans1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans1 in BT_BOX_BOX_TRANSFORM_CACHE::calc_from_full_invert function");
		}
		const btTransform & trans1=*trans1_ptr;

		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void BT_BOX_BOX_TRANSFORM_CACHE::calc_from_full_invert(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1)).name());
		}
		self->calc_from_full_invert(trans0, trans1);

		return 0;
	}

	// btVector3 BT_BOX_BOX_TRANSFORM_CACHE::transform(const btVector3 & point) const
	static int _bind_transform(lua_State *L) {
		if (!_lg_typecheck_transform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 BT_BOX_BOX_TRANSFORM_CACHE::transform(const btVector3 & point) const function, expected prototype:\nbtVector3 BT_BOX_BOX_TRANSFORM_CACHE::transform(const btVector3 & point) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* point_ptr=(Luna< btVector3 >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in BT_BOX_BOX_TRANSFORM_CACHE::transform function");
		}
		const btVector3 & point=*point_ptr;

		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 BT_BOX_BOX_TRANSFORM_CACHE::transform(const btVector3 &) const. Got : '%s'",typeid(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1)).name());
		}
		btVector3 stack_lret = self->transform(point);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 BT_BOX_BOX_TRANSFORM_CACHE::m_T1to0()
	static int _bind_getT1to0(lua_State *L) {
		if (!_lg_typecheck_getT1to0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 BT_BOX_BOX_TRANSFORM_CACHE::m_T1to0() function, expected prototype:\nbtVector3 BT_BOX_BOX_TRANSFORM_CACHE::m_T1to0()\nClass arguments details:\n");
		}


		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 BT_BOX_BOX_TRANSFORM_CACHE::m_T1to0(). Got : '%s'",typeid(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_T1to0;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btMatrix3x3 BT_BOX_BOX_TRANSFORM_CACHE::m_R1to0()
	static int _bind_getR1to0(lua_State *L) {
		if (!_lg_typecheck_getR1to0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 BT_BOX_BOX_TRANSFORM_CACHE::m_R1to0() function, expected prototype:\nbtMatrix3x3 BT_BOX_BOX_TRANSFORM_CACHE::m_R1to0()\nClass arguments details:\n");
		}


		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 BT_BOX_BOX_TRANSFORM_CACHE::m_R1to0(). Got : '%s'",typeid(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1)).name());
		}
		const btMatrix3x3* lret = &self->m_R1to0;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,false);

		return 1;
	}

	// btMatrix3x3 BT_BOX_BOX_TRANSFORM_CACHE::m_AR()
	static int _bind_getAR(lua_State *L) {
		if (!_lg_typecheck_getAR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 BT_BOX_BOX_TRANSFORM_CACHE::m_AR() function, expected prototype:\nbtMatrix3x3 BT_BOX_BOX_TRANSFORM_CACHE::m_AR()\nClass arguments details:\n");
		}


		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 BT_BOX_BOX_TRANSFORM_CACHE::m_AR(). Got : '%s'",typeid(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1)).name());
		}
		const btMatrix3x3* lret = &self->m_AR;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,false);

		return 1;
	}

	// void BT_BOX_BOX_TRANSFORM_CACHE::m_T1to0(btVector3 value)
	static int _bind_setT1to0(lua_State *L) {
		if (!_lg_typecheck_setT1to0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void BT_BOX_BOX_TRANSFORM_CACHE::m_T1to0(btVector3 value) function, expected prototype:\nvoid BT_BOX_BOX_TRANSFORM_CACHE::m_T1to0(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in BT_BOX_BOX_TRANSFORM_CACHE::m_T1to0 function");
		}
		btVector3 value=*value_ptr;

		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void BT_BOX_BOX_TRANSFORM_CACHE::m_T1to0(btVector3). Got : '%s'",typeid(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1)).name());
		}
		self->m_T1to0 = value;

		return 0;
	}

	// void BT_BOX_BOX_TRANSFORM_CACHE::m_R1to0(btMatrix3x3 value)
	static int _bind_setR1to0(lua_State *L) {
		if (!_lg_typecheck_setR1to0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void BT_BOX_BOX_TRANSFORM_CACHE::m_R1to0(btMatrix3x3 value) function, expected prototype:\nvoid BT_BOX_BOX_TRANSFORM_CACHE::m_R1to0(btMatrix3x3 value)\nClass arguments details:\narg 1 ID = 30394543\n");
		}

		btMatrix3x3* value_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in BT_BOX_BOX_TRANSFORM_CACHE::m_R1to0 function");
		}
		btMatrix3x3 value=*value_ptr;

		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void BT_BOX_BOX_TRANSFORM_CACHE::m_R1to0(btMatrix3x3). Got : '%s'",typeid(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1)).name());
		}
		self->m_R1to0 = value;

		return 0;
	}

	// void BT_BOX_BOX_TRANSFORM_CACHE::m_AR(btMatrix3x3 value)
	static int _bind_setAR(lua_State *L) {
		if (!_lg_typecheck_setAR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void BT_BOX_BOX_TRANSFORM_CACHE::m_AR(btMatrix3x3 value) function, expected prototype:\nvoid BT_BOX_BOX_TRANSFORM_CACHE::m_AR(btMatrix3x3 value)\nClass arguments details:\narg 1 ID = 30394543\n");
		}

		btMatrix3x3* value_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in BT_BOX_BOX_TRANSFORM_CACHE::m_AR function");
		}
		btMatrix3x3 value=*value_ptr;

		BT_BOX_BOX_TRANSFORM_CACHE* self=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void BT_BOX_BOX_TRANSFORM_CACHE::m_AR(btMatrix3x3). Got : '%s'",typeid(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,1)).name());
		}
		self->m_AR = value;

		return 0;
	}


	// Operator binds:

};

BT_BOX_BOX_TRANSFORM_CACHE* LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE >::_bind_ctor(lua_State *L) {
	return luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_ctor(L);
}

void LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE >::_bind_dtor(BT_BOX_BOX_TRANSFORM_CACHE* obj) {
	delete obj;
}

const char LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE >::className[] = "BT_BOX_BOX_TRANSFORM_CACHE";
const char LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE >::fullName[] = "BT_BOX_BOX_TRANSFORM_CACHE";
const char LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE >::moduleName[] = "bullet";
const char* LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE >::parents[] = {0};
const int LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE >::hash = 92922844;
const int LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE >::uniqueIDs[] = {92922844,0};

luna_RegType LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE >::methods[] = {
	{"calc_absolute_matrix", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_calc_absolute_matrix},
	{"calc_from_homogenic", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_calc_from_homogenic},
	{"calc_from_full_invert", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_calc_from_full_invert},
	{"transform", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_transform},
	{"getT1to0", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_getT1to0},
	{"getR1to0", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_getR1to0},
	{"getAR", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_getAR},
	{"setT1to0", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_setT1to0},
	{"setR1to0", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_setR1to0},
	{"setAR", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_setAR},
	{"dynCast", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind_dynCast},
	{"__eq", &luna_wrapper_BT_BOX_BOX_TRANSFORM_CACHE::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< BT_BOX_BOX_TRANSFORM_CACHE >::enumValues[] = {
	{0,0}
};


