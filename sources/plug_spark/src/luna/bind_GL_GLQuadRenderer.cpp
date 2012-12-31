#include <plug_common.h>

#include <luna/wrappers/wrapper_GL_GLQuadRenderer.h>

class luna_wrapper_GL_GLQuadRenderer {
public:
	typedef Luna< GL::GLQuadRenderer > luna_t;

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
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
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
		//GL::GLQuadRenderer* ptr= dynamic_cast< GL::GLQuadRenderer* >(Luna< SPK::Registerable >::check(L,1));
		GL::GLQuadRenderer* ptr= luna_caster< SPK::Registerable, GL::GLQuadRenderer >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GL::GLQuadRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//GL::GLQuadRenderer* ptr= dynamic_cast< GL::GLQuadRenderer* >(Luna< SPK::BufferHandler >::check(L,1));
		GL::GLQuadRenderer* ptr= luna_caster< SPK::BufferHandler, GL::GLQuadRenderer >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GL::GLQuadRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_QuadRendererInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//GL::GLQuadRenderer* ptr= dynamic_cast< GL::GLQuadRenderer* >(Luna< SPK::QuadRendererInterface >::check(L,1));
		GL::GLQuadRenderer* ptr= luna_caster< SPK::QuadRendererInterface, GL::GLQuadRenderer >::cast(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GL::GLQuadRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Oriented3DRendererInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//GL::GLQuadRenderer* ptr= dynamic_cast< GL::GLQuadRenderer* >(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
		GL::GLQuadRenderer* ptr= luna_caster< SPK::Oriented3DRendererInterface, GL::GLQuadRenderer >::cast(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GL::GLQuadRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GLExtHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//GL::GLQuadRenderer* ptr= dynamic_cast< GL::GLQuadRenderer* >(Luna< GL::GLExtHandler >::check(L,1));
		GL::GLQuadRenderer* ptr= luna_caster< GL::GLExtHandler, GL::GLQuadRenderer >::cast(Luna< GL::GLExtHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GL::GLQuadRenderer >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setTexturingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setTexturingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// GL::GLQuadRenderer::GLQuadRenderer(lua_Table * data, float scaleX = 1.0f, float scaleY = 1.0f)
	static GL::GLQuadRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GL::GLQuadRenderer::GLQuadRenderer(lua_Table * data, float scaleX = 1.0f, float scaleY = 1.0f) function, expected prototype:\nGL::GLQuadRenderer::GLQuadRenderer(lua_Table * data, float scaleX = 1.0f, float scaleY = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float scaleX=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;
		float scaleY=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;

		return new wrapper_GL_GLQuadRenderer(L,NULL, scaleX, scaleY);
	}


	// Function binds:
	// std::string GL::GLQuadRenderer::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string GL::GLQuadRenderer::getClassName() const function, expected prototype:\nstd::string GL::GLQuadRenderer::getClassName() const\nClass arguments details:\n");
		}


		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string GL::GLQuadRenderer::getClassName() const");
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool GL::GLQuadRenderer::setTexturingMode(SPK::TexturingMode mode)
	static int _bind_setTexturingMode(lua_State *L) {
		if (!_lg_typecheck_setTexturingMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GL::GLQuadRenderer::setTexturingMode(SPK::TexturingMode mode) function, expected prototype:\nbool GL::GLQuadRenderer::setTexturingMode(SPK::TexturingMode mode)\nClass arguments details:\n");
		}

		SPK::TexturingMode mode=(SPK::TexturingMode)lua_tointeger(L,2);

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GL::GLQuadRenderer::setTexturingMode(SPK::TexturingMode)");
		}
		bool lret = self->setTexturingMode(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GL::GLQuadRenderer::setTexture(unsigned int textureIndex)
	static int _bind_setTexture(lua_State *L) {
		if (!_lg_typecheck_setTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLQuadRenderer::setTexture(unsigned int textureIndex) function, expected prototype:\nvoid GL::GLQuadRenderer::setTexture(unsigned int textureIndex)\nClass arguments details:\n");
		}

		unsigned int textureIndex=(unsigned int)lua_tointeger(L,2);

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLQuadRenderer::setTexture(unsigned int)");
		}
		self->setTexture(textureIndex);

		return 0;
	}

	// unsigned int GL::GLQuadRenderer::getTexture() const
	static int _bind_getTexture(lua_State *L) {
		if (!_lg_typecheck_getTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int GL::GLQuadRenderer::getTexture() const function, expected prototype:\nunsigned int GL::GLQuadRenderer::getTexture() const\nClass arguments details:\n");
		}


		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int GL::GLQuadRenderer::getTexture() const");
		}
		unsigned int lret = self->getTexture();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void GL::GLQuadRenderer::createBuffers(const SPK::Group & group)
	static int _bind_createBuffers(lua_State *L) {
		if (!_lg_typecheck_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLQuadRenderer::createBuffers(const SPK::Group & group) function, expected prototype:\nvoid GL::GLQuadRenderer::createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLQuadRenderer::createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLQuadRenderer::createBuffers(const SPK::Group &)");
		}
		self->createBuffers(group);

		return 0;
	}

	// void GL::GLQuadRenderer::destroyBuffers(const SPK::Group & group)
	static int _bind_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLQuadRenderer::destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid GL::GLQuadRenderer::destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLQuadRenderer::destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLQuadRenderer::destroyBuffers(const SPK::Group &)");
		}
		self->destroyBuffers(group);

		return 0;
	}

	// void GL::GLQuadRenderer::render(const SPK::Group & group)
	static int _bind_render(lua_State *L) {
		if (!_lg_typecheck_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLQuadRenderer::render(const SPK::Group & group) function, expected prototype:\nvoid GL::GLQuadRenderer::render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLQuadRenderer::render function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLQuadRenderer::render(const SPK::Group &)");
		}
		self->render(group);

		return 0;
	}

	// static GL::GLQuadRenderer * GL::GLQuadRenderer::create(float scaleX = 1.0f, float scaleY = 1.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static GL::GLQuadRenderer * GL::GLQuadRenderer::create(float scaleX = 1.0f, float scaleY = 1.0f) function, expected prototype:\nstatic GL::GLQuadRenderer * GL::GLQuadRenderer::create(float scaleX = 1.0f, float scaleY = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float scaleX=luatop>0 ? (float)lua_tonumber(L,1) : 1.0f;
		float scaleY=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;

		GL::GLQuadRenderer * lret = GL::GLQuadRenderer::create(scaleX, scaleY);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< GL::GLQuadRenderer >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * GL::GLQuadRenderer::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * GL::GLQuadRenderer::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * GL::GLQuadRenderer::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * GL::GLQuadRenderer::base_findByName(const std::string &)");
		}
		SPK::Registerable * lret = self->GLQuadRenderer::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void GL::GLQuadRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	static int _bind_base_enableRenderingHint(lua_State *L) {
		if (!_lg_typecheck_base_enableRenderingHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLQuadRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) function, expected prototype:\nvoid GL::GLQuadRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLQuadRenderer::base_enableRenderingHint(SPK::RenderingHint, bool)");
		}
		self->GLQuadRenderer::enableRenderingHint(renderingHint, enable);

		return 0;
	}

	// void GL::GLQuadRenderer::base_setAlphaTestThreshold(float alphaThreshold)
	static int _bind_base_setAlphaTestThreshold(lua_State *L) {
		if (!_lg_typecheck_base_setAlphaTestThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLQuadRenderer::base_setAlphaTestThreshold(float alphaThreshold) function, expected prototype:\nvoid GL::GLQuadRenderer::base_setAlphaTestThreshold(float alphaThreshold)\nClass arguments details:\n");
		}

		float alphaThreshold=(float)lua_tonumber(L,2);

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLQuadRenderer::base_setAlphaTestThreshold(float)");
		}
		self->GLQuadRenderer::setAlphaTestThreshold(alphaThreshold);

		return 0;
	}

	// bool GL::GLQuadRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	static int _bind_base_isRenderingHintEnabled(lua_State *L) {
		if (!_lg_typecheck_base_isRenderingHintEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GL::GLQuadRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const function, expected prototype:\nbool GL::GLQuadRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GL::GLQuadRenderer::base_isRenderingHintEnabled(SPK::RenderingHint) const");
		}
		bool lret = self->GLQuadRenderer::isRenderingHintEnabled(renderingHint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GL::GLQuadRenderer::base_enableBlending(bool blendingEnabled)
	static int _bind_base_enableBlending(lua_State *L) {
		if (!_lg_typecheck_base_enableBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLQuadRenderer::base_enableBlending(bool blendingEnabled) function, expected prototype:\nvoid GL::GLQuadRenderer::base_enableBlending(bool blendingEnabled)\nClass arguments details:\n");
		}

		bool blendingEnabled=(bool)(lua_toboolean(L,2)==1);

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLQuadRenderer::base_enableBlending(bool)");
		}
		self->GLQuadRenderer::enableBlending(blendingEnabled);

		return 0;
	}

	// void GL::GLQuadRenderer::base_setBlending(SPK::BlendingMode blendMode)
	static int _bind_base_setBlending(lua_State *L) {
		if (!_lg_typecheck_base_setBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLQuadRenderer::base_setBlending(SPK::BlendingMode blendMode) function, expected prototype:\nvoid GL::GLQuadRenderer::base_setBlending(SPK::BlendingMode blendMode)\nClass arguments details:\n");
		}

		SPK::BlendingMode blendMode=(SPK::BlendingMode)lua_tointeger(L,2);

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLQuadRenderer::base_setBlending(SPK::BlendingMode)");
		}
		self->GLQuadRenderer::setBlending(blendMode);

		return 0;
	}

	// std::string GL::GLQuadRenderer::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string GL::GLQuadRenderer::base_getClassName() const function, expected prototype:\nstd::string GL::GLQuadRenderer::base_getClassName() const\nClass arguments details:\n");
		}


		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string GL::GLQuadRenderer::base_getClassName() const");
		}
		std::string lret = self->GLQuadRenderer::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool GL::GLQuadRenderer::base_setTexturingMode(SPK::TexturingMode mode)
	static int _bind_base_setTexturingMode(lua_State *L) {
		if (!_lg_typecheck_base_setTexturingMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GL::GLQuadRenderer::base_setTexturingMode(SPK::TexturingMode mode) function, expected prototype:\nbool GL::GLQuadRenderer::base_setTexturingMode(SPK::TexturingMode mode)\nClass arguments details:\n");
		}

		SPK::TexturingMode mode=(SPK::TexturingMode)lua_tointeger(L,2);

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GL::GLQuadRenderer::base_setTexturingMode(SPK::TexturingMode)");
		}
		bool lret = self->GLQuadRenderer::setTexturingMode(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GL::GLQuadRenderer::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLQuadRenderer::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid GL::GLQuadRenderer::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLQuadRenderer::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLQuadRenderer::base_createBuffers(const SPK::Group &)");
		}
		self->GLQuadRenderer::createBuffers(group);

		return 0;
	}

	// void GL::GLQuadRenderer::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLQuadRenderer::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid GL::GLQuadRenderer::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLQuadRenderer::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLQuadRenderer::base_destroyBuffers(const SPK::Group &)");
		}
		self->GLQuadRenderer::destroyBuffers(group);

		return 0;
	}

	// void GL::GLQuadRenderer::base_render(const SPK::Group & group)
	static int _bind_base_render(lua_State *L) {
		if (!_lg_typecheck_base_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLQuadRenderer::base_render(const SPK::Group & group) function, expected prototype:\nvoid GL::GLQuadRenderer::base_render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLQuadRenderer::base_render function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLQuadRenderer::base_render(const SPK::Group &)");
		}
		self->GLQuadRenderer::render(group);

		return 0;
	}


	// Operator binds:

};

GL::GLQuadRenderer* LunaTraits< GL::GLQuadRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_GL_GLQuadRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< GL::GLQuadRenderer >::_bind_dtor(GL::GLQuadRenderer* obj) {
	delete obj;
}

const char LunaTraits< GL::GLQuadRenderer >::className[] = "GLQuadRenderer";
const char LunaTraits< GL::GLQuadRenderer >::fullName[] = "GL::GLQuadRenderer";
const char LunaTraits< GL::GLQuadRenderer >::moduleName[] = "spark";
const char* LunaTraits< GL::GLQuadRenderer >::parents[] = {"spark.GLRenderer", "spark.QuadRendererInterface", "spark.Oriented3DRendererInterface", "spark.GLExtHandler", 0};
const int LunaTraits< GL::GLQuadRenderer >::hash = 69989719;
const int LunaTraits< GL::GLQuadRenderer >::uniqueIDs[] = {31337102, 81662222, 74399712, 95637678, 94328851,0};

luna_RegType LunaTraits< GL::GLQuadRenderer >::methods[] = {
	{"getClassName", &luna_wrapper_GL_GLQuadRenderer::_bind_getClassName},
	{"setTexturingMode", &luna_wrapper_GL_GLQuadRenderer::_bind_setTexturingMode},
	{"setTexture", &luna_wrapper_GL_GLQuadRenderer::_bind_setTexture},
	{"getTexture", &luna_wrapper_GL_GLQuadRenderer::_bind_getTexture},
	{"createBuffers", &luna_wrapper_GL_GLQuadRenderer::_bind_createBuffers},
	{"destroyBuffers", &luna_wrapper_GL_GLQuadRenderer::_bind_destroyBuffers},
	{"render", &luna_wrapper_GL_GLQuadRenderer::_bind_render},
	{"create", &luna_wrapper_GL_GLQuadRenderer::_bind_create},
	{"base_findByName", &luna_wrapper_GL_GLQuadRenderer::_bind_base_findByName},
	{"base_enableRenderingHint", &luna_wrapper_GL_GLQuadRenderer::_bind_base_enableRenderingHint},
	{"base_setAlphaTestThreshold", &luna_wrapper_GL_GLQuadRenderer::_bind_base_setAlphaTestThreshold},
	{"base_isRenderingHintEnabled", &luna_wrapper_GL_GLQuadRenderer::_bind_base_isRenderingHintEnabled},
	{"base_enableBlending", &luna_wrapper_GL_GLQuadRenderer::_bind_base_enableBlending},
	{"base_setBlending", &luna_wrapper_GL_GLQuadRenderer::_bind_base_setBlending},
	{"base_getClassName", &luna_wrapper_GL_GLQuadRenderer::_bind_base_getClassName},
	{"base_setTexturingMode", &luna_wrapper_GL_GLQuadRenderer::_bind_base_setTexturingMode},
	{"base_createBuffers", &luna_wrapper_GL_GLQuadRenderer::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_GL_GLQuadRenderer::_bind_base_destroyBuffers},
	{"base_render", &luna_wrapper_GL_GLQuadRenderer::_bind_base_render},
	{"__eq", &luna_wrapper_GL_GLQuadRenderer::_bind___eq},
	{"getTable", &luna_wrapper_GL_GLQuadRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< GL::GLQuadRenderer >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_GL_GLQuadRenderer::_cast_from_Registerable},
	{"SPK::BufferHandler", &luna_wrapper_GL_GLQuadRenderer::_cast_from_BufferHandler},
	{"SPK::QuadRendererInterface", &luna_wrapper_GL_GLQuadRenderer::_cast_from_QuadRendererInterface},
	{"SPK::Oriented3DRendererInterface", &luna_wrapper_GL_GLQuadRenderer::_cast_from_Oriented3DRendererInterface},
	{"GL::GLExtHandler", &luna_wrapper_GL_GLQuadRenderer::_cast_from_GLExtHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< GL::GLQuadRenderer >::enumValues[] = {
	{0,0}
};


