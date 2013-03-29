#ifndef _WRAPPERS_WRAPPER_BTOPTIMIZEDBVH_H_
#define _WRAPPERS_WRAPPER_BTOPTIMIZEDBVH_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btOptimizedBvh.h>

class wrapper_btOptimizedBvh : public btOptimizedBvh, public luna_wrapper_base {

public:
		

	~wrapper_btOptimizedBvh() {
		logDEBUG3("Calling delete function for wrapper btOptimizedBvh");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btOptimizedBvh*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btOptimizedBvh(lua_State* L, lua_Table* dum) 
		: btOptimizedBvh(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btOptimizedBvh*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int btQuantizedBvh::calculateSerializeBufferSizeNew() const
	int calculateSerializeBufferSizeNew() const {
		if(_obj.pushFunction("calculateSerializeBufferSizeNew")) {
			_obj.pushArg((btOptimizedBvh*)this);
			return (_obj.callFunction<int>());
		}

		return btOptimizedBvh::calculateSerializeBufferSizeNew();
	};


	// Protected non-virtual methods:
	// void btQuantizedBvh::setInternalNodeAabbMin(int nodeIndex, const btVector3 & aabbMin)
	void public_setInternalNodeAabbMin(int nodeIndex, const btVector3 & aabbMin) {
		return btQuantizedBvh::setInternalNodeAabbMin(nodeIndex, aabbMin);
	};

	// void btQuantizedBvh::setInternalNodeAabbMax(int nodeIndex, const btVector3 & aabbMax)
	void public_setInternalNodeAabbMax(int nodeIndex, const btVector3 & aabbMax) {
		return btQuantizedBvh::setInternalNodeAabbMax(nodeIndex, aabbMax);
	};

	// btVector3 btQuantizedBvh::getAabbMin(int nodeIndex) const
	btVector3 public_getAabbMin(int nodeIndex) const {
		return btQuantizedBvh::getAabbMin(nodeIndex);
	};

	// btVector3 btQuantizedBvh::getAabbMax(int nodeIndex) const
	btVector3 public_getAabbMax(int nodeIndex) const {
		return btQuantizedBvh::getAabbMax(nodeIndex);
	};

	// void btQuantizedBvh::setInternalNodeEscapeIndex(int nodeIndex, int escapeIndex)
	void public_setInternalNodeEscapeIndex(int nodeIndex, int escapeIndex) {
		return btQuantizedBvh::setInternalNodeEscapeIndex(nodeIndex, escapeIndex);
	};

	// void btQuantizedBvh::mergeInternalNodeAabb(int nodeIndex, const btVector3 & newAabbMin, const btVector3 & newAabbMax)
	void public_mergeInternalNodeAabb(int nodeIndex, const btVector3 & newAabbMin, const btVector3 & newAabbMax) {
		return btQuantizedBvh::mergeInternalNodeAabb(nodeIndex, newAabbMin, newAabbMax);
	};

	// void btQuantizedBvh::swapLeafNodes(int firstIndex, int secondIndex)
	void public_swapLeafNodes(int firstIndex, int secondIndex) {
		return btQuantizedBvh::swapLeafNodes(firstIndex, secondIndex);
	};

	// void btQuantizedBvh::assignInternalNodeFromLeafNode(int internalNode, int leafNodeIndex)
	void public_assignInternalNodeFromLeafNode(int internalNode, int leafNodeIndex) {
		return btQuantizedBvh::assignInternalNodeFromLeafNode(internalNode, leafNodeIndex);
	};

	// void btQuantizedBvh::buildTree(int startIndex, int endIndex)
	void public_buildTree(int startIndex, int endIndex) {
		return btQuantizedBvh::buildTree(startIndex, endIndex);
	};

	// int btQuantizedBvh::calcSplittingAxis(int startIndex, int endIndex)
	int public_calcSplittingAxis(int startIndex, int endIndex) {
		return btQuantizedBvh::calcSplittingAxis(startIndex, endIndex);
	};

	// int btQuantizedBvh::sortAndCalcSplittingIndex(int startIndex, int endIndex, int splitAxis)
	int public_sortAndCalcSplittingIndex(int startIndex, int endIndex, int splitAxis) {
		return btQuantizedBvh::sortAndCalcSplittingIndex(startIndex, endIndex, splitAxis);
	};

	// void btQuantizedBvh::walkStacklessTree(btNodeOverlapCallback * nodeCallback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void public_walkStacklessTree(btNodeOverlapCallback * nodeCallback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		return btQuantizedBvh::walkStacklessTree(nodeCallback, aabbMin, aabbMax);
	};

	// void btQuantizedBvh::walkStacklessQuantizedTreeAgainstRay(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax, int startNodeIndex, int endNodeIndex) const
	void public_walkStacklessQuantizedTreeAgainstRay(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax, int startNodeIndex, int endNodeIndex) const {
		return btQuantizedBvh::walkStacklessQuantizedTreeAgainstRay(nodeCallback, raySource, rayTarget, aabbMin, aabbMax, startNodeIndex, endNodeIndex);
	};

	// void btQuantizedBvh::walkStacklessQuantizedTree(btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax, int startNodeIndex, int endNodeIndex) const
	void public_walkStacklessQuantizedTree(btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax, int startNodeIndex, int endNodeIndex) const {
		return btQuantizedBvh::walkStacklessQuantizedTree(nodeCallback, quantizedQueryAabbMin, quantizedQueryAabbMax, startNodeIndex, endNodeIndex);
	};

	// void btQuantizedBvh::walkStacklessTreeAgainstRay(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax, int startNodeIndex, int endNodeIndex) const
	void public_walkStacklessTreeAgainstRay(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax, int startNodeIndex, int endNodeIndex) const {
		return btQuantizedBvh::walkStacklessTreeAgainstRay(nodeCallback, raySource, rayTarget, aabbMin, aabbMax, startNodeIndex, endNodeIndex);
	};

	// void btQuantizedBvh::walkStacklessQuantizedTreeCacheFriendly(btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax) const
	void public_walkStacklessQuantizedTreeCacheFriendly(btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax) const {
		return btQuantizedBvh::walkStacklessQuantizedTreeCacheFriendly(nodeCallback, quantizedQueryAabbMin, quantizedQueryAabbMax);
	};

	// void btQuantizedBvh::walkRecursiveQuantizedTreeAgainstQueryAabb(const btQuantizedBvhNode * currentNode, btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax) const
	void public_walkRecursiveQuantizedTreeAgainstQueryAabb(const btQuantizedBvhNode * currentNode, btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax) const {
		return btQuantizedBvh::walkRecursiveQuantizedTreeAgainstQueryAabb(currentNode, nodeCallback, quantizedQueryAabbMin, quantizedQueryAabbMax);
	};

	// void btQuantizedBvh::updateSubtreeHeaders(int leftChildNodexIndex, int rightChildNodexIndex)
	void public_updateSubtreeHeaders(int leftChildNodexIndex, int rightChildNodexIndex) {
		return btQuantizedBvh::updateSubtreeHeaders(leftChildNodexIndex, rightChildNodexIndex);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_setInternalNodeAabbMin(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setInternalNodeAabbMax(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getAabbMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getAabbMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setInternalNodeEscapeIndex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_mergeInternalNodeAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swapLeafNodes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_assignInternalNodeFromLeafNode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_buildTree(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_calcSplittingAxis(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_sortAndCalcSplittingIndex(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_walkStacklessTree(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,47895716)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_walkStacklessQuantizedTreeAgainstRay(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,47895716)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_walkStacklessQuantizedTree(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,47895716)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_walkStacklessTreeAgainstRay(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,47895716)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_walkStacklessQuantizedTreeCacheFriendly(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,47895716)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_walkRecursiveQuantizedTreeAgainstQueryAabb(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,59813041)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,47895716)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_updateSubtreeHeaders(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btQuantizedBvh::public_setInternalNodeAabbMin(int nodeIndex, const btVector3 & aabbMin)
	static int _bind_public_setInternalNodeAabbMin(lua_State *L) {
		if (!_lg_typecheck_public_setInternalNodeAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_setInternalNodeAabbMin(int nodeIndex, const btVector3 & aabbMin) function, expected prototype:\nvoid btQuantizedBvh::public_setInternalNodeAabbMin(int nodeIndex, const btVector3 & aabbMin)\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int nodeIndex=(int)lua_tointeger(L,2);
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btQuantizedBvh::public_setInternalNodeAabbMin function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_setInternalNodeAabbMin(int, const btVector3 &). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_setInternalNodeAabbMin(nodeIndex, aabbMin);

		return 0;
	}

	// void btQuantizedBvh::public_setInternalNodeAabbMax(int nodeIndex, const btVector3 & aabbMax)
	static int _bind_public_setInternalNodeAabbMax(lua_State *L) {
		if (!_lg_typecheck_public_setInternalNodeAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_setInternalNodeAabbMax(int nodeIndex, const btVector3 & aabbMax) function, expected prototype:\nvoid btQuantizedBvh::public_setInternalNodeAabbMax(int nodeIndex, const btVector3 & aabbMax)\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int nodeIndex=(int)lua_tointeger(L,2);
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btQuantizedBvh::public_setInternalNodeAabbMax function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_setInternalNodeAabbMax(int, const btVector3 &). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_setInternalNodeAabbMax(nodeIndex, aabbMax);

		return 0;
	}

	// btVector3 btQuantizedBvh::public_getAabbMin(int nodeIndex) const
	static int _bind_public_getAabbMin(lua_State *L) {
		if (!_lg_typecheck_public_getAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btQuantizedBvh::public_getAabbMin(int nodeIndex) const function, expected prototype:\nbtVector3 btQuantizedBvh::public_getAabbMin(int nodeIndex) const\nClass arguments details:\n");
		}

		int nodeIndex=(int)lua_tointeger(L,2);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btQuantizedBvh::public_getAabbMin(int) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		btVector3 stack_lret = self->public_getAabbMin(nodeIndex);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btQuantizedBvh::public_getAabbMax(int nodeIndex) const
	static int _bind_public_getAabbMax(lua_State *L) {
		if (!_lg_typecheck_public_getAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btQuantizedBvh::public_getAabbMax(int nodeIndex) const function, expected prototype:\nbtVector3 btQuantizedBvh::public_getAabbMax(int nodeIndex) const\nClass arguments details:\n");
		}

		int nodeIndex=(int)lua_tointeger(L,2);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btQuantizedBvh::public_getAabbMax(int) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		btVector3 stack_lret = self->public_getAabbMax(nodeIndex);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btQuantizedBvh::public_setInternalNodeEscapeIndex(int nodeIndex, int escapeIndex)
	static int _bind_public_setInternalNodeEscapeIndex(lua_State *L) {
		if (!_lg_typecheck_public_setInternalNodeEscapeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_setInternalNodeEscapeIndex(int nodeIndex, int escapeIndex) function, expected prototype:\nvoid btQuantizedBvh::public_setInternalNodeEscapeIndex(int nodeIndex, int escapeIndex)\nClass arguments details:\n");
		}

		int nodeIndex=(int)lua_tointeger(L,2);
		int escapeIndex=(int)lua_tointeger(L,3);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_setInternalNodeEscapeIndex(int, int). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_setInternalNodeEscapeIndex(nodeIndex, escapeIndex);

		return 0;
	}

	// void btQuantizedBvh::public_mergeInternalNodeAabb(int nodeIndex, const btVector3 & newAabbMin, const btVector3 & newAabbMax)
	static int _bind_public_mergeInternalNodeAabb(lua_State *L) {
		if (!_lg_typecheck_public_mergeInternalNodeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_mergeInternalNodeAabb(int nodeIndex, const btVector3 & newAabbMin, const btVector3 & newAabbMax) function, expected prototype:\nvoid btQuantizedBvh::public_mergeInternalNodeAabb(int nodeIndex, const btVector3 & newAabbMin, const btVector3 & newAabbMax)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int nodeIndex=(int)lua_tointeger(L,2);
		const btVector3* newAabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !newAabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg newAabbMin in btQuantizedBvh::public_mergeInternalNodeAabb function");
		}
		const btVector3 & newAabbMin=*newAabbMin_ptr;
		const btVector3* newAabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !newAabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg newAabbMax in btQuantizedBvh::public_mergeInternalNodeAabb function");
		}
		const btVector3 & newAabbMax=*newAabbMax_ptr;

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_mergeInternalNodeAabb(int, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_mergeInternalNodeAabb(nodeIndex, newAabbMin, newAabbMax);

		return 0;
	}

	// void btQuantizedBvh::public_swapLeafNodes(int firstIndex, int secondIndex)
	static int _bind_public_swapLeafNodes(lua_State *L) {
		if (!_lg_typecheck_public_swapLeafNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_swapLeafNodes(int firstIndex, int secondIndex) function, expected prototype:\nvoid btQuantizedBvh::public_swapLeafNodes(int firstIndex, int secondIndex)\nClass arguments details:\n");
		}

		int firstIndex=(int)lua_tointeger(L,2);
		int secondIndex=(int)lua_tointeger(L,3);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_swapLeafNodes(int, int). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_swapLeafNodes(firstIndex, secondIndex);

		return 0;
	}

	// void btQuantizedBvh::public_assignInternalNodeFromLeafNode(int internalNode, int leafNodeIndex)
	static int _bind_public_assignInternalNodeFromLeafNode(lua_State *L) {
		if (!_lg_typecheck_public_assignInternalNodeFromLeafNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_assignInternalNodeFromLeafNode(int internalNode, int leafNodeIndex) function, expected prototype:\nvoid btQuantizedBvh::public_assignInternalNodeFromLeafNode(int internalNode, int leafNodeIndex)\nClass arguments details:\n");
		}

		int internalNode=(int)lua_tointeger(L,2);
		int leafNodeIndex=(int)lua_tointeger(L,3);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_assignInternalNodeFromLeafNode(int, int). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_assignInternalNodeFromLeafNode(internalNode, leafNodeIndex);

		return 0;
	}

	// void btQuantizedBvh::public_buildTree(int startIndex, int endIndex)
	static int _bind_public_buildTree(lua_State *L) {
		if (!_lg_typecheck_public_buildTree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_buildTree(int startIndex, int endIndex) function, expected prototype:\nvoid btQuantizedBvh::public_buildTree(int startIndex, int endIndex)\nClass arguments details:\n");
		}

		int startIndex=(int)lua_tointeger(L,2);
		int endIndex=(int)lua_tointeger(L,3);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_buildTree(int, int). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_buildTree(startIndex, endIndex);

		return 0;
	}

	// int btQuantizedBvh::public_calcSplittingAxis(int startIndex, int endIndex)
	static int _bind_public_calcSplittingAxis(lua_State *L) {
		if (!_lg_typecheck_public_calcSplittingAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvh::public_calcSplittingAxis(int startIndex, int endIndex) function, expected prototype:\nint btQuantizedBvh::public_calcSplittingAxis(int startIndex, int endIndex)\nClass arguments details:\n");
		}

		int startIndex=(int)lua_tointeger(L,2);
		int endIndex=(int)lua_tointeger(L,3);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvh::public_calcSplittingAxis(int, int). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		int lret = self->public_calcSplittingAxis(startIndex, endIndex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btQuantizedBvh::public_sortAndCalcSplittingIndex(int startIndex, int endIndex, int splitAxis)
	static int _bind_public_sortAndCalcSplittingIndex(lua_State *L) {
		if (!_lg_typecheck_public_sortAndCalcSplittingIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btQuantizedBvh::public_sortAndCalcSplittingIndex(int startIndex, int endIndex, int splitAxis) function, expected prototype:\nint btQuantizedBvh::public_sortAndCalcSplittingIndex(int startIndex, int endIndex, int splitAxis)\nClass arguments details:\n");
		}

		int startIndex=(int)lua_tointeger(L,2);
		int endIndex=(int)lua_tointeger(L,3);
		int splitAxis=(int)lua_tointeger(L,4);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btQuantizedBvh::public_sortAndCalcSplittingIndex(int, int, int). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		int lret = self->public_sortAndCalcSplittingIndex(startIndex, endIndex, splitAxis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btQuantizedBvh::public_walkStacklessTree(btNodeOverlapCallback * nodeCallback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_public_walkStacklessTree(lua_State *L) {
		if (!_lg_typecheck_public_walkStacklessTree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_walkStacklessTree(btNodeOverlapCallback * nodeCallback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btQuantizedBvh::public_walkStacklessTree(btNodeOverlapCallback * nodeCallback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 47895716\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btNodeOverlapCallback* nodeCallback=(Luna< btNodeOverlapCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btQuantizedBvh::public_walkStacklessTree function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btQuantizedBvh::public_walkStacklessTree function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_walkStacklessTree(btNodeOverlapCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_walkStacklessTree(nodeCallback, aabbMin, aabbMax);

		return 0;
	}

	// void btQuantizedBvh::public_walkStacklessQuantizedTreeAgainstRay(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax, int startNodeIndex, int endNodeIndex) const
	static int _bind_public_walkStacklessQuantizedTreeAgainstRay(lua_State *L) {
		if (!_lg_typecheck_public_walkStacklessQuantizedTreeAgainstRay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_walkStacklessQuantizedTreeAgainstRay(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax, int startNodeIndex, int endNodeIndex) const function, expected prototype:\nvoid btQuantizedBvh::public_walkStacklessQuantizedTreeAgainstRay(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax, int startNodeIndex, int endNodeIndex) const\nClass arguments details:\narg 1 ID = 47895716\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		btNodeOverlapCallback* nodeCallback=(Luna< btNodeOverlapCallback >::check(L,2));
		const btVector3* raySource_ptr=(Luna< btVector3 >::check(L,3));
		if( !raySource_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg raySource in btQuantizedBvh::public_walkStacklessQuantizedTreeAgainstRay function");
		}
		const btVector3 & raySource=*raySource_ptr;
		const btVector3* rayTarget_ptr=(Luna< btVector3 >::check(L,4));
		if( !rayTarget_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTarget in btQuantizedBvh::public_walkStacklessQuantizedTreeAgainstRay function");
		}
		const btVector3 & rayTarget=*rayTarget_ptr;
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,5));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btQuantizedBvh::public_walkStacklessQuantizedTreeAgainstRay function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,6));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btQuantizedBvh::public_walkStacklessQuantizedTreeAgainstRay function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		int startNodeIndex=(int)lua_tointeger(L,7);
		int endNodeIndex=(int)lua_tointeger(L,8);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_walkStacklessQuantizedTreeAgainstRay(btNodeOverlapCallback *, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, int, int) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_walkStacklessQuantizedTreeAgainstRay(nodeCallback, raySource, rayTarget, aabbMin, aabbMax, startNodeIndex, endNodeIndex);

		return 0;
	}

	// void btQuantizedBvh::public_walkStacklessQuantizedTree(btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax, int startNodeIndex, int endNodeIndex) const
	static int _bind_public_walkStacklessQuantizedTree(lua_State *L) {
		if (!_lg_typecheck_public_walkStacklessQuantizedTree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_walkStacklessQuantizedTree(btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax, int startNodeIndex, int endNodeIndex) const function, expected prototype:\nvoid btQuantizedBvh::public_walkStacklessQuantizedTree(btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax, int startNodeIndex, int endNodeIndex) const\nClass arguments details:\narg 1 ID = 47895716\n");
		}

		btNodeOverlapCallback* nodeCallback=(Luna< btNodeOverlapCallback >::check(L,2));
		unsigned short int* quantizedQueryAabbMin=(unsigned short int*)Luna< void >::check(L,3);
		unsigned short int* quantizedQueryAabbMax=(unsigned short int*)Luna< void >::check(L,4);
		int startNodeIndex=(int)lua_tointeger(L,5);
		int endNodeIndex=(int)lua_tointeger(L,6);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_walkStacklessQuantizedTree(btNodeOverlapCallback *, unsigned short int *, unsigned short int *, int, int) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_walkStacklessQuantizedTree(nodeCallback, quantizedQueryAabbMin, quantizedQueryAabbMax, startNodeIndex, endNodeIndex);

		return 0;
	}

	// void btQuantizedBvh::public_walkStacklessTreeAgainstRay(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax, int startNodeIndex, int endNodeIndex) const
	static int _bind_public_walkStacklessTreeAgainstRay(lua_State *L) {
		if (!_lg_typecheck_public_walkStacklessTreeAgainstRay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_walkStacklessTreeAgainstRay(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax, int startNodeIndex, int endNodeIndex) const function, expected prototype:\nvoid btQuantizedBvh::public_walkStacklessTreeAgainstRay(btNodeOverlapCallback * nodeCallback, const btVector3 & raySource, const btVector3 & rayTarget, const btVector3 & aabbMin, const btVector3 & aabbMax, int startNodeIndex, int endNodeIndex) const\nClass arguments details:\narg 1 ID = 47895716\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		btNodeOverlapCallback* nodeCallback=(Luna< btNodeOverlapCallback >::check(L,2));
		const btVector3* raySource_ptr=(Luna< btVector3 >::check(L,3));
		if( !raySource_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg raySource in btQuantizedBvh::public_walkStacklessTreeAgainstRay function");
		}
		const btVector3 & raySource=*raySource_ptr;
		const btVector3* rayTarget_ptr=(Luna< btVector3 >::check(L,4));
		if( !rayTarget_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTarget in btQuantizedBvh::public_walkStacklessTreeAgainstRay function");
		}
		const btVector3 & rayTarget=*rayTarget_ptr;
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,5));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btQuantizedBvh::public_walkStacklessTreeAgainstRay function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,6));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btQuantizedBvh::public_walkStacklessTreeAgainstRay function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		int startNodeIndex=(int)lua_tointeger(L,7);
		int endNodeIndex=(int)lua_tointeger(L,8);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_walkStacklessTreeAgainstRay(btNodeOverlapCallback *, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, int, int) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_walkStacklessTreeAgainstRay(nodeCallback, raySource, rayTarget, aabbMin, aabbMax, startNodeIndex, endNodeIndex);

		return 0;
	}

	// void btQuantizedBvh::public_walkStacklessQuantizedTreeCacheFriendly(btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax) const
	static int _bind_public_walkStacklessQuantizedTreeCacheFriendly(lua_State *L) {
		if (!_lg_typecheck_public_walkStacklessQuantizedTreeCacheFriendly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_walkStacklessQuantizedTreeCacheFriendly(btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax) const function, expected prototype:\nvoid btQuantizedBvh::public_walkStacklessQuantizedTreeCacheFriendly(btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax) const\nClass arguments details:\narg 1 ID = 47895716\n");
		}

		btNodeOverlapCallback* nodeCallback=(Luna< btNodeOverlapCallback >::check(L,2));
		unsigned short int* quantizedQueryAabbMin=(unsigned short int*)Luna< void >::check(L,3);
		unsigned short int* quantizedQueryAabbMax=(unsigned short int*)Luna< void >::check(L,4);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_walkStacklessQuantizedTreeCacheFriendly(btNodeOverlapCallback *, unsigned short int *, unsigned short int *) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_walkStacklessQuantizedTreeCacheFriendly(nodeCallback, quantizedQueryAabbMin, quantizedQueryAabbMax);

		return 0;
	}

	// void btQuantizedBvh::public_walkRecursiveQuantizedTreeAgainstQueryAabb(const btQuantizedBvhNode * currentNode, btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax) const
	static int _bind_public_walkRecursiveQuantizedTreeAgainstQueryAabb(lua_State *L) {
		if (!_lg_typecheck_public_walkRecursiveQuantizedTreeAgainstQueryAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_walkRecursiveQuantizedTreeAgainstQueryAabb(const btQuantizedBvhNode * currentNode, btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax) const function, expected prototype:\nvoid btQuantizedBvh::public_walkRecursiveQuantizedTreeAgainstQueryAabb(const btQuantizedBvhNode * currentNode, btNodeOverlapCallback * nodeCallback, unsigned short int * quantizedQueryAabbMin, unsigned short int * quantizedQueryAabbMax) const\nClass arguments details:\narg 1 ID = 59813041\narg 2 ID = 47895716\n");
		}

		const btQuantizedBvhNode* currentNode=(Luna< btQuantizedBvhNode >::check(L,2));
		btNodeOverlapCallback* nodeCallback=(Luna< btNodeOverlapCallback >::check(L,3));
		unsigned short int* quantizedQueryAabbMin=(unsigned short int*)Luna< void >::check(L,4);
		unsigned short int* quantizedQueryAabbMax=(unsigned short int*)Luna< void >::check(L,5);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_walkRecursiveQuantizedTreeAgainstQueryAabb(const btQuantizedBvhNode *, btNodeOverlapCallback *, unsigned short int *, unsigned short int *) const. Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_walkRecursiveQuantizedTreeAgainstQueryAabb(currentNode, nodeCallback, quantizedQueryAabbMin, quantizedQueryAabbMax);

		return 0;
	}

	// void btQuantizedBvh::public_updateSubtreeHeaders(int leftChildNodexIndex, int rightChildNodexIndex)
	static int _bind_public_updateSubtreeHeaders(lua_State *L) {
		if (!_lg_typecheck_public_updateSubtreeHeaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuantizedBvh::public_updateSubtreeHeaders(int leftChildNodexIndex, int rightChildNodexIndex) function, expected prototype:\nvoid btQuantizedBvh::public_updateSubtreeHeaders(int leftChildNodexIndex, int rightChildNodexIndex)\nClass arguments details:\n");
		}

		int leftChildNodexIndex=(int)lua_tointeger(L,2);
		int rightChildNodexIndex=(int)lua_tointeger(L,3);

		wrapper_btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< wrapper_btOptimizedBvh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuantizedBvh::public_updateSubtreeHeaders(int, int). Got : '%s'",typeid(Luna< btQuantizedBvh >::check(L,1)).name());
		}
		self->public_updateSubtreeHeaders(leftChildNodexIndex, rightChildNodexIndex);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"setInternalNodeAabbMin",_bind_public_setInternalNodeAabbMin},
		{"setInternalNodeAabbMax",_bind_public_setInternalNodeAabbMax},
		{"getAabbMin",_bind_public_getAabbMin},
		{"getAabbMax",_bind_public_getAabbMax},
		{"setInternalNodeEscapeIndex",_bind_public_setInternalNodeEscapeIndex},
		{"mergeInternalNodeAabb",_bind_public_mergeInternalNodeAabb},
		{"swapLeafNodes",_bind_public_swapLeafNodes},
		{"assignInternalNodeFromLeafNode",_bind_public_assignInternalNodeFromLeafNode},
		{"buildTree",_bind_public_buildTree},
		{"calcSplittingAxis",_bind_public_calcSplittingAxis},
		{"sortAndCalcSplittingIndex",_bind_public_sortAndCalcSplittingIndex},
		{"walkStacklessTree",_bind_public_walkStacklessTree},
		{"walkStacklessQuantizedTreeAgainstRay",_bind_public_walkStacklessQuantizedTreeAgainstRay},
		{"walkStacklessQuantizedTree",_bind_public_walkStacklessQuantizedTree},
		{"walkStacklessTreeAgainstRay",_bind_public_walkStacklessTreeAgainstRay},
		{"walkStacklessQuantizedTreeCacheFriendly",_bind_public_walkStacklessQuantizedTreeCacheFriendly},
		{"walkRecursiveQuantizedTreeAgainstQueryAabb",_bind_public_walkRecursiveQuantizedTreeAgainstQueryAabb},
		{"updateSubtreeHeaders",_bind_public_updateSubtreeHeaders},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

