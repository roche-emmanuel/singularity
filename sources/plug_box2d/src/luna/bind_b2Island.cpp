#include <plug_common.h>

class luna_wrapper_b2Island {
public:
	typedef Luna< b2Island > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10648909) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Island*)");
		}

		b2Island* rhs =(Luna< b2Island >::check(L,2));
		b2Island* self=(Luna< b2Island >::check(L,1));
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

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Island");
		
		return luna_dynamicCast(L,converters,"b2Island",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,83926873)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,55252344)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Solve(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,16927334)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,28832978) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,54494886) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SolveTOI(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28832978) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53908778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< b2Body >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< b2Contact >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78564754)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< b2Joint >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Report(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,22596938)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_allocator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_listener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_positions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_velocities(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_bodyCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_jointCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_bodyCapacity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactCapacity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_jointCapacity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_allocator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83926873)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_listener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55252344)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_positions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,79848895)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_velocities(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85114450)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_bodyCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_jointCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_bodyCapacity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactCapacity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_jointCapacity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2Island::b2Island(signed int bodyCapacity, signed int contactCapacity, signed int jointCapacity, b2StackAllocator * allocator, b2ContactListener * listener)
	static b2Island* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Island::b2Island(signed int bodyCapacity, signed int contactCapacity, signed int jointCapacity, b2StackAllocator * allocator, b2ContactListener * listener) function, expected prototype:\nb2Island::b2Island(signed int bodyCapacity, signed int contactCapacity, signed int jointCapacity, b2StackAllocator * allocator, b2ContactListener * listener)\nClass arguments details:\narg 4 ID = 83926873\narg 5 ID = 55252344\n");
		}

		signed int bodyCapacity=(signed int)lua_tointeger(L,1);
		signed int contactCapacity=(signed int)lua_tointeger(L,2);
		signed int jointCapacity=(signed int)lua_tointeger(L,3);
		b2StackAllocator* allocator=(Luna< b2StackAllocator >::check(L,4));
		b2ContactListener* listener=(Luna< b2ContactListener >::check(L,5));

		return new b2Island(bodyCapacity, contactCapacity, jointCapacity, allocator, listener);
	}


	// Function binds:
	// void b2Island::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::Clear() function, expected prototype:\nvoid b2Island::Clear()\nClass arguments details:\n");
		}


		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::Clear(). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->Clear();

		return 0;
	}

	// void b2Island::Solve(b2Profile * profile, const b2TimeStep & step, const b2Vec2 & gravity, bool allowSleep)
	static int _bind_Solve(lua_State *L) {
		if (!_lg_typecheck_Solve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::Solve(b2Profile * profile, const b2TimeStep & step, const b2Vec2 & gravity, bool allowSleep) function, expected prototype:\nvoid b2Island::Solve(b2Profile * profile, const b2TimeStep & step, const b2Vec2 & gravity, bool allowSleep)\nClass arguments details:\narg 1 ID = 16927334\narg 2 ID = 28832978\narg 3 ID = 54494886\n");
		}

		b2Profile* profile=(Luna< b2Profile >::check(L,2));
		const b2TimeStep* step_ptr=(Luna< b2TimeStep >::check(L,3));
		if( !step_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg step in b2Island::Solve function");
		}
		const b2TimeStep & step=*step_ptr;
		const b2Vec2* gravity_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !gravity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gravity in b2Island::Solve function");
		}
		const b2Vec2 & gravity=*gravity_ptr;
		bool allowSleep=(bool)(lua_toboolean(L,5)==1);

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::Solve(b2Profile *, const b2TimeStep &, const b2Vec2 &, bool). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->Solve(profile, step, gravity, allowSleep);

		return 0;
	}

	// void b2Island::SolveTOI(const b2TimeStep & subStep, signed int toiIndexA, signed int toiIndexB)
	static int _bind_SolveTOI(lua_State *L) {
		if (!_lg_typecheck_SolveTOI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::SolveTOI(const b2TimeStep & subStep, signed int toiIndexA, signed int toiIndexB) function, expected prototype:\nvoid b2Island::SolveTOI(const b2TimeStep & subStep, signed int toiIndexA, signed int toiIndexB)\nClass arguments details:\narg 1 ID = 28832978\n");
		}

		const b2TimeStep* subStep_ptr=(Luna< b2TimeStep >::check(L,2));
		if( !subStep_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg subStep in b2Island::SolveTOI function");
		}
		const b2TimeStep & subStep=*subStep_ptr;
		signed int toiIndexA=(signed int)lua_tointeger(L,3);
		signed int toiIndexB=(signed int)lua_tointeger(L,4);

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::SolveTOI(const b2TimeStep &, signed int, signed int). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->SolveTOI(subStep, toiIndexA, toiIndexB);

		return 0;
	}

	// void b2Island::Add(b2Body * body)
	static int _bind_Add_overload_1(lua_State *L) {
		if (!_lg_typecheck_Add_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::Add(b2Body * body) function, expected prototype:\nvoid b2Island::Add(b2Body * body)\nClass arguments details:\narg 1 ID = 53908778\n");
		}

		b2Body* body=(Luna< b2Body >::check(L,2));

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::Add(b2Body *). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->Add(body);

		return 0;
	}

	// void b2Island::Add(b2Contact * contact)
	static int _bind_Add_overload_2(lua_State *L) {
		if (!_lg_typecheck_Add_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::Add(b2Contact * contact) function, expected prototype:\nvoid b2Island::Add(b2Contact * contact)\nClass arguments details:\narg 1 ID = 92978558\n");
		}

		b2Contact* contact=(Luna< b2Contact >::check(L,2));

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::Add(b2Contact *). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->Add(contact);

		return 0;
	}

	// void b2Island::Add(b2Joint * joint)
	static int _bind_Add_overload_3(lua_State *L) {
		if (!_lg_typecheck_Add_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::Add(b2Joint * joint) function, expected prototype:\nvoid b2Island::Add(b2Joint * joint)\nClass arguments details:\narg 1 ID = 78564754\n");
		}

		b2Joint* joint=(Luna< b2Joint >::check(L,2));

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::Add(b2Joint *). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->Add(joint);

		return 0;
	}

	// Overload binder for b2Island::Add
	static int _bind_Add(lua_State *L) {
		if (_lg_typecheck_Add_overload_1(L)) return _bind_Add_overload_1(L);
		if (_lg_typecheck_Add_overload_2(L)) return _bind_Add_overload_2(L);
		if (_lg_typecheck_Add_overload_3(L)) return _bind_Add_overload_3(L);

		luaL_error(L, "error in function Add, cannot match any of the overloads for function Add:\n  Add(b2Body *)\n  Add(b2Contact *)\n  Add(b2Joint *)\n");
		return 0;
	}

	// void b2Island::Report(const b2ContactVelocityConstraint * constraints)
	static int _bind_Report(lua_State *L) {
		if (!_lg_typecheck_Report(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::Report(const b2ContactVelocityConstraint * constraints) function, expected prototype:\nvoid b2Island::Report(const b2ContactVelocityConstraint * constraints)\nClass arguments details:\narg 1 ID = 22596938\n");
		}

		const b2ContactVelocityConstraint* constraints=(Luna< b2ContactVelocityConstraint >::check(L,2));

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::Report(const b2ContactVelocityConstraint *). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->Report(constraints);

		return 0;
	}

	// b2StackAllocator * b2Island::m_allocator()
	static int _bind_getM_allocator(lua_State *L) {
		if (!_lg_typecheck_getM_allocator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2StackAllocator * b2Island::m_allocator() function, expected prototype:\nb2StackAllocator * b2Island::m_allocator()\nClass arguments details:\n");
		}


		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2StackAllocator * b2Island::m_allocator(). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		b2StackAllocator * lret = self->m_allocator;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2StackAllocator >::push(L,lret,false);

		return 1;
	}

	// b2ContactListener * b2Island::m_listener()
	static int _bind_getM_listener(lua_State *L) {
		if (!_lg_typecheck_getM_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ContactListener * b2Island::m_listener() function, expected prototype:\nb2ContactListener * b2Island::m_listener()\nClass arguments details:\n");
		}


		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2ContactListener * b2Island::m_listener(). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		b2ContactListener * lret = self->m_listener;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2ContactListener >::push(L,lret,false);

		return 1;
	}

	// b2Position * b2Island::m_positions()
	static int _bind_getM_positions(lua_State *L) {
		if (!_lg_typecheck_getM_positions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Position * b2Island::m_positions() function, expected prototype:\nb2Position * b2Island::m_positions()\nClass arguments details:\n");
		}


		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Position * b2Island::m_positions(). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		b2Position * lret = self->m_positions;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Position >::push(L,lret,false);

		return 1;
	}

	// b2Velocity * b2Island::m_velocities()
	static int _bind_getM_velocities(lua_State *L) {
		if (!_lg_typecheck_getM_velocities(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Velocity * b2Island::m_velocities() function, expected prototype:\nb2Velocity * b2Island::m_velocities()\nClass arguments details:\n");
		}


		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Velocity * b2Island::m_velocities(). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		b2Velocity * lret = self->m_velocities;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Velocity >::push(L,lret,false);

		return 1;
	}

	// signed int b2Island::m_bodyCount()
	static int _bind_getM_bodyCount(lua_State *L) {
		if (!_lg_typecheck_getM_bodyCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Island::m_bodyCount() function, expected prototype:\nsigned int b2Island::m_bodyCount()\nClass arguments details:\n");
		}


		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Island::m_bodyCount(). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		signed int lret = self->m_bodyCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2Island::m_jointCount()
	static int _bind_getM_jointCount(lua_State *L) {
		if (!_lg_typecheck_getM_jointCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Island::m_jointCount() function, expected prototype:\nsigned int b2Island::m_jointCount()\nClass arguments details:\n");
		}


		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Island::m_jointCount(). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		signed int lret = self->m_jointCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2Island::m_contactCount()
	static int _bind_getM_contactCount(lua_State *L) {
		if (!_lg_typecheck_getM_contactCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Island::m_contactCount() function, expected prototype:\nsigned int b2Island::m_contactCount()\nClass arguments details:\n");
		}


		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Island::m_contactCount(). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		signed int lret = self->m_contactCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2Island::m_bodyCapacity()
	static int _bind_getM_bodyCapacity(lua_State *L) {
		if (!_lg_typecheck_getM_bodyCapacity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Island::m_bodyCapacity() function, expected prototype:\nsigned int b2Island::m_bodyCapacity()\nClass arguments details:\n");
		}


		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Island::m_bodyCapacity(). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		signed int lret = self->m_bodyCapacity;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2Island::m_contactCapacity()
	static int _bind_getM_contactCapacity(lua_State *L) {
		if (!_lg_typecheck_getM_contactCapacity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Island::m_contactCapacity() function, expected prototype:\nsigned int b2Island::m_contactCapacity()\nClass arguments details:\n");
		}


		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Island::m_contactCapacity(). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		signed int lret = self->m_contactCapacity;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2Island::m_jointCapacity()
	static int _bind_getM_jointCapacity(lua_State *L) {
		if (!_lg_typecheck_getM_jointCapacity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Island::m_jointCapacity() function, expected prototype:\nsigned int b2Island::m_jointCapacity()\nClass arguments details:\n");
		}


		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Island::m_jointCapacity(). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		signed int lret = self->m_jointCapacity;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Island::m_allocator(b2StackAllocator * value)
	static int _bind_setM_allocator(lua_State *L) {
		if (!_lg_typecheck_setM_allocator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::m_allocator(b2StackAllocator * value) function, expected prototype:\nvoid b2Island::m_allocator(b2StackAllocator * value)\nClass arguments details:\narg 1 ID = 83926873\n");
		}

		b2StackAllocator* value=(Luna< b2StackAllocator >::check(L,2));

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::m_allocator(b2StackAllocator *). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->m_allocator = value;

		return 0;
	}

	// void b2Island::m_listener(b2ContactListener * value)
	static int _bind_setM_listener(lua_State *L) {
		if (!_lg_typecheck_setM_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::m_listener(b2ContactListener * value) function, expected prototype:\nvoid b2Island::m_listener(b2ContactListener * value)\nClass arguments details:\narg 1 ID = 55252344\n");
		}

		b2ContactListener* value=(Luna< b2ContactListener >::check(L,2));

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::m_listener(b2ContactListener *). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->m_listener = value;

		return 0;
	}

	// void b2Island::m_positions(b2Position * value)
	static int _bind_setM_positions(lua_State *L) {
		if (!_lg_typecheck_setM_positions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::m_positions(b2Position * value) function, expected prototype:\nvoid b2Island::m_positions(b2Position * value)\nClass arguments details:\narg 1 ID = 79848895\n");
		}

		b2Position* value=(Luna< b2Position >::check(L,2));

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::m_positions(b2Position *). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->m_positions = value;

		return 0;
	}

	// void b2Island::m_velocities(b2Velocity * value)
	static int _bind_setM_velocities(lua_State *L) {
		if (!_lg_typecheck_setM_velocities(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::m_velocities(b2Velocity * value) function, expected prototype:\nvoid b2Island::m_velocities(b2Velocity * value)\nClass arguments details:\narg 1 ID = 85114450\n");
		}

		b2Velocity* value=(Luna< b2Velocity >::check(L,2));

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::m_velocities(b2Velocity *). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->m_velocities = value;

		return 0;
	}

	// void b2Island::m_bodyCount(signed int value)
	static int _bind_setM_bodyCount(lua_State *L) {
		if (!_lg_typecheck_setM_bodyCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::m_bodyCount(signed int value) function, expected prototype:\nvoid b2Island::m_bodyCount(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::m_bodyCount(signed int). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->m_bodyCount = value;

		return 0;
	}

	// void b2Island::m_jointCount(signed int value)
	static int _bind_setM_jointCount(lua_State *L) {
		if (!_lg_typecheck_setM_jointCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::m_jointCount(signed int value) function, expected prototype:\nvoid b2Island::m_jointCount(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::m_jointCount(signed int). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->m_jointCount = value;

		return 0;
	}

	// void b2Island::m_contactCount(signed int value)
	static int _bind_setM_contactCount(lua_State *L) {
		if (!_lg_typecheck_setM_contactCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::m_contactCount(signed int value) function, expected prototype:\nvoid b2Island::m_contactCount(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::m_contactCount(signed int). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->m_contactCount = value;

		return 0;
	}

	// void b2Island::m_bodyCapacity(signed int value)
	static int _bind_setM_bodyCapacity(lua_State *L) {
		if (!_lg_typecheck_setM_bodyCapacity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::m_bodyCapacity(signed int value) function, expected prototype:\nvoid b2Island::m_bodyCapacity(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::m_bodyCapacity(signed int). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->m_bodyCapacity = value;

		return 0;
	}

	// void b2Island::m_contactCapacity(signed int value)
	static int _bind_setM_contactCapacity(lua_State *L) {
		if (!_lg_typecheck_setM_contactCapacity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::m_contactCapacity(signed int value) function, expected prototype:\nvoid b2Island::m_contactCapacity(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::m_contactCapacity(signed int). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->m_contactCapacity = value;

		return 0;
	}

	// void b2Island::m_jointCapacity(signed int value)
	static int _bind_setM_jointCapacity(lua_State *L) {
		if (!_lg_typecheck_setM_jointCapacity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Island::m_jointCapacity(signed int value) function, expected prototype:\nvoid b2Island::m_jointCapacity(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2Island* self=(Luna< b2Island >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Island::m_jointCapacity(signed int). Got : '%s'",typeid(Luna< b2Island >::check(L,1)).name());
		}
		self->m_jointCapacity = value;

		return 0;
	}


	// Operator binds:

};

b2Island* LunaTraits< b2Island >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Island::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2Island >::_bind_dtor(b2Island* obj) {
	delete obj;
}

const char LunaTraits< b2Island >::className[] = "b2Island";
const char LunaTraits< b2Island >::fullName[] = "b2Island";
const char LunaTraits< b2Island >::moduleName[] = "box2d";
const char* LunaTraits< b2Island >::parents[] = {0};
const int LunaTraits< b2Island >::hash = 10648909;
const int LunaTraits< b2Island >::uniqueIDs[] = {10648909,0};

luna_RegType LunaTraits< b2Island >::methods[] = {
	{"Clear", &luna_wrapper_b2Island::_bind_Clear},
	{"Solve", &luna_wrapper_b2Island::_bind_Solve},
	{"SolveTOI", &luna_wrapper_b2Island::_bind_SolveTOI},
	{"Add", &luna_wrapper_b2Island::_bind_Add},
	{"Report", &luna_wrapper_b2Island::_bind_Report},
	{"getM_allocator", &luna_wrapper_b2Island::_bind_getM_allocator},
	{"getM_listener", &luna_wrapper_b2Island::_bind_getM_listener},
	{"getM_positions", &luna_wrapper_b2Island::_bind_getM_positions},
	{"getM_velocities", &luna_wrapper_b2Island::_bind_getM_velocities},
	{"getM_bodyCount", &luna_wrapper_b2Island::_bind_getM_bodyCount},
	{"getM_jointCount", &luna_wrapper_b2Island::_bind_getM_jointCount},
	{"getM_contactCount", &luna_wrapper_b2Island::_bind_getM_contactCount},
	{"getM_bodyCapacity", &luna_wrapper_b2Island::_bind_getM_bodyCapacity},
	{"getM_contactCapacity", &luna_wrapper_b2Island::_bind_getM_contactCapacity},
	{"getM_jointCapacity", &luna_wrapper_b2Island::_bind_getM_jointCapacity},
	{"setM_allocator", &luna_wrapper_b2Island::_bind_setM_allocator},
	{"setM_listener", &luna_wrapper_b2Island::_bind_setM_listener},
	{"setM_positions", &luna_wrapper_b2Island::_bind_setM_positions},
	{"setM_velocities", &luna_wrapper_b2Island::_bind_setM_velocities},
	{"setM_bodyCount", &luna_wrapper_b2Island::_bind_setM_bodyCount},
	{"setM_jointCount", &luna_wrapper_b2Island::_bind_setM_jointCount},
	{"setM_contactCount", &luna_wrapper_b2Island::_bind_setM_contactCount},
	{"setM_bodyCapacity", &luna_wrapper_b2Island::_bind_setM_bodyCapacity},
	{"setM_contactCapacity", &luna_wrapper_b2Island::_bind_setM_contactCapacity},
	{"setM_jointCapacity", &luna_wrapper_b2Island::_bind_setM_jointCapacity},
	{"dynCast", &luna_wrapper_b2Island::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Island::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2Island >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Island >::enumValues[] = {
	{0,0}
};


