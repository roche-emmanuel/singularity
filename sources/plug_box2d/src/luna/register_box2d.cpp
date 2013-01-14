#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_box2d(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"luna");
	Luna< void >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"box2d");
	Luna< b2AABB >::Register(L);
	Luna< b2BlockAllocator >::Register(L);
	Luna< b2Body >::Register(L);
	Luna< b2BodyDef >::Register(L);
	Luna< b2BroadPhase >::Register(L);
	Luna< b2Contact >::Register(L);
	Luna< b2ChainAndCircleContact >::Register(L);
	Luna< b2ChainAndPolygonContact >::Register(L);
	Luna< b2Shape >::Register(L);
	Luna< b2ChainShape >::Register(L);
	Luna< b2CircleContact >::Register(L);
	Luna< b2CircleShape >::Register(L);
	Luna< b2ClipVertex >::Register(L);
	Luna< b2Color >::Register(L);
	Luna< b2ContactEdge >::Register(L);
	Luna< b2ContactFeature >::Register(L);
	Luna< b2ContactFilter >::Register(L);
	Luna< b2ContactImpulse >::Register(L);
	Luna< b2ContactListener >::Register(L);
	Luna< b2ContactManager >::Register(L);
	Luna< b2ContactPositionConstraint >::Register(L);
	Luna< b2ContactRegister >::Register(L);
	Luna< b2ContactSolver >::Register(L);
	Luna< b2ContactSolverDef >::Register(L);
	Luna< b2ContactVelocityConstraint >::Register(L);
	Luna< b2DestructionListener >::Register(L);
	Luna< b2DistanceInput >::Register(L);
	Luna< b2Joint >::Register(L);
	Luna< b2DistanceJoint >::Register(L);
	Luna< b2JointDef >::Register(L);
	Luna< b2DistanceJointDef >::Register(L);
	Luna< b2DistanceOutput >::Register(L);
	Luna< b2DistanceProxy >::Register(L);
	Luna< b2Draw >::Register(L);
	Luna< b2DynamicTree >::Register(L);
	Luna< b2EdgeAndCircleContact >::Register(L);
	Luna< b2EdgeAndPolygonContact >::Register(L);
	Luna< b2EdgeShape >::Register(L);
	Luna< b2Filter >::Register(L);
	Luna< b2Fixture >::Register(L);
	Luna< b2FixtureDef >::Register(L);
	Luna< b2FixtureProxy >::Register(L);
	Luna< b2FrictionJoint >::Register(L);
	Luna< b2FrictionJointDef >::Register(L);
	Luna< b2GearJoint >::Register(L);
	Luna< b2GearJointDef >::Register(L);
	Luna< b2Island >::Register(L);
	Luna< b2Jacobian >::Register(L);
	Luna< b2JointEdge >::Register(L);
	Luna< b2Manifold >::Register(L);
	Luna< b2ManifoldPoint >::Register(L);
	Luna< b2MassData >::Register(L);
	Luna< b2Mat22 >::Register(L);
	Luna< b2Mat33 >::Register(L);
	Luna< b2MouseJoint >::Register(L);
	Luna< b2MouseJointDef >::Register(L);
	Luna< b2Pair >::Register(L);
	Luna< b2PolygonAndCircleContact >::Register(L);
	Luna< b2PolygonContact >::Register(L);
	Luna< b2PolygonShape >::Register(L);
	Luna< b2Position >::Register(L);
	Luna< b2PrismaticJoint >::Register(L);
	Luna< b2PrismaticJointDef >::Register(L);
	Luna< b2Profile >::Register(L);
	Luna< b2PulleyJoint >::Register(L);
	Luna< b2PulleyJointDef >::Register(L);
	Luna< b2QueryCallback >::Register(L);
	Luna< b2RayCastCallback >::Register(L);
	Luna< b2RayCastInput >::Register(L);
	Luna< b2RayCastOutput >::Register(L);
	Luna< b2RevoluteJoint >::Register(L);
	Luna< b2RevoluteJointDef >::Register(L);
	Luna< b2Rope >::Register(L);
	Luna< b2RopeDef >::Register(L);
	Luna< b2RopeJoint >::Register(L);
	Luna< b2RopeJointDef >::Register(L);
	Luna< b2Rot >::Register(L);
	Luna< b2SimplexCache >::Register(L);
	Luna< b2SolverData >::Register(L);
	Luna< b2StackAllocator >::Register(L);
	Luna< b2StackEntry >::Register(L);
	Luna< b2Sweep >::Register(L);
	Luna< b2Timer >::Register(L);
	Luna< b2TimeStep >::Register(L);
	Luna< b2TOIInput >::Register(L);
	Luna< b2TOIOutput >::Register(L);
	Luna< b2Transform >::Register(L);
	Luna< b2TreeNode >::Register(L);
	Luna< b2Vec2 >::Register(L);
	Luna< b2Vec3 >::Register(L);
	Luna< b2Velocity >::Register(L);
	Luna< b2VelocityConstraintPoint >::Register(L);
	Luna< b2Version >::Register(L);
	Luna< b2WeldJoint >::Register(L);
	Luna< b2WeldJointDef >::Register(L);
	Luna< b2WheelJoint >::Register(L);
	Luna< b2WheelJointDef >::Register(L);
	Luna< b2World >::Register(L);
	Luna< b2WorldManifold >::Register(L);
	Luna< Box2DUpdater >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"box2d");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"box2d");

	luna_pushModule(L,"box2d");
	return 1;
}

#ifdef __cplusplus
}
#endif

