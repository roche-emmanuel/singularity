#ifndef _WRAPPERS_WRAPPER_SPK_ORIENTED_DRENDERERINTERFACE_H_
#define _WRAPPERS_WRAPPER_SPK_ORIENTED_DRENDERERINTERFACE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Extensions/Renderers/SPK_Oriented2DRendererInterface.h>

class wrapper_SPK_Oriented2DRendererInterface : public SPK::Oriented2DRendererInterface, public luna_wrapper_base {

public:
		

	~wrapper_SPK_Oriented2DRendererInterface() {
		logDEBUG3("Calling delete function for wrapper SPK_Oriented2DRendererInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SPK::Oriented2DRendererInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SPK_Oriented2DRendererInterface(lua_State* L, lua_Table* dum) 
		: SPK::Oriented2DRendererInterface(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SPK::Oriented2DRendererInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// bool SPK::Oriented2DRendererInterface::hasGlobalOrientation()
	bool public_hasGlobalOrientation() {
		return SPK::Oriented2DRendererInterface::hasGlobalOrientation();
	};

	// void SPK::Oriented2DRendererInterface::computeGlobalOrientation2D()
	void public_computeGlobalOrientation2D() {
		return SPK::Oriented2DRendererInterface::computeGlobalOrientation2D();
	};

	// void SPK::Oriented2DRendererInterface::computeSingleOrientation2D(const SPK::Particle & particle)
	void public_computeSingleOrientation2D(const SPK::Particle & particle) {
		return SPK::Oriented2DRendererInterface::computeSingleOrientation2D(particle);
	};

	// void SPK::Oriented2DRendererInterface::scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	void public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const {
		return SPK::Oriented2DRendererInterface::scaleQuadVectors(particle, scaleX, scaleY);
	};

	// void SPK::Oriented2DRendererInterface::rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	void public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const {
		return SPK::Oriented2DRendererInterface::rotateAndScaleQuadVectors(particle, scaleX, scaleY);
	};

	// const SPK::Vector3D & SPK::Oriented2DRendererInterface::quadUp() const
	const SPK::Vector3D & public_quadUp() const {
		return SPK::Oriented2DRendererInterface::quadUp();
	};

	// const SPK::Vector3D & SPK::Oriented2DRendererInterface::quadSide() const
	const SPK::Vector3D & public_quadSide() const {
		return SPK::Oriented2DRendererInterface::quadSide();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_hasGlobalOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeGlobalOrientation2D(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeSingleOrientation2D(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_scaleQuadVectors(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_rotateAndScaleQuadVectors(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_quadUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_quadSide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// bool SPK::Oriented2DRendererInterface::public_hasGlobalOrientation()
	static int _bind_public_hasGlobalOrientation(lua_State *L) {
		if (!_lg_typecheck_public_hasGlobalOrientation(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::Oriented2DRendererInterface::public_hasGlobalOrientation() function, expected prototype:\nbool SPK::Oriented2DRendererInterface::public_hasGlobalOrientation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_SPK_Oriented2DRendererInterface* self=Luna< SPK::Oriented2DRendererInterface >::checkSubType< wrapper_SPK_Oriented2DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::Oriented2DRendererInterface::public_hasGlobalOrientation(). Got : '%s'\n%s",typeid(Luna< SPK::Oriented2DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_hasGlobalOrientation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Oriented2DRendererInterface::public_computeGlobalOrientation2D()
	static int _bind_public_computeGlobalOrientation2D(lua_State *L) {
		if (!_lg_typecheck_public_computeGlobalOrientation2D(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Oriented2DRendererInterface::public_computeGlobalOrientation2D() function, expected prototype:\nvoid SPK::Oriented2DRendererInterface::public_computeGlobalOrientation2D()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_SPK_Oriented2DRendererInterface* self=Luna< SPK::Oriented2DRendererInterface >::checkSubType< wrapper_SPK_Oriented2DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Oriented2DRendererInterface::public_computeGlobalOrientation2D(). Got : '%s'\n%s",typeid(Luna< SPK::Oriented2DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeGlobalOrientation2D();

		return 0;
	}

	// void SPK::Oriented2DRendererInterface::public_computeSingleOrientation2D(const SPK::Particle & particle)
	static int _bind_public_computeSingleOrientation2D(lua_State *L) {
		if (!_lg_typecheck_public_computeSingleOrientation2D(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Oriented2DRendererInterface::public_computeSingleOrientation2D(const SPK::Particle & particle) function, expected prototype:\nvoid SPK::Oriented2DRendererInterface::public_computeSingleOrientation2D(const SPK::Particle & particle)\nClass arguments details:\narg 1 ID = 73657533\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Oriented2DRendererInterface::public_computeSingleOrientation2D function");
		}
		const SPK::Particle & particle=*particle_ptr;

		wrapper_SPK_Oriented2DRendererInterface* self=Luna< SPK::Oriented2DRendererInterface >::checkSubType< wrapper_SPK_Oriented2DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Oriented2DRendererInterface::public_computeSingleOrientation2D(const SPK::Particle &). Got : '%s'\n%s",typeid(Luna< SPK::Oriented2DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeSingleOrientation2D(particle);

		return 0;
	}

	// void SPK::Oriented2DRendererInterface::public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	static int _bind_public_scaleQuadVectors(lua_State *L) {
		if (!_lg_typecheck_public_scaleQuadVectors(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Oriented2DRendererInterface::public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const function, expected prototype:\nvoid SPK::Oriented2DRendererInterface::public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const\nClass arguments details:\narg 1 ID = 73657533\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Oriented2DRendererInterface::public_scaleQuadVectors function");
		}
		const SPK::Particle & particle=*particle_ptr;
		float scaleX=(float)lua_tonumber(L,3);
		float scaleY=(float)lua_tonumber(L,4);

		wrapper_SPK_Oriented2DRendererInterface* self=Luna< SPK::Oriented2DRendererInterface >::checkSubType< wrapper_SPK_Oriented2DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Oriented2DRendererInterface::public_scaleQuadVectors(const SPK::Particle &, float, float) const. Got : '%s'\n%s",typeid(Luna< SPK::Oriented2DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_scaleQuadVectors(particle, scaleX, scaleY);

		return 0;
	}

	// void SPK::Oriented2DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	static int _bind_public_rotateAndScaleQuadVectors(lua_State *L) {
		if (!_lg_typecheck_public_rotateAndScaleQuadVectors(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Oriented2DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const function, expected prototype:\nvoid SPK::Oriented2DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const\nClass arguments details:\narg 1 ID = 73657533\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Oriented2DRendererInterface::public_rotateAndScaleQuadVectors function");
		}
		const SPK::Particle & particle=*particle_ptr;
		float scaleX=(float)lua_tonumber(L,3);
		float scaleY=(float)lua_tonumber(L,4);

		wrapper_SPK_Oriented2DRendererInterface* self=Luna< SPK::Oriented2DRendererInterface >::checkSubType< wrapper_SPK_Oriented2DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Oriented2DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle &, float, float) const. Got : '%s'\n%s",typeid(Luna< SPK::Oriented2DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_rotateAndScaleQuadVectors(particle, scaleX, scaleY);

		return 0;
	}

	// const SPK::Vector3D & SPK::Oriented2DRendererInterface::public_quadUp() const
	static int _bind_public_quadUp(lua_State *L) {
		if (!_lg_typecheck_public_quadUp(L)) {
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Oriented2DRendererInterface::public_quadUp() const function, expected prototype:\nconst SPK::Vector3D & SPK::Oriented2DRendererInterface::public_quadUp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_SPK_Oriented2DRendererInterface* self=Luna< SPK::Oriented2DRendererInterface >::checkSubType< wrapper_SPK_Oriented2DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Oriented2DRendererInterface::public_quadUp() const. Got : '%s'\n%s",typeid(Luna< SPK::Oriented2DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SPK::Vector3D* lret = &self->public_quadUp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Oriented2DRendererInterface::public_quadSide() const
	static int _bind_public_quadSide(lua_State *L) {
		if (!_lg_typecheck_public_quadSide(L)) {
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Oriented2DRendererInterface::public_quadSide() const function, expected prototype:\nconst SPK::Vector3D & SPK::Oriented2DRendererInterface::public_quadSide() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_SPK_Oriented2DRendererInterface* self=Luna< SPK::Oriented2DRendererInterface >::checkSubType< wrapper_SPK_Oriented2DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Oriented2DRendererInterface::public_quadSide() const. Got : '%s'\n%s",typeid(Luna< SPK::Oriented2DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SPK::Vector3D* lret = &self->public_quadSide();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"hasGlobalOrientation",_bind_public_hasGlobalOrientation},
		{"computeGlobalOrientation2D",_bind_public_computeGlobalOrientation2D},
		{"computeSingleOrientation2D",_bind_public_computeSingleOrientation2D},
		{"scaleQuadVectors",_bind_public_scaleQuadVectors},
		{"rotateAndScaleQuadVectors",_bind_public_rotateAndScaleQuadVectors},
		{"quadUp",_bind_public_quadUp},
		{"quadSide",_bind_public_quadSide},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

