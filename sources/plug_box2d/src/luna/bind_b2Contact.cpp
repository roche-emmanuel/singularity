#include <plug_common.h>

#include <luna/wrappers/wrapper_b2Contact.h>

class luna_wrapper_b2Contact {
public:
	typedef Luna< b2Contact > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2Contact,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92978558) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Contact*)");
		}

		b2Contact* rhs =(Luna< b2Contact >::check(L,2));
		b2Contact* self=(Luna< b2Contact >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		b2Contact* self= (b2Contact*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Contact >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92978558) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Contact >::check(L,1));
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

		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Contact");
		
		return luna_dynamicCast(L,converters,"b2Contact",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetManifold_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetManifold_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWorldManifold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,57338608)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsTouching(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEnabled(lua_State *L) {
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

	inline static bool _lg_typecheck_GetFixtureA_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFixtureA_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChildIndexA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFixtureB_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFixtureB_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChildIndexB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResetFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResetRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Evaluate(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,73405450)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44090970) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Manifold * b2Contact::GetManifold()
	static int _bind_GetManifold_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetManifold_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Manifold * b2Contact::GetManifold() function, expected prototype:\nb2Manifold * b2Contact::GetManifold()\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Manifold * b2Contact::GetManifold(). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		b2Manifold * lret = self->GetManifold();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Manifold >::push(L,lret,false);

		return 1;
	}

	// const b2Manifold * b2Contact::GetManifold() const
	static int _bind_GetManifold_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetManifold_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Manifold * b2Contact::GetManifold() const function, expected prototype:\nconst b2Manifold * b2Contact::GetManifold() const\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Manifold * b2Contact::GetManifold() const. Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		const b2Manifold * lret = self->GetManifold();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Manifold >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Contact::GetManifold
	static int _bind_GetManifold(lua_State *L) {
		if (_lg_typecheck_GetManifold_overload_1(L)) return _bind_GetManifold_overload_1(L);
		if (_lg_typecheck_GetManifold_overload_2(L)) return _bind_GetManifold_overload_2(L);

		luaL_error(L, "error in function GetManifold, cannot match any of the overloads for function GetManifold:\n  GetManifold()\n  GetManifold()\n");
		return 0;
	}

	// void b2Contact::GetWorldManifold(b2WorldManifold * worldManifold) const
	static int _bind_GetWorldManifold(lua_State *L) {
		if (!_lg_typecheck_GetWorldManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Contact::GetWorldManifold(b2WorldManifold * worldManifold) const function, expected prototype:\nvoid b2Contact::GetWorldManifold(b2WorldManifold * worldManifold) const\nClass arguments details:\narg 1 ID = 57338608\n");
		}

		b2WorldManifold* worldManifold=(Luna< b2WorldManifold >::check(L,2));

		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Contact::GetWorldManifold(b2WorldManifold *) const. Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		self->GetWorldManifold(worldManifold);

		return 0;
	}

	// bool b2Contact::IsTouching() const
	static int _bind_IsTouching(lua_State *L) {
		if (!_lg_typecheck_IsTouching(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Contact::IsTouching() const function, expected prototype:\nbool b2Contact::IsTouching() const\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Contact::IsTouching() const. Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		bool lret = self->IsTouching();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2Contact::SetEnabled(bool flag)
	static int _bind_SetEnabled(lua_State *L) {
		if (!_lg_typecheck_SetEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Contact::SetEnabled(bool flag) function, expected prototype:\nvoid b2Contact::SetEnabled(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Contact::SetEnabled(bool). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		self->SetEnabled(flag);

		return 0;
	}

	// bool b2Contact::IsEnabled() const
	static int _bind_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_IsEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Contact::IsEnabled() const function, expected prototype:\nbool b2Contact::IsEnabled() const\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Contact::IsEnabled() const. Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		bool lret = self->IsEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// b2Contact * b2Contact::GetNext()
	static int _bind_GetNext_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetNext_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Contact * b2Contact::GetNext() function, expected prototype:\nb2Contact * b2Contact::GetNext()\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Contact * b2Contact::GetNext(). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		b2Contact * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Contact >::push(L,lret,false);

		return 1;
	}

	// const b2Contact * b2Contact::GetNext() const
	static int _bind_GetNext_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetNext_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Contact * b2Contact::GetNext() const function, expected prototype:\nconst b2Contact * b2Contact::GetNext() const\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Contact * b2Contact::GetNext() const. Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		const b2Contact * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Contact >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Contact::GetNext
	static int _bind_GetNext(lua_State *L) {
		if (_lg_typecheck_GetNext_overload_1(L)) return _bind_GetNext_overload_1(L);
		if (_lg_typecheck_GetNext_overload_2(L)) return _bind_GetNext_overload_2(L);

		luaL_error(L, "error in function GetNext, cannot match any of the overloads for function GetNext:\n  GetNext()\n  GetNext()\n");
		return 0;
	}

	// b2Fixture * b2Contact::GetFixtureA()
	static int _bind_GetFixtureA_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetFixtureA_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Fixture * b2Contact::GetFixtureA() function, expected prototype:\nb2Fixture * b2Contact::GetFixtureA()\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Fixture * b2Contact::GetFixtureA(). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		b2Fixture * lret = self->GetFixtureA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Fixture >::push(L,lret,false);

		return 1;
	}

	// const b2Fixture * b2Contact::GetFixtureA() const
	static int _bind_GetFixtureA_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetFixtureA_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Fixture * b2Contact::GetFixtureA() const function, expected prototype:\nconst b2Fixture * b2Contact::GetFixtureA() const\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Fixture * b2Contact::GetFixtureA() const. Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		const b2Fixture * lret = self->GetFixtureA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Fixture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Contact::GetFixtureA
	static int _bind_GetFixtureA(lua_State *L) {
		if (_lg_typecheck_GetFixtureA_overload_1(L)) return _bind_GetFixtureA_overload_1(L);
		if (_lg_typecheck_GetFixtureA_overload_2(L)) return _bind_GetFixtureA_overload_2(L);

		luaL_error(L, "error in function GetFixtureA, cannot match any of the overloads for function GetFixtureA:\n  GetFixtureA()\n  GetFixtureA()\n");
		return 0;
	}

	// signed int b2Contact::GetChildIndexA() const
	static int _bind_GetChildIndexA(lua_State *L) {
		if (!_lg_typecheck_GetChildIndexA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Contact::GetChildIndexA() const function, expected prototype:\nsigned int b2Contact::GetChildIndexA() const\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Contact::GetChildIndexA() const. Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		signed int lret = self->GetChildIndexA();
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Fixture * b2Contact::GetFixtureB()
	static int _bind_GetFixtureB_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetFixtureB_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Fixture * b2Contact::GetFixtureB() function, expected prototype:\nb2Fixture * b2Contact::GetFixtureB()\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Fixture * b2Contact::GetFixtureB(). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		b2Fixture * lret = self->GetFixtureB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Fixture >::push(L,lret,false);

		return 1;
	}

	// const b2Fixture * b2Contact::GetFixtureB() const
	static int _bind_GetFixtureB_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetFixtureB_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Fixture * b2Contact::GetFixtureB() const function, expected prototype:\nconst b2Fixture * b2Contact::GetFixtureB() const\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Fixture * b2Contact::GetFixtureB() const. Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		const b2Fixture * lret = self->GetFixtureB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Fixture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Contact::GetFixtureB
	static int _bind_GetFixtureB(lua_State *L) {
		if (_lg_typecheck_GetFixtureB_overload_1(L)) return _bind_GetFixtureB_overload_1(L);
		if (_lg_typecheck_GetFixtureB_overload_2(L)) return _bind_GetFixtureB_overload_2(L);

		luaL_error(L, "error in function GetFixtureB, cannot match any of the overloads for function GetFixtureB:\n  GetFixtureB()\n  GetFixtureB()\n");
		return 0;
	}

	// signed int b2Contact::GetChildIndexB() const
	static int _bind_GetChildIndexB(lua_State *L) {
		if (!_lg_typecheck_GetChildIndexB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Contact::GetChildIndexB() const function, expected prototype:\nsigned int b2Contact::GetChildIndexB() const\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Contact::GetChildIndexB() const. Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		signed int lret = self->GetChildIndexB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Contact::SetFriction(float friction)
	static int _bind_SetFriction(lua_State *L) {
		if (!_lg_typecheck_SetFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Contact::SetFriction(float friction) function, expected prototype:\nvoid b2Contact::SetFriction(float friction)\nClass arguments details:\n");
		}

		float friction=(float)lua_tonumber(L,2);

		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Contact::SetFriction(float). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		self->SetFriction(friction);

		return 0;
	}

	// float b2Contact::GetFriction() const
	static int _bind_GetFriction(lua_State *L) {
		if (!_lg_typecheck_GetFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Contact::GetFriction() const function, expected prototype:\nfloat b2Contact::GetFriction() const\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Contact::GetFriction() const. Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		float lret = self->GetFriction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Contact::ResetFriction()
	static int _bind_ResetFriction(lua_State *L) {
		if (!_lg_typecheck_ResetFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Contact::ResetFriction() function, expected prototype:\nvoid b2Contact::ResetFriction()\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Contact::ResetFriction(). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		self->ResetFriction();

		return 0;
	}

	// void b2Contact::SetRestitution(float restitution)
	static int _bind_SetRestitution(lua_State *L) {
		if (!_lg_typecheck_SetRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Contact::SetRestitution(float restitution) function, expected prototype:\nvoid b2Contact::SetRestitution(float restitution)\nClass arguments details:\n");
		}

		float restitution=(float)lua_tonumber(L,2);

		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Contact::SetRestitution(float). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		self->SetRestitution(restitution);

		return 0;
	}

	// float b2Contact::GetRestitution() const
	static int _bind_GetRestitution(lua_State *L) {
		if (!_lg_typecheck_GetRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Contact::GetRestitution() const function, expected prototype:\nfloat b2Contact::GetRestitution() const\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Contact::GetRestitution() const. Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		float lret = self->GetRestitution();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Contact::ResetRestitution()
	static int _bind_ResetRestitution(lua_State *L) {
		if (!_lg_typecheck_ResetRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Contact::ResetRestitution() function, expected prototype:\nvoid b2Contact::ResetRestitution()\nClass arguments details:\n");
		}


		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Contact::ResetRestitution(). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		self->ResetRestitution();

		return 0;
	}

	// void b2Contact::Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB)
	static int _bind_Evaluate(lua_State *L) {
		if (!_lg_typecheck_Evaluate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Contact::Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB) function, expected prototype:\nvoid b2Contact::Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB)\nClass arguments details:\narg 1 ID = 73405450\narg 2 ID = 44090970\narg 3 ID = 44090970\n");
		}

		b2Manifold* manifold=(Luna< b2Manifold >::check(L,2));
		const b2Transform* xfA_ptr=(Luna< b2Transform >::check(L,3));
		if( !xfA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xfA in b2Contact::Evaluate function");
		}
		const b2Transform & xfA=*xfA_ptr;
		const b2Transform* xfB_ptr=(Luna< b2Transform >::check(L,4));
		if( !xfB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xfB in b2Contact::Evaluate function");
		}
		const b2Transform & xfB=*xfB_ptr;

		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Contact::Evaluate(b2Manifold *, const b2Transform &, const b2Transform &). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		self->Evaluate(manifold, xfA, xfB);

		return 0;
	}


	// Operator binds:

};

b2Contact* LunaTraits< b2Contact >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void b2Contact::Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB)
}

void LunaTraits< b2Contact >::_bind_dtor(b2Contact* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< b2Contact >::className[] = "b2Contact";
const char LunaTraits< b2Contact >::fullName[] = "b2Contact";
const char LunaTraits< b2Contact >::moduleName[] = "box2d";
const char* LunaTraits< b2Contact >::parents[] = {0};
const int LunaTraits< b2Contact >::hash = 92978558;
const int LunaTraits< b2Contact >::uniqueIDs[] = {92978558,0};

luna_RegType LunaTraits< b2Contact >::methods[] = {
	{"GetManifold", &luna_wrapper_b2Contact::_bind_GetManifold},
	{"GetWorldManifold", &luna_wrapper_b2Contact::_bind_GetWorldManifold},
	{"IsTouching", &luna_wrapper_b2Contact::_bind_IsTouching},
	{"SetEnabled", &luna_wrapper_b2Contact::_bind_SetEnabled},
	{"IsEnabled", &luna_wrapper_b2Contact::_bind_IsEnabled},
	{"GetNext", &luna_wrapper_b2Contact::_bind_GetNext},
	{"GetFixtureA", &luna_wrapper_b2Contact::_bind_GetFixtureA},
	{"GetChildIndexA", &luna_wrapper_b2Contact::_bind_GetChildIndexA},
	{"GetFixtureB", &luna_wrapper_b2Contact::_bind_GetFixtureB},
	{"GetChildIndexB", &luna_wrapper_b2Contact::_bind_GetChildIndexB},
	{"SetFriction", &luna_wrapper_b2Contact::_bind_SetFriction},
	{"GetFriction", &luna_wrapper_b2Contact::_bind_GetFriction},
	{"ResetFriction", &luna_wrapper_b2Contact::_bind_ResetFriction},
	{"SetRestitution", &luna_wrapper_b2Contact::_bind_SetRestitution},
	{"GetRestitution", &luna_wrapper_b2Contact::_bind_GetRestitution},
	{"ResetRestitution", &luna_wrapper_b2Contact::_bind_ResetRestitution},
	{"Evaluate", &luna_wrapper_b2Contact::_bind_Evaluate},
	{"dynCast", &luna_wrapper_b2Contact::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Contact::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Contact::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Contact::_bind_asVoid},
	{"getTable", &luna_wrapper_b2Contact::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2Contact >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Contact >::enumValues[] = {
	{0,0}
};


