#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_GL_GLQuadRenderer.h>

class luna_wrapper_SPK_GL_GLQuadRenderer {
public:
	typedef Luna< SPK::GL::GLQuadRenderer > luna_t;

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

		SPK::GL::GLQuadRenderer* self= (SPK::GL::GLQuadRenderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::GL::GLQuadRenderer >::push(L,self,false);
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
		//SPK::GL::GLQuadRenderer* ptr= dynamic_cast< SPK::GL::GLQuadRenderer* >(Luna< SPK::Registerable >::check(L,1));
		SPK::GL::GLQuadRenderer* ptr= luna_caster< SPK::Registerable, SPK::GL::GLQuadRenderer >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLQuadRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLQuadRenderer* ptr= dynamic_cast< SPK::GL::GLQuadRenderer* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::GL::GLQuadRenderer* ptr= luna_caster< SPK::BufferHandler, SPK::GL::GLQuadRenderer >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLQuadRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_QuadRendererInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLQuadRenderer* ptr= dynamic_cast< SPK::GL::GLQuadRenderer* >(Luna< SPK::QuadRendererInterface >::check(L,1));
		SPK::GL::GLQuadRenderer* ptr= luna_caster< SPK::QuadRendererInterface, SPK::GL::GLQuadRenderer >::cast(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLQuadRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Oriented3DRendererInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLQuadRenderer* ptr= dynamic_cast< SPK::GL::GLQuadRenderer* >(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
		SPK::GL::GLQuadRenderer* ptr= luna_caster< SPK::Oriented3DRendererInterface, SPK::GL::GLQuadRenderer >::cast(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLQuadRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GLExtHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLQuadRenderer* ptr= dynamic_cast< SPK::GL::GLQuadRenderer* >(Luna< SPK::GL::GLExtHandler >::check(L,1));
		SPK::GL::GLQuadRenderer* ptr= luna_caster< SPK::GL::GLExtHandler, SPK::GL::GLQuadRenderer >::cast(Luna< SPK::GL::GLExtHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLQuadRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexturingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroyBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_render(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setTexturingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_render(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::GL::GLQuadRenderer::GLQuadRenderer(lua_Table * data, float scaleX = 1.0f, float scaleY = 1.0f)
	static SPK::GL::GLQuadRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in SPK::GL::GLQuadRenderer::GLQuadRenderer(lua_Table * data, float scaleX = 1.0f, float scaleY = 1.0f) function, expected prototype:\nSPK::GL::GLQuadRenderer::GLQuadRenderer(lua_Table * data, float scaleX = 1.0f, float scaleY = 1.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float scaleX=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;
		float scaleY=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;

		return new wrapper_SPK_GL_GLQuadRenderer(L,NULL, scaleX, scaleY);
	}


	// Function binds:
	// std::string SPK::GL::GLQuadRenderer::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::GL::GLQuadRenderer::getClassName() const function, expected prototype:\nstd::string SPK::GL::GLQuadRenderer::getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::GL::GLQuadRenderer::getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool SPK::GL::GLQuadRenderer::setTexturingMode(SPK::TexturingMode mode)
	static int _bind_setTexturingMode(lua_State *L) {
		if (!_lg_typecheck_setTexturingMode(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLQuadRenderer::setTexturingMode(SPK::TexturingMode mode) function, expected prototype:\nbool SPK::GL::GLQuadRenderer::setTexturingMode(SPK::TexturingMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::TexturingMode mode=(SPK::TexturingMode)lua_tointeger(L,2);

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLQuadRenderer::setTexturingMode(SPK::TexturingMode). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setTexturingMode(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::GL::GLQuadRenderer::setTexture(unsigned int textureIndex)
	static int _bind_setTexture(lua_State *L) {
		if (!_lg_typecheck_setTexture(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLQuadRenderer::setTexture(unsigned int textureIndex) function, expected prototype:\nvoid SPK::GL::GLQuadRenderer::setTexture(unsigned int textureIndex)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int textureIndex=(unsigned int)lua_tointeger(L,2);

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLQuadRenderer::setTexture(unsigned int). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTexture(textureIndex);

		return 0;
	}

	// unsigned int SPK::GL::GLQuadRenderer::getTexture() const
	static int _bind_getTexture(lua_State *L) {
		if (!_lg_typecheck_getTexture(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SPK::GL::GLQuadRenderer::getTexture() const function, expected prototype:\nunsigned int SPK::GL::GLQuadRenderer::getTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SPK::GL::GLQuadRenderer::getTexture() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTexture();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SPK::GL::GLQuadRenderer::createBuffers(const SPK::Group & group)
	static int _bind_createBuffers(lua_State *L) {
		if (!_lg_typecheck_createBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLQuadRenderer::createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLQuadRenderer::createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLQuadRenderer::createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLQuadRenderer::createBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->createBuffers(group);

		return 0;
	}

	// void SPK::GL::GLQuadRenderer::destroyBuffers(const SPK::Group & group)
	static int _bind_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_destroyBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLQuadRenderer::destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLQuadRenderer::destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLQuadRenderer::destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLQuadRenderer::destroyBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->destroyBuffers(group);

		return 0;
	}

	// void SPK::GL::GLQuadRenderer::render(const SPK::Group & group)
	static int _bind_render(lua_State *L) {
		if (!_lg_typecheck_render(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLQuadRenderer::render(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLQuadRenderer::render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLQuadRenderer::render function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLQuadRenderer::render(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->render(group);

		return 0;
	}

	// static SPK::GL::GLQuadRenderer * SPK::GL::GLQuadRenderer::create(float scaleX = 1.0f, float scaleY = 1.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luaL_error(L, "luna typecheck failed in static SPK::GL::GLQuadRenderer * SPK::GL::GLQuadRenderer::create(float scaleX = 1.0f, float scaleY = 1.0f) function, expected prototype:\nstatic SPK::GL::GLQuadRenderer * SPK::GL::GLQuadRenderer::create(float scaleX = 1.0f, float scaleY = 1.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float scaleX=luatop>0 ? (float)lua_tonumber(L,1) : (float)1.0f;
		float scaleY=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;

		SPK::GL::GLQuadRenderer * lret = SPK::GL::GLQuadRenderer::create(scaleX, scaleY);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::GL::GLQuadRenderer >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::GL::GLQuadRenderer::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::GL::GLQuadRenderer::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::GL::GLQuadRenderer::base_findByName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::GL::GLQuadRenderer::base_findByName(const std::string &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Registerable * lret = self->GLQuadRenderer::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::GL::GLQuadRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	static int _bind_base_enableRenderingHint(lua_State *L) {
		if (!_lg_typecheck_base_enableRenderingHint(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLQuadRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) function, expected prototype:\nvoid SPK::GL::GLQuadRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLQuadRenderer::base_enableRenderingHint(SPK::RenderingHint, bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLQuadRenderer::enableRenderingHint(renderingHint, enable);

		return 0;
	}

	// void SPK::GL::GLQuadRenderer::base_setAlphaTestThreshold(float alphaThreshold)
	static int _bind_base_setAlphaTestThreshold(lua_State *L) {
		if (!_lg_typecheck_base_setAlphaTestThreshold(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLQuadRenderer::base_setAlphaTestThreshold(float alphaThreshold) function, expected prototype:\nvoid SPK::GL::GLQuadRenderer::base_setAlphaTestThreshold(float alphaThreshold)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float alphaThreshold=(float)lua_tonumber(L,2);

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLQuadRenderer::base_setAlphaTestThreshold(float). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLQuadRenderer::setAlphaTestThreshold(alphaThreshold);

		return 0;
	}

	// bool SPK::GL::GLQuadRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	static int _bind_base_isRenderingHintEnabled(lua_State *L) {
		if (!_lg_typecheck_base_isRenderingHintEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLQuadRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const function, expected prototype:\nbool SPK::GL::GLQuadRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLQuadRenderer::base_isRenderingHintEnabled(SPK::RenderingHint) const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GLQuadRenderer::isRenderingHintEnabled(renderingHint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::GL::GLQuadRenderer::base_enableBlending(bool blendingEnabled)
	static int _bind_base_enableBlending(lua_State *L) {
		if (!_lg_typecheck_base_enableBlending(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLQuadRenderer::base_enableBlending(bool blendingEnabled) function, expected prototype:\nvoid SPK::GL::GLQuadRenderer::base_enableBlending(bool blendingEnabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool blendingEnabled=(bool)(lua_toboolean(L,2)==1);

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLQuadRenderer::base_enableBlending(bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLQuadRenderer::enableBlending(blendingEnabled);

		return 0;
	}

	// void SPK::GL::GLQuadRenderer::base_setBlending(SPK::BlendingMode blendMode)
	static int _bind_base_setBlending(lua_State *L) {
		if (!_lg_typecheck_base_setBlending(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLQuadRenderer::base_setBlending(SPK::BlendingMode blendMode) function, expected prototype:\nvoid SPK::GL::GLQuadRenderer::base_setBlending(SPK::BlendingMode blendMode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::BlendingMode blendMode=(SPK::BlendingMode)lua_tointeger(L,2);

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLQuadRenderer::base_setBlending(SPK::BlendingMode). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLQuadRenderer::setBlending(blendMode);

		return 0;
	}

	// std::string SPK::GL::GLQuadRenderer::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luaL_error(L, "luna typecheck failed in std::string SPK::GL::GLQuadRenderer::base_getClassName() const function, expected prototype:\nstd::string SPK::GL::GLQuadRenderer::base_getClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string SPK::GL::GLQuadRenderer::base_getClassName() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->GLQuadRenderer::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool SPK::GL::GLQuadRenderer::base_setTexturingMode(SPK::TexturingMode mode)
	static int _bind_base_setTexturingMode(lua_State *L) {
		if (!_lg_typecheck_base_setTexturingMode(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLQuadRenderer::base_setTexturingMode(SPK::TexturingMode mode) function, expected prototype:\nbool SPK::GL::GLQuadRenderer::base_setTexturingMode(SPK::TexturingMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::TexturingMode mode=(SPK::TexturingMode)lua_tointeger(L,2);

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLQuadRenderer::base_setTexturingMode(SPK::TexturingMode). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GLQuadRenderer::setTexturingMode(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::GL::GLQuadRenderer::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLQuadRenderer::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLQuadRenderer::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLQuadRenderer::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLQuadRenderer::base_createBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLQuadRenderer::createBuffers(group);

		return 0;
	}

	// void SPK::GL::GLQuadRenderer::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLQuadRenderer::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLQuadRenderer::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLQuadRenderer::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLQuadRenderer::base_destroyBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLQuadRenderer::destroyBuffers(group);

		return 0;
	}

	// void SPK::GL::GLQuadRenderer::base_render(const SPK::Group & group)
	static int _bind_base_render(lua_State *L) {
		if (!_lg_typecheck_base_render(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLQuadRenderer::base_render(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLQuadRenderer::base_render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLQuadRenderer::base_render function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLQuadRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLQuadRenderer::base_render(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLQuadRenderer::render(group);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_SPK_QuadRendererInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_SPK_QuadRendererInterface(lua_State *L) {
		if (!_lg_typecheck_baseCast_SPK_QuadRendererInterface(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_SPK_QuadRendererInterface function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		SPK::QuadRendererInterface* res = luna_caster<SPK::Registerable,SPK::QuadRendererInterface>::cast(self); // dynamic_cast<SPK::QuadRendererInterface*>(self);
		if(!res)
			return 0;
			
		Luna< SPK::QuadRendererInterface >::push(L,res,false);
		return 1;

	}

	inline static bool _lg_typecheck_baseCast_SPK_Oriented3DRendererInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_SPK_Oriented3DRendererInterface(lua_State *L) {
		if (!_lg_typecheck_baseCast_SPK_Oriented3DRendererInterface(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_SPK_Oriented3DRendererInterface function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		SPK::Oriented3DRendererInterface* res = luna_caster<SPK::Registerable,SPK::Oriented3DRendererInterface>::cast(self); // dynamic_cast<SPK::Oriented3DRendererInterface*>(self);
		if(!res)
			return 0;
			
		Luna< SPK::Oriented3DRendererInterface >::push(L,res,false);
		return 1;

	}

	inline static bool _lg_typecheck_baseCast_SPK_GL_GLExtHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_SPK_GL_GLExtHandler(lua_State *L) {
		if (!_lg_typecheck_baseCast_SPK_GL_GLExtHandler(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_SPK_GL_GLExtHandler function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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

SPK::GL::GLQuadRenderer* LunaTraits< SPK::GL::GLQuadRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_GL_GLQuadRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::GL::GLQuadRenderer >::_bind_dtor(SPK::GL::GLQuadRenderer* obj) {
	delete obj;
}

const char LunaTraits< SPK::GL::GLQuadRenderer >::className[] = "GLQuadRenderer";
const char LunaTraits< SPK::GL::GLQuadRenderer >::fullName[] = "SPK::GL::GLQuadRenderer";
const char LunaTraits< SPK::GL::GLQuadRenderer >::moduleName[] = "spark";
const char* LunaTraits< SPK::GL::GLQuadRenderer >::parents[] = {"spark.GLRenderer", "spark.QuadRendererInterface", "spark.Oriented3DRendererInterface", "spark.GLExtHandler", 0};
const int LunaTraits< SPK::GL::GLQuadRenderer >::hash = 97617862;
const int LunaTraits< SPK::GL::GLQuadRenderer >::uniqueIDs[] = {31337102, 81662222, 74399712, 95637678, 94742166,0};

luna_RegType LunaTraits< SPK::GL::GLQuadRenderer >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_getClassName},
	{"setTexturingMode", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_setTexturingMode},
	{"setTexture", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_setTexture},
	{"getTexture", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_getTexture},
	{"createBuffers", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_createBuffers},
	{"destroyBuffers", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_destroyBuffers},
	{"render", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_render},
	{"create", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_base_findByName},
	{"base_enableRenderingHint", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_base_enableRenderingHint},
	{"base_setAlphaTestThreshold", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_base_setAlphaTestThreshold},
	{"base_isRenderingHintEnabled", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_base_isRenderingHintEnabled},
	{"base_enableBlending", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_base_enableBlending},
	{"base_setBlending", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_base_setBlending},
	{"base_getClassName", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_base_getClassName},
	{"base_setTexturingMode", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_base_setTexturingMode},
	{"base_createBuffers", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_base_destroyBuffers},
	{"base_render", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_base_render},
	{"fromVoid", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_getTable},
	{"asQuadRendererInterface", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_baseCast_SPK_QuadRendererInterface},
	{"asOriented3DRendererInterface", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_baseCast_SPK_Oriented3DRendererInterface},
	{"asGLExtHandler", &luna_wrapper_SPK_GL_GLQuadRenderer::_bind_baseCast_SPK_GL_GLExtHandler},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::GL::GLQuadRenderer >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_GL_GLQuadRenderer::_cast_from_Registerable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_GL_GLQuadRenderer::_cast_from_BufferHandler},
	{"SPK::QuadRendererInterface", &luna_wrapper_SPK_GL_GLQuadRenderer::_cast_from_QuadRendererInterface},
	{"SPK::Oriented3DRendererInterface", &luna_wrapper_SPK_GL_GLQuadRenderer::_cast_from_Oriented3DRendererInterface},
	{"SPK::GL::GLExtHandler", &luna_wrapper_SPK_GL_GLQuadRenderer::_cast_from_GLExtHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::GL::GLQuadRenderer >::enumValues[] = {
	{0,0}
};


