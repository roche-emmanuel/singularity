#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<b2AABB,dstType> {
	static inline dstType* cast(b2AABB* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2BlockAllocator,dstType> {
	static inline dstType* cast(b2BlockAllocator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Body,dstType> {
	static inline dstType* cast(b2Body* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2BodyDef,dstType> {
	static inline dstType* cast(b2BodyDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2BroadPhase,dstType> {
	static inline dstType* cast(b2BroadPhase* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2ClipVertex,dstType> {
	static inline dstType* cast(b2ClipVertex* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Color,dstType> {
	static inline dstType* cast(b2Color* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2ContactEdge,dstType> {
	static inline dstType* cast(b2ContactEdge* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2ContactFeature,dstType> {
	static inline dstType* cast(b2ContactFeature* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2ContactImpulse,dstType> {
	static inline dstType* cast(b2ContactImpulse* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2ContactManager,dstType> {
	static inline dstType* cast(b2ContactManager* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2ContactPositionConstraint,dstType> {
	static inline dstType* cast(b2ContactPositionConstraint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2ContactRegister,dstType> {
	static inline dstType* cast(b2ContactRegister* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2ContactSolver,dstType> {
	static inline dstType* cast(b2ContactSolver* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2ContactSolverDef,dstType> {
	static inline dstType* cast(b2ContactSolverDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2ContactVelocityConstraint,dstType> {
	static inline dstType* cast(b2ContactVelocityConstraint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2DistanceInput,dstType> {
	static inline dstType* cast(b2DistanceInput* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2JointDef,dstType> {
	static inline dstType* cast(b2JointDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2DistanceJointDef,dstType> {
	static inline dstType* cast(b2DistanceJointDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2DistanceOutput,dstType> {
	static inline dstType* cast(b2DistanceOutput* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2DistanceProxy,dstType> {
	static inline dstType* cast(b2DistanceProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2DynamicTree,dstType> {
	static inline dstType* cast(b2DynamicTree* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Filter,dstType> {
	static inline dstType* cast(b2Filter* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Fixture,dstType> {
	static inline dstType* cast(b2Fixture* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2FixtureDef,dstType> {
	static inline dstType* cast(b2FixtureDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2FixtureProxy,dstType> {
	static inline dstType* cast(b2FixtureProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2FrictionJointDef,dstType> {
	static inline dstType* cast(b2FrictionJointDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2GearJointDef,dstType> {
	static inline dstType* cast(b2GearJointDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Island,dstType> {
	static inline dstType* cast(b2Island* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Jacobian,dstType> {
	static inline dstType* cast(b2Jacobian* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2JointEdge,dstType> {
	static inline dstType* cast(b2JointEdge* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Manifold,dstType> {
	static inline dstType* cast(b2Manifold* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2ManifoldPoint,dstType> {
	static inline dstType* cast(b2ManifoldPoint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2MassData,dstType> {
	static inline dstType* cast(b2MassData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Mat22,dstType> {
	static inline dstType* cast(b2Mat22* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Mat33,dstType> {
	static inline dstType* cast(b2Mat33* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2MouseJointDef,dstType> {
	static inline dstType* cast(b2MouseJointDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Pair,dstType> {
	static inline dstType* cast(b2Pair* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Position,dstType> {
	static inline dstType* cast(b2Position* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2PrismaticJointDef,dstType> {
	static inline dstType* cast(b2PrismaticJointDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Profile,dstType> {
	static inline dstType* cast(b2Profile* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2PulleyJointDef,dstType> {
	static inline dstType* cast(b2PulleyJointDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2RayCastInput,dstType> {
	static inline dstType* cast(b2RayCastInput* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2RayCastOutput,dstType> {
	static inline dstType* cast(b2RayCastOutput* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2RevoluteJointDef,dstType> {
	static inline dstType* cast(b2RevoluteJointDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Rope,dstType> {
	static inline dstType* cast(b2Rope* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2RopeDef,dstType> {
	static inline dstType* cast(b2RopeDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2RopeJointDef,dstType> {
	static inline dstType* cast(b2RopeJointDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Rot,dstType> {
	static inline dstType* cast(b2Rot* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2SimplexCache,dstType> {
	static inline dstType* cast(b2SimplexCache* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2SolverData,dstType> {
	static inline dstType* cast(b2SolverData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2StackAllocator,dstType> {
	static inline dstType* cast(b2StackAllocator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2StackEntry,dstType> {
	static inline dstType* cast(b2StackEntry* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Sweep,dstType> {
	static inline dstType* cast(b2Sweep* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Timer,dstType> {
	static inline dstType* cast(b2Timer* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2TimeStep,dstType> {
	static inline dstType* cast(b2TimeStep* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2TOIInput,dstType> {
	static inline dstType* cast(b2TOIInput* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2TOIOutput,dstType> {
	static inline dstType* cast(b2TOIOutput* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Transform,dstType> {
	static inline dstType* cast(b2Transform* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2TreeNode,dstType> {
	static inline dstType* cast(b2TreeNode* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Vec2,dstType> {
	static inline dstType* cast(b2Vec2* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Vec3,dstType> {
	static inline dstType* cast(b2Vec3* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Velocity,dstType> {
	static inline dstType* cast(b2Velocity* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2VelocityConstraintPoint,dstType> {
	static inline dstType* cast(b2VelocityConstraintPoint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2Version,dstType> {
	static inline dstType* cast(b2Version* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2WeldJointDef,dstType> {
	static inline dstType* cast(b2WeldJointDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2WheelJointDef,dstType> {
	static inline dstType* cast(b2WheelJointDef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2World,dstType> {
	static inline dstType* cast(b2World* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<b2WorldManifold,dstType> {
	static inline dstType* cast(b2WorldManifold* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgGA::GUIEventHandler,dstType> {
	static inline dstType* cast(osgGA::GUIEventHandler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<Box2DUpdater,dstType> {
	static inline dstType* cast(Box2DUpdater* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec2f,dstType> {
	static inline dstType* cast(osg::Vec2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

