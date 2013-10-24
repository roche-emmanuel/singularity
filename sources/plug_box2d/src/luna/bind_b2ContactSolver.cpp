#include <plug_common.h>

class luna_wrapper_b2ContactSolver {
public:
	typedef Luna< b2ContactSolver > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85192508) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactSolver*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2ContactSolver* rhs =(Luna< b2ContactSolver >::check(L,2));
		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2ContactSolver* self= (b2ContactSolver*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2ContactSolver >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85192508) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ContactSolver");
		
		return luna_dynamicCast(L,converters,"b2ContactSolver",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,69667931)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_InitializeVelocityConstraints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WarmStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SolveVelocityConstraints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StoreImpulses(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SolvePositionConstraints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SolveTOIPositionConstraints(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPositions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVelocities(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllocator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPositionConstraints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVelocityConstraints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28832978) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPositions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,79848895)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVelocities(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85114450)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllocator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83926873)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPositionConstraints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,38983117)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVelocityConstraints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,22596938)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2ContactSolver::b2ContactSolver(b2ContactSolverDef * def)
	static b2ContactSolver* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in b2ContactSolver::b2ContactSolver(b2ContactSolverDef * def) function, expected prototype:\nb2ContactSolver::b2ContactSolver(b2ContactSolverDef * def)\nClass arguments details:\narg 1 ID = 69667931\n\n%s",luna_dumpStack(L).c_str());
		}

		b2ContactSolverDef* def=(Luna< b2ContactSolverDef >::check(L,1));

		return new b2ContactSolver(def);
	}


	// Function binds:
	// void b2ContactSolver::InitializeVelocityConstraints()
	static int _bind_InitializeVelocityConstraints(lua_State *L) {
		if (!_lg_typecheck_InitializeVelocityConstraints(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactSolver::InitializeVelocityConstraints() function, expected prototype:\nvoid b2ContactSolver::InitializeVelocityConstraints()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactSolver::InitializeVelocityConstraints(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InitializeVelocityConstraints();

		return 0;
	}

	// void b2ContactSolver::WarmStart()
	static int _bind_WarmStart(lua_State *L) {
		if (!_lg_typecheck_WarmStart(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactSolver::WarmStart() function, expected prototype:\nvoid b2ContactSolver::WarmStart()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactSolver::WarmStart(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WarmStart();

		return 0;
	}

	// void b2ContactSolver::SolveVelocityConstraints()
	static int _bind_SolveVelocityConstraints(lua_State *L) {
		if (!_lg_typecheck_SolveVelocityConstraints(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactSolver::SolveVelocityConstraints() function, expected prototype:\nvoid b2ContactSolver::SolveVelocityConstraints()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactSolver::SolveVelocityConstraints(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SolveVelocityConstraints();

		return 0;
	}

	// void b2ContactSolver::StoreImpulses()
	static int _bind_StoreImpulses(lua_State *L) {
		if (!_lg_typecheck_StoreImpulses(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactSolver::StoreImpulses() function, expected prototype:\nvoid b2ContactSolver::StoreImpulses()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactSolver::StoreImpulses(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StoreImpulses();

		return 0;
	}

	// bool b2ContactSolver::SolvePositionConstraints()
	static int _bind_SolvePositionConstraints(lua_State *L) {
		if (!_lg_typecheck_SolvePositionConstraints(L)) {
			luaL_error(L, "luna typecheck failed in bool b2ContactSolver::SolvePositionConstraints() function, expected prototype:\nbool b2ContactSolver::SolvePositionConstraints()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2ContactSolver::SolvePositionConstraints(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SolvePositionConstraints();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2ContactSolver::SolveTOIPositionConstraints(signed int toiIndexA, signed int toiIndexB)
	static int _bind_SolveTOIPositionConstraints(lua_State *L) {
		if (!_lg_typecheck_SolveTOIPositionConstraints(L)) {
			luaL_error(L, "luna typecheck failed in bool b2ContactSolver::SolveTOIPositionConstraints(signed int toiIndexA, signed int toiIndexB) function, expected prototype:\nbool b2ContactSolver::SolveTOIPositionConstraints(signed int toiIndexA, signed int toiIndexB)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed int toiIndexA=(signed int)lua_tointeger(L,2);
		signed int toiIndexB=(signed int)lua_tointeger(L,3);

		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2ContactSolver::SolveTOIPositionConstraints(signed int, signed int). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SolveTOIPositionConstraints(toiIndexA, toiIndexB);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// b2TimeStep b2ContactSolver::m_step()
	static int _bind_getStep(lua_State *L) {
		if (!_lg_typecheck_getStep(L)) {
			luaL_error(L, "luna typecheck failed in b2TimeStep b2ContactSolver::m_step() function, expected prototype:\nb2TimeStep b2ContactSolver::m_step()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2TimeStep b2ContactSolver::m_step(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2TimeStep* lret = &self->m_step;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2TimeStep >::push(L,lret,false);

		return 1;
	}

	// b2Position * b2ContactSolver::m_positions()
	static int _bind_getPositions(lua_State *L) {
		if (!_lg_typecheck_getPositions(L)) {
			luaL_error(L, "luna typecheck failed in b2Position * b2ContactSolver::m_positions() function, expected prototype:\nb2Position * b2ContactSolver::m_positions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Position * b2ContactSolver::m_positions(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Position * lret = self->m_positions;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Position >::push(L,lret,false);

		return 1;
	}

	// b2Velocity * b2ContactSolver::m_velocities()
	static int _bind_getVelocities(lua_State *L) {
		if (!_lg_typecheck_getVelocities(L)) {
			luaL_error(L, "luna typecheck failed in b2Velocity * b2ContactSolver::m_velocities() function, expected prototype:\nb2Velocity * b2ContactSolver::m_velocities()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Velocity * b2ContactSolver::m_velocities(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Velocity * lret = self->m_velocities;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Velocity >::push(L,lret,false);

		return 1;
	}

	// b2StackAllocator * b2ContactSolver::m_allocator()
	static int _bind_getAllocator(lua_State *L) {
		if (!_lg_typecheck_getAllocator(L)) {
			luaL_error(L, "luna typecheck failed in b2StackAllocator * b2ContactSolver::m_allocator() function, expected prototype:\nb2StackAllocator * b2ContactSolver::m_allocator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2StackAllocator * b2ContactSolver::m_allocator(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2StackAllocator * lret = self->m_allocator;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2StackAllocator >::push(L,lret,false);

		return 1;
	}

	// b2ContactPositionConstraint * b2ContactSolver::m_positionConstraints()
	static int _bind_getPositionConstraints(lua_State *L) {
		if (!_lg_typecheck_getPositionConstraints(L)) {
			luaL_error(L, "luna typecheck failed in b2ContactPositionConstraint * b2ContactSolver::m_positionConstraints() function, expected prototype:\nb2ContactPositionConstraint * b2ContactSolver::m_positionConstraints()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2ContactPositionConstraint * b2ContactSolver::m_positionConstraints(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2ContactPositionConstraint * lret = self->m_positionConstraints;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2ContactPositionConstraint >::push(L,lret,false);

		return 1;
	}

	// b2ContactVelocityConstraint * b2ContactSolver::m_velocityConstraints()
	static int _bind_getVelocityConstraints(lua_State *L) {
		if (!_lg_typecheck_getVelocityConstraints(L)) {
			luaL_error(L, "luna typecheck failed in b2ContactVelocityConstraint * b2ContactSolver::m_velocityConstraints() function, expected prototype:\nb2ContactVelocityConstraint * b2ContactSolver::m_velocityConstraints()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2ContactVelocityConstraint * b2ContactSolver::m_velocityConstraints(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2ContactVelocityConstraint * lret = self->m_velocityConstraints;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2ContactVelocityConstraint >::push(L,lret,false);

		return 1;
	}

	// int b2ContactSolver::m_count()
	static int _bind_getCount(lua_State *L) {
		if (!_lg_typecheck_getCount(L)) {
			luaL_error(L, "luna typecheck failed in int b2ContactSolver::m_count() function, expected prototype:\nint b2ContactSolver::m_count()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int b2ContactSolver::m_count(). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2ContactSolver::m_step(b2TimeStep value)
	static int _bind_setStep(lua_State *L) {
		if (!_lg_typecheck_setStep(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactSolver::m_step(b2TimeStep value) function, expected prototype:\nvoid b2ContactSolver::m_step(b2TimeStep value)\nClass arguments details:\narg 1 ID = 28832978\n\n%s",luna_dumpStack(L).c_str());
		}

		b2TimeStep* value_ptr=(Luna< b2TimeStep >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2ContactSolver::m_step function");
		}
		b2TimeStep value=*value_ptr;

		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactSolver::m_step(b2TimeStep). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_step = value;

		return 0;
	}

	// void b2ContactSolver::m_positions(b2Position * value)
	static int _bind_setPositions(lua_State *L) {
		if (!_lg_typecheck_setPositions(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactSolver::m_positions(b2Position * value) function, expected prototype:\nvoid b2ContactSolver::m_positions(b2Position * value)\nClass arguments details:\narg 1 ID = 79848895\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Position* value=(Luna< b2Position >::check(L,2));

		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactSolver::m_positions(b2Position *). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_positions = value;

		return 0;
	}

	// void b2ContactSolver::m_velocities(b2Velocity * value)
	static int _bind_setVelocities(lua_State *L) {
		if (!_lg_typecheck_setVelocities(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactSolver::m_velocities(b2Velocity * value) function, expected prototype:\nvoid b2ContactSolver::m_velocities(b2Velocity * value)\nClass arguments details:\narg 1 ID = 85114450\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Velocity* value=(Luna< b2Velocity >::check(L,2));

		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactSolver::m_velocities(b2Velocity *). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_velocities = value;

		return 0;
	}

	// void b2ContactSolver::m_allocator(b2StackAllocator * value)
	static int _bind_setAllocator(lua_State *L) {
		if (!_lg_typecheck_setAllocator(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactSolver::m_allocator(b2StackAllocator * value) function, expected prototype:\nvoid b2ContactSolver::m_allocator(b2StackAllocator * value)\nClass arguments details:\narg 1 ID = 83926873\n\n%s",luna_dumpStack(L).c_str());
		}

		b2StackAllocator* value=(Luna< b2StackAllocator >::check(L,2));

		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactSolver::m_allocator(b2StackAllocator *). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_allocator = value;

		return 0;
	}

	// void b2ContactSolver::m_positionConstraints(b2ContactPositionConstraint * value)
	static int _bind_setPositionConstraints(lua_State *L) {
		if (!_lg_typecheck_setPositionConstraints(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactSolver::m_positionConstraints(b2ContactPositionConstraint * value) function, expected prototype:\nvoid b2ContactSolver::m_positionConstraints(b2ContactPositionConstraint * value)\nClass arguments details:\narg 1 ID = 38983117\n\n%s",luna_dumpStack(L).c_str());
		}

		b2ContactPositionConstraint* value=(Luna< b2ContactPositionConstraint >::check(L,2));

		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactSolver::m_positionConstraints(b2ContactPositionConstraint *). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_positionConstraints = value;

		return 0;
	}

	// void b2ContactSolver::m_velocityConstraints(b2ContactVelocityConstraint * value)
	static int _bind_setVelocityConstraints(lua_State *L) {
		if (!_lg_typecheck_setVelocityConstraints(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactSolver::m_velocityConstraints(b2ContactVelocityConstraint * value) function, expected prototype:\nvoid b2ContactSolver::m_velocityConstraints(b2ContactVelocityConstraint * value)\nClass arguments details:\narg 1 ID = 22596938\n\n%s",luna_dumpStack(L).c_str());
		}

		b2ContactVelocityConstraint* value=(Luna< b2ContactVelocityConstraint >::check(L,2));

		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactSolver::m_velocityConstraints(b2ContactVelocityConstraint *). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_velocityConstraints = value;

		return 0;
	}

	// void b2ContactSolver::m_count(int value)
	static int _bind_setCount(lua_State *L) {
		if (!_lg_typecheck_setCount(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactSolver::m_count(int value) function, expected prototype:\nvoid b2ContactSolver::m_count(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		b2ContactSolver* self=(Luna< b2ContactSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactSolver::m_count(int). Got : '%s'\n%s",typeid(Luna< b2ContactSolver >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_count = value;

		return 0;
	}


	// Operator binds:

};

b2ContactSolver* LunaTraits< b2ContactSolver >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2ContactSolver::_bind_ctor(L);
}

void LunaTraits< b2ContactSolver >::_bind_dtor(b2ContactSolver* obj) {
	delete obj;
}

const char LunaTraits< b2ContactSolver >::className[] = "b2ContactSolver";
const char LunaTraits< b2ContactSolver >::fullName[] = "b2ContactSolver";
const char LunaTraits< b2ContactSolver >::moduleName[] = "box2d";
const char* LunaTraits< b2ContactSolver >::parents[] = {0};
const int LunaTraits< b2ContactSolver >::hash = 85192508;
const int LunaTraits< b2ContactSolver >::uniqueIDs[] = {85192508,0};

luna_RegType LunaTraits< b2ContactSolver >::methods[] = {
	{"InitializeVelocityConstraints", &luna_wrapper_b2ContactSolver::_bind_InitializeVelocityConstraints},
	{"WarmStart", &luna_wrapper_b2ContactSolver::_bind_WarmStart},
	{"SolveVelocityConstraints", &luna_wrapper_b2ContactSolver::_bind_SolveVelocityConstraints},
	{"StoreImpulses", &luna_wrapper_b2ContactSolver::_bind_StoreImpulses},
	{"SolvePositionConstraints", &luna_wrapper_b2ContactSolver::_bind_SolvePositionConstraints},
	{"SolveTOIPositionConstraints", &luna_wrapper_b2ContactSolver::_bind_SolveTOIPositionConstraints},
	{"getStep", &luna_wrapper_b2ContactSolver::_bind_getStep},
	{"getPositions", &luna_wrapper_b2ContactSolver::_bind_getPositions},
	{"getVelocities", &luna_wrapper_b2ContactSolver::_bind_getVelocities},
	{"getAllocator", &luna_wrapper_b2ContactSolver::_bind_getAllocator},
	{"getPositionConstraints", &luna_wrapper_b2ContactSolver::_bind_getPositionConstraints},
	{"getVelocityConstraints", &luna_wrapper_b2ContactSolver::_bind_getVelocityConstraints},
	{"getCount", &luna_wrapper_b2ContactSolver::_bind_getCount},
	{"setStep", &luna_wrapper_b2ContactSolver::_bind_setStep},
	{"setPositions", &luna_wrapper_b2ContactSolver::_bind_setPositions},
	{"setVelocities", &luna_wrapper_b2ContactSolver::_bind_setVelocities},
	{"setAllocator", &luna_wrapper_b2ContactSolver::_bind_setAllocator},
	{"setPositionConstraints", &luna_wrapper_b2ContactSolver::_bind_setPositionConstraints},
	{"setVelocityConstraints", &luna_wrapper_b2ContactSolver::_bind_setVelocityConstraints},
	{"setCount", &luna_wrapper_b2ContactSolver::_bind_setCount},
	{"dynCast", &luna_wrapper_b2ContactSolver::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ContactSolver::_bind___eq},
	{"fromVoid", &luna_wrapper_b2ContactSolver::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2ContactSolver::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactSolver >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactSolver >::enumValues[] = {
	{0,0}
};


