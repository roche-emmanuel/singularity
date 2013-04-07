#ifndef _WRAPPERS_WRAPPER_BTRIGIDBODY_H_
#define _WRAPPERS_WRAPPER_BTRIGIDBODY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletDynamics/Dynamics/btRigidBody.h>

class wrapper_btRigidBody : public btRigidBody, public luna_wrapper_base {

public:
		

	~wrapper_btRigidBody() {
		logDEBUG3("Calling delete function for wrapper btRigidBody");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btRigidBody*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btRigidBody(lua_State* L, lua_Table* dum, const btRigidBody::btRigidBodyConstructionInfo & constructionInfo) 
		: btRigidBody(constructionInfo), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btRigidBody*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btRigidBody(lua_State* L, lua_Table* dum, float mass, btMotionState * motionState, btCollisionShape * collisionShape, const btVector3 & localInertia = btVector3 (0, 0, 0)) 
		: btRigidBody(mass, motionState, collisionShape, localInertia), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btRigidBody*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionObject::setCollisionShape(btCollisionShape * collisionShape)
	void setCollisionShape(btCollisionShape * collisionShape) {
		if(_obj.pushFunction("setCollisionShape")) {
			_obj.pushArg((btRigidBody*)this);
			_obj.pushArg(collisionShape);
			return (_obj.callFunction<void>());
		}

		return btRigidBody::setCollisionShape(collisionShape);
	};

	// bool btRigidBody::checkCollideWithOverride(const btCollisionObject * co) const
	bool checkCollideWithOverride(const btCollisionObject * co) const {
		if(_obj.pushFunction("checkCollideWithOverride")) {
			_obj.pushArg((btRigidBody*)this);
			_obj.pushArg(co);
			return (_obj.callFunction<bool>());
		}

		return btRigidBody::checkCollideWithOverride(co);
	};

	// int btRigidBody::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btRigidBody*)this);
			return (_obj.callFunction<int>());
		}

		return btRigidBody::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:
	// void btRigidBody::setupRigidBody(const btRigidBody::btRigidBodyConstructionInfo & constructionInfo)
	void public_setupRigidBody(const btRigidBody::btRigidBodyConstructionInfo & constructionInfo) {
		return btRigidBody::setupRigidBody(constructionInfo);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_setupRigidBody(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13789036) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btRigidBody::public_setupRigidBody(const btRigidBody::btRigidBodyConstructionInfo & constructionInfo)
	static int _bind_public_setupRigidBody(lua_State *L) {
		if (!_lg_typecheck_public_setupRigidBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::public_setupRigidBody(const btRigidBody::btRigidBodyConstructionInfo & constructionInfo) function, expected prototype:\nvoid btRigidBody::public_setupRigidBody(const btRigidBody::btRigidBodyConstructionInfo & constructionInfo)\nClass arguments details:\narg 1 ID = 13789036\n");
		}

		const btRigidBody::btRigidBodyConstructionInfo* constructionInfo_ptr=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,2));
		if( !constructionInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg constructionInfo in btRigidBody::public_setupRigidBody function");
		}
		const btRigidBody::btRigidBodyConstructionInfo & constructionInfo=*constructionInfo_ptr;

		wrapper_btRigidBody* self=Luna< btCollisionObject >::checkSubType< wrapper_btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::public_setupRigidBody(const btRigidBody::btRigidBodyConstructionInfo &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->public_setupRigidBody(constructionInfo);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"setupRigidBody",_bind_public_setupRigidBody},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

