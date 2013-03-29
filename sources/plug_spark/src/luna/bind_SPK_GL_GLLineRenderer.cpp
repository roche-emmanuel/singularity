#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_GL_GLLineRenderer.h>

class luna_wrapper_SPK_GL_GLLineRenderer {
public:
	typedef Luna< SPK::GL::GLLineRenderer > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		SPK::GL::GLLineRenderer* self= (SPK::GL::GLLineRenderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::GL::GLLineRenderer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
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
		//SPK::GL::GLLineRenderer* ptr= dynamic_cast< SPK::GL::GLLineRenderer* >(Luna< SPK::Registerable >::check(L,1));
		SPK::GL::GLLineRenderer* ptr= luna_caster< SPK::Registerable, SPK::GL::GLLineRenderer >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLLineRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLLineRenderer* ptr= dynamic_cast< SPK::GL::GLLineRenderer* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::GL::GLLineRenderer* ptr= luna_caster< SPK::BufferHandler, SPK::GL::GLLineRenderer >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLLineRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_LineRendererInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLLineRenderer* ptr= dynamic_cast< SPK::GL::GLLineRenderer* >(Luna< SPK::LineRendererInterface >::check(L,1));
		SPK::GL::GLLineRenderer* ptr= luna_caster< SPK::LineRendererInterface, SPK::GL::GLLineRenderer >::cast(Luna< SPK::LineRendererInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLLineRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
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

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// SPK::GL::GLLineRenderer::GLLineRenderer(lua_Table * data, float length = 1.0f, float width = 1.0f)
	static SPK::GL::GLLineRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::GL::GLLineRenderer::GLLineRenderer(lua_Table * data, float length = 1.0f, float width = 1.0f) function, expected prototype:\nSPK::GL::GLLineRenderer::GLLineRenderer(lua_Table * data, float length = 1.0f, float width = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float length=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;
		float width=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;

		return new wrapper_SPK_GL_GLLineRenderer(L,NULL, length, width);
	}


	// Function binds:
	// std::string SPK::GL::GLLineRenderer::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::GL::GLLineRenderer::getClassName() const function, expected prototype:\nstd::string SPK::GL::GLLineRenderer::getClassName() const\nClass arguments details:\n");
		}


		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::GL::GLLineRenderer::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::GL::GLLineRenderer::createBuffers(const SPK::Group & group)
	static int _bind_createBuffers(lua_State *L) {
		if (!_lg_typecheck_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineRenderer::createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineRenderer::createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineRenderer::createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineRenderer::createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->createBuffers(group);

		return 0;
	}

	// void SPK::GL::GLLineRenderer::destroyBuffers(const SPK::Group & group)
	static int _bind_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineRenderer::destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineRenderer::destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineRenderer::destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineRenderer::destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->destroyBuffers(group);

		return 0;
	}

	// void SPK::GL::GLLineRenderer::render(const SPK::Group & group)
	static int _bind_render(lua_State *L) {
		if (!_lg_typecheck_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineRenderer::render(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineRenderer::render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineRenderer::render function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineRenderer::render(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->render(group);

		return 0;
	}

	// static SPK::GL::GLLineRenderer * SPK::GL::GLLineRenderer::create(float length = 1.0f, float width = 1.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::GL::GLLineRenderer * SPK::GL::GLLineRenderer::create(float length = 1.0f, float width = 1.0f) function, expected prototype:\nstatic SPK::GL::GLLineRenderer * SPK::GL::GLLineRenderer::create(float length = 1.0f, float width = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float length=luatop>0 ? (float)lua_tonumber(L,1) : (float)1.0f;
		float width=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;

		SPK::GL::GLLineRenderer * lret = SPK::GL::GLLineRenderer::create(length, width);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::GL::GLLineRenderer >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::GL::GLLineRenderer::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::GL::GLLineRenderer::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::GL::GLLineRenderer::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::GL::GLLineRenderer::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->GLLineRenderer::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::GL::GLLineRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	static int _bind_base_enableRenderingHint(lua_State *L) {
		if (!_lg_typecheck_base_enableRenderingHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) function, expected prototype:\nvoid SPK::GL::GLLineRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineRenderer::base_enableRenderingHint(SPK::RenderingHint, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineRenderer::enableRenderingHint(renderingHint, enable);

		return 0;
	}

	// void SPK::GL::GLLineRenderer::base_setAlphaTestThreshold(float alphaThreshold)
	static int _bind_base_setAlphaTestThreshold(lua_State *L) {
		if (!_lg_typecheck_base_setAlphaTestThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineRenderer::base_setAlphaTestThreshold(float alphaThreshold) function, expected prototype:\nvoid SPK::GL::GLLineRenderer::base_setAlphaTestThreshold(float alphaThreshold)\nClass arguments details:\n");
		}

		float alphaThreshold=(float)lua_tonumber(L,2);

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineRenderer::base_setAlphaTestThreshold(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineRenderer::setAlphaTestThreshold(alphaThreshold);

		return 0;
	}

	// bool SPK::GL::GLLineRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	static int _bind_base_isRenderingHintEnabled(lua_State *L) {
		if (!_lg_typecheck_base_isRenderingHintEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLLineRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const function, expected prototype:\nbool SPK::GL::GLLineRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLLineRenderer::base_isRenderingHintEnabled(SPK::RenderingHint) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->GLLineRenderer::isRenderingHintEnabled(renderingHint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::GL::GLLineRenderer::base_enableBlending(bool blendingEnabled)
	static int _bind_base_enableBlending(lua_State *L) {
		if (!_lg_typecheck_base_enableBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineRenderer::base_enableBlending(bool blendingEnabled) function, expected prototype:\nvoid SPK::GL::GLLineRenderer::base_enableBlending(bool blendingEnabled)\nClass arguments details:\n");
		}

		bool blendingEnabled=(bool)(lua_toboolean(L,2)==1);

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineRenderer::base_enableBlending(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineRenderer::enableBlending(blendingEnabled);

		return 0;
	}

	// void SPK::GL::GLLineRenderer::base_setBlending(SPK::BlendingMode blendMode)
	static int _bind_base_setBlending(lua_State *L) {
		if (!_lg_typecheck_base_setBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineRenderer::base_setBlending(SPK::BlendingMode blendMode) function, expected prototype:\nvoid SPK::GL::GLLineRenderer::base_setBlending(SPK::BlendingMode blendMode)\nClass arguments details:\n");
		}

		SPK::BlendingMode blendMode=(SPK::BlendingMode)lua_tointeger(L,2);

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineRenderer::base_setBlending(SPK::BlendingMode). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineRenderer::setBlending(blendMode);

		return 0;
	}

	// void SPK::GL::GLLineRenderer::base_setWidth(float width)
	static int _bind_base_setWidth(lua_State *L) {
		if (!_lg_typecheck_base_setWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineRenderer::base_setWidth(float width) function, expected prototype:\nvoid SPK::GL::GLLineRenderer::base_setWidth(float width)\nClass arguments details:\n");
		}

		float width=(float)lua_tonumber(L,2);

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineRenderer::base_setWidth(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineRenderer::setWidth(width);

		return 0;
	}

	// std::string SPK::GL::GLLineRenderer::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::GL::GLLineRenderer::base_getClassName() const function, expected prototype:\nstd::string SPK::GL::GLLineRenderer::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::GL::GLLineRenderer::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->GLLineRenderer::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::GL::GLLineRenderer::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineRenderer::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineRenderer::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineRenderer::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineRenderer::base_createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineRenderer::createBuffers(group);

		return 0;
	}

	// void SPK::GL::GLLineRenderer::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineRenderer::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineRenderer::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineRenderer::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineRenderer::base_destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineRenderer::destroyBuffers(group);

		return 0;
	}

	// void SPK::GL::GLLineRenderer::base_render(const SPK::Group & group)
	static int _bind_base_render(lua_State *L) {
		if (!_lg_typecheck_base_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineRenderer::base_render(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineRenderer::base_render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineRenderer::base_render function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineRenderer::base_render(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineRenderer::render(group);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_SPK_LineRendererInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_SPK_LineRendererInterface(lua_State *L) {
		if (!_lg_typecheck_baseCast_SPK_LineRendererInterface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCast_SPK_LineRendererInterface function, expected prototype:\nbaseCast()");
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		SPK::LineRendererInterface* res = luna_caster<SPK::Registerable,SPK::LineRendererInterface>::cast(self); // dynamic_cast<SPK::LineRendererInterface*>(self);
		if(!res)
			return 0;
			
		Luna< SPK::LineRendererInterface >::push(L,res,false);
		return 1;

	}

};

SPK::GL::GLLineRenderer* LunaTraits< SPK::GL::GLLineRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_GL_GLLineRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::GL::GLLineRenderer >::_bind_dtor(SPK::GL::GLLineRenderer* obj) {
	delete obj;
}

const char LunaTraits< SPK::GL::GLLineRenderer >::className[] = "GLLineRenderer";
const char LunaTraits< SPK::GL::GLLineRenderer >::fullName[] = "SPK::GL::GLLineRenderer";
const char LunaTraits< SPK::GL::GLLineRenderer >::moduleName[] = "spark";
const char* LunaTraits< SPK::GL::GLLineRenderer >::parents[] = {"spark.GLRenderer", "spark.LineRendererInterface", 0};
const int LunaTraits< SPK::GL::GLLineRenderer >::hash = 30007492;
const int LunaTraits< SPK::GL::GLLineRenderer >::uniqueIDs[] = {31337102, 81662222, 87424637,0};

luna_RegType LunaTraits< SPK::GL::GLLineRenderer >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_getClassName},
	{"createBuffers", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_createBuffers},
	{"destroyBuffers", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_destroyBuffers},
	{"render", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_render},
	{"create", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_base_findByName},
	{"base_enableRenderingHint", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_base_enableRenderingHint},
	{"base_setAlphaTestThreshold", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_base_setAlphaTestThreshold},
	{"base_isRenderingHintEnabled", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_base_isRenderingHintEnabled},
	{"base_enableBlending", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_base_enableBlending},
	{"base_setBlending", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_base_setBlending},
	{"base_setWidth", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_base_setWidth},
	{"base_getClassName", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_base_getClassName},
	{"base_createBuffers", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_base_destroyBuffers},
	{"base_render", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_base_render},
	{"__eq", &luna_wrapper_SPK_GL_GLLineRenderer::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_getTable},
	{"asLineRendererInterface", &luna_wrapper_SPK_GL_GLLineRenderer::_bind_baseCast_SPK_LineRendererInterface},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::GL::GLLineRenderer >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_GL_GLLineRenderer::_cast_from_Registerable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_GL_GLLineRenderer::_cast_from_BufferHandler},
	{"SPK::LineRendererInterface", &luna_wrapper_SPK_GL_GLLineRenderer::_cast_from_LineRendererInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::GL::GLLineRenderer >::enumValues[] = {
	{0,0}
};


