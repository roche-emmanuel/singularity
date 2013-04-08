#include <plug_common.h>

#include <luna/wrappers/wrapper_b2PolygonShape.h>

class luna_wrapper_b2PolygonShape {
public:
	typedef Luna< b2PolygonShape > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86660265) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Shape*)");
		}

		b2Shape* rhs =(Luna< b2Shape >::check(L,2));
		b2Shape* self=(Luna< b2Shape >::check(L,1));
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

		b2PolygonShape* self= (b2PolygonShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2PolygonShape >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86660265) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
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
		//b2PolygonShape* ptr= dynamic_cast< b2PolygonShape* >(Luna< b2Shape >::check(L,1));
		b2PolygonShape* ptr= luna_caster< b2Shape, b2PolygonShape >::cast(Luna< b2Shape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2PolygonShape >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,76186022)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,54494886)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAsBox_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAsBox_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,54494886) ) return false;
		if( (!(Luna< b2Vec2 >::check(L,4))) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
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
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ComputeAABB(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53833672)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ComputeMass(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,24760292)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVertexCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCentroid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCentroid(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ComputeAABB(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53833672)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ComputeMass(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,24760292)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2PolygonShape::b2PolygonShape()
	static b2PolygonShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2PolygonShape::b2PolygonShape() function, expected prototype:\nb2PolygonShape::b2PolygonShape()\nClass arguments details:\n");
		}


		return new b2PolygonShape();
	}

	// b2PolygonShape::b2PolygonShape(lua_Table * data)
	static b2PolygonShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2PolygonShape::b2PolygonShape(lua_Table * data) function, expected prototype:\nb2PolygonShape::b2PolygonShape(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_b2PolygonShape(L,NULL);
	}

	// Overload binder for b2PolygonShape::b2PolygonShape
	static b2PolygonShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2PolygonShape, cannot match any of the overloads for function b2PolygonShape:\n  b2PolygonShape()\n  b2PolygonShape(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// b2Shape * b2PolygonShape::Clone(b2BlockAllocator * allocator) const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Shape * b2PolygonShape::Clone(b2BlockAllocator * allocator) const function, expected prototype:\nb2Shape * b2PolygonShape::Clone(b2BlockAllocator * allocator) const\nClass arguments details:\narg 1 ID = 76186022\n");
		}

		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,2));

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Shape * b2PolygonShape::Clone(b2BlockAllocator *) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		b2Shape * lret = self->Clone(allocator);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Shape >::push(L,lret,false);

		return 1;
	}

	// signed int b2PolygonShape::GetChildCount() const
	static int _bind_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_GetChildCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2PolygonShape::GetChildCount() const function, expected prototype:\nsigned int b2PolygonShape::GetChildCount() const\nClass arguments details:\n");
		}


		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2PolygonShape::GetChildCount() const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		signed int lret = self->GetChildCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2PolygonShape::Set(const b2Vec2 * vertices, signed int vertexCount)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PolygonShape::Set(const b2Vec2 * vertices, signed int vertexCount) function, expected prototype:\nvoid b2PolygonShape::Set(const b2Vec2 * vertices, signed int vertexCount)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* vertices=(Luna< b2Vec2 >::check(L,2));
		signed int vertexCount=(signed int)lua_tointeger(L,3);

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PolygonShape::Set(const b2Vec2 *, signed int). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->Set(vertices, vertexCount);

		return 0;
	}

	// void b2PolygonShape::SetAsBox(float hx, float hy)
	static int _bind_SetAsBox_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetAsBox_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PolygonShape::SetAsBox(float hx, float hy) function, expected prototype:\nvoid b2PolygonShape::SetAsBox(float hx, float hy)\nClass arguments details:\n");
		}

		float hx=(float)lua_tonumber(L,2);
		float hy=(float)lua_tonumber(L,3);

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PolygonShape::SetAsBox(float, float). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->SetAsBox(hx, hy);

		return 0;
	}

	// void b2PolygonShape::SetAsBox(float hx, float hy, const b2Vec2 & center, float angle)
	static int _bind_SetAsBox_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetAsBox_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PolygonShape::SetAsBox(float hx, float hy, const b2Vec2 & center, float angle) function, expected prototype:\nvoid b2PolygonShape::SetAsBox(float hx, float hy, const b2Vec2 & center, float angle)\nClass arguments details:\narg 3 ID = 54494886\n");
		}

		float hx=(float)lua_tonumber(L,2);
		float hy=(float)lua_tonumber(L,3);
		const b2Vec2* center_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in b2PolygonShape::SetAsBox function");
		}
		const b2Vec2 & center=*center_ptr;
		float angle=(float)lua_tonumber(L,5);

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PolygonShape::SetAsBox(float, float, const b2Vec2 &, float). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->SetAsBox(hx, hy, center, angle);

		return 0;
	}

	// Overload binder for b2PolygonShape::SetAsBox
	static int _bind_SetAsBox(lua_State *L) {
		if (_lg_typecheck_SetAsBox_overload_1(L)) return _bind_SetAsBox_overload_1(L);
		if (_lg_typecheck_SetAsBox_overload_2(L)) return _bind_SetAsBox_overload_2(L);

		luaL_error(L, "error in function SetAsBox, cannot match any of the overloads for function SetAsBox:\n  SetAsBox(float, float)\n  SetAsBox(float, float, const b2Vec2 &, float)\n");
		return 0;
	}

	// bool b2PolygonShape::TestPoint(const b2Transform & transform, const b2Vec2 & p) const
	static int _bind_TestPoint(lua_State *L) {
		if (!_lg_typecheck_TestPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2PolygonShape::TestPoint(const b2Transform & transform, const b2Vec2 & p) const function, expected prototype:\nbool b2PolygonShape::TestPoint(const b2Transform & transform, const b2Vec2 & p) const\nClass arguments details:\narg 1 ID = 44090970\narg 2 ID = 54494886\n");
		}

		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2PolygonShape::TestPoint function");
		}
		const b2Transform & transform=*transform_ptr;
		const b2Vec2* p_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in b2PolygonShape::TestPoint function");
		}
		const b2Vec2 & p=*p_ptr;

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2PolygonShape::TestPoint(const b2Transform &, const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->TestPoint(transform, p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2PolygonShape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const
	static int _bind_RayCast(lua_State *L) {
		if (!_lg_typecheck_RayCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2PolygonShape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nbool b2PolygonShape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 78839054\narg 2 ID = 74209205\narg 3 ID = 44090970\n");
		}

		b2RayCastOutput* output=(Luna< b2RayCastOutput >::check(L,2));
		const b2RayCastInput* input_ptr=(Luna< b2RayCastInput >::check(L,3));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in b2PolygonShape::RayCast function");
		}
		const b2RayCastInput & input=*input_ptr;
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,4));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2PolygonShape::RayCast function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,5);

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2PolygonShape::RayCast(b2RayCastOutput *, const b2RayCastInput &, const b2Transform &, signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->RayCast(output, input, transform, childIndex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2PolygonShape::ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const
	static int _bind_ComputeAABB(lua_State *L) {
		if (!_lg_typecheck_ComputeAABB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PolygonShape::ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nvoid b2PolygonShape::ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 53833672\narg 2 ID = 44090970\n");
		}

		b2AABB* aabb=(Luna< b2AABB >::check(L,2));
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2PolygonShape::ComputeAABB function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,4);

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PolygonShape::ComputeAABB(b2AABB *, const b2Transform &, signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->ComputeAABB(aabb, transform, childIndex);

		return 0;
	}

	// void b2PolygonShape::ComputeMass(b2MassData * massData, float density) const
	static int _bind_ComputeMass(lua_State *L) {
		if (!_lg_typecheck_ComputeMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PolygonShape::ComputeMass(b2MassData * massData, float density) const function, expected prototype:\nvoid b2PolygonShape::ComputeMass(b2MassData * massData, float density) const\nClass arguments details:\narg 1 ID = 24760292\n");
		}

		b2MassData* massData=(Luna< b2MassData >::check(L,2));
		float density=(float)lua_tonumber(L,3);

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PolygonShape::ComputeMass(b2MassData *, float) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->ComputeMass(massData, density);

		return 0;
	}

	// signed int b2PolygonShape::GetVertexCount() const
	static int _bind_GetVertexCount(lua_State *L) {
		if (!_lg_typecheck_GetVertexCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2PolygonShape::GetVertexCount() const function, expected prototype:\nsigned int b2PolygonShape::GetVertexCount() const\nClass arguments details:\n");
		}


		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2PolygonShape::GetVertexCount() const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		signed int lret = self->GetVertexCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const b2Vec2 & b2PolygonShape::GetVertex(signed int index) const
	static int _bind_GetVertex(lua_State *L) {
		if (!_lg_typecheck_GetVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2PolygonShape::GetVertex(signed int index) const function, expected prototype:\nconst b2Vec2 & b2PolygonShape::GetVertex(signed int index) const\nClass arguments details:\n");
		}

		signed int index=(signed int)lua_tointeger(L,2);

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2PolygonShape::GetVertex(signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetVertex(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2PolygonShape::m_centroid()
	static int _bind_getCentroid(lua_State *L) {
		if (!_lg_typecheck_getCentroid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PolygonShape::m_centroid() function, expected prototype:\nb2Vec2 b2PolygonShape::m_centroid()\nClass arguments details:\n");
		}


		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PolygonShape::m_centroid(). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->m_centroid;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// signed int b2PolygonShape::m_vertexCount()
	static int _bind_getVertexCount(lua_State *L) {
		if (!_lg_typecheck_getVertexCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2PolygonShape::m_vertexCount() function, expected prototype:\nsigned int b2PolygonShape::m_vertexCount()\nClass arguments details:\n");
		}


		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2PolygonShape::m_vertexCount(). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		signed int lret = self->m_vertexCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2PolygonShape::m_centroid(b2Vec2 value)
	static int _bind_setCentroid(lua_State *L) {
		if (!_lg_typecheck_setCentroid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PolygonShape::m_centroid(b2Vec2 value) function, expected prototype:\nvoid b2PolygonShape::m_centroid(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2PolygonShape::m_centroid function");
		}
		b2Vec2 value=*value_ptr;

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PolygonShape::m_centroid(b2Vec2). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->m_centroid = value;

		return 0;
	}

	// void b2PolygonShape::m_vertexCount(signed int value)
	static int _bind_setVertexCount(lua_State *L) {
		if (!_lg_typecheck_setVertexCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PolygonShape::m_vertexCount(signed int value) function, expected prototype:\nvoid b2PolygonShape::m_vertexCount(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PolygonShape::m_vertexCount(signed int). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->m_vertexCount = value;

		return 0;
	}

	// b2Shape * b2PolygonShape::base_Clone(b2BlockAllocator * allocator) const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Shape * b2PolygonShape::base_Clone(b2BlockAllocator * allocator) const function, expected prototype:\nb2Shape * b2PolygonShape::base_Clone(b2BlockAllocator * allocator) const\nClass arguments details:\narg 1 ID = 76186022\n");
		}

		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,2));

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Shape * b2PolygonShape::base_Clone(b2BlockAllocator *) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		b2Shape * lret = self->b2PolygonShape::Clone(allocator);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Shape >::push(L,lret,false);

		return 1;
	}

	// signed int b2PolygonShape::base_GetChildCount() const
	static int _bind_base_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_base_GetChildCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2PolygonShape::base_GetChildCount() const function, expected prototype:\nsigned int b2PolygonShape::base_GetChildCount() const\nClass arguments details:\n");
		}


		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2PolygonShape::base_GetChildCount() const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		signed int lret = self->b2PolygonShape::GetChildCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2PolygonShape::base_TestPoint(const b2Transform & transform, const b2Vec2 & p) const
	static int _bind_base_TestPoint(lua_State *L) {
		if (!_lg_typecheck_base_TestPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2PolygonShape::base_TestPoint(const b2Transform & transform, const b2Vec2 & p) const function, expected prototype:\nbool b2PolygonShape::base_TestPoint(const b2Transform & transform, const b2Vec2 & p) const\nClass arguments details:\narg 1 ID = 44090970\narg 2 ID = 54494886\n");
		}

		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2PolygonShape::base_TestPoint function");
		}
		const b2Transform & transform=*transform_ptr;
		const b2Vec2* p_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in b2PolygonShape::base_TestPoint function");
		}
		const b2Vec2 & p=*p_ptr;

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2PolygonShape::base_TestPoint(const b2Transform &, const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->b2PolygonShape::TestPoint(transform, p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2PolygonShape::base_RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const
	static int _bind_base_RayCast(lua_State *L) {
		if (!_lg_typecheck_base_RayCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2PolygonShape::base_RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nbool b2PolygonShape::base_RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 78839054\narg 2 ID = 74209205\narg 3 ID = 44090970\n");
		}

		b2RayCastOutput* output=(Luna< b2RayCastOutput >::check(L,2));
		const b2RayCastInput* input_ptr=(Luna< b2RayCastInput >::check(L,3));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in b2PolygonShape::base_RayCast function");
		}
		const b2RayCastInput & input=*input_ptr;
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,4));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2PolygonShape::base_RayCast function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,5);

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2PolygonShape::base_RayCast(b2RayCastOutput *, const b2RayCastInput &, const b2Transform &, signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->b2PolygonShape::RayCast(output, input, transform, childIndex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2PolygonShape::base_ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const
	static int _bind_base_ComputeAABB(lua_State *L) {
		if (!_lg_typecheck_base_ComputeAABB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PolygonShape::base_ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nvoid b2PolygonShape::base_ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 53833672\narg 2 ID = 44090970\n");
		}

		b2AABB* aabb=(Luna< b2AABB >::check(L,2));
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2PolygonShape::base_ComputeAABB function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,4);

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PolygonShape::base_ComputeAABB(b2AABB *, const b2Transform &, signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->b2PolygonShape::ComputeAABB(aabb, transform, childIndex);

		return 0;
	}

	// void b2PolygonShape::base_ComputeMass(b2MassData * massData, float density) const
	static int _bind_base_ComputeMass(lua_State *L) {
		if (!_lg_typecheck_base_ComputeMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PolygonShape::base_ComputeMass(b2MassData * massData, float density) const function, expected prototype:\nvoid b2PolygonShape::base_ComputeMass(b2MassData * massData, float density) const\nClass arguments details:\narg 1 ID = 24760292\n");
		}

		b2MassData* massData=(Luna< b2MassData >::check(L,2));
		float density=(float)lua_tonumber(L,3);

		b2PolygonShape* self=Luna< b2Shape >::checkSubType< b2PolygonShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PolygonShape::base_ComputeMass(b2MassData *, float) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->b2PolygonShape::ComputeMass(massData, density);

		return 0;
	}


	// Operator binds:

};

b2PolygonShape* LunaTraits< b2PolygonShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2PolygonShape::_bind_ctor(L);
}

void LunaTraits< b2PolygonShape >::_bind_dtor(b2PolygonShape* obj) {
	delete obj;
}

const char LunaTraits< b2PolygonShape >::className[] = "b2PolygonShape";
const char LunaTraits< b2PolygonShape >::fullName[] = "b2PolygonShape";
const char LunaTraits< b2PolygonShape >::moduleName[] = "box2d";
const char* LunaTraits< b2PolygonShape >::parents[] = {"box2d.b2Shape", 0};
const int LunaTraits< b2PolygonShape >::hash = 52437166;
const int LunaTraits< b2PolygonShape >::uniqueIDs[] = {86660265,0};

luna_RegType LunaTraits< b2PolygonShape >::methods[] = {
	{"Clone", &luna_wrapper_b2PolygonShape::_bind_Clone},
	{"GetChildCount", &luna_wrapper_b2PolygonShape::_bind_GetChildCount},
	{"Set", &luna_wrapper_b2PolygonShape::_bind_Set},
	{"SetAsBox", &luna_wrapper_b2PolygonShape::_bind_SetAsBox},
	{"TestPoint", &luna_wrapper_b2PolygonShape::_bind_TestPoint},
	{"RayCast", &luna_wrapper_b2PolygonShape::_bind_RayCast},
	{"ComputeAABB", &luna_wrapper_b2PolygonShape::_bind_ComputeAABB},
	{"ComputeMass", &luna_wrapper_b2PolygonShape::_bind_ComputeMass},
	{"GetVertexCount", &luna_wrapper_b2PolygonShape::_bind_GetVertexCount},
	{"GetVertex", &luna_wrapper_b2PolygonShape::_bind_GetVertex},
	{"getCentroid", &luna_wrapper_b2PolygonShape::_bind_getCentroid},
	{"getVertexCount", &luna_wrapper_b2PolygonShape::_bind_getVertexCount},
	{"setCentroid", &luna_wrapper_b2PolygonShape::_bind_setCentroid},
	{"setVertexCount", &luna_wrapper_b2PolygonShape::_bind_setVertexCount},
	{"base_Clone", &luna_wrapper_b2PolygonShape::_bind_base_Clone},
	{"base_GetChildCount", &luna_wrapper_b2PolygonShape::_bind_base_GetChildCount},
	{"base_TestPoint", &luna_wrapper_b2PolygonShape::_bind_base_TestPoint},
	{"base_RayCast", &luna_wrapper_b2PolygonShape::_bind_base_RayCast},
	{"base_ComputeAABB", &luna_wrapper_b2PolygonShape::_bind_base_ComputeAABB},
	{"base_ComputeMass", &luna_wrapper_b2PolygonShape::_bind_base_ComputeMass},
	{"__eq", &luna_wrapper_b2PolygonShape::_bind___eq},
	{"fromVoid", &luna_wrapper_b2PolygonShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2PolygonShape::_bind_asVoid},
	{"getTable", &luna_wrapper_b2PolygonShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2PolygonShape >::converters[] = {
	{"b2Shape", &luna_wrapper_b2PolygonShape::_cast_from_b2Shape},
	{0,0}
};

luna_RegEnumType LunaTraits< b2PolygonShape >::enumValues[] = {
	{0,0}
};


