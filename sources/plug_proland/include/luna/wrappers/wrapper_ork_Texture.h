#ifndef _WRAPPERS_WRAPPER_ORK_TEXTURE_H_
#define _WRAPPERS_WRAPPER_ORK_TEXTURE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Texture.h>

class wrapper_ork_Texture : public ork::Texture, public luna_wrapper_base {

public:
		

	~wrapper_ork_Texture() {
		logDEBUG3("Calling delete function for wrapper ork_Texture");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Texture*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Texture(lua_State* L, lua_Table* dum, const char * type, int target) 
		: ork::Texture(type, target), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Texture*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Texture::swap(ptr< ork::Texture > t)
	void swap(ptr< ork::Texture > t) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((ork::Texture*)this);
			_obj.pushArg(&t);
			return (_obj.callFunction<void>());
		}

		return Texture::swap(t);
	};

public:
	// Public virtual methods:

	// Protected non-virtual methods:
	// void ork::Texture::init(ork::TextureInternalFormat tf, const ork::Texture::Parameters & params)
	void public_init(ork::TextureInternalFormat tf, const ork::Texture::Parameters & params) {
		return ork::Texture::init(tf, params);
	};

	// int ork::Texture::bindToTextureUnit(ptr< Sampler > s, const std::vector< unsigned int > & programIds) const
	int public_bindToTextureUnit(ptr< Sampler > s, const std::vector< unsigned int > & programIds) const {
		return ork::Texture::bindToTextureUnit(s, programIds);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11747408) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_bindToTextureUnit(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,46184206) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27834872) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::Texture::public_init(ork::TextureInternalFormat tf, const ork::Texture::Parameters & params)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Texture::public_init(ork::TextureInternalFormat tf, const ork::Texture::Parameters & params) function, expected prototype:\nvoid ork::Texture::public_init(ork::TextureInternalFormat tf, const ork::Texture::Parameters & params)\nClass arguments details:\narg 2 ID = 11747408\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,2);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Texture::Parameters >::check(L,3));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in ork::Texture::public_init function");
		}
		const ork::Texture::Parameters & params=*params_ptr;

		wrapper_ork_Texture* self=Luna< ork::Object >::checkSubType< wrapper_ork_Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Texture::public_init(ork::TextureInternalFormat, const ork::Texture::Parameters &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(tf, params);

		return 0;
	}

	// int ork::Texture::public_bindToTextureUnit(ptr< Sampler > s, const std::vector< unsigned int > & programIds) const
	static int _bind_public_bindToTextureUnit(lua_State *L) {
		if (!_lg_typecheck_public_bindToTextureUnit(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Texture::public_bindToTextureUnit(ptr< Sampler > s, const std::vector< unsigned int > & programIds) const function, expected prototype:\nint ork::Texture::public_bindToTextureUnit(ptr< Sampler > s, const std::vector< unsigned int > & programIds) const\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Sampler >* s_ptr=(Luna< ptr< Sampler > >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::Texture::public_bindToTextureUnit function");
		}
		ptr< Sampler > s=*s_ptr;
		const std::vector< unsigned int >* programIds_ptr=(Luna< std::vector< unsigned int > >::check(L,3));
		if( !programIds_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg programIds in ork::Texture::public_bindToTextureUnit function");
		}
		const std::vector< unsigned int > & programIds=*programIds_ptr;

		wrapper_ork_Texture* self=Luna< ork::Object >::checkSubType< wrapper_ork_Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Texture::public_bindToTextureUnit(ptr< Sampler >, const std::vector< unsigned int > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_bindToTextureUnit(s, programIds);
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"bindToTextureUnit",_bind_public_bindToTextureUnit},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

