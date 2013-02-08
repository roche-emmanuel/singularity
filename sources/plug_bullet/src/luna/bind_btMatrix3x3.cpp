#include <plug_common.h>

class luna_wrapper_btMatrix3x3 {
public:
	typedef Luna< btMatrix3x3 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30394543) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btMatrix3x3*)");
		}

		btMatrix3x3* rhs =(Luna< btMatrix3x3 >::check(L,2));
		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
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

		btMatrix3x3* self= (btMatrix3x3*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btMatrix3x3 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30394543) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btMatrix3x3 >::check(L,1));
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

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btMatrix3x3");
		
		return luna_dynamicCast(L,converters,"btMatrix3x3",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2139400) ) return false;
		if( (!(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30394543) ) return false;
		if( (!(Luna< btMatrix3x3 >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFromOpenGLSubMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		if( lua_isnumber(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEulerYPR(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEulerZYX(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOpenGLSubMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEulerYPR(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEulerZYX(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_scaled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_determinant(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_adjoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_absolute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_transpose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_transposeTimes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_timesTranspose(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_tdotx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_tdoty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_tdotz(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_diagonalize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_cofac(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIdentity(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 6 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		return true;
	}


	// Constructor binds:
	// btMatrix3x3::btMatrix3x3()
	static btMatrix3x3* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3::btMatrix3x3() function, expected prototype:\nbtMatrix3x3::btMatrix3x3()\nClass arguments details:\n");
		}


		return new btMatrix3x3();
	}

	// btMatrix3x3::btMatrix3x3(const btQuaternion & q)
	static btMatrix3x3* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3::btMatrix3x3(const btQuaternion & q) function, expected prototype:\nbtMatrix3x3::btMatrix3x3(const btQuaternion & q)\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btMatrix3x3::btMatrix3x3 function");
		}
		const btQuaternion & q=*q_ptr;

		return new btMatrix3x3(q);
	}

	// btMatrix3x3::btMatrix3x3(const float & xx, const float & xy, const float & xz, const float & yx, const float & yy, const float & yz, const float & zx, const float & zy, const float & zz)
	static btMatrix3x3* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3::btMatrix3x3(const float & xx, const float & xy, const float & xz, const float & yx, const float & yy, const float & yz, const float & zx, const float & zy, const float & zz) function, expected prototype:\nbtMatrix3x3::btMatrix3x3(const float & xx, const float & xy, const float & xz, const float & yx, const float & yy, const float & yz, const float & zx, const float & zy, const float & zz)\nClass arguments details:\n");
		}

		float xx=(float)lua_tonumber(L,1);
		float xy=(float)lua_tonumber(L,2);
		float xz=(float)lua_tonumber(L,3);
		float yx=(float)lua_tonumber(L,4);
		float yy=(float)lua_tonumber(L,5);
		float yz=(float)lua_tonumber(L,6);
		float zx=(float)lua_tonumber(L,7);
		float zy=(float)lua_tonumber(L,8);
		float zz=(float)lua_tonumber(L,9);

		return new btMatrix3x3(xx, xy, xz, yx, yy, yz, zx, zy, zz);
	}

	// btMatrix3x3::btMatrix3x3(const btMatrix3x3 & other)
	static btMatrix3x3* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3::btMatrix3x3(const btMatrix3x3 & other) function, expected prototype:\nbtMatrix3x3::btMatrix3x3(const btMatrix3x3 & other)\nClass arguments details:\narg 1 ID = 30394543\n");
		}

		const btMatrix3x3* other_ptr=(Luna< btMatrix3x3 >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btMatrix3x3::btMatrix3x3 function");
		}
		const btMatrix3x3 & other=*other_ptr;

		return new btMatrix3x3(other);
	}

	// Overload binder for btMatrix3x3::btMatrix3x3
	static btMatrix3x3* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btMatrix3x3, cannot match any of the overloads for function btMatrix3x3:\n  btMatrix3x3()\n  btMatrix3x3(const btQuaternion &)\n  btMatrix3x3(const float &, const float &, const float &, const float &, const float &, const float &, const float &, const float &, const float &)\n  btMatrix3x3(const btMatrix3x3 &)\n");
		return NULL;
	}


	// Function binds:
	// btVector3 btMatrix3x3::getColumn(int i) const
	static int _bind_getColumn(lua_State *L) {
		if (!_lg_typecheck_getColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMatrix3x3::getColumn(int i) const function, expected prototype:\nbtVector3 btMatrix3x3::getColumn(int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMatrix3x3::getColumn(int) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getColumn(i);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// const btVector3 & btMatrix3x3::getRow(int i) const
	static int _bind_getRow(lua_State *L) {
		if (!_lg_typecheck_getRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btMatrix3x3::getRow(int i) const function, expected prototype:\nconst btVector3 & btMatrix3x3::getRow(int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btMatrix3x3::getRow(int) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		const btVector3* lret = &self->getRow(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btMatrix3x3::setFromOpenGLSubMatrix(const float * m)
	static int _bind_setFromOpenGLSubMatrix(lua_State *L) {
		if (!_lg_typecheck_setFromOpenGLSubMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMatrix3x3::setFromOpenGLSubMatrix(const float * m) function, expected prototype:\nvoid btMatrix3x3::setFromOpenGLSubMatrix(const float * m)\nClass arguments details:\n");
		}

		float m=(float)lua_tonumber(L,2);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMatrix3x3::setFromOpenGLSubMatrix(const float *). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		self->setFromOpenGLSubMatrix(&m);

		return 0;
	}

	// void btMatrix3x3::setValue(const float & xx, const float & xy, const float & xz, const float & yx, const float & yy, const float & yz, const float & zx, const float & zy, const float & zz)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMatrix3x3::setValue(const float & xx, const float & xy, const float & xz, const float & yx, const float & yy, const float & yz, const float & zx, const float & zy, const float & zz) function, expected prototype:\nvoid btMatrix3x3::setValue(const float & xx, const float & xy, const float & xz, const float & yx, const float & yy, const float & yz, const float & zx, const float & zy, const float & zz)\nClass arguments details:\n");
		}

		float xx=(float)lua_tonumber(L,2);
		float xy=(float)lua_tonumber(L,3);
		float xz=(float)lua_tonumber(L,4);
		float yx=(float)lua_tonumber(L,5);
		float yy=(float)lua_tonumber(L,6);
		float yz=(float)lua_tonumber(L,7);
		float zx=(float)lua_tonumber(L,8);
		float zy=(float)lua_tonumber(L,9);
		float zz=(float)lua_tonumber(L,10);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMatrix3x3::setValue(const float &, const float &, const float &, const float &, const float &, const float &, const float &, const float &, const float &). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		self->setValue(xx, xy, xz, yx, yy, yz, zx, zy, zz);

		return 0;
	}

	// void btMatrix3x3::setRotation(const btQuaternion & q)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMatrix3x3::setRotation(const btQuaternion & q) function, expected prototype:\nvoid btMatrix3x3::setRotation(const btQuaternion & q)\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btMatrix3x3::setRotation function");
		}
		const btQuaternion & q=*q_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMatrix3x3::setRotation(const btQuaternion &). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		self->setRotation(q);

		return 0;
	}

	// void btMatrix3x3::setEulerYPR(const float & yaw, const float & pitch, const float & roll)
	static int _bind_setEulerYPR(lua_State *L) {
		if (!_lg_typecheck_setEulerYPR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMatrix3x3::setEulerYPR(const float & yaw, const float & pitch, const float & roll) function, expected prototype:\nvoid btMatrix3x3::setEulerYPR(const float & yaw, const float & pitch, const float & roll)\nClass arguments details:\n");
		}

		float yaw=(float)lua_tonumber(L,2);
		float pitch=(float)lua_tonumber(L,3);
		float roll=(float)lua_tonumber(L,4);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMatrix3x3::setEulerYPR(const float &, const float &, const float &). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		self->setEulerYPR(yaw, pitch, roll);

		return 0;
	}

	// void btMatrix3x3::setEulerZYX(float eulerX, float eulerY, float eulerZ)
	static int _bind_setEulerZYX(lua_State *L) {
		if (!_lg_typecheck_setEulerZYX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMatrix3x3::setEulerZYX(float eulerX, float eulerY, float eulerZ) function, expected prototype:\nvoid btMatrix3x3::setEulerZYX(float eulerX, float eulerY, float eulerZ)\nClass arguments details:\n");
		}

		float eulerX=(float)lua_tonumber(L,2);
		float eulerY=(float)lua_tonumber(L,3);
		float eulerZ=(float)lua_tonumber(L,4);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMatrix3x3::setEulerZYX(float, float, float). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		self->setEulerZYX(eulerX, eulerY, eulerZ);

		return 0;
	}

	// void btMatrix3x3::setIdentity()
	static int _bind_setIdentity(lua_State *L) {
		if (!_lg_typecheck_setIdentity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMatrix3x3::setIdentity() function, expected prototype:\nvoid btMatrix3x3::setIdentity()\nClass arguments details:\n");
		}


		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMatrix3x3::setIdentity(). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		self->setIdentity();

		return 0;
	}

	// void btMatrix3x3::getOpenGLSubMatrix(float * m) const
	static int _bind_getOpenGLSubMatrix(lua_State *L) {
		if (!_lg_typecheck_getOpenGLSubMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMatrix3x3::getOpenGLSubMatrix(float * m) const function, expected prototype:\nvoid btMatrix3x3::getOpenGLSubMatrix(float * m) const\nClass arguments details:\n");
		}

		float m=(float)lua_tonumber(L,2);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMatrix3x3::getOpenGLSubMatrix(float *) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		self->getOpenGLSubMatrix(&m);

		return 0;
	}

	// void btMatrix3x3::getRotation(btQuaternion & q) const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMatrix3x3::getRotation(btQuaternion & q) const function, expected prototype:\nvoid btMatrix3x3::getRotation(btQuaternion & q) const\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btMatrix3x3::getRotation function");
		}
		btQuaternion & q=*q_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMatrix3x3::getRotation(btQuaternion &) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		self->getRotation(q);

		return 0;
	}

	// void btMatrix3x3::getEulerYPR(float & yaw, float & pitch, float & roll) const
	static int _bind_getEulerYPR(lua_State *L) {
		if (!_lg_typecheck_getEulerYPR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMatrix3x3::getEulerYPR(float & yaw, float & pitch, float & roll) const function, expected prototype:\nvoid btMatrix3x3::getEulerYPR(float & yaw, float & pitch, float & roll) const\nClass arguments details:\n");
		}

		float yaw=(float)lua_tonumber(L,2);
		float pitch=(float)lua_tonumber(L,3);
		float roll=(float)lua_tonumber(L,4);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMatrix3x3::getEulerYPR(float &, float &, float &) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		self->getEulerYPR(yaw, pitch, roll);

		return 0;
	}

	// void btMatrix3x3::getEulerZYX(float & yaw, float & pitch, float & roll, unsigned int solution_number = 1) const
	static int _bind_getEulerZYX(lua_State *L) {
		if (!_lg_typecheck_getEulerZYX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMatrix3x3::getEulerZYX(float & yaw, float & pitch, float & roll, unsigned int solution_number = 1) const function, expected prototype:\nvoid btMatrix3x3::getEulerZYX(float & yaw, float & pitch, float & roll, unsigned int solution_number = 1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float yaw=(float)lua_tonumber(L,2);
		float pitch=(float)lua_tonumber(L,3);
		float roll=(float)lua_tonumber(L,4);
		unsigned int solution_number=luatop>4 ? (unsigned int)lua_tointeger(L,5) : 1;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMatrix3x3::getEulerZYX(float &, float &, float &, unsigned int) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		self->getEulerZYX(yaw, pitch, roll, solution_number);

		return 0;
	}

	// btMatrix3x3 btMatrix3x3::scaled(const btVector3 & s) const
	static int _bind_scaled(lua_State *L) {
		if (!_lg_typecheck_scaled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 btMatrix3x3::scaled(const btVector3 & s) const function, expected prototype:\nbtMatrix3x3 btMatrix3x3::scaled(const btVector3 & s) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* s_ptr=(Luna< btVector3 >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in btMatrix3x3::scaled function");
		}
		const btVector3 & s=*s_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 btMatrix3x3::scaled(const btVector3 &) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		btMatrix3x3 stack_lret = self->scaled(s);
		btMatrix3x3* lret = new btMatrix3x3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,true);

		return 1;
	}

	// float btMatrix3x3::determinant() const
	static int _bind_determinant(lua_State *L) {
		if (!_lg_typecheck_determinant(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMatrix3x3::determinant() const function, expected prototype:\nfloat btMatrix3x3::determinant() const\nClass arguments details:\n");
		}


		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMatrix3x3::determinant() const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		float lret = self->determinant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btMatrix3x3 btMatrix3x3::adjoint() const
	static int _bind_adjoint(lua_State *L) {
		if (!_lg_typecheck_adjoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 btMatrix3x3::adjoint() const function, expected prototype:\nbtMatrix3x3 btMatrix3x3::adjoint() const\nClass arguments details:\n");
		}


		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 btMatrix3x3::adjoint() const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		btMatrix3x3 stack_lret = self->adjoint();
		btMatrix3x3* lret = new btMatrix3x3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,true);

		return 1;
	}

	// btMatrix3x3 btMatrix3x3::absolute() const
	static int _bind_absolute(lua_State *L) {
		if (!_lg_typecheck_absolute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 btMatrix3x3::absolute() const function, expected prototype:\nbtMatrix3x3 btMatrix3x3::absolute() const\nClass arguments details:\n");
		}


		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 btMatrix3x3::absolute() const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		btMatrix3x3 stack_lret = self->absolute();
		btMatrix3x3* lret = new btMatrix3x3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,true);

		return 1;
	}

	// btMatrix3x3 btMatrix3x3::transpose() const
	static int _bind_transpose(lua_State *L) {
		if (!_lg_typecheck_transpose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 btMatrix3x3::transpose() const function, expected prototype:\nbtMatrix3x3 btMatrix3x3::transpose() const\nClass arguments details:\n");
		}


		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 btMatrix3x3::transpose() const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		btMatrix3x3 stack_lret = self->transpose();
		btMatrix3x3* lret = new btMatrix3x3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,true);

		return 1;
	}

	// btMatrix3x3 btMatrix3x3::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 btMatrix3x3::inverse() const function, expected prototype:\nbtMatrix3x3 btMatrix3x3::inverse() const\nClass arguments details:\n");
		}


		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 btMatrix3x3::inverse() const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		btMatrix3x3 stack_lret = self->inverse();
		btMatrix3x3* lret = new btMatrix3x3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,true);

		return 1;
	}

	// btMatrix3x3 btMatrix3x3::transposeTimes(const btMatrix3x3 & m) const
	static int _bind_transposeTimes(lua_State *L) {
		if (!_lg_typecheck_transposeTimes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 btMatrix3x3::transposeTimes(const btMatrix3x3 & m) const function, expected prototype:\nbtMatrix3x3 btMatrix3x3::transposeTimes(const btMatrix3x3 & m) const\nClass arguments details:\narg 1 ID = 30394543\n");
		}

		const btMatrix3x3* m_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in btMatrix3x3::transposeTimes function");
		}
		const btMatrix3x3 & m=*m_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 btMatrix3x3::transposeTimes(const btMatrix3x3 &) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		btMatrix3x3 stack_lret = self->transposeTimes(m);
		btMatrix3x3* lret = new btMatrix3x3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,true);

		return 1;
	}

	// btMatrix3x3 btMatrix3x3::timesTranspose(const btMatrix3x3 & m) const
	static int _bind_timesTranspose(lua_State *L) {
		if (!_lg_typecheck_timesTranspose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 btMatrix3x3::timesTranspose(const btMatrix3x3 & m) const function, expected prototype:\nbtMatrix3x3 btMatrix3x3::timesTranspose(const btMatrix3x3 & m) const\nClass arguments details:\narg 1 ID = 30394543\n");
		}

		const btMatrix3x3* m_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in btMatrix3x3::timesTranspose function");
		}
		const btMatrix3x3 & m=*m_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 btMatrix3x3::timesTranspose(const btMatrix3x3 &) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		btMatrix3x3 stack_lret = self->timesTranspose(m);
		btMatrix3x3* lret = new btMatrix3x3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,true);

		return 1;
	}

	// float btMatrix3x3::tdotx(const btVector3 & v) const
	static int _bind_tdotx(lua_State *L) {
		if (!_lg_typecheck_tdotx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMatrix3x3::tdotx(const btVector3 & v) const function, expected prototype:\nfloat btMatrix3x3::tdotx(const btVector3 & v) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btMatrix3x3::tdotx function");
		}
		const btVector3 & v=*v_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMatrix3x3::tdotx(const btVector3 &) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		float lret = self->tdotx(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btMatrix3x3::tdoty(const btVector3 & v) const
	static int _bind_tdoty(lua_State *L) {
		if (!_lg_typecheck_tdoty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMatrix3x3::tdoty(const btVector3 & v) const function, expected prototype:\nfloat btMatrix3x3::tdoty(const btVector3 & v) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btMatrix3x3::tdoty function");
		}
		const btVector3 & v=*v_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMatrix3x3::tdoty(const btVector3 &) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		float lret = self->tdoty(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btMatrix3x3::tdotz(const btVector3 & v) const
	static int _bind_tdotz(lua_State *L) {
		if (!_lg_typecheck_tdotz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMatrix3x3::tdotz(const btVector3 & v) const function, expected prototype:\nfloat btMatrix3x3::tdotz(const btVector3 & v) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btMatrix3x3::tdotz function");
		}
		const btVector3 & v=*v_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMatrix3x3::tdotz(const btVector3 &) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		float lret = self->tdotz(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btMatrix3x3::diagonalize(btMatrix3x3 & rot, float threshold, int maxSteps)
	static int _bind_diagonalize(lua_State *L) {
		if (!_lg_typecheck_diagonalize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMatrix3x3::diagonalize(btMatrix3x3 & rot, float threshold, int maxSteps) function, expected prototype:\nvoid btMatrix3x3::diagonalize(btMatrix3x3 & rot, float threshold, int maxSteps)\nClass arguments details:\narg 1 ID = 30394543\n");
		}

		btMatrix3x3* rot_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !rot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rot in btMatrix3x3::diagonalize function");
		}
		btMatrix3x3 & rot=*rot_ptr;
		float threshold=(float)lua_tonumber(L,3);
		int maxSteps=(int)lua_tointeger(L,4);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMatrix3x3::diagonalize(btMatrix3x3 &, float, int). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		self->diagonalize(rot, threshold, maxSteps);

		return 0;
	}

	// float btMatrix3x3::cofac(int r1, int c1, int r2, int c2) const
	static int _bind_cofac(lua_State *L) {
		if (!_lg_typecheck_cofac(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMatrix3x3::cofac(int r1, int c1, int r2, int c2) const function, expected prototype:\nfloat btMatrix3x3::cofac(int r1, int c1, int r2, int c2) const\nClass arguments details:\n");
		}

		int r1=(int)lua_tointeger(L,2);
		int c1=(int)lua_tointeger(L,3);
		int r2=(int)lua_tointeger(L,4);
		int c2=(int)lua_tointeger(L,5);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMatrix3x3::cofac(int, int, int, int) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		float lret = self->cofac(r1, c1, r2, c2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static const btMatrix3x3 & btMatrix3x3::getIdentity()
	static int _bind_getIdentity(lua_State *L) {
		if (!_lg_typecheck_getIdentity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const btMatrix3x3 & btMatrix3x3::getIdentity() function, expected prototype:\nstatic const btMatrix3x3 & btMatrix3x3::getIdentity()\nClass arguments details:\n");
		}


		const btMatrix3x3* lret = &btMatrix3x3::getIdentity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// btMatrix3x3 & btMatrix3x3::operator=(const btMatrix3x3 & other)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 & btMatrix3x3::operator=(const btMatrix3x3 & other) function, expected prototype:\nbtMatrix3x3 & btMatrix3x3::operator=(const btMatrix3x3 & other)\nClass arguments details:\narg 1 ID = 30394543\n");
		}

		const btMatrix3x3* other_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btMatrix3x3::operator= function");
		}
		const btMatrix3x3 & other=*other_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 & btMatrix3x3::operator=(const btMatrix3x3 &). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		const btMatrix3x3* lret = &self->operator=(other);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 & btMatrix3x3::operator[](int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btMatrix3x3::operator[](int i) function, expected prototype:\nbtVector3 & btMatrix3x3::operator[](int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btMatrix3x3::operator[](int). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		const btVector3* lret = &self->operator[](i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btMatrix3x3::operator[](int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btMatrix3x3::operator[](int i) const function, expected prototype:\nconst btVector3 & btMatrix3x3::operator[](int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btMatrix3x3::operator[](int) const. Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		const btVector3* lret = &self->operator[](i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btMatrix3x3::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}

	// btMatrix3x3 & btMatrix3x3::operator*=(const btMatrix3x3 & m)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 & btMatrix3x3::operator*=(const btMatrix3x3 & m) function, expected prototype:\nbtMatrix3x3 & btMatrix3x3::operator*=(const btMatrix3x3 & m)\nClass arguments details:\narg 1 ID = 30394543\n");
		}

		const btMatrix3x3* m_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in btMatrix3x3::operator*= function");
		}
		const btMatrix3x3 & m=*m_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 & btMatrix3x3::operator*=(const btMatrix3x3 &). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		const btMatrix3x3* lret = &self->operator*=(m);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,false);

		return 1;
	}

	// btMatrix3x3 & btMatrix3x3::operator+=(const btMatrix3x3 & m)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 & btMatrix3x3::operator+=(const btMatrix3x3 & m) function, expected prototype:\nbtMatrix3x3 & btMatrix3x3::operator+=(const btMatrix3x3 & m)\nClass arguments details:\narg 1 ID = 30394543\n");
		}

		const btMatrix3x3* m_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in btMatrix3x3::operator+= function");
		}
		const btMatrix3x3 & m=*m_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 & btMatrix3x3::operator+=(const btMatrix3x3 &). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		const btMatrix3x3* lret = &self->operator+=(m);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,false);

		return 1;
	}

	// btMatrix3x3 & btMatrix3x3::operator-=(const btMatrix3x3 & m)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 & btMatrix3x3::operator-=(const btMatrix3x3 & m) function, expected prototype:\nbtMatrix3x3 & btMatrix3x3::operator-=(const btMatrix3x3 & m)\nClass arguments details:\narg 1 ID = 30394543\n");
		}

		const btMatrix3x3* m_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in btMatrix3x3::operator-= function");
		}
		const btMatrix3x3 & m=*m_ptr;

		btMatrix3x3* self=(Luna< btMatrix3x3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 & btMatrix3x3::operator-=(const btMatrix3x3 &). Got : '%s'",typeid(Luna< btMatrix3x3 >::check(L,1)).name());
		}
		const btMatrix3x3* lret = &self->operator-=(m);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,false);

		return 1;
	}


};

btMatrix3x3* LunaTraits< btMatrix3x3 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btMatrix3x3::_bind_ctor(L);
}

void LunaTraits< btMatrix3x3 >::_bind_dtor(btMatrix3x3* obj) {
	delete obj;
}

const char LunaTraits< btMatrix3x3 >::className[] = "btMatrix3x3";
const char LunaTraits< btMatrix3x3 >::fullName[] = "btMatrix3x3";
const char LunaTraits< btMatrix3x3 >::moduleName[] = "bullet";
const char* LunaTraits< btMatrix3x3 >::parents[] = {0};
const int LunaTraits< btMatrix3x3 >::hash = 30394543;
const int LunaTraits< btMatrix3x3 >::uniqueIDs[] = {30394543,0};

luna_RegType LunaTraits< btMatrix3x3 >::methods[] = {
	{"getColumn", &luna_wrapper_btMatrix3x3::_bind_getColumn},
	{"getRow", &luna_wrapper_btMatrix3x3::_bind_getRow},
	{"setFromOpenGLSubMatrix", &luna_wrapper_btMatrix3x3::_bind_setFromOpenGLSubMatrix},
	{"setValue", &luna_wrapper_btMatrix3x3::_bind_setValue},
	{"setRotation", &luna_wrapper_btMatrix3x3::_bind_setRotation},
	{"setEulerYPR", &luna_wrapper_btMatrix3x3::_bind_setEulerYPR},
	{"setEulerZYX", &luna_wrapper_btMatrix3x3::_bind_setEulerZYX},
	{"setIdentity", &luna_wrapper_btMatrix3x3::_bind_setIdentity},
	{"getOpenGLSubMatrix", &luna_wrapper_btMatrix3x3::_bind_getOpenGLSubMatrix},
	{"getRotation", &luna_wrapper_btMatrix3x3::_bind_getRotation},
	{"getEulerYPR", &luna_wrapper_btMatrix3x3::_bind_getEulerYPR},
	{"getEulerZYX", &luna_wrapper_btMatrix3x3::_bind_getEulerZYX},
	{"scaled", &luna_wrapper_btMatrix3x3::_bind_scaled},
	{"determinant", &luna_wrapper_btMatrix3x3::_bind_determinant},
	{"adjoint", &luna_wrapper_btMatrix3x3::_bind_adjoint},
	{"absolute", &luna_wrapper_btMatrix3x3::_bind_absolute},
	{"transpose", &luna_wrapper_btMatrix3x3::_bind_transpose},
	{"inverse", &luna_wrapper_btMatrix3x3::_bind_inverse},
	{"transposeTimes", &luna_wrapper_btMatrix3x3::_bind_transposeTimes},
	{"timesTranspose", &luna_wrapper_btMatrix3x3::_bind_timesTranspose},
	{"tdotx", &luna_wrapper_btMatrix3x3::_bind_tdotx},
	{"tdoty", &luna_wrapper_btMatrix3x3::_bind_tdoty},
	{"tdotz", &luna_wrapper_btMatrix3x3::_bind_tdotz},
	{"diagonalize", &luna_wrapper_btMatrix3x3::_bind_diagonalize},
	{"cofac", &luna_wrapper_btMatrix3x3::_bind_cofac},
	{"getIdentity", &luna_wrapper_btMatrix3x3::_bind_getIdentity},
	{"op_assign", &luna_wrapper_btMatrix3x3::_bind_op_assign},
	{"op_index", &luna_wrapper_btMatrix3x3::_bind_op_index},
	{"op_mult", &luna_wrapper_btMatrix3x3::_bind_op_mult},
	{"op_add", &luna_wrapper_btMatrix3x3::_bind_op_add},
	{"op_sub", &luna_wrapper_btMatrix3x3::_bind_op_sub},
	{"dynCast", &luna_wrapper_btMatrix3x3::_bind_dynCast},
	{"__eq", &luna_wrapper_btMatrix3x3::_bind___eq},
	{"fromVoid", &luna_wrapper_btMatrix3x3::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btMatrix3x3::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btMatrix3x3 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btMatrix3x3 >::enumValues[] = {
	{0,0}
};


