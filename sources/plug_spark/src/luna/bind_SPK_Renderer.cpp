#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Renderer.h>

class luna_wrapper_SPK_Renderer {
public:
	typedef Luna< SPK::Renderer > luna_t;

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
		//SPK::Renderer* ptr= dynamic_cast< SPK::Renderer* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Renderer* ptr= luna_caster< SPK::Registerable, SPK::Renderer >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Renderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Renderer* ptr= dynamic_cast< SPK::Renderer* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::Renderer* ptr= luna_caster< SPK::BufferHandler, SPK::Renderer >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Renderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableRenderingHint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlphaTestThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRenderingHintEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAlphaTestThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_render(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::Renderer::Renderer(lua_Table * data)
	static SPK::Renderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Renderer::Renderer(lua_Table * data) function, expected prototype:\nSPK::Renderer::Renderer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_SPK_Renderer(L,NULL);
	}


	// Function binds:
	// void SPK::Renderer::setActive(bool active)
	static int _bind_setActive(lua_State *L) {
		if (!_lg_typecheck_setActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Renderer::setActive(bool active) function, expected prototype:\nvoid SPK::Renderer::setActive(bool active)\nClass arguments details:\n");
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Renderer::setActive(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setActive(active);

		return 0;
	}

	// void SPK::Renderer::setBlending(SPK::BlendingMode blendMode)
	static int _bind_setBlending(lua_State *L) {
		if (!_lg_typecheck_setBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Renderer::setBlending(SPK::BlendingMode blendMode) function, expected prototype:\nvoid SPK::Renderer::setBlending(SPK::BlendingMode blendMode)\nClass arguments details:\n");
		}

		SPK::BlendingMode blendMode=(SPK::BlendingMode)lua_tointeger(L,2);

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Renderer::setBlending(SPK::BlendingMode). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setBlending(blendMode);

		return 0;
	}

	// void SPK::Renderer::enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	static int _bind_enableRenderingHint(lua_State *L) {
		if (!_lg_typecheck_enableRenderingHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Renderer::enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) function, expected prototype:\nvoid SPK::Renderer::enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Renderer::enableRenderingHint(SPK::RenderingHint, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->enableRenderingHint(renderingHint, enable);

		return 0;
	}

	// void SPK::Renderer::setAlphaTestThreshold(float alphaThreshold)
	static int _bind_setAlphaTestThreshold(lua_State *L) {
		if (!_lg_typecheck_setAlphaTestThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Renderer::setAlphaTestThreshold(float alphaThreshold) function, expected prototype:\nvoid SPK::Renderer::setAlphaTestThreshold(float alphaThreshold)\nClass arguments details:\n");
		}

		float alphaThreshold=(float)lua_tonumber(L,2);

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Renderer::setAlphaTestThreshold(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setAlphaTestThreshold(alphaThreshold);

		return 0;
	}

	// bool SPK::Renderer::isActive() const
	static int _bind_isActive(lua_State *L) {
		if (!_lg_typecheck_isActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Renderer::isActive() const function, expected prototype:\nbool SPK::Renderer::isActive() const\nClass arguments details:\n");
		}


		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Renderer::isActive() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Renderer::isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	static int _bind_isRenderingHintEnabled(lua_State *L) {
		if (!_lg_typecheck_isRenderingHintEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Renderer::isRenderingHintEnabled(SPK::RenderingHint renderingHint) const function, expected prototype:\nbool SPK::Renderer::isRenderingHintEnabled(SPK::RenderingHint renderingHint) const\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Renderer::isRenderingHintEnabled(SPK::RenderingHint) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isRenderingHintEnabled(renderingHint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float SPK::Renderer::getAlphaTestThreshold() const
	static int _bind_getAlphaTestThreshold(lua_State *L) {
		if (!_lg_typecheck_getAlphaTestThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Renderer::getAlphaTestThreshold() const function, expected prototype:\nfloat SPK::Renderer::getAlphaTestThreshold() const\nClass arguments details:\n");
		}


		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Renderer::getAlphaTestThreshold() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getAlphaTestThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SPK::Renderer::render(const SPK::Group & group)
	static int _bind_render(lua_State *L) {
		if (!_lg_typecheck_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Renderer::render(const SPK::Group & group) function, expected prototype:\nvoid SPK::Renderer::render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Renderer::render function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Renderer::render(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->render(group);

		return 0;
	}

	// SPK::Registerable * SPK::Renderer::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Renderer::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Renderer::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Renderer::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->Renderer::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::Renderer::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Renderer::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Renderer::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Renderer::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Renderer::base_createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Renderer::createBuffers(group);

		return 0;
	}

	// void SPK::Renderer::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Renderer::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Renderer::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Renderer::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Renderer::base_destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Renderer::destroyBuffers(group);

		return 0;
	}

	// void SPK::Renderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	static int _bind_base_enableRenderingHint(lua_State *L) {
		if (!_lg_typecheck_base_enableRenderingHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Renderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) function, expected prototype:\nvoid SPK::Renderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Renderer::base_enableRenderingHint(SPK::RenderingHint, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Renderer::enableRenderingHint(renderingHint, enable);

		return 0;
	}

	// void SPK::Renderer::base_setAlphaTestThreshold(float alphaThreshold)
	static int _bind_base_setAlphaTestThreshold(lua_State *L) {
		if (!_lg_typecheck_base_setAlphaTestThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Renderer::base_setAlphaTestThreshold(float alphaThreshold) function, expected prototype:\nvoid SPK::Renderer::base_setAlphaTestThreshold(float alphaThreshold)\nClass arguments details:\n");
		}

		float alphaThreshold=(float)lua_tonumber(L,2);

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Renderer::base_setAlphaTestThreshold(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Renderer::setAlphaTestThreshold(alphaThreshold);

		return 0;
	}

	// bool SPK::Renderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	static int _bind_base_isRenderingHintEnabled(lua_State *L) {
		if (!_lg_typecheck_base_isRenderingHintEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Renderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const function, expected prototype:\nbool SPK::Renderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);

		SPK::Renderer* self=Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Renderer::base_isRenderingHintEnabled(SPK::RenderingHint) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->Renderer::isRenderingHintEnabled(renderingHint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_SPK_BufferHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_SPK_BufferHandler(lua_State *L) {
		if (!_lg_typecheck_baseCast_SPK_BufferHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCast_SPK_BufferHandler function, expected prototype:\nbaseCast()");
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		SPK::BufferHandler* res = luna_caster<SPK::Registerable,SPK::BufferHandler>::cast(self); // dynamic_cast<SPK::BufferHandler*>(self);
		if(!res)
			return 0;
			
		Luna< SPK::BufferHandler >::push(L,res,false);
		return 1;

	}

};

SPK::Renderer* LunaTraits< SPK::Renderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Renderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void SPK::Renderer::setBlending(SPK::BlendingMode blendMode)
	// void SPK::Renderer::render(const SPK::Group & group)
	// std::string SPK::Registerable::getClassName() const
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Renderer >::_bind_dtor(SPK::Renderer* obj) {
	delete obj;
}

const char LunaTraits< SPK::Renderer >::className[] = "Renderer";
const char LunaTraits< SPK::Renderer >::fullName[] = "SPK::Renderer";
const char LunaTraits< SPK::Renderer >::moduleName[] = "spark";
const char* LunaTraits< SPK::Renderer >::parents[] = {"spark.Registerable", "spark.BufferHandler", 0};
const int LunaTraits< SPK::Renderer >::hash = 19496531;
const int LunaTraits< SPK::Renderer >::uniqueIDs[] = {31337102, 81662222,0};

luna_RegType LunaTraits< SPK::Renderer >::methods[] = {
	{"setActive", &luna_wrapper_SPK_Renderer::_bind_setActive},
	{"setBlending", &luna_wrapper_SPK_Renderer::_bind_setBlending},
	{"enableRenderingHint", &luna_wrapper_SPK_Renderer::_bind_enableRenderingHint},
	{"setAlphaTestThreshold", &luna_wrapper_SPK_Renderer::_bind_setAlphaTestThreshold},
	{"isActive", &luna_wrapper_SPK_Renderer::_bind_isActive},
	{"isRenderingHintEnabled", &luna_wrapper_SPK_Renderer::_bind_isRenderingHintEnabled},
	{"getAlphaTestThreshold", &luna_wrapper_SPK_Renderer::_bind_getAlphaTestThreshold},
	{"render", &luna_wrapper_SPK_Renderer::_bind_render},
	{"base_findByName", &luna_wrapper_SPK_Renderer::_bind_base_findByName},
	{"base_createBuffers", &luna_wrapper_SPK_Renderer::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_Renderer::_bind_base_destroyBuffers},
	{"base_enableRenderingHint", &luna_wrapper_SPK_Renderer::_bind_base_enableRenderingHint},
	{"base_setAlphaTestThreshold", &luna_wrapper_SPK_Renderer::_bind_base_setAlphaTestThreshold},
	{"base_isRenderingHintEnabled", &luna_wrapper_SPK_Renderer::_bind_base_isRenderingHintEnabled},
	{"__eq", &luna_wrapper_SPK_Renderer::_bind___eq},
	{"getTable", &luna_wrapper_SPK_Renderer::_bind_getTable},
	{"asBufferHandler", &luna_wrapper_SPK_Renderer::_bind_baseCast_SPK_BufferHandler},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Renderer >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Renderer::_cast_from_Registerable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_Renderer::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Renderer >::enumValues[] = {
	{0,0}
};


