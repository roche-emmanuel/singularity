#include <plug_common.h>

#include <luna/wrappers/wrapper_b2EdgeShape.h>

class luna_wrapper_b2EdgeShape {
public:
	typedef Luna< b2EdgeShape > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2Shape,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		b2EdgeShape* self= (b2EdgeShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2EdgeShape >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86660265) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2Shape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_b2Shape(lua_State *L) {
		// all checked are already performed before reaching this point.
		//b2EdgeShape* ptr= dynamic_cast< b2EdgeShape* >(Luna< b2Shape >::check(L,1));
		b2EdgeShape* ptr= luna_caster< b2Shape, b2EdgeShape >::cast(Luna< b2Shape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2EdgeShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,76186022)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TestPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44090970) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RayCast(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78839054)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,74209205) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44090970) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ComputeAABB(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53833672)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ComputeMass(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,24760292)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertex1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertex2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertex0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertex3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHasVertex0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHasVertex3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertex1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertex2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertex0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertex3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHasVertex0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHasVertex3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,76186022)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetChildCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_TestPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44090970) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RayCast(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78839054)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,74209205) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44090970) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ComputeAABB(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53833672)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ComputeMass(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,24760292)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2EdgeShape::b2EdgeShape()
	static b2EdgeShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in b2EdgeShape::b2EdgeShape() function, expected prototype:\nb2EdgeShape::b2EdgeShape()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new b2EdgeShape();
	}

	// b2EdgeShape::b2EdgeShape(lua_Table * data)
	static b2EdgeShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in b2EdgeShape::b2EdgeShape(lua_Table * data) function, expected prototype:\nb2EdgeShape::b2EdgeShape(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_b2EdgeShape(L,NULL);
	}

	// Overload binder for b2EdgeShape::b2EdgeShape
	static b2EdgeShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2EdgeShape, cannot match any of the overloads for function b2EdgeShape:\n  b2EdgeShape()\n  b2EdgeShape(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void b2EdgeShape::Set(const b2Vec2 & v1, const b2Vec2 & v2)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in void b2EdgeShape::Set(const b2Vec2 & v1, const b2Vec2 & v2) function, expected prototype:\nvoid b2EdgeShape::Set(const b2Vec2 & v1, const b2Vec2 & v2)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Vec2* v1_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in b2EdgeShape::Set function");
		}
		const b2Vec2 & v1=*v1_ptr;
		const b2Vec2* v2_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in b2EdgeShape::Set function");
		}
		const b2Vec2 & v2=*v2_ptr;

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2EdgeShape::Set(const b2Vec2 &, const b2Vec2 &). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(v1, v2);

		return 0;
	}

	// b2Shape * b2EdgeShape::Clone(b2BlockAllocator * allocator) const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in b2Shape * b2EdgeShape::Clone(b2BlockAllocator * allocator) const function, expected prototype:\nb2Shape * b2EdgeShape::Clone(b2BlockAllocator * allocator) const\nClass arguments details:\narg 1 ID = 76186022\n\n%s",luna_dumpStack(L).c_str());
		}

		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,2));

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Shape * b2EdgeShape::Clone(b2BlockAllocator *) const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Shape * lret = self->Clone(allocator);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Shape >::push(L,lret,false);

		return 1;
	}

	// signed int b2EdgeShape::GetChildCount() const
	static int _bind_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_GetChildCount(L)) {
			luaL_error(L, "luna typecheck failed in signed int b2EdgeShape::GetChildCount() const function, expected prototype:\nsigned int b2EdgeShape::GetChildCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call signed int b2EdgeShape::GetChildCount() const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed int lret = self->GetChildCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2EdgeShape::TestPoint(const b2Transform & transform, const b2Vec2 & p) const
	static int _bind_TestPoint(lua_State *L) {
		if (!_lg_typecheck_TestPoint(L)) {
			luaL_error(L, "luna typecheck failed in bool b2EdgeShape::TestPoint(const b2Transform & transform, const b2Vec2 & p) const function, expected prototype:\nbool b2EdgeShape::TestPoint(const b2Transform & transform, const b2Vec2 & p) const\nClass arguments details:\narg 1 ID = 44090970\narg 2 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2EdgeShape::TestPoint function");
		}
		const b2Transform & transform=*transform_ptr;
		const b2Vec2* p_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in b2EdgeShape::TestPoint function");
		}
		const b2Vec2 & p=*p_ptr;

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2EdgeShape::TestPoint(const b2Transform &, const b2Vec2 &) const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TestPoint(transform, p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2EdgeShape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const
	static int _bind_RayCast(lua_State *L) {
		if (!_lg_typecheck_RayCast(L)) {
			luaL_error(L, "luna typecheck failed in bool b2EdgeShape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nbool b2EdgeShape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 78839054\narg 2 ID = 74209205\narg 3 ID = 44090970\n\n%s",luna_dumpStack(L).c_str());
		}

		b2RayCastOutput* output=(Luna< b2RayCastOutput >::check(L,2));
		const b2RayCastInput* input_ptr=(Luna< b2RayCastInput >::check(L,3));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in b2EdgeShape::RayCast function");
		}
		const b2RayCastInput & input=*input_ptr;
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,4));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2EdgeShape::RayCast function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,5);

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2EdgeShape::RayCast(b2RayCastOutput *, const b2RayCastInput &, const b2Transform &, signed int) const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RayCast(output, input, transform, childIndex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2EdgeShape::ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const
	static int _bind_ComputeAABB(lua_State *L) {
		if (!_lg_typecheck_ComputeAABB(L)) {
			luaL_error(L, "luna typecheck failed in void b2EdgeShape::ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nvoid b2EdgeShape::ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 53833672\narg 2 ID = 44090970\n\n%s",luna_dumpStack(L).c_str());
		}

		b2AABB* aabb=(Luna< b2AABB >::check(L,2));
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2EdgeShape::ComputeAABB function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,4);

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2EdgeShape::ComputeAABB(b2AABB *, const b2Transform &, signed int) const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ComputeAABB(aabb, transform, childIndex);

		return 0;
	}

	// void b2EdgeShape::ComputeMass(b2MassData * massData, float density) const
	static int _bind_ComputeMass(lua_State *L) {
		if (!_lg_typecheck_ComputeMass(L)) {
			luaL_error(L, "luna typecheck failed in void b2EdgeShape::ComputeMass(b2MassData * massData, float density) const function, expected prototype:\nvoid b2EdgeShape::ComputeMass(b2MassData * massData, float density) const\nClass arguments details:\narg 1 ID = 24760292\n\n%s",luna_dumpStack(L).c_str());
		}

		b2MassData* massData=(Luna< b2MassData >::check(L,2));
		float density=(float)lua_tonumber(L,3);

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2EdgeShape::ComputeMass(b2MassData *, float) const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ComputeMass(massData, density);

		return 0;
	}

	// b2Vec2 b2EdgeShape::m_vertex1()
	static int _bind_getVertex1(lua_State *L) {
		if (!_lg_typecheck_getVertex1(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2EdgeShape::m_vertex1() function, expected prototype:\nb2Vec2 b2EdgeShape::m_vertex1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2EdgeShape::m_vertex1(). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->m_vertex1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2EdgeShape::m_vertex2()
	static int _bind_getVertex2(lua_State *L) {
		if (!_lg_typecheck_getVertex2(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2EdgeShape::m_vertex2() function, expected prototype:\nb2Vec2 b2EdgeShape::m_vertex2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2EdgeShape::m_vertex2(). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->m_vertex2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2EdgeShape::m_vertex0()
	static int _bind_getVertex0(lua_State *L) {
		if (!_lg_typecheck_getVertex0(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2EdgeShape::m_vertex0() function, expected prototype:\nb2Vec2 b2EdgeShape::m_vertex0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2EdgeShape::m_vertex0(). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->m_vertex0;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2EdgeShape::m_vertex3()
	static int _bind_getVertex3(lua_State *L) {
		if (!_lg_typecheck_getVertex3(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2EdgeShape::m_vertex3() function, expected prototype:\nb2Vec2 b2EdgeShape::m_vertex3()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2EdgeShape::m_vertex3(). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->m_vertex3;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// bool b2EdgeShape::m_hasVertex0()
	static int _bind_getHasVertex0(lua_State *L) {
		if (!_lg_typecheck_getHasVertex0(L)) {
			luaL_error(L, "luna typecheck failed in bool b2EdgeShape::m_hasVertex0() function, expected prototype:\nbool b2EdgeShape::m_hasVertex0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2EdgeShape::m_hasVertex0(). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->m_hasVertex0;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2EdgeShape::m_hasVertex3()
	static int _bind_getHasVertex3(lua_State *L) {
		if (!_lg_typecheck_getHasVertex3(L)) {
			luaL_error(L, "luna typecheck failed in bool b2EdgeShape::m_hasVertex3() function, expected prototype:\nbool b2EdgeShape::m_hasVertex3()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2EdgeShape::m_hasVertex3(). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->m_hasVertex3;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2EdgeShape::m_vertex1(b2Vec2 value)
	static int _bind_setVertex1(lua_State *L) {
		if (!_lg_typecheck_setVertex1(L)) {
			luaL_error(L, "luna typecheck failed in void b2EdgeShape::m_vertex1(b2Vec2 value) function, expected prototype:\nvoid b2EdgeShape::m_vertex1(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2EdgeShape::m_vertex1 function");
		}
		b2Vec2 value=*value_ptr;

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2EdgeShape::m_vertex1(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_vertex1 = value;

		return 0;
	}

	// void b2EdgeShape::m_vertex2(b2Vec2 value)
	static int _bind_setVertex2(lua_State *L) {
		if (!_lg_typecheck_setVertex2(L)) {
			luaL_error(L, "luna typecheck failed in void b2EdgeShape::m_vertex2(b2Vec2 value) function, expected prototype:\nvoid b2EdgeShape::m_vertex2(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2EdgeShape::m_vertex2 function");
		}
		b2Vec2 value=*value_ptr;

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2EdgeShape::m_vertex2(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_vertex2 = value;

		return 0;
	}

	// void b2EdgeShape::m_vertex0(b2Vec2 value)
	static int _bind_setVertex0(lua_State *L) {
		if (!_lg_typecheck_setVertex0(L)) {
			luaL_error(L, "luna typecheck failed in void b2EdgeShape::m_vertex0(b2Vec2 value) function, expected prototype:\nvoid b2EdgeShape::m_vertex0(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2EdgeShape::m_vertex0 function");
		}
		b2Vec2 value=*value_ptr;

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2EdgeShape::m_vertex0(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_vertex0 = value;

		return 0;
	}

	// void b2EdgeShape::m_vertex3(b2Vec2 value)
	static int _bind_setVertex3(lua_State *L) {
		if (!_lg_typecheck_setVertex3(L)) {
			luaL_error(L, "luna typecheck failed in void b2EdgeShape::m_vertex3(b2Vec2 value) function, expected prototype:\nvoid b2EdgeShape::m_vertex3(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2EdgeShape::m_vertex3 function");
		}
		b2Vec2 value=*value_ptr;

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2EdgeShape::m_vertex3(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_vertex3 = value;

		return 0;
	}

	// void b2EdgeShape::m_hasVertex0(bool value)
	static int _bind_setHasVertex0(lua_State *L) {
		if (!_lg_typecheck_setHasVertex0(L)) {
			luaL_error(L, "luna typecheck failed in void b2EdgeShape::m_hasVertex0(bool value) function, expected prototype:\nvoid b2EdgeShape::m_hasVertex0(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2EdgeShape::m_hasVertex0(bool). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_hasVertex0 = value;

		return 0;
	}

	// void b2EdgeShape::m_hasVertex3(bool value)
	static int _bind_setHasVertex3(lua_State *L) {
		if (!_lg_typecheck_setHasVertex3(L)) {
			luaL_error(L, "luna typecheck failed in void b2EdgeShape::m_hasVertex3(bool value) function, expected prototype:\nvoid b2EdgeShape::m_hasVertex3(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2EdgeShape::m_hasVertex3(bool). Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_hasVertex3 = value;

		return 0;
	}

	// b2Shape * b2EdgeShape::base_Clone(b2BlockAllocator * allocator) const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in b2Shape * b2EdgeShape::base_Clone(b2BlockAllocator * allocator) const function, expected prototype:\nb2Shape * b2EdgeShape::base_Clone(b2BlockAllocator * allocator) const\nClass arguments details:\narg 1 ID = 76186022\n\n%s",luna_dumpStack(L).c_str());
		}

		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,2));

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Shape * b2EdgeShape::base_Clone(b2BlockAllocator *) const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Shape * lret = self->b2EdgeShape::Clone(allocator);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Shape >::push(L,lret,false);

		return 1;
	}

	// signed int b2EdgeShape::base_GetChildCount() const
	static int _bind_base_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_base_GetChildCount(L)) {
			luaL_error(L, "luna typecheck failed in signed int b2EdgeShape::base_GetChildCount() const function, expected prototype:\nsigned int b2EdgeShape::base_GetChildCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call signed int b2EdgeShape::base_GetChildCount() const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed int lret = self->b2EdgeShape::GetChildCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2EdgeShape::base_TestPoint(const b2Transform & transform, const b2Vec2 & p) const
	static int _bind_base_TestPoint(lua_State *L) {
		if (!_lg_typecheck_base_TestPoint(L)) {
			luaL_error(L, "luna typecheck failed in bool b2EdgeShape::base_TestPoint(const b2Transform & transform, const b2Vec2 & p) const function, expected prototype:\nbool b2EdgeShape::base_TestPoint(const b2Transform & transform, const b2Vec2 & p) const\nClass arguments details:\narg 1 ID = 44090970\narg 2 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2EdgeShape::base_TestPoint function");
		}
		const b2Transform & transform=*transform_ptr;
		const b2Vec2* p_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in b2EdgeShape::base_TestPoint function");
		}
		const b2Vec2 & p=*p_ptr;

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2EdgeShape::base_TestPoint(const b2Transform &, const b2Vec2 &) const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->b2EdgeShape::TestPoint(transform, p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2EdgeShape::base_RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const
	static int _bind_base_RayCast(lua_State *L) {
		if (!_lg_typecheck_base_RayCast(L)) {
			luaL_error(L, "luna typecheck failed in bool b2EdgeShape::base_RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nbool b2EdgeShape::base_RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 78839054\narg 2 ID = 74209205\narg 3 ID = 44090970\n\n%s",luna_dumpStack(L).c_str());
		}

		b2RayCastOutput* output=(Luna< b2RayCastOutput >::check(L,2));
		const b2RayCastInput* input_ptr=(Luna< b2RayCastInput >::check(L,3));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in b2EdgeShape::base_RayCast function");
		}
		const b2RayCastInput & input=*input_ptr;
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,4));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2EdgeShape::base_RayCast function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,5);

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2EdgeShape::base_RayCast(b2RayCastOutput *, const b2RayCastInput &, const b2Transform &, signed int) const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->b2EdgeShape::RayCast(output, input, transform, childIndex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2EdgeShape::base_ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const
	static int _bind_base_ComputeAABB(lua_State *L) {
		if (!_lg_typecheck_base_ComputeAABB(L)) {
			luaL_error(L, "luna typecheck failed in void b2EdgeShape::base_ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nvoid b2EdgeShape::base_ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 53833672\narg 2 ID = 44090970\n\n%s",luna_dumpStack(L).c_str());
		}

		b2AABB* aabb=(Luna< b2AABB >::check(L,2));
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2EdgeShape::base_ComputeAABB function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,4);

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2EdgeShape::base_ComputeAABB(b2AABB *, const b2Transform &, signed int) const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->b2EdgeShape::ComputeAABB(aabb, transform, childIndex);

		return 0;
	}

	// void b2EdgeShape::base_ComputeMass(b2MassData * massData, float density) const
	static int _bind_base_ComputeMass(lua_State *L) {
		if (!_lg_typecheck_base_ComputeMass(L)) {
			luaL_error(L, "luna typecheck failed in void b2EdgeShape::base_ComputeMass(b2MassData * massData, float density) const function, expected prototype:\nvoid b2EdgeShape::base_ComputeMass(b2MassData * massData, float density) const\nClass arguments details:\narg 1 ID = 24760292\n\n%s",luna_dumpStack(L).c_str());
		}

		b2MassData* massData=(Luna< b2MassData >::check(L,2));
		float density=(float)lua_tonumber(L,3);

		b2EdgeShape* self=Luna< b2Shape >::checkSubType< b2EdgeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2EdgeShape::base_ComputeMass(b2MassData *, float) const. Got : '%s'\n%s",typeid(Luna< b2Shape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->b2EdgeShape::ComputeMass(massData, density);

		return 0;
	}


	// Operator binds:

};

b2EdgeShape* LunaTraits< b2EdgeShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2EdgeShape::_bind_ctor(L);
}

void LunaTraits< b2EdgeShape >::_bind_dtor(b2EdgeShape* obj) {
	delete obj;
}

const char LunaTraits< b2EdgeShape >::className[] = "b2EdgeShape";
const char LunaTraits< b2EdgeShape >::fullName[] = "b2EdgeShape";
const char LunaTraits< b2EdgeShape >::moduleName[] = "box2d";
const char* LunaTraits< b2EdgeShape >::parents[] = {"box2d.b2Shape", 0};
const int LunaTraits< b2EdgeShape >::hash = 40821668;
const int LunaTraits< b2EdgeShape >::uniqueIDs[] = {86660265,0};

luna_RegType LunaTraits< b2EdgeShape >::methods[] = {
	{"Set", &luna_wrapper_b2EdgeShape::_bind_Set},
	{"Clone", &luna_wrapper_b2EdgeShape::_bind_Clone},
	{"GetChildCount", &luna_wrapper_b2EdgeShape::_bind_GetChildCount},
	{"TestPoint", &luna_wrapper_b2EdgeShape::_bind_TestPoint},
	{"RayCast", &luna_wrapper_b2EdgeShape::_bind_RayCast},
	{"ComputeAABB", &luna_wrapper_b2EdgeShape::_bind_ComputeAABB},
	{"ComputeMass", &luna_wrapper_b2EdgeShape::_bind_ComputeMass},
	{"getVertex1", &luna_wrapper_b2EdgeShape::_bind_getVertex1},
	{"getVertex2", &luna_wrapper_b2EdgeShape::_bind_getVertex2},
	{"getVertex0", &luna_wrapper_b2EdgeShape::_bind_getVertex0},
	{"getVertex3", &luna_wrapper_b2EdgeShape::_bind_getVertex3},
	{"getHasVertex0", &luna_wrapper_b2EdgeShape::_bind_getHasVertex0},
	{"getHasVertex3", &luna_wrapper_b2EdgeShape::_bind_getHasVertex3},
	{"setVertex1", &luna_wrapper_b2EdgeShape::_bind_setVertex1},
	{"setVertex2", &luna_wrapper_b2EdgeShape::_bind_setVertex2},
	{"setVertex0", &luna_wrapper_b2EdgeShape::_bind_setVertex0},
	{"setVertex3", &luna_wrapper_b2EdgeShape::_bind_setVertex3},
	{"setHasVertex0", &luna_wrapper_b2EdgeShape::_bind_setHasVertex0},
	{"setHasVertex3", &luna_wrapper_b2EdgeShape::_bind_setHasVertex3},
	{"base_Clone", &luna_wrapper_b2EdgeShape::_bind_base_Clone},
	{"base_GetChildCount", &luna_wrapper_b2EdgeShape::_bind_base_GetChildCount},
	{"base_TestPoint", &luna_wrapper_b2EdgeShape::_bind_base_TestPoint},
	{"base_RayCast", &luna_wrapper_b2EdgeShape::_bind_base_RayCast},
	{"base_ComputeAABB", &luna_wrapper_b2EdgeShape::_bind_base_ComputeAABB},
	{"base_ComputeMass", &luna_wrapper_b2EdgeShape::_bind_base_ComputeMass},
	{"fromVoid", &luna_wrapper_b2EdgeShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2EdgeShape::_bind_asVoid},
	{"getTable", &luna_wrapper_b2EdgeShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2EdgeShape >::converters[] = {
	{"b2Shape", &luna_wrapper_b2EdgeShape::_cast_from_b2Shape},
	{0,0}
};

luna_RegEnumType LunaTraits< b2EdgeShape >::enumValues[] = {
	{0,0}
};


