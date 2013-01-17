#include <plug_common.h>

#include <LinearMath/btAabbUtil2.h>
#include <LinearMath/btAlignedObjectArray.h>
#include <BulletCollision/BroadphaseCollision/btAxisSweep3.h>
#include <BulletCollision/Gimpact/btBoxCollision.h>
#include <BulletCollision/CollisionDispatch/btCollisionDispatcher.h>
#include <BulletCollision/CollisionShapes/btCollisionMargin.h>
#include <BulletCollision/CollisionDispatch/btCollisionObject.h>
#include <BulletCollision/CollisionDispatch/btCollisionObjectWrapper.h>
#include <BulletCollision/Gimpact/btContactProcessing.h>
#include <BulletCollision/CollisionShapes/btConvexPolyhedron.h>
#include <BulletCollision/CollisionShapes/btConvexShape.h>
#include <BulletCollision/BroadphaseCollision/btDbvt.h>
#include <BulletCollision/BroadphaseCollision/btDbvtBroadphase.h>
#include <BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.h>
#include <BulletCollision/Gimpact/btGenericPoolAllocator.h>
#include <BulletCollision/Gimpact/btGeometryOperations.h>
#include <BulletCollision/Gimpact/btGImpactCollisionAlgorithm.h>
#include <BulletDynamics/ConstraintSolver/btHingeConstraint.h>
#include <LinearMath/btMatrix3x3.h>
#include <BulletCollision/NarrowPhaseCollision/btPersistentManifold.h>
#include <BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h>
#include <BulletCollision/BroadphaseCollision/btQuantizedBvh.h>
#include <LinearMath/btQuickprof.h>
#include <LinearMath/btRandom.h>
#include <BulletDynamics/Dynamics/btRigidBody.h>
#include <LinearMath/btScalar.h>
#include <LinearMath/btSerializer.h>
#include <BulletCollision/NarrowPhaseCollision/btSimplexSolverInterface.h>
#include <BulletDynamics/ConstraintSolver/btSliderConstraint.h>
#include <BulletDynamics/ConstraintSolver/btSolverBody.h>
#include <LinearMath/btTransform.h>
#include <LinearMath/btTransformUtil.h>
#include <BulletCollision/CollisionShapes/btTriangleInfoMap.h>
#include <BulletCollision/Gimpact/btTriangleShapeEx.h>
#include <BulletCollision/CollisionDispatch/btUnionFind.h>
#include <LinearMath/btVector3.h>
#include <BulletCollision/NarrowPhaseCollision/btVoronoiSimplexSolver.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,USE_BANCHLESS); lua_setfield(L,-2,"USE_BANCHLESS");
	lua_pushnumber(L,BT_USE_PLACEMENT_NEW); lua_setfield(L,-2,"BT_USE_PLACEMENT_NEW");
	lua_pushnumber(L,USE_OVERLAP_TEST_ON_REMOVES); lua_setfield(L,-2,"USE_OVERLAP_TEST_ON_REMOVES");
	lua_pushnumber(L,CLEAN_INVALID_PAIRS); lua_setfield(L,-2,"CLEAN_INVALID_PAIRS");
	lua_pushnumber(L,USE_DISPATCH_REGISTRY_ARRAY); lua_setfield(L,-2,"USE_DISPATCH_REGISTRY_ARRAY");
	lua_pushnumber(L,ACTIVE_TAG); lua_setfield(L,-2,"ACTIVE_TAG");
	lua_pushnumber(L,ISLAND_SLEEPING); lua_setfield(L,-2,"ISLAND_SLEEPING");
	lua_pushnumber(L,WANTS_DEACTIVATION); lua_setfield(L,-2,"WANTS_DEACTIVATION");
	lua_pushnumber(L,DISABLE_DEACTIVATION); lua_setfield(L,-2,"DISABLE_DEACTIVATION");
	lua_pushnumber(L,DISABLE_SIMULATION); lua_setfield(L,-2,"DISABLE_SIMULATION");
	lua_pushnumber(L,NORMAL_CONTACT_AVERAGE); lua_setfield(L,-2,"NORMAL_CONTACT_AVERAGE");
	lua_pushnumber(L,TEST_INTERNAL_OBJECTS); lua_setfield(L,-2,"TEST_INTERNAL_OBJECTS");
	lua_pushnumber(L,MAX_PREFERRED_PENETRATION_DIRECTIONS); lua_setfield(L,-2,"MAX_PREFERRED_PENETRATION_DIRECTIONS");
	lua_pushnumber(L,DBVT_ENABLE_BENCHMARK); lua_setfield(L,-2,"DBVT_ENABLE_BENCHMARK");
	lua_pushnumber(L,DBVT_BP_PROFILE); lua_setfield(L,-2,"DBVT_BP_PROFILE");
	lua_pushnumber(L,DBVT_BP_PREVENTFALSEUPDATE); lua_setfield(L,-2,"DBVT_BP_PREVENTFALSEUPDATE");
	lua_pushnumber(L,DBVT_BP_ACCURATESLEEPING); lua_setfield(L,-2,"DBVT_BP_ACCURATESLEEPING");
	lua_pushnumber(L,DBVT_BP_ENABLE_BENCHMARK); lua_setfield(L,-2,"DBVT_BP_ENABLE_BENCHMARK");
	lua_pushnumber(L,BT_6DOF_FLAGS_AXIS_SHIFT); lua_setfield(L,-2,"BT_6DOF_FLAGS_AXIS_SHIFT");
	lua_pushnumber(L,BT_DEFAULT_MAX_POOLS); lua_setfield(L,-2,"BT_DEFAULT_MAX_POOLS");
	lua_pushnumber(L,GIMPACT_VS_PLANE_COLLISION); lua_setfield(L,-2,"GIMPACT_VS_PLANE_COLLISION");
	lua_pushnumber(L,_BT_USE_CENTER_LIMIT_); lua_setfield(L,-2,"_BT_USE_CENTER_LIMIT_");
	lua_pushnumber(L,MANIFOLD_CACHE_SIZE); lua_setfield(L,-2,"MANIFOLD_CACHE_SIZE");
	lua_pushnumber(L,MAINTAIN_PERSISTENCY); lua_setfield(L,-2,"MAINTAIN_PERSISTENCY");
	lua_pushnumber(L,MAX_SUBTREE_SIZE_IN_BYTES); lua_setfield(L,-2,"MAX_SUBTREE_SIZE_IN_BYTES");
	lua_pushnumber(L,MAX_NUM_PARTS_IN_BITS); lua_setfield(L,-2,"MAX_NUM_PARTS_IN_BITS");
	lua_pushnumber(L,USE_BT_CLOCK); lua_setfield(L,-2,"USE_BT_CLOCK");
	lua_pushnumber(L,BT_BULLET_VERSION); lua_setfield(L,-2,"BT_BULLET_VERSION");
	lua_pushnumber(L,BT_HEADER_LENGTH); lua_setfield(L,-2,"BT_HEADER_LENGTH");
	lua_pushnumber(L,NO_VIRTUAL_INTERFACE); lua_setfield(L,-2,"NO_VIRTUAL_INTERFACE");
	lua_pushnumber(L,TRI_INFO_V0V1_CONVEX); lua_setfield(L,-2,"TRI_INFO_V0V1_CONVEX");
	lua_pushnumber(L,TRI_INFO_V1V2_CONVEX); lua_setfield(L,-2,"TRI_INFO_V1V2_CONVEX");
	lua_pushnumber(L,TRI_INFO_V2V0_CONVEX); lua_setfield(L,-2,"TRI_INFO_V2V0_CONVEX");
	lua_pushnumber(L,TRI_INFO_V0V1_SWAP_NORMALB); lua_setfield(L,-2,"TRI_INFO_V0V1_SWAP_NORMALB");
	lua_pushnumber(L,TRI_INFO_V1V2_SWAP_NORMALB); lua_setfield(L,-2,"TRI_INFO_V1V2_SWAP_NORMALB");
	lua_pushnumber(L,TRI_INFO_V2V0_SWAP_NORMALB); lua_setfield(L,-2,"TRI_INFO_V2V0_SWAP_NORMALB");
	lua_pushnumber(L,MAX_TRI_CLIPPING); lua_setfield(L,-2,"MAX_TRI_CLIPPING");
	lua_pushnumber(L,USE_PATH_COMPRESSION); lua_setfield(L,-2,"USE_PATH_COMPRESSION");
	lua_pushnumber(L,STATIC_SIMULATION_ISLAND_OPTIMIZATION); lua_setfield(L,-2,"STATIC_SIMULATION_ISLAND_OPTIMIZATION");
	lua_pushnumber(L,VORONOI_SIMPLEX_MAX_VERTS); lua_setfield(L,-2,"VORONOI_SIMPLEX_MAX_VERTS");
}

#ifdef __cplusplus
}
#endif

