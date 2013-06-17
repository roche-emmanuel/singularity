#ifndef _WRAPPERS_WRAPPER_ORK_UNIFORMBLOCK_H_
#define _WRAPPERS_WRAPPER_ORK_UNIFORMBLOCK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Uniform.h>

class wrapper_ork_UniformBlock : public ork::UniformBlock, public luna_wrapper_base {

public:
		

	~wrapper_ork_UniformBlock() {
		logDEBUG3("Calling delete function for wrapper ork_UniformBlock");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::UniformBlock*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_UniformBlock(lua_State* L, lua_Table* dum, ork::Program * program, const std::string & name, unsigned int index, unsigned int size) 
		: ork::UniformBlock(program, name, index, size), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::UniformBlock*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// static ptr< ork::GPUBuffer > ork::UniformBlock::newBuffer(std::string name)
	static ptr< ork::GPUBuffer > public_newBuffer(std::string name) {
		return ork::UniformBlock::newBuffer(name);
	};

	// bool ork::UniformBlock::isMapped() const
	bool public_isMapped() const {
		return ork::UniformBlock::isMapped();
	};

	// void ork::UniformBlock::unmapBuffer()
	void public_unmapBuffer() {
		return ork::UniformBlock::unmapBuffer();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_newBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_isMapped(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_unmapBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// static ptr< ork::GPUBuffer > ork::UniformBlock::public_newBuffer(std::string name)
	static int _bind_public_newBuffer(lua_State *L) {
		if (!_lg_typecheck_public_newBuffer(L)) {
			luaL_error(L, "luna typecheck failed in static ptr< ork::GPUBuffer > ork::UniformBlock::public_newBuffer(std::string name) function, expected prototype:\nstatic ptr< ork::GPUBuffer > ork::UniformBlock::public_newBuffer(std::string name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,1),lua_objlen(L,1));

		wrapper_ork_UniformBlock* self=Luna< ork::Object >::checkSubType< wrapper_ork_UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static ptr< ork::GPUBuffer > ork::UniformBlock::public_newBuffer(std::string). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ptr< ork::GPUBuffer > lret = self->public_newBuffer(name);
		Luna< ork::GPUBuffer >::push(L,lret.get(),false);

		return 1;
	}

	// bool ork::UniformBlock::public_isMapped() const
	static int _bind_public_isMapped(lua_State *L) {
		if (!_lg_typecheck_public_isMapped(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::UniformBlock::public_isMapped() const function, expected prototype:\nbool ork::UniformBlock::public_isMapped() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_ork_UniformBlock* self=Luna< ork::Object >::checkSubType< wrapper_ork_UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::UniformBlock::public_isMapped() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_isMapped();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::UniformBlock::public_unmapBuffer()
	static int _bind_public_unmapBuffer(lua_State *L) {
		if (!_lg_typecheck_public_unmapBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void ork::UniformBlock::public_unmapBuffer() function, expected prototype:\nvoid ork::UniformBlock::public_unmapBuffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_ork_UniformBlock* self=Luna< ork::Object >::checkSubType< wrapper_ork_UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::UniformBlock::public_unmapBuffer(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_unmapBuffer();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"newBuffer",_bind_public_newBuffer},
		{"isMapped",_bind_public_isMapped},
		{"unmapBuffer",_bind_public_unmapBuffer},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

