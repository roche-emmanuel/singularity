#include <plug_common.h>

#include <luna/wrappers/wrapper_b2ChainShape.h>

class luna_wrapper_b2ChainShape {
public:
	typedef Luna< b2ChainShape > luna_t;

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

		b2ChainShape* self= (b2ChainShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2ChainShape >::push(L,self,false);
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
		//b2ChainShape* ptr= dynamic_cast< b2ChainShape* >(Luna< b2Shape >::check(L,1));
		b2ChainShape* ptr= luna_caster< b2Shape, b2ChainShape >::cast(Luna< b2Shape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2ChainShape >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_CreateLoop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,54494886)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateChain(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,54494886)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPrevVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNextVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
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

	inline static bool _lg_typecheck_GetChildEdge(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86660265)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_getVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrevVertex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNextVertex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHasPrevVertex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHasNextVertex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,54494886)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrevVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNextVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHasPrevVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHasNextVertex(lua_State *L) {
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
	// b2ChainShape::b2ChainShape()
	static b2ChainShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ChainShape::b2ChainShape() function, expected prototype:\nb2ChainShape::b2ChainShape()\nClass arguments details:\n");
		}


		return new b2ChainShape();
	}

	// b2ChainShape::b2ChainShape(lua_Table * data)
	static b2ChainShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ChainShape::b2ChainShape(lua_Table * data) function, expected prototype:\nb2ChainShape::b2ChainShape(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_b2ChainShape(L,NULL);
	}

	// Overload binder for b2ChainShape::b2ChainShape
	static b2ChainShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2ChainShape, cannot match any of the overloads for function b2ChainShape:\n  b2ChainShape()\n  b2ChainShape(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void b2ChainShape::CreateLoop(const b2Vec2 * vertices, signed int count)
	static int _bind_CreateLoop(lua_State *L) {
		if (!_lg_typecheck_CreateLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::CreateLoop(const b2Vec2 * vertices, signed int count) function, expected prototype:\nvoid b2ChainShape::CreateLoop(const b2Vec2 * vertices, signed int count)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* vertices=(Luna< b2Vec2 >::check(L,2));
		signed int count=(signed int)lua_tointeger(L,3);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::CreateLoop(const b2Vec2 *, signed int). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->CreateLoop(vertices, count);

		return 0;
	}

	// void b2ChainShape::CreateChain(const b2Vec2 * vertices, signed int count)
	static int _bind_CreateChain(lua_State *L) {
		if (!_lg_typecheck_CreateChain(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::CreateChain(const b2Vec2 * vertices, signed int count) function, expected prototype:\nvoid b2ChainShape::CreateChain(const b2Vec2 * vertices, signed int count)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* vertices=(Luna< b2Vec2 >::check(L,2));
		signed int count=(signed int)lua_tointeger(L,3);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::CreateChain(const b2Vec2 *, signed int). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->CreateChain(vertices, count);

		return 0;
	}

	// void b2ChainShape::SetPrevVertex(const b2Vec2 & prevVertex)
	static int _bind_SetPrevVertex(lua_State *L) {
		if (!_lg_typecheck_SetPrevVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::SetPrevVertex(const b2Vec2 & prevVertex) function, expected prototype:\nvoid b2ChainShape::SetPrevVertex(const b2Vec2 & prevVertex)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* prevVertex_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !prevVertex_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prevVertex in b2ChainShape::SetPrevVertex function");
		}
		const b2Vec2 & prevVertex=*prevVertex_ptr;

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::SetPrevVertex(const b2Vec2 &). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->SetPrevVertex(prevVertex);

		return 0;
	}

	// void b2ChainShape::SetNextVertex(const b2Vec2 & nextVertex)
	static int _bind_SetNextVertex(lua_State *L) {
		if (!_lg_typecheck_SetNextVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::SetNextVertex(const b2Vec2 & nextVertex) function, expected prototype:\nvoid b2ChainShape::SetNextVertex(const b2Vec2 & nextVertex)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* nextVertex_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !nextVertex_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nextVertex in b2ChainShape::SetNextVertex function");
		}
		const b2Vec2 & nextVertex=*nextVertex_ptr;

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::SetNextVertex(const b2Vec2 &). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->SetNextVertex(nextVertex);

		return 0;
	}

	// b2Shape * b2ChainShape::Clone(b2BlockAllocator * allocator) const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Shape * b2ChainShape::Clone(b2BlockAllocator * allocator) const function, expected prototype:\nb2Shape * b2ChainShape::Clone(b2BlockAllocator * allocator) const\nClass arguments details:\narg 1 ID = 76186022\n");
		}

		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,2));

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Shape * b2ChainShape::Clone(b2BlockAllocator *) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		b2Shape * lret = self->Clone(allocator);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Shape >::push(L,lret,false);

		return 1;
	}

	// signed int b2ChainShape::GetChildCount() const
	static int _bind_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_GetChildCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2ChainShape::GetChildCount() const function, expected prototype:\nsigned int b2ChainShape::GetChildCount() const\nClass arguments details:\n");
		}


		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2ChainShape::GetChildCount() const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		signed int lret = self->GetChildCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2ChainShape::GetChildEdge(b2EdgeShape * edge, signed int index) const
	static int _bind_GetChildEdge(lua_State *L) {
		if (!_lg_typecheck_GetChildEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::GetChildEdge(b2EdgeShape * edge, signed int index) const function, expected prototype:\nvoid b2ChainShape::GetChildEdge(b2EdgeShape * edge, signed int index) const\nClass arguments details:\narg 1 ID = 86660265\n");
		}

		b2EdgeShape* edge=(Luna< b2Shape >::checkSubType< b2EdgeShape >(L,2));
		signed int index=(signed int)lua_tointeger(L,3);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::GetChildEdge(b2EdgeShape *, signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->GetChildEdge(edge, index);

		return 0;
	}

	// bool b2ChainShape::TestPoint(const b2Transform & transform, const b2Vec2 & p) const
	static int _bind_TestPoint(lua_State *L) {
		if (!_lg_typecheck_TestPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2ChainShape::TestPoint(const b2Transform & transform, const b2Vec2 & p) const function, expected prototype:\nbool b2ChainShape::TestPoint(const b2Transform & transform, const b2Vec2 & p) const\nClass arguments details:\narg 1 ID = 44090970\narg 2 ID = 54494886\n");
		}

		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2ChainShape::TestPoint function");
		}
		const b2Transform & transform=*transform_ptr;
		const b2Vec2* p_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in b2ChainShape::TestPoint function");
		}
		const b2Vec2 & p=*p_ptr;

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2ChainShape::TestPoint(const b2Transform &, const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->TestPoint(transform, p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2ChainShape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const
	static int _bind_RayCast(lua_State *L) {
		if (!_lg_typecheck_RayCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2ChainShape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nbool b2ChainShape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 78839054\narg 2 ID = 74209205\narg 3 ID = 44090970\n");
		}

		b2RayCastOutput* output=(Luna< b2RayCastOutput >::check(L,2));
		const b2RayCastInput* input_ptr=(Luna< b2RayCastInput >::check(L,3));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in b2ChainShape::RayCast function");
		}
		const b2RayCastInput & input=*input_ptr;
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,4));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2ChainShape::RayCast function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,5);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2ChainShape::RayCast(b2RayCastOutput *, const b2RayCastInput &, const b2Transform &, signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->RayCast(output, input, transform, childIndex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2ChainShape::ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const
	static int _bind_ComputeAABB(lua_State *L) {
		if (!_lg_typecheck_ComputeAABB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nvoid b2ChainShape::ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 53833672\narg 2 ID = 44090970\n");
		}

		b2AABB* aabb=(Luna< b2AABB >::check(L,2));
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2ChainShape::ComputeAABB function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,4);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::ComputeAABB(b2AABB *, const b2Transform &, signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->ComputeAABB(aabb, transform, childIndex);

		return 0;
	}

	// void b2ChainShape::ComputeMass(b2MassData * massData, float density) const
	static int _bind_ComputeMass(lua_State *L) {
		if (!_lg_typecheck_ComputeMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::ComputeMass(b2MassData * massData, float density) const function, expected prototype:\nvoid b2ChainShape::ComputeMass(b2MassData * massData, float density) const\nClass arguments details:\narg 1 ID = 24760292\n");
		}

		b2MassData* massData=(Luna< b2MassData >::check(L,2));
		float density=(float)lua_tonumber(L,3);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::ComputeMass(b2MassData *, float) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->ComputeMass(massData, density);

		return 0;
	}

	// b2Vec2 * b2ChainShape::m_vertices()
	static int _bind_getVertices(lua_State *L) {
		if (!_lg_typecheck_getVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 * b2ChainShape::m_vertices() function, expected prototype:\nb2Vec2 * b2ChainShape::m_vertices()\nClass arguments details:\n");
		}


		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 * b2ChainShape::m_vertices(). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		b2Vec2 * lret = self->m_vertices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// signed int b2ChainShape::m_count()
	static int _bind_getCount(lua_State *L) {
		if (!_lg_typecheck_getCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2ChainShape::m_count() function, expected prototype:\nsigned int b2ChainShape::m_count()\nClass arguments details:\n");
		}


		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2ChainShape::m_count(). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		signed int lret = self->m_count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Vec2 b2ChainShape::m_prevVertex()
	static int _bind_getPrevVertex(lua_State *L) {
		if (!_lg_typecheck_getPrevVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2ChainShape::m_prevVertex() function, expected prototype:\nb2Vec2 b2ChainShape::m_prevVertex()\nClass arguments details:\n");
		}


		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2ChainShape::m_prevVertex(). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->m_prevVertex;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2ChainShape::m_nextVertex()
	static int _bind_getNextVertex(lua_State *L) {
		if (!_lg_typecheck_getNextVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2ChainShape::m_nextVertex() function, expected prototype:\nb2Vec2 b2ChainShape::m_nextVertex()\nClass arguments details:\n");
		}


		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2ChainShape::m_nextVertex(). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->m_nextVertex;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// bool b2ChainShape::m_hasPrevVertex()
	static int _bind_getHasPrevVertex(lua_State *L) {
		if (!_lg_typecheck_getHasPrevVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2ChainShape::m_hasPrevVertex() function, expected prototype:\nbool b2ChainShape::m_hasPrevVertex()\nClass arguments details:\n");
		}


		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2ChainShape::m_hasPrevVertex(). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->m_hasPrevVertex;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2ChainShape::m_hasNextVertex()
	static int _bind_getHasNextVertex(lua_State *L) {
		if (!_lg_typecheck_getHasNextVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2ChainShape::m_hasNextVertex() function, expected prototype:\nbool b2ChainShape::m_hasNextVertex()\nClass arguments details:\n");
		}


		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2ChainShape::m_hasNextVertex(). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->m_hasNextVertex;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2ChainShape::m_vertices(b2Vec2 * value)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::m_vertices(b2Vec2 * value) function, expected prototype:\nvoid b2ChainShape::m_vertices(b2Vec2 * value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value=(Luna< b2Vec2 >::check(L,2));

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::m_vertices(b2Vec2 *). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->m_vertices = value;

		return 0;
	}

	// void b2ChainShape::m_count(signed int value)
	static int _bind_setCount(lua_State *L) {
		if (!_lg_typecheck_setCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::m_count(signed int value) function, expected prototype:\nvoid b2ChainShape::m_count(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::m_count(signed int). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->m_count = value;

		return 0;
	}

	// void b2ChainShape::m_prevVertex(b2Vec2 value)
	static int _bind_setPrevVertex(lua_State *L) {
		if (!_lg_typecheck_setPrevVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::m_prevVertex(b2Vec2 value) function, expected prototype:\nvoid b2ChainShape::m_prevVertex(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2ChainShape::m_prevVertex function");
		}
		b2Vec2 value=*value_ptr;

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::m_prevVertex(b2Vec2). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->m_prevVertex = value;

		return 0;
	}

	// void b2ChainShape::m_nextVertex(b2Vec2 value)
	static int _bind_setNextVertex(lua_State *L) {
		if (!_lg_typecheck_setNextVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::m_nextVertex(b2Vec2 value) function, expected prototype:\nvoid b2ChainShape::m_nextVertex(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2ChainShape::m_nextVertex function");
		}
		b2Vec2 value=*value_ptr;

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::m_nextVertex(b2Vec2). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->m_nextVertex = value;

		return 0;
	}

	// void b2ChainShape::m_hasPrevVertex(bool value)
	static int _bind_setHasPrevVertex(lua_State *L) {
		if (!_lg_typecheck_setHasPrevVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::m_hasPrevVertex(bool value) function, expected prototype:\nvoid b2ChainShape::m_hasPrevVertex(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::m_hasPrevVertex(bool). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->m_hasPrevVertex = value;

		return 0;
	}

	// void b2ChainShape::m_hasNextVertex(bool value)
	static int _bind_setHasNextVertex(lua_State *L) {
		if (!_lg_typecheck_setHasNextVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::m_hasNextVertex(bool value) function, expected prototype:\nvoid b2ChainShape::m_hasNextVertex(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::m_hasNextVertex(bool). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->m_hasNextVertex = value;

		return 0;
	}

	// b2Shape * b2ChainShape::base_Clone(b2BlockAllocator * allocator) const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Shape * b2ChainShape::base_Clone(b2BlockAllocator * allocator) const function, expected prototype:\nb2Shape * b2ChainShape::base_Clone(b2BlockAllocator * allocator) const\nClass arguments details:\narg 1 ID = 76186022\n");
		}

		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,2));

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Shape * b2ChainShape::base_Clone(b2BlockAllocator *) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		b2Shape * lret = self->b2ChainShape::Clone(allocator);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Shape >::push(L,lret,false);

		return 1;
	}

	// signed int b2ChainShape::base_GetChildCount() const
	static int _bind_base_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_base_GetChildCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2ChainShape::base_GetChildCount() const function, expected prototype:\nsigned int b2ChainShape::base_GetChildCount() const\nClass arguments details:\n");
		}


		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2ChainShape::base_GetChildCount() const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		signed int lret = self->b2ChainShape::GetChildCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2ChainShape::base_TestPoint(const b2Transform & transform, const b2Vec2 & p) const
	static int _bind_base_TestPoint(lua_State *L) {
		if (!_lg_typecheck_base_TestPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2ChainShape::base_TestPoint(const b2Transform & transform, const b2Vec2 & p) const function, expected prototype:\nbool b2ChainShape::base_TestPoint(const b2Transform & transform, const b2Vec2 & p) const\nClass arguments details:\narg 1 ID = 44090970\narg 2 ID = 54494886\n");
		}

		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2ChainShape::base_TestPoint function");
		}
		const b2Transform & transform=*transform_ptr;
		const b2Vec2* p_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in b2ChainShape::base_TestPoint function");
		}
		const b2Vec2 & p=*p_ptr;

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2ChainShape::base_TestPoint(const b2Transform &, const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->b2ChainShape::TestPoint(transform, p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2ChainShape::base_RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const
	static int _bind_base_RayCast(lua_State *L) {
		if (!_lg_typecheck_base_RayCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2ChainShape::base_RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nbool b2ChainShape::base_RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 78839054\narg 2 ID = 74209205\narg 3 ID = 44090970\n");
		}

		b2RayCastOutput* output=(Luna< b2RayCastOutput >::check(L,2));
		const b2RayCastInput* input_ptr=(Luna< b2RayCastInput >::check(L,3));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in b2ChainShape::base_RayCast function");
		}
		const b2RayCastInput & input=*input_ptr;
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,4));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2ChainShape::base_RayCast function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,5);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2ChainShape::base_RayCast(b2RayCastOutput *, const b2RayCastInput &, const b2Transform &, signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->b2ChainShape::RayCast(output, input, transform, childIndex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2ChainShape::base_ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const
	static int _bind_base_ComputeAABB(lua_State *L) {
		if (!_lg_typecheck_base_ComputeAABB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::base_ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nvoid b2ChainShape::base_ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 53833672\narg 2 ID = 44090970\n");
		}

		b2AABB* aabb=(Luna< b2AABB >::check(L,2));
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2ChainShape::base_ComputeAABB function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,4);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::base_ComputeAABB(b2AABB *, const b2Transform &, signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->b2ChainShape::ComputeAABB(aabb, transform, childIndex);

		return 0;
	}

	// void b2ChainShape::base_ComputeMass(b2MassData * massData, float density) const
	static int _bind_base_ComputeMass(lua_State *L) {
		if (!_lg_typecheck_base_ComputeMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ChainShape::base_ComputeMass(b2MassData * massData, float density) const function, expected prototype:\nvoid b2ChainShape::base_ComputeMass(b2MassData * massData, float density) const\nClass arguments details:\narg 1 ID = 24760292\n");
		}

		b2MassData* massData=(Luna< b2MassData >::check(L,2));
		float density=(float)lua_tonumber(L,3);

		b2ChainShape* self=Luna< b2Shape >::checkSubType< b2ChainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ChainShape::base_ComputeMass(b2MassData *, float) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->b2ChainShape::ComputeMass(massData, density);

		return 0;
	}


	// Operator binds:

};

b2ChainShape* LunaTraits< b2ChainShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2ChainShape::_bind_ctor(L);
}

void LunaTraits< b2ChainShape >::_bind_dtor(b2ChainShape* obj) {
	delete obj;
}

const char LunaTraits< b2ChainShape >::className[] = "b2ChainShape";
const char LunaTraits< b2ChainShape >::fullName[] = "b2ChainShape";
const char LunaTraits< b2ChainShape >::moduleName[] = "box2d";
const char* LunaTraits< b2ChainShape >::parents[] = {"box2d.b2Shape", 0};
const int LunaTraits< b2ChainShape >::hash = 17873589;
const int LunaTraits< b2ChainShape >::uniqueIDs[] = {86660265,0};

luna_RegType LunaTraits< b2ChainShape >::methods[] = {
	{"CreateLoop", &luna_wrapper_b2ChainShape::_bind_CreateLoop},
	{"CreateChain", &luna_wrapper_b2ChainShape::_bind_CreateChain},
	{"SetPrevVertex", &luna_wrapper_b2ChainShape::_bind_SetPrevVertex},
	{"SetNextVertex", &luna_wrapper_b2ChainShape::_bind_SetNextVertex},
	{"Clone", &luna_wrapper_b2ChainShape::_bind_Clone},
	{"GetChildCount", &luna_wrapper_b2ChainShape::_bind_GetChildCount},
	{"GetChildEdge", &luna_wrapper_b2ChainShape::_bind_GetChildEdge},
	{"TestPoint", &luna_wrapper_b2ChainShape::_bind_TestPoint},
	{"RayCast", &luna_wrapper_b2ChainShape::_bind_RayCast},
	{"ComputeAABB", &luna_wrapper_b2ChainShape::_bind_ComputeAABB},
	{"ComputeMass", &luna_wrapper_b2ChainShape::_bind_ComputeMass},
	{"getVertices", &luna_wrapper_b2ChainShape::_bind_getVertices},
	{"getCount", &luna_wrapper_b2ChainShape::_bind_getCount},
	{"getPrevVertex", &luna_wrapper_b2ChainShape::_bind_getPrevVertex},
	{"getNextVertex", &luna_wrapper_b2ChainShape::_bind_getNextVertex},
	{"getHasPrevVertex", &luna_wrapper_b2ChainShape::_bind_getHasPrevVertex},
	{"getHasNextVertex", &luna_wrapper_b2ChainShape::_bind_getHasNextVertex},
	{"setVertices", &luna_wrapper_b2ChainShape::_bind_setVertices},
	{"setCount", &luna_wrapper_b2ChainShape::_bind_setCount},
	{"setPrevVertex", &luna_wrapper_b2ChainShape::_bind_setPrevVertex},
	{"setNextVertex", &luna_wrapper_b2ChainShape::_bind_setNextVertex},
	{"setHasPrevVertex", &luna_wrapper_b2ChainShape::_bind_setHasPrevVertex},
	{"setHasNextVertex", &luna_wrapper_b2ChainShape::_bind_setHasNextVertex},
	{"base_Clone", &luna_wrapper_b2ChainShape::_bind_base_Clone},
	{"base_GetChildCount", &luna_wrapper_b2ChainShape::_bind_base_GetChildCount},
	{"base_TestPoint", &luna_wrapper_b2ChainShape::_bind_base_TestPoint},
	{"base_RayCast", &luna_wrapper_b2ChainShape::_bind_base_RayCast},
	{"base_ComputeAABB", &luna_wrapper_b2ChainShape::_bind_base_ComputeAABB},
	{"base_ComputeMass", &luna_wrapper_b2ChainShape::_bind_base_ComputeMass},
	{"__eq", &luna_wrapper_b2ChainShape::_bind___eq},
	{"fromVoid", &luna_wrapper_b2ChainShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2ChainShape::_bind_asVoid},
	{"getTable", &luna_wrapper_b2ChainShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2ChainShape >::converters[] = {
	{"b2Shape", &luna_wrapper_b2ChainShape::_cast_from_b2Shape},
	{0,0}
};

luna_RegEnumType LunaTraits< b2ChainShape >::enumValues[] = {
	{0,0}
};


