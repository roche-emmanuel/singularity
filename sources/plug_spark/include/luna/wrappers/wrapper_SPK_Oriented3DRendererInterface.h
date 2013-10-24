#ifndef _WRAPPERS_WRAPPER_SPK_ORIENTED_DRENDERERINTERFACE_H_
#define _WRAPPERS_WRAPPER_SPK_ORIENTED_DRENDERERINTERFACE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Extensions/Renderers/SPK_Oriented3DRendererInterface.h>

class wrapper_SPK_Oriented3DRendererInterface : public SPK::Oriented3DRendererInterface, public luna_wrapper_base {

public:
		

	~wrapper_SPK_Oriented3DRendererInterface() {
		logDEBUG3("Calling delete function for wrapper SPK_Oriented3DRendererInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SPK::Oriented3DRendererInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SPK_Oriented3DRendererInterface(lua_State* L, lua_Table* dum) 
		: SPK::Oriented3DRendererInterface(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SPK::Oriented3DRendererInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// bool SPK::Oriented3DRendererInterface::precomputeOrientation3D(const SPK::Group & group, const SPK::Vector3D & look, const SPK::Vector3D & up, const SPK::Vector3D & pos)
	bool public_precomputeOrientation3D(const SPK::Group & group, const SPK::Vector3D & look, const SPK::Vector3D & up, const SPK::Vector3D & pos) {
		return SPK::Oriented3DRendererInterface::precomputeOrientation3D(group, look, up, pos);
	};

	// void SPK::Oriented3DRendererInterface::computeGlobalOrientation3D()
	void public_computeGlobalOrientation3D() {
		return SPK::Oriented3DRendererInterface::computeGlobalOrientation3D();
	};

	// void SPK::Oriented3DRendererInterface::computeSingleOrientation3D(const SPK::Particle & particle)
	void public_computeSingleOrientation3D(const SPK::Particle & particle) {
		return SPK::Oriented3DRendererInterface::computeSingleOrientation3D(particle);
	};

	// void SPK::Oriented3DRendererInterface::scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	void public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const {
		return SPK::Oriented3DRendererInterface::scaleQuadVectors(particle, scaleX, scaleY);
	};

	// void SPK::Oriented3DRendererInterface::rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	void public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const {
		return SPK::Oriented3DRendererInterface::rotateAndScaleQuadVectors(particle, scaleX, scaleY);
	};

	// const SPK::Vector3D & SPK::Oriented3DRendererInterface::quadUp() const
	const SPK::Vector3D & public_quadUp() const {
		return SPK::Oriented3DRendererInterface::quadUp();
	};

	// const SPK::Vector3D & SPK::Oriented3DRendererInterface::quadSide() const
	const SPK::Vector3D & public_quadSide() const {
		return SPK::Oriented3DRendererInterface::quadSide();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_precomputeOrientation3D(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeGlobalOrientation3D(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeSingleOrientation3D(lua_State *L) {
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
	// bool SPK::Oriented3DRendererInterface::public_precomputeOrientation3D(const SPK::Group & group, const SPK::Vector3D & look, const SPK::Vector3D & up, const SPK::Vector3D & pos)
	static int _bind_public_precomputeOrientation3D(lua_State *L) {
		if (!_lg_typecheck_public_precomputeOrientation3D(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::Oriented3DRendererInterface::public_precomputeOrientation3D(const SPK::Group & group, const SPK::Vector3D & look, const SPK::Vector3D & up, const SPK::Vector3D & pos) function, expected prototype:\nbool SPK::Oriented3DRendererInterface::public_precomputeOrientation3D(const SPK::Group & group, const SPK::Vector3D & look, const SPK::Vector3D & up, const SPK::Vector3D & pos)\nClass arguments details:\narg 1 ID = 31337102\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Oriented3DRendererInterface::public_precomputeOrientation3D function");
		}
		const SPK::Group & group=*group_ptr;
		const SPK::Vector3D* look_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !look_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg look in SPK::Oriented3DRendererInterface::public_precomputeOrientation3D function");
		}
		const SPK::Vector3D & look=*look_ptr;
		const SPK::Vector3D* up_ptr=(Luna< SPK::Vector3D >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in SPK::Oriented3DRendererInterface::public_precomputeOrientation3D function");
		}
		const SPK::Vector3D & up=*up_ptr;
		const SPK::Vector3D* pos_ptr=(Luna< SPK::Vector3D >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in SPK::Oriented3DRendererInterface::public_precomputeOrientation3D function");
		}
		const SPK::Vector3D & pos=*pos_ptr;

		wrapper_SPK_Oriented3DRendererInterface* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_SPK_Oriented3DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::Oriented3DRendererInterface::public_precomputeOrientation3D(const SPK::Group &, const SPK::Vector3D &, const SPK::Vector3D &, const SPK::Vector3D &). Got : '%s'\n%s",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_precomputeOrientation3D(group, look, up, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Oriented3DRendererInterface::public_computeGlobalOrientation3D()
	static int _bind_public_computeGlobalOrientation3D(lua_State *L) {
		if (!_lg_typecheck_public_computeGlobalOrientation3D(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface::public_computeGlobalOrientation3D() function, expected prototype:\nvoid SPK::Oriented3DRendererInterface::public_computeGlobalOrientation3D()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_SPK_Oriented3DRendererInterface* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_SPK_Oriented3DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Oriented3DRendererInterface::public_computeGlobalOrientation3D(). Got : '%s'\n%s",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeGlobalOrientation3D();

		return 0;
	}

	// void SPK::Oriented3DRendererInterface::public_computeSingleOrientation3D(const SPK::Particle & particle)
	static int _bind_public_computeSingleOrientation3D(lua_State *L) {
		if (!_lg_typecheck_public_computeSingleOrientation3D(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface::public_computeSingleOrientation3D(const SPK::Particle & particle) function, expected prototype:\nvoid SPK::Oriented3DRendererInterface::public_computeSingleOrientation3D(const SPK::Particle & particle)\nClass arguments details:\narg 1 ID = 73657533\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Oriented3DRendererInterface::public_computeSingleOrientation3D function");
		}
		const SPK::Particle & particle=*particle_ptr;

		wrapper_SPK_Oriented3DRendererInterface* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_SPK_Oriented3DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Oriented3DRendererInterface::public_computeSingleOrientation3D(const SPK::Particle &). Got : '%s'\n%s",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeSingleOrientation3D(particle);

		return 0;
	}

	// void SPK::Oriented3DRendererInterface::public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	static int _bind_public_scaleQuadVectors(lua_State *L) {
		if (!_lg_typecheck_public_scaleQuadVectors(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface::public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const function, expected prototype:\nvoid SPK::Oriented3DRendererInterface::public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const\nClass arguments details:\narg 1 ID = 73657533\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Oriented3DRendererInterface::public_scaleQuadVectors function");
		}
		const SPK::Particle & particle=*particle_ptr;
		float scaleX=(float)lua_tonumber(L,3);
		float scaleY=(float)lua_tonumber(L,4);

		wrapper_SPK_Oriented3DRendererInterface* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_SPK_Oriented3DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Oriented3DRendererInterface::public_scaleQuadVectors(const SPK::Particle &, float, float) const. Got : '%s'\n%s",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_scaleQuadVectors(particle, scaleX, scaleY);

		return 0;
	}

	// void SPK::Oriented3DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	static int _bind_public_rotateAndScaleQuadVectors(lua_State *L) {
		if (!_lg_typecheck_public_rotateAndScaleQuadVectors(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const function, expected prototype:\nvoid SPK::Oriented3DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const\nClass arguments details:\narg 1 ID = 73657533\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Oriented3DRendererInterface::public_rotateAndScaleQuadVectors function");
		}
		const SPK::Particle & particle=*particle_ptr;
		float scaleX=(float)lua_tonumber(L,3);
		float scaleY=(float)lua_tonumber(L,4);

		wrapper_SPK_Oriented3DRendererInterface* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_SPK_Oriented3DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Oriented3DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle &, float, float) const. Got : '%s'\n%s",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_rotateAndScaleQuadVectors(particle, scaleX, scaleY);

		return 0;
	}

	// const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadUp() const
	static int _bind_public_quadUp(lua_State *L) {
		if (!_lg_typecheck_public_quadUp(L)) {
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadUp() const function, expected prototype:\nconst SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadUp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_SPK_Oriented3DRendererInterface* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_SPK_Oriented3DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadUp() const. Got : '%s'\n%s",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SPK::Vector3D* lret = &self->public_quadUp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadSide() const
	static int _bind_public_quadSide(lua_State *L) {
		if (!_lg_typecheck_public_quadSide(L)) {
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadSide() const function, expected prototype:\nconst SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadSide() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_SPK_Oriented3DRendererInterface* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_SPK_Oriented3DRendererInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadSide() const. Got : '%s'\n%s",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SPK::Vector3D* lret = &self->public_quadSide();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"precomputeOrientation3D",_bind_public_precomputeOrientation3D},
		{"computeGlobalOrientation3D",_bind_public_computeGlobalOrientation3D},
		{"computeSingleOrientation3D",_bind_public_computeSingleOrientation3D},
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

