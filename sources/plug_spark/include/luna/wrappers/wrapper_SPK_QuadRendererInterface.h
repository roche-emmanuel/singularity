#ifndef _WRAPPERS_WRAPPER_SPK_QUADRENDERERINTERFACE_H_
#define _WRAPPERS_WRAPPER_SPK_QUADRENDERERINTERFACE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Extensions/Renderers/SPK_QuadRendererInterface.h>

class wrapper_SPK_QuadRendererInterface : public SPK::QuadRendererInterface, public luna_wrapper_base {

public:
		

	~wrapper_SPK_QuadRendererInterface() {
		logDEBUG3("Calling delete function for wrapper SPK_QuadRendererInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SPK::QuadRendererInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SPK_QuadRendererInterface(lua_State* L, lua_Table* dum, float scaleX = 1.0f, float scaleY = 1.0f) 
		: SPK::QuadRendererInterface(scaleX, scaleY), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SPK::QuadRendererInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool SPK::QuadRendererInterface::setTexturingMode(SPK::TexturingMode mode)
	bool setTexturingMode(SPK::TexturingMode mode) {
		if(_obj.pushFunction("setTexturingMode")) {
			_obj.pushArg((SPK::QuadRendererInterface*)this);
			_obj.pushArg((int)mode);
			return (_obj.callFunction<bool>());
		}

		return QuadRendererInterface::setTexturingMode(mode);
	};


	// Protected non-virtual methods:
	// void SPK::QuadRendererInterface::computeAtlasCoordinates(const SPK::Particle & particle) const
	void public_computeAtlasCoordinates(const SPK::Particle & particle) const {
		return SPK::QuadRendererInterface::computeAtlasCoordinates(particle);
	};

	// float SPK::QuadRendererInterface::textureAtlasU0() const
	float public_textureAtlasU0() const {
		return SPK::QuadRendererInterface::textureAtlasU0();
	};

	// float SPK::QuadRendererInterface::textureAtlasU1() const
	float public_textureAtlasU1() const {
		return SPK::QuadRendererInterface::textureAtlasU1();
	};

	// float SPK::QuadRendererInterface::textureAtlasV0() const
	float public_textureAtlasV0() const {
		return SPK::QuadRendererInterface::textureAtlasV0();
	};

	// float SPK::QuadRendererInterface::textureAtlasV1() const
	float public_textureAtlasV1() const {
		return SPK::QuadRendererInterface::textureAtlasV1();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_computeAtlasCoordinates(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_textureAtlasU0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_textureAtlasU1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_textureAtlasV0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_textureAtlasV1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void SPK::QuadRendererInterface::public_computeAtlasCoordinates(const SPK::Particle & particle) const
	static int _bind_public_computeAtlasCoordinates(lua_State *L) {
		if (!_lg_typecheck_public_computeAtlasCoordinates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::QuadRendererInterface::public_computeAtlasCoordinates(const SPK::Particle & particle) const function, expected prototype:\nvoid SPK::QuadRendererInterface::public_computeAtlasCoordinates(const SPK::Particle & particle) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		const SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::QuadRendererInterface::public_computeAtlasCoordinates function");
		}
		const SPK::Particle & particle=*particle_ptr;

		wrapper_SPK_QuadRendererInterface* self=Luna< SPK::QuadRendererInterface >::checkSubType< wrapper_SPK_QuadRendererInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::QuadRendererInterface::public_computeAtlasCoordinates(const SPK::Particle &) const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		self->public_computeAtlasCoordinates(particle);

		return 0;
	}

	// float SPK::QuadRendererInterface::public_textureAtlasU0() const
	static int _bind_public_textureAtlasU0(lua_State *L) {
		if (!_lg_typecheck_public_textureAtlasU0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::QuadRendererInterface::public_textureAtlasU0() const function, expected prototype:\nfloat SPK::QuadRendererInterface::public_textureAtlasU0() const\nClass arguments details:\n");
		}


		wrapper_SPK_QuadRendererInterface* self=Luna< SPK::QuadRendererInterface >::checkSubType< wrapper_SPK_QuadRendererInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::QuadRendererInterface::public_textureAtlasU0() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		float lret = self->public_textureAtlasU0();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::QuadRendererInterface::public_textureAtlasU1() const
	static int _bind_public_textureAtlasU1(lua_State *L) {
		if (!_lg_typecheck_public_textureAtlasU1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::QuadRendererInterface::public_textureAtlasU1() const function, expected prototype:\nfloat SPK::QuadRendererInterface::public_textureAtlasU1() const\nClass arguments details:\n");
		}


		wrapper_SPK_QuadRendererInterface* self=Luna< SPK::QuadRendererInterface >::checkSubType< wrapper_SPK_QuadRendererInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::QuadRendererInterface::public_textureAtlasU1() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		float lret = self->public_textureAtlasU1();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::QuadRendererInterface::public_textureAtlasV0() const
	static int _bind_public_textureAtlasV0(lua_State *L) {
		if (!_lg_typecheck_public_textureAtlasV0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::QuadRendererInterface::public_textureAtlasV0() const function, expected prototype:\nfloat SPK::QuadRendererInterface::public_textureAtlasV0() const\nClass arguments details:\n");
		}


		wrapper_SPK_QuadRendererInterface* self=Luna< SPK::QuadRendererInterface >::checkSubType< wrapper_SPK_QuadRendererInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::QuadRendererInterface::public_textureAtlasV0() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		float lret = self->public_textureAtlasV0();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::QuadRendererInterface::public_textureAtlasV1() const
	static int _bind_public_textureAtlasV1(lua_State *L) {
		if (!_lg_typecheck_public_textureAtlasV1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::QuadRendererInterface::public_textureAtlasV1() const function, expected prototype:\nfloat SPK::QuadRendererInterface::public_textureAtlasV1() const\nClass arguments details:\n");
		}


		wrapper_SPK_QuadRendererInterface* self=Luna< SPK::QuadRendererInterface >::checkSubType< wrapper_SPK_QuadRendererInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::QuadRendererInterface::public_textureAtlasV1() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		float lret = self->public_textureAtlasV1();
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"computeAtlasCoordinates",_bind_public_computeAtlasCoordinates},
		{"textureAtlasU0",_bind_public_textureAtlasU0},
		{"textureAtlasU1",_bind_public_textureAtlasU1},
		{"textureAtlasV0",_bind_public_textureAtlasV0},
		{"textureAtlasV1",_bind_public_textureAtlasV1},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

