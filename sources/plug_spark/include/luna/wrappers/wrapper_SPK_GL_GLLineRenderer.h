#ifndef _WRAPPERS_WRAPPER_SPK_GL_GLLINERENDERER_H_
#define _WRAPPERS_WRAPPER_SPK_GL_GLLINERENDERER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <RenderingAPIs/OpenGL/SPK_GLLineRenderer.h>

class wrapper_SPK_GL_GLLineRenderer : public SPK::GL::GLLineRenderer, public luna_wrapper_base {

public:
		

	~wrapper_SPK_GL_GLLineRenderer() {
		logDEBUG3("Calling delete function for wrapper SPK_GL_GLLineRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SPK::GL::GLLineRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SPK_GL_GLLineRenderer(lua_State* L, lua_Table* dum, float length = 1.0f, float width = 1.0f) 
		: SPK::GL::GLLineRenderer(length, width), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// void SPK::Registerable::onRegister()
	void onRegister() {
		THROW_IF(!_obj.pushFunction("onRegister"),"No implementation for abstract function SPK::Registerable::onRegister");
		_obj.pushArg((SPK::GL::GLLineRenderer*)this);
		return (_obj.callFunction<void>());
	};

	// void SPK::Registerable::onUnregister()
	void onUnregister() {
		THROW_IF(!_obj.pushFunction("onUnregister"),"No implementation for abstract function SPK::Registerable::onUnregister");
		_obj.pushArg((SPK::GL::GLLineRenderer*)this);
		return (_obj.callFunction<void>());
	};

	// SPK::GL::GLLineRenderer * SPK::GL::GLLineRenderer::clone(bool createBase) const
	SPK::GL::GLLineRenderer * clone(bool createBase) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function SPK::GL::GLLineRenderer::clone");
		_obj.pushArg((SPK::GL::GLLineRenderer*)this);
		_obj.pushArg(createBase);
		return (_obj.callFunction<SPK::GL::GLLineRenderer*>());
	};

protected:
	// Protected virtual methods:
	// void SPK::Registerable::registerChildren(bool registerAll)
	void registerChildren(bool registerAll) {
		if(_obj.pushFunction("registerChildren")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg(registerAll);
			return (_obj.callFunction<void>());
		}

		return GLLineRenderer::registerChildren(registerAll);
	};

	// void SPK::Registerable::copyChildren(const SPK::Registerable & object, bool createBase)
	void copyChildren(const SPK::Registerable & object, bool createBase) {
		if(_obj.pushFunction("copyChildren")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg(&object);
			_obj.pushArg(createBase);
			return (_obj.callFunction<void>());
		}

		return GLLineRenderer::copyChildren(object, createBase);
	};

	// void SPK::Registerable::destroyChildren(bool keepChildren)
	void destroyChildren(bool keepChildren) {
		if(_obj.pushFunction("destroyChildren")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg(keepChildren);
			return (_obj.callFunction<void>());
		}

		return GLLineRenderer::destroyChildren(keepChildren);
	};

	// bool SPK::GL::GLLineRenderer::checkBuffers(const SPK::Group & group)
	bool checkBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("checkBuffers")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<bool>());
		}

		return GLLineRenderer::checkBuffers(group);
	};

public:
	// Public virtual methods:
	// SPK::Registerable * SPK::Registerable::findByName(const std::string & name)
	SPK::Registerable * findByName(const std::string & name) {
		if(_obj.pushFunction("findByName")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<SPK::Registerable*>());
		}

		return GLLineRenderer::findByName(name);
	};

	// void SPK::Renderer::enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	void enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) {
		if(_obj.pushFunction("enableRenderingHint")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg((int)renderingHint);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return GLLineRenderer::enableRenderingHint(renderingHint, enable);
	};

	// void SPK::Renderer::setAlphaTestThreshold(float alphaThreshold)
	void setAlphaTestThreshold(float alphaThreshold) {
		if(_obj.pushFunction("setAlphaTestThreshold")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg(alphaThreshold);
			return (_obj.callFunction<void>());
		}

		return GLLineRenderer::setAlphaTestThreshold(alphaThreshold);
	};

	// bool SPK::Renderer::isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	bool isRenderingHintEnabled(SPK::RenderingHint renderingHint) const {
		if(_obj.pushFunction("isRenderingHintEnabled")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg((int)renderingHint);
			return (_obj.callFunction<bool>());
		}

		return GLLineRenderer::isRenderingHintEnabled(renderingHint);
	};

	// void SPK::GL::GLRenderer::enableBlending(bool blendingEnabled)
	void enableBlending(bool blendingEnabled) {
		if(_obj.pushFunction("enableBlending")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg(blendingEnabled);
			return (_obj.callFunction<void>());
		}

		return GLLineRenderer::enableBlending(blendingEnabled);
	};

	// void SPK::GL::GLRenderer::setBlending(SPK::BlendingMode blendMode)
	void setBlending(SPK::BlendingMode blendMode) {
		if(_obj.pushFunction("setBlending")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg((int)blendMode);
			return (_obj.callFunction<void>());
		}

		return GLLineRenderer::setBlending(blendMode);
	};

	// void SPK::LineRendererInterface::setWidth(float width)
	void setWidth(float width) {
		if(_obj.pushFunction("setWidth")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg(width);
			return (_obj.callFunction<void>());
		}

		return GLLineRenderer::setWidth(width);
	};

	// std::string SPK::GL::GLLineRenderer::getClassName() const
	std::string getClassName() const {
		if(_obj.pushFunction("getClassName")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			return (_obj.callFunction<std::string>());
		}

		return GLLineRenderer::getClassName();
	};

	// void SPK::GL::GLLineRenderer::createBuffers(const SPK::Group & group)
	void createBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("createBuffers")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return GLLineRenderer::createBuffers(group);
	};

	// void SPK::GL::GLLineRenderer::destroyBuffers(const SPK::Group & group)
	void destroyBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("destroyBuffers")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return GLLineRenderer::destroyBuffers(group);
	};

	// void SPK::GL::GLLineRenderer::render(const SPK::Group & group)
	void render(const SPK::Group & group) {
		if(_obj.pushFunction("render")) {
			_obj.pushArg((SPK::GL::GLLineRenderer*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return GLLineRenderer::render(group);
	};


	// Protected non-virtual methods:
	// void SPK::GL::GLRenderer::initBlending() const
	void public_initBlending() const {
		return SPK::GL::GLRenderer::initBlending();
	};

	// void SPK::GL::GLRenderer::initRenderingHints() const
	void public_initRenderingHints() const {
		return SPK::GL::GLRenderer::initRenderingHints();
	};

	// void SPK::Registerable::registerChild(SPK::Registerable * child, bool registerAll)
	void public_registerChild(SPK::Registerable * child, bool registerAll) {
		return SPK::Registerable::registerChild(child, registerAll);
	};

	// SPK::Registerable * SPK::Registerable::copyChild(SPK::Registerable * child, bool createBase)
	SPK::Registerable * public_copyChild(SPK::Registerable * child, bool createBase) {
		return SPK::Registerable::copyChild(child, createBase);
	};

	// bool SPK::Registerable::destroyChild(SPK::Registerable * child, bool keepChildren)
	bool public_destroyChild(SPK::Registerable * child, bool keepChildren) {
		return SPK::Registerable::destroyChild(child, keepChildren);
	};

	// void SPK::Registerable::incrementChildReference(SPK::Registerable * child)
	void public_incrementChildReference(SPK::Registerable * child) {
		return SPK::Registerable::incrementChildReference(child);
	};

	// void SPK::Registerable::decrementChildReference(SPK::Registerable * child)
	void public_decrementChildReference(SPK::Registerable * child) {
		return SPK::Registerable::decrementChildReference(child);
	};

	// static void SPK::Registerable::registerObject(SPK::Registerable * obj, bool registerAll = false)
	static void public_registerObject(SPK::Registerable * obj, bool registerAll = false) {
		return SPK::Registerable::registerObject(obj, registerAll);
	};

	// bool SPK::BufferHandler::prepareBuffers(const SPK::Group & group)
	bool public_prepareBuffers(const SPK::Group & group) {
		return SPK::BufferHandler::prepareBuffers(group);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_initBlending(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_initRenderingHints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_registerChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_copyChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_destroyChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_incrementChildReference(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_decrementChildReference(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_registerObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,31337102)) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_prepareBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void SPK::GL::GLRenderer::public_initBlending() const
	static int _bind_public_initBlending(lua_State *L) {
		if (!_lg_typecheck_public_initBlending(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::public_initBlending() const function, expected prototype:\nvoid SPK::GL::GLRenderer::public_initBlending() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_SPK_GL_GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_GL_GLLineRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::public_initBlending() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_initBlending();

		return 0;
	}

	// void SPK::GL::GLRenderer::public_initRenderingHints() const
	static int _bind_public_initRenderingHints(lua_State *L) {
		if (!_lg_typecheck_public_initRenderingHints(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLRenderer::public_initRenderingHints() const function, expected prototype:\nvoid SPK::GL::GLRenderer::public_initRenderingHints() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_SPK_GL_GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_GL_GLLineRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::GL::GLRenderer::public_initRenderingHints() const. Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_initRenderingHints();

		return 0;
	}

	// void SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll)
	static int _bind_public_registerChild(lua_State *L) {
		if (!_lg_typecheck_public_registerChild(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll) function, expected prototype:\nvoid SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));
		bool registerAll=(bool)(lua_toboolean(L,3)==1);

		wrapper_SPK_GL_GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_GL_GLLineRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Registerable::public_registerChild(SPK::Registerable *, bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_registerChild(child, registerAll);

		return 0;
	}

	// SPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable * child, bool createBase)
	static int _bind_public_copyChild(lua_State *L) {
		if (!_lg_typecheck_public_copyChild(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable * child, bool createBase) function, expected prototype:\nSPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable * child, bool createBase)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));
		bool createBase=(bool)(lua_toboolean(L,3)==1);

		wrapper_SPK_GL_GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_GL_GLLineRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable *, bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SPK::Registerable * lret = self->public_copyChild(child, createBase);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// bool SPK::Registerable::public_destroyChild(SPK::Registerable * child, bool keepChildren)
	static int _bind_public_destroyChild(lua_State *L) {
		if (!_lg_typecheck_public_destroyChild(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::Registerable::public_destroyChild(SPK::Registerable * child, bool keepChildren) function, expected prototype:\nbool SPK::Registerable::public_destroyChild(SPK::Registerable * child, bool keepChildren)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));
		bool keepChildren=(bool)(lua_toboolean(L,3)==1);

		wrapper_SPK_GL_GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_GL_GLLineRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::Registerable::public_destroyChild(SPK::Registerable *, bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_destroyChild(child, keepChildren);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Registerable::public_incrementChildReference(SPK::Registerable * child)
	static int _bind_public_incrementChildReference(lua_State *L) {
		if (!_lg_typecheck_public_incrementChildReference(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::public_incrementChildReference(SPK::Registerable * child) function, expected prototype:\nvoid SPK::Registerable::public_incrementChildReference(SPK::Registerable * child)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));

		wrapper_SPK_GL_GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_GL_GLLineRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Registerable::public_incrementChildReference(SPK::Registerable *). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_incrementChildReference(child);

		return 0;
	}

	// void SPK::Registerable::public_decrementChildReference(SPK::Registerable * child)
	static int _bind_public_decrementChildReference(lua_State *L) {
		if (!_lg_typecheck_public_decrementChildReference(L)) {
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::public_decrementChildReference(SPK::Registerable * child) function, expected prototype:\nvoid SPK::Registerable::public_decrementChildReference(SPK::Registerable * child)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));

		wrapper_SPK_GL_GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_GL_GLLineRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void SPK::Registerable::public_decrementChildReference(SPK::Registerable *). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_decrementChildReference(child);

		return 0;
	}

	// static void SPK::Registerable::public_registerObject(SPK::Registerable * obj, bool registerAll = false)
	static int _bind_public_registerObject(lua_State *L) {
		if (!_lg_typecheck_public_registerObject(L)) {
			luaL_error(L, "luna typecheck failed in static void SPK::Registerable::public_registerObject(SPK::Registerable * obj, bool registerAll = false) function, expected prototype:\nstatic void SPK::Registerable::public_registerObject(SPK::Registerable * obj, bool registerAll = false)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		SPK::Registerable* obj=(Luna< SPK::Registerable >::check(L,1));
		bool registerAll=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wrapper_SPK_GL_GLLineRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_GL_GLLineRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static void SPK::Registerable::public_registerObject(SPK::Registerable *, bool). Got : '%s'\n%s",typeid(Luna< SPK::Registerable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_registerObject(obj, registerAll);

		return 0;
	}

	// bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group)
	static int _bind_public_prepareBuffers(lua_State *L) {
		if (!_lg_typecheck_public_prepareBuffers(L)) {
			luaL_error(L, "luna typecheck failed in bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group) function, expected prototype:\nbool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::BufferHandler::public_prepareBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		wrapper_SPK_GL_GLLineRenderer* self=Luna< SPK::BufferHandler >::checkSubType< wrapper_SPK_GL_GLLineRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group &). Got : '%s'\n%s",typeid(Luna< SPK::BufferHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_prepareBuffers(group);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"initBlending",_bind_public_initBlending},
		{"initRenderingHints",_bind_public_initRenderingHints},
		{"registerChild",_bind_public_registerChild},
		{"copyChild",_bind_public_copyChild},
		{"destroyChild",_bind_public_destroyChild},
		{"incrementChildReference",_bind_public_incrementChildReference},
		{"decrementChildReference",_bind_public_decrementChildReference},
		{"registerObject",_bind_public_registerObject},
		{"prepareBuffers",_bind_public_prepareBuffers},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

