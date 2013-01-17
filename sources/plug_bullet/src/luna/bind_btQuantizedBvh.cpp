#include <plug_common.h>

#include <luna/wrappers/wrapper_btQuantizedBvh.h>

class luna_wrapper_btQuantizedBvh {
public:
	typedef Luna< btQuantizedBvh > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btQuantizedBvh,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63725098) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btQuantizedBvh*)");
		}

		btQuantizedBvh* rhs =(Luna< btQuantizedBvh >::check(L,2));
		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
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

		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btQuantizedBvh");
		
		return luna_dynamicCast(L,converters,"btQuantizedBvh",name);
	}


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
	inline static bool _lg_typecheck_setQuantizationValues(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLeafNodeArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_buildInternal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reportAabbOverlappingNodex(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,47895716)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reportRayOverlappingNodex(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,47895716)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reportBoxCastOverlappingNodex(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,47895716)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_quantize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_quantizeWithClamp(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unQuantize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTraversalMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getQuantizedNodeArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSubtreeInfoArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSizeNew(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isQuantized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAlignmentSerializationPadding(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSizeNew(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btQuantizedBvh::btQuantizedBvh()
	static btQuantizedBvh* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuantizedBvh::btQuantizedBvh() function, expected prototype:\nbtQuantizedBvh::btQuantizedBvh()\nClass arguments details:\n");
		}


		return new btQuantizedBvh();
	}

	// btQuantizedBvh::btQuantizedBvh(lua_Table * data)
	static btQuantizedBvh* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuantizedBvh::btQuantizedBvh(lua_Table * data) function, expected prototype:\nbtQuantizedBvh::btQuantizedBvh(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btQuantizedBvh(L,NULL);
	}

	// Overload binder for btQuantizedBvh::btQuantizedBvh
	static btQuantizedBvh* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btQuantizedBvh, cannot match any of the overloads for function btQuantizedBvh:\n  btQuantizedBvh()\n  btQuantizedBvh(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btQuantizedBvh::setQuantizationValues(const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, float quantizationMargin = float (1.0))
	static int _bind_setQuantizationValues(lua_State *L) {
		if (!_lg_typecheck_setQuantizationValues(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::setQuantizationValues(const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, float quantizationMargin = float (1.0)) function, expected prototype:\nvoid btQuantizedBvh::setQuantizationValues(const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, float quantizationMargin = float (1.0))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* bvhAabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !bvhAabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMin in btQuantizedBvh::setQuantizationValues function");
		}
		const btVector3 & bvhAabbMin=*bvhAabbMin_ptr;
		const btVector3* bvhAabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !bvhAabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMax in btQuantizedBvh::setQuantizationValues function");
		}
		const btVector3 & bvhAabbMax=*bvhAabbMax_ptr;
		float quantizationMargin=luatop>3 ? (float)lua_tonumber(L,4) : float (1.0);

		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::setQuantizationValues(const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->setQuantizationValues(bvhAabbMin, bvhAabbMax, quantizationMargin);

		return 0;
	}

	// QuantizedNodeArray & btQuantizedBvh::getLeafNodeArray()
	static int _bind_getLeafNodeArray(lua_State *L) {
		if (!_lg_typecheck_getLeafNodeArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in QuantizedNodeArray & btQuantizedBvh::getLeafNodeArray() function, expected prototype:\nQuantizedNodeArray & btQuantizedBvh::getLeafNodeArray()\nClass arguments details:\n");
		}


		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call QuantizedNodeArray & btQuantizedBvh::getLeafNodeArray(). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		const QuantizedNodeArray* lret = &self->getLeafNodeArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< QuantizedNodeArray >::push(L,lret,false);

		return 1;
	}

	// void btQuantizedBvh::buildInternal()
	static int _bind_buildInternal(lua_State *L) {
		if (!_lg_typecheck_buildInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::buildInternal() function, expected prototype:\nvoid btQuantizedBvh::buildInternal()\nClass arguments details:\n");
		}


		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::buildInternal(). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->buildInternal();

		return 0;
	}

	// void btQuantizedBvh::reportAabbOverlappingNodex(btNodeOverlapCallback * nodeCallback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_reportAabbOverlappingNodex(lua_State *L) {
		if (!_lg_typecheck_reportAabbOverlappingNodex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::reportAabbOverlappingNodex(btNodeOverlapCallback * nodeCallback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btQuantizedBvh::reportAabbOverlappingNodex(btNodeOverlapCallback * nodeCallback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 47895716\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btNodeOverlapCallback* nodeCallback=(Luna< btNodeOverlapCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btQuantizedBvh::reportAabbOverlappingNodex function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btQuantizedBvh::reportAabbOverlappingNodex function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::reportAabbOverlappingNodex(btNodeOverlapCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->reportAabbOverlappingNodex(nodeCallback, aabbMin, aabbMax);

		return 0;
	}

	// void btQuantizedBvh::reportRayOverlappingNodex(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget) const
	static int _bind_reportRayOverlappingNodex(lua_State *L) {
		if (!_lg_typecheck_reportRayOverlappingNodex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::reportRayOverlappingNodex(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget) const function, expected prototype:\nvoid btQuantizedBvh::reportRayOverlappingNodex(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget) const\nClass arguments details:\narg 1 ID = 47895716\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btNodeOverlapCallback* nodeCallback=(Luna< btNodeOverlapCallback >::check(L,2));
		const btVector3* raySource_ptr=(Luna< btVector3 >::check(L,3));
		if( !raySource_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg raySource in btQuantizedBvh::reportRayOverlappingNodex function");
		}
		const btVector3 & raySource=*raySource_ptr;
		const btVector3* rayTarget_ptr=(Luna< btVector3 >::check(L,4));
		if( !rayTarget_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTarget in btQuantizedBvh::reportRayOverlappingNodex function");
		}
		const btVector3 & rayTarget=*rayTarget_ptr;

		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::reportRayOverlappingNodex(btNodeOverlapCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->reportRayOverlappingNodex(nodeCallback, raySource, rayTarget);

		return 0;
	}

	// void btQuantizedBvh::reportBoxCastOverlappingNodex(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_reportBoxCastOverlappingNodex(lua_State *L) {
		if (!_lg_typecheck_reportBoxCastOverlappingNodex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::reportBoxCastOverlappingNodex(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btQuantizedBvh::reportBoxCastOverlappingNodex(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 47895716\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		btNodeOverlapCallback* nodeCallback=(Luna< btNodeOverlapCallback >::check(L,2));
		const btVector3* raySource_ptr=(Luna< btVector3 >::check(L,3));
		if( !raySource_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg raySource in btQuantizedBvh::reportBoxCastOverlappingNodex function");
		}
		const btVector3 & raySource=*raySource_ptr;
		const btVector3* rayTarget_ptr=(Luna< btVector3 >::check(L,4));
		if( !rayTarget_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTarget in btQuantizedBvh::reportBoxCastOverlappingNodex function");
		}
		const btVector3 & rayTarget=*rayTarget_ptr;
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,5));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btQuantizedBvh::reportBoxCastOverlappingNodex function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,6));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btQuantizedBvh::reportBoxCastOverlappingNodex function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::reportBoxCastOverlappingNodex(btNodeOverlapCallback *, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->reportBoxCastOverlappingNodex(nodeCallback, raySource, rayTarget, aabbMin, aabbMax);

		return 0;
	}

	// void btQuantizedBvh::quantize(unsigned short * out, const btVector3 & point, int isMax) const
	static int _bind_quantize(lua_State *L) {
		if (!_lg_typecheck_quantize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::quantize(unsigned short * out, const btVector3 & point, int isMax) const function, expected prototype:\nvoid btQuantizedBvh::quantize(unsigned short * out, const btVector3 & point, int isMax) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		unsigned short out=(unsigned short)lua_tointeger(L,2);
		const btVector3* point_ptr=(Luna< btVector3 >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in btQuantizedBvh::quantize function");
		}
		const btVector3 & point=*point_ptr;
		int isMax=(int)lua_tointeger(L,4);

		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::quantize(unsigned short *, const btVector3 &, int) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->quantize(&out, point, isMax);

		return 0;
	}

	// void btQuantizedBvh::quantizeWithClamp(unsigned short * out, const btVector3 & point2, int isMax) const
	static int _bind_quantizeWithClamp(lua_State *L) {
		if (!_lg_typecheck_quantizeWithClamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::quantizeWithClamp(unsigned short * out, const btVector3 & point2, int isMax) const function, expected prototype:\nvoid btQuantizedBvh::quantizeWithClamp(unsigned short * out, const btVector3 & point2, int isMax) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		unsigned short out=(unsigned short)lua_tointeger(L,2);
		const btVector3* point2_ptr=(Luna< btVector3 >::check(L,3));
		if( !point2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point2 in btQuantizedBvh::quantizeWithClamp function");
		}
		const btVector3 & point2=*point2_ptr;
		int isMax=(int)lua_tointeger(L,4);

		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::quantizeWithClamp(unsigned short *, const btVector3 &, int) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->quantizeWithClamp(&out, point2, isMax);

		return 0;
	}

	// btVector3 btQuantizedBvh::unQuantize(const unsigned short * vecIn) const
	static int _bind_unQuantize(lua_State *L) {
		if (!_lg_typecheck_unQuantize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btQuantizedBvh::unQuantize(const unsigned short * vecIn) const function, expected prototype:\nbtVector3 btQuantizedBvh::unQuantize(const unsigned short * vecIn) const\nClass arguments details:\n");
		}

		unsigned short vecIn=(unsigned short)lua_tointeger(L,2);

		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btQuantizedBvh::unQuantize(const unsigned short *) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		btVector3 stack_lret = self->unQuantize(&vecIn);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btQuantizedBvh::setTraversalMode(btQuantizedBvh::btTraversalMode traversalMode)
	static int _bind_setTraversalMode(lua_State *L) {
		if (!_lg_typecheck_setTraversalMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::setTraversalMode(btQuantizedBvh::btTraversalMode traversalMode) function, expected prototype:\nvoid btQuantizedBvh::setTraversalMode(btQuantizedBvh::btTraversalMode traversalMode)\nClass arguments details:\n");
		}

		btQuantizedBvh::btTraversalMode traversalMode=(btQuantizedBvh::btTraversalMode)lua_tointeger(L,2);

		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::setTraversalMode(btQuantizedBvh::btTraversalMode). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->setTraversalMode(traversalMode);

		return 0;
	}

	// QuantizedNodeArray & btQuantizedBvh::getQuantizedNodeArray()
	static int _bind_getQuantizedNodeArray(lua_State *L) {
		if (!_lg_typecheck_getQuantizedNodeArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in QuantizedNodeArray & btQuantizedBvh::getQuantizedNodeArray() function, expected prototype:\nQuantizedNodeArray & btQuantizedBvh::getQuantizedNodeArray()\nClass arguments details:\n");
		}


		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call QuantizedNodeArray & btQuantizedBvh::getQuantizedNodeArray(). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		const QuantizedNodeArray* lret = &self->getQuantizedNodeArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< QuantizedNodeArray >::push(L,lret,false);

		return 1;
	}

	// BvhSubtreeInfoArray & btQuantizedBvh::getSubtreeInfoArray()
	static int _bind_getSubtreeInfoArray(lua_State *L) {
		if (!_lg_typecheck_getSubtreeInfoArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in BvhSubtreeInfoArray & btQuantizedBvh::getSubtreeInfoArray() function, expected prototype:\nBvhSubtreeInfoArray & btQuantizedBvh::getSubtreeInfoArray()\nClass arguments details:\n");
		}


		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call BvhSubtreeInfoArray & btQuantizedBvh::getSubtreeInfoArray(). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		const BvhSubtreeInfoArray* lret = &self->getSubtreeInfoArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< BvhSubtreeInfoArray >::push(L,lret,false);

		return 1;
	}

	// unsigned int btQuantizedBvh::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int btQuantizedBvh::calculateSerializeBufferSize() const function, expected prototype:\nunsigned int btQuantizedBvh::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int btQuantizedBvh::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		unsigned int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvh::calculateSerializeBufferSizeNew() const
	static int _bind_calculateSerializeBufferSizeNew(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSizeNew(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvh::calculateSerializeBufferSizeNew() const function, expected prototype:\nint btQuantizedBvh::calculateSerializeBufferSizeNew() const\nClass arguments details:\n");
		}


		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvh::calculateSerializeBufferSizeNew() const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSizeNew();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btQuantizedBvh::isQuantized()
	static int _bind_isQuantized(lua_State *L) {
		if (!_lg_typecheck_isQuantized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btQuantizedBvh::isQuantized() function, expected prototype:\nbool btQuantizedBvh::isQuantized()\nClass arguments details:\n");
		}


		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btQuantizedBvh::isQuantized(). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		bool lret = self->isQuantized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static unsigned int btQuantizedBvh::getAlignmentSerializationPadding()
	static int _bind_getAlignmentSerializationPadding(lua_State *L) {
		if (!_lg_typecheck_getAlignmentSerializationPadding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static unsigned int btQuantizedBvh::getAlignmentSerializationPadding() function, expected prototype:\nstatic unsigned int btQuantizedBvh::getAlignmentSerializationPadding()\nClass arguments details:\n");
		}


		unsigned int lret = btQuantizedBvh::getAlignmentSerializationPadding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvh::base_calculateSerializeBufferSizeNew() const
	static int _bind_base_calculateSerializeBufferSizeNew(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSizeNew(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvh::base_calculateSerializeBufferSizeNew() const function, expected prototype:\nint btQuantizedBvh::base_calculateSerializeBufferSizeNew() const\nClass arguments details:\n");
		}


		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvh::base_calculateSerializeBufferSizeNew() const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		int lret = self->btQuantizedBvh::calculateSerializeBufferSizeNew();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btQuantizedBvh* LunaTraits< btQuantizedBvh >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btQuantizedBvh::_bind_ctor(L);
}

void LunaTraits< btQuantizedBvh >::_bind_dtor(btQuantizedBvh* obj) {
	delete obj;
}

const char LunaTraits< btQuantizedBvh >::className[] = "btQuantizedBvh";
const char LunaTraits< btQuantizedBvh >::fullName[] = "btQuantizedBvh";
const char LunaTraits< btQuantizedBvh >::moduleName[] = "bullet";
const char* LunaTraits< btQuantizedBvh >::parents[] = {0};
const int LunaTraits< btQuantizedBvh >::hash = 63725098;
const int LunaTraits< btQuantizedBvh >::uniqueIDs[] = {63725098,0};

luna_RegType LunaTraits< btQuantizedBvh >::methods[] = {
	{"setQuantizationValues", &luna_wrapper_btQuantizedBvh::_bind_setQuantizationValues},
	{"getLeafNodeArray", &luna_wrapper_btQuantizedBvh::_bind_getLeafNodeArray},
	{"buildInternal", &luna_wrapper_btQuantizedBvh::_bind_buildInternal},
	{"reportAabbOverlappingNodex", &luna_wrapper_btQuantizedBvh::_bind_reportAabbOverlappingNodex},
	{"reportRayOverlappingNodex", &luna_wrapper_btQuantizedBvh::_bind_reportRayOverlappingNodex},
	{"reportBoxCastOverlappingNodex", &luna_wrapper_btQuantizedBvh::_bind_reportBoxCastOverlappingNodex},
	{"quantize", &luna_wrapper_btQuantizedBvh::_bind_quantize},
	{"quantizeWithClamp", &luna_wrapper_btQuantizedBvh::_bind_quantizeWithClamp},
	{"unQuantize", &luna_wrapper_btQuantizedBvh::_bind_unQuantize},
	{"setTraversalMode", &luna_wrapper_btQuantizedBvh::_bind_setTraversalMode},
	{"getQuantizedNodeArray", &luna_wrapper_btQuantizedBvh::_bind_getQuantizedNodeArray},
	{"getSubtreeInfoArray", &luna_wrapper_btQuantizedBvh::_bind_getSubtreeInfoArray},
	{"calculateSerializeBufferSize", &luna_wrapper_btQuantizedBvh::_bind_calculateSerializeBufferSize},
	{"calculateSerializeBufferSizeNew", &luna_wrapper_btQuantizedBvh::_bind_calculateSerializeBufferSizeNew},
	{"isQuantized", &luna_wrapper_btQuantizedBvh::_bind_isQuantized},
	{"getAlignmentSerializationPadding", &luna_wrapper_btQuantizedBvh::_bind_getAlignmentSerializationPadding},
	{"base_calculateSerializeBufferSizeNew", &luna_wrapper_btQuantizedBvh::_bind_base_calculateSerializeBufferSizeNew},
	{"dynCast", &luna_wrapper_btQuantizedBvh::_bind_dynCast},
	{"__eq", &luna_wrapper_btQuantizedBvh::_bind___eq},
	{"getTable", &luna_wrapper_btQuantizedBvh::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btQuantizedBvh >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btQuantizedBvh >::enumValues[] = {
	{"TRAVERSAL_STACKLESS", btQuantizedBvh::TRAVERSAL_STACKLESS},
	{"TRAVERSAL_STACKLESS_CACHE_FRIENDLY", btQuantizedBvh::TRAVERSAL_STACKLESS_CACHE_FRIENDLY},
	{"TRAVERSAL_RECURSIVE", btQuantizedBvh::TRAVERSAL_RECURSIVE},
	{0,0}
};


