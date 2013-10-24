#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_GL_GLRenderer.h>

class luna_wrapper_SPK_GL_GLRenderer {
public:
	typedef Luna< SPK::GL::GLRenderer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<SPK::Registerable,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SPK::GL::GLRenderer* self= (SPK::GL::GLRenderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::GL::GLRenderer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Registerable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLRenderer* ptr= dynamic_cast< SPK::GL::GLRenderer* >(Luna< SPK::Registerable >::check(L,1));
		SPK::GL::GLRenderer* ptr= luna_caster< SPK::Registerable, SPK::GL::GLRenderer >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLRenderer* ptr= dynamic_cast< SPK::GL::GLRenderer* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::GL::GLRenderer* ptr= luna_caster< SPK::BufferHandler, SPK::GL::GLRenderer >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_enableBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlendingFunctions(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBlendingEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSrcBlendingFunction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDestBlendingFunction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureBlending(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_saveGLStates(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_restoreGLStates(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_createBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_destroyBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_enableRenderingHint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setAlphaTestThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isRenderingHintEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_enableBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::GL::GLRenderer::GLRenderer(lua_Table * data)
	static SPK::GL::GLRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in SPK::GL::GLRenderer::GLRenderer(lua_Table * data) function, expected prototype:\nSPK::GL::GLRenderer::GLRenderer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_SPK_GL_GLRenderer(L,NULL);
	}


	// Function binds:
	// void SPK::GL::GLRenderer::enableBlending(bool blendingEnabled)
	static int _bind_enableBlending(lua_State *L) {
		if (!_lg_typecheck_enableBlending(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::enableBlending(bool blendingEnabled) function, expected prototype:\nvoid SPK::GL::GLRenderer::enableBlending(bool blendingEnabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool blendingEnabled=(bool)(lua_toboolean(L,2)==1);

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::enableBlending(bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->enableBlending(blendingEnabled);

		return 0;
	}

	// void SPK::GL::GLRenderer::setBlendingFunctions(unsigned int src, unsigned int dest)
	static int _bind_setBlendingFunctions(lua_State *L) {
		if (!_lg_typecheck_setBlendingFunctions(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::setBlendingFunctions(unsigned int src, unsigned int dest) function, expected prototype:\nvoid SPK::GL::GLRenderer::setBlendingFunctions(unsigned int src, unsigned int dest)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int src=(unsigned int)lua_tointeger(L,2);
		unsigned int dest=(unsigned int)lua_tointeger(L,3);

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::setBlendingFunctions(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlendingFunctions(src, dest);

		return 0;
	}

	// void SPK::GL::GLRenderer::setBlending(SPK::BlendingMode blendMode)
	static int _bind_setBlending(lua_State *L) {
		if (!_lg_typecheck_setBlending(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::setBlending(SPK::BlendingMode blendMode) function, expected prototype:\nvoid SPK::GL::GLRenderer::setBlending(SPK::BlendingMode blendMode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::BlendingMode blendMode=(SPK::BlendingMode)lua_tointeger(L,2);

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::setBlending(SPK::BlendingMode). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlending(blendMode);

		return 0;
	}

	// void SPK::GL::GLRenderer::setTextureBlending(unsigned int textureBlending)
	static int _bind_setTextureBlending(lua_State *L) {
		if (!_lg_typecheck_setTextureBlending(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::setTextureBlending(unsigned int textureBlending) function, expected prototype:\nvoid SPK::GL::GLRenderer::setTextureBlending(unsigned int textureBlending)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int textureBlending=(unsigned int)lua_tointeger(L,2);

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::setTextureBlending(unsigned int). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureBlending(textureBlending);

		return 0;
	}

	// bool SPK::GL::GLRenderer::isBlendingEnabled() const
	static int _bind_isBlendingEnabled(lua_State *L) {
		if (!_lg_typecheck_isBlendingEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLRenderer::isBlendingEnabled() const function, expected prototype:\nbool SPK::GL::GLRenderer::isBlendingEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLRenderer::isBlendingEnabled() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isBlendingEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int SPK::GL::GLRenderer::getSrcBlendingFunction() const
	static int _bind_getSrcBlendingFunction(lua_State *L) {
		if (!_lg_typecheck_getSrcBlendingFunction(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SPK::GL::GLRenderer::getSrcBlendingFunction() const function, expected prototype:\nunsigned int SPK::GL::GLRenderer::getSrcBlendingFunction() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SPK::GL::GLRenderer::getSrcBlendingFunction() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getSrcBlendingFunction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SPK::GL::GLRenderer::getDestBlendingFunction() const
	static int _bind_getDestBlendingFunction(lua_State *L) {
		if (!_lg_typecheck_getDestBlendingFunction(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SPK::GL::GLRenderer::getDestBlendingFunction() const function, expected prototype:\nunsigned int SPK::GL::GLRenderer::getDestBlendingFunction() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SPK::GL::GLRenderer::getDestBlendingFunction() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDestBlendingFunction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SPK::GL::GLRenderer::getTextureBlending() const
	static int _bind_getTextureBlending(lua_State *L) {
		if (!_lg_typecheck_getTextureBlending(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SPK::GL::GLRenderer::getTextureBlending() const function, expected prototype:\nunsigned int SPK::GL::GLRenderer::getTextureBlending() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SPK::GL::GLRenderer::getTextureBlending() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTextureBlending();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void SPK::GL::GLRenderer::saveGLStates()
	static int _bind_saveGLStates(lua_State *L) {
		if (!_lg_typecheck_saveGLStates(L)) {
			luaL_error(L, "luna typecheck failed in static void SPK::GL::GLRenderer::saveGLStates() function, expected prototype:\nstatic void SPK::GL::GLRenderer::saveGLStates()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::GL::GLRenderer::saveGLStates();

		return 0;
	}

	// static void SPK::GL::GLRenderer::restoreGLStates()
	static int _bind_restoreGLStates(lua_State *L) {
		if (!_lg_typecheck_restoreGLStates(L)) {
			luaL_error(L, "luna typecheck failed in static void SPK::GL::GLRenderer::restoreGLStates() function, expected prototype:\nstatic void SPK::GL::GLRenderer::restoreGLStates()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::GL::GLRenderer::restoreGLStates();

		return 0;
	}

	// SPK::Registerable * SPK::GL::GLRenderer::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::GL::GLRenderer::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::GL::GLRenderer::base_findByName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::GL::GLRenderer::base_findByName(const std::string &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Registerable * lret = self->GLRenderer::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::GL::GLRenderer::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLRenderer::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLRenderer::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::base_createBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLRenderer::createBuffers(group);

		return 0;
	}

	// void SPK::GL::GLRenderer::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLRenderer::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLRenderer::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::base_destroyBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLRenderer::destroyBuffers(group);

		return 0;
	}

	// void SPK::GL::GLRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	static int _bind_base_enableRenderingHint(lua_State *L) {
		if (!_lg_typecheck_base_enableRenderingHint(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) function, expected prototype:\nvoid SPK::GL::GLRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::base_enableRenderingHint(SPK::RenderingHint, bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLRenderer::enableRenderingHint(renderingHint, enable);

		return 0;
	}

	// void SPK::GL::GLRenderer::base_setAlphaTestThreshold(float alphaThreshold)
	static int _bind_base_setAlphaTestThreshold(lua_State *L) {
		if (!_lg_typecheck_base_setAlphaTestThreshold(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::base_setAlphaTestThreshold(float alphaThreshold) function, expected prototype:\nvoid SPK::GL::GLRenderer::base_setAlphaTestThreshold(float alphaThreshold)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float alphaThreshold=(float)lua_tonumber(L,2);

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::base_setAlphaTestThreshold(float). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLRenderer::setAlphaTestThreshold(alphaThreshold);

		return 0;
	}

	// bool SPK::GL::GLRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	static int _bind_base_isRenderingHintEnabled(lua_State *L) {
		if (!_lg_typecheck_base_isRenderingHintEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const function, expected prototype:\nbool SPK::GL::GLRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLRenderer::base_isRenderingHintEnabled(SPK::RenderingHint) const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GLRenderer::isRenderingHintEnabled(renderingHint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::GL::GLRenderer::base_enableBlending(bool blendingEnabled)
	static int _bind_base_enableBlending(lua_State *L) {
		if (!_lg_typecheck_base_enableBlending(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::base_enableBlending(bool blendingEnabled) function, expected prototype:\nvoid SPK::GL::GLRenderer::base_enableBlending(bool blendingEnabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool blendingEnabled=(bool)(lua_toboolean(L,2)==1);

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::base_enableBlending(bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLRenderer::enableBlending(blendingEnabled);

		return 0;
	}

	// void SPK::GL::GLRenderer::base_setBlending(SPK::BlendingMode blendMode)
	static int _bind_base_setBlending(lua_State *L) {
		if (!_lg_typecheck_base_setBlending(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::base_setBlending(SPK::BlendingMode blendMode) function, expected prototype:\nvoid SPK::GL::GLRenderer::base_setBlending(SPK::BlendingMode blendMode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::BlendingMode blendMode=(SPK::BlendingMode)lua_tointeger(L,2);

		SPK::GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::base_setBlending(SPK::BlendingMode). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLRenderer::setBlending(blendMode);

		return 0;
	}


	// Operator binds:

};

SPK::GL::GLRenderer* LunaTraits< SPK::GL::GLRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_GL_GLRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void SPK::Renderer::render(const SPK::Group & group)
	// std::string SPK::Registerable::getClassName() const
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::GL::GLRenderer >::_bind_dtor(SPK::GL::GLRenderer* obj) {
	delete obj;
}

const char LunaTraits< SPK::GL::GLRenderer >::className[] = "GLRenderer";
const char LunaTraits< SPK::GL::GLRenderer >::fullName[] = "SPK::GL::GLRenderer";
const char LunaTraits< SPK::GL::GLRenderer >::moduleName[] = "spark";
const char* LunaTraits< SPK::GL::GLRenderer >::parents[] = {"spark.Renderer", 0};
const int LunaTraits< SPK::GL::GLRenderer >::hash = 7897638;
const int LunaTraits< SPK::GL::GLRenderer >::uniqueIDs[] = {31337102, 81662222,0};

luna_RegType LunaTraits< SPK::GL::GLRenderer >::methods[] = {
	{"enableBlending", &luna_wrapper_SPK_GL_GLRenderer::_bind_enableBlending},
	{"setBlendingFunctions", &luna_wrapper_SPK_GL_GLRenderer::_bind_setBlendingFunctions},
	{"setBlending", &luna_wrapper_SPK_GL_GLRenderer::_bind_setBlending},
	{"setTextureBlending", &luna_wrapper_SPK_GL_GLRenderer::_bind_setTextureBlending},
	{"isBlendingEnabled", &luna_wrapper_SPK_GL_GLRenderer::_bind_isBlendingEnabled},
	{"getSrcBlendingFunction", &luna_wrapper_SPK_GL_GLRenderer::_bind_getSrcBlendingFunction},
	{"getDestBlendingFunction", &luna_wrapper_SPK_GL_GLRenderer::_bind_getDestBlendingFunction},
	{"getTextureBlending", &luna_wrapper_SPK_GL_GLRenderer::_bind_getTextureBlending},
	{"saveGLStates", &luna_wrapper_SPK_GL_GLRenderer::_bind_saveGLStates},
	{"restoreGLStates", &luna_wrapper_SPK_GL_GLRenderer::_bind_restoreGLStates},
	{"base_findByName", &luna_wrapper_SPK_GL_GLRenderer::_bind_base_findByName},
	{"base_createBuffers", &luna_wrapper_SPK_GL_GLRenderer::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_GL_GLRenderer::_bind_base_destroyBuffers},
	{"base_enableRenderingHint", &luna_wrapper_SPK_GL_GLRenderer::_bind_base_enableRenderingHint},
	{"base_setAlphaTestThreshold", &luna_wrapper_SPK_GL_GLRenderer::_bind_base_setAlphaTestThreshold},
	{"base_isRenderingHintEnabled", &luna_wrapper_SPK_GL_GLRenderer::_bind_base_isRenderingHintEnabled},
	{"base_enableBlending", &luna_wrapper_SPK_GL_GLRenderer::_bind_base_enableBlending},
	{"base_setBlending", &luna_wrapper_SPK_GL_GLRenderer::_bind_base_setBlending},
	{"fromVoid", &luna_wrapper_SPK_GL_GLRenderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_GL_GLRenderer::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_GL_GLRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::GL::GLRenderer >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_GL_GLRenderer::_cast_from_Registerable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_GL_GLRenderer::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::GL::GLRenderer >::enumValues[] = {
	{0,0}
};


