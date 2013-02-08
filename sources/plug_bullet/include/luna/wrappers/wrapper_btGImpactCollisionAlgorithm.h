#ifndef _WRAPPERS_WRAPPER_BTGIMPACTCOLLISIONALGORITHM_H_
#define _WRAPPERS_WRAPPER_BTGIMPACTCOLLISIONALGORITHM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/Gimpact/btGImpactCollisionAlgorithm.h>

class wrapper_btGImpactCollisionAlgorithm : public btGImpactCollisionAlgorithm, public luna_wrapper_base {

public:
		

	~wrapper_btGImpactCollisionAlgorithm() {
		logDEBUG3("Calling delete function for wrapper btGImpactCollisionAlgorithm");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGImpactCollisionAlgorithm*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGImpactCollisionAlgorithm(lua_State* L, lua_Table* dum, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) 
		: btGImpactCollisionAlgorithm(ci, body0Wrap, body1Wrap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGImpactCollisionAlgorithm*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btGImpactCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	void processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) {
		if(_obj.pushFunction("processCollision")) {
			_obj.pushArg((btGImpactCollisionAlgorithm*)this);
			_obj.pushArg(body0Wrap);
			_obj.pushArg(body1Wrap);
			_obj.pushArg(&dispatchInfo);
			_obj.pushArg(resultOut);
			return (_obj.callFunction<void>());
		}

		return btGImpactCollisionAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);
	};

	// float btGImpactCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	float calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) {
		if(_obj.pushFunction("calculateTimeOfImpact")) {
			_obj.pushArg((btGImpactCollisionAlgorithm*)this);
			_obj.pushArg(body0);
			_obj.pushArg(body1);
			_obj.pushArg(&dispatchInfo);
			_obj.pushArg(resultOut);
			return (_obj.callFunction<float>());
		}

		return btGImpactCollisionAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
	};

	// void btGImpactCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	void getAllContactManifolds(btManifoldArray & manifoldArray) {
		if(_obj.pushFunction("getAllContactManifolds")) {
			_obj.pushArg((btGImpactCollisionAlgorithm*)this);
			_obj.pushArg(&manifoldArray);
			return (_obj.callFunction<void>());
		}

		return btGImpactCollisionAlgorithm::getAllContactManifolds(manifoldArray);
	};


	// Protected non-virtual methods:
	// void btGImpactCollisionAlgorithm::collide_gjk_triangles(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btGImpactMeshShapePart * shape1, const int * pairs, int pair_count)
	void public_collide_gjk_triangles(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btGImpactMeshShapePart * shape1, const int * pairs, int pair_count) {
		return btGImpactCollisionAlgorithm::collide_gjk_triangles(body0Wrap, body1Wrap, shape0, shape1, pairs, pair_count);
	};

	// void btGImpactCollisionAlgorithm::collide_sat_triangles(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btGImpactMeshShapePart * shape1, const int * pairs, int pair_count)
	void public_collide_sat_triangles(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btGImpactMeshShapePart * shape1, const int * pairs, int pair_count) {
		return btGImpactCollisionAlgorithm::collide_sat_triangles(body0Wrap, body1Wrap, shape0, shape1, pairs, pair_count);
	};

	// void btGImpactCollisionAlgorithm::shape_vs_shape_collision(const btCollisionObjectWrapper * body0, const btCollisionObjectWrapper * body1, const btCollisionShape * shape0, const btCollisionShape * shape1)
	void public_shape_vs_shape_collision(const btCollisionObjectWrapper * body0, const btCollisionObjectWrapper * body1, const btCollisionShape * shape0, const btCollisionShape * shape1) {
		return btGImpactCollisionAlgorithm::shape_vs_shape_collision(body0, body1, shape0, shape1);
	};

	// void btGImpactCollisionAlgorithm::convex_vs_convex_collision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btCollisionShape * shape0, const btCollisionShape * shape1)
	void public_convex_vs_convex_collision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btCollisionShape * shape0, const btCollisionShape * shape1) {
		return btGImpactCollisionAlgorithm::convex_vs_convex_collision(body0Wrap, body1Wrap, shape0, shape1);
	};

	// void btGImpactCollisionAlgorithm::gimpact_vs_shape_find_pairs(const btTransform & trans0, const btTransform & trans1, const btGImpactShapeInterface * shape0, const btCollisionShape * shape1, btAlignedObjectArray< int > & collided_primitives)
	void public_gimpact_vs_shape_find_pairs(const btTransform & trans0, const btTransform & trans1, const btGImpactShapeInterface * shape0, const btCollisionShape * shape1, btAlignedObjectArray< int > & collided_primitives) {
		return btGImpactCollisionAlgorithm::gimpact_vs_shape_find_pairs(trans0, trans1, shape0, shape1, collided_primitives);
	};

	// void btGImpactCollisionAlgorithm::gimpacttrimeshpart_vs_plane_collision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btStaticPlaneShape * shape1, bool swapped)
	void public_gimpacttrimeshpart_vs_plane_collision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btStaticPlaneShape * shape1, bool swapped) {
		return btGImpactCollisionAlgorithm::gimpacttrimeshpart_vs_plane_collision(body0Wrap, body1Wrap, shape0, shape1, swapped);
	};

	// btPersistentManifold * btGImpactCollisionAlgorithm::newContactManifold(const btCollisionObject * body0, const btCollisionObject * body1)
	btPersistentManifold * public_newContactManifold(const btCollisionObject * body0, const btCollisionObject * body1) {
		return btGImpactCollisionAlgorithm::newContactManifold(body0, body1);
	};

	// void btGImpactCollisionAlgorithm::destroyConvexAlgorithm()
	void public_destroyConvexAlgorithm() {
		return btGImpactCollisionAlgorithm::destroyConvexAlgorithm();
	};

	// void btGImpactCollisionAlgorithm::destroyContactManifolds()
	void public_destroyContactManifolds() {
		return btGImpactCollisionAlgorithm::destroyContactManifolds();
	};

	// void btGImpactCollisionAlgorithm::clearCache()
	void public_clearCache() {
		return btGImpactCollisionAlgorithm::clearCache();
	};

	// btPersistentManifold * btGImpactCollisionAlgorithm::getLastManifold()
	btPersistentManifold * public_getLastManifold() {
		return btGImpactCollisionAlgorithm::getLastManifold();
	};

	// void btGImpactCollisionAlgorithm::checkManifold(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	void public_checkManifold(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) {
		return btGImpactCollisionAlgorithm::checkManifold(body0Wrap, body1Wrap);
	};

	// btCollisionAlgorithm * btGImpactCollisionAlgorithm::newAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	btCollisionAlgorithm * public_newAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) {
		return btGImpactCollisionAlgorithm::newAlgorithm(body0Wrap, body1Wrap);
	};

	// void btGImpactCollisionAlgorithm::checkConvexAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	void public_checkConvexAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) {
		return btGImpactCollisionAlgorithm::checkConvexAlgorithm(body0Wrap, body1Wrap);
	};

	// void btGImpactCollisionAlgorithm::addContactPoint(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btVector3 & point, const btVector3 & normal, float distance)
	void public_addContactPoint(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btVector3 & point, const btVector3 & normal, float distance) {
		return btGImpactCollisionAlgorithm::addContactPoint(body0Wrap, body1Wrap, point, normal, distance);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_collide_gjk_triangles(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,58243831)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_collide_sat_triangles(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,58243831)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_shape_vs_shape_collision(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_convex_vs_convex_collision(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_gimpact_vs_shape_find_pairs(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,41950488) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_gimpacttrimeshpart_vs_plane_collision(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,58243831)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_newContactManifold(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_destroyConvexAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_destroyContactManifolds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_clearCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getLastManifold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_checkManifold(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_newAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_checkConvexAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addContactPoint(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btGImpactCollisionAlgorithm::public_collide_gjk_triangles(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btGImpactMeshShapePart * shape1, const int * pairs, int pair_count)
	static int _bind_public_collide_gjk_triangles(lua_State *L) {
		if (!_lg_typecheck_public_collide_gjk_triangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_collide_gjk_triangles(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btGImpactMeshShapePart * shape1, const int * pairs, int pair_count) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_collide_gjk_triangles(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btGImpactMeshShapePart * shape1, const int * pairs, int pair_count)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 58243831\narg 4 ID = 58243831\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btGImpactMeshShapePart* shape0=(Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,4));
		const btGImpactMeshShapePart* shape1=(Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,5));
		int pairs=(int)lua_tointeger(L,6);
		int pair_count=(int)lua_tointeger(L,7);

		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_collide_gjk_triangles(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btGImpactMeshShapePart *, const btGImpactMeshShapePart *, const int *, int). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_collide_gjk_triangles(body0Wrap, body1Wrap, shape0, shape1, &pairs, pair_count);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::public_collide_sat_triangles(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btGImpactMeshShapePart * shape1, const int * pairs, int pair_count)
	static int _bind_public_collide_sat_triangles(lua_State *L) {
		if (!_lg_typecheck_public_collide_sat_triangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_collide_sat_triangles(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btGImpactMeshShapePart * shape1, const int * pairs, int pair_count) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_collide_sat_triangles(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btGImpactMeshShapePart * shape1, const int * pairs, int pair_count)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 58243831\narg 4 ID = 58243831\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btGImpactMeshShapePart* shape0=(Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,4));
		const btGImpactMeshShapePart* shape1=(Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,5));
		int pairs=(int)lua_tointeger(L,6);
		int pair_count=(int)lua_tointeger(L,7);

		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_collide_sat_triangles(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btGImpactMeshShapePart *, const btGImpactMeshShapePart *, const int *, int). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_collide_sat_triangles(body0Wrap, body1Wrap, shape0, shape1, &pairs, pair_count);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::public_shape_vs_shape_collision(const btCollisionObjectWrapper * body0, const btCollisionObjectWrapper * body1, const btCollisionShape * shape0, const btCollisionShape * shape1)
	static int _bind_public_shape_vs_shape_collision(lua_State *L) {
		if (!_lg_typecheck_public_shape_vs_shape_collision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_shape_vs_shape_collision(const btCollisionObjectWrapper * body0, const btCollisionObjectWrapper * body1, const btCollisionShape * shape0, const btCollisionShape * shape1) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_shape_vs_shape_collision(const btCollisionObjectWrapper * body0, const btCollisionObjectWrapper * body1, const btCollisionShape * shape0, const btCollisionShape * shape1)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 58243831\narg 4 ID = 58243831\n");
		}

		const btCollisionObjectWrapper* body0=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionShape* shape0=(Luna< btCollisionShape >::check(L,4));
		const btCollisionShape* shape1=(Luna< btCollisionShape >::check(L,5));

		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_shape_vs_shape_collision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btCollisionShape *, const btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_shape_vs_shape_collision(body0, body1, shape0, shape1);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::public_convex_vs_convex_collision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btCollisionShape * shape0, const btCollisionShape * shape1)
	static int _bind_public_convex_vs_convex_collision(lua_State *L) {
		if (!_lg_typecheck_public_convex_vs_convex_collision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_convex_vs_convex_collision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btCollisionShape * shape0, const btCollisionShape * shape1) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_convex_vs_convex_collision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btCollisionShape * shape0, const btCollisionShape * shape1)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 58243831\narg 4 ID = 58243831\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionShape* shape0=(Luna< btCollisionShape >::check(L,4));
		const btCollisionShape* shape1=(Luna< btCollisionShape >::check(L,5));

		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_convex_vs_convex_collision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btCollisionShape *, const btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_convex_vs_convex_collision(body0Wrap, body1Wrap, shape0, shape1);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::public_gimpact_vs_shape_find_pairs(const btTransform & trans0, const btTransform & trans1, const btGImpactShapeInterface * shape0, const btCollisionShape * shape1, btAlignedObjectArray< int > & collided_primitives)
	static int _bind_public_gimpact_vs_shape_find_pairs(lua_State *L) {
		if (!_lg_typecheck_public_gimpact_vs_shape_find_pairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_gimpact_vs_shape_find_pairs(const btTransform & trans0, const btTransform & trans1, const btGImpactShapeInterface * shape0, const btCollisionShape * shape1, btAlignedObjectArray< int > & collided_primitives) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_gimpact_vs_shape_find_pairs(const btTransform & trans0, const btTransform & trans1, const btGImpactShapeInterface * shape0, const btCollisionShape * shape1, btAlignedObjectArray< int > & collided_primitives)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\narg 3 ID = 58243831\narg 4 ID = 58243831\narg 5 ID = [unknown]\n");
		}

		const btTransform* trans0_ptr=(Luna< btTransform >::check(L,2));
		if( !trans0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans0 in btGImpactCollisionAlgorithm::public_gimpact_vs_shape_find_pairs function");
		}
		const btTransform & trans0=*trans0_ptr;
		const btTransform* trans1_ptr=(Luna< btTransform >::check(L,3));
		if( !trans1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans1 in btGImpactCollisionAlgorithm::public_gimpact_vs_shape_find_pairs function");
		}
		const btTransform & trans1=*trans1_ptr;
		const btGImpactShapeInterface* shape0=(Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,4));
		const btCollisionShape* shape1=(Luna< btCollisionShape >::check(L,5));
		btAlignedObjectArray< int >* collided_primitives_ptr=(Luna< btAlignedObjectArray< int > >::check(L,6));
		if( !collided_primitives_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg collided_primitives in btGImpactCollisionAlgorithm::public_gimpact_vs_shape_find_pairs function");
		}
		btAlignedObjectArray< int > & collided_primitives=*collided_primitives_ptr;

		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_gimpact_vs_shape_find_pairs(const btTransform &, const btTransform &, const btGImpactShapeInterface *, const btCollisionShape *, btAlignedObjectArray< int > &). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_gimpact_vs_shape_find_pairs(trans0, trans1, shape0, shape1, collided_primitives);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::public_gimpacttrimeshpart_vs_plane_collision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btStaticPlaneShape * shape1, bool swapped)
	static int _bind_public_gimpacttrimeshpart_vs_plane_collision(lua_State *L) {
		if (!_lg_typecheck_public_gimpacttrimeshpart_vs_plane_collision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_gimpacttrimeshpart_vs_plane_collision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btStaticPlaneShape * shape1, bool swapped) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_gimpacttrimeshpart_vs_plane_collision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactMeshShapePart * shape0, const btStaticPlaneShape * shape1, bool swapped)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 58243831\narg 4 ID = 58243831\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btGImpactMeshShapePart* shape0=(Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,4));
		const btStaticPlaneShape* shape1=(Luna< btCollisionShape >::checkSubType< btStaticPlaneShape >(L,5));
		bool swapped=(bool)(lua_toboolean(L,6)==1);

		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_gimpacttrimeshpart_vs_plane_collision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btGImpactMeshShapePart *, const btStaticPlaneShape *, bool). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_gimpacttrimeshpart_vs_plane_collision(body0Wrap, body1Wrap, shape0, shape1, swapped);

		return 0;
	}

	// btPersistentManifold * btGImpactCollisionAlgorithm::public_newContactManifold(const btCollisionObject * body0, const btCollisionObject * body1)
	static int _bind_public_newContactManifold(lua_State *L) {
		if (!_lg_typecheck_public_newContactManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btGImpactCollisionAlgorithm::public_newContactManifold(const btCollisionObject * body0, const btCollisionObject * body1) function, expected prototype:\nbtPersistentManifold * btGImpactCollisionAlgorithm::public_newContactManifold(const btCollisionObject * body0, const btCollisionObject * body1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		const btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));

		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btGImpactCollisionAlgorithm::public_newContactManifold(const btCollisionObject *, const btCollisionObject *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->public_newContactManifold(body0, body1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// void btGImpactCollisionAlgorithm::public_destroyConvexAlgorithm()
	static int _bind_public_destroyConvexAlgorithm(lua_State *L) {
		if (!_lg_typecheck_public_destroyConvexAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_destroyConvexAlgorithm() function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_destroyConvexAlgorithm()\nClass arguments details:\n");
		}


		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_destroyConvexAlgorithm(). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_destroyConvexAlgorithm();

		return 0;
	}

	// void btGImpactCollisionAlgorithm::public_destroyContactManifolds()
	static int _bind_public_destroyContactManifolds(lua_State *L) {
		if (!_lg_typecheck_public_destroyContactManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_destroyContactManifolds() function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_destroyContactManifolds()\nClass arguments details:\n");
		}


		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_destroyContactManifolds(). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_destroyContactManifolds();

		return 0;
	}

	// void btGImpactCollisionAlgorithm::public_clearCache()
	static int _bind_public_clearCache(lua_State *L) {
		if (!_lg_typecheck_public_clearCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_clearCache() function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_clearCache()\nClass arguments details:\n");
		}


		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_clearCache(). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_clearCache();

		return 0;
	}

	// btPersistentManifold * btGImpactCollisionAlgorithm::public_getLastManifold()
	static int _bind_public_getLastManifold(lua_State *L) {
		if (!_lg_typecheck_public_getLastManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btGImpactCollisionAlgorithm::public_getLastManifold() function, expected prototype:\nbtPersistentManifold * btGImpactCollisionAlgorithm::public_getLastManifold()\nClass arguments details:\n");
		}


		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btGImpactCollisionAlgorithm::public_getLastManifold(). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->public_getLastManifold();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// void btGImpactCollisionAlgorithm::public_checkManifold(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_public_checkManifold(lua_State *L) {
		if (!_lg_typecheck_public_checkManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_checkManifold(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_checkManifold(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));

		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_checkManifold(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_checkManifold(body0Wrap, body1Wrap);

		return 0;
	}

	// btCollisionAlgorithm * btGImpactCollisionAlgorithm::public_newAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_public_newAlgorithm(lua_State *L) {
		if (!_lg_typecheck_public_newAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btGImpactCollisionAlgorithm::public_newAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btGImpactCollisionAlgorithm::public_newAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));

		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btGImpactCollisionAlgorithm::public_newAlgorithm(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->public_newAlgorithm(body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}

	// void btGImpactCollisionAlgorithm::public_checkConvexAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_public_checkConvexAlgorithm(lua_State *L) {
		if (!_lg_typecheck_public_checkConvexAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_checkConvexAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_checkConvexAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));

		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_checkConvexAlgorithm(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_checkConvexAlgorithm(body0Wrap, body1Wrap);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::public_addContactPoint(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btVector3 & point, const btVector3 & normal, float distance)
	static int _bind_public_addContactPoint(lua_State *L) {
		if (!_lg_typecheck_public_addContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::public_addContactPoint(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btVector3 & point, const btVector3 & normal, float distance) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::public_addContactPoint(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btVector3 & point, const btVector3 & normal, float distance)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btVector3* point_ptr=(Luna< btVector3 >::check(L,4));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in btGImpactCollisionAlgorithm::public_addContactPoint function");
		}
		const btVector3 & point=*point_ptr;
		const btVector3* normal_ptr=(Luna< btVector3 >::check(L,5));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in btGImpactCollisionAlgorithm::public_addContactPoint function");
		}
		const btVector3 & normal=*normal_ptr;
		float distance=(float)lua_tonumber(L,6);

		wrapper_btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< wrapper_btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::public_addContactPoint(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->public_addContactPoint(body0Wrap, body1Wrap, point, normal, distance);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"collide_gjk_triangles",_bind_public_collide_gjk_triangles},
		{"collide_sat_triangles",_bind_public_collide_sat_triangles},
		{"shape_vs_shape_collision",_bind_public_shape_vs_shape_collision},
		{"convex_vs_convex_collision",_bind_public_convex_vs_convex_collision},
		{"gimpact_vs_shape_find_pairs",_bind_public_gimpact_vs_shape_find_pairs},
		{"gimpacttrimeshpart_vs_plane_collision",_bind_public_gimpacttrimeshpart_vs_plane_collision},
		{"newContactManifold",_bind_public_newContactManifold},
		{"destroyConvexAlgorithm",_bind_public_destroyConvexAlgorithm},
		{"destroyContactManifolds",_bind_public_destroyContactManifolds},
		{"clearCache",_bind_public_clearCache},
		{"getLastManifold",_bind_public_getLastManifold},
		{"checkManifold",_bind_public_checkManifold},
		{"newAlgorithm",_bind_public_newAlgorithm},
		{"checkConvexAlgorithm",_bind_public_checkConvexAlgorithm},
		{"addContactPoint",_bind_public_addContactPoint},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

