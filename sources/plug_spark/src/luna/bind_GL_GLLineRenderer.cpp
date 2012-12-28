#include <plug_common.h>

#include <luna/wrappers/wrapper_GL_GLLineRenderer.h>

class luna_wrapper_GL_GLLineRenderer {
public:
	typedef Luna< GL::GLLineRenderer > luna_t;

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
		//GL::GLLineRenderer* ptr= dynamic_cast< GL::GLLineRenderer* >(Luna< SPK::Registerable >::check(L,1));
		GL::GLLineRenderer* ptr= luna_caster< SPK::Registerable, GL::GLLineRenderer >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GL::GLLineRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//GL::GLLineRenderer* ptr= dynamic_cast< GL::GLLineRenderer* >(Luna< SPK::BufferHandler >::check(L,1));
		GL::GLLineRenderer* ptr= luna_caster< SPK::BufferHandler, GL::GLLineRenderer >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GL::GLLineRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_LineRendererInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//GL::GLLineRenderer* ptr= dynamic_cast< GL::GLLineRenderer* >(Luna< SPK::LineRendererInterface >::check(L,1));
		GL::GLLineRenderer* ptr= luna_caster< SPK::LineRendererInterface, GL::GLLineRenderer >::cast(Luna< SPK::LineRendererInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GL::GLLineRenderer >::push(L,ptr,false);
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
	// GL::GLLineRenderer::GLLineRenderer(lua_Table * data, float length = 1.0f, float width = 1.0f)
	static GL::GLLineRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GL::GLLineRenderer::GLLineRenderer(lua_Table * data, float length = 1.0f, float width = 1.0f) function, expected prototype:\nGL::GLLineRenderer::GLLineRenderer(lua_Table * data, float length = 1.0f, float width = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float length=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;
		float width=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;

		return new wrapper_GL_GLLineRenderer(L,NULL, length, width);
	}


	// Function binds:
	// std::string GL::GLLineRenderer::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string GL::GLLineRenderer::getClassName() const function, expected prototype:\nstd::string GL::GLLineRenderer::getClassName() const\nClass arguments details:\n");
		}


		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string GL::GLLineRenderer::getClassName() const");
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void GL::GLLineRenderer::createBuffers(const SPK::Group & group)
	static int _bind_createBuffers(lua_State *L) {
		if (!_lg_typecheck_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLLineRenderer::createBuffers(const SPK::Group & group) function, expected prototype:\nvoid GL::GLLineRenderer::createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLLineRenderer::createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLLineRenderer::createBuffers(const SPK::Group &)");
		}
		self->createBuffers(group);

		return 0;
	}

	// void GL::GLLineRenderer::destroyBuffers(const SPK::Group & group)
	static int _bind_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLLineRenderer::destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid GL::GLLineRenderer::destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLLineRenderer::destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLLineRenderer::destroyBuffers(const SPK::Group &)");
		}
		self->destroyBuffers(group);

		return 0;
	}

	// void GL::GLLineRenderer::render(const SPK::Group & group)
	static int _bind_render(lua_State *L) {
		if (!_lg_typecheck_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLLineRenderer::render(const SPK::Group & group) function, expected prototype:\nvoid GL::GLLineRenderer::render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLLineRenderer::render function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLLineRenderer::render(const SPK::Group &)");
		}
		self->render(group);

		return 0;
	}

	// static GL::GLLineRenderer * GL::GLLineRenderer::create(float length = 1.0f, float width = 1.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static GL::GLLineRenderer * GL::GLLineRenderer::create(float length = 1.0f, float width = 1.0f) function, expected prototype:\nstatic GL::GLLineRenderer * GL::GLLineRenderer::create(float length = 1.0f, float width = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float length=luatop>0 ? (float)lua_tonumber(L,1) : 1.0f;
		float width=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;

		GL::GLLineRenderer * lret = GL::GLLineRenderer::create(length, width);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< GL::GLLineRenderer >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * GL::GLLineRenderer::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * GL::GLLineRenderer::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * GL::GLLineRenderer::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * GL::GLLineRenderer::base_findByName(const std::string &)");
		}
		SPK::Registerable * lret = self->GLLineRenderer::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void GL::GLLineRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	static int _bind_base_enableRenderingHint(lua_State *L) {
		if (!_lg_typecheck_base_enableRenderingHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLLineRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) function, expected prototype:\nvoid GL::GLLineRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLLineRenderer::base_enableRenderingHint(SPK::RenderingHint, bool)");
		}
		self->GLLineRenderer::enableRenderingHint(renderingHint, enable);

		return 0;
	}

	// void GL::GLLineRenderer::base_setAlphaTestThreshold(float alphaThreshold)
	static int _bind_base_setAlphaTestThreshold(lua_State *L) {
		if (!_lg_typecheck_base_setAlphaTestThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLLineRenderer::base_setAlphaTestThreshold(float alphaThreshold) function, expected prototype:\nvoid GL::GLLineRenderer::base_setAlphaTestThreshold(float alphaThreshold)\nClass arguments details:\n");
		}

		float alphaThreshold=(float)lua_tonumber(L,2);

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLLineRenderer::base_setAlphaTestThreshold(float)");
		}
		self->GLLineRenderer::setAlphaTestThreshold(alphaThreshold);

		return 0;
	}

	// bool GL::GLLineRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	static int _bind_base_isRenderingHintEnabled(lua_State *L) {
		if (!_lg_typecheck_base_isRenderingHintEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GL::GLLineRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const function, expected prototype:\nbool GL::GLLineRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GL::GLLineRenderer::base_isRenderingHintEnabled(SPK::RenderingHint) const");
		}
		bool lret = self->GLLineRenderer::isRenderingHintEnabled(renderingHint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GL::GLLineRenderer::base_enableBlending(bool blendingEnabled)
	static int _bind_base_enableBlending(lua_State *L) {
		if (!_lg_typecheck_base_enableBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLLineRenderer::base_enableBlending(bool blendingEnabled) function, expected prototype:\nvoid GL::GLLineRenderer::base_enableBlending(bool blendingEnabled)\nClass arguments details:\n");
		}

		bool blendingEnabled=(bool)(lua_toboolean(L,2)==1);

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLLineRenderer::base_enableBlending(bool)");
		}
		self->GLLineRenderer::enableBlending(blendingEnabled);

		return 0;
	}

	// void GL::GLLineRenderer::base_setBlending(SPK::BlendingMode blendMode)
	static int _bind_base_setBlending(lua_State *L) {
		if (!_lg_typecheck_base_setBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLLineRenderer::base_setBlending(SPK::BlendingMode blendMode) function, expected prototype:\nvoid GL::GLLineRenderer::base_setBlending(SPK::BlendingMode blendMode)\nClass arguments details:\n");
		}

		SPK::BlendingMode blendMode=(SPK::BlendingMode)lua_tointeger(L,2);

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLLineRenderer::base_setBlending(SPK::BlendingMode)");
		}
		self->GLLineRenderer::setBlending(blendMode);

		return 0;
	}

	// void GL::GLLineRenderer::base_setWidth(float width)
	static int _bind_base_setWidth(lua_State *L) {
		if (!_lg_typecheck_base_setWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLLineRenderer::base_setWidth(float width) function, expected prototype:\nvoid GL::GLLineRenderer::base_setWidth(float width)\nClass arguments details:\n");
		}

		float width=(float)lua_tonumber(L,2);

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLLineRenderer::base_setWidth(float)");
		}
		self->GLLineRenderer::setWidth(width);

		return 0;
	}

	// std::string GL::GLLineRenderer::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string GL::GLLineRenderer::base_getClassName() const function, expected prototype:\nstd::string GL::GLLineRenderer::base_getClassName() const\nClass arguments details:\n");
		}


		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string GL::GLLineRenderer::base_getClassName() const");
		}
		std::string lret = self->GLLineRenderer::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void GL::GLLineRenderer::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLLineRenderer::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid GL::GLLineRenderer::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLLineRenderer::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLLineRenderer::base_createBuffers(const SPK::Group &)");
		}
		self->GLLineRenderer::createBuffers(group);

		return 0;
	}

	// void GL::GLLineRenderer::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLLineRenderer::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid GL::GLLineRenderer::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLLineRenderer::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLLineRenderer::base_destroyBuffers(const SPK::Group &)");
		}
		self->GLLineRenderer::destroyBuffers(group);

		return 0;
	}

	// void GL::GLLineRenderer::base_render(const SPK::Group & group)
	static int _bind_base_render(lua_State *L) {
		if (!_lg_typecheck_base_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLLineRenderer::base_render(const SPK::Group & group) function, expected prototype:\nvoid GL::GLLineRenderer::base_render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in GL::GLLineRenderer::base_render function");
		}
		const SPK::Group & group=*group_ptr;

		GL::GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< GL::GLLineRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLLineRenderer::base_render(const SPK::Group &)");
		}
		self->GLLineRenderer::render(group);

		return 0;
	}


	// Operator binds:

};

GL::GLLineRenderer* LunaTraits< GL::GLLineRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_GL_GLLineRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< GL::GLLineRenderer >::_bind_dtor(GL::GLLineRenderer* obj) {
	delete obj;
}

const char LunaTraits< GL::GLLineRenderer >::className[] = "GLLineRenderer";
const char LunaTraits< GL::GLLineRenderer >::fullName[] = "GL::GLLineRenderer";
const char LunaTraits< GL::GLLineRenderer >::moduleName[] = "GL";
const char* LunaTraits< GL::GLLineRenderer >::parents[] = {"GL.GLRenderer", "SPK.LineRendererInterface", 0};
const int LunaTraits< GL::GLLineRenderer >::hash = 76637471;
const int LunaTraits< GL::GLLineRenderer >::uniqueIDs[] = {31337102, 81662222, 87424637,0};

luna_RegType LunaTraits< GL::GLLineRenderer >::methods[] = {
	{"getClassName", &luna_wrapper_GL_GLLineRenderer::_bind_getClassName},
	{"createBuffers", &luna_wrapper_GL_GLLineRenderer::_bind_createBuffers},
	{"destroyBuffers", &luna_wrapper_GL_GLLineRenderer::_bind_destroyBuffers},
	{"render", &luna_wrapper_GL_GLLineRenderer::_bind_render},
	{"create", &luna_wrapper_GL_GLLineRenderer::_bind_create},
	{"base_findByName", &luna_wrapper_GL_GLLineRenderer::_bind_base_findByName},
	{"base_enableRenderingHint", &luna_wrapper_GL_GLLineRenderer::_bind_base_enableRenderingHint},
	{"base_setAlphaTestThreshold", &luna_wrapper_GL_GLLineRenderer::_bind_base_setAlphaTestThreshold},
	{"base_isRenderingHintEnabled", &luna_wrapper_GL_GLLineRenderer::_bind_base_isRenderingHintEnabled},
	{"base_enableBlending", &luna_wrapper_GL_GLLineRenderer::_bind_base_enableBlending},
	{"base_setBlending", &luna_wrapper_GL_GLLineRenderer::_bind_base_setBlending},
	{"base_setWidth", &luna_wrapper_GL_GLLineRenderer::_bind_base_setWidth},
	{"base_getClassName", &luna_wrapper_GL_GLLineRenderer::_bind_base_getClassName},
	{"base_createBuffers", &luna_wrapper_GL_GLLineRenderer::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_GL_GLLineRenderer::_bind_base_destroyBuffers},
	{"base_render", &luna_wrapper_GL_GLLineRenderer::_bind_base_render},
	{"__eq", &luna_wrapper_GL_GLLineRenderer::_bind___eq},
	{"getTable", &luna_wrapper_GL_GLLineRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< GL::GLLineRenderer >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_GL_GLLineRenderer::_cast_from_Registerable},
	{"SPK::BufferHandler", &luna_wrapper_GL_GLLineRenderer::_cast_from_BufferHandler},
	{"SPK::LineRendererInterface", &luna_wrapper_GL_GLLineRenderer::_cast_from_LineRendererInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< GL::GLLineRenderer >::enumValues[] = {
	{0,0}
};


