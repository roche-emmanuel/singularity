#include <plug_common.h>

#include <luna/wrappers/wrapper_b2Joint.h>

class luna_wrapper_b2Joint {
public:
	typedef Luna< b2Joint > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2Joint,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78564754) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Joint*)");
		}

		b2Joint* rhs =(Luna< b2Joint >::check(L,2));
		b2Joint* self=(Luna< b2Joint >::check(L,1));
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

		b2Joint* self= (b2Joint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Joint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78564754) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Joint >::check(L,1));
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

		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Joint");
		
		return luna_dynamicCast(L,converters,"b2Joint",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBodyA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBodyB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAnchorA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAnchorB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetReactionForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetReactionTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_IsActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCollideConnected(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Dump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Dump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2JointType b2Joint::GetType() const
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2JointType b2Joint::GetType() const function, expected prototype:\nb2JointType b2Joint::GetType() const\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2JointType b2Joint::GetType() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2JointType lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Body * b2Joint::GetBodyA()
	static int _bind_GetBodyA(lua_State *L) {
		if (!_lg_typecheck_GetBodyA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Body * b2Joint::GetBodyA() function, expected prototype:\nb2Body * b2Joint::GetBodyA()\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Body * b2Joint::GetBodyA(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Body * lret = self->GetBodyA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// b2Body * b2Joint::GetBodyB()
	static int _bind_GetBodyB(lua_State *L) {
		if (!_lg_typecheck_GetBodyB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Body * b2Joint::GetBodyB() function, expected prototype:\nb2Body * b2Joint::GetBodyB()\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Body * b2Joint::GetBodyB(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Body * lret = self->GetBodyB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2Joint::GetAnchorA() const
	static int _bind_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Joint::GetAnchorA() const function, expected prototype:\nb2Vec2 b2Joint::GetAnchorA() const\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Joint::GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2Joint::GetAnchorB() const
	static int _bind_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Joint::GetAnchorB() const function, expected prototype:\nb2Vec2 b2Joint::GetAnchorB() const\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Joint::GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2Joint::GetReactionForce(float inv_dt) const
	static int _bind_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Joint::GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2Joint::GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Joint::GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2Joint::GetReactionTorque(float inv_dt) const
	static int _bind_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Joint::GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2Joint::GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Joint::GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Joint * b2Joint::GetNext()
	static int _bind_GetNext_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetNext_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Joint * b2Joint::GetNext() function, expected prototype:\nb2Joint * b2Joint::GetNext()\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Joint * b2Joint::GetNext(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Joint * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Joint >::push(L,lret,false);

		return 1;
	}

	// const b2Joint * b2Joint::GetNext() const
	static int _bind_GetNext_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetNext_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Joint * b2Joint::GetNext() const function, expected prototype:\nconst b2Joint * b2Joint::GetNext() const\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Joint * b2Joint::GetNext() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Joint * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Joint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Joint::GetNext
	static int _bind_GetNext(lua_State *L) {
		if (_lg_typecheck_GetNext_overload_1(L)) return _bind_GetNext_overload_1(L);
		if (_lg_typecheck_GetNext_overload_2(L)) return _bind_GetNext_overload_2(L);

		luaL_error(L, "error in function GetNext, cannot match any of the overloads for function GetNext:\n  GetNext()\n  GetNext()\n");
		return 0;
	}

	// void * b2Joint::GetUserData() const
	static int _bind_GetUserData(lua_State *L) {
		if (!_lg_typecheck_GetUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * b2Joint::GetUserData() const function, expected prototype:\nvoid * b2Joint::GetUserData() const\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * b2Joint::GetUserData() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		void * lret = self->GetUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void b2Joint::SetUserData(void * data)
	static int _bind_SetUserData(lua_State *L) {
		if (!_lg_typecheck_SetUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Joint::SetUserData(void * data) function, expected prototype:\nvoid b2Joint::SetUserData(void * data)\nClass arguments details:\n");
		}

		void* data=(Luna< void >::check(L,2));

		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Joint::SetUserData(void *). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetUserData(data);

		return 0;
	}

	// bool b2Joint::IsActive() const
	static int _bind_IsActive(lua_State *L) {
		if (!_lg_typecheck_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Joint::IsActive() const function, expected prototype:\nbool b2Joint::IsActive() const\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Joint::IsActive() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		bool lret = self->IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2Joint::GetCollideConnected() const
	static int _bind_GetCollideConnected(lua_State *L) {
		if (!_lg_typecheck_GetCollideConnected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Joint::GetCollideConnected() const function, expected prototype:\nbool b2Joint::GetCollideConnected() const\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Joint::GetCollideConnected() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		bool lret = self->GetCollideConnected();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2Joint::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Joint::Dump() function, expected prototype:\nvoid b2Joint::Dump()\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Joint::Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->Dump();

		return 0;
	}

	// void b2Joint::base_Dump()
	static int _bind_base_Dump(lua_State *L) {
		if (!_lg_typecheck_base_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Joint::base_Dump() function, expected prototype:\nvoid b2Joint::base_Dump()\nClass arguments details:\n");
		}


		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Joint::base_Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->b2Joint::Dump();

		return 0;
	}


	// Operator binds:

};

b2Joint* LunaTraits< b2Joint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// b2Vec2 b2Joint::GetAnchorA() const
	// b2Vec2 b2Joint::GetAnchorB() const
	// b2Vec2 b2Joint::GetReactionForce(float inv_dt) const
	// float b2Joint::GetReactionTorque(float inv_dt) const
	// void b2Joint::InitVelocityConstraints(const b2SolverData & data)
	// void b2Joint::SolveVelocityConstraints(const b2SolverData & data)
	// bool b2Joint::SolvePositionConstraints(const b2SolverData & data)
}

void LunaTraits< b2Joint >::_bind_dtor(b2Joint* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< b2Joint >::className[] = "b2Joint";
const char LunaTraits< b2Joint >::fullName[] = "b2Joint";
const char LunaTraits< b2Joint >::moduleName[] = "box2d";
const char* LunaTraits< b2Joint >::parents[] = {0};
const int LunaTraits< b2Joint >::hash = 78564754;
const int LunaTraits< b2Joint >::uniqueIDs[] = {78564754,0};

luna_RegType LunaTraits< b2Joint >::methods[] = {
	{"GetType", &luna_wrapper_b2Joint::_bind_GetType},
	{"GetBodyA", &luna_wrapper_b2Joint::_bind_GetBodyA},
	{"GetBodyB", &luna_wrapper_b2Joint::_bind_GetBodyB},
	{"GetAnchorA", &luna_wrapper_b2Joint::_bind_GetAnchorA},
	{"GetAnchorB", &luna_wrapper_b2Joint::_bind_GetAnchorB},
	{"GetReactionForce", &luna_wrapper_b2Joint::_bind_GetReactionForce},
	{"GetReactionTorque", &luna_wrapper_b2Joint::_bind_GetReactionTorque},
	{"GetNext", &luna_wrapper_b2Joint::_bind_GetNext},
	{"GetUserData", &luna_wrapper_b2Joint::_bind_GetUserData},
	{"SetUserData", &luna_wrapper_b2Joint::_bind_SetUserData},
	{"IsActive", &luna_wrapper_b2Joint::_bind_IsActive},
	{"GetCollideConnected", &luna_wrapper_b2Joint::_bind_GetCollideConnected},
	{"Dump", &luna_wrapper_b2Joint::_bind_Dump},
	{"base_Dump", &luna_wrapper_b2Joint::_bind_base_Dump},
	{"dynCast", &luna_wrapper_b2Joint::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Joint::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Joint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Joint::_bind_asVoid},
	{"getTable", &luna_wrapper_b2Joint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2Joint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Joint >::enumValues[] = {
	{0,0}
};


