#include <plug_common.h>

#include <LinearMath/btAabbUtil2.h>
#include <LinearMath/btAlignedAllocator.h>
#include <BulletCollision/Gimpact/btBoxCollision.h>
#include <BulletCollision/Gimpact/btClipPolygon.h>
#include <BulletDynamics/ConstraintSolver/btContactConstraint.h>
#include <BulletCollision/BroadphaseCollision/btDbvt.h>
#include <BulletCollision/Gimpact/btGenericPoolAllocator.h>
#include <BulletCollision/Gimpact/btGeometryOperations.h>
#include <BulletCollision/Gimpact/btGImpactMassUtil.h>
#include <LinearMath/btGrahamScan2dConvexHull.h>
#include <BulletCollision/CollisionDispatch/btInternalEdgeUtility.h>
#include <LinearMath/btPolarDecomposition.h>
#include <BulletCollision/Gimpact/btQuantization.h>
#include <LinearMath/btQuaternion.h>
#include <LinearMath/btRandom.h>
#include <LinearMath/btScalar.h>
#include <LinearMath/btSerializer.h>
#include <LinearMath/btTransformUtil.h>
#include <BulletDynamics/ConstraintSolver/btTypedConstraint.h>
#include <LinearMath/btVector3.h>

// Function checkers:
inline static bool _lg_typecheck_AabbExpand(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_TestPointAgainstAabb2(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_TestAabbAgainstAabb2(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_TestTriangleAgainstAabb2(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91544891)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_btOutcode(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_btRayAabb(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_btTransformAabb_overload_1(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( (!(Luna< btVector3 >::check(L,1))) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
	if( (!(Luna< btTransform >::check(L,3))) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	if( (!(Luna< btVector3 >::check(L,4))) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
	if( (!(Luna< btVector3 >::check(L,5))) ) return false;
	return true;
}

inline static bool _lg_typecheck_btTransformAabb_overload_2(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( (!(Luna< btVector3 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( (!(Luna< btVector3 >::check(L,2))) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
	if( (!(Luna< btTransform >::check(L,4))) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
	if( (!(Luna< btVector3 >::check(L,5))) ) return false;
	if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
	if( (!(Luna< btVector3 >::check(L,6))) ) return false;
	return true;
}

inline static bool _lg_typecheck_testQuantizedAabbAgainstQuantizedAabb(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btAlignedAllocInternal(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btAlignedFreeInternal(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_mat3_dot_col(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,30394543) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btCompareTransformsEqual(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,13247377) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_distance_point_plane(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_vec_blend(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_plane_clip_polygon_collect(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,91544891)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_plane_clip_polygon(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,91544891)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_plane_clip_triangle(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,91544891)) ) return false;
	return true;
}

inline static bool _lg_typecheck_resolveSingleCollision(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85758361)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,5410878) ) return false;
	if( lua_type(L,6)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_resolveSingleBilateral(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
	if( lua_type(L,7)!=LUA_TNUMBER ) return false;
	if( lua_type(L,8)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_Intersect_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,88504824) ) return false;
	if( (!(Luna< btDbvtAabbMm >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,88504824) ) return false;
	if( (!(Luna< btDbvtAabbMm >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_Intersect_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,88504824) ) return false;
	if( (!(Luna< btDbvtAabbMm >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( (!(Luna< btVector3 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_Proximity(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,88504824) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,88504824) ) return false;
	return true;
}

inline static bool _lg_typecheck_Select(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,88504824) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,88504824) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,88504824) ) return false;
	return true;
}

inline static bool _lg_typecheck_Merge(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,88504824) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,88504824) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,88504824) ) return false;
	return true;
}

inline static bool _lg_typecheck_NotEqual(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,88504824) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,88504824) ) return false;
	return true;
}

inline static bool _lg_typecheck_btPoolAlloc(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btPoolRealloc(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btPoolFree(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_edge_plane(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_closest_point_on_segment(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_line_plane_collision(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	if( lua_type(L,6)!=LUA_TNUMBER ) return false;
	if( lua_type(L,7)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_segment_collision(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_gim_inertia_add_transformed(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
	return true;
}

inline static bool _lg_typecheck_gim_get_point_inertia(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_GrahamScanConvexHull2D(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,78781161) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,78781161) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_btAdjustInternalEdgeContacts(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<5 || luatop>6 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,55239733) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_polarDecompose(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,30394543) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,30394543) ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_calc_quantization_parameters(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
	if( lua_type(L,6)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_quantize_clamp(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_bt_unquantize(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_dot(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,2139400) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
	return true;
}

inline static bool _lg_typecheck_length(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,2139400) ) return false;
	return true;
}

inline static bool _lg_typecheck_btAngle_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,2139400) ) return false;
	if( (!(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
	if( (!(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_btAngle_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( (!(Luna< btVector3 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( (!(Luna< btVector3 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_inverse(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,2139400) ) return false;
	return true;
}

inline static bool _lg_typecheck_slerp(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,2139400) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_quatRotate(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,2139400) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_shortestArcQuat(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_shortestArcQuatNormalize2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_GEN_srand(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_GEN_rand(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_btGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_btSqrt(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btFabs(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btCos(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btSin(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btTan(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btAcos(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btAsin(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btAtan(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btAtan2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btExp(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btLog(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btPow(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btFmod(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btAtan2Fast(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btFuzzyZero(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btEqual(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btGreaterEqual(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btIsNegative(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btRadians(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btDegrees(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btFsel(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btMachineIsLittleEndian(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_btSelect_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btSelect_overload_2(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btSelect_overload_3(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btSwapEndian_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btSwapEndian_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btSwapEndian_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btSwapEndian_overload_4(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btSwapEndianFloat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btUnswapEndianFloat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btSwapEndianDouble(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btUnswapEndianDouble(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_btNormalizeAngle(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btStrLen(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_btAabbSupport(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_btAdjustAngleToLimits(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btDot(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_btDistance2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_btDistance(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_btCross(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_btTriple(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_lerp(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btSwapScalarEndian(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_btSwapVector3Endian(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
	return true;
}

inline static bool _lg_typecheck_btUnSwapVector3Endian(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
	return true;
}


// Function binds:
// void AabbExpand(btVector3 & aabbMin, btVector3 & aabbMax, const btVector3 & expansionMin, const btVector3 & expansionMax)
static int _bind_AabbExpand(lua_State *L) {
	if (!_lg_typecheck_AabbExpand(L)) {
		luaL_error(L, "luna typecheck failed in void AabbExpand(btVector3 & aabbMin, btVector3 & aabbMax, const btVector3 & expansionMin, const btVector3 & expansionMax) function, expected prototype:\nvoid AabbExpand(btVector3 & aabbMin, btVector3 & aabbMax, const btVector3 & expansionMin, const btVector3 & expansionMax)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,1));
	if( !aabbMin_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in AabbExpand function");
	}
	btVector3 & aabbMin=*aabbMin_ptr;
	btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,2));
	if( !aabbMax_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in AabbExpand function");
	}
	btVector3 & aabbMax=*aabbMax_ptr;
	const btVector3* expansionMin_ptr=(Luna< btVector3 >::check(L,3));
	if( !expansionMin_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg expansionMin in AabbExpand function");
	}
	const btVector3 & expansionMin=*expansionMin_ptr;
	const btVector3* expansionMax_ptr=(Luna< btVector3 >::check(L,4));
	if( !expansionMax_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg expansionMax in AabbExpand function");
	}
	const btVector3 & expansionMax=*expansionMax_ptr;

	::AabbExpand(aabbMin, aabbMax, expansionMin, expansionMax);

	return 0;
}

// bool TestPointAgainstAabb2(const btVector3 & aabbMin1, const btVector3 & aabbMax1, const btVector3 & point)
static int _bind_TestPointAgainstAabb2(lua_State *L) {
	if (!_lg_typecheck_TestPointAgainstAabb2(L)) {
		luaL_error(L, "luna typecheck failed in bool TestPointAgainstAabb2(const btVector3 & aabbMin1, const btVector3 & aabbMax1, const btVector3 & point) function, expected prototype:\nbool TestPointAgainstAabb2(const btVector3 & aabbMin1, const btVector3 & aabbMax1, const btVector3 & point)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* aabbMin1_ptr=(Luna< btVector3 >::check(L,1));
	if( !aabbMin1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMin1 in TestPointAgainstAabb2 function");
	}
	const btVector3 & aabbMin1=*aabbMin1_ptr;
	const btVector3* aabbMax1_ptr=(Luna< btVector3 >::check(L,2));
	if( !aabbMax1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMax1 in TestPointAgainstAabb2 function");
	}
	const btVector3 & aabbMax1=*aabbMax1_ptr;
	const btVector3* point_ptr=(Luna< btVector3 >::check(L,3));
	if( !point_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg point in TestPointAgainstAabb2 function");
	}
	const btVector3 & point=*point_ptr;

	bool lret = ::TestPointAgainstAabb2(aabbMin1, aabbMax1, point);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool TestAabbAgainstAabb2(const btVector3 & aabbMin1, const btVector3 & aabbMax1, const btVector3 & aabbMin2, const btVector3 & aabbMax2)
static int _bind_TestAabbAgainstAabb2(lua_State *L) {
	if (!_lg_typecheck_TestAabbAgainstAabb2(L)) {
		luaL_error(L, "luna typecheck failed in bool TestAabbAgainstAabb2(const btVector3 & aabbMin1, const btVector3 & aabbMax1, const btVector3 & aabbMin2, const btVector3 & aabbMax2) function, expected prototype:\nbool TestAabbAgainstAabb2(const btVector3 & aabbMin1, const btVector3 & aabbMax1, const btVector3 & aabbMin2, const btVector3 & aabbMax2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* aabbMin1_ptr=(Luna< btVector3 >::check(L,1));
	if( !aabbMin1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMin1 in TestAabbAgainstAabb2 function");
	}
	const btVector3 & aabbMin1=*aabbMin1_ptr;
	const btVector3* aabbMax1_ptr=(Luna< btVector3 >::check(L,2));
	if( !aabbMax1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMax1 in TestAabbAgainstAabb2 function");
	}
	const btVector3 & aabbMax1=*aabbMax1_ptr;
	const btVector3* aabbMin2_ptr=(Luna< btVector3 >::check(L,3));
	if( !aabbMin2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMin2 in TestAabbAgainstAabb2 function");
	}
	const btVector3 & aabbMin2=*aabbMin2_ptr;
	const btVector3* aabbMax2_ptr=(Luna< btVector3 >::check(L,4));
	if( !aabbMax2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMax2 in TestAabbAgainstAabb2 function");
	}
	const btVector3 & aabbMax2=*aabbMax2_ptr;

	bool lret = ::TestAabbAgainstAabb2(aabbMin1, aabbMax1, aabbMin2, aabbMax2);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool TestTriangleAgainstAabb2(const btVector3 * vertices, const btVector3 & aabbMin, const btVector3 & aabbMax)
static int _bind_TestTriangleAgainstAabb2(lua_State *L) {
	if (!_lg_typecheck_TestTriangleAgainstAabb2(L)) {
		luaL_error(L, "luna typecheck failed in bool TestTriangleAgainstAabb2(const btVector3 * vertices, const btVector3 & aabbMin, const btVector3 & aabbMax) function, expected prototype:\nbool TestTriangleAgainstAabb2(const btVector3 * vertices, const btVector3 & aabbMin, const btVector3 & aabbMax)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* vertices=(Luna< btVector3 >::check(L,1));
	const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
	if( !aabbMin_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in TestTriangleAgainstAabb2 function");
	}
	const btVector3 & aabbMin=*aabbMin_ptr;
	const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
	if( !aabbMax_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in TestTriangleAgainstAabb2 function");
	}
	const btVector3 & aabbMax=*aabbMax_ptr;

	bool lret = ::TestTriangleAgainstAabb2(vertices, aabbMin, aabbMax);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// int btOutcode(const btVector3 & p, const btVector3 & halfExtent)
static int _bind_btOutcode(lua_State *L) {
	if (!_lg_typecheck_btOutcode(L)) {
		luaL_error(L, "luna typecheck failed in int btOutcode(const btVector3 & p, const btVector3 & halfExtent) function, expected prototype:\nint btOutcode(const btVector3 & p, const btVector3 & halfExtent)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* p_ptr=(Luna< btVector3 >::check(L,1));
	if( !p_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg p in btOutcode function");
	}
	const btVector3 & p=*p_ptr;
	const btVector3* halfExtent_ptr=(Luna< btVector3 >::check(L,2));
	if( !halfExtent_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg halfExtent in btOutcode function");
	}
	const btVector3 & halfExtent=*halfExtent_ptr;

	int lret = ::btOutcode(p, halfExtent);
	lua_pushnumber(L,lret);

	return 1;
}

// bool btRayAabb(const btVector3 & rayFrom, const btVector3 & rayTo, const btVector3 & aabbMin, const btVector3 & aabbMax, float & param, btVector3 & normal)
static int _bind_btRayAabb(lua_State *L) {
	if (!_lg_typecheck_btRayAabb(L)) {
		luaL_error(L, "luna typecheck failed in bool btRayAabb(const btVector3 & rayFrom, const btVector3 & rayTo, const btVector3 & aabbMin, const btVector3 & aabbMax, float & param, btVector3 & normal) function, expected prototype:\nbool btRayAabb(const btVector3 & rayFrom, const btVector3 & rayTo, const btVector3 & aabbMin, const btVector3 & aabbMax, float & param, btVector3 & normal)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 6 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,1));
	if( !rayFrom_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btRayAabb function");
	}
	const btVector3 & rayFrom=*rayFrom_ptr;
	const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,2));
	if( !rayTo_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btRayAabb function");
	}
	const btVector3 & rayTo=*rayTo_ptr;
	const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
	if( !aabbMin_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btRayAabb function");
	}
	const btVector3 & aabbMin=*aabbMin_ptr;
	const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
	if( !aabbMax_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btRayAabb function");
	}
	const btVector3 & aabbMax=*aabbMax_ptr;
	float param=(float)lua_tonumber(L,5);
	btVector3* normal_ptr=(Luna< btVector3 >::check(L,6));
	if( !normal_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg normal in btRayAabb function");
	}
	btVector3 & normal=*normal_ptr;

	bool lret = ::btRayAabb(rayFrom, rayTo, aabbMin, aabbMax, param, normal);
	lua_pushboolean(L,lret?1:0);

	lua_pushnumber(L,param);
	return 2;
}

// void btTransformAabb(const btVector3 & halfExtents, float margin, const btTransform & t, btVector3 & aabbMinOut, btVector3 & aabbMaxOut)
static int _bind_btTransformAabb_overload_1(lua_State *L) {
	if (!_lg_typecheck_btTransformAabb_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in void btTransformAabb(const btVector3 & halfExtents, float margin, const btTransform & t, btVector3 & aabbMinOut, btVector3 & aabbMaxOut) function, expected prototype:\nvoid btTransformAabb(const btVector3 & halfExtents, float margin, const btTransform & t, btVector3 & aabbMinOut, btVector3 & aabbMaxOut)\nClass arguments details:\narg 1 ID = 91544891\narg 3 ID = 13247377\narg 4 ID = 91544891\narg 5 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* halfExtents_ptr=(Luna< btVector3 >::check(L,1));
	if( !halfExtents_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg halfExtents in btTransformAabb function");
	}
	const btVector3 & halfExtents=*halfExtents_ptr;
	float margin=(float)lua_tonumber(L,2);
	const btTransform* t_ptr=(Luna< btTransform >::check(L,3));
	if( !t_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg t in btTransformAabb function");
	}
	const btTransform & t=*t_ptr;
	btVector3* aabbMinOut_ptr=(Luna< btVector3 >::check(L,4));
	if( !aabbMinOut_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMinOut in btTransformAabb function");
	}
	btVector3 & aabbMinOut=*aabbMinOut_ptr;
	btVector3* aabbMaxOut_ptr=(Luna< btVector3 >::check(L,5));
	if( !aabbMaxOut_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMaxOut in btTransformAabb function");
	}
	btVector3 & aabbMaxOut=*aabbMaxOut_ptr;

	::btTransformAabb(halfExtents, margin, t, aabbMinOut, aabbMaxOut);

	return 0;
}

// void btTransformAabb(const btVector3 & localAabbMin, const btVector3 & localAabbMax, float margin, const btTransform & trans, btVector3 & aabbMinOut, btVector3 & aabbMaxOut)
static int _bind_btTransformAabb_overload_2(lua_State *L) {
	if (!_lg_typecheck_btTransformAabb_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in void btTransformAabb(const btVector3 & localAabbMin, const btVector3 & localAabbMax, float margin, const btTransform & trans, btVector3 & aabbMinOut, btVector3 & aabbMaxOut) function, expected prototype:\nvoid btTransformAabb(const btVector3 & localAabbMin, const btVector3 & localAabbMax, float margin, const btTransform & trans, btVector3 & aabbMinOut, btVector3 & aabbMaxOut)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 4 ID = 13247377\narg 5 ID = 91544891\narg 6 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* localAabbMin_ptr=(Luna< btVector3 >::check(L,1));
	if( !localAabbMin_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg localAabbMin in btTransformAabb function");
	}
	const btVector3 & localAabbMin=*localAabbMin_ptr;
	const btVector3* localAabbMax_ptr=(Luna< btVector3 >::check(L,2));
	if( !localAabbMax_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg localAabbMax in btTransformAabb function");
	}
	const btVector3 & localAabbMax=*localAabbMax_ptr;
	float margin=(float)lua_tonumber(L,3);
	const btTransform* trans_ptr=(Luna< btTransform >::check(L,4));
	if( !trans_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg trans in btTransformAabb function");
	}
	const btTransform & trans=*trans_ptr;
	btVector3* aabbMinOut_ptr=(Luna< btVector3 >::check(L,5));
	if( !aabbMinOut_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMinOut in btTransformAabb function");
	}
	btVector3 & aabbMinOut=*aabbMinOut_ptr;
	btVector3* aabbMaxOut_ptr=(Luna< btVector3 >::check(L,6));
	if( !aabbMaxOut_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aabbMaxOut in btTransformAabb function");
	}
	btVector3 & aabbMaxOut=*aabbMaxOut_ptr;

	::btTransformAabb(localAabbMin, localAabbMax, margin, trans, aabbMinOut, aabbMaxOut);

	return 0;
}

// Overload binder for btTransformAabb
static int _bind_btTransformAabb(lua_State *L) {
	if (_lg_typecheck_btTransformAabb_overload_1(L)) return _bind_btTransformAabb_overload_1(L);
	if (_lg_typecheck_btTransformAabb_overload_2(L)) return _bind_btTransformAabb_overload_2(L);

	luaL_error(L, "error in function btTransformAabb, cannot match any of the overloads for function btTransformAabb:\n  btTransformAabb(const btVector3 &, float, const btTransform &, btVector3 &, btVector3 &)\n  btTransformAabb(const btVector3 &, const btVector3 &, float, const btTransform &, btVector3 &, btVector3 &)\n");
	return 0;
}

// unsigned int testQuantizedAabbAgainstQuantizedAabb(const unsigned short int * aabbMin1, const unsigned short int * aabbMax1, const unsigned short int * aabbMin2, const unsigned short int * aabbMax2)
static int _bind_testQuantizedAabbAgainstQuantizedAabb(lua_State *L) {
	if (!_lg_typecheck_testQuantizedAabbAgainstQuantizedAabb(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int testQuantizedAabbAgainstQuantizedAabb(const unsigned short int * aabbMin1, const unsigned short int * aabbMax1, const unsigned short int * aabbMin2, const unsigned short int * aabbMax2) function, expected prototype:\nunsigned int testQuantizedAabbAgainstQuantizedAabb(const unsigned short int * aabbMin1, const unsigned short int * aabbMax1, const unsigned short int * aabbMin2, const unsigned short int * aabbMax2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const unsigned short int* aabbMin1=(const unsigned short int*)Luna< void >::check(L,1);
	const unsigned short int* aabbMax1=(const unsigned short int*)Luna< void >::check(L,2);
	const unsigned short int* aabbMin2=(const unsigned short int*)Luna< void >::check(L,3);
	const unsigned short int* aabbMax2=(const unsigned short int*)Luna< void >::check(L,4);

	unsigned int lret = ::testQuantizedAabbAgainstQuantizedAabb(aabbMin1, aabbMax1, aabbMin2, aabbMax2);
	lua_pushnumber(L,lret);

	return 1;
}

// void * btAlignedAllocInternal(size_t size, int alignment)
static int _bind_btAlignedAllocInternal(lua_State *L) {
	if (!_lg_typecheck_btAlignedAllocInternal(L)) {
		luaL_error(L, "luna typecheck failed in void * btAlignedAllocInternal(size_t size, int alignment) function, expected prototype:\nvoid * btAlignedAllocInternal(size_t size, int alignment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	size_t size=(size_t)lua_tointeger(L,1);
	int alignment=(int)lua_tointeger(L,2);

	void * lret = ::btAlignedAllocInternal(size, alignment);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void btAlignedFreeInternal(void * ptr)
static int _bind_btAlignedFreeInternal(lua_State *L) {
	if (!_lg_typecheck_btAlignedFreeInternal(L)) {
		luaL_error(L, "luna typecheck failed in void btAlignedFreeInternal(void * ptr) function, expected prototype:\nvoid btAlignedFreeInternal(void * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	void* ptr=(Luna< void >::check(L,1));

	::btAlignedFreeInternal(ptr);

	return 0;
}

// float bt_mat3_dot_col(const btMatrix3x3 & mat, const btVector3 & vec3, int colindex)
static int _bind_bt_mat3_dot_col(lua_State *L) {
	if (!_lg_typecheck_bt_mat3_dot_col(L)) {
		luaL_error(L, "luna typecheck failed in float bt_mat3_dot_col(const btMatrix3x3 & mat, const btVector3 & vec3, int colindex) function, expected prototype:\nfloat bt_mat3_dot_col(const btMatrix3x3 & mat, const btVector3 & vec3, int colindex)\nClass arguments details:\narg 1 ID = 30394543\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btMatrix3x3* mat_ptr=(Luna< btMatrix3x3 >::check(L,1));
	if( !mat_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg mat in bt_mat3_dot_col function");
	}
	const btMatrix3x3 & mat=*mat_ptr;
	const btVector3* vec3_ptr=(Luna< btVector3 >::check(L,2));
	if( !vec3_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vec3 in bt_mat3_dot_col function");
	}
	const btVector3 & vec3=*vec3_ptr;
	int colindex=(int)lua_tointeger(L,3);

	float lret = ::bt_mat3_dot_col(mat, vec3, colindex);
	lua_pushnumber(L,lret);

	return 1;
}

// bool btCompareTransformsEqual(const btTransform & t1, const btTransform & t2)
static int _bind_btCompareTransformsEqual(lua_State *L) {
	if (!_lg_typecheck_btCompareTransformsEqual(L)) {
		luaL_error(L, "luna typecheck failed in bool btCompareTransformsEqual(const btTransform & t1, const btTransform & t2) function, expected prototype:\nbool btCompareTransformsEqual(const btTransform & t1, const btTransform & t2)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n\n%s",luna_dumpStack(L).c_str());
	}

	const btTransform* t1_ptr=(Luna< btTransform >::check(L,1));
	if( !t1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg t1 in btCompareTransformsEqual function");
	}
	const btTransform & t1=*t1_ptr;
	const btTransform* t2_ptr=(Luna< btTransform >::check(L,2));
	if( !t2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg t2 in btCompareTransformsEqual function");
	}
	const btTransform & t2=*t2_ptr;

	bool lret = ::btCompareTransformsEqual(t1, t2);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// float bt_distance_point_plane(const btVector4 & plane, const btVector3 & point)
static int _bind_bt_distance_point_plane(lua_State *L) {
	if (!_lg_typecheck_bt_distance_point_plane(L)) {
		luaL_error(L, "luna typecheck failed in float bt_distance_point_plane(const btVector4 & plane, const btVector3 & point) function, expected prototype:\nfloat bt_distance_point_plane(const btVector4 & plane, const btVector3 & point)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,1));
	if( !plane_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg plane in bt_distance_point_plane function");
	}
	const btVector4 & plane=*plane_ptr;
	const btVector3* point_ptr=(Luna< btVector3 >::check(L,2));
	if( !point_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg point in bt_distance_point_plane function");
	}
	const btVector3 & point=*point_ptr;

	float lret = ::bt_distance_point_plane(plane, point);
	lua_pushnumber(L,lret);

	return 1;
}

// void bt_vec_blend(btVector3 & vr, const btVector3 & va, const btVector3 & vb, float blend_factor)
static int _bind_bt_vec_blend(lua_State *L) {
	if (!_lg_typecheck_bt_vec_blend(L)) {
		luaL_error(L, "luna typecheck failed in void bt_vec_blend(btVector3 & vr, const btVector3 & va, const btVector3 & vb, float blend_factor) function, expected prototype:\nvoid bt_vec_blend(btVector3 & vr, const btVector3 & va, const btVector3 & vb, float blend_factor)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	btVector3* vr_ptr=(Luna< btVector3 >::check(L,1));
	if( !vr_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vr in bt_vec_blend function");
	}
	btVector3 & vr=*vr_ptr;
	const btVector3* va_ptr=(Luna< btVector3 >::check(L,2));
	if( !va_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg va in bt_vec_blend function");
	}
	const btVector3 & va=*va_ptr;
	const btVector3* vb_ptr=(Luna< btVector3 >::check(L,3));
	if( !vb_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vb in bt_vec_blend function");
	}
	const btVector3 & vb=*vb_ptr;
	float blend_factor=(float)lua_tonumber(L,4);

	::bt_vec_blend(vr, va, vb, blend_factor);

	return 0;
}

// void bt_plane_clip_polygon_collect(const btVector3 & point0, const btVector3 & point1, float dist0, float dist1, btVector3 * clipped, int & clipped_count)
static int _bind_bt_plane_clip_polygon_collect(lua_State *L) {
	if (!_lg_typecheck_bt_plane_clip_polygon_collect(L)) {
		luaL_error(L, "luna typecheck failed in void bt_plane_clip_polygon_collect(const btVector3 & point0, const btVector3 & point1, float dist0, float dist1, btVector3 * clipped, int & clipped_count) function, expected prototype:\nvoid bt_plane_clip_polygon_collect(const btVector3 & point0, const btVector3 & point1, float dist0, float dist1, btVector3 * clipped, int & clipped_count)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 5 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* point0_ptr=(Luna< btVector3 >::check(L,1));
	if( !point0_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg point0 in bt_plane_clip_polygon_collect function");
	}
	const btVector3 & point0=*point0_ptr;
	const btVector3* point1_ptr=(Luna< btVector3 >::check(L,2));
	if( !point1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg point1 in bt_plane_clip_polygon_collect function");
	}
	const btVector3 & point1=*point1_ptr;
	float dist0=(float)lua_tonumber(L,3);
	float dist1=(float)lua_tonumber(L,4);
	btVector3* clipped=(Luna< btVector3 >::check(L,5));
	int clipped_count=(int)lua_tointeger(L,6);

	::bt_plane_clip_polygon_collect(point0, point1, dist0, dist1, clipped, clipped_count);

	lua_pushnumber(L,clipped_count);
	return 1;
}

// int bt_plane_clip_polygon(const btVector4 & plane, const btVector3 * polygon_points, int polygon_point_count, btVector3 * clipped)
static int _bind_bt_plane_clip_polygon(lua_State *L) {
	if (!_lg_typecheck_bt_plane_clip_polygon(L)) {
		luaL_error(L, "luna typecheck failed in int bt_plane_clip_polygon(const btVector4 & plane, const btVector3 * polygon_points, int polygon_point_count, btVector3 * clipped) function, expected prototype:\nint bt_plane_clip_polygon(const btVector4 & plane, const btVector3 * polygon_points, int polygon_point_count, btVector3 * clipped)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,1));
	if( !plane_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg plane in bt_plane_clip_polygon function");
	}
	const btVector4 & plane=*plane_ptr;
	const btVector3* polygon_points=(Luna< btVector3 >::check(L,2));
	int polygon_point_count=(int)lua_tointeger(L,3);
	btVector3* clipped=(Luna< btVector3 >::check(L,4));

	int lret = ::bt_plane_clip_polygon(plane, polygon_points, polygon_point_count, clipped);
	lua_pushnumber(L,lret);

	return 1;
}

// int bt_plane_clip_triangle(const btVector4 & plane, const btVector3 & point0, const btVector3 & point1, const btVector3 & point2, btVector3 * clipped)
static int _bind_bt_plane_clip_triangle(lua_State *L) {
	if (!_lg_typecheck_bt_plane_clip_triangle(L)) {
		luaL_error(L, "luna typecheck failed in int bt_plane_clip_triangle(const btVector4 & plane, const btVector3 & point0, const btVector3 & point1, const btVector3 & point2, btVector3 * clipped) function, expected prototype:\nint bt_plane_clip_triangle(const btVector4 & plane, const btVector3 & point0, const btVector3 & point1, const btVector3 & point2, btVector3 * clipped)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,1));
	if( !plane_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg plane in bt_plane_clip_triangle function");
	}
	const btVector4 & plane=*plane_ptr;
	const btVector3* point0_ptr=(Luna< btVector3 >::check(L,2));
	if( !point0_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg point0 in bt_plane_clip_triangle function");
	}
	const btVector3 & point0=*point0_ptr;
	const btVector3* point1_ptr=(Luna< btVector3 >::check(L,3));
	if( !point1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg point1 in bt_plane_clip_triangle function");
	}
	const btVector3 & point1=*point1_ptr;
	const btVector3* point2_ptr=(Luna< btVector3 >::check(L,4));
	if( !point2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg point2 in bt_plane_clip_triangle function");
	}
	const btVector3 & point2=*point2_ptr;
	btVector3* clipped=(Luna< btVector3 >::check(L,5));

	int lret = ::bt_plane_clip_triangle(plane, point0, point1, point2, clipped);
	lua_pushnumber(L,lret);

	return 1;
}

// float resolveSingleCollision(btRigidBody * body1, class btCollisionObject * colObj2, const btVector3 & contactPositionWorld, const btVector3 & contactNormalOnB, const btContactSolverInfo & solverInfo, float distance)
static int _bind_resolveSingleCollision(lua_State *L) {
	if (!_lg_typecheck_resolveSingleCollision(L)) {
		luaL_error(L, "luna typecheck failed in float resolveSingleCollision(btRigidBody * body1, class btCollisionObject * colObj2, const btVector3 & contactPositionWorld, const btVector3 & contactNormalOnB, const btContactSolverInfo & solverInfo, float distance) function, expected prototype:\nfloat resolveSingleCollision(btRigidBody * body1, class btCollisionObject * colObj2, const btVector3 & contactPositionWorld, const btVector3 & contactNormalOnB, const btContactSolverInfo & solverInfo, float distance)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 5410878\n\n%s",luna_dumpStack(L).c_str());
	}

	btRigidBody* body1=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
	btCollisionObject* colObj2=(Luna< btCollisionObject >::check(L,2));
	const btVector3* contactPositionWorld_ptr=(Luna< btVector3 >::check(L,3));
	if( !contactPositionWorld_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg contactPositionWorld in resolveSingleCollision function");
	}
	const btVector3 & contactPositionWorld=*contactPositionWorld_ptr;
	const btVector3* contactNormalOnB_ptr=(Luna< btVector3 >::check(L,4));
	if( !contactNormalOnB_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg contactNormalOnB in resolveSingleCollision function");
	}
	const btVector3 & contactNormalOnB=*contactNormalOnB_ptr;
	const btContactSolverInfo* solverInfo_ptr=(Luna< btContactSolverInfoData >::checkSubType< btContactSolverInfo >(L,5));
	if( !solverInfo_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg solverInfo in resolveSingleCollision function");
	}
	const btContactSolverInfo & solverInfo=*solverInfo_ptr;
	float distance=(float)lua_tonumber(L,6);

	float lret = ::resolveSingleCollision(body1, colObj2, contactPositionWorld, contactNormalOnB, solverInfo, distance);
	lua_pushnumber(L,lret);

	return 1;
}

// void resolveSingleBilateral(btRigidBody & body1, const btVector3 & pos1, btRigidBody & body2, const btVector3 & pos2, float distance, const btVector3 & normal, float & impulse, float timeStep)
static int _bind_resolveSingleBilateral(lua_State *L) {
	if (!_lg_typecheck_resolveSingleBilateral(L)) {
		luaL_error(L, "luna typecheck failed in void resolveSingleBilateral(btRigidBody & body1, const btVector3 & pos1, btRigidBody & body2, const btVector3 & pos2, float distance, const btVector3 & normal, float & impulse, float timeStep) function, expected prototype:\nvoid resolveSingleBilateral(btRigidBody & body1, const btVector3 & pos1, btRigidBody & body2, const btVector3 & pos2, float distance, const btVector3 & normal, float & impulse, float timeStep)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 91544891\narg 3 ID = 85758361\narg 4 ID = 91544891\narg 6 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	btRigidBody* body1_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
	if( !body1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg body1 in resolveSingleBilateral function");
	}
	btRigidBody & body1=*body1_ptr;
	const btVector3* pos1_ptr=(Luna< btVector3 >::check(L,2));
	if( !pos1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg pos1 in resolveSingleBilateral function");
	}
	const btVector3 & pos1=*pos1_ptr;
	btRigidBody* body2_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
	if( !body2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg body2 in resolveSingleBilateral function");
	}
	btRigidBody & body2=*body2_ptr;
	const btVector3* pos2_ptr=(Luna< btVector3 >::check(L,4));
	if( !pos2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg pos2 in resolveSingleBilateral function");
	}
	const btVector3 & pos2=*pos2_ptr;
	float distance=(float)lua_tonumber(L,5);
	const btVector3* normal_ptr=(Luna< btVector3 >::check(L,6));
	if( !normal_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg normal in resolveSingleBilateral function");
	}
	const btVector3 & normal=*normal_ptr;
	float impulse=(float)lua_tonumber(L,7);
	float timeStep=(float)lua_tonumber(L,8);

	::resolveSingleBilateral(body1, pos1, body2, pos2, distance, normal, impulse, timeStep);

	lua_pushnumber(L,impulse);
	return 1;
}

// bool Intersect(const btDbvtAabbMm & a, const btDbvtAabbMm & b)
static int _bind_Intersect_overload_1(lua_State *L) {
	if (!_lg_typecheck_Intersect_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool Intersect(const btDbvtAabbMm & a, const btDbvtAabbMm & b) function, expected prototype:\nbool Intersect(const btDbvtAabbMm & a, const btDbvtAabbMm & b)\nClass arguments details:\narg 1 ID = 88504824\narg 2 ID = 88504824\n\n%s",luna_dumpStack(L).c_str());
	}

	const btDbvtAabbMm* a_ptr=(Luna< btDbvtAabbMm >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in Intersect function");
	}
	const btDbvtAabbMm & a=*a_ptr;
	const btDbvtAabbMm* b_ptr=(Luna< btDbvtAabbMm >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in Intersect function");
	}
	const btDbvtAabbMm & b=*b_ptr;

	bool lret = ::Intersect(a, b);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool Intersect(const btDbvtAabbMm & a, const btVector3 & b)
static int _bind_Intersect_overload_2(lua_State *L) {
	if (!_lg_typecheck_Intersect_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool Intersect(const btDbvtAabbMm & a, const btVector3 & b) function, expected prototype:\nbool Intersect(const btDbvtAabbMm & a, const btVector3 & b)\nClass arguments details:\narg 1 ID = 88504824\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btDbvtAabbMm* a_ptr=(Luna< btDbvtAabbMm >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in Intersect function");
	}
	const btDbvtAabbMm & a=*a_ptr;
	const btVector3* b_ptr=(Luna< btVector3 >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in Intersect function");
	}
	const btVector3 & b=*b_ptr;

	bool lret = ::Intersect(a, b);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for Intersect
static int _bind_Intersect(lua_State *L) {
	if (_lg_typecheck_Intersect_overload_1(L)) return _bind_Intersect_overload_1(L);
	if (_lg_typecheck_Intersect_overload_2(L)) return _bind_Intersect_overload_2(L);

	luaL_error(L, "error in function Intersect, cannot match any of the overloads for function Intersect:\n  Intersect(const btDbvtAabbMm &, const btDbvtAabbMm &)\n  Intersect(const btDbvtAabbMm &, const btVector3 &)\n");
	return 0;
}

// float Proximity(const btDbvtAabbMm & a, const btDbvtAabbMm & b)
static int _bind_Proximity(lua_State *L) {
	if (!_lg_typecheck_Proximity(L)) {
		luaL_error(L, "luna typecheck failed in float Proximity(const btDbvtAabbMm & a, const btDbvtAabbMm & b) function, expected prototype:\nfloat Proximity(const btDbvtAabbMm & a, const btDbvtAabbMm & b)\nClass arguments details:\narg 1 ID = 88504824\narg 2 ID = 88504824\n\n%s",luna_dumpStack(L).c_str());
	}

	const btDbvtAabbMm* a_ptr=(Luna< btDbvtAabbMm >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in Proximity function");
	}
	const btDbvtAabbMm & a=*a_ptr;
	const btDbvtAabbMm* b_ptr=(Luna< btDbvtAabbMm >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in Proximity function");
	}
	const btDbvtAabbMm & b=*b_ptr;

	float lret = ::Proximity(a, b);
	lua_pushnumber(L,lret);

	return 1;
}

// int Select(const btDbvtAabbMm & o, const btDbvtAabbMm & a, const btDbvtAabbMm & b)
static int _bind_Select(lua_State *L) {
	if (!_lg_typecheck_Select(L)) {
		luaL_error(L, "luna typecheck failed in int Select(const btDbvtAabbMm & o, const btDbvtAabbMm & a, const btDbvtAabbMm & b) function, expected prototype:\nint Select(const btDbvtAabbMm & o, const btDbvtAabbMm & a, const btDbvtAabbMm & b)\nClass arguments details:\narg 1 ID = 88504824\narg 2 ID = 88504824\narg 3 ID = 88504824\n\n%s",luna_dumpStack(L).c_str());
	}

	const btDbvtAabbMm* o_ptr=(Luna< btDbvtAabbMm >::check(L,1));
	if( !o_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg o in Select function");
	}
	const btDbvtAabbMm & o=*o_ptr;
	const btDbvtAabbMm* a_ptr=(Luna< btDbvtAabbMm >::check(L,2));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in Select function");
	}
	const btDbvtAabbMm & a=*a_ptr;
	const btDbvtAabbMm* b_ptr=(Luna< btDbvtAabbMm >::check(L,3));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in Select function");
	}
	const btDbvtAabbMm & b=*b_ptr;

	int lret = ::Select(o, a, b);
	lua_pushnumber(L,lret);

	return 1;
}

// void Merge(const btDbvtAabbMm & a, const btDbvtAabbMm & b, btDbvtAabbMm & r)
static int _bind_Merge(lua_State *L) {
	if (!_lg_typecheck_Merge(L)) {
		luaL_error(L, "luna typecheck failed in void Merge(const btDbvtAabbMm & a, const btDbvtAabbMm & b, btDbvtAabbMm & r) function, expected prototype:\nvoid Merge(const btDbvtAabbMm & a, const btDbvtAabbMm & b, btDbvtAabbMm & r)\nClass arguments details:\narg 1 ID = 88504824\narg 2 ID = 88504824\narg 3 ID = 88504824\n\n%s",luna_dumpStack(L).c_str());
	}

	const btDbvtAabbMm* a_ptr=(Luna< btDbvtAabbMm >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in Merge function");
	}
	const btDbvtAabbMm & a=*a_ptr;
	const btDbvtAabbMm* b_ptr=(Luna< btDbvtAabbMm >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in Merge function");
	}
	const btDbvtAabbMm & b=*b_ptr;
	btDbvtAabbMm* r_ptr=(Luna< btDbvtAabbMm >::check(L,3));
	if( !r_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg r in Merge function");
	}
	btDbvtAabbMm & r=*r_ptr;

	::Merge(a, b, r);

	return 0;
}

// bool NotEqual(const btDbvtAabbMm & a, const btDbvtAabbMm & b)
static int _bind_NotEqual(lua_State *L) {
	if (!_lg_typecheck_NotEqual(L)) {
		luaL_error(L, "luna typecheck failed in bool NotEqual(const btDbvtAabbMm & a, const btDbvtAabbMm & b) function, expected prototype:\nbool NotEqual(const btDbvtAabbMm & a, const btDbvtAabbMm & b)\nClass arguments details:\narg 1 ID = 88504824\narg 2 ID = 88504824\n\n%s",luna_dumpStack(L).c_str());
	}

	const btDbvtAabbMm* a_ptr=(Luna< btDbvtAabbMm >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in NotEqual function");
	}
	const btDbvtAabbMm & a=*a_ptr;
	const btDbvtAabbMm* b_ptr=(Luna< btDbvtAabbMm >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in NotEqual function");
	}
	const btDbvtAabbMm & b=*b_ptr;

	bool lret = ::NotEqual(a, b);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void * btPoolAlloc(size_t size)
static int _bind_btPoolAlloc(lua_State *L) {
	if (!_lg_typecheck_btPoolAlloc(L)) {
		luaL_error(L, "luna typecheck failed in void * btPoolAlloc(size_t size) function, expected prototype:\nvoid * btPoolAlloc(size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	size_t size=(size_t)lua_tointeger(L,1);

	void * lret = ::btPoolAlloc(size);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void * btPoolRealloc(void * ptr, size_t oldsize, size_t newsize)
static int _bind_btPoolRealloc(lua_State *L) {
	if (!_lg_typecheck_btPoolRealloc(L)) {
		luaL_error(L, "luna typecheck failed in void * btPoolRealloc(void * ptr, size_t oldsize, size_t newsize) function, expected prototype:\nvoid * btPoolRealloc(void * ptr, size_t oldsize, size_t newsize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	void* ptr=(Luna< void >::check(L,1));
	size_t oldsize=(size_t)lua_tointeger(L,2);
	size_t newsize=(size_t)lua_tointeger(L,3);

	void * lret = ::btPoolRealloc(ptr, oldsize, newsize);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void btPoolFree(void * ptr)
static int _bind_btPoolFree(lua_State *L) {
	if (!_lg_typecheck_btPoolFree(L)) {
		luaL_error(L, "luna typecheck failed in void btPoolFree(void * ptr) function, expected prototype:\nvoid btPoolFree(void * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	void* ptr=(Luna< void >::check(L,1));

	::btPoolFree(ptr);

	return 0;
}

// void bt_edge_plane(const btVector3 & e1, const btVector3 & e2, const btVector3 & normal, btVector4 & plane)
static int _bind_bt_edge_plane(lua_State *L) {
	if (!_lg_typecheck_bt_edge_plane(L)) {
		luaL_error(L, "luna typecheck failed in void bt_edge_plane(const btVector3 & e1, const btVector3 & e2, const btVector3 & normal, btVector4 & plane) function, expected prototype:\nvoid bt_edge_plane(const btVector3 & e1, const btVector3 & e2, const btVector3 & normal, btVector4 & plane)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* e1_ptr=(Luna< btVector3 >::check(L,1));
	if( !e1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg e1 in bt_edge_plane function");
	}
	const btVector3 & e1=*e1_ptr;
	const btVector3* e2_ptr=(Luna< btVector3 >::check(L,2));
	if( !e2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg e2 in bt_edge_plane function");
	}
	const btVector3 & e2=*e2_ptr;
	const btVector3* normal_ptr=(Luna< btVector3 >::check(L,3));
	if( !normal_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg normal in bt_edge_plane function");
	}
	const btVector3 & normal=*normal_ptr;
	btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,4));
	if( !plane_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg plane in bt_edge_plane function");
	}
	btVector4 & plane=*plane_ptr;

	::bt_edge_plane(e1, e2, normal, plane);

	return 0;
}

// void bt_closest_point_on_segment(btVector3 & cp, const btVector3 & v, const btVector3 & e1, const btVector3 & e2)
static int _bind_bt_closest_point_on_segment(lua_State *L) {
	if (!_lg_typecheck_bt_closest_point_on_segment(L)) {
		luaL_error(L, "luna typecheck failed in void bt_closest_point_on_segment(btVector3 & cp, const btVector3 & v, const btVector3 & e1, const btVector3 & e2) function, expected prototype:\nvoid bt_closest_point_on_segment(btVector3 & cp, const btVector3 & v, const btVector3 & e1, const btVector3 & e2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	btVector3* cp_ptr=(Luna< btVector3 >::check(L,1));
	if( !cp_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg cp in bt_closest_point_on_segment function");
	}
	btVector3 & cp=*cp_ptr;
	const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
	if( !v_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v in bt_closest_point_on_segment function");
	}
	const btVector3 & v=*v_ptr;
	const btVector3* e1_ptr=(Luna< btVector3 >::check(L,3));
	if( !e1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg e1 in bt_closest_point_on_segment function");
	}
	const btVector3 & e1=*e1_ptr;
	const btVector3* e2_ptr=(Luna< btVector3 >::check(L,4));
	if( !e2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg e2 in bt_closest_point_on_segment function");
	}
	const btVector3 & e2=*e2_ptr;

	::bt_closest_point_on_segment(cp, v, e1, e2);

	return 0;
}

// int bt_line_plane_collision(const btVector4 & plane, const btVector3 & vDir, const btVector3 & vPoint, btVector3 & pout, float & tparam, float tmin, float tmax)
static int _bind_bt_line_plane_collision(lua_State *L) {
	if (!_lg_typecheck_bt_line_plane_collision(L)) {
		luaL_error(L, "luna typecheck failed in int bt_line_plane_collision(const btVector4 & plane, const btVector3 & vDir, const btVector3 & vPoint, btVector3 & pout, float & tparam, float tmin, float tmax) function, expected prototype:\nint bt_line_plane_collision(const btVector4 & plane, const btVector3 & vDir, const btVector3 & vPoint, btVector3 & pout, float & tparam, float tmin, float tmax)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,1));
	if( !plane_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg plane in bt_line_plane_collision function");
	}
	const btVector4 & plane=*plane_ptr;
	const btVector3* vDir_ptr=(Luna< btVector3 >::check(L,2));
	if( !vDir_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vDir in bt_line_plane_collision function");
	}
	const btVector3 & vDir=*vDir_ptr;
	const btVector3* vPoint_ptr=(Luna< btVector3 >::check(L,3));
	if( !vPoint_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vPoint in bt_line_plane_collision function");
	}
	const btVector3 & vPoint=*vPoint_ptr;
	btVector3* pout_ptr=(Luna< btVector3 >::check(L,4));
	if( !pout_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg pout in bt_line_plane_collision function");
	}
	btVector3 & pout=*pout_ptr;
	float tparam=(float)lua_tonumber(L,5);
	float tmin=(float)lua_tonumber(L,6);
	float tmax=(float)lua_tonumber(L,7);

	int lret = ::bt_line_plane_collision(plane, vDir, vPoint, pout, tparam, tmin, tmax);
	lua_pushnumber(L,lret);

	lua_pushnumber(L,tparam);
	return 2;
}

// void bt_segment_collision(const btVector3 & vA1, const btVector3 & vA2, const btVector3 & vB1, const btVector3 & vB2, btVector3 & vPointA, btVector3 & vPointB)
static int _bind_bt_segment_collision(lua_State *L) {
	if (!_lg_typecheck_bt_segment_collision(L)) {
		luaL_error(L, "luna typecheck failed in void bt_segment_collision(const btVector3 & vA1, const btVector3 & vA2, const btVector3 & vB1, const btVector3 & vB2, btVector3 & vPointA, btVector3 & vPointB) function, expected prototype:\nvoid bt_segment_collision(const btVector3 & vA1, const btVector3 & vA2, const btVector3 & vB1, const btVector3 & vB2, btVector3 & vPointA, btVector3 & vPointB)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* vA1_ptr=(Luna< btVector3 >::check(L,1));
	if( !vA1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vA1 in bt_segment_collision function");
	}
	const btVector3 & vA1=*vA1_ptr;
	const btVector3* vA2_ptr=(Luna< btVector3 >::check(L,2));
	if( !vA2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vA2 in bt_segment_collision function");
	}
	const btVector3 & vA2=*vA2_ptr;
	const btVector3* vB1_ptr=(Luna< btVector3 >::check(L,3));
	if( !vB1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vB1 in bt_segment_collision function");
	}
	const btVector3 & vB1=*vB1_ptr;
	const btVector3* vB2_ptr=(Luna< btVector3 >::check(L,4));
	if( !vB2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vB2 in bt_segment_collision function");
	}
	const btVector3 & vB2=*vB2_ptr;
	btVector3* vPointA_ptr=(Luna< btVector3 >::check(L,5));
	if( !vPointA_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vPointA in bt_segment_collision function");
	}
	btVector3 & vPointA=*vPointA_ptr;
	btVector3* vPointB_ptr=(Luna< btVector3 >::check(L,6));
	if( !vPointB_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vPointB in bt_segment_collision function");
	}
	btVector3 & vPointB=*vPointB_ptr;

	::bt_segment_collision(vA1, vA2, vB1, vB2, vPointA, vPointB);

	return 0;
}

// btVector3 gim_inertia_add_transformed(const btVector3 & source_inertia, const btVector3 & added_inertia, const btTransform & transform)
static int _bind_gim_inertia_add_transformed(lua_State *L) {
	if (!_lg_typecheck_gim_inertia_add_transformed(L)) {
		luaL_error(L, "luna typecheck failed in btVector3 gim_inertia_add_transformed(const btVector3 & source_inertia, const btVector3 & added_inertia, const btTransform & transform) function, expected prototype:\nbtVector3 gim_inertia_add_transformed(const btVector3 & source_inertia, const btVector3 & added_inertia, const btTransform & transform)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 13247377\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* source_inertia_ptr=(Luna< btVector3 >::check(L,1));
	if( !source_inertia_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg source_inertia in gim_inertia_add_transformed function");
	}
	const btVector3 & source_inertia=*source_inertia_ptr;
	const btVector3* added_inertia_ptr=(Luna< btVector3 >::check(L,2));
	if( !added_inertia_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg added_inertia in gim_inertia_add_transformed function");
	}
	const btVector3 & added_inertia=*added_inertia_ptr;
	const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
	if( !transform_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg transform in gim_inertia_add_transformed function");
	}
	const btTransform & transform=*transform_ptr;

	btVector3 stack_lret = ::gim_inertia_add_transformed(source_inertia, added_inertia, transform);
	btVector3* lret = new btVector3(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< btVector3 >::push(L,lret,true);

	return 1;
}

// btVector3 gim_get_point_inertia(const btVector3 & point, float mass)
static int _bind_gim_get_point_inertia(lua_State *L) {
	if (!_lg_typecheck_gim_get_point_inertia(L)) {
		luaL_error(L, "luna typecheck failed in btVector3 gim_get_point_inertia(const btVector3 & point, float mass) function, expected prototype:\nbtVector3 gim_get_point_inertia(const btVector3 & point, float mass)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* point_ptr=(Luna< btVector3 >::check(L,1));
	if( !point_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg point in gim_get_point_inertia function");
	}
	const btVector3 & point=*point_ptr;
	float mass=(float)lua_tonumber(L,2);

	btVector3 stack_lret = ::gim_get_point_inertia(point, mass);
	btVector3* lret = new btVector3(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< btVector3 >::push(L,lret,true);

	return 1;
}

// void GrahamScanConvexHull2D(btAlignedObjectArray< GrahamVector3 > & originalPoints, btAlignedObjectArray< GrahamVector3 > & hull, const btVector3 & normalAxis)
static int _bind_GrahamScanConvexHull2D(lua_State *L) {
	if (!_lg_typecheck_GrahamScanConvexHull2D(L)) {
		luaL_error(L, "luna typecheck failed in void GrahamScanConvexHull2D(btAlignedObjectArray< GrahamVector3 > & originalPoints, btAlignedObjectArray< GrahamVector3 > & hull, const btVector3 & normalAxis) function, expected prototype:\nvoid GrahamScanConvexHull2D(btAlignedObjectArray< GrahamVector3 > & originalPoints, btAlignedObjectArray< GrahamVector3 > & hull, const btVector3 & normalAxis)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	btAlignedObjectArray< GrahamVector3 >* originalPoints_ptr=(Luna< btAlignedObjectArray< GrahamVector3 > >::check(L,1));
	if( !originalPoints_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg originalPoints in GrahamScanConvexHull2D function");
	}
	btAlignedObjectArray< GrahamVector3 > & originalPoints=*originalPoints_ptr;
	btAlignedObjectArray< GrahamVector3 >* hull_ptr=(Luna< btAlignedObjectArray< GrahamVector3 > >::check(L,2));
	if( !hull_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg hull in GrahamScanConvexHull2D function");
	}
	btAlignedObjectArray< GrahamVector3 > & hull=*hull_ptr;
	const btVector3* normalAxis_ptr=(Luna< btVector3 >::check(L,3));
	if( !normalAxis_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg normalAxis in GrahamScanConvexHull2D function");
	}
	const btVector3 & normalAxis=*normalAxis_ptr;

	::GrahamScanConvexHull2D(originalPoints, hull, normalAxis);

	return 0;
}

// void btAdjustInternalEdgeContacts(btManifoldPoint & cp, const btCollisionObjectWrapper * trimeshColObj0Wrap, const btCollisionObjectWrapper * otherColObj1Wrap, int partId0, int index0, int normalAdjustFlags = 0)
static int _bind_btAdjustInternalEdgeContacts(lua_State *L) {
	if (!_lg_typecheck_btAdjustInternalEdgeContacts(L)) {
		luaL_error(L, "luna typecheck failed in void btAdjustInternalEdgeContacts(btManifoldPoint & cp, const btCollisionObjectWrapper * trimeshColObj0Wrap, const btCollisionObjectWrapper * otherColObj1Wrap, int partId0, int index0, int normalAdjustFlags = 0) function, expected prototype:\nvoid btAdjustInternalEdgeContacts(btManifoldPoint & cp, const btCollisionObjectWrapper * trimeshColObj0Wrap, const btCollisionObjectWrapper * otherColObj1Wrap, int partId0, int index0, int normalAdjustFlags = 0)\nClass arguments details:\narg 1 ID = 55239733\narg 2 ID = 32391296\narg 3 ID = 32391296\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	btManifoldPoint* cp_ptr=(Luna< btManifoldPoint >::check(L,1));
	if( !cp_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg cp in btAdjustInternalEdgeContacts function");
	}
	btManifoldPoint & cp=*cp_ptr;
	const btCollisionObjectWrapper* trimeshColObj0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
	const btCollisionObjectWrapper* otherColObj1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
	int partId0=(int)lua_tointeger(L,4);
	int index0=(int)lua_tointeger(L,5);
	int normalAdjustFlags=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;

	::btAdjustInternalEdgeContacts(cp, trimeshColObj0Wrap, otherColObj1Wrap, partId0, index0, normalAdjustFlags);

	return 0;
}

// unsigned int polarDecompose(const btMatrix3x3 & a, btMatrix3x3 & u, btMatrix3x3 & h)
static int _bind_polarDecompose(lua_State *L) {
	if (!_lg_typecheck_polarDecompose(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int polarDecompose(const btMatrix3x3 & a, btMatrix3x3 & u, btMatrix3x3 & h) function, expected prototype:\nunsigned int polarDecompose(const btMatrix3x3 & a, btMatrix3x3 & u, btMatrix3x3 & h)\nClass arguments details:\narg 1 ID = 30394543\narg 2 ID = 30394543\narg 3 ID = 30394543\n\n%s",luna_dumpStack(L).c_str());
	}

	const btMatrix3x3* a_ptr=(Luna< btMatrix3x3 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in polarDecompose function");
	}
	const btMatrix3x3 & a=*a_ptr;
	btMatrix3x3* u_ptr=(Luna< btMatrix3x3 >::check(L,2));
	if( !u_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg u in polarDecompose function");
	}
	btMatrix3x3 & u=*u_ptr;
	btMatrix3x3* h_ptr=(Luna< btMatrix3x3 >::check(L,3));
	if( !h_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg h in polarDecompose function");
	}
	btMatrix3x3 & h=*h_ptr;

	unsigned int lret = ::polarDecompose(a, u, h);
	lua_pushnumber(L,lret);

	return 1;
}

// void bt_calc_quantization_parameters(btVector3 & outMinBound, btVector3 & outMaxBound, btVector3 & bvhQuantization, const btVector3 & srcMinBound, const btVector3 & srcMaxBound, float quantizationMargin)
static int _bind_bt_calc_quantization_parameters(lua_State *L) {
	if (!_lg_typecheck_bt_calc_quantization_parameters(L)) {
		luaL_error(L, "luna typecheck failed in void bt_calc_quantization_parameters(btVector3 & outMinBound, btVector3 & outMaxBound, btVector3 & bvhQuantization, const btVector3 & srcMinBound, const btVector3 & srcMaxBound, float quantizationMargin) function, expected prototype:\nvoid bt_calc_quantization_parameters(btVector3 & outMinBound, btVector3 & outMaxBound, btVector3 & bvhQuantization, const btVector3 & srcMinBound, const btVector3 & srcMaxBound, float quantizationMargin)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	btVector3* outMinBound_ptr=(Luna< btVector3 >::check(L,1));
	if( !outMinBound_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg outMinBound in bt_calc_quantization_parameters function");
	}
	btVector3 & outMinBound=*outMinBound_ptr;
	btVector3* outMaxBound_ptr=(Luna< btVector3 >::check(L,2));
	if( !outMaxBound_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg outMaxBound in bt_calc_quantization_parameters function");
	}
	btVector3 & outMaxBound=*outMaxBound_ptr;
	btVector3* bvhQuantization_ptr=(Luna< btVector3 >::check(L,3));
	if( !bvhQuantization_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg bvhQuantization in bt_calc_quantization_parameters function");
	}
	btVector3 & bvhQuantization=*bvhQuantization_ptr;
	const btVector3* srcMinBound_ptr=(Luna< btVector3 >::check(L,4));
	if( !srcMinBound_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg srcMinBound in bt_calc_quantization_parameters function");
	}
	const btVector3 & srcMinBound=*srcMinBound_ptr;
	const btVector3* srcMaxBound_ptr=(Luna< btVector3 >::check(L,5));
	if( !srcMaxBound_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg srcMaxBound in bt_calc_quantization_parameters function");
	}
	const btVector3 & srcMaxBound=*srcMaxBound_ptr;
	float quantizationMargin=(float)lua_tonumber(L,6);

	::bt_calc_quantization_parameters(outMinBound, outMaxBound, bvhQuantization, srcMinBound, srcMaxBound, quantizationMargin);

	return 0;
}

// void bt_quantize_clamp(unsigned short * out, const btVector3 & point, const btVector3 & min_bound, const btVector3 & max_bound, const btVector3 & bvhQuantization)
static int _bind_bt_quantize_clamp(lua_State *L) {
	if (!_lg_typecheck_bt_quantize_clamp(L)) {
		luaL_error(L, "luna typecheck failed in void bt_quantize_clamp(unsigned short * out, const btVector3 & point, const btVector3 & min_bound, const btVector3 & max_bound, const btVector3 & bvhQuantization) function, expected prototype:\nvoid bt_quantize_clamp(unsigned short * out, const btVector3 & point, const btVector3 & min_bound, const btVector3 & max_bound, const btVector3 & bvhQuantization)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned short* out=(unsigned short*)Luna< void >::check(L,1);
	const btVector3* point_ptr=(Luna< btVector3 >::check(L,2));
	if( !point_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg point in bt_quantize_clamp function");
	}
	const btVector3 & point=*point_ptr;
	const btVector3* min_bound_ptr=(Luna< btVector3 >::check(L,3));
	if( !min_bound_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg min_bound in bt_quantize_clamp function");
	}
	const btVector3 & min_bound=*min_bound_ptr;
	const btVector3* max_bound_ptr=(Luna< btVector3 >::check(L,4));
	if( !max_bound_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg max_bound in bt_quantize_clamp function");
	}
	const btVector3 & max_bound=*max_bound_ptr;
	const btVector3* bvhQuantization_ptr=(Luna< btVector3 >::check(L,5));
	if( !bvhQuantization_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg bvhQuantization in bt_quantize_clamp function");
	}
	const btVector3 & bvhQuantization=*bvhQuantization_ptr;

	::bt_quantize_clamp(out, point, min_bound, max_bound, bvhQuantization);

	return 0;
}

// btVector3 bt_unquantize(const unsigned short * vecIn, const btVector3 & offset, const btVector3 & bvhQuantization)
static int _bind_bt_unquantize(lua_State *L) {
	if (!_lg_typecheck_bt_unquantize(L)) {
		luaL_error(L, "luna typecheck failed in btVector3 bt_unquantize(const unsigned short * vecIn, const btVector3 & offset, const btVector3 & bvhQuantization) function, expected prototype:\nbtVector3 bt_unquantize(const unsigned short * vecIn, const btVector3 & offset, const btVector3 & bvhQuantization)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const unsigned short* vecIn=(const unsigned short*)Luna< void >::check(L,1);
	const btVector3* offset_ptr=(Luna< btVector3 >::check(L,2));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in bt_unquantize function");
	}
	const btVector3 & offset=*offset_ptr;
	const btVector3* bvhQuantization_ptr=(Luna< btVector3 >::check(L,3));
	if( !bvhQuantization_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg bvhQuantization in bt_unquantize function");
	}
	const btVector3 & bvhQuantization=*bvhQuantization_ptr;

	btVector3 stack_lret = ::bt_unquantize(vecIn, offset, bvhQuantization);
	btVector3* lret = new btVector3(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< btVector3 >::push(L,lret,true);

	return 1;
}

// float dot(const btQuaternion & q1, const btQuaternion & q2)
static int _bind_dot(lua_State *L) {
	if (!_lg_typecheck_dot(L)) {
		luaL_error(L, "luna typecheck failed in float dot(const btQuaternion & q1, const btQuaternion & q2) function, expected prototype:\nfloat dot(const btQuaternion & q1, const btQuaternion & q2)\nClass arguments details:\narg 1 ID = 2139400\narg 2 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
	}

	const btQuaternion* q1_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1));
	if( !q1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q1 in dot function");
	}
	const btQuaternion & q1=*q1_ptr;
	const btQuaternion* q2_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
	if( !q2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q2 in dot function");
	}
	const btQuaternion & q2=*q2_ptr;

	float lret = ::dot(q1, q2);
	lua_pushnumber(L,lret);

	return 1;
}

// float length(const btQuaternion & q)
static int _bind_length(lua_State *L) {
	if (!_lg_typecheck_length(L)) {
		luaL_error(L, "luna typecheck failed in float length(const btQuaternion & q) function, expected prototype:\nfloat length(const btQuaternion & q)\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
	}

	const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1));
	if( !q_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q in length function");
	}
	const btQuaternion & q=*q_ptr;

	float lret = ::length(q);
	lua_pushnumber(L,lret);

	return 1;
}

// float btAngle(const btQuaternion & q1, const btQuaternion & q2)
static int _bind_btAngle_overload_1(lua_State *L) {
	if (!_lg_typecheck_btAngle_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in float btAngle(const btQuaternion & q1, const btQuaternion & q2) function, expected prototype:\nfloat btAngle(const btQuaternion & q1, const btQuaternion & q2)\nClass arguments details:\narg 1 ID = 2139400\narg 2 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
	}

	const btQuaternion* q1_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1));
	if( !q1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q1 in btAngle function");
	}
	const btQuaternion & q1=*q1_ptr;
	const btQuaternion* q2_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
	if( !q2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q2 in btAngle function");
	}
	const btQuaternion & q2=*q2_ptr;

	float lret = ::btAngle(q1, q2);
	lua_pushnumber(L,lret);

	return 1;
}

// float btAngle(const btVector3 & v1, const btVector3 & v2)
static int _bind_btAngle_overload_2(lua_State *L) {
	if (!_lg_typecheck_btAngle_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in float btAngle(const btVector3 & v1, const btVector3 & v2) function, expected prototype:\nfloat btAngle(const btVector3 & v1, const btVector3 & v2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* v1_ptr=(Luna< btVector3 >::check(L,1));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in btAngle function");
	}
	const btVector3 & v1=*v1_ptr;
	const btVector3* v2_ptr=(Luna< btVector3 >::check(L,2));
	if( !v2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v2 in btAngle function");
	}
	const btVector3 & v2=*v2_ptr;

	float lret = ::btAngle(v1, v2);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for btAngle
static int _bind_btAngle(lua_State *L) {
	if (_lg_typecheck_btAngle_overload_1(L)) return _bind_btAngle_overload_1(L);
	if (_lg_typecheck_btAngle_overload_2(L)) return _bind_btAngle_overload_2(L);

	luaL_error(L, "error in function btAngle, cannot match any of the overloads for function btAngle:\n  btAngle(const btQuaternion &, const btQuaternion &)\n  btAngle(const btVector3 &, const btVector3 &)\n");
	return 0;
}

// btQuaternion inverse(const btQuaternion & q)
static int _bind_inverse(lua_State *L) {
	if (!_lg_typecheck_inverse(L)) {
		luaL_error(L, "luna typecheck failed in btQuaternion inverse(const btQuaternion & q) function, expected prototype:\nbtQuaternion inverse(const btQuaternion & q)\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
	}

	const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1));
	if( !q_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q in inverse function");
	}
	const btQuaternion & q=*q_ptr;

	btQuaternion stack_lret = ::inverse(q);
	btQuaternion* lret = new btQuaternion(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< btQuaternion >::push(L,lret,true);

	return 1;
}

// btQuaternion slerp(const btQuaternion & q1, const btQuaternion & q2, const float & t)
static int _bind_slerp(lua_State *L) {
	if (!_lg_typecheck_slerp(L)) {
		luaL_error(L, "luna typecheck failed in btQuaternion slerp(const btQuaternion & q1, const btQuaternion & q2, const float & t) function, expected prototype:\nbtQuaternion slerp(const btQuaternion & q1, const btQuaternion & q2, const float & t)\nClass arguments details:\narg 1 ID = 2139400\narg 2 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
	}

	const btQuaternion* q1_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1));
	if( !q1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q1 in slerp function");
	}
	const btQuaternion & q1=*q1_ptr;
	const btQuaternion* q2_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
	if( !q2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q2 in slerp function");
	}
	const btQuaternion & q2=*q2_ptr;
	const float t=(const float)lua_tonumber(L,3);

	btQuaternion stack_lret = ::slerp(q1, q2, t);
	btQuaternion* lret = new btQuaternion(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< btQuaternion >::push(L,lret,true);

	return 1;
}

// btVector3 quatRotate(const btQuaternion & rotation, const btVector3 & v)
static int _bind_quatRotate(lua_State *L) {
	if (!_lg_typecheck_quatRotate(L)) {
		luaL_error(L, "luna typecheck failed in btVector3 quatRotate(const btQuaternion & rotation, const btVector3 & v) function, expected prototype:\nbtVector3 quatRotate(const btQuaternion & rotation, const btVector3 & v)\nClass arguments details:\narg 1 ID = 2139400\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btQuaternion* rotation_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1));
	if( !rotation_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rotation in quatRotate function");
	}
	const btQuaternion & rotation=*rotation_ptr;
	const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
	if( !v_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v in quatRotate function");
	}
	const btVector3 & v=*v_ptr;

	btVector3 stack_lret = ::quatRotate(rotation, v);
	btVector3* lret = new btVector3(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< btVector3 >::push(L,lret,true);

	return 1;
}

// btQuaternion shortestArcQuat(const btVector3 & v0, const btVector3 & v1)
static int _bind_shortestArcQuat(lua_State *L) {
	if (!_lg_typecheck_shortestArcQuat(L)) {
		luaL_error(L, "luna typecheck failed in btQuaternion shortestArcQuat(const btVector3 & v0, const btVector3 & v1) function, expected prototype:\nbtQuaternion shortestArcQuat(const btVector3 & v0, const btVector3 & v1)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* v0_ptr=(Luna< btVector3 >::check(L,1));
	if( !v0_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v0 in shortestArcQuat function");
	}
	const btVector3 & v0=*v0_ptr;
	const btVector3* v1_ptr=(Luna< btVector3 >::check(L,2));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in shortestArcQuat function");
	}
	const btVector3 & v1=*v1_ptr;

	btQuaternion stack_lret = ::shortestArcQuat(v0, v1);
	btQuaternion* lret = new btQuaternion(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< btQuaternion >::push(L,lret,true);

	return 1;
}

// btQuaternion shortestArcQuatNormalize2(btVector3 & v0, btVector3 & v1)
static int _bind_shortestArcQuatNormalize2(lua_State *L) {
	if (!_lg_typecheck_shortestArcQuatNormalize2(L)) {
		luaL_error(L, "luna typecheck failed in btQuaternion shortestArcQuatNormalize2(btVector3 & v0, btVector3 & v1) function, expected prototype:\nbtQuaternion shortestArcQuatNormalize2(btVector3 & v0, btVector3 & v1)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	btVector3* v0_ptr=(Luna< btVector3 >::check(L,1));
	if( !v0_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v0 in shortestArcQuatNormalize2 function");
	}
	btVector3 & v0=*v0_ptr;
	btVector3* v1_ptr=(Luna< btVector3 >::check(L,2));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in shortestArcQuatNormalize2 function");
	}
	btVector3 & v1=*v1_ptr;

	btQuaternion stack_lret = ::shortestArcQuatNormalize2(v0, v1);
	btQuaternion* lret = new btQuaternion(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< btQuaternion >::push(L,lret,true);

	return 1;
}

// void GEN_srand(unsigned int seed)
static int _bind_GEN_srand(lua_State *L) {
	if (!_lg_typecheck_GEN_srand(L)) {
		luaL_error(L, "luna typecheck failed in void GEN_srand(unsigned int seed) function, expected prototype:\nvoid GEN_srand(unsigned int seed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int seed=(unsigned int)lua_tointeger(L,1);

	::GEN_srand(seed);

	return 0;
}

// unsigned int GEN_rand()
static int _bind_GEN_rand(lua_State *L) {
	if (!_lg_typecheck_GEN_rand(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int GEN_rand() function, expected prototype:\nunsigned int GEN_rand()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	unsigned int lret = ::GEN_rand();
	lua_pushnumber(L,lret);

	return 1;
}

// int btGetVersion()
static int _bind_btGetVersion(lua_State *L) {
	if (!_lg_typecheck_btGetVersion(L)) {
		luaL_error(L, "luna typecheck failed in int btGetVersion() function, expected prototype:\nint btGetVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	int lret = ::btGetVersion();
	lua_pushnumber(L,lret);

	return 1;
}

// float btSqrt(float y)
static int _bind_btSqrt(lua_State *L) {
	if (!_lg_typecheck_btSqrt(L)) {
		luaL_error(L, "luna typecheck failed in float btSqrt(float y) function, expected prototype:\nfloat btSqrt(float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float y=(float)lua_tonumber(L,1);

	float lret = ::btSqrt(y);
	lua_pushnumber(L,lret);

	return 1;
}

// float btFabs(float x)
static int _bind_btFabs(lua_State *L) {
	if (!_lg_typecheck_btFabs(L)) {
		luaL_error(L, "luna typecheck failed in float btFabs(float x) function, expected prototype:\nfloat btFabs(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::btFabs(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btCos(float x)
static int _bind_btCos(lua_State *L) {
	if (!_lg_typecheck_btCos(L)) {
		luaL_error(L, "luna typecheck failed in float btCos(float x) function, expected prototype:\nfloat btCos(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::btCos(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btSin(float x)
static int _bind_btSin(lua_State *L) {
	if (!_lg_typecheck_btSin(L)) {
		luaL_error(L, "luna typecheck failed in float btSin(float x) function, expected prototype:\nfloat btSin(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::btSin(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btTan(float x)
static int _bind_btTan(lua_State *L) {
	if (!_lg_typecheck_btTan(L)) {
		luaL_error(L, "luna typecheck failed in float btTan(float x) function, expected prototype:\nfloat btTan(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::btTan(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btAcos(float x)
static int _bind_btAcos(lua_State *L) {
	if (!_lg_typecheck_btAcos(L)) {
		luaL_error(L, "luna typecheck failed in float btAcos(float x) function, expected prototype:\nfloat btAcos(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::btAcos(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btAsin(float x)
static int _bind_btAsin(lua_State *L) {
	if (!_lg_typecheck_btAsin(L)) {
		luaL_error(L, "luna typecheck failed in float btAsin(float x) function, expected prototype:\nfloat btAsin(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::btAsin(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btAtan(float x)
static int _bind_btAtan(lua_State *L) {
	if (!_lg_typecheck_btAtan(L)) {
		luaL_error(L, "luna typecheck failed in float btAtan(float x) function, expected prototype:\nfloat btAtan(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::btAtan(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btAtan2(float x, float y)
static int _bind_btAtan2(lua_State *L) {
	if (!_lg_typecheck_btAtan2(L)) {
		luaL_error(L, "luna typecheck failed in float btAtan2(float x, float y) function, expected prototype:\nfloat btAtan2(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);
	float y=(float)lua_tonumber(L,2);

	float lret = ::btAtan2(x, y);
	lua_pushnumber(L,lret);

	return 1;
}

// float btExp(float x)
static int _bind_btExp(lua_State *L) {
	if (!_lg_typecheck_btExp(L)) {
		luaL_error(L, "luna typecheck failed in float btExp(float x) function, expected prototype:\nfloat btExp(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::btExp(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btLog(float x)
static int _bind_btLog(lua_State *L) {
	if (!_lg_typecheck_btLog(L)) {
		luaL_error(L, "luna typecheck failed in float btLog(float x) function, expected prototype:\nfloat btLog(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::btLog(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btPow(float x, float y)
static int _bind_btPow(lua_State *L) {
	if (!_lg_typecheck_btPow(L)) {
		luaL_error(L, "luna typecheck failed in float btPow(float x, float y) function, expected prototype:\nfloat btPow(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);
	float y=(float)lua_tonumber(L,2);

	float lret = ::btPow(x, y);
	lua_pushnumber(L,lret);

	return 1;
}

// float btFmod(float x, float y)
static int _bind_btFmod(lua_State *L) {
	if (!_lg_typecheck_btFmod(L)) {
		luaL_error(L, "luna typecheck failed in float btFmod(float x, float y) function, expected prototype:\nfloat btFmod(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);
	float y=(float)lua_tonumber(L,2);

	float lret = ::btFmod(x, y);
	lua_pushnumber(L,lret);

	return 1;
}

// float btAtan2Fast(float y, float x)
static int _bind_btAtan2Fast(lua_State *L) {
	if (!_lg_typecheck_btAtan2Fast(L)) {
		luaL_error(L, "luna typecheck failed in float btAtan2Fast(float y, float x) function, expected prototype:\nfloat btAtan2Fast(float y, float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float y=(float)lua_tonumber(L,1);
	float x=(float)lua_tonumber(L,2);

	float lret = ::btAtan2Fast(y, x);
	lua_pushnumber(L,lret);

	return 1;
}

// bool btFuzzyZero(float x)
static int _bind_btFuzzyZero(lua_State *L) {
	if (!_lg_typecheck_btFuzzyZero(L)) {
		luaL_error(L, "luna typecheck failed in bool btFuzzyZero(float x) function, expected prototype:\nbool btFuzzyZero(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	bool lret = ::btFuzzyZero(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool btEqual(float a, float eps)
static int _bind_btEqual(lua_State *L) {
	if (!_lg_typecheck_btEqual(L)) {
		luaL_error(L, "luna typecheck failed in bool btEqual(float a, float eps) function, expected prototype:\nbool btEqual(float a, float eps)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float a=(float)lua_tonumber(L,1);
	float eps=(float)lua_tonumber(L,2);

	bool lret = ::btEqual(a, eps);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool btGreaterEqual(float a, float eps)
static int _bind_btGreaterEqual(lua_State *L) {
	if (!_lg_typecheck_btGreaterEqual(L)) {
		luaL_error(L, "luna typecheck failed in bool btGreaterEqual(float a, float eps) function, expected prototype:\nbool btGreaterEqual(float a, float eps)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float a=(float)lua_tonumber(L,1);
	float eps=(float)lua_tonumber(L,2);

	bool lret = ::btGreaterEqual(a, eps);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// int btIsNegative(float x)
static int _bind_btIsNegative(lua_State *L) {
	if (!_lg_typecheck_btIsNegative(L)) {
		luaL_error(L, "luna typecheck failed in int btIsNegative(float x) function, expected prototype:\nint btIsNegative(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	int lret = ::btIsNegative(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btRadians(float x)
static int _bind_btRadians(lua_State *L) {
	if (!_lg_typecheck_btRadians(L)) {
		luaL_error(L, "luna typecheck failed in float btRadians(float x) function, expected prototype:\nfloat btRadians(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::btRadians(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btDegrees(float x)
static int _bind_btDegrees(lua_State *L) {
	if (!_lg_typecheck_btDegrees(L)) {
		luaL_error(L, "luna typecheck failed in float btDegrees(float x) function, expected prototype:\nfloat btDegrees(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::btDegrees(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float btFsel(float a, float b, float c)
static int _bind_btFsel(lua_State *L) {
	if (!_lg_typecheck_btFsel(L)) {
		luaL_error(L, "luna typecheck failed in float btFsel(float a, float b, float c) function, expected prototype:\nfloat btFsel(float a, float b, float c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float a=(float)lua_tonumber(L,1);
	float b=(float)lua_tonumber(L,2);
	float c=(float)lua_tonumber(L,3);

	float lret = ::btFsel(a, b, c);
	lua_pushnumber(L,lret);

	return 1;
}

// bool btMachineIsLittleEndian()
static int _bind_btMachineIsLittleEndian(lua_State *L) {
	if (!_lg_typecheck_btMachineIsLittleEndian(L)) {
		luaL_error(L, "luna typecheck failed in bool btMachineIsLittleEndian() function, expected prototype:\nbool btMachineIsLittleEndian()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	bool lret = ::btMachineIsLittleEndian();
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// unsigned int btSelect(unsigned int condition, unsigned int valueIfConditionNonZero, unsigned int valueIfConditionZero)
static int _bind_btSelect_overload_1(lua_State *L) {
	if (!_lg_typecheck_btSelect_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int btSelect(unsigned int condition, unsigned int valueIfConditionNonZero, unsigned int valueIfConditionZero) function, expected prototype:\nunsigned int btSelect(unsigned int condition, unsigned int valueIfConditionNonZero, unsigned int valueIfConditionZero)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned condition=(unsigned)lua_tointeger(L,1);
	unsigned valueIfConditionNonZero=(unsigned)lua_tointeger(L,2);
	unsigned valueIfConditionZero=(unsigned)lua_tointeger(L,3);

	unsigned int lret = ::btSelect(condition, valueIfConditionNonZero, valueIfConditionZero);
	lua_pushnumber(L,lret);

	return 1;
}

// int btSelect(unsigned int condition, int valueIfConditionNonZero, int valueIfConditionZero)
static int _bind_btSelect_overload_2(lua_State *L) {
	if (!_lg_typecheck_btSelect_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in int btSelect(unsigned int condition, int valueIfConditionNonZero, int valueIfConditionZero) function, expected prototype:\nint btSelect(unsigned int condition, int valueIfConditionNonZero, int valueIfConditionZero)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned condition=(unsigned)lua_tointeger(L,1);
	int valueIfConditionNonZero=(int)lua_tointeger(L,2);
	int valueIfConditionZero=(int)lua_tointeger(L,3);

	int lret = ::btSelect(condition, valueIfConditionNonZero, valueIfConditionZero);
	lua_pushnumber(L,lret);

	return 1;
}

// float btSelect(unsigned int condition, float valueIfConditionNonZero, float valueIfConditionZero)
static int _bind_btSelect_overload_3(lua_State *L) {
	if (!_lg_typecheck_btSelect_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in float btSelect(unsigned int condition, float valueIfConditionNonZero, float valueIfConditionZero) function, expected prototype:\nfloat btSelect(unsigned int condition, float valueIfConditionNonZero, float valueIfConditionZero)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned condition=(unsigned)lua_tointeger(L,1);
	float valueIfConditionNonZero=(float)lua_tonumber(L,2);
	float valueIfConditionZero=(float)lua_tonumber(L,3);

	float lret = ::btSelect(condition, valueIfConditionNonZero, valueIfConditionZero);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for btSelect
static int _bind_btSelect(lua_State *L) {
	if (_lg_typecheck_btSelect_overload_1(L)) return _bind_btSelect_overload_1(L);
	if (_lg_typecheck_btSelect_overload_2(L)) return _bind_btSelect_overload_2(L);
	if (_lg_typecheck_btSelect_overload_3(L)) return _bind_btSelect_overload_3(L);

	luaL_error(L, "error in function btSelect, cannot match any of the overloads for function btSelect:\n  btSelect(unsigned int, unsigned int, unsigned int)\n  btSelect(unsigned int, int, int)\n  btSelect(unsigned int, float, float)\n");
	return 0;
}

// unsigned int btSwapEndian(unsigned int val)
static int _bind_btSwapEndian_overload_1(lua_State *L) {
	if (!_lg_typecheck_btSwapEndian_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int btSwapEndian(unsigned int val) function, expected prototype:\nunsigned int btSwapEndian(unsigned int val)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned val=(unsigned)lua_tointeger(L,1);

	unsigned int lret = ::btSwapEndian(val);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned short btSwapEndian(unsigned short val)
static int _bind_btSwapEndian_overload_2(lua_State *L) {
	if (!_lg_typecheck_btSwapEndian_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in unsigned short btSwapEndian(unsigned short val) function, expected prototype:\nunsigned short btSwapEndian(unsigned short val)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned short val=(unsigned short)lua_tointeger(L,1);

	unsigned short lret = ::btSwapEndian(val);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int btSwapEndian(int val)
static int _bind_btSwapEndian_overload_3(lua_State *L) {
	if (!_lg_typecheck_btSwapEndian_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int btSwapEndian(int val) function, expected prototype:\nunsigned int btSwapEndian(int val)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int val=(int)lua_tointeger(L,1);

	unsigned int lret = ::btSwapEndian(val);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned short btSwapEndian(short val)
static int _bind_btSwapEndian_overload_4(lua_State *L) {
	if (!_lg_typecheck_btSwapEndian_overload_4(L)) {
		luaL_error(L, "luna typecheck failed in unsigned short btSwapEndian(short val) function, expected prototype:\nunsigned short btSwapEndian(short val)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	short val=(short)lua_tointeger(L,1);

	unsigned short lret = ::btSwapEndian(val);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for btSwapEndian
static int _bind_btSwapEndian(lua_State *L) {
	if (_lg_typecheck_btSwapEndian_overload_1(L)) return _bind_btSwapEndian_overload_1(L);
	if (_lg_typecheck_btSwapEndian_overload_2(L)) return _bind_btSwapEndian_overload_2(L);
	if (_lg_typecheck_btSwapEndian_overload_3(L)) return _bind_btSwapEndian_overload_3(L);
	if (_lg_typecheck_btSwapEndian_overload_4(L)) return _bind_btSwapEndian_overload_4(L);

	luaL_error(L, "error in function btSwapEndian, cannot match any of the overloads for function btSwapEndian:\n  btSwapEndian(unsigned int)\n  btSwapEndian(unsigned short)\n  btSwapEndian(int)\n  btSwapEndian(short)\n");
	return 0;
}

// unsigned int btSwapEndianFloat(float d)
static int _bind_btSwapEndianFloat(lua_State *L) {
	if (!_lg_typecheck_btSwapEndianFloat(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int btSwapEndianFloat(float d) function, expected prototype:\nunsigned int btSwapEndianFloat(float d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float d=(float)lua_tonumber(L,1);

	unsigned int lret = ::btSwapEndianFloat(d);
	lua_pushnumber(L,lret);

	return 1;
}

// float btUnswapEndianFloat(unsigned int a)
static int _bind_btUnswapEndianFloat(lua_State *L) {
	if (!_lg_typecheck_btUnswapEndianFloat(L)) {
		luaL_error(L, "luna typecheck failed in float btUnswapEndianFloat(unsigned int a) function, expected prototype:\nfloat btUnswapEndianFloat(unsigned int a)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int a=(unsigned int)lua_tointeger(L,1);

	float lret = ::btUnswapEndianFloat(a);
	lua_pushnumber(L,lret);

	return 1;
}

// void btSwapEndianDouble(double d, unsigned char * dst)
static int _bind_btSwapEndianDouble(lua_State *L) {
	if (!_lg_typecheck_btSwapEndianDouble(L)) {
		luaL_error(L, "luna typecheck failed in void btSwapEndianDouble(double d, unsigned char * dst) function, expected prototype:\nvoid btSwapEndianDouble(double d, unsigned char * dst)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double d=(double)lua_tonumber(L,1);
	unsigned char dst = (unsigned char)(lua_tointeger(L,2));

	::btSwapEndianDouble(d, &dst);

	return 0;
}

// double btUnswapEndianDouble(const unsigned char * src)
static int _bind_btUnswapEndianDouble(lua_State *L) {
	if (!_lg_typecheck_btUnswapEndianDouble(L)) {
		luaL_error(L, "luna typecheck failed in double btUnswapEndianDouble(const unsigned char * src) function, expected prototype:\ndouble btUnswapEndianDouble(const unsigned char * src)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned char src = (unsigned char)(lua_tointeger(L,1));

	double lret = ::btUnswapEndianDouble(&src);
	lua_pushnumber(L,lret);

	return 1;
}

// float btNormalizeAngle(float angleInRadians)
static int _bind_btNormalizeAngle(lua_State *L) {
	if (!_lg_typecheck_btNormalizeAngle(L)) {
		luaL_error(L, "luna typecheck failed in float btNormalizeAngle(float angleInRadians) function, expected prototype:\nfloat btNormalizeAngle(float angleInRadians)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float angleInRadians=(float)lua_tonumber(L,1);

	float lret = ::btNormalizeAngle(angleInRadians);
	lua_pushnumber(L,lret);

	return 1;
}

// int btStrLen(const char * str)
static int _bind_btStrLen(lua_State *L) {
	if (!_lg_typecheck_btStrLen(L)) {
		luaL_error(L, "luna typecheck failed in int btStrLen(const char * str) function, expected prototype:\nint btStrLen(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * str=(const char *)lua_tostring(L,1);

	int lret = ::btStrLen(str);
	lua_pushnumber(L,lret);

	return 1;
}

// btVector3 btAabbSupport(const btVector3 & halfExtents, const btVector3 & supportDir)
static int _bind_btAabbSupport(lua_State *L) {
	if (!_lg_typecheck_btAabbSupport(L)) {
		luaL_error(L, "luna typecheck failed in btVector3 btAabbSupport(const btVector3 & halfExtents, const btVector3 & supportDir) function, expected prototype:\nbtVector3 btAabbSupport(const btVector3 & halfExtents, const btVector3 & supportDir)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* halfExtents_ptr=(Luna< btVector3 >::check(L,1));
	if( !halfExtents_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg halfExtents in btAabbSupport function");
	}
	const btVector3 & halfExtents=*halfExtents_ptr;
	const btVector3* supportDir_ptr=(Luna< btVector3 >::check(L,2));
	if( !supportDir_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg supportDir in btAabbSupport function");
	}
	const btVector3 & supportDir=*supportDir_ptr;

	btVector3 stack_lret = ::btAabbSupport(halfExtents, supportDir);
	btVector3* lret = new btVector3(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< btVector3 >::push(L,lret,true);

	return 1;
}

// float btAdjustAngleToLimits(float angleInRadians, float angleLowerLimitInRadians, float angleUpperLimitInRadians)
static int _bind_btAdjustAngleToLimits(lua_State *L) {
	if (!_lg_typecheck_btAdjustAngleToLimits(L)) {
		luaL_error(L, "luna typecheck failed in float btAdjustAngleToLimits(float angleInRadians, float angleLowerLimitInRadians, float angleUpperLimitInRadians) function, expected prototype:\nfloat btAdjustAngleToLimits(float angleInRadians, float angleLowerLimitInRadians, float angleUpperLimitInRadians)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float angleInRadians=(float)lua_tonumber(L,1);
	float angleLowerLimitInRadians=(float)lua_tonumber(L,2);
	float angleUpperLimitInRadians=(float)lua_tonumber(L,3);

	float lret = ::btAdjustAngleToLimits(angleInRadians, angleLowerLimitInRadians, angleUpperLimitInRadians);
	lua_pushnumber(L,lret);

	return 1;
}

// float btDot(const btVector3 & v1, const btVector3 & v2)
static int _bind_btDot(lua_State *L) {
	if (!_lg_typecheck_btDot(L)) {
		luaL_error(L, "luna typecheck failed in float btDot(const btVector3 & v1, const btVector3 & v2) function, expected prototype:\nfloat btDot(const btVector3 & v1, const btVector3 & v2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* v1_ptr=(Luna< btVector3 >::check(L,1));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in btDot function");
	}
	const btVector3 & v1=*v1_ptr;
	const btVector3* v2_ptr=(Luna< btVector3 >::check(L,2));
	if( !v2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v2 in btDot function");
	}
	const btVector3 & v2=*v2_ptr;

	float lret = ::btDot(v1, v2);
	lua_pushnumber(L,lret);

	return 1;
}

// float btDistance2(const btVector3 & v1, const btVector3 & v2)
static int _bind_btDistance2(lua_State *L) {
	if (!_lg_typecheck_btDistance2(L)) {
		luaL_error(L, "luna typecheck failed in float btDistance2(const btVector3 & v1, const btVector3 & v2) function, expected prototype:\nfloat btDistance2(const btVector3 & v1, const btVector3 & v2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* v1_ptr=(Luna< btVector3 >::check(L,1));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in btDistance2 function");
	}
	const btVector3 & v1=*v1_ptr;
	const btVector3* v2_ptr=(Luna< btVector3 >::check(L,2));
	if( !v2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v2 in btDistance2 function");
	}
	const btVector3 & v2=*v2_ptr;

	float lret = ::btDistance2(v1, v2);
	lua_pushnumber(L,lret);

	return 1;
}

// float btDistance(const btVector3 & v1, const btVector3 & v2)
static int _bind_btDistance(lua_State *L) {
	if (!_lg_typecheck_btDistance(L)) {
		luaL_error(L, "luna typecheck failed in float btDistance(const btVector3 & v1, const btVector3 & v2) function, expected prototype:\nfloat btDistance(const btVector3 & v1, const btVector3 & v2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* v1_ptr=(Luna< btVector3 >::check(L,1));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in btDistance function");
	}
	const btVector3 & v1=*v1_ptr;
	const btVector3* v2_ptr=(Luna< btVector3 >::check(L,2));
	if( !v2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v2 in btDistance function");
	}
	const btVector3 & v2=*v2_ptr;

	float lret = ::btDistance(v1, v2);
	lua_pushnumber(L,lret);

	return 1;
}

// btVector3 btCross(const btVector3 & v1, const btVector3 & v2)
static int _bind_btCross(lua_State *L) {
	if (!_lg_typecheck_btCross(L)) {
		luaL_error(L, "luna typecheck failed in btVector3 btCross(const btVector3 & v1, const btVector3 & v2) function, expected prototype:\nbtVector3 btCross(const btVector3 & v1, const btVector3 & v2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* v1_ptr=(Luna< btVector3 >::check(L,1));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in btCross function");
	}
	const btVector3 & v1=*v1_ptr;
	const btVector3* v2_ptr=(Luna< btVector3 >::check(L,2));
	if( !v2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v2 in btCross function");
	}
	const btVector3 & v2=*v2_ptr;

	btVector3 stack_lret = ::btCross(v1, v2);
	btVector3* lret = new btVector3(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< btVector3 >::push(L,lret,true);

	return 1;
}

// float btTriple(const btVector3 & v1, const btVector3 & v2, const btVector3 & v3)
static int _bind_btTriple(lua_State *L) {
	if (!_lg_typecheck_btTriple(L)) {
		luaL_error(L, "luna typecheck failed in float btTriple(const btVector3 & v1, const btVector3 & v2, const btVector3 & v3) function, expected prototype:\nfloat btTriple(const btVector3 & v1, const btVector3 & v2, const btVector3 & v3)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* v1_ptr=(Luna< btVector3 >::check(L,1));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in btTriple function");
	}
	const btVector3 & v1=*v1_ptr;
	const btVector3* v2_ptr=(Luna< btVector3 >::check(L,2));
	if( !v2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v2 in btTriple function");
	}
	const btVector3 & v2=*v2_ptr;
	const btVector3* v3_ptr=(Luna< btVector3 >::check(L,3));
	if( !v3_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v3 in btTriple function");
	}
	const btVector3 & v3=*v3_ptr;

	float lret = ::btTriple(v1, v2, v3);
	lua_pushnumber(L,lret);

	return 1;
}

// btVector3 lerp(const btVector3 & v1, const btVector3 & v2, const float & t)
static int _bind_lerp(lua_State *L) {
	if (!_lg_typecheck_lerp(L)) {
		luaL_error(L, "luna typecheck failed in btVector3 lerp(const btVector3 & v1, const btVector3 & v2, const float & t) function, expected prototype:\nbtVector3 lerp(const btVector3 & v1, const btVector3 & v2, const float & t)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* v1_ptr=(Luna< btVector3 >::check(L,1));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in lerp function");
	}
	const btVector3 & v1=*v1_ptr;
	const btVector3* v2_ptr=(Luna< btVector3 >::check(L,2));
	if( !v2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v2 in lerp function");
	}
	const btVector3 & v2=*v2_ptr;
	const float t=(const float)lua_tonumber(L,3);

	btVector3 stack_lret = ::lerp(v1, v2, t);
	btVector3* lret = new btVector3(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< btVector3 >::push(L,lret,true);

	return 1;
}

// void btSwapScalarEndian(const float & sourceVal, float & destVal)
static int _bind_btSwapScalarEndian(lua_State *L) {
	if (!_lg_typecheck_btSwapScalarEndian(L)) {
		luaL_error(L, "luna typecheck failed in void btSwapScalarEndian(const float & sourceVal, float & destVal) function, expected prototype:\nvoid btSwapScalarEndian(const float & sourceVal, float & destVal)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const float sourceVal=(const float)lua_tonumber(L,1);
	float destVal=(float)lua_tonumber(L,2);

	::btSwapScalarEndian(sourceVal, destVal);

	lua_pushnumber(L,destVal);
	return 1;
}

// void btSwapVector3Endian(const btVector3 & sourceVec, btVector3 & destVec)
static int _bind_btSwapVector3Endian(lua_State *L) {
	if (!_lg_typecheck_btSwapVector3Endian(L)) {
		luaL_error(L, "luna typecheck failed in void btSwapVector3Endian(const btVector3 & sourceVec, btVector3 & destVec) function, expected prototype:\nvoid btSwapVector3Endian(const btVector3 & sourceVec, btVector3 & destVec)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	const btVector3* sourceVec_ptr=(Luna< btVector3 >::check(L,1));
	if( !sourceVec_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg sourceVec in btSwapVector3Endian function");
	}
	const btVector3 & sourceVec=*sourceVec_ptr;
	btVector3* destVec_ptr=(Luna< btVector3 >::check(L,2));
	if( !destVec_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg destVec in btSwapVector3Endian function");
	}
	btVector3 & destVec=*destVec_ptr;

	::btSwapVector3Endian(sourceVec, destVec);

	return 0;
}

// void btUnSwapVector3Endian(btVector3 & vector)
static int _bind_btUnSwapVector3Endian(lua_State *L) {
	if (!_lg_typecheck_btUnSwapVector3Endian(L)) {
		luaL_error(L, "luna typecheck failed in void btUnSwapVector3Endian(btVector3 & vector) function, expected prototype:\nvoid btUnSwapVector3Endian(btVector3 & vector)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
	}

	btVector3* vector_ptr=(Luna< btVector3 >::check(L,1));
	if( !vector_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg vector in btUnSwapVector3Endian function");
	}
	btVector3 & vector=*vector_ptr;

	::btUnSwapVector3Endian(vector);

	return 0;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"bullet");
	lua_pushcfunction(L, _bind_AabbExpand); lua_setfield(L,-2,"AabbExpand");
	lua_pushcfunction(L, _bind_TestPointAgainstAabb2); lua_setfield(L,-2,"TestPointAgainstAabb2");
	lua_pushcfunction(L, _bind_TestAabbAgainstAabb2); lua_setfield(L,-2,"TestAabbAgainstAabb2");
	lua_pushcfunction(L, _bind_TestTriangleAgainstAabb2); lua_setfield(L,-2,"TestTriangleAgainstAabb2");
	lua_pushcfunction(L, _bind_btOutcode); lua_setfield(L,-2,"btOutcode");
	lua_pushcfunction(L, _bind_btRayAabb); lua_setfield(L,-2,"btRayAabb");
	lua_pushcfunction(L, _bind_btTransformAabb); lua_setfield(L,-2,"btTransformAabb");
	lua_pushcfunction(L, _bind_testQuantizedAabbAgainstQuantizedAabb); lua_setfield(L,-2,"testQuantizedAabbAgainstQuantizedAabb");
	lua_pushcfunction(L, _bind_btAlignedAllocInternal); lua_setfield(L,-2,"btAlignedAllocInternal");
	lua_pushcfunction(L, _bind_btAlignedFreeInternal); lua_setfield(L,-2,"btAlignedFreeInternal");
	lua_pushcfunction(L, _bind_bt_mat3_dot_col); lua_setfield(L,-2,"bt_mat3_dot_col");
	lua_pushcfunction(L, _bind_btCompareTransformsEqual); lua_setfield(L,-2,"btCompareTransformsEqual");
	lua_pushcfunction(L, _bind_bt_distance_point_plane); lua_setfield(L,-2,"bt_distance_point_plane");
	lua_pushcfunction(L, _bind_bt_vec_blend); lua_setfield(L,-2,"bt_vec_blend");
	lua_pushcfunction(L, _bind_bt_plane_clip_polygon_collect); lua_setfield(L,-2,"bt_plane_clip_polygon_collect");
	lua_pushcfunction(L, _bind_bt_plane_clip_polygon); lua_setfield(L,-2,"bt_plane_clip_polygon");
	lua_pushcfunction(L, _bind_bt_plane_clip_triangle); lua_setfield(L,-2,"bt_plane_clip_triangle");
	lua_pushcfunction(L, _bind_resolveSingleCollision); lua_setfield(L,-2,"resolveSingleCollision");
	lua_pushcfunction(L, _bind_resolveSingleBilateral); lua_setfield(L,-2,"resolveSingleBilateral");
	lua_pushcfunction(L, _bind_Intersect); lua_setfield(L,-2,"Intersect");
	lua_pushcfunction(L, _bind_Proximity); lua_setfield(L,-2,"Proximity");
	lua_pushcfunction(L, _bind_Select); lua_setfield(L,-2,"Select");
	lua_pushcfunction(L, _bind_Merge); lua_setfield(L,-2,"Merge");
	lua_pushcfunction(L, _bind_NotEqual); lua_setfield(L,-2,"NotEqual");
	lua_pushcfunction(L, _bind_btPoolAlloc); lua_setfield(L,-2,"btPoolAlloc");
	lua_pushcfunction(L, _bind_btPoolRealloc); lua_setfield(L,-2,"btPoolRealloc");
	lua_pushcfunction(L, _bind_btPoolFree); lua_setfield(L,-2,"btPoolFree");
	lua_pushcfunction(L, _bind_bt_edge_plane); lua_setfield(L,-2,"bt_edge_plane");
	lua_pushcfunction(L, _bind_bt_closest_point_on_segment); lua_setfield(L,-2,"bt_closest_point_on_segment");
	lua_pushcfunction(L, _bind_bt_line_plane_collision); lua_setfield(L,-2,"bt_line_plane_collision");
	lua_pushcfunction(L, _bind_bt_segment_collision); lua_setfield(L,-2,"bt_segment_collision");
	lua_pushcfunction(L, _bind_gim_inertia_add_transformed); lua_setfield(L,-2,"gim_inertia_add_transformed");
	lua_pushcfunction(L, _bind_gim_get_point_inertia); lua_setfield(L,-2,"gim_get_point_inertia");
	lua_pushcfunction(L, _bind_GrahamScanConvexHull2D); lua_setfield(L,-2,"GrahamScanConvexHull2D");
	lua_pushcfunction(L, _bind_btAdjustInternalEdgeContacts); lua_setfield(L,-2,"btAdjustInternalEdgeContacts");
	lua_pushcfunction(L, _bind_polarDecompose); lua_setfield(L,-2,"polarDecompose");
	lua_pushcfunction(L, _bind_bt_calc_quantization_parameters); lua_setfield(L,-2,"bt_calc_quantization_parameters");
	lua_pushcfunction(L, _bind_bt_quantize_clamp); lua_setfield(L,-2,"bt_quantize_clamp");
	lua_pushcfunction(L, _bind_bt_unquantize); lua_setfield(L,-2,"bt_unquantize");
	lua_pushcfunction(L, _bind_dot); lua_setfield(L,-2,"dot");
	lua_pushcfunction(L, _bind_length); lua_setfield(L,-2,"length");
	lua_pushcfunction(L, _bind_btAngle); lua_setfield(L,-2,"btAngle");
	lua_pushcfunction(L, _bind_inverse); lua_setfield(L,-2,"inverse");
	lua_pushcfunction(L, _bind_slerp); lua_setfield(L,-2,"slerp");
	lua_pushcfunction(L, _bind_quatRotate); lua_setfield(L,-2,"quatRotate");
	lua_pushcfunction(L, _bind_shortestArcQuat); lua_setfield(L,-2,"shortestArcQuat");
	lua_pushcfunction(L, _bind_shortestArcQuatNormalize2); lua_setfield(L,-2,"shortestArcQuatNormalize2");
	lua_pushcfunction(L, _bind_GEN_srand); lua_setfield(L,-2,"GEN_srand");
	lua_pushcfunction(L, _bind_GEN_rand); lua_setfield(L,-2,"GEN_rand");
	lua_pushcfunction(L, _bind_btGetVersion); lua_setfield(L,-2,"btGetVersion");
	lua_pushcfunction(L, _bind_btSqrt); lua_setfield(L,-2,"btSqrt");
	lua_pushcfunction(L, _bind_btFabs); lua_setfield(L,-2,"btFabs");
	lua_pushcfunction(L, _bind_btCos); lua_setfield(L,-2,"btCos");
	lua_pushcfunction(L, _bind_btSin); lua_setfield(L,-2,"btSin");
	lua_pushcfunction(L, _bind_btTan); lua_setfield(L,-2,"btTan");
	lua_pushcfunction(L, _bind_btAcos); lua_setfield(L,-2,"btAcos");
	lua_pushcfunction(L, _bind_btAsin); lua_setfield(L,-2,"btAsin");
	lua_pushcfunction(L, _bind_btAtan); lua_setfield(L,-2,"btAtan");
	lua_pushcfunction(L, _bind_btAtan2); lua_setfield(L,-2,"btAtan2");
	lua_pushcfunction(L, _bind_btExp); lua_setfield(L,-2,"btExp");
	lua_pushcfunction(L, _bind_btLog); lua_setfield(L,-2,"btLog");
	lua_pushcfunction(L, _bind_btPow); lua_setfield(L,-2,"btPow");
	lua_pushcfunction(L, _bind_btFmod); lua_setfield(L,-2,"btFmod");
	lua_pushcfunction(L, _bind_btAtan2Fast); lua_setfield(L,-2,"btAtan2Fast");
	lua_pushcfunction(L, _bind_btFuzzyZero); lua_setfield(L,-2,"btFuzzyZero");
	lua_pushcfunction(L, _bind_btEqual); lua_setfield(L,-2,"btEqual");
	lua_pushcfunction(L, _bind_btGreaterEqual); lua_setfield(L,-2,"btGreaterEqual");
	lua_pushcfunction(L, _bind_btIsNegative); lua_setfield(L,-2,"btIsNegative");
	lua_pushcfunction(L, _bind_btRadians); lua_setfield(L,-2,"btRadians");
	lua_pushcfunction(L, _bind_btDegrees); lua_setfield(L,-2,"btDegrees");
	lua_pushcfunction(L, _bind_btFsel); lua_setfield(L,-2,"btFsel");
	lua_pushcfunction(L, _bind_btMachineIsLittleEndian); lua_setfield(L,-2,"btMachineIsLittleEndian");
	lua_pushcfunction(L, _bind_btSelect); lua_setfield(L,-2,"btSelect");
	lua_pushcfunction(L, _bind_btSwapEndian); lua_setfield(L,-2,"btSwapEndian");
	lua_pushcfunction(L, _bind_btSwapEndianFloat); lua_setfield(L,-2,"btSwapEndianFloat");
	lua_pushcfunction(L, _bind_btUnswapEndianFloat); lua_setfield(L,-2,"btUnswapEndianFloat");
	lua_pushcfunction(L, _bind_btSwapEndianDouble); lua_setfield(L,-2,"btSwapEndianDouble");
	lua_pushcfunction(L, _bind_btUnswapEndianDouble); lua_setfield(L,-2,"btUnswapEndianDouble");
	lua_pushcfunction(L, _bind_btNormalizeAngle); lua_setfield(L,-2,"btNormalizeAngle");
	lua_pushcfunction(L, _bind_btStrLen); lua_setfield(L,-2,"btStrLen");
	lua_pushcfunction(L, _bind_btAabbSupport); lua_setfield(L,-2,"btAabbSupport");
	lua_pushcfunction(L, _bind_btAdjustAngleToLimits); lua_setfield(L,-2,"btAdjustAngleToLimits");
	lua_pushcfunction(L, _bind_btDot); lua_setfield(L,-2,"btDot");
	lua_pushcfunction(L, _bind_btDistance2); lua_setfield(L,-2,"btDistance2");
	lua_pushcfunction(L, _bind_btDistance); lua_setfield(L,-2,"btDistance");
	lua_pushcfunction(L, _bind_btCross); lua_setfield(L,-2,"btCross");
	lua_pushcfunction(L, _bind_btTriple); lua_setfield(L,-2,"btTriple");
	lua_pushcfunction(L, _bind_lerp); lua_setfield(L,-2,"lerp");
	lua_pushcfunction(L, _bind_btSwapScalarEndian); lua_setfield(L,-2,"btSwapScalarEndian");
	lua_pushcfunction(L, _bind_btSwapVector3Endian); lua_setfield(L,-2,"btSwapVector3Endian");
	lua_pushcfunction(L, _bind_btUnSwapVector3Endian); lua_setfield(L,-2,"btUnSwapVector3Endian");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

