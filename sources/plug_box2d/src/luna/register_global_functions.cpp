#include <plug_common.h>

#include <Box2D/Collision/b2BroadPhase.h>
#include <Box2D/Collision/b2Collision.h>
#include <Box2D/Dynamics/Contacts/b2Contact.h>
#include <Box2D/Collision/b2Distance.h>
#include <Box2D/Common/b2Math.h>
#include <Box2D/Common/b2Settings.h>
#include <Box2D/Collision/b2TimeOfImpact.h>

// Function checkers:
inline static bool _lg_typecheck_b2PairLessThan(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54312546) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54312546) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2CollideCircles(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73405450)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86660265)) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,86660265)) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,44090970) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2CollidePolygonAndCircle(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73405450)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86660265)) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,86660265)) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,44090970) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2CollidePolygons(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73405450)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86660265)) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,86660265)) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,44090970) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2CollideEdgeAndCircle(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73405450)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86660265)) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,86660265)) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,44090970) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2CollideEdgeAndPolygon(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73405450)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86660265)) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,86660265)) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,44090970) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2TestOverlap_overload_1(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,86660265)) ) return false;
	if( (lua_isnil(L,1)==0 && !(Luna< b2Shape >::check(L,1)) ) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,86660265)) ) return false;
	if( (lua_isnil(L,3)==0 && !(Luna< b2Shape >::check(L,3)) ) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,44090970) ) return false;
	if( (!(Luna< b2Transform >::check(L,5))) ) return false;
	if( !Luna<void>::has_uniqueid(L,6,44090970) ) return false;
	if( (!(Luna< b2Transform >::check(L,6))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2TestOverlap_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,53833672) ) return false;
	if( (!(Luna< b2AABB >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,53833672) ) return false;
	if( (!(Luna< b2AABB >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2MixFriction(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_b2MixRestitution(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Distance_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,57509721)) ) return false;
	if( (lua_isnil(L,1)==0 && !(Luna< b2DistanceOutput >::check(L,1)) ) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,65613863)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< b2SimplexCache >::check(L,2)) ) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50940514)) ) return false;
	if( (lua_isnil(L,3)==0 && !(Luna< b2DistanceInput >::check(L,3)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Distance_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2IsValid(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_b2InvSqrt(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Dot_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Dot_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54494887) ) return false;
	if( (!(Luna< b2Vec3 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494887) ) return false;
	if( (!(Luna< b2Vec3 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Cross_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Cross_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,1))) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Cross_overload_3(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Cross_overload_4(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54494887) ) return false;
	if( (!(Luna< b2Vec3 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494887) ) return false;
	if( (!(Luna< b2Vec3 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Mul_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,80926888) ) return false;
	if( (!(Luna< b2Mat22 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Mul_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,80926888) ) return false;
	if( (!(Luna< b2Mat22 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,80926888) ) return false;
	if( (!(Luna< b2Mat22 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Mul_overload_3(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,80926920) ) return false;
	if( (!(Luna< b2Mat33 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494887) ) return false;
	if( (!(Luna< b2Vec3 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Mul_overload_4(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92076967) ) return false;
	if( (!(Luna< b2Rot >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92076967) ) return false;
	if( (!(Luna< b2Rot >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Mul_overload_5(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92076967) ) return false;
	if( (!(Luna< b2Rot >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Mul_overload_6(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,44090970) ) return false;
	if( (!(Luna< b2Transform >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Mul_overload_7(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,44090970) ) return false;
	if( (!(Luna< b2Transform >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,44090970) ) return false;
	if( (!(Luna< b2Transform >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2MulT_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,80926888) ) return false;
	if( (!(Luna< b2Mat22 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2MulT_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,80926888) ) return false;
	if( (!(Luna< b2Mat22 >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,80926888) ) return false;
	if( (!(Luna< b2Mat22 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2MulT_overload_3(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92076967) ) return false;
	if( (!(Luna< b2Rot >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92076967) ) return false;
	if( (!(Luna< b2Rot >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2MulT_overload_4(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92076967) ) return false;
	if( (!(Luna< b2Rot >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2MulT_overload_5(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,44090970) ) return false;
	if( (!(Luna< b2Transform >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2MulT_overload_6(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,44090970) ) return false;
	if( (!(Luna< b2Transform >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,44090970) ) return false;
	if( (!(Luna< b2Transform >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2DistanceSquared(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Mul22(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,80926920) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Abs_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
	if( (!(Luna< b2Vec2 >::check(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Abs_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,80926888) ) return false;
	if( (!(Luna< b2Mat22 >::check(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Min(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Max(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Clamp(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,54494886) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2NextPowerOfTwo(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2IsPowerOfTwo(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Alloc(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2Free(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_b2TimeOfImpact(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,17329370)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,98031472)) ) return false;
	return true;
}


// Function binds:
// bool b2PairLessThan(const b2Pair & pair1, const b2Pair & pair2)
static int _bind_b2PairLessThan(lua_State *L) {
	if (!_lg_typecheck_b2PairLessThan(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool b2PairLessThan(const b2Pair & pair1, const b2Pair & pair2) function, expected prototype:\nbool b2PairLessThan(const b2Pair & pair1, const b2Pair & pair2)\nClass arguments details:\narg 1 ID = 54312546\narg 2 ID = 54312546\n");
	}

	const b2Pair* pair1_ptr=(Luna< b2Pair >::check(L,1));
	if( !pair1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg pair1 in b2PairLessThan function");
	}
	const b2Pair & pair1=*pair1_ptr;
	const b2Pair* pair2_ptr=(Luna< b2Pair >::check(L,2));
	if( !pair2_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg pair2 in b2PairLessThan function");
	}
	const b2Pair & pair2=*pair2_ptr;

	bool lret = ::b2PairLessThan(pair1, pair2);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void b2CollideCircles(b2Manifold * manifold, const b2CircleShape * circleA, const b2Transform & xfA, const b2CircleShape * circleB, const b2Transform & xfB)
static int _bind_b2CollideCircles(lua_State *L) {
	if (!_lg_typecheck_b2CollideCircles(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void b2CollideCircles(b2Manifold * manifold, const b2CircleShape * circleA, const b2Transform & xfA, const b2CircleShape * circleB, const b2Transform & xfB) function, expected prototype:\nvoid b2CollideCircles(b2Manifold * manifold, const b2CircleShape * circleA, const b2Transform & xfA, const b2CircleShape * circleB, const b2Transform & xfB)\nClass arguments details:\narg 1 ID = 73405450\narg 2 ID = 86660265\narg 3 ID = 44090970\narg 4 ID = 86660265\narg 5 ID = 44090970\n");
	}

	b2Manifold* manifold=(Luna< b2Manifold >::check(L,1));
	const b2CircleShape* circleA=(Luna< b2Shape >::checkSubType< b2CircleShape >(L,2));
	const b2Transform* xfA_ptr=(Luna< b2Transform >::check(L,3));
	if( !xfA_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfA in b2CollideCircles function");
	}
	const b2Transform & xfA=*xfA_ptr;
	const b2CircleShape* circleB=(Luna< b2Shape >::checkSubType< b2CircleShape >(L,4));
	const b2Transform* xfB_ptr=(Luna< b2Transform >::check(L,5));
	if( !xfB_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfB in b2CollideCircles function");
	}
	const b2Transform & xfB=*xfB_ptr;

	::b2CollideCircles(manifold, circleA, xfA, circleB, xfB);

	return 0;
}

// void b2CollidePolygonAndCircle(b2Manifold * manifold, const b2PolygonShape * polygonA, const b2Transform & xfA, const b2CircleShape * circleB, const b2Transform & xfB)
static int _bind_b2CollidePolygonAndCircle(lua_State *L) {
	if (!_lg_typecheck_b2CollidePolygonAndCircle(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void b2CollidePolygonAndCircle(b2Manifold * manifold, const b2PolygonShape * polygonA, const b2Transform & xfA, const b2CircleShape * circleB, const b2Transform & xfB) function, expected prototype:\nvoid b2CollidePolygonAndCircle(b2Manifold * manifold, const b2PolygonShape * polygonA, const b2Transform & xfA, const b2CircleShape * circleB, const b2Transform & xfB)\nClass arguments details:\narg 1 ID = 73405450\narg 2 ID = 86660265\narg 3 ID = 44090970\narg 4 ID = 86660265\narg 5 ID = 44090970\n");
	}

	b2Manifold* manifold=(Luna< b2Manifold >::check(L,1));
	const b2PolygonShape* polygonA=(Luna< b2Shape >::checkSubType< b2PolygonShape >(L,2));
	const b2Transform* xfA_ptr=(Luna< b2Transform >::check(L,3));
	if( !xfA_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfA in b2CollidePolygonAndCircle function");
	}
	const b2Transform & xfA=*xfA_ptr;
	const b2CircleShape* circleB=(Luna< b2Shape >::checkSubType< b2CircleShape >(L,4));
	const b2Transform* xfB_ptr=(Luna< b2Transform >::check(L,5));
	if( !xfB_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfB in b2CollidePolygonAndCircle function");
	}
	const b2Transform & xfB=*xfB_ptr;

	::b2CollidePolygonAndCircle(manifold, polygonA, xfA, circleB, xfB);

	return 0;
}

// void b2CollidePolygons(b2Manifold * manifold, const b2PolygonShape * polygonA, const b2Transform & xfA, const b2PolygonShape * polygonB, const b2Transform & xfB)
static int _bind_b2CollidePolygons(lua_State *L) {
	if (!_lg_typecheck_b2CollidePolygons(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void b2CollidePolygons(b2Manifold * manifold, const b2PolygonShape * polygonA, const b2Transform & xfA, const b2PolygonShape * polygonB, const b2Transform & xfB) function, expected prototype:\nvoid b2CollidePolygons(b2Manifold * manifold, const b2PolygonShape * polygonA, const b2Transform & xfA, const b2PolygonShape * polygonB, const b2Transform & xfB)\nClass arguments details:\narg 1 ID = 73405450\narg 2 ID = 86660265\narg 3 ID = 44090970\narg 4 ID = 86660265\narg 5 ID = 44090970\n");
	}

	b2Manifold* manifold=(Luna< b2Manifold >::check(L,1));
	const b2PolygonShape* polygonA=(Luna< b2Shape >::checkSubType< b2PolygonShape >(L,2));
	const b2Transform* xfA_ptr=(Luna< b2Transform >::check(L,3));
	if( !xfA_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfA in b2CollidePolygons function");
	}
	const b2Transform & xfA=*xfA_ptr;
	const b2PolygonShape* polygonB=(Luna< b2Shape >::checkSubType< b2PolygonShape >(L,4));
	const b2Transform* xfB_ptr=(Luna< b2Transform >::check(L,5));
	if( !xfB_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfB in b2CollidePolygons function");
	}
	const b2Transform & xfB=*xfB_ptr;

	::b2CollidePolygons(manifold, polygonA, xfA, polygonB, xfB);

	return 0;
}

// void b2CollideEdgeAndCircle(b2Manifold * manifold, const b2EdgeShape * polygonA, const b2Transform & xfA, const b2CircleShape * circleB, const b2Transform & xfB)
static int _bind_b2CollideEdgeAndCircle(lua_State *L) {
	if (!_lg_typecheck_b2CollideEdgeAndCircle(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void b2CollideEdgeAndCircle(b2Manifold * manifold, const b2EdgeShape * polygonA, const b2Transform & xfA, const b2CircleShape * circleB, const b2Transform & xfB) function, expected prototype:\nvoid b2CollideEdgeAndCircle(b2Manifold * manifold, const b2EdgeShape * polygonA, const b2Transform & xfA, const b2CircleShape * circleB, const b2Transform & xfB)\nClass arguments details:\narg 1 ID = 73405450\narg 2 ID = 86660265\narg 3 ID = 44090970\narg 4 ID = 86660265\narg 5 ID = 44090970\n");
	}

	b2Manifold* manifold=(Luna< b2Manifold >::check(L,1));
	const b2EdgeShape* polygonA=(Luna< b2Shape >::checkSubType< b2EdgeShape >(L,2));
	const b2Transform* xfA_ptr=(Luna< b2Transform >::check(L,3));
	if( !xfA_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfA in b2CollideEdgeAndCircle function");
	}
	const b2Transform & xfA=*xfA_ptr;
	const b2CircleShape* circleB=(Luna< b2Shape >::checkSubType< b2CircleShape >(L,4));
	const b2Transform* xfB_ptr=(Luna< b2Transform >::check(L,5));
	if( !xfB_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfB in b2CollideEdgeAndCircle function");
	}
	const b2Transform & xfB=*xfB_ptr;

	::b2CollideEdgeAndCircle(manifold, polygonA, xfA, circleB, xfB);

	return 0;
}

// void b2CollideEdgeAndPolygon(b2Manifold * manifold, const b2EdgeShape * edgeA, const b2Transform & xfA, const b2PolygonShape * circleB, const b2Transform & xfB)
static int _bind_b2CollideEdgeAndPolygon(lua_State *L) {
	if (!_lg_typecheck_b2CollideEdgeAndPolygon(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void b2CollideEdgeAndPolygon(b2Manifold * manifold, const b2EdgeShape * edgeA, const b2Transform & xfA, const b2PolygonShape * circleB, const b2Transform & xfB) function, expected prototype:\nvoid b2CollideEdgeAndPolygon(b2Manifold * manifold, const b2EdgeShape * edgeA, const b2Transform & xfA, const b2PolygonShape * circleB, const b2Transform & xfB)\nClass arguments details:\narg 1 ID = 73405450\narg 2 ID = 86660265\narg 3 ID = 44090970\narg 4 ID = 86660265\narg 5 ID = 44090970\n");
	}

	b2Manifold* manifold=(Luna< b2Manifold >::check(L,1));
	const b2EdgeShape* edgeA=(Luna< b2Shape >::checkSubType< b2EdgeShape >(L,2));
	const b2Transform* xfA_ptr=(Luna< b2Transform >::check(L,3));
	if( !xfA_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfA in b2CollideEdgeAndPolygon function");
	}
	const b2Transform & xfA=*xfA_ptr;
	const b2PolygonShape* circleB=(Luna< b2Shape >::checkSubType< b2PolygonShape >(L,4));
	const b2Transform* xfB_ptr=(Luna< b2Transform >::check(L,5));
	if( !xfB_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfB in b2CollideEdgeAndPolygon function");
	}
	const b2Transform & xfB=*xfB_ptr;

	::b2CollideEdgeAndPolygon(manifold, edgeA, xfA, circleB, xfB);

	return 0;
}

// bool b2TestOverlap(const b2Shape * shapeA, signed int indexA, const b2Shape * shapeB, signed int indexB, const b2Transform & xfA, const b2Transform & xfB)
static int _bind_b2TestOverlap_overload_1(lua_State *L) {
	if (!_lg_typecheck_b2TestOverlap_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool b2TestOverlap(const b2Shape * shapeA, signed int indexA, const b2Shape * shapeB, signed int indexB, const b2Transform & xfA, const b2Transform & xfB) function, expected prototype:\nbool b2TestOverlap(const b2Shape * shapeA, signed int indexA, const b2Shape * shapeB, signed int indexB, const b2Transform & xfA, const b2Transform & xfB)\nClass arguments details:\narg 1 ID = 86660265\narg 3 ID = 86660265\narg 5 ID = 44090970\narg 6 ID = 44090970\n");
	}

	const b2Shape* shapeA=(Luna< b2Shape >::check(L,1));
	signed int indexA=(signed int)lua_tointeger(L,2);
	const b2Shape* shapeB=(Luna< b2Shape >::check(L,3));
	signed int indexB=(signed int)lua_tointeger(L,4);
	const b2Transform* xfA_ptr=(Luna< b2Transform >::check(L,5));
	if( !xfA_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfA in b2TestOverlap function");
	}
	const b2Transform & xfA=*xfA_ptr;
	const b2Transform* xfB_ptr=(Luna< b2Transform >::check(L,6));
	if( !xfB_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg xfB in b2TestOverlap function");
	}
	const b2Transform & xfB=*xfB_ptr;

	bool lret = ::b2TestOverlap(shapeA, indexA, shapeB, indexB, xfA, xfB);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool b2TestOverlap(const b2AABB & a, const b2AABB & b)
static int _bind_b2TestOverlap_overload_2(lua_State *L) {
	if (!_lg_typecheck_b2TestOverlap_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool b2TestOverlap(const b2AABB & a, const b2AABB & b) function, expected prototype:\nbool b2TestOverlap(const b2AABB & a, const b2AABB & b)\nClass arguments details:\narg 1 ID = 53833672\narg 2 ID = 53833672\n");
	}

	const b2AABB* a_ptr=(Luna< b2AABB >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2TestOverlap function");
	}
	const b2AABB & a=*a_ptr;
	const b2AABB* b_ptr=(Luna< b2AABB >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in b2TestOverlap function");
	}
	const b2AABB & b=*b_ptr;

	bool lret = ::b2TestOverlap(a, b);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for b2TestOverlap
static int _bind_b2TestOverlap(lua_State *L) {
	if (_lg_typecheck_b2TestOverlap_overload_1(L)) return _bind_b2TestOverlap_overload_1(L);
	if (_lg_typecheck_b2TestOverlap_overload_2(L)) return _bind_b2TestOverlap_overload_2(L);

	luaL_error(L, "error in function b2TestOverlap, cannot match any of the overloads for function b2TestOverlap:\n  b2TestOverlap(const b2Shape *, signed int, const b2Shape *, signed int, const b2Transform &, const b2Transform &)\n  b2TestOverlap(const b2AABB &, const b2AABB &)\n");
	return 0;
}

// float b2MixFriction(float friction1, float friction2)
static int _bind_b2MixFriction(lua_State *L) {
	if (!_lg_typecheck_b2MixFriction(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float b2MixFriction(float friction1, float friction2) function, expected prototype:\nfloat b2MixFriction(float friction1, float friction2)\nClass arguments details:\n");
	}

	float friction1=(float)lua_tonumber(L,1);
	float friction2=(float)lua_tonumber(L,2);

	float lret = ::b2MixFriction(friction1, friction2);
	lua_pushnumber(L,lret);

	return 1;
}

// float b2MixRestitution(float restitution1, float restitution2)
static int _bind_b2MixRestitution(lua_State *L) {
	if (!_lg_typecheck_b2MixRestitution(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float b2MixRestitution(float restitution1, float restitution2) function, expected prototype:\nfloat b2MixRestitution(float restitution1, float restitution2)\nClass arguments details:\n");
	}

	float restitution1=(float)lua_tonumber(L,1);
	float restitution2=(float)lua_tonumber(L,2);

	float lret = ::b2MixRestitution(restitution1, restitution2);
	lua_pushnumber(L,lret);

	return 1;
}

// void b2Distance(b2DistanceOutput * output, b2SimplexCache * cache, const b2DistanceInput * input)
static int _bind_b2Distance_overload_1(lua_State *L) {
	if (!_lg_typecheck_b2Distance_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void b2Distance(b2DistanceOutput * output, b2SimplexCache * cache, const b2DistanceInput * input) function, expected prototype:\nvoid b2Distance(b2DistanceOutput * output, b2SimplexCache * cache, const b2DistanceInput * input)\nClass arguments details:\narg 1 ID = 57509721\narg 2 ID = 65613863\narg 3 ID = 50940514\n");
	}

	b2DistanceOutput* output=(Luna< b2DistanceOutput >::check(L,1));
	b2SimplexCache* cache=(Luna< b2SimplexCache >::check(L,2));
	const b2DistanceInput* input=(Luna< b2DistanceInput >::check(L,3));

	::b2Distance(output, cache, input);

	return 0;
}

// float b2Distance(const b2Vec2 & a, const b2Vec2 & b)
static int _bind_b2Distance_overload_2(lua_State *L) {
	if (!_lg_typecheck_b2Distance_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float b2Distance(const b2Vec2 & a, const b2Vec2 & b) function, expected prototype:\nfloat b2Distance(const b2Vec2 & a, const b2Vec2 & b)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\n");
	}

	const b2Vec2* a_ptr=(Luna< b2Vec2 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2Distance function");
	}
	const b2Vec2 & a=*a_ptr;
	const b2Vec2* b_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in b2Distance function");
	}
	const b2Vec2 & b=*b_ptr;

	float lret = ::b2Distance(a, b);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for b2Distance
static int _bind_b2Distance(lua_State *L) {
	if (_lg_typecheck_b2Distance_overload_1(L)) return _bind_b2Distance_overload_1(L);
	if (_lg_typecheck_b2Distance_overload_2(L)) return _bind_b2Distance_overload_2(L);

	luaL_error(L, "error in function b2Distance, cannot match any of the overloads for function b2Distance:\n  b2Distance(b2DistanceOutput *, b2SimplexCache *, const b2DistanceInput *)\n  b2Distance(const b2Vec2 &, const b2Vec2 &)\n");
	return 0;
}

// bool b2IsValid(float x)
static int _bind_b2IsValid(lua_State *L) {
	if (!_lg_typecheck_b2IsValid(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool b2IsValid(float x) function, expected prototype:\nbool b2IsValid(float x)\nClass arguments details:\n");
	}

	float x=(float)lua_tonumber(L,1);

	bool lret = ::b2IsValid(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// float b2InvSqrt(float x)
static int _bind_b2InvSqrt(lua_State *L) {
	if (!_lg_typecheck_b2InvSqrt(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float b2InvSqrt(float x) function, expected prototype:\nfloat b2InvSqrt(float x)\nClass arguments details:\n");
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::b2InvSqrt(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float b2Dot(const b2Vec2 & a, const b2Vec2 & b)
static int _bind_b2Dot_overload_1(lua_State *L) {
	if (!_lg_typecheck_b2Dot_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float b2Dot(const b2Vec2 & a, const b2Vec2 & b) function, expected prototype:\nfloat b2Dot(const b2Vec2 & a, const b2Vec2 & b)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\n");
	}

	const b2Vec2* a_ptr=(Luna< b2Vec2 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2Dot function");
	}
	const b2Vec2 & a=*a_ptr;
	const b2Vec2* b_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in b2Dot function");
	}
	const b2Vec2 & b=*b_ptr;

	float lret = ::b2Dot(a, b);
	lua_pushnumber(L,lret);

	return 1;
}

// float b2Dot(const b2Vec3 & a, const b2Vec3 & b)
static int _bind_b2Dot_overload_2(lua_State *L) {
	if (!_lg_typecheck_b2Dot_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float b2Dot(const b2Vec3 & a, const b2Vec3 & b) function, expected prototype:\nfloat b2Dot(const b2Vec3 & a, const b2Vec3 & b)\nClass arguments details:\narg 1 ID = 54494887\narg 2 ID = 54494887\n");
	}

	const b2Vec3* a_ptr=(Luna< b2Vec3 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2Dot function");
	}
	const b2Vec3 & a=*a_ptr;
	const b2Vec3* b_ptr=(Luna< b2Vec3 >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in b2Dot function");
	}
	const b2Vec3 & b=*b_ptr;

	float lret = ::b2Dot(a, b);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for b2Dot
static int _bind_b2Dot(lua_State *L) {
	if (_lg_typecheck_b2Dot_overload_1(L)) return _bind_b2Dot_overload_1(L);
	if (_lg_typecheck_b2Dot_overload_2(L)) return _bind_b2Dot_overload_2(L);

	luaL_error(L, "error in function b2Dot, cannot match any of the overloads for function b2Dot:\n  b2Dot(const b2Vec2 &, const b2Vec2 &)\n  b2Dot(const b2Vec3 &, const b2Vec3 &)\n");
	return 0;
}

// float b2Cross(const b2Vec2 & a, const b2Vec2 & b)
static int _bind_b2Cross_overload_1(lua_State *L) {
	if (!_lg_typecheck_b2Cross_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float b2Cross(const b2Vec2 & a, const b2Vec2 & b) function, expected prototype:\nfloat b2Cross(const b2Vec2 & a, const b2Vec2 & b)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\n");
	}

	const b2Vec2* a_ptr=(Luna< b2Vec2 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2Cross function");
	}
	const b2Vec2 & a=*a_ptr;
	const b2Vec2* b_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in b2Cross function");
	}
	const b2Vec2 & b=*b_ptr;

	float lret = ::b2Cross(a, b);
	lua_pushnumber(L,lret);

	return 1;
}

// b2Vec2 b2Cross(const b2Vec2 & a, float s)
static int _bind_b2Cross_overload_2(lua_State *L) {
	if (!_lg_typecheck_b2Cross_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2Cross(const b2Vec2 & a, float s) function, expected prototype:\nb2Vec2 b2Cross(const b2Vec2 & a, float s)\nClass arguments details:\narg 1 ID = 54494886\n");
	}

	const b2Vec2* a_ptr=(Luna< b2Vec2 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2Cross function");
	}
	const b2Vec2 & a=*a_ptr;
	float s=(float)lua_tonumber(L,2);

	b2Vec2 stack_lret = ::b2Cross(a, s);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Vec2 b2Cross(float s, const b2Vec2 & a)
static int _bind_b2Cross_overload_3(lua_State *L) {
	if (!_lg_typecheck_b2Cross_overload_3(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2Cross(float s, const b2Vec2 & a) function, expected prototype:\nb2Vec2 b2Cross(float s, const b2Vec2 & a)\nClass arguments details:\narg 2 ID = 54494886\n");
	}

	float s=(float)lua_tonumber(L,1);
	const b2Vec2* a_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2Cross function");
	}
	const b2Vec2 & a=*a_ptr;

	b2Vec2 stack_lret = ::b2Cross(s, a);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Vec3 b2Cross(const b2Vec3 & a, const b2Vec3 & b)
static int _bind_b2Cross_overload_4(lua_State *L) {
	if (!_lg_typecheck_b2Cross_overload_4(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec3 b2Cross(const b2Vec3 & a, const b2Vec3 & b) function, expected prototype:\nb2Vec3 b2Cross(const b2Vec3 & a, const b2Vec3 & b)\nClass arguments details:\narg 1 ID = 54494887\narg 2 ID = 54494887\n");
	}

	const b2Vec3* a_ptr=(Luna< b2Vec3 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2Cross function");
	}
	const b2Vec3 & a=*a_ptr;
	const b2Vec3* b_ptr=(Luna< b2Vec3 >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in b2Cross function");
	}
	const b2Vec3 & b=*b_ptr;

	b2Vec3 stack_lret = ::b2Cross(a, b);
	b2Vec3* lret = new b2Vec3(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec3 >::push(L,lret,true);

	return 1;
}

// Overload binder for b2Cross
static int _bind_b2Cross(lua_State *L) {
	if (_lg_typecheck_b2Cross_overload_1(L)) return _bind_b2Cross_overload_1(L);
	if (_lg_typecheck_b2Cross_overload_2(L)) return _bind_b2Cross_overload_2(L);
	if (_lg_typecheck_b2Cross_overload_3(L)) return _bind_b2Cross_overload_3(L);
	if (_lg_typecheck_b2Cross_overload_4(L)) return _bind_b2Cross_overload_4(L);

	luaL_error(L, "error in function b2Cross, cannot match any of the overloads for function b2Cross:\n  b2Cross(const b2Vec2 &, const b2Vec2 &)\n  b2Cross(const b2Vec2 &, float)\n  b2Cross(float, const b2Vec2 &)\n  b2Cross(const b2Vec3 &, const b2Vec3 &)\n");
	return 0;
}

// b2Vec2 b2Mul(const b2Mat22 & A, const b2Vec2 & v)
static int _bind_b2Mul_overload_1(lua_State *L) {
	if (!_lg_typecheck_b2Mul_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2Mul(const b2Mat22 & A, const b2Vec2 & v) function, expected prototype:\nb2Vec2 b2Mul(const b2Mat22 & A, const b2Vec2 & v)\nClass arguments details:\narg 1 ID = 80926888\narg 2 ID = 54494886\n");
	}

	const b2Mat22* A_ptr=(Luna< b2Mat22 >::check(L,1));
	if( !A_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg A in b2Mul function");
	}
	const b2Mat22 & A=*A_ptr;
	const b2Vec2* v_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !v_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v in b2Mul function");
	}
	const b2Vec2 & v=*v_ptr;

	b2Vec2 stack_lret = ::b2Mul(A, v);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Mat22 b2Mul(const b2Mat22 & A, const b2Mat22 & B)
static int _bind_b2Mul_overload_2(lua_State *L) {
	if (!_lg_typecheck_b2Mul_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Mat22 b2Mul(const b2Mat22 & A, const b2Mat22 & B) function, expected prototype:\nb2Mat22 b2Mul(const b2Mat22 & A, const b2Mat22 & B)\nClass arguments details:\narg 1 ID = 80926888\narg 2 ID = 80926888\n");
	}

	const b2Mat22* A_ptr=(Luna< b2Mat22 >::check(L,1));
	if( !A_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg A in b2Mul function");
	}
	const b2Mat22 & A=*A_ptr;
	const b2Mat22* B_ptr=(Luna< b2Mat22 >::check(L,2));
	if( !B_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg B in b2Mul function");
	}
	const b2Mat22 & B=*B_ptr;

	b2Mat22 stack_lret = ::b2Mul(A, B);
	b2Mat22* lret = new b2Mat22(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Mat22 >::push(L,lret,true);

	return 1;
}

// b2Vec3 b2Mul(const b2Mat33 & A, const b2Vec3 & v)
static int _bind_b2Mul_overload_3(lua_State *L) {
	if (!_lg_typecheck_b2Mul_overload_3(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec3 b2Mul(const b2Mat33 & A, const b2Vec3 & v) function, expected prototype:\nb2Vec3 b2Mul(const b2Mat33 & A, const b2Vec3 & v)\nClass arguments details:\narg 1 ID = 80926920\narg 2 ID = 54494887\n");
	}

	const b2Mat33* A_ptr=(Luna< b2Mat33 >::check(L,1));
	if( !A_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg A in b2Mul function");
	}
	const b2Mat33 & A=*A_ptr;
	const b2Vec3* v_ptr=(Luna< b2Vec3 >::check(L,2));
	if( !v_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v in b2Mul function");
	}
	const b2Vec3 & v=*v_ptr;

	b2Vec3 stack_lret = ::b2Mul(A, v);
	b2Vec3* lret = new b2Vec3(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec3 >::push(L,lret,true);

	return 1;
}

// b2Rot b2Mul(const b2Rot & q, const b2Rot & r)
static int _bind_b2Mul_overload_4(lua_State *L) {
	if (!_lg_typecheck_b2Mul_overload_4(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Rot b2Mul(const b2Rot & q, const b2Rot & r) function, expected prototype:\nb2Rot b2Mul(const b2Rot & q, const b2Rot & r)\nClass arguments details:\narg 1 ID = 92076967\narg 2 ID = 92076967\n");
	}

	const b2Rot* q_ptr=(Luna< b2Rot >::check(L,1));
	if( !q_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q in b2Mul function");
	}
	const b2Rot & q=*q_ptr;
	const b2Rot* r_ptr=(Luna< b2Rot >::check(L,2));
	if( !r_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg r in b2Mul function");
	}
	const b2Rot & r=*r_ptr;

	b2Rot stack_lret = ::b2Mul(q, r);
	b2Rot* lret = new b2Rot(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Rot >::push(L,lret,true);

	return 1;
}

// b2Vec2 b2Mul(const b2Rot & q, const b2Vec2 & v)
static int _bind_b2Mul_overload_5(lua_State *L) {
	if (!_lg_typecheck_b2Mul_overload_5(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2Mul(const b2Rot & q, const b2Vec2 & v) function, expected prototype:\nb2Vec2 b2Mul(const b2Rot & q, const b2Vec2 & v)\nClass arguments details:\narg 1 ID = 92076967\narg 2 ID = 54494886\n");
	}

	const b2Rot* q_ptr=(Luna< b2Rot >::check(L,1));
	if( !q_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q in b2Mul function");
	}
	const b2Rot & q=*q_ptr;
	const b2Vec2* v_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !v_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v in b2Mul function");
	}
	const b2Vec2 & v=*v_ptr;

	b2Vec2 stack_lret = ::b2Mul(q, v);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Vec2 b2Mul(const b2Transform & T, const b2Vec2 & v)
static int _bind_b2Mul_overload_6(lua_State *L) {
	if (!_lg_typecheck_b2Mul_overload_6(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2Mul(const b2Transform & T, const b2Vec2 & v) function, expected prototype:\nb2Vec2 b2Mul(const b2Transform & T, const b2Vec2 & v)\nClass arguments details:\narg 1 ID = 44090970\narg 2 ID = 54494886\n");
	}

	const b2Transform* T_ptr=(Luna< b2Transform >::check(L,1));
	if( !T_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg T in b2Mul function");
	}
	const b2Transform & T=*T_ptr;
	const b2Vec2* v_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !v_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v in b2Mul function");
	}
	const b2Vec2 & v=*v_ptr;

	b2Vec2 stack_lret = ::b2Mul(T, v);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Transform b2Mul(const b2Transform & A, const b2Transform & B)
static int _bind_b2Mul_overload_7(lua_State *L) {
	if (!_lg_typecheck_b2Mul_overload_7(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Transform b2Mul(const b2Transform & A, const b2Transform & B) function, expected prototype:\nb2Transform b2Mul(const b2Transform & A, const b2Transform & B)\nClass arguments details:\narg 1 ID = 44090970\narg 2 ID = 44090970\n");
	}

	const b2Transform* A_ptr=(Luna< b2Transform >::check(L,1));
	if( !A_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg A in b2Mul function");
	}
	const b2Transform & A=*A_ptr;
	const b2Transform* B_ptr=(Luna< b2Transform >::check(L,2));
	if( !B_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg B in b2Mul function");
	}
	const b2Transform & B=*B_ptr;

	b2Transform stack_lret = ::b2Mul(A, B);
	b2Transform* lret = new b2Transform(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Transform >::push(L,lret,true);

	return 1;
}

// Overload binder for b2Mul
static int _bind_b2Mul(lua_State *L) {
	if (_lg_typecheck_b2Mul_overload_1(L)) return _bind_b2Mul_overload_1(L);
	if (_lg_typecheck_b2Mul_overload_2(L)) return _bind_b2Mul_overload_2(L);
	if (_lg_typecheck_b2Mul_overload_3(L)) return _bind_b2Mul_overload_3(L);
	if (_lg_typecheck_b2Mul_overload_4(L)) return _bind_b2Mul_overload_4(L);
	if (_lg_typecheck_b2Mul_overload_5(L)) return _bind_b2Mul_overload_5(L);
	if (_lg_typecheck_b2Mul_overload_6(L)) return _bind_b2Mul_overload_6(L);
	if (_lg_typecheck_b2Mul_overload_7(L)) return _bind_b2Mul_overload_7(L);

	luaL_error(L, "error in function b2Mul, cannot match any of the overloads for function b2Mul:\n  b2Mul(const b2Mat22 &, const b2Vec2 &)\n  b2Mul(const b2Mat22 &, const b2Mat22 &)\n  b2Mul(const b2Mat33 &, const b2Vec3 &)\n  b2Mul(const b2Rot &, const b2Rot &)\n  b2Mul(const b2Rot &, const b2Vec2 &)\n  b2Mul(const b2Transform &, const b2Vec2 &)\n  b2Mul(const b2Transform &, const b2Transform &)\n");
	return 0;
}

// b2Vec2 b2MulT(const b2Mat22 & A, const b2Vec2 & v)
static int _bind_b2MulT_overload_1(lua_State *L) {
	if (!_lg_typecheck_b2MulT_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2MulT(const b2Mat22 & A, const b2Vec2 & v) function, expected prototype:\nb2Vec2 b2MulT(const b2Mat22 & A, const b2Vec2 & v)\nClass arguments details:\narg 1 ID = 80926888\narg 2 ID = 54494886\n");
	}

	const b2Mat22* A_ptr=(Luna< b2Mat22 >::check(L,1));
	if( !A_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg A in b2MulT function");
	}
	const b2Mat22 & A=*A_ptr;
	const b2Vec2* v_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !v_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v in b2MulT function");
	}
	const b2Vec2 & v=*v_ptr;

	b2Vec2 stack_lret = ::b2MulT(A, v);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Mat22 b2MulT(const b2Mat22 & A, const b2Mat22 & B)
static int _bind_b2MulT_overload_2(lua_State *L) {
	if (!_lg_typecheck_b2MulT_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Mat22 b2MulT(const b2Mat22 & A, const b2Mat22 & B) function, expected prototype:\nb2Mat22 b2MulT(const b2Mat22 & A, const b2Mat22 & B)\nClass arguments details:\narg 1 ID = 80926888\narg 2 ID = 80926888\n");
	}

	const b2Mat22* A_ptr=(Luna< b2Mat22 >::check(L,1));
	if( !A_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg A in b2MulT function");
	}
	const b2Mat22 & A=*A_ptr;
	const b2Mat22* B_ptr=(Luna< b2Mat22 >::check(L,2));
	if( !B_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg B in b2MulT function");
	}
	const b2Mat22 & B=*B_ptr;

	b2Mat22 stack_lret = ::b2MulT(A, B);
	b2Mat22* lret = new b2Mat22(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Mat22 >::push(L,lret,true);

	return 1;
}

// b2Rot b2MulT(const b2Rot & q, const b2Rot & r)
static int _bind_b2MulT_overload_3(lua_State *L) {
	if (!_lg_typecheck_b2MulT_overload_3(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Rot b2MulT(const b2Rot & q, const b2Rot & r) function, expected prototype:\nb2Rot b2MulT(const b2Rot & q, const b2Rot & r)\nClass arguments details:\narg 1 ID = 92076967\narg 2 ID = 92076967\n");
	}

	const b2Rot* q_ptr=(Luna< b2Rot >::check(L,1));
	if( !q_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q in b2MulT function");
	}
	const b2Rot & q=*q_ptr;
	const b2Rot* r_ptr=(Luna< b2Rot >::check(L,2));
	if( !r_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg r in b2MulT function");
	}
	const b2Rot & r=*r_ptr;

	b2Rot stack_lret = ::b2MulT(q, r);
	b2Rot* lret = new b2Rot(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Rot >::push(L,lret,true);

	return 1;
}

// b2Vec2 b2MulT(const b2Rot & q, const b2Vec2 & v)
static int _bind_b2MulT_overload_4(lua_State *L) {
	if (!_lg_typecheck_b2MulT_overload_4(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2MulT(const b2Rot & q, const b2Vec2 & v) function, expected prototype:\nb2Vec2 b2MulT(const b2Rot & q, const b2Vec2 & v)\nClass arguments details:\narg 1 ID = 92076967\narg 2 ID = 54494886\n");
	}

	const b2Rot* q_ptr=(Luna< b2Rot >::check(L,1));
	if( !q_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg q in b2MulT function");
	}
	const b2Rot & q=*q_ptr;
	const b2Vec2* v_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !v_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v in b2MulT function");
	}
	const b2Vec2 & v=*v_ptr;

	b2Vec2 stack_lret = ::b2MulT(q, v);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Vec2 b2MulT(const b2Transform & T, const b2Vec2 & v)
static int _bind_b2MulT_overload_5(lua_State *L) {
	if (!_lg_typecheck_b2MulT_overload_5(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2MulT(const b2Transform & T, const b2Vec2 & v) function, expected prototype:\nb2Vec2 b2MulT(const b2Transform & T, const b2Vec2 & v)\nClass arguments details:\narg 1 ID = 44090970\narg 2 ID = 54494886\n");
	}

	const b2Transform* T_ptr=(Luna< b2Transform >::check(L,1));
	if( !T_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg T in b2MulT function");
	}
	const b2Transform & T=*T_ptr;
	const b2Vec2* v_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !v_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v in b2MulT function");
	}
	const b2Vec2 & v=*v_ptr;

	b2Vec2 stack_lret = ::b2MulT(T, v);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Transform b2MulT(const b2Transform & A, const b2Transform & B)
static int _bind_b2MulT_overload_6(lua_State *L) {
	if (!_lg_typecheck_b2MulT_overload_6(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Transform b2MulT(const b2Transform & A, const b2Transform & B) function, expected prototype:\nb2Transform b2MulT(const b2Transform & A, const b2Transform & B)\nClass arguments details:\narg 1 ID = 44090970\narg 2 ID = 44090970\n");
	}

	const b2Transform* A_ptr=(Luna< b2Transform >::check(L,1));
	if( !A_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg A in b2MulT function");
	}
	const b2Transform & A=*A_ptr;
	const b2Transform* B_ptr=(Luna< b2Transform >::check(L,2));
	if( !B_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg B in b2MulT function");
	}
	const b2Transform & B=*B_ptr;

	b2Transform stack_lret = ::b2MulT(A, B);
	b2Transform* lret = new b2Transform(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Transform >::push(L,lret,true);

	return 1;
}

// Overload binder for b2MulT
static int _bind_b2MulT(lua_State *L) {
	if (_lg_typecheck_b2MulT_overload_1(L)) return _bind_b2MulT_overload_1(L);
	if (_lg_typecheck_b2MulT_overload_2(L)) return _bind_b2MulT_overload_2(L);
	if (_lg_typecheck_b2MulT_overload_3(L)) return _bind_b2MulT_overload_3(L);
	if (_lg_typecheck_b2MulT_overload_4(L)) return _bind_b2MulT_overload_4(L);
	if (_lg_typecheck_b2MulT_overload_5(L)) return _bind_b2MulT_overload_5(L);
	if (_lg_typecheck_b2MulT_overload_6(L)) return _bind_b2MulT_overload_6(L);

	luaL_error(L, "error in function b2MulT, cannot match any of the overloads for function b2MulT:\n  b2MulT(const b2Mat22 &, const b2Vec2 &)\n  b2MulT(const b2Mat22 &, const b2Mat22 &)\n  b2MulT(const b2Rot &, const b2Rot &)\n  b2MulT(const b2Rot &, const b2Vec2 &)\n  b2MulT(const b2Transform &, const b2Vec2 &)\n  b2MulT(const b2Transform &, const b2Transform &)\n");
	return 0;
}

// float b2DistanceSquared(const b2Vec2 & a, const b2Vec2 & b)
static int _bind_b2DistanceSquared(lua_State *L) {
	if (!_lg_typecheck_b2DistanceSquared(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float b2DistanceSquared(const b2Vec2 & a, const b2Vec2 & b) function, expected prototype:\nfloat b2DistanceSquared(const b2Vec2 & a, const b2Vec2 & b)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\n");
	}

	const b2Vec2* a_ptr=(Luna< b2Vec2 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2DistanceSquared function");
	}
	const b2Vec2 & a=*a_ptr;
	const b2Vec2* b_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in b2DistanceSquared function");
	}
	const b2Vec2 & b=*b_ptr;

	float lret = ::b2DistanceSquared(a, b);
	lua_pushnumber(L,lret);

	return 1;
}

// b2Vec2 b2Mul22(const b2Mat33 & A, const b2Vec2 & v)
static int _bind_b2Mul22(lua_State *L) {
	if (!_lg_typecheck_b2Mul22(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2Mul22(const b2Mat33 & A, const b2Vec2 & v) function, expected prototype:\nb2Vec2 b2Mul22(const b2Mat33 & A, const b2Vec2 & v)\nClass arguments details:\narg 1 ID = 80926920\narg 2 ID = 54494886\n");
	}

	const b2Mat33* A_ptr=(Luna< b2Mat33 >::check(L,1));
	if( !A_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg A in b2Mul22 function");
	}
	const b2Mat33 & A=*A_ptr;
	const b2Vec2* v_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !v_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v in b2Mul22 function");
	}
	const b2Vec2 & v=*v_ptr;

	b2Vec2 stack_lret = ::b2Mul22(A, v);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Vec2 b2Abs(const b2Vec2 & a)
static int _bind_b2Abs_overload_1(lua_State *L) {
	if (!_lg_typecheck_b2Abs_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2Abs(const b2Vec2 & a) function, expected prototype:\nb2Vec2 b2Abs(const b2Vec2 & a)\nClass arguments details:\narg 1 ID = 54494886\n");
	}

	const b2Vec2* a_ptr=(Luna< b2Vec2 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2Abs function");
	}
	const b2Vec2 & a=*a_ptr;

	b2Vec2 stack_lret = ::b2Abs(a);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Mat22 b2Abs(const b2Mat22 & A)
static int _bind_b2Abs_overload_2(lua_State *L) {
	if (!_lg_typecheck_b2Abs_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Mat22 b2Abs(const b2Mat22 & A) function, expected prototype:\nb2Mat22 b2Abs(const b2Mat22 & A)\nClass arguments details:\narg 1 ID = 80926888\n");
	}

	const b2Mat22* A_ptr=(Luna< b2Mat22 >::check(L,1));
	if( !A_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg A in b2Abs function");
	}
	const b2Mat22 & A=*A_ptr;

	b2Mat22 stack_lret = ::b2Abs(A);
	b2Mat22* lret = new b2Mat22(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Mat22 >::push(L,lret,true);

	return 1;
}

// Overload binder for b2Abs
static int _bind_b2Abs(lua_State *L) {
	if (_lg_typecheck_b2Abs_overload_1(L)) return _bind_b2Abs_overload_1(L);
	if (_lg_typecheck_b2Abs_overload_2(L)) return _bind_b2Abs_overload_2(L);

	luaL_error(L, "error in function b2Abs, cannot match any of the overloads for function b2Abs:\n  b2Abs(const b2Vec2 &)\n  b2Abs(const b2Mat22 &)\n");
	return 0;
}

// b2Vec2 b2Min(const b2Vec2 & a, const b2Vec2 & b)
static int _bind_b2Min(lua_State *L) {
	if (!_lg_typecheck_b2Min(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2Min(const b2Vec2 & a, const b2Vec2 & b) function, expected prototype:\nb2Vec2 b2Min(const b2Vec2 & a, const b2Vec2 & b)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\n");
	}

	const b2Vec2* a_ptr=(Luna< b2Vec2 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2Min function");
	}
	const b2Vec2 & a=*a_ptr;
	const b2Vec2* b_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in b2Min function");
	}
	const b2Vec2 & b=*b_ptr;

	b2Vec2 stack_lret = ::b2Min(a, b);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Vec2 b2Max(const b2Vec2 & a, const b2Vec2 & b)
static int _bind_b2Max(lua_State *L) {
	if (!_lg_typecheck_b2Max(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2Max(const b2Vec2 & a, const b2Vec2 & b) function, expected prototype:\nb2Vec2 b2Max(const b2Vec2 & a, const b2Vec2 & b)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\n");
	}

	const b2Vec2* a_ptr=(Luna< b2Vec2 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2Max function");
	}
	const b2Vec2 & a=*a_ptr;
	const b2Vec2* b_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in b2Max function");
	}
	const b2Vec2 & b=*b_ptr;

	b2Vec2 stack_lret = ::b2Max(a, b);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// b2Vec2 b2Clamp(const b2Vec2 & a, const b2Vec2 & low, const b2Vec2 & high)
static int _bind_b2Clamp(lua_State *L) {
	if (!_lg_typecheck_b2Clamp(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in b2Vec2 b2Clamp(const b2Vec2 & a, const b2Vec2 & low, const b2Vec2 & high) function, expected prototype:\nb2Vec2 b2Clamp(const b2Vec2 & a, const b2Vec2 & low, const b2Vec2 & high)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\narg 3 ID = 54494886\n");
	}

	const b2Vec2* a_ptr=(Luna< b2Vec2 >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in b2Clamp function");
	}
	const b2Vec2 & a=*a_ptr;
	const b2Vec2* low_ptr=(Luna< b2Vec2 >::check(L,2));
	if( !low_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg low in b2Clamp function");
	}
	const b2Vec2 & low=*low_ptr;
	const b2Vec2* high_ptr=(Luna< b2Vec2 >::check(L,3));
	if( !high_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg high in b2Clamp function");
	}
	const b2Vec2 & high=*high_ptr;

	b2Vec2 stack_lret = ::b2Clamp(a, low, high);
	b2Vec2* lret = new b2Vec2(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< b2Vec2 >::push(L,lret,true);

	return 1;
}

// unsigned int b2NextPowerOfTwo(unsigned int x)
static int _bind_b2NextPowerOfTwo(lua_State *L) {
	if (!_lg_typecheck_b2NextPowerOfTwo(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned int b2NextPowerOfTwo(unsigned int x) function, expected prototype:\nunsigned int b2NextPowerOfTwo(unsigned int x)\nClass arguments details:\n");
	}

	unsigned int x=(unsigned int)lua_tointeger(L,1);

	unsigned int lret = ::b2NextPowerOfTwo(x);
	lua_pushnumber(L,lret);

	return 1;
}

// bool b2IsPowerOfTwo(unsigned int x)
static int _bind_b2IsPowerOfTwo(lua_State *L) {
	if (!_lg_typecheck_b2IsPowerOfTwo(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool b2IsPowerOfTwo(unsigned int x) function, expected prototype:\nbool b2IsPowerOfTwo(unsigned int x)\nClass arguments details:\n");
	}

	unsigned int x=(unsigned int)lua_tointeger(L,1);

	bool lret = ::b2IsPowerOfTwo(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void * b2Alloc(signed int size)
static int _bind_b2Alloc(lua_State *L) {
	if (!_lg_typecheck_b2Alloc(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void * b2Alloc(signed int size) function, expected prototype:\nvoid * b2Alloc(signed int size)\nClass arguments details:\n");
	}

	signed int size=(signed int)lua_tointeger(L,1);

	void * lret = ::b2Alloc(size);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void b2Free(void * mem)
static int _bind_b2Free(lua_State *L) {
	if (!_lg_typecheck_b2Free(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void b2Free(void * mem) function, expected prototype:\nvoid b2Free(void * mem)\nClass arguments details:\n");
	}

	void* mem=(Luna< void >::check(L,1));

	::b2Free(mem);

	return 0;
}

// void b2TimeOfImpact(b2TOIOutput * output, const b2TOIInput * input)
static int _bind_b2TimeOfImpact(lua_State *L) {
	if (!_lg_typecheck_b2TimeOfImpact(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void b2TimeOfImpact(b2TOIOutput * output, const b2TOIInput * input) function, expected prototype:\nvoid b2TimeOfImpact(b2TOIOutput * output, const b2TOIInput * input)\nClass arguments details:\narg 1 ID = 17329370\narg 2 ID = 98031472\n");
	}

	b2TOIOutput* output=(Luna< b2TOIOutput >::check(L,1));
	const b2TOIInput* input=(Luna< b2TOIInput >::check(L,2));

	::b2TimeOfImpact(output, input);

	return 0;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"box2d");
	lua_pushcfunction(L, _bind_b2PairLessThan); lua_setfield(L,-2,"b2PairLessThan");
	lua_pushcfunction(L, _bind_b2CollideCircles); lua_setfield(L,-2,"b2CollideCircles");
	lua_pushcfunction(L, _bind_b2CollidePolygonAndCircle); lua_setfield(L,-2,"b2CollidePolygonAndCircle");
	lua_pushcfunction(L, _bind_b2CollidePolygons); lua_setfield(L,-2,"b2CollidePolygons");
	lua_pushcfunction(L, _bind_b2CollideEdgeAndCircle); lua_setfield(L,-2,"b2CollideEdgeAndCircle");
	lua_pushcfunction(L, _bind_b2CollideEdgeAndPolygon); lua_setfield(L,-2,"b2CollideEdgeAndPolygon");
	lua_pushcfunction(L, _bind_b2TestOverlap); lua_setfield(L,-2,"b2TestOverlap");
	lua_pushcfunction(L, _bind_b2MixFriction); lua_setfield(L,-2,"b2MixFriction");
	lua_pushcfunction(L, _bind_b2MixRestitution); lua_setfield(L,-2,"b2MixRestitution");
	lua_pushcfunction(L, _bind_b2Distance); lua_setfield(L,-2,"b2Distance");
	lua_pushcfunction(L, _bind_b2IsValid); lua_setfield(L,-2,"b2IsValid");
	lua_pushcfunction(L, _bind_b2InvSqrt); lua_setfield(L,-2,"b2InvSqrt");
	lua_pushcfunction(L, _bind_b2Dot); lua_setfield(L,-2,"b2Dot");
	lua_pushcfunction(L, _bind_b2Cross); lua_setfield(L,-2,"b2Cross");
	lua_pushcfunction(L, _bind_b2Mul); lua_setfield(L,-2,"b2Mul");
	lua_pushcfunction(L, _bind_b2MulT); lua_setfield(L,-2,"b2MulT");
	lua_pushcfunction(L, _bind_b2DistanceSquared); lua_setfield(L,-2,"b2DistanceSquared");
	lua_pushcfunction(L, _bind_b2Mul22); lua_setfield(L,-2,"b2Mul22");
	lua_pushcfunction(L, _bind_b2Abs); lua_setfield(L,-2,"b2Abs");
	lua_pushcfunction(L, _bind_b2Min); lua_setfield(L,-2,"b2Min");
	lua_pushcfunction(L, _bind_b2Max); lua_setfield(L,-2,"b2Max");
	lua_pushcfunction(L, _bind_b2Clamp); lua_setfield(L,-2,"b2Clamp");
	lua_pushcfunction(L, _bind_b2NextPowerOfTwo); lua_setfield(L,-2,"b2NextPowerOfTwo");
	lua_pushcfunction(L, _bind_b2IsPowerOfTwo); lua_setfield(L,-2,"b2IsPowerOfTwo");
	lua_pushcfunction(L, _bind_b2Alloc); lua_setfield(L,-2,"b2Alloc");
	lua_pushcfunction(L, _bind_b2Free); lua_setfield(L,-2,"b2Free");
	lua_pushcfunction(L, _bind_b2TimeOfImpact); lua_setfield(L,-2,"b2TimeOfImpact");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

