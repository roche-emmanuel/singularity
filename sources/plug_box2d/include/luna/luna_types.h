#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <Box2D/Collision/b2Collision.h>
#include <Box2D/Common/b2BlockAllocator.h>
#include <Box2D/Dynamics/b2Body.h>
#include <Box2D/Collision/b2BroadPhase.h>
#include <Box2D/Dynamics/Contacts/b2Contact.h>
#include <Box2D/Dynamics/Contacts/b2ChainAndCircleContact.h>
#include <Box2D/Dynamics/Contacts/b2ChainAndPolygonContact.h>
#include <Box2D/Collision/Shapes/b2Shape.h>
#include <Box2D/Collision/Shapes/b2ChainShape.h>
#include <Box2D/Dynamics/Contacts/b2CircleContact.h>
#include <Box2D/Collision/Shapes/b2CircleShape.h>
#include <Box2D/Common/b2Draw.h>
#include <Box2D/Dynamics/b2WorldCallbacks.h>
#include <Box2D/Dynamics/b2ContactManager.h>
#include <Box2D/Dynamics/Contacts/b2ContactSolver.h>
#include <Box2D/Collision/b2Distance.h>
#include <Box2D/Dynamics/Joints/b2Joint.h>
#include <Box2D/Dynamics/Joints/b2DistanceJoint.h>
#include <Box2D/Collision/b2DynamicTree.h>
#include <Box2D/Dynamics/Contacts/b2EdgeAndCircleContact.h>
#include <Box2D/Dynamics/Contacts/b2EdgeAndPolygonContact.h>
#include <Box2D/Collision/Shapes/b2EdgeShape.h>
#include <Box2D/Dynamics/b2Fixture.h>
#include <Box2D/Dynamics/Joints/b2FrictionJoint.h>
#include <Box2D/Dynamics/Joints/b2GearJoint.h>
#include <Box2D/Dynamics/b2Island.h>
#include <Box2D/Common/b2Math.h>
#include <Box2D/Dynamics/Joints/b2MouseJoint.h>
#include <Box2D/Dynamics/Contacts/b2PolygonAndCircleContact.h>
#include <Box2D/Dynamics/Contacts/b2PolygonContact.h>
#include <Box2D/Collision/Shapes/b2PolygonShape.h>
#include <Box2D/Dynamics/b2TimeStep.h>
#include <Box2D/Dynamics/Joints/b2PrismaticJoint.h>
#include <Box2D/Dynamics/Joints/b2PulleyJoint.h>
#include <Box2D/Dynamics/Joints/b2RevoluteJoint.h>
#include <Box2D/Rope/b2Rope.h>
#include <Box2D/Dynamics/Joints/b2RopeJoint.h>
#include <Box2D/Common/b2StackAllocator.h>
#include <Box2D/Common/b2Timer.h>
#include <Box2D/Collision/b2TimeOfImpact.h>
#include <Box2D/Common/b2Settings.h>
#include <Box2D/Dynamics/Joints/b2WeldJoint.h>
#include <Box2D/Dynamics/Joints/b2WheelJoint.h>
#include <Box2D/Dynamics/b2World.h>
#include <Box2DUpdater.h>

// Class: b2AABB
template<>
class LunaTraits< b2AABB > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2AABB* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2AABB* obj);
	typedef b2AABB parent_t;
	typedef b2AABB base_t;
	static luna_ConverterType converters[];
};

// Class: b2BlockAllocator
template<>
class LunaTraits< b2BlockAllocator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2BlockAllocator* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2BlockAllocator* obj);
	typedef b2BlockAllocator parent_t;
	typedef b2BlockAllocator base_t;
	static luna_ConverterType converters[];
};

// Class: b2Body
template<>
class LunaTraits< b2Body > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Body* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Body* obj);
	typedef b2Body parent_t;
	typedef b2Body base_t;
	static luna_ConverterType converters[];
};

// Class: b2BodyDef
template<>
class LunaTraits< b2BodyDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2BodyDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2BodyDef* obj);
	typedef b2BodyDef parent_t;
	typedef b2BodyDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2BroadPhase
template<>
class LunaTraits< b2BroadPhase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2BroadPhase* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2BroadPhase* obj);
	typedef b2BroadPhase parent_t;
	typedef b2BroadPhase base_t;
	static luna_ConverterType converters[];
};

// Class: b2Contact
template<>
class LunaTraits< b2Contact > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Contact* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Contact* obj);
	typedef b2Contact parent_t;
	typedef b2Contact base_t;
	static luna_ConverterType converters[];
};

// Class: b2ChainAndCircleContact
template<>
class LunaTraits< b2ChainAndCircleContact > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ChainAndCircleContact* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ChainAndCircleContact* obj);
	typedef b2Contact parent_t;
	typedef b2ChainAndCircleContact base_t;
	static luna_ConverterType converters[];
};

// Class: b2ChainAndPolygonContact
template<>
class LunaTraits< b2ChainAndPolygonContact > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ChainAndPolygonContact* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ChainAndPolygonContact* obj);
	typedef b2Contact parent_t;
	typedef b2ChainAndPolygonContact base_t;
	static luna_ConverterType converters[];
};

// Class: b2Shape
template<>
class LunaTraits< b2Shape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Shape* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Shape* obj);
	typedef b2Shape parent_t;
	typedef b2Shape base_t;
	static luna_ConverterType converters[];
};

// Class: b2ChainShape
template<>
class LunaTraits< b2ChainShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ChainShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ChainShape* obj);
	typedef b2Shape parent_t;
	typedef b2ChainShape base_t;
	static luna_ConverterType converters[];
};

// Class: b2CircleContact
template<>
class LunaTraits< b2CircleContact > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2CircleContact* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2CircleContact* obj);
	typedef b2Contact parent_t;
	typedef b2CircleContact base_t;
	static luna_ConverterType converters[];
};

// Class: b2CircleShape
template<>
class LunaTraits< b2CircleShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2CircleShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2CircleShape* obj);
	typedef b2Shape parent_t;
	typedef b2CircleShape base_t;
	static luna_ConverterType converters[];
};

// Class: b2ClipVertex
template<>
class LunaTraits< b2ClipVertex > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ClipVertex* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ClipVertex* obj);
	typedef b2ClipVertex parent_t;
	typedef b2ClipVertex base_t;
	static luna_ConverterType converters[];
};

// Class: b2Color
template<>
class LunaTraits< b2Color > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Color* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Color* obj);
	typedef b2Color parent_t;
	typedef b2Color base_t;
	static luna_ConverterType converters[];
};

// Class: b2ContactEdge
template<>
class LunaTraits< b2ContactEdge > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ContactEdge* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ContactEdge* obj);
	typedef b2ContactEdge parent_t;
	typedef b2ContactEdge base_t;
	static luna_ConverterType converters[];
};

// Class: b2ContactFeature
template<>
class LunaTraits< b2ContactFeature > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ContactFeature* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ContactFeature* obj);
	typedef b2ContactFeature parent_t;
	typedef b2ContactFeature base_t;
	static luna_ConverterType converters[];
};

// Class: b2ContactFilter
template<>
class LunaTraits< b2ContactFilter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ContactFilter* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ContactFilter* obj);
	typedef b2ContactFilter parent_t;
	typedef b2ContactFilter base_t;
	static luna_ConverterType converters[];
};

// Class: b2ContactImpulse
template<>
class LunaTraits< b2ContactImpulse > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ContactImpulse* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ContactImpulse* obj);
	typedef b2ContactImpulse parent_t;
	typedef b2ContactImpulse base_t;
	static luna_ConverterType converters[];
};

// Class: b2ContactListener
template<>
class LunaTraits< b2ContactListener > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ContactListener* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ContactListener* obj);
	typedef b2ContactListener parent_t;
	typedef b2ContactListener base_t;
	static luna_ConverterType converters[];
};

// Class: b2ContactManager
template<>
class LunaTraits< b2ContactManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ContactManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ContactManager* obj);
	typedef b2ContactManager parent_t;
	typedef b2ContactManager base_t;
	static luna_ConverterType converters[];
};

// Class: b2ContactPositionConstraint
template<>
class LunaTraits< b2ContactPositionConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ContactPositionConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ContactPositionConstraint* obj);
	typedef b2ContactPositionConstraint parent_t;
	typedef b2ContactPositionConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: b2ContactRegister
template<>
class LunaTraits< b2ContactRegister > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ContactRegister* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ContactRegister* obj);
	typedef b2ContactRegister parent_t;
	typedef b2ContactRegister base_t;
	static luna_ConverterType converters[];
};

// Class: b2ContactSolver
template<>
class LunaTraits< b2ContactSolver > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ContactSolver* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ContactSolver* obj);
	typedef b2ContactSolver parent_t;
	typedef b2ContactSolver base_t;
	static luna_ConverterType converters[];
};

// Class: b2ContactSolverDef
template<>
class LunaTraits< b2ContactSolverDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ContactSolverDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ContactSolverDef* obj);
	typedef b2ContactSolverDef parent_t;
	typedef b2ContactSolverDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2ContactVelocityConstraint
template<>
class LunaTraits< b2ContactVelocityConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ContactVelocityConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ContactVelocityConstraint* obj);
	typedef b2ContactVelocityConstraint parent_t;
	typedef b2ContactVelocityConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: b2DestructionListener
template<>
class LunaTraits< b2DestructionListener > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2DestructionListener* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2DestructionListener* obj);
	typedef b2DestructionListener parent_t;
	typedef b2DestructionListener base_t;
	static luna_ConverterType converters[];
};

// Class: b2DistanceInput
template<>
class LunaTraits< b2DistanceInput > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2DistanceInput* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2DistanceInput* obj);
	typedef b2DistanceInput parent_t;
	typedef b2DistanceInput base_t;
	static luna_ConverterType converters[];
};

// Class: b2Joint
template<>
class LunaTraits< b2Joint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Joint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Joint* obj);
	typedef b2Joint parent_t;
	typedef b2Joint base_t;
	static luna_ConverterType converters[];
};

// Class: b2DistanceJoint
template<>
class LunaTraits< b2DistanceJoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2DistanceJoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2DistanceJoint* obj);
	typedef b2Joint parent_t;
	typedef b2DistanceJoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2JointDef
template<>
class LunaTraits< b2JointDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2JointDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2JointDef* obj);
	typedef b2JointDef parent_t;
	typedef b2JointDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2DistanceJointDef
template<>
class LunaTraits< b2DistanceJointDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2DistanceJointDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2DistanceJointDef* obj);
	typedef b2JointDef parent_t;
	typedef b2DistanceJointDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2DistanceOutput
template<>
class LunaTraits< b2DistanceOutput > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2DistanceOutput* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2DistanceOutput* obj);
	typedef b2DistanceOutput parent_t;
	typedef b2DistanceOutput base_t;
	static luna_ConverterType converters[];
};

// Class: b2DistanceProxy
template<>
class LunaTraits< b2DistanceProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2DistanceProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2DistanceProxy* obj);
	typedef b2DistanceProxy parent_t;
	typedef b2DistanceProxy base_t;
	static luna_ConverterType converters[];
};

// Class: b2Draw
template<>
class LunaTraits< b2Draw > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Draw* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Draw* obj);
	typedef b2Draw parent_t;
	typedef b2Draw base_t;
	static luna_ConverterType converters[];
};

// Class: b2DynamicTree
template<>
class LunaTraits< b2DynamicTree > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2DynamicTree* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2DynamicTree* obj);
	typedef b2DynamicTree parent_t;
	typedef b2DynamicTree base_t;
	static luna_ConverterType converters[];
};

// Class: b2EdgeAndCircleContact
template<>
class LunaTraits< b2EdgeAndCircleContact > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2EdgeAndCircleContact* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2EdgeAndCircleContact* obj);
	typedef b2Contact parent_t;
	typedef b2EdgeAndCircleContact base_t;
	static luna_ConverterType converters[];
};

// Class: b2EdgeAndPolygonContact
template<>
class LunaTraits< b2EdgeAndPolygonContact > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2EdgeAndPolygonContact* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2EdgeAndPolygonContact* obj);
	typedef b2Contact parent_t;
	typedef b2EdgeAndPolygonContact base_t;
	static luna_ConverterType converters[];
};

// Class: b2EdgeShape
template<>
class LunaTraits< b2EdgeShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2EdgeShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2EdgeShape* obj);
	typedef b2Shape parent_t;
	typedef b2EdgeShape base_t;
	static luna_ConverterType converters[];
};

// Class: b2Filter
template<>
class LunaTraits< b2Filter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Filter* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Filter* obj);
	typedef b2Filter parent_t;
	typedef b2Filter base_t;
	static luna_ConverterType converters[];
};

// Class: b2Fixture
template<>
class LunaTraits< b2Fixture > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Fixture* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Fixture* obj);
	typedef b2Fixture parent_t;
	typedef b2Fixture base_t;
	static luna_ConverterType converters[];
};

// Class: b2FixtureDef
template<>
class LunaTraits< b2FixtureDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2FixtureDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2FixtureDef* obj);
	typedef b2FixtureDef parent_t;
	typedef b2FixtureDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2FixtureProxy
template<>
class LunaTraits< b2FixtureProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2FixtureProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2FixtureProxy* obj);
	typedef b2FixtureProxy parent_t;
	typedef b2FixtureProxy base_t;
	static luna_ConverterType converters[];
};

// Class: b2FrictionJoint
template<>
class LunaTraits< b2FrictionJoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2FrictionJoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2FrictionJoint* obj);
	typedef b2Joint parent_t;
	typedef b2FrictionJoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2FrictionJointDef
template<>
class LunaTraits< b2FrictionJointDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2FrictionJointDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2FrictionJointDef* obj);
	typedef b2JointDef parent_t;
	typedef b2FrictionJointDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2GearJoint
template<>
class LunaTraits< b2GearJoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2GearJoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2GearJoint* obj);
	typedef b2Joint parent_t;
	typedef b2GearJoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2GearJointDef
template<>
class LunaTraits< b2GearJointDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2GearJointDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2GearJointDef* obj);
	typedef b2JointDef parent_t;
	typedef b2GearJointDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2Island
template<>
class LunaTraits< b2Island > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Island* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Island* obj);
	typedef b2Island parent_t;
	typedef b2Island base_t;
	static luna_ConverterType converters[];
};

// Class: b2Jacobian
template<>
class LunaTraits< b2Jacobian > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Jacobian* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Jacobian* obj);
	typedef b2Jacobian parent_t;
	typedef b2Jacobian base_t;
	static luna_ConverterType converters[];
};

// Class: b2JointEdge
template<>
class LunaTraits< b2JointEdge > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2JointEdge* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2JointEdge* obj);
	typedef b2JointEdge parent_t;
	typedef b2JointEdge base_t;
	static luna_ConverterType converters[];
};

// Class: b2Manifold
template<>
class LunaTraits< b2Manifold > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Manifold* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Manifold* obj);
	typedef b2Manifold parent_t;
	typedef b2Manifold base_t;
	static luna_ConverterType converters[];
};

// Class: b2ManifoldPoint
template<>
class LunaTraits< b2ManifoldPoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2ManifoldPoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2ManifoldPoint* obj);
	typedef b2ManifoldPoint parent_t;
	typedef b2ManifoldPoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2MassData
template<>
class LunaTraits< b2MassData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2MassData* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2MassData* obj);
	typedef b2MassData parent_t;
	typedef b2MassData base_t;
	static luna_ConverterType converters[];
};

// Class: b2Mat22
template<>
class LunaTraits< b2Mat22 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Mat22* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Mat22* obj);
	typedef b2Mat22 parent_t;
	typedef b2Mat22 base_t;
	static luna_ConverterType converters[];
};

// Class: b2Mat33
template<>
class LunaTraits< b2Mat33 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Mat33* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Mat33* obj);
	typedef b2Mat33 parent_t;
	typedef b2Mat33 base_t;
	static luna_ConverterType converters[];
};

// Class: b2MouseJoint
template<>
class LunaTraits< b2MouseJoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2MouseJoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2MouseJoint* obj);
	typedef b2Joint parent_t;
	typedef b2MouseJoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2MouseJointDef
template<>
class LunaTraits< b2MouseJointDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2MouseJointDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2MouseJointDef* obj);
	typedef b2JointDef parent_t;
	typedef b2MouseJointDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2Pair
template<>
class LunaTraits< b2Pair > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Pair* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Pair* obj);
	typedef b2Pair parent_t;
	typedef b2Pair base_t;
	static luna_ConverterType converters[];
};

// Class: b2PolygonAndCircleContact
template<>
class LunaTraits< b2PolygonAndCircleContact > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2PolygonAndCircleContact* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2PolygonAndCircleContact* obj);
	typedef b2Contact parent_t;
	typedef b2PolygonAndCircleContact base_t;
	static luna_ConverterType converters[];
};

// Class: b2PolygonContact
template<>
class LunaTraits< b2PolygonContact > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2PolygonContact* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2PolygonContact* obj);
	typedef b2Contact parent_t;
	typedef b2PolygonContact base_t;
	static luna_ConverterType converters[];
};

// Class: b2PolygonShape
template<>
class LunaTraits< b2PolygonShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2PolygonShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2PolygonShape* obj);
	typedef b2Shape parent_t;
	typedef b2PolygonShape base_t;
	static luna_ConverterType converters[];
};

// Class: b2Position
template<>
class LunaTraits< b2Position > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Position* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Position* obj);
	typedef b2Position parent_t;
	typedef b2Position base_t;
	static luna_ConverterType converters[];
};

// Class: b2PrismaticJoint
template<>
class LunaTraits< b2PrismaticJoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2PrismaticJoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2PrismaticJoint* obj);
	typedef b2Joint parent_t;
	typedef b2PrismaticJoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2PrismaticJointDef
template<>
class LunaTraits< b2PrismaticJointDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2PrismaticJointDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2PrismaticJointDef* obj);
	typedef b2JointDef parent_t;
	typedef b2PrismaticJointDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2Profile
template<>
class LunaTraits< b2Profile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Profile* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Profile* obj);
	typedef b2Profile parent_t;
	typedef b2Profile base_t;
	static luna_ConverterType converters[];
};

// Class: b2PulleyJoint
template<>
class LunaTraits< b2PulleyJoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2PulleyJoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2PulleyJoint* obj);
	typedef b2Joint parent_t;
	typedef b2PulleyJoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2PulleyJointDef
template<>
class LunaTraits< b2PulleyJointDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2PulleyJointDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2PulleyJointDef* obj);
	typedef b2JointDef parent_t;
	typedef b2PulleyJointDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2QueryCallback
template<>
class LunaTraits< b2QueryCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2QueryCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2QueryCallback* obj);
	typedef b2QueryCallback parent_t;
	typedef b2QueryCallback base_t;
	static luna_ConverterType converters[];
};

// Class: b2RayCastCallback
template<>
class LunaTraits< b2RayCastCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2RayCastCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2RayCastCallback* obj);
	typedef b2RayCastCallback parent_t;
	typedef b2RayCastCallback base_t;
	static luna_ConverterType converters[];
};

// Class: b2RayCastInput
template<>
class LunaTraits< b2RayCastInput > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2RayCastInput* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2RayCastInput* obj);
	typedef b2RayCastInput parent_t;
	typedef b2RayCastInput base_t;
	static luna_ConverterType converters[];
};

// Class: b2RayCastOutput
template<>
class LunaTraits< b2RayCastOutput > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2RayCastOutput* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2RayCastOutput* obj);
	typedef b2RayCastOutput parent_t;
	typedef b2RayCastOutput base_t;
	static luna_ConverterType converters[];
};

// Class: b2RevoluteJoint
template<>
class LunaTraits< b2RevoluteJoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2RevoluteJoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2RevoluteJoint* obj);
	typedef b2Joint parent_t;
	typedef b2RevoluteJoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2RevoluteJointDef
template<>
class LunaTraits< b2RevoluteJointDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2RevoluteJointDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2RevoluteJointDef* obj);
	typedef b2JointDef parent_t;
	typedef b2RevoluteJointDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2Rope
template<>
class LunaTraits< b2Rope > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Rope* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Rope* obj);
	typedef b2Rope parent_t;
	typedef b2Rope base_t;
	static luna_ConverterType converters[];
};

// Class: b2RopeDef
template<>
class LunaTraits< b2RopeDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2RopeDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2RopeDef* obj);
	typedef b2RopeDef parent_t;
	typedef b2RopeDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2RopeJoint
template<>
class LunaTraits< b2RopeJoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2RopeJoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2RopeJoint* obj);
	typedef b2Joint parent_t;
	typedef b2RopeJoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2RopeJointDef
template<>
class LunaTraits< b2RopeJointDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2RopeJointDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2RopeJointDef* obj);
	typedef b2JointDef parent_t;
	typedef b2RopeJointDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2Rot
template<>
class LunaTraits< b2Rot > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Rot* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Rot* obj);
	typedef b2Rot parent_t;
	typedef b2Rot base_t;
	static luna_ConverterType converters[];
};

// Class: b2SimplexCache
template<>
class LunaTraits< b2SimplexCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2SimplexCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2SimplexCache* obj);
	typedef b2SimplexCache parent_t;
	typedef b2SimplexCache base_t;
	static luna_ConverterType converters[];
};

// Class: b2SolverData
template<>
class LunaTraits< b2SolverData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2SolverData* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2SolverData* obj);
	typedef b2SolverData parent_t;
	typedef b2SolverData base_t;
	static luna_ConverterType converters[];
};

// Class: b2StackAllocator
template<>
class LunaTraits< b2StackAllocator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2StackAllocator* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2StackAllocator* obj);
	typedef b2StackAllocator parent_t;
	typedef b2StackAllocator base_t;
	static luna_ConverterType converters[];
};

// Class: b2StackEntry
template<>
class LunaTraits< b2StackEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2StackEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2StackEntry* obj);
	typedef b2StackEntry parent_t;
	typedef b2StackEntry base_t;
	static luna_ConverterType converters[];
};

// Class: b2Sweep
template<>
class LunaTraits< b2Sweep > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Sweep* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Sweep* obj);
	typedef b2Sweep parent_t;
	typedef b2Sweep base_t;
	static luna_ConverterType converters[];
};

// Class: b2Timer
template<>
class LunaTraits< b2Timer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Timer* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Timer* obj);
	typedef b2Timer parent_t;
	typedef b2Timer base_t;
	static luna_ConverterType converters[];
};

// Class: b2TimeStep
template<>
class LunaTraits< b2TimeStep > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2TimeStep* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2TimeStep* obj);
	typedef b2TimeStep parent_t;
	typedef b2TimeStep base_t;
	static luna_ConverterType converters[];
};

// Class: b2TOIInput
template<>
class LunaTraits< b2TOIInput > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2TOIInput* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2TOIInput* obj);
	typedef b2TOIInput parent_t;
	typedef b2TOIInput base_t;
	static luna_ConverterType converters[];
};

// Class: b2TOIOutput
template<>
class LunaTraits< b2TOIOutput > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2TOIOutput* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2TOIOutput* obj);
	typedef b2TOIOutput parent_t;
	typedef b2TOIOutput base_t;
	static luna_ConverterType converters[];
};

// Class: b2Transform
template<>
class LunaTraits< b2Transform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Transform* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Transform* obj);
	typedef b2Transform parent_t;
	typedef b2Transform base_t;
	static luna_ConverterType converters[];
};

// Class: b2TreeNode
template<>
class LunaTraits< b2TreeNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2TreeNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2TreeNode* obj);
	typedef b2TreeNode parent_t;
	typedef b2TreeNode base_t;
	static luna_ConverterType converters[];
};

// Class: b2Vec2
template<>
class LunaTraits< b2Vec2 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Vec2* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Vec2* obj);
	typedef b2Vec2 parent_t;
	typedef b2Vec2 base_t;
	static luna_ConverterType converters[];
};

// Class: b2Vec3
template<>
class LunaTraits< b2Vec3 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Vec3* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Vec3* obj);
	typedef b2Vec3 parent_t;
	typedef b2Vec3 base_t;
	static luna_ConverterType converters[];
};

// Class: b2Velocity
template<>
class LunaTraits< b2Velocity > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Velocity* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Velocity* obj);
	typedef b2Velocity parent_t;
	typedef b2Velocity base_t;
	static luna_ConverterType converters[];
};

// Class: b2VelocityConstraintPoint
template<>
class LunaTraits< b2VelocityConstraintPoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2VelocityConstraintPoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2VelocityConstraintPoint* obj);
	typedef b2VelocityConstraintPoint parent_t;
	typedef b2VelocityConstraintPoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2Version
template<>
class LunaTraits< b2Version > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2Version* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2Version* obj);
	typedef b2Version parent_t;
	typedef b2Version base_t;
	static luna_ConverterType converters[];
};

// Class: b2WeldJoint
template<>
class LunaTraits< b2WeldJoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2WeldJoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2WeldJoint* obj);
	typedef b2Joint parent_t;
	typedef b2WeldJoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2WeldJointDef
template<>
class LunaTraits< b2WeldJointDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2WeldJointDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2WeldJointDef* obj);
	typedef b2JointDef parent_t;
	typedef b2WeldJointDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2WheelJoint
template<>
class LunaTraits< b2WheelJoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2WheelJoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2WheelJoint* obj);
	typedef b2Joint parent_t;
	typedef b2WheelJoint base_t;
	static luna_ConverterType converters[];
};

// Class: b2WheelJointDef
template<>
class LunaTraits< b2WheelJointDef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2WheelJointDef* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2WheelJointDef* obj);
	typedef b2JointDef parent_t;
	typedef b2WheelJointDef base_t;
	static luna_ConverterType converters[];
};

// Class: b2World
template<>
class LunaTraits< b2World > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2World* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2World* obj);
	typedef b2World parent_t;
	typedef b2World base_t;
	static luna_ConverterType converters[];
};

// Class: b2WorldManifold
template<>
class LunaTraits< b2WorldManifold > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static b2WorldManifold* _bind_ctor(lua_State *L);
	static void _bind_dtor(b2WorldManifold* obj);
	typedef b2WorldManifold parent_t;
	typedef b2WorldManifold base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::GUIEventHandler
template<>
class LunaTraits< osgGA::GUIEventHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIEventHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIEventHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::GUIEventHandler base_t;
	static luna_ConverterType converters[];
};

// Class: Box2DUpdater
template<>
class LunaTraits< Box2DUpdater > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Box2DUpdater* _bind_ctor(lua_State *L);
	static void _bind_dtor(Box2DUpdater* obj);
	typedef osg::Referenced parent_t;
	typedef Box2DUpdater base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec2f
template<>
class LunaTraits< osg::Vec2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec2f* obj);
	typedef osg::Vec2f parent_t;
	typedef osg::Vec2f base_t;
	static luna_ConverterType converters[];
};



// Referenced external: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Referenced
template<>
class LunaTraits< osg::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osgGA::GUIEventAdapter
template<>
class LunaTraits< osgGA::GUIEventAdapter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIEventAdapter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIEventAdapter* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::GUIEventAdapter base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osgGA::GUIActionAdapter
template<>
class LunaTraits< osgGA::GUIActionAdapter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIActionAdapter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIActionAdapter* obj);
	typedef osgGA::GUIActionAdapter parent_t;
	typedef osgGA::GUIActionAdapter base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Node
template<>
class LunaTraits< osg::Node > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Node* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Node* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Node base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::MatrixTransform
template<>
class LunaTraits< osg::MatrixTransform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::MatrixTransform* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::MatrixTransform* obj);
	typedef osg::Referenced parent_t;
	typedef osg::MatrixTransform base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 53833672 > {
public:
	typedef b2AABB type;
	
};

template<>
class LunaType< 76186022 > {
public:
	typedef b2BlockAllocator type;
	
};

template<>
class LunaType< 53908778 > {
public:
	typedef b2Body type;
	
};

template<>
class LunaType< 96360882 > {
public:
	typedef b2BodyDef type;
	
};

template<>
class LunaType< 95168430 > {
public:
	typedef b2BroadPhase type;
	
};

template<>
class LunaType< 92978558 > {
public:
	typedef b2Contact type;
	
};

template<>
class LunaType< 86660265 > {
public:
	typedef b2Shape type;
	
};

template<>
class LunaType< 24997608 > {
public:
	typedef b2ClipVertex type;
	
};

template<>
class LunaType< 72103019 > {
public:
	typedef b2Color type;
	
};

template<>
class LunaType< 44405893 > {
public:
	typedef b2ContactEdge type;
	
};

template<>
class LunaType< 6926928 > {
public:
	typedef b2ContactFeature type;
	
};

template<>
class LunaType< 7470542 > {
public:
	typedef b2ContactFilter type;
	
};

template<>
class LunaType< 12344703 > {
public:
	typedef b2ContactImpulse type;
	
};

template<>
class LunaType< 55252344 > {
public:
	typedef b2ContactListener type;
	
};

template<>
class LunaType< 16361077 > {
public:
	typedef b2ContactManager type;
	
};

template<>
class LunaType< 38983117 > {
public:
	typedef b2ContactPositionConstraint type;
	
};

template<>
class LunaType< 27612713 > {
public:
	typedef b2ContactRegister type;
	
};

template<>
class LunaType< 85192508 > {
public:
	typedef b2ContactSolver type;
	
};

template<>
class LunaType< 69667931 > {
public:
	typedef b2ContactSolverDef type;
	
};

template<>
class LunaType< 22596938 > {
public:
	typedef b2ContactVelocityConstraint type;
	
};

template<>
class LunaType< 39920564 > {
public:
	typedef b2DestructionListener type;
	
};

template<>
class LunaType< 50940514 > {
public:
	typedef b2DistanceInput type;
	
};

template<>
class LunaType< 78564754 > {
public:
	typedef b2Joint type;
	
};

template<>
class LunaType< 22467414 > {
public:
	typedef b2JointDef type;
	
};

template<>
class LunaType< 57509721 > {
public:
	typedef b2DistanceOutput type;
	
};

template<>
class LunaType< 57523462 > {
public:
	typedef b2DistanceProxy type;
	
};

template<>
class LunaType< 53971148 > {
public:
	typedef b2Draw type;
	
};

template<>
class LunaType< 22644719 > {
public:
	typedef b2DynamicTree type;
	
};

template<>
class LunaType< 15544248 > {
public:
	typedef b2Filter type;
	
};

template<>
class LunaType< 92969381 > {
public:
	typedef b2Fixture type;
	
};

template<>
class LunaType< 50620191 > {
public:
	typedef b2FixtureDef type;
	
};

template<>
class LunaType< 57479237 > {
public:
	typedef b2FixtureProxy type;
	
};

template<>
class LunaType< 10648909 > {
public:
	typedef b2Island type;
	
};

template<>
class LunaType< 26064803 > {
public:
	typedef b2Jacobian type;
	
};

template<>
class LunaType< 96518730 > {
public:
	typedef b2JointEdge type;
	
};

template<>
class LunaType< 73405450 > {
public:
	typedef b2Manifold type;
	
};

template<>
class LunaType< 57686136 > {
public:
	typedef b2ManifoldPoint type;
	
};

template<>
class LunaType< 24760292 > {
public:
	typedef b2MassData type;
	
};

template<>
class LunaType< 80926888 > {
public:
	typedef b2Mat22 type;
	
};

template<>
class LunaType< 80926920 > {
public:
	typedef b2Mat33 type;
	
};

template<>
class LunaType< 54312546 > {
public:
	typedef b2Pair type;
	
};

template<>
class LunaType< 79848895 > {
public:
	typedef b2Position type;
	
};

template<>
class LunaType< 16927334 > {
public:
	typedef b2Profile type;
	
};

template<>
class LunaType< 67660073 > {
public:
	typedef b2QueryCallback type;
	
};

template<>
class LunaType< 29620235 > {
public:
	typedef b2RayCastCallback type;
	
};

template<>
class LunaType< 74209205 > {
public:
	typedef b2RayCastInput type;
	
};

template<>
class LunaType< 78839054 > {
public:
	typedef b2RayCastOutput type;
	
};

template<>
class LunaType< 54385786 > {
public:
	typedef b2Rope type;
	
};

template<>
class LunaType< 6905047 > {
public:
	typedef b2RopeDef type;
	
};

template<>
class LunaType< 92076967 > {
public:
	typedef b2Rot type;
	
};

template<>
class LunaType< 65613863 > {
public:
	typedef b2SimplexCache type;
	
};

template<>
class LunaType< 20956645 > {
public:
	typedef b2SolverData type;
	
};

template<>
class LunaType< 83926873 > {
public:
	typedef b2StackAllocator type;
	
};

template<>
class LunaType< 5969628 > {
public:
	typedef b2StackEntry type;
	
};

template<>
class LunaType< 87110644 > {
public:
	typedef b2Sweep type;
	
};

template<>
class LunaType< 87624781 > {
public:
	typedef b2Timer type;
	
};

template<>
class LunaType< 28832978 > {
public:
	typedef b2TimeStep type;
	
};

template<>
class LunaType< 98031472 > {
public:
	typedef b2TOIInput type;
	
};

template<>
class LunaType< 17329370 > {
public:
	typedef b2TOIOutput type;
	
};

template<>
class LunaType< 44090970 > {
public:
	typedef b2Transform type;
	
};

template<>
class LunaType< 87178389 > {
public:
	typedef b2TreeNode type;
	
};

template<>
class LunaType< 54494886 > {
public:
	typedef b2Vec2 type;
	
};

template<>
class LunaType< 54494887 > {
public:
	typedef b2Vec3 type;
	
};

template<>
class LunaType< 85114450 > {
public:
	typedef b2Velocity type;
	
};

template<>
class LunaType< 52147941 > {
public:
	typedef b2VelocityConstraintPoint type;
	
};

template<>
class LunaType< 72927995 > {
public:
	typedef b2Version type;
	
};

template<>
class LunaType< 90579098 > {
public:
	typedef b2World type;
	
};

template<>
class LunaType< 57338608 > {
public:
	typedef b2WorldManifold type;
	
};

template<>
class LunaType< 29676225 > {
public:
	typedef osgGA::GUIEventHandler type;
	
};

template<>
class LunaType< 92303173 > {
public:
	typedef osg::Vec2f type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 91398620 > {
public:
	typedef osgGA::GUIEventAdapter type;
	
};

template<>
class LunaType< 85302998 > {
public:
	typedef osgGA::GUIActionAdapter type;
	
};

template<>
class LunaType< 80168245 > {
public:
	typedef osg::Node type;
	
};

template<>
class LunaType< 11455287 > {
public:
	typedef osg::MatrixTransform type;
	
};


#endif

