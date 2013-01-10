#include <plug_common.h>

#include <luna/wrappers/wrapper_GL_GLRenderer.h>

class luna_wrapper_GL_GLRenderer {
public:
	typedef Luna< GL::GLRenderer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Registerable*)");
		}

		SPK::Registerable* rhs =(Luna< SPK::Registerable >::check(L,2));
		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Registerable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//GL::GLRenderer* ptr= dynamic_cast< GL::GLRenderer* >(Luna< SPK::Registerable >::check(L,1));
		GL::GLRenderer* ptr= luna_caster< SPK::Registerable, GL::GLRenderer >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GL::GLRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//GL::GLRenderer* ptr= dynamic_cast< GL::GLRenderer* >(Luna< SPK::BufferHandler >::check(L,1));
		GL::GLRenderer* ptr= luna_caster< SPK::BufferHandler, GL::GLRenderer >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GL::GLRenderer >::push(L,ptr,false);
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

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

		if( lua_isstring(L,2)==0 ) return false;
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

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setAlphaTestThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isRenderingHintEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_enableBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// GL::GLRenderer::GLRenderer(lua_Table * data)
	static GL::GLRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GL::GLRenderer::GLRenderer(lua_Table * data) function, expected prototype:\nGL::GLRenderer::GLRenderer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_GL_GLRenderer(L,NULL);
	}


	// Function binds:
	// void GL::GLRenderer::enableBlending(bool blendingEnabled)
	static int _bind_enableBlending(lua_State *L) {
		if (!_lg_typecheck_enableBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::enableBlending(bool blendingEnabled) function, expected prototype:\nvoid GL::GLRenderer::enableBlending(bool blendingEnabled)\nClass arguments details:\n");
		}

		bool blendingEnabled=(bool)(lua_toboolean(L,2)==1);

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::enableBlending(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->enableBlending(blendingEnabled);

		return 0;
	}

	// void GL::GLRenderer::setBlendingFunctions(unsigned int src, unsigned int dest)
	static int _bind_setBlendingFunctions(lua_State *L) {
		if (!_lg_typecheck_setBlendingFunctions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::setBlendingFunctions(unsigned int src, unsigned int dest) function, expected prototype:\nvoid GL::GLRenderer::setBlendingFunctions(unsigned int src, unsigned int dest)\nClass arguments details:\n");
		}

		unsigned int src=(unsigned int)lua_tointeger(L,2);
		unsigned int dest=(unsigned int)lua_tointeger(L,3);

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::setBlendingFunctions(unsigned int, unsigned int). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setBlendingFunctions(src, dest);

		return 0;
	}

	// void GL::GLRenderer::setBlending(SPK::BlendingMode blendMode)
	static int _bind_setBlending(lua_State *L) {
		if (!_lg_typecheck_setBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::setBlending(SPK::BlendingMode blendMode) function, expected prototype:\nvoid GL::GLRenderer::setBlending(SPK::BlendingMode blendMode)\nClass arguments details:\n");
		}

		SPK::BlendingMode blendMode=(SPK::BlendingMode)lua_tointeger(L,2);

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::setBlending(SPK::BlendingMode). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setBlending(blendMode);

		return 0;
	}

	// void GL::GLRenderer::setTextureBlending(unsigned int textureBlending)
	static int _bind_setTextureBlending(lua_State *L) {
		if (!_lg_typecheck_setTextureBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::setTextureBlending(unsigned int textureBlending) function, expected prototype:\nvoid GL::GLRenderer::setTextureBlending(unsigned int textureBlending)\nClass arguments details:\n");
		}

		unsigned int textureBlending=(unsigned int)lua_tointeger(L,2);

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::setTextureBlending(unsigned int). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setTextureBlending(textureBlending);

		return 0;
	}

	// bool GL::GLRenderer::isBlendingEnabled() const
	static int _bind_isBlendingEnabled(lua_State *L) {
		if (!_lg_typecheck_isBlendingEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GL::GLRenderer::isBlendingEnabled() const function, expected prototype:\nbool GL::GLRenderer::isBlendingEnabled() const\nClass arguments details:\n");
		}


		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GL::GLRenderer::isBlendingEnabled() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isBlendingEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int GL::GLRenderer::getSrcBlendingFunction() const
	static int _bind_getSrcBlendingFunction(lua_State *L) {
		if (!_lg_typecheck_getSrcBlendingFunction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int GL::GLRenderer::getSrcBlendingFunction() const function, expected prototype:\nunsigned int GL::GLRenderer::getSrcBlendingFunction() const\nClass arguments details:\n");
		}


		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int GL::GLRenderer::getSrcBlendingFunction() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		unsigned int lret = self->getSrcBlendingFunction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int GL::GLRenderer::getDestBlendingFunction() const
	static int _bind_getDestBlendingFunction(lua_State *L) {
		if (!_lg_typecheck_getDestBlendingFunction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int GL::GLRenderer::getDestBlendingFunction() const function, expected prototype:\nunsigned int GL::GLRenderer::getDestBlendingFunction() const\nClass arguments details:\n");
		}


		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int GL::GLRenderer::getDestBlendingFunction() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		unsigned int lret = self->getDestBlendingFunction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int GL::GLRenderer::getTextureBlending() const
	static int _bind_getTextureBlending(lua_State *L) {
		if (!_lg_typecheck_getTextureBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int GL::GLRenderer::getTextureBlending() const function, expected prototype:\nunsigned int GL::GLRenderer::getTextureBlending() const\nClass arguments details:\n");
		}


		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int GL::GLRenderer::getTextureBlending() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		unsigned int lret = self->getTextureBlending();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void GL::GLRenderer::saveGLStates()
	static int _bind_saveGLStates(lua_State *L) {
		if (!_lg_typecheck_saveGLStates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void GL::GLRenderer::saveGLStates() function, expected prototype:\nstatic void GL::GLRenderer::saveGLStates()\nClass arguments details:\n");
		}


		GL::GLRenderer::saveGLStates();

		return 0;
	}

	// static void GL::GLRenderer::restoreGLStates()
	static int _bind_restoreGLStates(lua_State *L) {
		if (!_lg_typecheck_restoreGLStates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void GL::GLRenderer::restoreGLStates() function, expected prototype:\nstatic void GL::GLRenderer::restoreGLStates()\nClass arguments details:\n");
		}


		GL::GLRenderer::restoreGLStates();

		return 0;
	}

	// SPK::Registerable * GL::GLRenderer::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * GL::GLRenderer::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * GL::GLRenderer::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * GL::GLRenderer::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->GLRenderer::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void GL::GLRenderer::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid GL::GLRenderer::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLRenderer::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::base_createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLRenderer::createBuffers(group);

		return 0;
	}

	// void GL::GLRenderer::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid GL::GLRenderer::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLRenderer::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::base_destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLRenderer::destroyBuffers(group);

		return 0;
	}

	// void GL::GLRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	static int _bind_base_enableRenderingHint(lua_State *L) {
		if (!_lg_typecheck_base_enableRenderingHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) function, expected prototype:\nvoid GL::GLRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::base_enableRenderingHint(SPK::RenderingHint, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLRenderer::enableRenderingHint(renderingHint, enable);

		return 0;
	}

	// void GL::GLRenderer::base_setAlphaTestThreshold(float alphaThreshold)
	static int _bind_base_setAlphaTestThreshold(lua_State *L) {
		if (!_lg_typecheck_base_setAlphaTestThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::base_setAlphaTestThreshold(float alphaThreshold) function, expected prototype:\nvoid GL::GLRenderer::base_setAlphaTestThreshold(float alphaThreshold)\nClass arguments details:\n");
		}

		float alphaThreshold=(float)lua_tonumber(L,2);

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::base_setAlphaTestThreshold(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLRenderer::setAlphaTestThreshold(alphaThreshold);

		return 0;
	}

	// bool GL::GLRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	static int _bind_base_isRenderingHintEnabled(lua_State *L) {
		if (!_lg_typecheck_base_isRenderingHintEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GL::GLRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const function, expected prototype:\nbool GL::GLRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GL::GLRenderer::base_isRenderingHintEnabled(SPK::RenderingHint) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->GLRenderer::isRenderingHintEnabled(renderingHint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GL::GLRenderer::base_enableBlending(bool blendingEnabled)
	static int _bind_base_enableBlending(lua_State *L) {
		if (!_lg_typecheck_base_enableBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::base_enableBlending(bool blendingEnabled) function, expected prototype:\nvoid GL::GLRenderer::base_enableBlending(bool blendingEnabled)\nClass arguments details:\n");
		}

		bool blendingEnabled=(bool)(lua_toboolean(L,2)==1);

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::base_enableBlending(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLRenderer::enableBlending(blendingEnabled);

		return 0;
	}

	// void GL::GLRenderer::base_setBlending(SPK::BlendingMode blendMode)
	static int _bind_base_setBlending(lua_State *L) {
		if (!_lg_typecheck_base_setBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::base_setBlending(SPK::BlendingMode blendMode) function, expected prototype:\nvoid GL::GLRenderer::base_setBlending(SPK::BlendingMode blendMode)\nClass arguments details:\n");
		}

		SPK::BlendingMode blendMode=(SPK::BlendingMode)lua_tointeger(L,2);

		GL::GLRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::base_setBlending(SPK::BlendingMode). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLRenderer::setBlending(blendMode);

		return 0;
	}


	// Operator binds:

};

GL::GLRenderer* LunaTraits< GL::GLRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_GL_GLRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void SPK::Renderer::render(const SPK::Group & group)
	// std::string SPK::Registerable::getClassName() const
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< GL::GLRenderer >::_bind_dtor(GL::GLRenderer* obj) {
	delete obj;
}

const char LunaTraits< GL::GLRenderer >::className[] = "GLRenderer";
const char LunaTraits< GL::GLRenderer >::fullName[] = "GL::GLRenderer";
const char LunaTraits< GL::GLRenderer >::moduleName[] = "spark";
const char* LunaTraits< GL::GLRenderer >::parents[] = {"spark.Renderer", 0};
const int LunaTraits< GL::GLRenderer >::hash = 54012031;
const int LunaTraits< GL::GLRenderer >::uniqueIDs[] = {31337102, 81662222,0};

luna_RegType LunaTraits< GL::GLRenderer >::methods[] = {
	{"enableBlending", &luna_wrapper_GL_GLRenderer::_bind_enableBlending},
	{"setBlendingFunctions", &luna_wrapper_GL_GLRenderer::_bind_setBlendingFunctions},
	{"setBlending", &luna_wrapper_GL_GLRenderer::_bind_setBlending},
	{"setTextureBlending", &luna_wrapper_GL_GLRenderer::_bind_setTextureBlending},
	{"isBlendingEnabled", &luna_wrapper_GL_GLRenderer::_bind_isBlendingEnabled},
	{"getSrcBlendingFunction", &luna_wrapper_GL_GLRenderer::_bind_getSrcBlendingFunction},
	{"getDestBlendingFunction", &luna_wrapper_GL_GLRenderer::_bind_getDestBlendingFunction},
	{"getTextureBlending", &luna_wrapper_GL_GLRenderer::_bind_getTextureBlending},
	{"saveGLStates", &luna_wrapper_GL_GLRenderer::_bind_saveGLStates},
	{"restoreGLStates", &luna_wrapper_GL_GLRenderer::_bind_restoreGLStates},
	{"base_findByName", &luna_wrapper_GL_GLRenderer::_bind_base_findByName},
	{"base_createBuffers", &luna_wrapper_GL_GLRenderer::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_GL_GLRenderer::_bind_base_destroyBuffers},
	{"base_enableRenderingHint", &luna_wrapper_GL_GLRenderer::_bind_base_enableRenderingHint},
	{"base_setAlphaTestThreshold", &luna_wrapper_GL_GLRenderer::_bind_base_setAlphaTestThreshold},
	{"base_isRenderingHintEnabled", &luna_wrapper_GL_GLRenderer::_bind_base_isRenderingHintEnabled},
	{"base_enableBlending", &luna_wrapper_GL_GLRenderer::_bind_base_enableBlending},
	{"base_setBlending", &luna_wrapper_GL_GLRenderer::_bind_base_setBlending},
	{"__eq", &luna_wrapper_GL_GLRenderer::_bind___eq},
	{"getTable", &luna_wrapper_GL_GLRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< GL::GLRenderer >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_GL_GLRenderer::_cast_from_Registerable},
	{"SPK::BufferHandler", &luna_wrapper_GL_GLRenderer::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< GL::GLRenderer >::enumValues[] = {
	{0,0}
};


