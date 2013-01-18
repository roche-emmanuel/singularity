#include <plug_common.h>

class luna_wrapper_btTransform {
public:
	typedef Luna< btTransform > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13247377) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTransform*)");
		}

		btTransform* rhs =(Luna< btTransform >::check(L,2));
		btTransform* self=(Luna< btTransform >::check(L,1));
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

		btTransform* self= (btTransform*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTransform >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13247377) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btTransform >::check(L,1));
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

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTransform");
		
		return luna_dynamicCast(L,converters,"btTransform",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2139400) ) return false;
		if( (!(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( luatop>1 && (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30394543) ) return false;
		if( (!(Luna< btMatrix3x3 >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( luatop>1 && (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_mult(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBasis_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBasis_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrigin_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrigin_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFromOpenGLMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOpenGLMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOrigin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invXform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBasis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverseTimes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		if( (!(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}


	// Constructor binds:
	// btTransform::btTransform()
	static btTransform* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform::btTransform() function, expected prototype:\nbtTransform::btTransform()\nClass arguments details:\n");
		}


		return new btTransform();
	}

	// btTransform::btTransform(const btQuaternion & q, const btVector3 & c = btVector3 ( float (0),  float (0),  float (0)))
	static btTransform* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform::btTransform(const btQuaternion & q, const btVector3 & c = btVector3 ( float (0),  float (0),  float (0))) function, expected prototype:\nbtTransform::btTransform(const btQuaternion & q, const btVector3 & c = btVector3 ( float (0),  float (0),  float (0)))\nClass arguments details:\narg 1 ID = 2139400\narg 2 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btTransform::btTransform function");
		}
		const btQuaternion & q=*q_ptr;
		const btVector3* c_ptr=luatop>1 ? (Luna< btVector3 >::check(L,2)) : NULL;
		if( luatop>1 && !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in btTransform::btTransform function");
		}
		const btVector3 & c=luatop>1 ? *c_ptr : btVector3 ( float (0),  float (0),  float (0));

		return new btTransform(q, c);
	}

	// btTransform::btTransform(const btMatrix3x3 & b, const btVector3 & c = btVector3 ( float (0),  float (0),  float (0)))
	static btTransform* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform::btTransform(const btMatrix3x3 & b, const btVector3 & c = btVector3 ( float (0),  float (0),  float (0))) function, expected prototype:\nbtTransform::btTransform(const btMatrix3x3 & b, const btVector3 & c = btVector3 ( float (0),  float (0),  float (0)))\nClass arguments details:\narg 1 ID = 30394543\narg 2 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btMatrix3x3* b_ptr=(Luna< btMatrix3x3 >::check(L,1));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in btTransform::btTransform function");
		}
		const btMatrix3x3 & b=*b_ptr;
		const btVector3* c_ptr=luatop>1 ? (Luna< btVector3 >::check(L,2)) : NULL;
		if( luatop>1 && !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in btTransform::btTransform function");
		}
		const btVector3 & c=luatop>1 ? *c_ptr : btVector3 ( float (0),  float (0),  float (0));

		return new btTransform(b, c);
	}

	// btTransform::btTransform(const btTransform & other)
	static btTransform* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform::btTransform(const btTransform & other) function, expected prototype:\nbtTransform::btTransform(const btTransform & other)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* other_ptr=(Luna< btTransform >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btTransform::btTransform function");
		}
		const btTransform & other=*other_ptr;

		return new btTransform(other);
	}

	// Overload binder for btTransform::btTransform
	static btTransform* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btTransform, cannot match any of the overloads for function btTransform:\n  btTransform()\n  btTransform(const btQuaternion &, const btVector3 &)\n  btTransform(const btMatrix3x3 &, const btVector3 &)\n  btTransform(const btTransform &)\n");
		return NULL;
	}


	// Function binds:
	// void btTransform::mult(const btTransform & t1, const btTransform & t2)
	static int _bind_mult(lua_State *L) {
		if (!_lg_typecheck_mult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTransform::mult(const btTransform & t1, const btTransform & t2) function, expected prototype:\nvoid btTransform::mult(const btTransform & t1, const btTransform & t2)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* t1_ptr=(Luna< btTransform >::check(L,2));
		if( !t1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t1 in btTransform::mult function");
		}
		const btTransform & t1=*t1_ptr;
		const btTransform* t2_ptr=(Luna< btTransform >::check(L,3));
		if( !t2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t2 in btTransform::mult function");
		}
		const btTransform & t2=*t2_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTransform::mult(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		self->mult(t1, t2);

		return 0;
	}

	// btMatrix3x3 & btTransform::getBasis()
	static int _bind_getBasis_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBasis_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMatrix3x3 & btTransform::getBasis() function, expected prototype:\nbtMatrix3x3 & btTransform::getBasis()\nClass arguments details:\n");
		}


		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMatrix3x3 & btTransform::getBasis(). Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		const btMatrix3x3* lret = &self->getBasis();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,false);

		return 1;
	}

	// const btMatrix3x3 & btTransform::getBasis() const
	static int _bind_getBasis_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBasis_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btMatrix3x3 & btTransform::getBasis() const function, expected prototype:\nconst btMatrix3x3 & btTransform::getBasis() const\nClass arguments details:\n");
		}


		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btMatrix3x3 & btTransform::getBasis() const. Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		const btMatrix3x3* lret = &self->getBasis();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btTransform::getBasis
	static int _bind_getBasis(lua_State *L) {
		if (_lg_typecheck_getBasis_overload_1(L)) return _bind_getBasis_overload_1(L);
		if (_lg_typecheck_getBasis_overload_2(L)) return _bind_getBasis_overload_2(L);

		luaL_error(L, "error in function getBasis, cannot match any of the overloads for function getBasis:\n  getBasis()\n  getBasis()\n");
		return 0;
	}

	// btVector3 & btTransform::getOrigin()
	static int _bind_getOrigin_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOrigin_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btTransform::getOrigin() function, expected prototype:\nbtVector3 & btTransform::getOrigin()\nClass arguments details:\n");
		}


		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btTransform::getOrigin(). Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		const btVector3* lret = &self->getOrigin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btTransform::getOrigin() const
	static int _bind_getOrigin_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOrigin_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btTransform::getOrigin() const function, expected prototype:\nconst btVector3 & btTransform::getOrigin() const\nClass arguments details:\n");
		}


		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btTransform::getOrigin() const. Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		const btVector3* lret = &self->getOrigin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btTransform::getOrigin
	static int _bind_getOrigin(lua_State *L) {
		if (_lg_typecheck_getOrigin_overload_1(L)) return _bind_getOrigin_overload_1(L);
		if (_lg_typecheck_getOrigin_overload_2(L)) return _bind_getOrigin_overload_2(L);

		luaL_error(L, "error in function getOrigin, cannot match any of the overloads for function getOrigin:\n  getOrigin()\n  getOrigin()\n");
		return 0;
	}

	// btQuaternion btTransform::getRotation() const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuaternion btTransform::getRotation() const function, expected prototype:\nbtQuaternion btTransform::getRotation() const\nClass arguments details:\n");
		}


		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btQuaternion btTransform::getRotation() const. Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		btQuaternion stack_lret = self->getRotation();
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// void btTransform::setFromOpenGLMatrix(const float * m)
	static int _bind_setFromOpenGLMatrix(lua_State *L) {
		if (!_lg_typecheck_setFromOpenGLMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTransform::setFromOpenGLMatrix(const float * m) function, expected prototype:\nvoid btTransform::setFromOpenGLMatrix(const float * m)\nClass arguments details:\n");
		}

		float m=(float)lua_tonumber(L,2);

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTransform::setFromOpenGLMatrix(const float *). Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		self->setFromOpenGLMatrix(&m);

		return 0;
	}

	// void btTransform::getOpenGLMatrix(float * m) const
	static int _bind_getOpenGLMatrix(lua_State *L) {
		if (!_lg_typecheck_getOpenGLMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTransform::getOpenGLMatrix(float * m) const function, expected prototype:\nvoid btTransform::getOpenGLMatrix(float * m) const\nClass arguments details:\n");
		}

		float m=(float)lua_tonumber(L,2);

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTransform::getOpenGLMatrix(float *) const. Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		self->getOpenGLMatrix(&m);

		return 0;
	}

	// void btTransform::setOrigin(const btVector3 & origin)
	static int _bind_setOrigin(lua_State *L) {
		if (!_lg_typecheck_setOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTransform::setOrigin(const btVector3 & origin) function, expected prototype:\nvoid btTransform::setOrigin(const btVector3 & origin)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* origin_ptr=(Luna< btVector3 >::check(L,2));
		if( !origin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg origin in btTransform::setOrigin function");
		}
		const btVector3 & origin=*origin_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTransform::setOrigin(const btVector3 &). Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		self->setOrigin(origin);

		return 0;
	}

	// btVector3 btTransform::invXform(const btVector3 & inVec) const
	static int _bind_invXform(lua_State *L) {
		if (!_lg_typecheck_invXform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTransform::invXform(const btVector3 & inVec) const function, expected prototype:\nbtVector3 btTransform::invXform(const btVector3 & inVec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* inVec_ptr=(Luna< btVector3 >::check(L,2));
		if( !inVec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inVec in btTransform::invXform function");
		}
		const btVector3 & inVec=*inVec_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTransform::invXform(const btVector3 &) const. Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		btVector3 stack_lret = self->invXform(inVec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btTransform::setBasis(const btMatrix3x3 & basis)
	static int _bind_setBasis(lua_State *L) {
		if (!_lg_typecheck_setBasis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTransform::setBasis(const btMatrix3x3 & basis) function, expected prototype:\nvoid btTransform::setBasis(const btMatrix3x3 & basis)\nClass arguments details:\narg 1 ID = 30394543\n");
		}

		const btMatrix3x3* basis_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !basis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg basis in btTransform::setBasis function");
		}
		const btMatrix3x3 & basis=*basis_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTransform::setBasis(const btMatrix3x3 &). Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		self->setBasis(basis);

		return 0;
	}

	// void btTransform::setRotation(const btQuaternion & q)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTransform::setRotation(const btQuaternion & q) function, expected prototype:\nvoid btTransform::setRotation(const btQuaternion & q)\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btTransform::setRotation function");
		}
		const btQuaternion & q=*q_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTransform::setRotation(const btQuaternion &). Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		self->setRotation(q);

		return 0;
	}

	// void btTransform::setIdentity()
	static int _bind_setIdentity(lua_State *L) {
		if (!_lg_typecheck_setIdentity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTransform::setIdentity() function, expected prototype:\nvoid btTransform::setIdentity()\nClass arguments details:\n");
		}


		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTransform::setIdentity(). Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		self->setIdentity();

		return 0;
	}

	// btTransform btTransform::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btTransform::inverse() const function, expected prototype:\nbtTransform btTransform::inverse() const\nClass arguments details:\n");
		}


		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btTransform::inverse() const. Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		btTransform stack_lret = self->inverse();
		btTransform* lret = new btTransform(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,true);

		return 1;
	}

	// btTransform btTransform::inverseTimes(const btTransform & t) const
	static int _bind_inverseTimes(lua_State *L) {
		if (!_lg_typecheck_inverseTimes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btTransform::inverseTimes(const btTransform & t) const function, expected prototype:\nbtTransform btTransform::inverseTimes(const btTransform & t) const\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTransform::inverseTimes function");
		}
		const btTransform & t=*t_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btTransform::inverseTimes(const btTransform &) const. Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		btTransform stack_lret = self->inverseTimes(t);
		btTransform* lret = new btTransform(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,true);

		return 1;
	}

	// static const btTransform & btTransform::getIdentity()
	static int _bind_getIdentity(lua_State *L) {
		if (!_lg_typecheck_getIdentity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const btTransform & btTransform::getIdentity() function, expected prototype:\nstatic const btTransform & btTransform::getIdentity()\nClass arguments details:\n");
		}


		const btTransform* lret = &btTransform::getIdentity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// btTransform & btTransform::operator=(const btTransform & other)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btTransform::operator=(const btTransform & other) function, expected prototype:\nbtTransform & btTransform::operator=(const btTransform & other)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* other_ptr=(Luna< btTransform >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btTransform::operator= function");
		}
		const btTransform & other=*other_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btTransform::operator=(const btTransform &). Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		const btTransform* lret = &self->operator=(other);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTransform::operator()(const btVector3 & x) const
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTransform::operator()(const btVector3 & x) const function, expected prototype:\nbtVector3 btTransform::operator()(const btVector3 & x) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* x_ptr=(Luna< btVector3 >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in btTransform::operator() function");
		}
		const btVector3 & x=*x_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTransform::operator()(const btVector3 &) const. Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		btVector3 stack_lret = self->operator()(x);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btTransform::operator*(const btVector3 & x) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTransform::operator*(const btVector3 & x) const function, expected prototype:\nbtVector3 btTransform::operator*(const btVector3 & x) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* x_ptr=(Luna< btVector3 >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in btTransform::operator* function");
		}
		const btVector3 & x=*x_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTransform::operator*(const btVector3 &) const. Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		btVector3 stack_lret = self->operator*(x);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btQuaternion btTransform::operator*(const btQuaternion & q) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuaternion btTransform::operator*(const btQuaternion & q) const function, expected prototype:\nbtQuaternion btTransform::operator*(const btQuaternion & q) const\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btTransform::operator* function");
		}
		const btQuaternion & q=*q_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btQuaternion btTransform::operator*(const btQuaternion &) const. Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		btQuaternion stack_lret = self->operator*(q);
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// btTransform btTransform::operator*(const btTransform & t) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btTransform::operator*(const btTransform & t) const function, expected prototype:\nbtTransform btTransform::operator*(const btTransform & t) const\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTransform::operator* function");
		}
		const btTransform & t=*t_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btTransform::operator*(const btTransform &) const. Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		btTransform stack_lret = self->operator*(t);
		btTransform* lret = new btTransform(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,true);

		return 1;
	}

	// Overload binder for btTransform::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const btVector3 &)\n  operator*(const btQuaternion &)\n  operator*(const btTransform &)\n");
		return 0;
	}

	// btTransform & btTransform::operator*=(const btTransform & t)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btTransform::operator*=(const btTransform & t) function, expected prototype:\nbtTransform & btTransform::operator*=(const btTransform & t)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTransform::operator*= function");
		}
		const btTransform & t=*t_ptr;

		btTransform* self=(Luna< btTransform >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btTransform::operator*=(const btTransform &). Got : '%s'",typeid(Luna< btTransform >::check(L,1)).name());
		}
		const btTransform* lret = &self->operator*=(t);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}


};

btTransform* LunaTraits< btTransform >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTransform::_bind_ctor(L);
}

void LunaTraits< btTransform >::_bind_dtor(btTransform* obj) {
	delete obj;
}

const char LunaTraits< btTransform >::className[] = "btTransform";
const char LunaTraits< btTransform >::fullName[] = "btTransform";
const char LunaTraits< btTransform >::moduleName[] = "bullet";
const char* LunaTraits< btTransform >::parents[] = {0};
const int LunaTraits< btTransform >::hash = 13247377;
const int LunaTraits< btTransform >::uniqueIDs[] = {13247377,0};

luna_RegType LunaTraits< btTransform >::methods[] = {
	{"mult", &luna_wrapper_btTransform::_bind_mult},
	{"getBasis", &luna_wrapper_btTransform::_bind_getBasis},
	{"getOrigin", &luna_wrapper_btTransform::_bind_getOrigin},
	{"getRotation", &luna_wrapper_btTransform::_bind_getRotation},
	{"setFromOpenGLMatrix", &luna_wrapper_btTransform::_bind_setFromOpenGLMatrix},
	{"getOpenGLMatrix", &luna_wrapper_btTransform::_bind_getOpenGLMatrix},
	{"setOrigin", &luna_wrapper_btTransform::_bind_setOrigin},
	{"invXform", &luna_wrapper_btTransform::_bind_invXform},
	{"setBasis", &luna_wrapper_btTransform::_bind_setBasis},
	{"setRotation", &luna_wrapper_btTransform::_bind_setRotation},
	{"setIdentity", &luna_wrapper_btTransform::_bind_setIdentity},
	{"inverse", &luna_wrapper_btTransform::_bind_inverse},
	{"inverseTimes", &luna_wrapper_btTransform::_bind_inverseTimes},
	{"getIdentity", &luna_wrapper_btTransform::_bind_getIdentity},
	{"op_assign", &luna_wrapper_btTransform::_bind_op_assign},
	{"op_call", &luna_wrapper_btTransform::_bind_op_call},
	{"__mul", &luna_wrapper_btTransform::_bind___mul},
	{"op_mult", &luna_wrapper_btTransform::_bind_op_mult},
	{"dynCast", &luna_wrapper_btTransform::_bind_dynCast},
	{"__eq", &luna_wrapper_btTransform::_bind___eq},
	{"fromVoid", &luna_wrapper_btTransform::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTransform::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btTransform >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTransform >::enumValues[] = {
	{0,0}
};


