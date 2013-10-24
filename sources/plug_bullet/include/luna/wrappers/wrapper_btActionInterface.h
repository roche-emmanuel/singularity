#ifndef _WRAPPERS_WRAPPER_BTACTIONINTERFACE_H_
#define _WRAPPERS_WRAPPER_BTACTIONINTERFACE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletDynamics/Dynamics/btActionInterface.h>

class wrapper_btActionInterface : public btActionInterface, public luna_wrapper_base {

public:
		

	~wrapper_btActionInterface() {
		logDEBUG3("Calling delete function for wrapper btActionInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btActionInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btActionInterface(lua_State* L, lua_Table* dum) 
		: btActionInterface(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btActionInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btActionInterface::updateAction(btCollisionWorld * collisionWorld, float deltaTimeStep)
	void updateAction(btCollisionWorld * collisionWorld, float deltaTimeStep) {
		THROW_IF(!_obj.pushFunction("updateAction"),"No implementation for abstract function btActionInterface::updateAction");
		_obj.pushArg((btActionInterface*)this);
		_obj.pushArg(collisionWorld);
		_obj.pushArg(deltaTimeStep);
		return (_obj.callFunction<void>());
	};

	// void btActionInterface::debugDraw(btIDebugDraw * debugDrawer)
	void debugDraw(btIDebugDraw * debugDrawer) {
		THROW_IF(!_obj.pushFunction("debugDraw"),"No implementation for abstract function btActionInterface::debugDraw");
		_obj.pushArg((btActionInterface*)this);
		_obj.pushArg(debugDrawer);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:
	// static btRigidBody & btActionInterface::getFixedBody()
	static btRigidBody & public_getFixedBody() {
		return btActionInterface::getFixedBody();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_getFixedBody(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// static btRigidBody & btActionInterface::public_getFixedBody()
	static int _bind_public_getFixedBody(lua_State *L) {
		if (!_lg_typecheck_public_getFixedBody(L)) {
			luaL_error(L, "luna typecheck failed in static btRigidBody & btActionInterface::public_getFixedBody() function, expected prototype:\nstatic btRigidBody & btActionInterface::public_getFixedBody()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_btActionInterface* self=Luna< btActionInterface >::checkSubType< wrapper_btActionInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static btRigidBody & btActionInterface::public_getFixedBody(). Got : '%s'\n%s",typeid(Luna< btActionInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btRigidBody* lret = &self->public_getFixedBody();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"getFixedBody",_bind_public_getFixedBody},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

