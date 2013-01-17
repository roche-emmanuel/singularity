#include <plug_common.h>

#include <BulletCollision/Gimpact/btBoxCollision.h>
#include <BulletCollision/BroadphaseCollision/btBroadphaseProxy.h>
#include <BulletCollision/CollisionShapes/btConcaveShape.h>
#include <LinearMath/btConvexHull.h>
#include <BulletCollision/Gimpact/btGImpactShape.h>
#include <BulletCollision/CollisionDispatch/btInternalEdgeUtility.h>
#include <BulletCollision/NarrowPhaseCollision/btPersistentManifold.h>
#include <LinearMath/btSerializer.h>

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


	lua_newtable(L); // enum eGIMPACT_SHAPE_TYPE

	lua_pushnumber(L,::CONST_GIMPACT_COMPOUND_SHAPE); lua_setfield(L,-2,"CONST_GIMPACT_COMPOUND_SHAPE");
	lua_pushnumber(L,::CONST_GIMPACT_TRIMESH_SHAPE_PART); lua_setfield(L,-2,"CONST_GIMPACT_TRIMESH_SHAPE_PART");
	lua_pushnumber(L,::CONST_GIMPACT_TRIMESH_SHAPE); lua_setfield(L,-2,"CONST_GIMPACT_TRIMESH_SHAPE");

	lua_setfield(L,-2,"eGIMPACT_SHAPE_TYPE");

	lua_pushnumber(L,::CONST_GIMPACT_COMPOUND_SHAPE); lua_setfield(L,-2,"CONST_GIMPACT_COMPOUND_SHAPE");
	lua_pushnumber(L,::CONST_GIMPACT_TRIMESH_SHAPE_PART); lua_setfield(L,-2,"CONST_GIMPACT_TRIMESH_SHAPE_PART");
	lua_pushnumber(L,::CONST_GIMPACT_TRIMESH_SHAPE); lua_setfield(L,-2,"CONST_GIMPACT_TRIMESH_SHAPE");


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


	lua_newtable(L); // enum btSerializationFlags

	lua_pushnumber(L,::BT_SERIALIZE_NO_BVH); lua_setfield(L,-2,"BT_SERIALIZE_NO_BVH");
	lua_pushnumber(L,::BT_SERIALIZE_NO_TRIANGLEINFOMAP); lua_setfield(L,-2,"BT_SERIALIZE_NO_TRIANGLEINFOMAP");
	lua_pushnumber(L,::BT_SERIALIZE_NO_DUPLICATE_ASSERT); lua_setfield(L,-2,"BT_SERIALIZE_NO_DUPLICATE_ASSERT");

	lua_setfield(L,-2,"btSerializationFlags");

	lua_pushnumber(L,::BT_SERIALIZE_NO_BVH); lua_setfield(L,-2,"BT_SERIALIZE_NO_BVH");
	lua_pushnumber(L,::BT_SERIALIZE_NO_TRIANGLEINFOMAP); lua_setfield(L,-2,"BT_SERIALIZE_NO_TRIANGLEINFOMAP");
	lua_pushnumber(L,::BT_SERIALIZE_NO_DUPLICATE_ASSERT); lua_setfield(L,-2,"BT_SERIALIZE_NO_DUPLICATE_ASSERT");


}

#ifdef __cplusplus
}
#endif


