#ifndef _WRAPPERS_WRAPPER_B_CONTACTLISTENER_H_
#define _WRAPPERS_WRAPPER_B_CONTACTLISTENER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Box2D/Dynamics/b2WorldCallbacks.h>

class wrapper_b2ContactListener : public b2ContactListener, public luna_wrapper_base {

public:
		

	~wrapper_b2ContactListener() {
		logDEBUG3("Calling delete function for wrapper b2ContactListener");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((b2ContactListener*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_b2ContactListener(lua_State* L, lua_Table* dum) 
		: b2ContactListener(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((b2ContactListener*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void b2ContactListener::BeginContact(b2Contact * contact)
	void BeginContact(b2Contact * contact) {
		if(_obj.pushFunction("BeginContact")) {
			_obj.pushArg((b2ContactListener*)this);
			_obj.pushArg(contact);
			return (_obj.callFunction<void>());
		}

		return b2ContactListener::BeginContact(contact);
	};

	// void b2ContactListener::EndContact(b2Contact * contact)
	void EndContact(b2Contact * contact) {
		if(_obj.pushFunction("EndContact")) {
			_obj.pushArg((b2ContactListener*)this);
			_obj.pushArg(contact);
			return (_obj.callFunction<void>());
		}

		return b2ContactListener::EndContact(contact);
	};

	// void b2ContactListener::PreSolve(b2Contact * contact, const b2Manifold * oldManifold)
	void PreSolve(b2Contact * contact, const b2Manifold * oldManifold) {
		if(_obj.pushFunction("PreSolve")) {
			_obj.pushArg((b2ContactListener*)this);
			_obj.pushArg(contact);
			_obj.pushArg(oldManifold);
			return (_obj.callFunction<void>());
		}

		return b2ContactListener::PreSolve(contact, oldManifold);
	};

	// void b2ContactListener::PostSolve(b2Contact * contact, const b2ContactImpulse * impulse)
	void PostSolve(b2Contact * contact, const b2ContactImpulse * impulse) {
		if(_obj.pushFunction("PostSolve")) {
			_obj.pushArg((b2ContactListener*)this);
			_obj.pushArg(contact);
			_obj.pushArg(impulse);
			return (_obj.callFunction<void>());
		}

		return b2ContactListener::PostSolve(contact, impulse);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

