#include <plug_common.h>

#include <BulletCollision/Gimpact/btBoxCollision.h>
#include <BulletCollision/BroadphaseCollision/btBroadphaseProxy.h>
#include <BulletCollision/CollisionShapes/btConcaveShape.h>
#include <BulletDynamics/ConstraintSolver/btConeTwistConstraint.h>
#include <BulletDynamics/ConstraintSolver/btContactSolverInfo.h>
#include <LinearMath/btConvexHull.h>
#include <BulletDynamics/Dynamics/btDynamicsWorld.h>
#include <BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.h>
#include <BulletCollision/Gimpact/btGImpactShape.h>
#include <BulletDynamics/ConstraintSolver/btHingeConstraint.h>
#include <BulletCollision/CollisionDispatch/btInternalEdgeUtility.h>
#include <BulletCollision/NarrowPhaseCollision/btPersistentManifold.h>
#include <BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h>
#include <BulletDynamics/Dynamics/btRigidBody.h>
#include <LinearMath/btSerializer.h>
#include <BulletDynamics/ConstraintSolver/btSliderConstraint.h>
#include <BulletDynamics/ConstraintSolver/btTypedConstraint.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum eBT_PLANE_INTERSECTION_TYPE

	lua_pushnumber(L,::BT_CONST_BACK_PLANE); lua_setfield(L,-2,"BT_CONST_BACK_PLANE");
	lua_pushnumber(L,::BT_CONST_COLLIDE_PLANE); lua_setfield(L,-2,"BT_CONST_COLLIDE_PLANE");
	lua_pushnumber(L,::BT_CONST_FRONT_PLANE); lua_setfield(L,-2,"BT_CONST_FRONT_PLANE");

	lua_setfield(L,-2,"eBT_PLANE_INTERSECTION_TYPE");

	lua_pushnumber(L,::BT_CONST_BACK_PLANE); lua_setfield(L,-2,"BT_CONST_BACK_PLANE");
	lua_pushnumber(L,::BT_CONST_COLLIDE_PLANE); lua_setfield(L,-2,"BT_CONST_COLLIDE_PLANE");
	lua_pushnumber(L,::BT_CONST_FRONT_PLANE); lua_setfield(L,-2,"BT_CONST_FRONT_PLANE");


	lua_newtable(L); // enum BroadphaseNativeTypes

	lua_pushnumber(L,::BOX_SHAPE_PROXYTYPE); lua_setfield(L,-2,"BOX_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::TRIANGLE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"TRIANGLE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::TETRAHEDRAL_SHAPE_PROXYTYPE); lua_setfield(L,-2,"TETRAHEDRAL_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONVEX_TRIANGLEMESH_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONVEX_TRIANGLEMESH_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONVEX_HULL_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONVEX_HULL_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONVEX_POINT_CLOUD_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONVEX_POINT_CLOUD_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CUSTOM_POLYHEDRAL_SHAPE_TYPE); lua_setfield(L,-2,"CUSTOM_POLYHEDRAL_SHAPE_TYPE");
	lua_pushnumber(L,::IMPLICIT_CONVEX_SHAPES_START_HERE); lua_setfield(L,-2,"IMPLICIT_CONVEX_SHAPES_START_HERE");
	lua_pushnumber(L,::SPHERE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"SPHERE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::MULTI_SPHERE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"MULTI_SPHERE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CAPSULE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CAPSULE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONVEX_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONVEX_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CYLINDER_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CYLINDER_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::UNIFORM_SCALING_SHAPE_PROXYTYPE); lua_setfield(L,-2,"UNIFORM_SCALING_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::MINKOWSKI_SUM_SHAPE_PROXYTYPE); lua_setfield(L,-2,"MINKOWSKI_SUM_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::MINKOWSKI_DIFFERENCE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"MINKOWSKI_DIFFERENCE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::BOX_2D_SHAPE_PROXYTYPE); lua_setfield(L,-2,"BOX_2D_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONVEX_2D_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONVEX_2D_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CUSTOM_CONVEX_SHAPE_TYPE); lua_setfield(L,-2,"CUSTOM_CONVEX_SHAPE_TYPE");
	lua_pushnumber(L,::CONCAVE_SHAPES_START_HERE); lua_setfield(L,-2,"CONCAVE_SHAPES_START_HERE");
	lua_pushnumber(L,::TRIANGLE_MESH_SHAPE_PROXYTYPE); lua_setfield(L,-2,"TRIANGLE_MESH_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::SCALED_TRIANGLE_MESH_SHAPE_PROXYTYPE); lua_setfield(L,-2,"SCALED_TRIANGLE_MESH_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::FAST_CONCAVE_MESH_PROXYTYPE); lua_setfield(L,-2,"FAST_CONCAVE_MESH_PROXYTYPE");
	lua_pushnumber(L,::TERRAIN_SHAPE_PROXYTYPE); lua_setfield(L,-2,"TERRAIN_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::GIMPACT_SHAPE_PROXYTYPE); lua_setfield(L,-2,"GIMPACT_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::MULTIMATERIAL_TRIANGLE_MESH_PROXYTYPE); lua_setfield(L,-2,"MULTIMATERIAL_TRIANGLE_MESH_PROXYTYPE");
	lua_pushnumber(L,::EMPTY_SHAPE_PROXYTYPE); lua_setfield(L,-2,"EMPTY_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::STATIC_PLANE_PROXYTYPE); lua_setfield(L,-2,"STATIC_PLANE_PROXYTYPE");
	lua_pushnumber(L,::CUSTOM_CONCAVE_SHAPE_TYPE); lua_setfield(L,-2,"CUSTOM_CONCAVE_SHAPE_TYPE");
	lua_pushnumber(L,::CONCAVE_SHAPES_END_HERE); lua_setfield(L,-2,"CONCAVE_SHAPES_END_HERE");
	lua_pushnumber(L,::COMPOUND_SHAPE_PROXYTYPE); lua_setfield(L,-2,"COMPOUND_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::SOFTBODY_SHAPE_PROXYTYPE); lua_setfield(L,-2,"SOFTBODY_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::HFFLUID_SHAPE_PROXYTYPE); lua_setfield(L,-2,"HFFLUID_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::HFFLUID_BUOYANT_CONVEX_SHAPE_PROXYTYPE); lua_setfield(L,-2,"HFFLUID_BUOYANT_CONVEX_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::INVALID_SHAPE_PROXYTYPE); lua_setfield(L,-2,"INVALID_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::MAX_BROADPHASE_COLLISION_TYPES); lua_setfield(L,-2,"MAX_BROADPHASE_COLLISION_TYPES");

	lua_setfield(L,-2,"BroadphaseNativeTypes");

	lua_pushnumber(L,::BOX_SHAPE_PROXYTYPE); lua_setfield(L,-2,"BOX_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::TRIANGLE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"TRIANGLE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::TETRAHEDRAL_SHAPE_PROXYTYPE); lua_setfield(L,-2,"TETRAHEDRAL_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONVEX_TRIANGLEMESH_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONVEX_TRIANGLEMESH_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONVEX_HULL_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONVEX_HULL_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONVEX_POINT_CLOUD_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONVEX_POINT_CLOUD_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CUSTOM_POLYHEDRAL_SHAPE_TYPE); lua_setfield(L,-2,"CUSTOM_POLYHEDRAL_SHAPE_TYPE");
	lua_pushnumber(L,::IMPLICIT_CONVEX_SHAPES_START_HERE); lua_setfield(L,-2,"IMPLICIT_CONVEX_SHAPES_START_HERE");
	lua_pushnumber(L,::SPHERE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"SPHERE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::MULTI_SPHERE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"MULTI_SPHERE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CAPSULE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CAPSULE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONVEX_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONVEX_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CYLINDER_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CYLINDER_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::UNIFORM_SCALING_SHAPE_PROXYTYPE); lua_setfield(L,-2,"UNIFORM_SCALING_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::MINKOWSKI_SUM_SHAPE_PROXYTYPE); lua_setfield(L,-2,"MINKOWSKI_SUM_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::MINKOWSKI_DIFFERENCE_SHAPE_PROXYTYPE); lua_setfield(L,-2,"MINKOWSKI_DIFFERENCE_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::BOX_2D_SHAPE_PROXYTYPE); lua_setfield(L,-2,"BOX_2D_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CONVEX_2D_SHAPE_PROXYTYPE); lua_setfield(L,-2,"CONVEX_2D_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::CUSTOM_CONVEX_SHAPE_TYPE); lua_setfield(L,-2,"CUSTOM_CONVEX_SHAPE_TYPE");
	lua_pushnumber(L,::CONCAVE_SHAPES_START_HERE); lua_setfield(L,-2,"CONCAVE_SHAPES_START_HERE");
	lua_pushnumber(L,::TRIANGLE_MESH_SHAPE_PROXYTYPE); lua_setfield(L,-2,"TRIANGLE_MESH_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::SCALED_TRIANGLE_MESH_SHAPE_PROXYTYPE); lua_setfield(L,-2,"SCALED_TRIANGLE_MESH_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::FAST_CONCAVE_MESH_PROXYTYPE); lua_setfield(L,-2,"FAST_CONCAVE_MESH_PROXYTYPE");
	lua_pushnumber(L,::TERRAIN_SHAPE_PROXYTYPE); lua_setfield(L,-2,"TERRAIN_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::GIMPACT_SHAPE_PROXYTYPE); lua_setfield(L,-2,"GIMPACT_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::MULTIMATERIAL_TRIANGLE_MESH_PROXYTYPE); lua_setfield(L,-2,"MULTIMATERIAL_TRIANGLE_MESH_PROXYTYPE");
	lua_pushnumber(L,::EMPTY_SHAPE_PROXYTYPE); lua_setfield(L,-2,"EMPTY_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::STATIC_PLANE_PROXYTYPE); lua_setfield(L,-2,"STATIC_PLANE_PROXYTYPE");
	lua_pushnumber(L,::CUSTOM_CONCAVE_SHAPE_TYPE); lua_setfield(L,-2,"CUSTOM_CONCAVE_SHAPE_TYPE");
	lua_pushnumber(L,::CONCAVE_SHAPES_END_HERE); lua_setfield(L,-2,"CONCAVE_SHAPES_END_HERE");
	lua_pushnumber(L,::COMPOUND_SHAPE_PROXYTYPE); lua_setfield(L,-2,"COMPOUND_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::SOFTBODY_SHAPE_PROXYTYPE); lua_setfield(L,-2,"SOFTBODY_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::HFFLUID_SHAPE_PROXYTYPE); lua_setfield(L,-2,"HFFLUID_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::HFFLUID_BUOYANT_CONVEX_SHAPE_PROXYTYPE); lua_setfield(L,-2,"HFFLUID_BUOYANT_CONVEX_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::INVALID_SHAPE_PROXYTYPE); lua_setfield(L,-2,"INVALID_SHAPE_PROXYTYPE");
	lua_pushnumber(L,::MAX_BROADPHASE_COLLISION_TYPES); lua_setfield(L,-2,"MAX_BROADPHASE_COLLISION_TYPES");


	lua_newtable(L); // enum PHY_ScalarType

	lua_pushnumber(L,::PHY_FLOAT); lua_setfield(L,-2,"PHY_FLOAT");
	lua_pushnumber(L,::PHY_DOUBLE); lua_setfield(L,-2,"PHY_DOUBLE");
	lua_pushnumber(L,::PHY_INTEGER); lua_setfield(L,-2,"PHY_INTEGER");
	lua_pushnumber(L,::PHY_SHORT); lua_setfield(L,-2,"PHY_SHORT");
	lua_pushnumber(L,::PHY_FIXEDPOINT88); lua_setfield(L,-2,"PHY_FIXEDPOINT88");
	lua_pushnumber(L,::PHY_UCHAR); lua_setfield(L,-2,"PHY_UCHAR");

	lua_setfield(L,-2,"PHY_ScalarType");

	lua_pushnumber(L,::PHY_FLOAT); lua_setfield(L,-2,"PHY_FLOAT");
	lua_pushnumber(L,::PHY_DOUBLE); lua_setfield(L,-2,"PHY_DOUBLE");
	lua_pushnumber(L,::PHY_INTEGER); lua_setfield(L,-2,"PHY_INTEGER");
	lua_pushnumber(L,::PHY_SHORT); lua_setfield(L,-2,"PHY_SHORT");
	lua_pushnumber(L,::PHY_FIXEDPOINT88); lua_setfield(L,-2,"PHY_FIXEDPOINT88");
	lua_pushnumber(L,::PHY_UCHAR); lua_setfield(L,-2,"PHY_UCHAR");


	lua_newtable(L); // enum btConeTwistFlags

	lua_pushnumber(L,::BT_CONETWIST_FLAGS_LIN_CFM); lua_setfield(L,-2,"BT_CONETWIST_FLAGS_LIN_CFM");
	lua_pushnumber(L,::BT_CONETWIST_FLAGS_LIN_ERP); lua_setfield(L,-2,"BT_CONETWIST_FLAGS_LIN_ERP");
	lua_pushnumber(L,::BT_CONETWIST_FLAGS_ANG_CFM); lua_setfield(L,-2,"BT_CONETWIST_FLAGS_ANG_CFM");

	lua_setfield(L,-2,"btConeTwistFlags");

	lua_pushnumber(L,::BT_CONETWIST_FLAGS_LIN_CFM); lua_setfield(L,-2,"BT_CONETWIST_FLAGS_LIN_CFM");
	lua_pushnumber(L,::BT_CONETWIST_FLAGS_LIN_ERP); lua_setfield(L,-2,"BT_CONETWIST_FLAGS_LIN_ERP");
	lua_pushnumber(L,::BT_CONETWIST_FLAGS_ANG_CFM); lua_setfield(L,-2,"BT_CONETWIST_FLAGS_ANG_CFM");


	lua_newtable(L); // enum btSolverMode

	lua_pushnumber(L,::SOLVER_RANDMIZE_ORDER); lua_setfield(L,-2,"SOLVER_RANDMIZE_ORDER");
	lua_pushnumber(L,::SOLVER_FRICTION_SEPARATE); lua_setfield(L,-2,"SOLVER_FRICTION_SEPARATE");
	lua_pushnumber(L,::SOLVER_USE_WARMSTARTING); lua_setfield(L,-2,"SOLVER_USE_WARMSTARTING");
	lua_pushnumber(L,::SOLVER_USE_2_FRICTION_DIRECTIONS); lua_setfield(L,-2,"SOLVER_USE_2_FRICTION_DIRECTIONS");
	lua_pushnumber(L,::SOLVER_ENABLE_FRICTION_DIRECTION_CACHING); lua_setfield(L,-2,"SOLVER_ENABLE_FRICTION_DIRECTION_CACHING");
	lua_pushnumber(L,::SOLVER_DISABLE_VELOCITY_DEPENDENT_FRICTION_DIRECTION); lua_setfield(L,-2,"SOLVER_DISABLE_VELOCITY_DEPENDENT_FRICTION_DIRECTION");
	lua_pushnumber(L,::SOLVER_CACHE_FRIENDLY); lua_setfield(L,-2,"SOLVER_CACHE_FRIENDLY");
	lua_pushnumber(L,::SOLVER_SIMD); lua_setfield(L,-2,"SOLVER_SIMD");
	lua_pushnumber(L,::SOLVER_INTERLEAVE_CONTACT_AND_FRICTION_CONSTRAINTS); lua_setfield(L,-2,"SOLVER_INTERLEAVE_CONTACT_AND_FRICTION_CONSTRAINTS");
	lua_pushnumber(L,::SOLVER_ALLOW_ZERO_LENGTH_FRICTION_DIRECTIONS); lua_setfield(L,-2,"SOLVER_ALLOW_ZERO_LENGTH_FRICTION_DIRECTIONS");

	lua_setfield(L,-2,"btSolverMode");

	lua_pushnumber(L,::SOLVER_RANDMIZE_ORDER); lua_setfield(L,-2,"SOLVER_RANDMIZE_ORDER");
	lua_pushnumber(L,::SOLVER_FRICTION_SEPARATE); lua_setfield(L,-2,"SOLVER_FRICTION_SEPARATE");
	lua_pushnumber(L,::SOLVER_USE_WARMSTARTING); lua_setfield(L,-2,"SOLVER_USE_WARMSTARTING");
	lua_pushnumber(L,::SOLVER_USE_2_FRICTION_DIRECTIONS); lua_setfield(L,-2,"SOLVER_USE_2_FRICTION_DIRECTIONS");
	lua_pushnumber(L,::SOLVER_ENABLE_FRICTION_DIRECTION_CACHING); lua_setfield(L,-2,"SOLVER_ENABLE_FRICTION_DIRECTION_CACHING");
	lua_pushnumber(L,::SOLVER_DISABLE_VELOCITY_DEPENDENT_FRICTION_DIRECTION); lua_setfield(L,-2,"SOLVER_DISABLE_VELOCITY_DEPENDENT_FRICTION_DIRECTION");
	lua_pushnumber(L,::SOLVER_CACHE_FRIENDLY); lua_setfield(L,-2,"SOLVER_CACHE_FRIENDLY");
	lua_pushnumber(L,::SOLVER_SIMD); lua_setfield(L,-2,"SOLVER_SIMD");
	lua_pushnumber(L,::SOLVER_INTERLEAVE_CONTACT_AND_FRICTION_CONSTRAINTS); lua_setfield(L,-2,"SOLVER_INTERLEAVE_CONTACT_AND_FRICTION_CONSTRAINTS");
	lua_pushnumber(L,::SOLVER_ALLOW_ZERO_LENGTH_FRICTION_DIRECTIONS); lua_setfield(L,-2,"SOLVER_ALLOW_ZERO_LENGTH_FRICTION_DIRECTIONS");


	lua_newtable(L); // enum HullFlag

	lua_pushnumber(L,::QF_TRIANGLES); lua_setfield(L,-2,"QF_TRIANGLES");
	lua_pushnumber(L,::QF_REVERSE_ORDER); lua_setfield(L,-2,"QF_REVERSE_ORDER");
	lua_pushnumber(L,::QF_DEFAULT); lua_setfield(L,-2,"QF_DEFAULT");

	lua_setfield(L,-2,"HullFlag");

	lua_pushnumber(L,::QF_TRIANGLES); lua_setfield(L,-2,"QF_TRIANGLES");
	lua_pushnumber(L,::QF_REVERSE_ORDER); lua_setfield(L,-2,"QF_REVERSE_ORDER");
	lua_pushnumber(L,::QF_DEFAULT); lua_setfield(L,-2,"QF_DEFAULT");


	lua_newtable(L); // enum HullError

	lua_pushnumber(L,::QE_OK); lua_setfield(L,-2,"QE_OK");
	lua_pushnumber(L,::QE_FAIL); lua_setfield(L,-2,"QE_FAIL");

	lua_setfield(L,-2,"HullError");

	lua_pushnumber(L,::QE_OK); lua_setfield(L,-2,"QE_OK");
	lua_pushnumber(L,::QE_FAIL); lua_setfield(L,-2,"QE_FAIL");


	lua_newtable(L); // enum btDynamicsWorldType

	lua_pushnumber(L,::BT_SIMPLE_DYNAMICS_WORLD); lua_setfield(L,-2,"BT_SIMPLE_DYNAMICS_WORLD");
	lua_pushnumber(L,::BT_DISCRETE_DYNAMICS_WORLD); lua_setfield(L,-2,"BT_DISCRETE_DYNAMICS_WORLD");
	lua_pushnumber(L,::BT_CONTINUOUS_DYNAMICS_WORLD); lua_setfield(L,-2,"BT_CONTINUOUS_DYNAMICS_WORLD");
	lua_pushnumber(L,::BT_SOFT_RIGID_DYNAMICS_WORLD); lua_setfield(L,-2,"BT_SOFT_RIGID_DYNAMICS_WORLD");

	lua_setfield(L,-2,"btDynamicsWorldType");

	lua_pushnumber(L,::BT_SIMPLE_DYNAMICS_WORLD); lua_setfield(L,-2,"BT_SIMPLE_DYNAMICS_WORLD");
	lua_pushnumber(L,::BT_DISCRETE_DYNAMICS_WORLD); lua_setfield(L,-2,"BT_DISCRETE_DYNAMICS_WORLD");
	lua_pushnumber(L,::BT_CONTINUOUS_DYNAMICS_WORLD); lua_setfield(L,-2,"BT_CONTINUOUS_DYNAMICS_WORLD");
	lua_pushnumber(L,::BT_SOFT_RIGID_DYNAMICS_WORLD); lua_setfield(L,-2,"BT_SOFT_RIGID_DYNAMICS_WORLD");


	lua_newtable(L); // enum bt6DofFlags

	lua_pushnumber(L,::BT_6DOF_FLAGS_CFM_NORM); lua_setfield(L,-2,"BT_6DOF_FLAGS_CFM_NORM");
	lua_pushnumber(L,::BT_6DOF_FLAGS_CFM_STOP); lua_setfield(L,-2,"BT_6DOF_FLAGS_CFM_STOP");
	lua_pushnumber(L,::BT_6DOF_FLAGS_ERP_STOP); lua_setfield(L,-2,"BT_6DOF_FLAGS_ERP_STOP");

	lua_setfield(L,-2,"bt6DofFlags");

	lua_pushnumber(L,::BT_6DOF_FLAGS_CFM_NORM); lua_setfield(L,-2,"BT_6DOF_FLAGS_CFM_NORM");
	lua_pushnumber(L,::BT_6DOF_FLAGS_CFM_STOP); lua_setfield(L,-2,"BT_6DOF_FLAGS_CFM_STOP");
	lua_pushnumber(L,::BT_6DOF_FLAGS_ERP_STOP); lua_setfield(L,-2,"BT_6DOF_FLAGS_ERP_STOP");


	lua_newtable(L); // enum eGIMPACT_SHAPE_TYPE

	lua_pushnumber(L,::CONST_GIMPACT_COMPOUND_SHAPE); lua_setfield(L,-2,"CONST_GIMPACT_COMPOUND_SHAPE");
	lua_pushnumber(L,::CONST_GIMPACT_TRIMESH_SHAPE_PART); lua_setfield(L,-2,"CONST_GIMPACT_TRIMESH_SHAPE_PART");
	lua_pushnumber(L,::CONST_GIMPACT_TRIMESH_SHAPE); lua_setfield(L,-2,"CONST_GIMPACT_TRIMESH_SHAPE");

	lua_setfield(L,-2,"eGIMPACT_SHAPE_TYPE");

	lua_pushnumber(L,::CONST_GIMPACT_COMPOUND_SHAPE); lua_setfield(L,-2,"CONST_GIMPACT_COMPOUND_SHAPE");
	lua_pushnumber(L,::CONST_GIMPACT_TRIMESH_SHAPE_PART); lua_setfield(L,-2,"CONST_GIMPACT_TRIMESH_SHAPE_PART");
	lua_pushnumber(L,::CONST_GIMPACT_TRIMESH_SHAPE); lua_setfield(L,-2,"CONST_GIMPACT_TRIMESH_SHAPE");


	lua_newtable(L); // enum btHingeFlags

	lua_pushnumber(L,::BT_HINGE_FLAGS_CFM_STOP); lua_setfield(L,-2,"BT_HINGE_FLAGS_CFM_STOP");
	lua_pushnumber(L,::BT_HINGE_FLAGS_ERP_STOP); lua_setfield(L,-2,"BT_HINGE_FLAGS_ERP_STOP");
	lua_pushnumber(L,::BT_HINGE_FLAGS_CFM_NORM); lua_setfield(L,-2,"BT_HINGE_FLAGS_CFM_NORM");

	lua_setfield(L,-2,"btHingeFlags");

	lua_pushnumber(L,::BT_HINGE_FLAGS_CFM_STOP); lua_setfield(L,-2,"BT_HINGE_FLAGS_CFM_STOP");
	lua_pushnumber(L,::BT_HINGE_FLAGS_ERP_STOP); lua_setfield(L,-2,"BT_HINGE_FLAGS_ERP_STOP");
	lua_pushnumber(L,::BT_HINGE_FLAGS_CFM_NORM); lua_setfield(L,-2,"BT_HINGE_FLAGS_CFM_NORM");


	lua_newtable(L); // enum btInternalEdgeAdjustFlags

	lua_pushnumber(L,::BT_TRIANGLE_CONVEX_BACKFACE_MODE); lua_setfield(L,-2,"BT_TRIANGLE_CONVEX_BACKFACE_MODE");
	lua_pushnumber(L,::BT_TRIANGLE_CONCAVE_DOUBLE_SIDED); lua_setfield(L,-2,"BT_TRIANGLE_CONCAVE_DOUBLE_SIDED");
	lua_pushnumber(L,::BT_TRIANGLE_CONVEX_DOUBLE_SIDED); lua_setfield(L,-2,"BT_TRIANGLE_CONVEX_DOUBLE_SIDED");

	lua_setfield(L,-2,"btInternalEdgeAdjustFlags");

	lua_pushnumber(L,::BT_TRIANGLE_CONVEX_BACKFACE_MODE); lua_setfield(L,-2,"BT_TRIANGLE_CONVEX_BACKFACE_MODE");
	lua_pushnumber(L,::BT_TRIANGLE_CONCAVE_DOUBLE_SIDED); lua_setfield(L,-2,"BT_TRIANGLE_CONCAVE_DOUBLE_SIDED");
	lua_pushnumber(L,::BT_TRIANGLE_CONVEX_DOUBLE_SIDED); lua_setfield(L,-2,"BT_TRIANGLE_CONVEX_DOUBLE_SIDED");


	lua_newtable(L); // enum btContactManifoldTypes

	lua_pushnumber(L,::MIN_CONTACT_MANIFOLD_TYPE); lua_setfield(L,-2,"MIN_CONTACT_MANIFOLD_TYPE");
	lua_pushnumber(L,::BT_PERSISTENT_MANIFOLD_TYPE); lua_setfield(L,-2,"BT_PERSISTENT_MANIFOLD_TYPE");

	lua_setfield(L,-2,"btContactManifoldTypes");

	lua_pushnumber(L,::MIN_CONTACT_MANIFOLD_TYPE); lua_setfield(L,-2,"MIN_CONTACT_MANIFOLD_TYPE");
	lua_pushnumber(L,::BT_PERSISTENT_MANIFOLD_TYPE); lua_setfield(L,-2,"BT_PERSISTENT_MANIFOLD_TYPE");


	lua_newtable(L); // enum btPoint2PointFlags

	lua_pushnumber(L,::BT_P2P_FLAGS_ERP); lua_setfield(L,-2,"BT_P2P_FLAGS_ERP");
	lua_pushnumber(L,::BT_P2P_FLAGS_CFM); lua_setfield(L,-2,"BT_P2P_FLAGS_CFM");

	lua_setfield(L,-2,"btPoint2PointFlags");

	lua_pushnumber(L,::BT_P2P_FLAGS_ERP); lua_setfield(L,-2,"BT_P2P_FLAGS_ERP");
	lua_pushnumber(L,::BT_P2P_FLAGS_CFM); lua_setfield(L,-2,"BT_P2P_FLAGS_CFM");


	lua_newtable(L); // enum btRigidBodyFlags

	lua_pushnumber(L,::BT_DISABLE_WORLD_GRAVITY); lua_setfield(L,-2,"BT_DISABLE_WORLD_GRAVITY");
	lua_pushnumber(L,::BT_ENABLE_GYROPSCOPIC_FORCE); lua_setfield(L,-2,"BT_ENABLE_GYROPSCOPIC_FORCE");

	lua_setfield(L,-2,"btRigidBodyFlags");

	lua_pushnumber(L,::BT_DISABLE_WORLD_GRAVITY); lua_setfield(L,-2,"BT_DISABLE_WORLD_GRAVITY");
	lua_pushnumber(L,::BT_ENABLE_GYROPSCOPIC_FORCE); lua_setfield(L,-2,"BT_ENABLE_GYROPSCOPIC_FORCE");


	lua_newtable(L); // enum btSerializationFlags

	lua_pushnumber(L,::BT_SERIALIZE_NO_BVH); lua_setfield(L,-2,"BT_SERIALIZE_NO_BVH");
	lua_pushnumber(L,::BT_SERIALIZE_NO_TRIANGLEINFOMAP); lua_setfield(L,-2,"BT_SERIALIZE_NO_TRIANGLEINFOMAP");
	lua_pushnumber(L,::BT_SERIALIZE_NO_DUPLICATE_ASSERT); lua_setfield(L,-2,"BT_SERIALIZE_NO_DUPLICATE_ASSERT");

	lua_setfield(L,-2,"btSerializationFlags");

	lua_pushnumber(L,::BT_SERIALIZE_NO_BVH); lua_setfield(L,-2,"BT_SERIALIZE_NO_BVH");
	lua_pushnumber(L,::BT_SERIALIZE_NO_TRIANGLEINFOMAP); lua_setfield(L,-2,"BT_SERIALIZE_NO_TRIANGLEINFOMAP");
	lua_pushnumber(L,::BT_SERIALIZE_NO_DUPLICATE_ASSERT); lua_setfield(L,-2,"BT_SERIALIZE_NO_DUPLICATE_ASSERT");


	lua_newtable(L); // enum btSliderFlags

	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_DIRLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_DIRLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_DIRLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_DIRLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_DIRANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_DIRANG");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_DIRANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_DIRANG");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_ORTLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_ORTLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_ORTLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_ORTLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_ORTANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_ORTANG");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_ORTANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_ORTANG");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_LIMLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_LIMLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_LIMLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_LIMLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_LIMANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_LIMANG");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_LIMANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_LIMANG");

	lua_setfield(L,-2,"btSliderFlags");

	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_DIRLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_DIRLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_DIRLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_DIRLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_DIRANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_DIRANG");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_DIRANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_DIRANG");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_ORTLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_ORTLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_ORTLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_ORTLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_ORTANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_ORTANG");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_ORTANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_ORTANG");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_LIMLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_LIMLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_LIMLIN); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_LIMLIN");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_CFM_LIMANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_CFM_LIMANG");
	lua_pushnumber(L,::BT_SLIDER_FLAGS_ERP_LIMANG); lua_setfield(L,-2,"BT_SLIDER_FLAGS_ERP_LIMANG");


	lua_newtable(L); // enum btTypedConstraintType

	lua_pushnumber(L,::POINT2POINT_CONSTRAINT_TYPE); lua_setfield(L,-2,"POINT2POINT_CONSTRAINT_TYPE");
	lua_pushnumber(L,::HINGE_CONSTRAINT_TYPE); lua_setfield(L,-2,"HINGE_CONSTRAINT_TYPE");
	lua_pushnumber(L,::CONETWIST_CONSTRAINT_TYPE); lua_setfield(L,-2,"CONETWIST_CONSTRAINT_TYPE");
	lua_pushnumber(L,::D6_CONSTRAINT_TYPE); lua_setfield(L,-2,"D6_CONSTRAINT_TYPE");
	lua_pushnumber(L,::SLIDER_CONSTRAINT_TYPE); lua_setfield(L,-2,"SLIDER_CONSTRAINT_TYPE");
	lua_pushnumber(L,::CONTACT_CONSTRAINT_TYPE); lua_setfield(L,-2,"CONTACT_CONSTRAINT_TYPE");
	lua_pushnumber(L,::D6_SPRING_CONSTRAINT_TYPE); lua_setfield(L,-2,"D6_SPRING_CONSTRAINT_TYPE");
	lua_pushnumber(L,::GEAR_CONSTRAINT_TYPE); lua_setfield(L,-2,"GEAR_CONSTRAINT_TYPE");
	lua_pushnumber(L,::MAX_CONSTRAINT_TYPE); lua_setfield(L,-2,"MAX_CONSTRAINT_TYPE");

	lua_setfield(L,-2,"btTypedConstraintType");

	lua_pushnumber(L,::POINT2POINT_CONSTRAINT_TYPE); lua_setfield(L,-2,"POINT2POINT_CONSTRAINT_TYPE");
	lua_pushnumber(L,::HINGE_CONSTRAINT_TYPE); lua_setfield(L,-2,"HINGE_CONSTRAINT_TYPE");
	lua_pushnumber(L,::CONETWIST_CONSTRAINT_TYPE); lua_setfield(L,-2,"CONETWIST_CONSTRAINT_TYPE");
	lua_pushnumber(L,::D6_CONSTRAINT_TYPE); lua_setfield(L,-2,"D6_CONSTRAINT_TYPE");
	lua_pushnumber(L,::SLIDER_CONSTRAINT_TYPE); lua_setfield(L,-2,"SLIDER_CONSTRAINT_TYPE");
	lua_pushnumber(L,::CONTACT_CONSTRAINT_TYPE); lua_setfield(L,-2,"CONTACT_CONSTRAINT_TYPE");
	lua_pushnumber(L,::D6_SPRING_CONSTRAINT_TYPE); lua_setfield(L,-2,"D6_SPRING_CONSTRAINT_TYPE");
	lua_pushnumber(L,::GEAR_CONSTRAINT_TYPE); lua_setfield(L,-2,"GEAR_CONSTRAINT_TYPE");
	lua_pushnumber(L,::MAX_CONSTRAINT_TYPE); lua_setfield(L,-2,"MAX_CONSTRAINT_TYPE");


	lua_newtable(L); // enum btConstraintParams

	lua_pushnumber(L,::BT_CONSTRAINT_ERP); lua_setfield(L,-2,"BT_CONSTRAINT_ERP");
	lua_pushnumber(L,::BT_CONSTRAINT_STOP_ERP); lua_setfield(L,-2,"BT_CONSTRAINT_STOP_ERP");
	lua_pushnumber(L,::BT_CONSTRAINT_CFM); lua_setfield(L,-2,"BT_CONSTRAINT_CFM");
	lua_pushnumber(L,::BT_CONSTRAINT_STOP_CFM); lua_setfield(L,-2,"BT_CONSTRAINT_STOP_CFM");

	lua_setfield(L,-2,"btConstraintParams");

	lua_pushnumber(L,::BT_CONSTRAINT_ERP); lua_setfield(L,-2,"BT_CONSTRAINT_ERP");
	lua_pushnumber(L,::BT_CONSTRAINT_STOP_ERP); lua_setfield(L,-2,"BT_CONSTRAINT_STOP_ERP");
	lua_pushnumber(L,::BT_CONSTRAINT_CFM); lua_setfield(L,-2,"BT_CONSTRAINT_CFM");
	lua_pushnumber(L,::BT_CONSTRAINT_STOP_CFM); lua_setfield(L,-2,"BT_CONSTRAINT_STOP_CFM");


}

#ifdef __cplusplus
}
#endif


