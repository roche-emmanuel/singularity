#ifndef _WRAPPERS_WRAPPER_B_MOUSEJOINT_H_
#define _WRAPPERS_WRAPPER_B_MOUSEJOINT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Box2D/Dynamics/Joints/b2MouseJoint.h>

class wrapper_b2MouseJoint : public b2MouseJoint, public luna_wrapper_base {

public:
		

	~wrapper_b2MouseJoint() {
		logDEBUG3("Calling delete function for wrapper b2MouseJoint");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((b2MouseJoint*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_b2MouseJoint(lua_State* L, lua_Table* dum, const b2MouseJointDef * def) 
		: b2MouseJoint(def), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((b2MouseJoint*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void b2MouseJoint::InitVelocityConstraints(const b2SolverData & data)
	void InitVelocityConstraints(const b2SolverData & data) {
		if(_obj.pushFunction("InitVelocityConstraints")) {
			_obj.pushArg((b2MouseJoint*)this);
			_obj.pushArg(&data);
			return (_obj.callFunction<void>());
		}

		return b2MouseJoint::InitVelocityConstraints(data);
	};

	// void b2MouseJoint::SolveVelocityConstraints(const b2SolverData & data)
	void SolveVelocityConstraints(const b2SolverData & data) {
		if(_obj.pushFunction("SolveVelocityConstraints")) {
			_obj.pushArg((b2MouseJoint*)this);
			_obj.pushArg(&data);
			return (_obj.callFunction<void>());
		}

		return b2MouseJoint::SolveVelocityConstraints(data);
	};

	// bool b2MouseJoint::SolvePositionConstraints(const b2SolverData & data)
	bool SolvePositionConstraints(const b2SolverData & data) {
		if(_obj.pushFunction("SolvePositionConstraints")) {
			_obj.pushArg((b2MouseJoint*)this);
			_obj.pushArg(&data);
			return (_obj.callFunction<bool>());
		}

		return b2MouseJoint::SolvePositionConstraints(data);
	};

public:
	// Public virtual methods:
	// b2Vec2 b2MouseJoint::GetAnchorA() const
	b2Vec2 GetAnchorA() const {
		if(_obj.pushFunction("GetAnchorA")) {
			_obj.pushArg((b2MouseJoint*)this);
			return *(_obj.callFunction<b2Vec2*>());
		}

		return b2MouseJoint::GetAnchorA();
	};

	// b2Vec2 b2MouseJoint::GetAnchorB() const
	b2Vec2 GetAnchorB() const {
		if(_obj.pushFunction("GetAnchorB")) {
			_obj.pushArg((b2MouseJoint*)this);
			return *(_obj.callFunction<b2Vec2*>());
		}

		return b2MouseJoint::GetAnchorB();
	};

	// b2Vec2 b2MouseJoint::GetReactionForce(float inv_dt) const
	b2Vec2 GetReactionForce(float inv_dt) const {
		if(_obj.pushFunction("GetReactionForce")) {
			_obj.pushArg((b2MouseJoint*)this);
			_obj.pushArg(inv_dt);
			return *(_obj.callFunction<b2Vec2*>());
		}

		return b2MouseJoint::GetReactionForce(inv_dt);
	};

	// float b2MouseJoint::GetReactionTorque(float inv_dt) const
	float GetReactionTorque(float inv_dt) const {
		if(_obj.pushFunction("GetReactionTorque")) {
			_obj.pushArg((b2MouseJoint*)this);
			_obj.pushArg(inv_dt);
			return (_obj.callFunction<float>());
		}

		return b2MouseJoint::GetReactionTorque(inv_dt);
	};

	// void b2MouseJoint::Dump()
	void Dump() {
		if(_obj.pushFunction("Dump")) {
			_obj.pushArg((b2MouseJoint*)this);
			return (_obj.callFunction<void>());
		}

		return b2MouseJoint::Dump();
	};


	// Protected non-virtual methods:
	// static b2Joint * b2Joint::Create(const b2JointDef * def, b2BlockAllocator * allocator)
	static b2Joint * public_Create(const b2JointDef * def, b2BlockAllocator * allocator) {
		return b2Joint::Create(def, allocator);
	};

	// static void b2Joint::Destroy(b2Joint * joint, b2BlockAllocator * allocator)
	static void public_Destroy(b2Joint * joint, b2BlockAllocator * allocator) {
		return b2Joint::Destroy(joint, allocator);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,22467414)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,76186022)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_Destroy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,78564754)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,76186022)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// static b2Joint * b2Joint::public_Create(const b2JointDef * def, b2BlockAllocator * allocator)
	static int _bind_public_Create(lua_State *L) {
		if (!_lg_typecheck_public_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static b2Joint * b2Joint::public_Create(const b2JointDef * def, b2BlockAllocator * allocator) function, expected prototype:\nstatic b2Joint * b2Joint::public_Create(const b2JointDef * def, b2BlockAllocator * allocator)\nClass arguments details:\narg 1 ID = 22467414\narg 2 ID = 76186022\n");
		}

		const b2JointDef* def=(Luna< b2JointDef >::check(L,1));
		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,2));

		wrapper_b2MouseJoint* self=Luna< b2Joint >::checkSubType< wrapper_b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static b2Joint * b2Joint::public_Create(const b2JointDef *, b2BlockAllocator *). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Joint * lret = self->public_Create(def, allocator);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Joint >::push(L,lret,false);

		return 1;
	}

	// static void b2Joint::public_Destroy(b2Joint * joint, b2BlockAllocator * allocator)
	static int _bind_public_Destroy(lua_State *L) {
		if (!_lg_typecheck_public_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void b2Joint::public_Destroy(b2Joint * joint, b2BlockAllocator * allocator) function, expected prototype:\nstatic void b2Joint::public_Destroy(b2Joint * joint, b2BlockAllocator * allocator)\nClass arguments details:\narg 1 ID = 78564754\narg 2 ID = 76186022\n");
		}

		b2Joint* joint=(Luna< b2Joint >::check(L,1));
		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,2));

		wrapper_b2MouseJoint* self=Luna< b2Joint >::checkSubType< wrapper_b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void b2Joint::public_Destroy(b2Joint *, b2BlockAllocator *). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->public_Destroy(joint, allocator);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"Create",_bind_public_Create},
		{"Destroy",_bind_public_Destroy},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

