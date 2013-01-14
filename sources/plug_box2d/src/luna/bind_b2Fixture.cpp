#include <plug_common.h>

class luna_wrapper_b2Fixture {
public:
	typedef Luna< b2Fixture > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92969381) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Fixture*)");
		}

		b2Fixture* rhs =(Luna< b2Fixture >::check(L,2));
		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
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

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Fixture");
		
		return luna_dynamicCast(L,converters,"b2Fixture",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSensor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSensor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFilterData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15544248) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFilterData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Refilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBody_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBody_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNext_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNext_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TestPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RayCast(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78839054)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,74209205) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMassData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,24760292)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAABB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dump(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Shape::Type b2Fixture::GetType() const
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Shape::Type b2Fixture::GetType() const function, expected prototype:\nb2Shape::Type b2Fixture::GetType() const\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Shape::Type b2Fixture::GetType() const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		b2Shape::Type lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Shape * b2Fixture::GetShape()
	static int _bind_GetShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetShape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Shape * b2Fixture::GetShape() function, expected prototype:\nb2Shape * b2Fixture::GetShape()\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Shape * b2Fixture::GetShape(). Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		b2Shape * lret = self->GetShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Shape >::push(L,lret,false);

		return 1;
	}

	// const b2Shape * b2Fixture::GetShape() const
	static int _bind_GetShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetShape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Shape * b2Fixture::GetShape() const function, expected prototype:\nconst b2Shape * b2Fixture::GetShape() const\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Shape * b2Fixture::GetShape() const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		const b2Shape * lret = self->GetShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Shape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Fixture::GetShape
	static int _bind_GetShape(lua_State *L) {
		if (_lg_typecheck_GetShape_overload_1(L)) return _bind_GetShape_overload_1(L);
		if (_lg_typecheck_GetShape_overload_2(L)) return _bind_GetShape_overload_2(L);

		luaL_error(L, "error in function GetShape, cannot match any of the overloads for function GetShape:\n  GetShape()\n  GetShape()\n");
		return 0;
	}

	// void b2Fixture::SetSensor(bool sensor)
	static int _bind_SetSensor(lua_State *L) {
		if (!_lg_typecheck_SetSensor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Fixture::SetSensor(bool sensor) function, expected prototype:\nvoid b2Fixture::SetSensor(bool sensor)\nClass arguments details:\n");
		}

		bool sensor=(bool)(lua_toboolean(L,2)==1);

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Fixture::SetSensor(bool). Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		self->SetSensor(sensor);

		return 0;
	}

	// bool b2Fixture::IsSensor() const
	static int _bind_IsSensor(lua_State *L) {
		if (!_lg_typecheck_IsSensor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Fixture::IsSensor() const function, expected prototype:\nbool b2Fixture::IsSensor() const\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Fixture::IsSensor() const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		bool lret = self->IsSensor();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2Fixture::SetFilterData(const b2Filter & filter)
	static int _bind_SetFilterData(lua_State *L) {
		if (!_lg_typecheck_SetFilterData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Fixture::SetFilterData(const b2Filter & filter) function, expected prototype:\nvoid b2Fixture::SetFilterData(const b2Filter & filter)\nClass arguments details:\narg 1 ID = 15544248\n");
		}

		const b2Filter* filter_ptr=(Luna< b2Filter >::check(L,2));
		if( !filter_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filter in b2Fixture::SetFilterData function");
		}
		const b2Filter & filter=*filter_ptr;

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Fixture::SetFilterData(const b2Filter &). Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		self->SetFilterData(filter);

		return 0;
	}

	// const b2Filter & b2Fixture::GetFilterData() const
	static int _bind_GetFilterData(lua_State *L) {
		if (!_lg_typecheck_GetFilterData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Filter & b2Fixture::GetFilterData() const function, expected prototype:\nconst b2Filter & b2Fixture::GetFilterData() const\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Filter & b2Fixture::GetFilterData() const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		const b2Filter* lret = &self->GetFilterData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Filter >::push(L,lret,false);

		return 1;
	}

	// void b2Fixture::Refilter()
	static int _bind_Refilter(lua_State *L) {
		if (!_lg_typecheck_Refilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Fixture::Refilter() function, expected prototype:\nvoid b2Fixture::Refilter()\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Fixture::Refilter(). Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		self->Refilter();

		return 0;
	}

	// b2Body * b2Fixture::GetBody()
	static int _bind_GetBody_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBody_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Body * b2Fixture::GetBody() function, expected prototype:\nb2Body * b2Fixture::GetBody()\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Body * b2Fixture::GetBody(). Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		b2Body * lret = self->GetBody();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// const b2Body * b2Fixture::GetBody() const
	static int _bind_GetBody_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBody_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Body * b2Fixture::GetBody() const function, expected prototype:\nconst b2Body * b2Fixture::GetBody() const\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Body * b2Fixture::GetBody() const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		const b2Body * lret = self->GetBody();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Fixture::GetBody
	static int _bind_GetBody(lua_State *L) {
		if (_lg_typecheck_GetBody_overload_1(L)) return _bind_GetBody_overload_1(L);
		if (_lg_typecheck_GetBody_overload_2(L)) return _bind_GetBody_overload_2(L);

		luaL_error(L, "error in function GetBody, cannot match any of the overloads for function GetBody:\n  GetBody()\n  GetBody()\n");
		return 0;
	}

	// b2Fixture * b2Fixture::GetNext()
	static int _bind_GetNext_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetNext_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Fixture * b2Fixture::GetNext() function, expected prototype:\nb2Fixture * b2Fixture::GetNext()\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Fixture * b2Fixture::GetNext(). Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		b2Fixture * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Fixture >::push(L,lret,false);

		return 1;
	}

	// const b2Fixture * b2Fixture::GetNext() const
	static int _bind_GetNext_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetNext_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Fixture * b2Fixture::GetNext() const function, expected prototype:\nconst b2Fixture * b2Fixture::GetNext() const\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Fixture * b2Fixture::GetNext() const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		const b2Fixture * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Fixture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Fixture::GetNext
	static int _bind_GetNext(lua_State *L) {
		if (_lg_typecheck_GetNext_overload_1(L)) return _bind_GetNext_overload_1(L);
		if (_lg_typecheck_GetNext_overload_2(L)) return _bind_GetNext_overload_2(L);

		luaL_error(L, "error in function GetNext, cannot match any of the overloads for function GetNext:\n  GetNext()\n  GetNext()\n");
		return 0;
	}

	// void * b2Fixture::GetUserData() const
	static int _bind_GetUserData(lua_State *L) {
		if (!_lg_typecheck_GetUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * b2Fixture::GetUserData() const function, expected prototype:\nvoid * b2Fixture::GetUserData() const\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * b2Fixture::GetUserData() const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		void * lret = self->GetUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void b2Fixture::SetUserData(void * data)
	static int _bind_SetUserData(lua_State *L) {
		if (!_lg_typecheck_SetUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Fixture::SetUserData(void * data) function, expected prototype:\nvoid b2Fixture::SetUserData(void * data)\nClass arguments details:\n");
		}

		void* data=(Luna< void >::check(L,2));

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Fixture::SetUserData(void *). Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		self->SetUserData(data);

		return 0;
	}

	// bool b2Fixture::TestPoint(const b2Vec2 & p) const
	static int _bind_TestPoint(lua_State *L) {
		if (!_lg_typecheck_TestPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Fixture::TestPoint(const b2Vec2 & p) const function, expected prototype:\nbool b2Fixture::TestPoint(const b2Vec2 & p) const\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* p_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in b2Fixture::TestPoint function");
		}
		const b2Vec2 & p=*p_ptr;

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Fixture::TestPoint(const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		bool lret = self->TestPoint(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2Fixture::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, signed int childIndex) const
	static int _bind_RayCast(lua_State *L) {
		if (!_lg_typecheck_RayCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Fixture::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, signed int childIndex) const function, expected prototype:\nbool b2Fixture::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, signed int childIndex) const\nClass arguments details:\narg 1 ID = 78839054\narg 2 ID = 74209205\n");
		}

		b2RayCastOutput* output=(Luna< b2RayCastOutput >::check(L,2));
		const b2RayCastInput* input_ptr=(Luna< b2RayCastInput >::check(L,3));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in b2Fixture::RayCast function");
		}
		const b2RayCastInput & input=*input_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,4);

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Fixture::RayCast(b2RayCastOutput *, const b2RayCastInput &, signed int) const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		bool lret = self->RayCast(output, input, childIndex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2Fixture::GetMassData(b2MassData * massData) const
	static int _bind_GetMassData(lua_State *L) {
		if (!_lg_typecheck_GetMassData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Fixture::GetMassData(b2MassData * massData) const function, expected prototype:\nvoid b2Fixture::GetMassData(b2MassData * massData) const\nClass arguments details:\narg 1 ID = 24760292\n");
		}

		b2MassData* massData=(Luna< b2MassData >::check(L,2));

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Fixture::GetMassData(b2MassData *) const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		self->GetMassData(massData);

		return 0;
	}

	// void b2Fixture::SetDensity(float density)
	static int _bind_SetDensity(lua_State *L) {
		if (!_lg_typecheck_SetDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Fixture::SetDensity(float density) function, expected prototype:\nvoid b2Fixture::SetDensity(float density)\nClass arguments details:\n");
		}

		float density=(float)lua_tonumber(L,2);

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Fixture::SetDensity(float). Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		self->SetDensity(density);

		return 0;
	}

	// float b2Fixture::GetDensity() const
	static int _bind_GetDensity(lua_State *L) {
		if (!_lg_typecheck_GetDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Fixture::GetDensity() const function, expected prototype:\nfloat b2Fixture::GetDensity() const\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Fixture::GetDensity() const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		float lret = self->GetDensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Fixture::GetFriction() const
	static int _bind_GetFriction(lua_State *L) {
		if (!_lg_typecheck_GetFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Fixture::GetFriction() const function, expected prototype:\nfloat b2Fixture::GetFriction() const\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Fixture::GetFriction() const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		float lret = self->GetFriction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Fixture::SetFriction(float friction)
	static int _bind_SetFriction(lua_State *L) {
		if (!_lg_typecheck_SetFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Fixture::SetFriction(float friction) function, expected prototype:\nvoid b2Fixture::SetFriction(float friction)\nClass arguments details:\n");
		}

		float friction=(float)lua_tonumber(L,2);

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Fixture::SetFriction(float). Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		self->SetFriction(friction);

		return 0;
	}

	// float b2Fixture::GetRestitution() const
	static int _bind_GetRestitution(lua_State *L) {
		if (!_lg_typecheck_GetRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Fixture::GetRestitution() const function, expected prototype:\nfloat b2Fixture::GetRestitution() const\nClass arguments details:\n");
		}


		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Fixture::GetRestitution() const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		float lret = self->GetRestitution();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Fixture::SetRestitution(float restitution)
	static int _bind_SetRestitution(lua_State *L) {
		if (!_lg_typecheck_SetRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Fixture::SetRestitution(float restitution) function, expected prototype:\nvoid b2Fixture::SetRestitution(float restitution)\nClass arguments details:\n");
		}

		float restitution=(float)lua_tonumber(L,2);

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Fixture::SetRestitution(float). Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		self->SetRestitution(restitution);

		return 0;
	}

	// const b2AABB & b2Fixture::GetAABB(signed int childIndex) const
	static int _bind_GetAABB(lua_State *L) {
		if (!_lg_typecheck_GetAABB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2AABB & b2Fixture::GetAABB(signed int childIndex) const function, expected prototype:\nconst b2AABB & b2Fixture::GetAABB(signed int childIndex) const\nClass arguments details:\n");
		}

		signed int childIndex=(signed int)lua_tointeger(L,2);

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2AABB & b2Fixture::GetAABB(signed int) const. Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		const b2AABB* lret = &self->GetAABB(childIndex);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2AABB >::push(L,lret,false);

		return 1;
	}

	// void b2Fixture::Dump(signed int bodyIndex)
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Fixture::Dump(signed int bodyIndex) function, expected prototype:\nvoid b2Fixture::Dump(signed int bodyIndex)\nClass arguments details:\n");
		}

		signed int bodyIndex=(signed int)lua_tointeger(L,2);

		b2Fixture* self=(Luna< b2Fixture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Fixture::Dump(signed int). Got : '%s'",typeid(Luna< b2Fixture >::check(L,1)).name());
		}
		self->Dump(bodyIndex);

		return 0;
	}


	// Operator binds:

};

b2Fixture* LunaTraits< b2Fixture >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2Fixture >::_bind_dtor(b2Fixture* obj) {
	delete obj;
}

const char LunaTraits< b2Fixture >::className[] = "b2Fixture";
const char LunaTraits< b2Fixture >::fullName[] = "b2Fixture";
const char LunaTraits< b2Fixture >::moduleName[] = "box2d";
const char* LunaTraits< b2Fixture >::parents[] = {0};
const int LunaTraits< b2Fixture >::hash = 92969381;
const int LunaTraits< b2Fixture >::uniqueIDs[] = {92969381,0};

luna_RegType LunaTraits< b2Fixture >::methods[] = {
	{"GetType", &luna_wrapper_b2Fixture::_bind_GetType},
	{"GetShape", &luna_wrapper_b2Fixture::_bind_GetShape},
	{"SetSensor", &luna_wrapper_b2Fixture::_bind_SetSensor},
	{"IsSensor", &luna_wrapper_b2Fixture::_bind_IsSensor},
	{"SetFilterData", &luna_wrapper_b2Fixture::_bind_SetFilterData},
	{"GetFilterData", &luna_wrapper_b2Fixture::_bind_GetFilterData},
	{"Refilter", &luna_wrapper_b2Fixture::_bind_Refilter},
	{"GetBody", &luna_wrapper_b2Fixture::_bind_GetBody},
	{"GetNext", &luna_wrapper_b2Fixture::_bind_GetNext},
	{"GetUserData", &luna_wrapper_b2Fixture::_bind_GetUserData},
	{"SetUserData", &luna_wrapper_b2Fixture::_bind_SetUserData},
	{"TestPoint", &luna_wrapper_b2Fixture::_bind_TestPoint},
	{"RayCast", &luna_wrapper_b2Fixture::_bind_RayCast},
	{"GetMassData", &luna_wrapper_b2Fixture::_bind_GetMassData},
	{"SetDensity", &luna_wrapper_b2Fixture::_bind_SetDensity},
	{"GetDensity", &luna_wrapper_b2Fixture::_bind_GetDensity},
	{"GetFriction", &luna_wrapper_b2Fixture::_bind_GetFriction},
	{"SetFriction", &luna_wrapper_b2Fixture::_bind_SetFriction},
	{"GetRestitution", &luna_wrapper_b2Fixture::_bind_GetRestitution},
	{"SetRestitution", &luna_wrapper_b2Fixture::_bind_SetRestitution},
	{"GetAABB", &luna_wrapper_b2Fixture::_bind_GetAABB},
	{"Dump", &luna_wrapper_b2Fixture::_bind_Dump},
	{"dynCast", &luna_wrapper_b2Fixture::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Fixture::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2Fixture >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Fixture >::enumValues[] = {
	{0,0}
};


