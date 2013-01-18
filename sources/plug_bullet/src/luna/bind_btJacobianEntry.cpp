#include <plug_common.h>

class luna_wrapper_btJacobianEntry {
public:
	typedef Luna< btJacobianEntry > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49949186) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btJacobianEntry*)");
		}

		btJacobianEntry* rhs =(Luna< btJacobianEntry >::check(L,2));
		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
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

		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btJacobianEntry");
		
		return luna_dynamicCast(L,converters,"btJacobianEntry",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30394543) ) return false;
		if( (!(Luna< btMatrix3x3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		if( (!(Luna< btMatrix3x3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,6))) ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,8))) ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		if( (!(Luna< btMatrix3x3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,30394543) ) return false;
		if( (!(Luna< btMatrix3x3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30394543) ) return false;
		if( (!(Luna< btMatrix3x3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getDiagonal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNonDiagonal_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,49949186) ) return false;
		if( (!(Luna< btJacobianEntry >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNonDiagonal_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,49949186) ) return false;
		if( (!(Luna< btJacobianEntry >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRelativeVelocity(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLinearJointAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAJ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBJ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get0MinvJt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get1MinvJt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAdiag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLinearJointAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAJ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBJ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set0MinvJt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set1MinvJt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdiag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btJacobianEntry::btJacobianEntry()
	static btJacobianEntry* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btJacobianEntry::btJacobianEntry() function, expected prototype:\nbtJacobianEntry::btJacobianEntry()\nClass arguments details:\n");
		}


		return new btJacobianEntry();
	}

	// btJacobianEntry::btJacobianEntry(const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & rel_pos1, const btVector3 & rel_pos2, const btVector3 & jointAxis, const btVector3 & inertiaInvA, const float massInvA, const btVector3 & inertiaInvB, const float massInvB)
	static btJacobianEntry* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btJacobianEntry::btJacobianEntry(const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & rel_pos1, const btVector3 & rel_pos2, const btVector3 & jointAxis, const btVector3 & inertiaInvA, const float massInvA, const btVector3 & inertiaInvB, const float massInvB) function, expected prototype:\nbtJacobianEntry::btJacobianEntry(const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & rel_pos1, const btVector3 & rel_pos2, const btVector3 & jointAxis, const btVector3 & inertiaInvA, const float massInvA, const btVector3 & inertiaInvB, const float massInvB)\nClass arguments details:\narg 1 ID = 30394543\narg 2 ID = 30394543\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\narg 8 ID = 91544891\n");
		}

		const btMatrix3x3* world2A_ptr=(Luna< btMatrix3x3 >::check(L,1));
		if( !world2A_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg world2A in btJacobianEntry::btJacobianEntry function");
		}
		const btMatrix3x3 & world2A=*world2A_ptr;
		const btMatrix3x3* world2B_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !world2B_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg world2B in btJacobianEntry::btJacobianEntry function");
		}
		const btMatrix3x3 & world2B=*world2B_ptr;
		const btVector3* rel_pos1_ptr=(Luna< btVector3 >::check(L,3));
		if( !rel_pos1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos1 in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & rel_pos1=*rel_pos1_ptr;
		const btVector3* rel_pos2_ptr=(Luna< btVector3 >::check(L,4));
		if( !rel_pos2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos2 in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & rel_pos2=*rel_pos2_ptr;
		const btVector3* jointAxis_ptr=(Luna< btVector3 >::check(L,5));
		if( !jointAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jointAxis in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & jointAxis=*jointAxis_ptr;
		const btVector3* inertiaInvA_ptr=(Luna< btVector3 >::check(L,6));
		if( !inertiaInvA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertiaInvA in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & inertiaInvA=*inertiaInvA_ptr;
		float massInvA=(float)lua_tonumber(L,7);
		const btVector3* inertiaInvB_ptr=(Luna< btVector3 >::check(L,8));
		if( !inertiaInvB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertiaInvB in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & inertiaInvB=*inertiaInvB_ptr;
		float massInvB=(float)lua_tonumber(L,9);

		return new btJacobianEntry(world2A, world2B, rel_pos1, rel_pos2, jointAxis, inertiaInvA, massInvA, inertiaInvB, massInvB);
	}

	// btJacobianEntry::btJacobianEntry(const btVector3 & jointAxis, const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & inertiaInvA, const btVector3 & inertiaInvB)
	static btJacobianEntry* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btJacobianEntry::btJacobianEntry(const btVector3 & jointAxis, const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & inertiaInvA, const btVector3 & inertiaInvB) function, expected prototype:\nbtJacobianEntry::btJacobianEntry(const btVector3 & jointAxis, const btMatrix3x3 & world2A, const btMatrix3x3 & world2B, const btVector3 & inertiaInvA, const btVector3 & inertiaInvB)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 30394543\narg 3 ID = 30394543\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		const btVector3* jointAxis_ptr=(Luna< btVector3 >::check(L,1));
		if( !jointAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jointAxis in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & jointAxis=*jointAxis_ptr;
		const btMatrix3x3* world2A_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !world2A_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg world2A in btJacobianEntry::btJacobianEntry function");
		}
		const btMatrix3x3 & world2A=*world2A_ptr;
		const btMatrix3x3* world2B_ptr=(Luna< btMatrix3x3 >::check(L,3));
		if( !world2B_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg world2B in btJacobianEntry::btJacobianEntry function");
		}
		const btMatrix3x3 & world2B=*world2B_ptr;
		const btVector3* inertiaInvA_ptr=(Luna< btVector3 >::check(L,4));
		if( !inertiaInvA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertiaInvA in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & inertiaInvA=*inertiaInvA_ptr;
		const btVector3* inertiaInvB_ptr=(Luna< btVector3 >::check(L,5));
		if( !inertiaInvB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertiaInvB in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & inertiaInvB=*inertiaInvB_ptr;

		return new btJacobianEntry(jointAxis, world2A, world2B, inertiaInvA, inertiaInvB);
	}

	// btJacobianEntry::btJacobianEntry(const btVector3 & axisInA, const btVector3 & axisInB, const btVector3 & inertiaInvA, const btVector3 & inertiaInvB)
	static btJacobianEntry* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btJacobianEntry::btJacobianEntry(const btVector3 & axisInA, const btVector3 & axisInB, const btVector3 & inertiaInvA, const btVector3 & inertiaInvB) function, expected prototype:\nbtJacobianEntry::btJacobianEntry(const btVector3 & axisInA, const btVector3 & axisInB, const btVector3 & inertiaInvA, const btVector3 & inertiaInvB)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btVector3* axisInA_ptr=(Luna< btVector3 >::check(L,1));
		if( !axisInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInA in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & axisInA=*axisInA_ptr;
		const btVector3* axisInB_ptr=(Luna< btVector3 >::check(L,2));
		if( !axisInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInB in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & axisInB=*axisInB_ptr;
		const btVector3* inertiaInvA_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertiaInvA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertiaInvA in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & inertiaInvA=*inertiaInvA_ptr;
		const btVector3* inertiaInvB_ptr=(Luna< btVector3 >::check(L,4));
		if( !inertiaInvB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertiaInvB in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & inertiaInvB=*inertiaInvB_ptr;

		return new btJacobianEntry(axisInA, axisInB, inertiaInvA, inertiaInvB);
	}

	// btJacobianEntry::btJacobianEntry(const btMatrix3x3 & world2A, const btVector3 & rel_pos1, const btVector3 & rel_pos2, const btVector3 & jointAxis, const btVector3 & inertiaInvA, const float massInvA)
	static btJacobianEntry* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btJacobianEntry::btJacobianEntry(const btMatrix3x3 & world2A, const btVector3 & rel_pos1, const btVector3 & rel_pos2, const btVector3 & jointAxis, const btVector3 & inertiaInvA, const float massInvA) function, expected prototype:\nbtJacobianEntry::btJacobianEntry(const btMatrix3x3 & world2A, const btVector3 & rel_pos1, const btVector3 & rel_pos2, const btVector3 & jointAxis, const btVector3 & inertiaInvA, const float massInvA)\nClass arguments details:\narg 1 ID = 30394543\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		const btMatrix3x3* world2A_ptr=(Luna< btMatrix3x3 >::check(L,1));
		if( !world2A_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg world2A in btJacobianEntry::btJacobianEntry function");
		}
		const btMatrix3x3 & world2A=*world2A_ptr;
		const btVector3* rel_pos1_ptr=(Luna< btVector3 >::check(L,2));
		if( !rel_pos1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos1 in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & rel_pos1=*rel_pos1_ptr;
		const btVector3* rel_pos2_ptr=(Luna< btVector3 >::check(L,3));
		if( !rel_pos2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos2 in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & rel_pos2=*rel_pos2_ptr;
		const btVector3* jointAxis_ptr=(Luna< btVector3 >::check(L,4));
		if( !jointAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jointAxis in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & jointAxis=*jointAxis_ptr;
		const btVector3* inertiaInvA_ptr=(Luna< btVector3 >::check(L,5));
		if( !inertiaInvA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertiaInvA in btJacobianEntry::btJacobianEntry function");
		}
		const btVector3 & inertiaInvA=*inertiaInvA_ptr;
		float massInvA=(float)lua_tonumber(L,6);

		return new btJacobianEntry(world2A, rel_pos1, rel_pos2, jointAxis, inertiaInvA, massInvA);
	}

	// Overload binder for btJacobianEntry::btJacobianEntry
	static btJacobianEntry* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function btJacobianEntry, cannot match any of the overloads for function btJacobianEntry:\n  btJacobianEntry()\n  btJacobianEntry(const btMatrix3x3 &, const btMatrix3x3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const float, const btVector3 &, const float)\n  btJacobianEntry(const btVector3 &, const btMatrix3x3 &, const btMatrix3x3 &, const btVector3 &, const btVector3 &)\n  btJacobianEntry(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &)\n  btJacobianEntry(const btMatrix3x3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const float)\n");
		return NULL;
	}


	// Function binds:
	// float btJacobianEntry::getDiagonal() const
	static int _bind_getDiagonal(lua_State *L) {
		if (!_lg_typecheck_getDiagonal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btJacobianEntry::getDiagonal() const function, expected prototype:\nfloat btJacobianEntry::getDiagonal() const\nClass arguments details:\n");
		}


		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btJacobianEntry::getDiagonal() const. Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		float lret = self->getDiagonal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btJacobianEntry::getNonDiagonal(const btJacobianEntry & jacB, const float massInvA) const
	static int _bind_getNonDiagonal_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNonDiagonal_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btJacobianEntry::getNonDiagonal(const btJacobianEntry & jacB, const float massInvA) const function, expected prototype:\nfloat btJacobianEntry::getNonDiagonal(const btJacobianEntry & jacB, const float massInvA) const\nClass arguments details:\narg 1 ID = 49949186\n");
		}

		const btJacobianEntry* jacB_ptr=(Luna< btJacobianEntry >::check(L,2));
		if( !jacB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jacB in btJacobianEntry::getNonDiagonal function");
		}
		const btJacobianEntry & jacB=*jacB_ptr;
		float massInvA=(float)lua_tonumber(L,3);

		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btJacobianEntry::getNonDiagonal(const btJacobianEntry &, const float) const. Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		float lret = self->getNonDiagonal(jacB, massInvA);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btJacobianEntry::getNonDiagonal(const btJacobianEntry & jacB, const float massInvA, const float massInvB) const
	static int _bind_getNonDiagonal_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNonDiagonal_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btJacobianEntry::getNonDiagonal(const btJacobianEntry & jacB, const float massInvA, const float massInvB) const function, expected prototype:\nfloat btJacobianEntry::getNonDiagonal(const btJacobianEntry & jacB, const float massInvA, const float massInvB) const\nClass arguments details:\narg 1 ID = 49949186\n");
		}

		const btJacobianEntry* jacB_ptr=(Luna< btJacobianEntry >::check(L,2));
		if( !jacB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jacB in btJacobianEntry::getNonDiagonal function");
		}
		const btJacobianEntry & jacB=*jacB_ptr;
		float massInvA=(float)lua_tonumber(L,3);
		float massInvB=(float)lua_tonumber(L,4);

		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btJacobianEntry::getNonDiagonal(const btJacobianEntry &, const float, const float) const. Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		float lret = self->getNonDiagonal(jacB, massInvA, massInvB);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for btJacobianEntry::getNonDiagonal
	static int _bind_getNonDiagonal(lua_State *L) {
		if (_lg_typecheck_getNonDiagonal_overload_1(L)) return _bind_getNonDiagonal_overload_1(L);
		if (_lg_typecheck_getNonDiagonal_overload_2(L)) return _bind_getNonDiagonal_overload_2(L);

		luaL_error(L, "error in function getNonDiagonal, cannot match any of the overloads for function getNonDiagonal:\n  getNonDiagonal(const btJacobianEntry &, const float)\n  getNonDiagonal(const btJacobianEntry &, const float, const float)\n");
		return 0;
	}

	// float btJacobianEntry::getRelativeVelocity(const btVector3 & linvelA, const btVector3 & angvelA, const btVector3 & linvelB, const btVector3 & angvelB)
	static int _bind_getRelativeVelocity(lua_State *L) {
		if (!_lg_typecheck_getRelativeVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btJacobianEntry::getRelativeVelocity(const btVector3 & linvelA, const btVector3 & angvelA, const btVector3 & linvelB, const btVector3 & angvelB) function, expected prototype:\nfloat btJacobianEntry::getRelativeVelocity(const btVector3 & linvelA, const btVector3 & angvelA, const btVector3 & linvelB, const btVector3 & angvelB)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btVector3* linvelA_ptr=(Luna< btVector3 >::check(L,2));
		if( !linvelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linvelA in btJacobianEntry::getRelativeVelocity function");
		}
		const btVector3 & linvelA=*linvelA_ptr;
		const btVector3* angvelA_ptr=(Luna< btVector3 >::check(L,3));
		if( !angvelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angvelA in btJacobianEntry::getRelativeVelocity function");
		}
		const btVector3 & angvelA=*angvelA_ptr;
		const btVector3* linvelB_ptr=(Luna< btVector3 >::check(L,4));
		if( !linvelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linvelB in btJacobianEntry::getRelativeVelocity function");
		}
		const btVector3 & linvelB=*linvelB_ptr;
		const btVector3* angvelB_ptr=(Luna< btVector3 >::check(L,5));
		if( !angvelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angvelB in btJacobianEntry::getRelativeVelocity function");
		}
		const btVector3 & angvelB=*angvelB_ptr;

		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btJacobianEntry::getRelativeVelocity(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		float lret = self->getRelativeVelocity(linvelA, angvelA, linvelB, angvelB);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btJacobianEntry::m_linearJointAxis()
	static int _bind_getLinearJointAxis(lua_State *L) {
		if (!_lg_typecheck_getLinearJointAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btJacobianEntry::m_linearJointAxis() function, expected prototype:\nbtVector3 btJacobianEntry::m_linearJointAxis()\nClass arguments details:\n");
		}


		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btJacobianEntry::m_linearJointAxis(). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_linearJointAxis;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btJacobianEntry::m_aJ()
	static int _bind_getAJ(lua_State *L) {
		if (!_lg_typecheck_getAJ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btJacobianEntry::m_aJ() function, expected prototype:\nbtVector3 btJacobianEntry::m_aJ()\nClass arguments details:\n");
		}


		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btJacobianEntry::m_aJ(). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_aJ;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btJacobianEntry::m_bJ()
	static int _bind_getBJ(lua_State *L) {
		if (!_lg_typecheck_getBJ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btJacobianEntry::m_bJ() function, expected prototype:\nbtVector3 btJacobianEntry::m_bJ()\nClass arguments details:\n");
		}


		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btJacobianEntry::m_bJ(). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_bJ;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btJacobianEntry::m_0MinvJt()
	static int _bind_get0MinvJt(lua_State *L) {
		if (!_lg_typecheck_get0MinvJt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btJacobianEntry::m_0MinvJt() function, expected prototype:\nbtVector3 btJacobianEntry::m_0MinvJt()\nClass arguments details:\n");
		}


		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btJacobianEntry::m_0MinvJt(). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_0MinvJt;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btJacobianEntry::m_1MinvJt()
	static int _bind_get1MinvJt(lua_State *L) {
		if (!_lg_typecheck_get1MinvJt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btJacobianEntry::m_1MinvJt() function, expected prototype:\nbtVector3 btJacobianEntry::m_1MinvJt()\nClass arguments details:\n");
		}


		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btJacobianEntry::m_1MinvJt(). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_1MinvJt;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btJacobianEntry::m_Adiag()
	static int _bind_getAdiag(lua_State *L) {
		if (!_lg_typecheck_getAdiag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btJacobianEntry::m_Adiag() function, expected prototype:\nfloat btJacobianEntry::m_Adiag()\nClass arguments details:\n");
		}


		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btJacobianEntry::m_Adiag(). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		float lret = self->m_Adiag;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btJacobianEntry::m_linearJointAxis(btVector3 value)
	static int _bind_setLinearJointAxis(lua_State *L) {
		if (!_lg_typecheck_setLinearJointAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btJacobianEntry::m_linearJointAxis(btVector3 value) function, expected prototype:\nvoid btJacobianEntry::m_linearJointAxis(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btJacobianEntry::m_linearJointAxis function");
		}
		btVector3 value=*value_ptr;

		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btJacobianEntry::m_linearJointAxis(btVector3). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		self->m_linearJointAxis = value;

		return 0;
	}

	// void btJacobianEntry::m_aJ(btVector3 value)
	static int _bind_setAJ(lua_State *L) {
		if (!_lg_typecheck_setAJ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btJacobianEntry::m_aJ(btVector3 value) function, expected prototype:\nvoid btJacobianEntry::m_aJ(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btJacobianEntry::m_aJ function");
		}
		btVector3 value=*value_ptr;

		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btJacobianEntry::m_aJ(btVector3). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		self->m_aJ = value;

		return 0;
	}

	// void btJacobianEntry::m_bJ(btVector3 value)
	static int _bind_setBJ(lua_State *L) {
		if (!_lg_typecheck_setBJ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btJacobianEntry::m_bJ(btVector3 value) function, expected prototype:\nvoid btJacobianEntry::m_bJ(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btJacobianEntry::m_bJ function");
		}
		btVector3 value=*value_ptr;

		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btJacobianEntry::m_bJ(btVector3). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		self->m_bJ = value;

		return 0;
	}

	// void btJacobianEntry::m_0MinvJt(btVector3 value)
	static int _bind_set0MinvJt(lua_State *L) {
		if (!_lg_typecheck_set0MinvJt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btJacobianEntry::m_0MinvJt(btVector3 value) function, expected prototype:\nvoid btJacobianEntry::m_0MinvJt(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btJacobianEntry::m_0MinvJt function");
		}
		btVector3 value=*value_ptr;

		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btJacobianEntry::m_0MinvJt(btVector3). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		self->m_0MinvJt = value;

		return 0;
	}

	// void btJacobianEntry::m_1MinvJt(btVector3 value)
	static int _bind_set1MinvJt(lua_State *L) {
		if (!_lg_typecheck_set1MinvJt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btJacobianEntry::m_1MinvJt(btVector3 value) function, expected prototype:\nvoid btJacobianEntry::m_1MinvJt(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btJacobianEntry::m_1MinvJt function");
		}
		btVector3 value=*value_ptr;

		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btJacobianEntry::m_1MinvJt(btVector3). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		self->m_1MinvJt = value;

		return 0;
	}

	// void btJacobianEntry::m_Adiag(float value)
	static int _bind_setAdiag(lua_State *L) {
		if (!_lg_typecheck_setAdiag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btJacobianEntry::m_Adiag(float value) function, expected prototype:\nvoid btJacobianEntry::m_Adiag(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btJacobianEntry* self=(Luna< btJacobianEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btJacobianEntry::m_Adiag(float). Got : '%s'",typeid(Luna< btJacobianEntry >::check(L,1)).name());
		}
		self->m_Adiag = value;

		return 0;
	}


	// Operator binds:

};

btJacobianEntry* LunaTraits< btJacobianEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btJacobianEntry::_bind_ctor(L);
}

void LunaTraits< btJacobianEntry >::_bind_dtor(btJacobianEntry* obj) {
	delete obj;
}

const char LunaTraits< btJacobianEntry >::className[] = "btJacobianEntry";
const char LunaTraits< btJacobianEntry >::fullName[] = "btJacobianEntry";
const char LunaTraits< btJacobianEntry >::moduleName[] = "bullet";
const char* LunaTraits< btJacobianEntry >::parents[] = {0};
const int LunaTraits< btJacobianEntry >::hash = 49949186;
const int LunaTraits< btJacobianEntry >::uniqueIDs[] = {49949186,0};

luna_RegType LunaTraits< btJacobianEntry >::methods[] = {
	{"getDiagonal", &luna_wrapper_btJacobianEntry::_bind_getDiagonal},
	{"getNonDiagonal", &luna_wrapper_btJacobianEntry::_bind_getNonDiagonal},
	{"getRelativeVelocity", &luna_wrapper_btJacobianEntry::_bind_getRelativeVelocity},
	{"getLinearJointAxis", &luna_wrapper_btJacobianEntry::_bind_getLinearJointAxis},
	{"getAJ", &luna_wrapper_btJacobianEntry::_bind_getAJ},
	{"getBJ", &luna_wrapper_btJacobianEntry::_bind_getBJ},
	{"get0MinvJt", &luna_wrapper_btJacobianEntry::_bind_get0MinvJt},
	{"get1MinvJt", &luna_wrapper_btJacobianEntry::_bind_get1MinvJt},
	{"getAdiag", &luna_wrapper_btJacobianEntry::_bind_getAdiag},
	{"setLinearJointAxis", &luna_wrapper_btJacobianEntry::_bind_setLinearJointAxis},
	{"setAJ", &luna_wrapper_btJacobianEntry::_bind_setAJ},
	{"setBJ", &luna_wrapper_btJacobianEntry::_bind_setBJ},
	{"set0MinvJt", &luna_wrapper_btJacobianEntry::_bind_set0MinvJt},
	{"set1MinvJt", &luna_wrapper_btJacobianEntry::_bind_set1MinvJt},
	{"setAdiag", &luna_wrapper_btJacobianEntry::_bind_setAdiag},
	{"dynCast", &luna_wrapper_btJacobianEntry::_bind_dynCast},
	{"__eq", &luna_wrapper_btJacobianEntry::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btJacobianEntry >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btJacobianEntry >::enumValues[] = {
	{0,0}
};


