#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_GL_GLPointRenderer.h>

class luna_wrapper_SPK_GL_GLPointRenderer {
public:
	typedef Luna< SPK::GL::GLPointRenderer > luna_t;

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
		//SPK::GL::GLPointRenderer* ptr= dynamic_cast< SPK::GL::GLPointRenderer* >(Luna< SPK::Registerable >::check(L,1));
		SPK::GL::GLPointRenderer* ptr= luna_caster< SPK::Registerable, SPK::GL::GLPointRenderer >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLPointRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLPointRenderer* ptr= dynamic_cast< SPK::GL::GLPointRenderer* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::GL::GLPointRenderer* ptr= luna_caster< SPK::BufferHandler, SPK::GL::GLPointRenderer >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLPointRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_PointRendererInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLPointRenderer* ptr= dynamic_cast< SPK::GL::GLPointRenderer* >(Luna< SPK::PointRendererInterface >::check(L,1));
		SPK::GL::GLPointRenderer* ptr= luna_caster< SPK::PointRendererInterface, SPK::GL::GLPointRenderer >::cast(Luna< SPK::PointRendererInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLPointRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GLExtHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLPointRenderer* ptr= dynamic_cast< SPK::GL::GLPointRenderer* >(Luna< SPK::GL::GLExtHandler >::check(L,1));
		SPK::GL::GLPointRenderer* ptr= luna_caster< SPK::GL::GLExtHandler, SPK::GL::GLPointRenderer >::cast(Luna< SPK::GL::GLExtHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLPointRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableWorldSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isWorldSizeEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_render(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_base_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_render(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::GL::GLPointRenderer::GLPointRenderer(lua_Table * data, float size = 1.0f)
	static SPK::GL::GLPointRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::GL::GLPointRenderer::GLPointRenderer(lua_Table * data, float size = 1.0f) function, expected prototype:\nSPK::GL::GLPointRenderer::GLPointRenderer(lua_Table * data, float size = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float size=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;

		return new wrapper_SPK_GL_GLPointRenderer(L,NULL, size);
	}


	// Function binds:
	// std::string SPK::GL::GLPointRenderer::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::GL::GLPointRenderer::getClassName() const function, expected prototype:\nstd::string SPK::GL::GLPointRenderer::getClassName() const\nClass arguments details:\n");
		}


		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::GL::GLPointRenderer::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool SPK::GL::GLPointRenderer::setType(SPK::PointType type)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLPointRenderer::setType(SPK::PointType type) function, expected prototype:\nbool SPK::GL::GLPointRenderer::setType(SPK::PointType type)\nClass arguments details:\n");
		}

		SPK::PointType type=(SPK::PointType)lua_tointeger(L,2);

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLPointRenderer::setType(SPK::PointType). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->setType(type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::GL::GLPointRenderer::setTexture(unsigned int textureIndex)
	static int _bind_setTexture(lua_State *L) {
		if (!_lg_typecheck_setTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLPointRenderer::setTexture(unsigned int textureIndex) function, expected prototype:\nvoid SPK::GL::GLPointRenderer::setTexture(unsigned int textureIndex)\nClass arguments details:\n");
		}

		unsigned int textureIndex=(unsigned int)lua_tointeger(L,2);

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLPointRenderer::setTexture(unsigned int). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setTexture(textureIndex);

		return 0;
	}

	// bool SPK::GL::GLPointRenderer::enableWorldSize(bool worldSizeEnabled)
	static int _bind_enableWorldSize(lua_State *L) {
		if (!_lg_typecheck_enableWorldSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLPointRenderer::enableWorldSize(bool worldSizeEnabled) function, expected prototype:\nbool SPK::GL::GLPointRenderer::enableWorldSize(bool worldSizeEnabled)\nClass arguments details:\n");
		}

		bool worldSizeEnabled=(bool)(lua_toboolean(L,2)==1);

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLPointRenderer::enableWorldSize(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->enableWorldSize(worldSizeEnabled);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int SPK::GL::GLPointRenderer::getTexture() const
	static int _bind_getTexture(lua_State *L) {
		if (!_lg_typecheck_getTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int SPK::GL::GLPointRenderer::getTexture() const function, expected prototype:\nunsigned int SPK::GL::GLPointRenderer::getTexture() const\nClass arguments details:\n");
		}


		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int SPK::GL::GLPointRenderer::getTexture() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		unsigned int lret = self->getTexture();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::GL::GLPointRenderer::isWorldSizeEnabled() const
	static int _bind_isWorldSizeEnabled(lua_State *L) {
		if (!_lg_typecheck_isWorldSizeEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLPointRenderer::isWorldSizeEnabled() const function, expected prototype:\nbool SPK::GL::GLPointRenderer::isWorldSizeEnabled() const\nClass arguments details:\n");
		}


		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLPointRenderer::isWorldSizeEnabled() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isWorldSizeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::GL::GLPointRenderer::render(const SPK::Group & group)
	static int _bind_render(lua_State *L) {
		if (!_lg_typecheck_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLPointRenderer::render(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLPointRenderer::render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLPointRenderer::render function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLPointRenderer::render(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->render(group);

		return 0;
	}

	// static SPK::GL::GLPointRenderer * SPK::GL::GLPointRenderer::create(float size = 1.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::GL::GLPointRenderer * SPK::GL::GLPointRenderer::create(float size = 1.0f) function, expected prototype:\nstatic SPK::GL::GLPointRenderer * SPK::GL::GLPointRenderer::create(float size = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float size=luatop>0 ? (float)lua_tonumber(L,1) : 1.0f;

		SPK::GL::GLPointRenderer * lret = SPK::GL::GLPointRenderer::create(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::GL::GLPointRenderer >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::GL::GLPointRenderer::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::GL::GLPointRenderer::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::GL::GLPointRenderer::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::GL::GLPointRenderer::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->GLPointRenderer::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::GL::GLPointRenderer::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLPointRenderer::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLPointRenderer::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLPointRenderer::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLPointRenderer::base_createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLPointRenderer::createBuffers(group);

		return 0;
	}

	// void SPK::GL::GLPointRenderer::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLPointRenderer::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLPointRenderer::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLPointRenderer::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLPointRenderer::base_destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLPointRenderer::destroyBuffers(group);

		return 0;
	}

	// void SPK::GL::GLPointRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	static int _bind_base_enableRenderingHint(lua_State *L) {
		if (!_lg_typecheck_base_enableRenderingHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLPointRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) function, expected prototype:\nvoid SPK::GL::GLPointRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLPointRenderer::base_enableRenderingHint(SPK::RenderingHint, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLPointRenderer::enableRenderingHint(renderingHint, enable);

		return 0;
	}

	// void SPK::GL::GLPointRenderer::base_setAlphaTestThreshold(float alphaThreshold)
	static int _bind_base_setAlphaTestThreshold(lua_State *L) {
		if (!_lg_typecheck_base_setAlphaTestThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLPointRenderer::base_setAlphaTestThreshold(float alphaThreshold) function, expected prototype:\nvoid SPK::GL::GLPointRenderer::base_setAlphaTestThreshold(float alphaThreshold)\nClass arguments details:\n");
		}

		float alphaThreshold=(float)lua_tonumber(L,2);

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLPointRenderer::base_setAlphaTestThreshold(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLPointRenderer::setAlphaTestThreshold(alphaThreshold);

		return 0;
	}

	// bool SPK::GL::GLPointRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	static int _bind_base_isRenderingHintEnabled(lua_State *L) {
		if (!_lg_typecheck_base_isRenderingHintEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLPointRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const function, expected prototype:\nbool SPK::GL::GLPointRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLPointRenderer::base_isRenderingHintEnabled(SPK::RenderingHint) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->GLPointRenderer::isRenderingHintEnabled(renderingHint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::GL::GLPointRenderer::base_enableBlending(bool blendingEnabled)
	static int _bind_base_enableBlending(lua_State *L) {
		if (!_lg_typecheck_base_enableBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLPointRenderer::base_enableBlending(bool blendingEnabled) function, expected prototype:\nvoid SPK::GL::GLPointRenderer::base_enableBlending(bool blendingEnabled)\nClass arguments details:\n");
		}

		bool blendingEnabled=(bool)(lua_toboolean(L,2)==1);

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLPointRenderer::base_enableBlending(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLPointRenderer::enableBlending(blendingEnabled);

		return 0;
	}

	// void SPK::GL::GLPointRenderer::base_setBlending(SPK::BlendingMode blendMode)
	static int _bind_base_setBlending(lua_State *L) {
		if (!_lg_typecheck_base_setBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLPointRenderer::base_setBlending(SPK::BlendingMode blendMode) function, expected prototype:\nvoid SPK::GL::GLPointRenderer::base_setBlending(SPK::BlendingMode blendMode)\nClass arguments details:\n");
		}

		SPK::BlendingMode blendMode=(SPK::BlendingMode)lua_tointeger(L,2);

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLPointRenderer::base_setBlending(SPK::BlendingMode). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLPointRenderer::setBlending(blendMode);

		return 0;
	}

	// void SPK::GL::GLPointRenderer::base_setSize(float size)
	static int _bind_base_setSize(lua_State *L) {
		if (!_lg_typecheck_base_setSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLPointRenderer::base_setSize(float size) function, expected prototype:\nvoid SPK::GL::GLPointRenderer::base_setSize(float size)\nClass arguments details:\n");
		}

		float size=(float)lua_tonumber(L,2);

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLPointRenderer::base_setSize(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLPointRenderer::setSize(size);

		return 0;
	}

	// std::string SPK::GL::GLPointRenderer::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::GL::GLPointRenderer::base_getClassName() const function, expected prototype:\nstd::string SPK::GL::GLPointRenderer::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::GL::GLPointRenderer::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->GLPointRenderer::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool SPK::GL::GLPointRenderer::base_setType(SPK::PointType type)
	static int _bind_base_setType(lua_State *L) {
		if (!_lg_typecheck_base_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLPointRenderer::base_setType(SPK::PointType type) function, expected prototype:\nbool SPK::GL::GLPointRenderer::base_setType(SPK::PointType type)\nClass arguments details:\n");
		}

		SPK::PointType type=(SPK::PointType)lua_tointeger(L,2);

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLPointRenderer::base_setType(SPK::PointType). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->GLPointRenderer::setType(type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::GL::GLPointRenderer::base_render(const SPK::Group & group)
	static int _bind_base_render(lua_State *L) {
		if (!_lg_typecheck_base_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLPointRenderer::base_render(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLPointRenderer::base_render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLPointRenderer::base_render function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLPointRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLPointRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLPointRenderer::base_render(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLPointRenderer::render(group);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_SPK_PointRendererInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_SPK_PointRendererInterface(lua_State *L) {
		if (!_lg_typecheck_baseCast_SPK_PointRendererInterface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCast_SPK_PointRendererInterface function, expected prototype:\nbaseCast()");
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		SPK::PointRendererInterface* res = luna_caster<SPK::Registerable,SPK::PointRendererInterface>::cast(self); // dynamic_cast<SPK::PointRendererInterface*>(self);
		if(!res)
			return 0;
			
		Luna< SPK::PointRendererInterface >::push(L,res,false);
		return 1;

	}

	inline static bool _lg_typecheck_baseCast_SPK_GL_GLExtHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_SPK_GL_GLExtHandler(lua_State *L) {
		if (!_lg_typecheck_baseCast_SPK_GL_GLExtHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCast_SPK_GL_GLExtHandler function, expected prototype:\nbaseCast()");
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		SPK::GL::GLExtHandler* res = luna_caster<SPK::Registerable,SPK::GL::GLExtHandler>::cast(self); // dynamic_cast<SPK::GL::GLExtHandler*>(self);
		if(!res)
			return 0;
			
		Luna< SPK::GL::GLExtHandler >::push(L,res,false);
		return 1;

	}

};

SPK::GL::GLPointRenderer* LunaTraits< SPK::GL::GLPointRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_GL_GLPointRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::GL::GLPointRenderer >::_bind_dtor(SPK::GL::GLPointRenderer* obj) {
	delete obj;
}

const char LunaTraits< SPK::GL::GLPointRenderer >::className[] = "GLPointRenderer";
const char LunaTraits< SPK::GL::GLPointRenderer >::fullName[] = "SPK::GL::GLPointRenderer";
const char LunaTraits< SPK::GL::GLPointRenderer >::moduleName[] = "spark";
const char* LunaTraits< SPK::GL::GLPointRenderer >::parents[] = {"spark.GLRenderer", "spark.PointRendererInterface", "spark.GLExtHandler", 0};
const int LunaTraits< SPK::GL::GLPointRenderer >::hash = 86277637;
const int LunaTraits< SPK::GL::GLPointRenderer >::uniqueIDs[] = {31337102, 81662222, 24217931, 94742166,0};

luna_RegType LunaTraits< SPK::GL::GLPointRenderer >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_getClassName},
	{"setType", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_setType},
	{"setTexture", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_setTexture},
	{"enableWorldSize", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_enableWorldSize},
	{"getTexture", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_getTexture},
	{"isWorldSizeEnabled", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_isWorldSizeEnabled},
	{"render", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_render},
	{"create", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_findByName},
	{"base_createBuffers", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_destroyBuffers},
	{"base_enableRenderingHint", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_enableRenderingHint},
	{"base_setAlphaTestThreshold", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_setAlphaTestThreshold},
	{"base_isRenderingHintEnabled", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_isRenderingHintEnabled},
	{"base_enableBlending", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_enableBlending},
	{"base_setBlending", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_setBlending},
	{"base_setSize", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_setSize},
	{"base_getClassName", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_getClassName},
	{"base_setType", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_setType},
	{"base_render", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_base_render},
	{"__eq", &luna_wrapper_SPK_GL_GLPointRenderer::_bind___eq},
	{"getTable", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_getTable},
	{"asPointRendererInterface", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_baseCast_SPK_PointRendererInterface},
	{"asGLExtHandler", &luna_wrapper_SPK_GL_GLPointRenderer::_bind_baseCast_SPK_GL_GLExtHandler},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::GL::GLPointRenderer >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_GL_GLPointRenderer::_cast_from_Registerable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_GL_GLPointRenderer::_cast_from_BufferHandler},
	{"SPK::PointRendererInterface", &luna_wrapper_SPK_GL_GLPointRenderer::_cast_from_PointRendererInterface},
	{"SPK::GL::GLExtHandler", &luna_wrapper_SPK_GL_GLPointRenderer::_cast_from_GLExtHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::GL::GLPointRenderer >::enumValues[] = {
	{0,0}
};


