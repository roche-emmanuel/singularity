#include <plug_common.h>

class luna_wrapper_btAABB {
public:
	typedef Luna< btAABB > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14786052) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAABB*)");
		}

		btAABB* rhs =(Luna< btAABB >::check(L,2));
		btAABB* self=(Luna< btAABB >::check(L,1));
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

		btAABB* self= (btAABB*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btAABB >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14786052) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btAABB >::check(L,1));
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

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAABB");
		
		return luna_dynamicCast(L,converters,"btAABB",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14786052) ) return false;
		if( (!(Luna< btAABB >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14786052) ) return false;
		if( (!(Luna< btAABB >::check(L,1))) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_invalidate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_increment_margin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copy_with_margin(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_appy_transform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_appy_transform_trans_cache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92922844) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_merge(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_center_extend(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_find_intersection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_has_collision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collide_ray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_projection_interval(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_plane_classify(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_overlapping_trans_conservative(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_overlapping_trans_conservative2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92922844) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_overlapping_trans_cache(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92922844) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collide_plane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collide_triangle_exact(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btAABB::btAABB()
	static btAABB* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAABB::btAABB() function, expected prototype:\nbtAABB::btAABB()\nClass arguments details:\n");
		}


		return new btAABB();
	}

	// btAABB::btAABB(const btVector3 & V1, const btVector3 & V2, const btVector3 & V3)
	static btAABB* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAABB::btAABB(const btVector3 & V1, const btVector3 & V2, const btVector3 & V3) function, expected prototype:\nbtAABB::btAABB(const btVector3 & V1, const btVector3 & V2, const btVector3 & V3)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* V1_ptr=(Luna< btVector3 >::check(L,1));
		if( !V1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg V1 in btAABB::btAABB function");
		}
		const btVector3 & V1=*V1_ptr;
		const btVector3* V2_ptr=(Luna< btVector3 >::check(L,2));
		if( !V2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg V2 in btAABB::btAABB function");
		}
		const btVector3 & V2=*V2_ptr;
		const btVector3* V3_ptr=(Luna< btVector3 >::check(L,3));
		if( !V3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg V3 in btAABB::btAABB function");
		}
		const btVector3 & V3=*V3_ptr;

		return new btAABB(V1, V2, V3);
	}

	// btAABB::btAABB(const btVector3 & V1, const btVector3 & V2, const btVector3 & V3, float margin)
	static btAABB* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAABB::btAABB(const btVector3 & V1, const btVector3 & V2, const btVector3 & V3, float margin) function, expected prototype:\nbtAABB::btAABB(const btVector3 & V1, const btVector3 & V2, const btVector3 & V3, float margin)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* V1_ptr=(Luna< btVector3 >::check(L,1));
		if( !V1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg V1 in btAABB::btAABB function");
		}
		const btVector3 & V1=*V1_ptr;
		const btVector3* V2_ptr=(Luna< btVector3 >::check(L,2));
		if( !V2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg V2 in btAABB::btAABB function");
		}
		const btVector3 & V2=*V2_ptr;
		const btVector3* V3_ptr=(Luna< btVector3 >::check(L,3));
		if( !V3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg V3 in btAABB::btAABB function");
		}
		const btVector3 & V3=*V3_ptr;
		float margin=(float)lua_tonumber(L,4);

		return new btAABB(V1, V2, V3, margin);
	}

	// btAABB::btAABB(const btAABB & other)
	static btAABB* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAABB::btAABB(const btAABB & other) function, expected prototype:\nbtAABB::btAABB(const btAABB & other)\nClass arguments details:\narg 1 ID = 14786052\n");
		}

		const btAABB* other_ptr=(Luna< btAABB >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btAABB::btAABB function");
		}
		const btAABB & other=*other_ptr;

		return new btAABB(other);
	}

	// btAABB::btAABB(const btAABB & other, float margin)
	static btAABB* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAABB::btAABB(const btAABB & other, float margin) function, expected prototype:\nbtAABB::btAABB(const btAABB & other, float margin)\nClass arguments details:\narg 1 ID = 14786052\n");
		}

		const btAABB* other_ptr=(Luna< btAABB >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btAABB::btAABB function");
		}
		const btAABB & other=*other_ptr;
		float margin=(float)lua_tonumber(L,2);

		return new btAABB(other, margin);
	}

	// Overload binder for btAABB::btAABB
	static btAABB* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function btAABB, cannot match any of the overloads for function btAABB:\n  btAABB()\n  btAABB(const btVector3 &, const btVector3 &, const btVector3 &)\n  btAABB(const btVector3 &, const btVector3 &, const btVector3 &, float)\n  btAABB(const btAABB &)\n  btAABB(const btAABB &, float)\n");
		return NULL;
	}


	// Function binds:
	// void btAABB::invalidate()
	static int _bind_invalidate(lua_State *L) {
		if (!_lg_typecheck_invalidate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAABB::invalidate() function, expected prototype:\nvoid btAABB::invalidate()\nClass arguments details:\n");
		}


		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAABB::invalidate(). Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		self->invalidate();

		return 0;
	}

	// void btAABB::increment_margin(float margin)
	static int _bind_increment_margin(lua_State *L) {
		if (!_lg_typecheck_increment_margin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAABB::increment_margin(float margin) function, expected prototype:\nvoid btAABB::increment_margin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAABB::increment_margin(float). Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		self->increment_margin(margin);

		return 0;
	}

	// void btAABB::copy_with_margin(const btAABB & other, float margin)
	static int _bind_copy_with_margin(lua_State *L) {
		if (!_lg_typecheck_copy_with_margin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAABB::copy_with_margin(const btAABB & other, float margin) function, expected prototype:\nvoid btAABB::copy_with_margin(const btAABB & other, float margin)\nClass arguments details:\narg 1 ID = 14786052\n");
		}

		const btAABB* other_ptr=(Luna< btAABB >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btAABB::copy_with_margin function");
		}
		const btAABB & other=*other_ptr;
		float margin=(float)lua_tonumber(L,3);

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAABB::copy_with_margin(const btAABB &, float). Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		self->copy_with_margin(other, margin);

		return 0;
	}

	// void btAABB::appy_transform(const btTransform & trans)
	static int _bind_appy_transform(lua_State *L) {
		if (!_lg_typecheck_appy_transform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAABB::appy_transform(const btTransform & trans) function, expected prototype:\nvoid btAABB::appy_transform(const btTransform & trans)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btAABB::appy_transform function");
		}
		const btTransform & trans=*trans_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAABB::appy_transform(const btTransform &). Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		self->appy_transform(trans);

		return 0;
	}

	// void btAABB::appy_transform_trans_cache(const BT_BOX_BOX_TRANSFORM_CACHE & trans)
	static int _bind_appy_transform_trans_cache(lua_State *L) {
		if (!_lg_typecheck_appy_transform_trans_cache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAABB::appy_transform_trans_cache(const BT_BOX_BOX_TRANSFORM_CACHE & trans) function, expected prototype:\nvoid btAABB::appy_transform_trans_cache(const BT_BOX_BOX_TRANSFORM_CACHE & trans)\nClass arguments details:\narg 1 ID = 92922844\n");
		}

		const BT_BOX_BOX_TRANSFORM_CACHE* trans_ptr=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btAABB::appy_transform_trans_cache function");
		}
		const BT_BOX_BOX_TRANSFORM_CACHE & trans=*trans_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAABB::appy_transform_trans_cache(const BT_BOX_BOX_TRANSFORM_CACHE &). Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		self->appy_transform_trans_cache(trans);

		return 0;
	}

	// void btAABB::merge(const btAABB & box)
	static int _bind_merge(lua_State *L) {
		if (!_lg_typecheck_merge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAABB::merge(const btAABB & box) function, expected prototype:\nvoid btAABB::merge(const btAABB & box)\nClass arguments details:\narg 1 ID = 14786052\n");
		}

		const btAABB* box_ptr=(Luna< btAABB >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in btAABB::merge function");
		}
		const btAABB & box=*box_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAABB::merge(const btAABB &). Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		self->merge(box);

		return 0;
	}

	// void btAABB::get_center_extend(btVector3 & center, btVector3 & extend) const
	static int _bind_get_center_extend(lua_State *L) {
		if (!_lg_typecheck_get_center_extend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAABB::get_center_extend(btVector3 & center, btVector3 & extend) const function, expected prototype:\nvoid btAABB::get_center_extend(btVector3 & center, btVector3 & extend) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btAABB::get_center_extend function");
		}
		btVector3 & center=*center_ptr;
		btVector3* extend_ptr=(Luna< btVector3 >::check(L,3));
		if( !extend_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg extend in btAABB::get_center_extend function");
		}
		btVector3 & extend=*extend_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAABB::get_center_extend(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		self->get_center_extend(center, extend);

		return 0;
	}

	// void btAABB::find_intersection(const btAABB & other, btAABB & intersection) const
	static int _bind_find_intersection(lua_State *L) {
		if (!_lg_typecheck_find_intersection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAABB::find_intersection(const btAABB & other, btAABB & intersection) const function, expected prototype:\nvoid btAABB::find_intersection(const btAABB & other, btAABB & intersection) const\nClass arguments details:\narg 1 ID = 14786052\narg 2 ID = 14786052\n");
		}

		const btAABB* other_ptr=(Luna< btAABB >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btAABB::find_intersection function");
		}
		const btAABB & other=*other_ptr;
		btAABB* intersection_ptr=(Luna< btAABB >::check(L,3));
		if( !intersection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersection in btAABB::find_intersection function");
		}
		btAABB & intersection=*intersection_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAABB::find_intersection(const btAABB &, btAABB &) const. Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		self->find_intersection(other, intersection);

		return 0;
	}

	// bool btAABB::has_collision(const btAABB & other) const
	static int _bind_has_collision(lua_State *L) {
		if (!_lg_typecheck_has_collision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btAABB::has_collision(const btAABB & other) const function, expected prototype:\nbool btAABB::has_collision(const btAABB & other) const\nClass arguments details:\narg 1 ID = 14786052\n");
		}

		const btAABB* other_ptr=(Luna< btAABB >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btAABB::has_collision function");
		}
		const btAABB & other=*other_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btAABB::has_collision(const btAABB &) const. Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		bool lret = self->has_collision(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btAABB::collide_ray(const btVector3 & vorigin, const btVector3 & vdir) const
	static int _bind_collide_ray(lua_State *L) {
		if (!_lg_typecheck_collide_ray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btAABB::collide_ray(const btVector3 & vorigin, const btVector3 & vdir) const function, expected prototype:\nbool btAABB::collide_ray(const btVector3 & vorigin, const btVector3 & vdir) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vorigin_ptr=(Luna< btVector3 >::check(L,2));
		if( !vorigin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vorigin in btAABB::collide_ray function");
		}
		const btVector3 & vorigin=*vorigin_ptr;
		const btVector3* vdir_ptr=(Luna< btVector3 >::check(L,3));
		if( !vdir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vdir in btAABB::collide_ray function");
		}
		const btVector3 & vdir=*vdir_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btAABB::collide_ray(const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		bool lret = self->collide_ray(vorigin, vdir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btAABB::projection_interval(const btVector3 & direction, float & vmin, float & vmax) const
	static int _bind_projection_interval(lua_State *L) {
		if (!_lg_typecheck_projection_interval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAABB::projection_interval(const btVector3 & direction, float & vmin, float & vmax) const function, expected prototype:\nvoid btAABB::projection_interval(const btVector3 & direction, float & vmin, float & vmax) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* direction_ptr=(Luna< btVector3 >::check(L,2));
		if( !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in btAABB::projection_interval function");
		}
		const btVector3 & direction=*direction_ptr;
		float vmin=(float)lua_tonumber(L,3);
		float vmax=(float)lua_tonumber(L,4);

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAABB::projection_interval(const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		self->projection_interval(direction, vmin, vmax);

		return 0;
	}

	// eBT_PLANE_INTERSECTION_TYPE btAABB::plane_classify(const btVector4 & plane) const
	static int _bind_plane_classify(lua_State *L) {
		if (!_lg_typecheck_plane_classify(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in eBT_PLANE_INTERSECTION_TYPE btAABB::plane_classify(const btVector4 & plane) const function, expected prototype:\neBT_PLANE_INTERSECTION_TYPE btAABB::plane_classify(const btVector4 & plane) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in btAABB::plane_classify function");
		}
		const btVector4 & plane=*plane_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call eBT_PLANE_INTERSECTION_TYPE btAABB::plane_classify(const btVector4 &) const. Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		eBT_PLANE_INTERSECTION_TYPE lret = self->plane_classify(plane);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btAABB::overlapping_trans_conservative(const btAABB & box, btTransform & trans1_to_0) const
	static int _bind_overlapping_trans_conservative(lua_State *L) {
		if (!_lg_typecheck_overlapping_trans_conservative(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btAABB::overlapping_trans_conservative(const btAABB & box, btTransform & trans1_to_0) const function, expected prototype:\nbool btAABB::overlapping_trans_conservative(const btAABB & box, btTransform & trans1_to_0) const\nClass arguments details:\narg 1 ID = 14786052\narg 2 ID = 13247377\n");
		}

		const btAABB* box_ptr=(Luna< btAABB >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in btAABB::overlapping_trans_conservative function");
		}
		const btAABB & box=*box_ptr;
		btTransform* trans1_to_0_ptr=(Luna< btTransform >::check(L,3));
		if( !trans1_to_0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans1_to_0 in btAABB::overlapping_trans_conservative function");
		}
		btTransform & trans1_to_0=*trans1_to_0_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btAABB::overlapping_trans_conservative(const btAABB &, btTransform &) const. Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		bool lret = self->overlapping_trans_conservative(box, trans1_to_0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btAABB::overlapping_trans_conservative2(const btAABB & box, const BT_BOX_BOX_TRANSFORM_CACHE & trans1_to_0) const
	static int _bind_overlapping_trans_conservative2(lua_State *L) {
		if (!_lg_typecheck_overlapping_trans_conservative2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btAABB::overlapping_trans_conservative2(const btAABB & box, const BT_BOX_BOX_TRANSFORM_CACHE & trans1_to_0) const function, expected prototype:\nbool btAABB::overlapping_trans_conservative2(const btAABB & box, const BT_BOX_BOX_TRANSFORM_CACHE & trans1_to_0) const\nClass arguments details:\narg 1 ID = 14786052\narg 2 ID = 92922844\n");
		}

		const btAABB* box_ptr=(Luna< btAABB >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in btAABB::overlapping_trans_conservative2 function");
		}
		const btAABB & box=*box_ptr;
		const BT_BOX_BOX_TRANSFORM_CACHE* trans1_to_0_ptr=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,3));
		if( !trans1_to_0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans1_to_0 in btAABB::overlapping_trans_conservative2 function");
		}
		const BT_BOX_BOX_TRANSFORM_CACHE & trans1_to_0=*trans1_to_0_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btAABB::overlapping_trans_conservative2(const btAABB &, const BT_BOX_BOX_TRANSFORM_CACHE &) const. Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		bool lret = self->overlapping_trans_conservative2(box, trans1_to_0);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btAABB::overlapping_trans_cache(const btAABB & box, const BT_BOX_BOX_TRANSFORM_CACHE & transcache, bool fulltest) const
	static int _bind_overlapping_trans_cache(lua_State *L) {
		if (!_lg_typecheck_overlapping_trans_cache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btAABB::overlapping_trans_cache(const btAABB & box, const BT_BOX_BOX_TRANSFORM_CACHE & transcache, bool fulltest) const function, expected prototype:\nbool btAABB::overlapping_trans_cache(const btAABB & box, const BT_BOX_BOX_TRANSFORM_CACHE & transcache, bool fulltest) const\nClass arguments details:\narg 1 ID = 14786052\narg 2 ID = 92922844\n");
		}

		const btAABB* box_ptr=(Luna< btAABB >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in btAABB::overlapping_trans_cache function");
		}
		const btAABB & box=*box_ptr;
		const BT_BOX_BOX_TRANSFORM_CACHE* transcache_ptr=(Luna< BT_BOX_BOX_TRANSFORM_CACHE >::check(L,3));
		if( !transcache_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transcache in btAABB::overlapping_trans_cache function");
		}
		const BT_BOX_BOX_TRANSFORM_CACHE & transcache=*transcache_ptr;
		bool fulltest=(bool)(lua_toboolean(L,4)==1);

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btAABB::overlapping_trans_cache(const btAABB &, const BT_BOX_BOX_TRANSFORM_CACHE &, bool) const. Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		bool lret = self->overlapping_trans_cache(box, transcache, fulltest);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btAABB::collide_plane(const btVector4 & plane) const
	static int _bind_collide_plane(lua_State *L) {
		if (!_lg_typecheck_collide_plane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btAABB::collide_plane(const btVector4 & plane) const function, expected prototype:\nbool btAABB::collide_plane(const btVector4 & plane) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in btAABB::collide_plane function");
		}
		const btVector4 & plane=*plane_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btAABB::collide_plane(const btVector4 &) const. Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		bool lret = self->collide_plane(plane);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btAABB::collide_triangle_exact(const btVector3 & p1, const btVector3 & p2, const btVector3 & p3, const btVector4 & triangle_plane) const
	static int _bind_collide_triangle_exact(lua_State *L) {
		if (!_lg_typecheck_collide_triangle_exact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btAABB::collide_triangle_exact(const btVector3 & p1, const btVector3 & p2, const btVector3 & p3, const btVector4 & triangle_plane) const function, expected prototype:\nbool btAABB::collide_triangle_exact(const btVector3 & p1, const btVector3 & p2, const btVector3 & p3, const btVector4 & triangle_plane) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btVector3* p1_ptr=(Luna< btVector3 >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in btAABB::collide_triangle_exact function");
		}
		const btVector3 & p1=*p1_ptr;
		const btVector3* p2_ptr=(Luna< btVector3 >::check(L,3));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in btAABB::collide_triangle_exact function");
		}
		const btVector3 & p2=*p2_ptr;
		const btVector3* p3_ptr=(Luna< btVector3 >::check(L,4));
		if( !p3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p3 in btAABB::collide_triangle_exact function");
		}
		const btVector3 & p3=*p3_ptr;
		const btVector4* triangle_plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,5));
		if( !triangle_plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle_plane in btAABB::collide_triangle_exact function");
		}
		const btVector4 & triangle_plane=*triangle_plane_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btAABB::collide_triangle_exact(const btVector3 &, const btVector3 &, const btVector3 &, const btVector4 &) const. Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		bool lret = self->collide_triangle_exact(p1, p2, p3, triangle_plane);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btVector3 btAABB::m_min()
	static int _bind_getMin(lua_State *L) {
		if (!_lg_typecheck_getMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btAABB::m_min() function, expected prototype:\nbtVector3 btAABB::m_min()\nClass arguments details:\n");
		}


		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btAABB::m_min(). Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_min;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btAABB::m_max()
	static int _bind_getMax(lua_State *L) {
		if (!_lg_typecheck_getMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btAABB::m_max() function, expected prototype:\nbtVector3 btAABB::m_max()\nClass arguments details:\n");
		}


		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btAABB::m_max(). Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_max;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btAABB::m_min(btVector3 value)
	static int _bind_setMin(lua_State *L) {
		if (!_lg_typecheck_setMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAABB::m_min(btVector3 value) function, expected prototype:\nvoid btAABB::m_min(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btAABB::m_min function");
		}
		btVector3 value=*value_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAABB::m_min(btVector3). Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		self->m_min = value;

		return 0;
	}

	// void btAABB::m_max(btVector3 value)
	static int _bind_setMax(lua_State *L) {
		if (!_lg_typecheck_setMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAABB::m_max(btVector3 value) function, expected prototype:\nvoid btAABB::m_max(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btAABB::m_max function");
		}
		btVector3 value=*value_ptr;

		btAABB* self=(Luna< btAABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAABB::m_max(btVector3). Got : '%s'",typeid(Luna< btAABB >::check(L,1)).name());
		}
		self->m_max = value;

		return 0;
	}


	// Operator binds:

};

btAABB* LunaTraits< btAABB >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btAABB::_bind_ctor(L);
}

void LunaTraits< btAABB >::_bind_dtor(btAABB* obj) {
	delete obj;
}

const char LunaTraits< btAABB >::className[] = "btAABB";
const char LunaTraits< btAABB >::fullName[] = "btAABB";
const char LunaTraits< btAABB >::moduleName[] = "bullet";
const char* LunaTraits< btAABB >::parents[] = {0};
const int LunaTraits< btAABB >::hash = 14786052;
const int LunaTraits< btAABB >::uniqueIDs[] = {14786052,0};

luna_RegType LunaTraits< btAABB >::methods[] = {
	{"invalidate", &luna_wrapper_btAABB::_bind_invalidate},
	{"increment_margin", &luna_wrapper_btAABB::_bind_increment_margin},
	{"copy_with_margin", &luna_wrapper_btAABB::_bind_copy_with_margin},
	{"appy_transform", &luna_wrapper_btAABB::_bind_appy_transform},
	{"appy_transform_trans_cache", &luna_wrapper_btAABB::_bind_appy_transform_trans_cache},
	{"merge", &luna_wrapper_btAABB::_bind_merge},
	{"get_center_extend", &luna_wrapper_btAABB::_bind_get_center_extend},
	{"find_intersection", &luna_wrapper_btAABB::_bind_find_intersection},
	{"has_collision", &luna_wrapper_btAABB::_bind_has_collision},
	{"collide_ray", &luna_wrapper_btAABB::_bind_collide_ray},
	{"projection_interval", &luna_wrapper_btAABB::_bind_projection_interval},
	{"plane_classify", &luna_wrapper_btAABB::_bind_plane_classify},
	{"overlapping_trans_conservative", &luna_wrapper_btAABB::_bind_overlapping_trans_conservative},
	{"overlapping_trans_conservative2", &luna_wrapper_btAABB::_bind_overlapping_trans_conservative2},
	{"overlapping_trans_cache", &luna_wrapper_btAABB::_bind_overlapping_trans_cache},
	{"collide_plane", &luna_wrapper_btAABB::_bind_collide_plane},
	{"collide_triangle_exact", &luna_wrapper_btAABB::_bind_collide_triangle_exact},
	{"getMin", &luna_wrapper_btAABB::_bind_getMin},
	{"getMax", &luna_wrapper_btAABB::_bind_getMax},
	{"setMin", &luna_wrapper_btAABB::_bind_setMin},
	{"setMax", &luna_wrapper_btAABB::_bind_setMax},
	{"dynCast", &luna_wrapper_btAABB::_bind_dynCast},
	{"__eq", &luna_wrapper_btAABB::_bind___eq},
	{"fromVoid", &luna_wrapper_btAABB::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btAABB::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btAABB >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAABB >::enumValues[] = {
	{0,0}
};


