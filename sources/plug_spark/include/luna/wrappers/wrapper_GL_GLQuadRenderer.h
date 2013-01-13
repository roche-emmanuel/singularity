#ifndef _WRAPPERS_WRAPPER_GL_GLQUADRENDERER_H_
#define _WRAPPERS_WRAPPER_GL_GLQUADRENDERER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <RenderingAPIs/OpenGL/SPK_GLQuadRenderer.h>

class wrapper_GL_GLQuadRenderer : public GL::GLQuadRenderer, public luna_wrapper_base {

public:
		

	~wrapper_GL_GLQuadRenderer() {
		logDEBUG3("Calling delete function for wrapper GL_GLQuadRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((GL::GLQuadRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_GL_GLQuadRenderer(lua_State* L, lua_Table* dum, float scaleX = 1.0f, float scaleY = 1.0f) 
		: GL::GLQuadRenderer(scaleX, scaleY), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// void SPK::Registerable::onRegister()
	void onRegister() {
		THROW_IF(!_obj.pushFunction("onRegister"),"No implementation for abstract function SPK::Registerable::onRegister");
		_obj.pushArg((GL::GLQuadRenderer*)this);
		return (_obj.callFunction<void>());
	};

	// void SPK::Registerable::onUnregister()
	void onUnregister() {
		THROW_IF(!_obj.pushFunction("onUnregister"),"No implementation for abstract function SPK::Registerable::onUnregister");
		_obj.pushArg((GL::GLQuadRenderer*)this);
		return (_obj.callFunction<void>());
	};

	// GL::GLQuadRenderer * GL::GLQuadRenderer::clone(bool createBase) const
	GL::GLQuadRenderer * clone(bool createBase) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function GL::GLQuadRenderer::clone");
		_obj.pushArg((GL::GLQuadRenderer*)this);
		_obj.pushArg(createBase);
		return (_obj.callFunction<GL::GLQuadRenderer*>());
	};

protected:
	// Protected virtual methods:
	// void SPK::Registerable::registerChildren(bool registerAll)
	void registerChildren(bool registerAll) {
		if(_obj.pushFunction("registerChildren")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(registerAll);
			return (_obj.callFunction<void>());
		}

		return GLQuadRenderer::registerChildren(registerAll);
	};

	// void SPK::Registerable::copyChildren(const SPK::Registerable & object, bool createBase)
	void copyChildren(const SPK::Registerable & object, bool createBase) {
		if(_obj.pushFunction("copyChildren")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(&object);
			_obj.pushArg(createBase);
			return (_obj.callFunction<void>());
		}

		return GLQuadRenderer::copyChildren(object, createBase);
	};

	// void SPK::Registerable::destroyChildren(bool keepChildren)
	void destroyChildren(bool keepChildren) {
		if(_obj.pushFunction("destroyChildren")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(keepChildren);
			return (_obj.callFunction<void>());
		}

		return GLQuadRenderer::destroyChildren(keepChildren);
	};

	// bool GL::GLQuadRenderer::checkBuffers(const SPK::Group & group)
	bool checkBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("checkBuffers")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<bool>());
		}

		return GLQuadRenderer::checkBuffers(group);
	};

public:
	// Public virtual methods:
	// SPK::Registerable * SPK::Registerable::findByName(const std::string & name)
	SPK::Registerable * findByName(const std::string & name) {
		if(_obj.pushFunction("findByName")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<SPK::Registerable*>());
		}

		return GLQuadRenderer::findByName(name);
	};

	// void SPK::Renderer::enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	void enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) {
		if(_obj.pushFunction("enableRenderingHint")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(renderingHint);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return GLQuadRenderer::enableRenderingHint(renderingHint, enable);
	};

	// void SPK::Renderer::setAlphaTestThreshold(float alphaThreshold)
	void setAlphaTestThreshold(float alphaThreshold) {
		if(_obj.pushFunction("setAlphaTestThreshold")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(alphaThreshold);
			return (_obj.callFunction<void>());
		}

		return GLQuadRenderer::setAlphaTestThreshold(alphaThreshold);
	};

	// bool SPK::Renderer::isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	bool isRenderingHintEnabled(SPK::RenderingHint renderingHint) const {
		if(_obj.pushFunction("isRenderingHintEnabled")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(renderingHint);
			return (_obj.callFunction<bool>());
		}

		return GLQuadRenderer::isRenderingHintEnabled(renderingHint);
	};

	// void GL::GLRenderer::enableBlending(bool blendingEnabled)
	void enableBlending(bool blendingEnabled) {
		if(_obj.pushFunction("enableBlending")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(blendingEnabled);
			return (_obj.callFunction<void>());
		}

		return GLQuadRenderer::enableBlending(blendingEnabled);
	};

	// void GL::GLRenderer::setBlending(SPK::BlendingMode blendMode)
	void setBlending(SPK::BlendingMode blendMode) {
		if(_obj.pushFunction("setBlending")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(blendMode);
			return (_obj.callFunction<void>());
		}

		return GLQuadRenderer::setBlending(blendMode);
	};

	// std::string GL::GLQuadRenderer::getClassName() const
	std::string getClassName() const {
		if(_obj.pushFunction("getClassName")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			return (_obj.callFunction<std::string>());
		}

		return GLQuadRenderer::getClassName();
	};

	// bool GL::GLQuadRenderer::setTexturingMode(SPK::TexturingMode mode)
	bool setTexturingMode(SPK::TexturingMode mode) {
		if(_obj.pushFunction("setTexturingMode")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(mode);
			return (_obj.callFunction<bool>());
		}

		return GLQuadRenderer::setTexturingMode(mode);
	};

	// void GL::GLQuadRenderer::createBuffers(const SPK::Group & group)
	void createBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("createBuffers")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return GLQuadRenderer::createBuffers(group);
	};

	// void GL::GLQuadRenderer::destroyBuffers(const SPK::Group & group)
	void destroyBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("destroyBuffers")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return GLQuadRenderer::destroyBuffers(group);
	};

	// void GL::GLQuadRenderer::render(const SPK::Group & group)
	void render(const SPK::Group & group) {
		if(_obj.pushFunction("render")) {
			_obj.pushArg((GL::GLQuadRenderer*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return GLQuadRenderer::render(group);
	};


	// Protected non-virtual methods:
	// void GL::GLRenderer::initBlending() const
	void public_initBlending() const {
		return GL::GLRenderer::initBlending();
	};

	// void GL::GLRenderer::initRenderingHints() const
	void public_initRenderingHints() const {
		return GL::GLRenderer::initRenderingHints();
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

	// void SPK::QuadRendererInterface::computeAtlasCoordinates(const SPK::Particle & particle) const
	void public_computeAtlasCoordinates(const SPK::Particle & particle) const {
		return SPK::QuadRendererInterface::computeAtlasCoordinates(particle);
	};

	// float SPK::QuadRendererInterface::textureAtlasU0() const
	float public_textureAtlasU0() const {
		return SPK::QuadRendererInterface::textureAtlasU0();
	};

	// float SPK::QuadRendererInterface::textureAtlasU1() const
	float public_textureAtlasU1() const {
		return SPK::QuadRendererInterface::textureAtlasU1();
	};

	// float SPK::QuadRendererInterface::textureAtlasV0() const
	float public_textureAtlasV0() const {
		return SPK::QuadRendererInterface::textureAtlasV0();
	};

	// float SPK::QuadRendererInterface::textureAtlasV1() const
	float public_textureAtlasV1() const {
		return SPK::QuadRendererInterface::textureAtlasV1();
	};

	// bool SPK::Oriented3DRendererInterface::precomputeOrientation3D(const SPK::Group & group, const SPK::Vector3D & look, const SPK::Vector3D & up, const SPK::Vector3D & pos)
	bool public_precomputeOrientation3D(const SPK::Group & group, const SPK::Vector3D & look, const SPK::Vector3D & up, const SPK::Vector3D & pos) {
		return SPK::Oriented3DRendererInterface::precomputeOrientation3D(group, look, up, pos);
	};

	// void SPK::Oriented3DRendererInterface::computeGlobalOrientation3D()
	void public_computeGlobalOrientation3D() {
		return SPK::Oriented3DRendererInterface::computeGlobalOrientation3D();
	};

	// void SPK::Oriented3DRendererInterface::computeSingleOrientation3D(const SPK::Particle & particle)
	void public_computeSingleOrientation3D(const SPK::Particle & particle) {
		return SPK::Oriented3DRendererInterface::computeSingleOrientation3D(particle);
	};

	// void SPK::Oriented3DRendererInterface::scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	void public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const {
		return SPK::Oriented3DRendererInterface::scaleQuadVectors(particle, scaleX, scaleY);
	};

	// void SPK::Oriented3DRendererInterface::rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	void public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const {
		return SPK::Oriented3DRendererInterface::rotateAndScaleQuadVectors(particle, scaleX, scaleY);
	};

	// const SPK::Vector3D & SPK::Oriented3DRendererInterface::quadUp() const
	const SPK::Vector3D & public_quadUp() const {
		return SPK::Oriented3DRendererInterface::quadUp();
	};

	// const SPK::Vector3D & SPK::Oriented3DRendererInterface::quadSide() const
	const SPK::Vector3D & public_quadSide() const {
		return SPK::Oriented3DRendererInterface::quadSide();
	};

	// static void * GL::GLExtHandler::glGetProcAddress(const char * name)
	static void * public_glGetProcAddress(const char * name) {
		return GL::GLExtHandler::glGetProcAddress(name);
	};

	// static GLExtension GL::GLExtHandler::getPointSpriteGLExt()
	static GLExtension public_getPointSpriteGLExt() {
		return GL::GLExtHandler::getPointSpriteGLExt();
	};

	// static void GL::GLExtHandler::enablePointSpriteGLExt()
	static void public_enablePointSpriteGLExt() {
		return GL::GLExtHandler::enablePointSpriteGLExt();
	};

	// static void GL::GLExtHandler::disablePointSpriteGLExt()
	static void public_disablePointSpriteGLExt() {
		return GL::GLExtHandler::disablePointSpriteGLExt();
	};

	// static GLExtension GL::GLExtHandler::getPointParameterGLExt()
	static GLExtension public_getPointParameterGLExt() {
		return GL::GLExtHandler::getPointParameterGLExt();
	};

	// static void GL::GLExtHandler::enablePointParameterGLExt(float size, bool distance)
	static void public_enablePointParameterGLExt(float size, bool distance) {
		return GL::GLExtHandler::enablePointParameterGLExt(size, distance);
	};

	// static void GL::GLExtHandler::disablePointParameterGLExt()
	static void public_disablePointParameterGLExt() {
		return GL::GLExtHandler::disablePointParameterGLExt();
	};

	// static GLExtension GL::GLExtHandler::getTexture3DGLExt()
	static GLExtension public_getTexture3DGLExt() {
		return GL::GLExtHandler::getTexture3DGLExt();
	};

	// static GLExtension GL::GLExtHandler::getShaderGLExt()
	static GLExtension public_getShaderGLExt() {
		return GL::GLExtHandler::getShaderGLExt();
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

	inline static bool _lg_typecheck_public_computeAtlasCoordinates(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_textureAtlasU0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_textureAtlasU1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_textureAtlasV0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_textureAtlasV1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_precomputeOrientation3D(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeGlobalOrientation3D(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeSingleOrientation3D(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_scaleQuadVectors(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_rotateAndScaleQuadVectors(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_quadUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_quadSide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_glGetProcAddress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getPointSpriteGLExt(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_enablePointSpriteGLExt(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_disablePointSpriteGLExt(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getPointParameterGLExt(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_enablePointParameterGLExt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_disablePointParameterGLExt(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getTexture3DGLExt(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getShaderGLExt(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void GL::GLRenderer::public_initBlending() const
	static int _bind_public_initBlending(lua_State *L) {
		if (!_lg_typecheck_public_initBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::public_initBlending() const function, expected prototype:\nvoid GL::GLRenderer::public_initBlending() const\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::public_initBlending() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->public_initBlending();

		return 0;
	}

	// void GL::GLRenderer::public_initRenderingHints() const
	static int _bind_public_initRenderingHints(lua_State *L) {
		if (!_lg_typecheck_public_initRenderingHints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GL::GLRenderer::public_initRenderingHints() const function, expected prototype:\nvoid GL::GLRenderer::public_initRenderingHints() const\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GL::GLRenderer::public_initRenderingHints() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->public_initRenderingHints();

		return 0;
	}

	// void SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll)
	static int _bind_public_registerChild(lua_State *L) {
		if (!_lg_typecheck_public_registerChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll) function, expected prototype:\nvoid SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));
		bool registerAll=(bool)(lua_toboolean(L,3)==1);

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Registerable::public_registerChild(SPK::Registerable *, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->public_registerChild(child, registerAll);

		return 0;
	}

	// SPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable * child, bool createBase)
	static int _bind_public_copyChild(lua_State *L) {
		if (!_lg_typecheck_public_copyChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable * child, bool createBase) function, expected prototype:\nSPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable * child, bool createBase)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));
		bool createBase=(bool)(lua_toboolean(L,3)==1);

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable *, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->public_copyChild(child, createBase);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// bool SPK::Registerable::public_destroyChild(SPK::Registerable * child, bool keepChildren)
	static int _bind_public_destroyChild(lua_State *L) {
		if (!_lg_typecheck_public_destroyChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Registerable::public_destroyChild(SPK::Registerable * child, bool keepChildren) function, expected prototype:\nbool SPK::Registerable::public_destroyChild(SPK::Registerable * child, bool keepChildren)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));
		bool keepChildren=(bool)(lua_toboolean(L,3)==1);

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Registerable::public_destroyChild(SPK::Registerable *, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->public_destroyChild(child, keepChildren);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Registerable::public_incrementChildReference(SPK::Registerable * child)
	static int _bind_public_incrementChildReference(lua_State *L) {
		if (!_lg_typecheck_public_incrementChildReference(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::public_incrementChildReference(SPK::Registerable * child) function, expected prototype:\nvoid SPK::Registerable::public_incrementChildReference(SPK::Registerable * child)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Registerable::public_incrementChildReference(SPK::Registerable *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->public_incrementChildReference(child);

		return 0;
	}

	// void SPK::Registerable::public_decrementChildReference(SPK::Registerable * child)
	static int _bind_public_decrementChildReference(lua_State *L) {
		if (!_lg_typecheck_public_decrementChildReference(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::public_decrementChildReference(SPK::Registerable * child) function, expected prototype:\nvoid SPK::Registerable::public_decrementChildReference(SPK::Registerable * child)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Registerable::public_decrementChildReference(SPK::Registerable *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->public_decrementChildReference(child);

		return 0;
	}

	// static void SPK::Registerable::public_registerObject(SPK::Registerable * obj, bool registerAll = false)
	static int _bind_public_registerObject(lua_State *L) {
		if (!_lg_typecheck_public_registerObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::Registerable::public_registerObject(SPK::Registerable * obj, bool registerAll = false) function, expected prototype:\nstatic void SPK::Registerable::public_registerObject(SPK::Registerable * obj, bool registerAll = false)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::Registerable* obj=(Luna< SPK::Registerable >::check(L,1));
		bool registerAll=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Registerable >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void SPK::Registerable::public_registerObject(SPK::Registerable *, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->public_registerObject(obj, registerAll);

		return 0;
	}

	// bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group)
	static int _bind_public_prepareBuffers(lua_State *L) {
		if (!_lg_typecheck_public_prepareBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group) function, expected prototype:\nbool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::BufferHandler::public_prepareBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::BufferHandler >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::BufferHandler >::check(L,1)).name());
		}
		bool lret = self->public_prepareBuffers(group);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::QuadRendererInterface::public_computeAtlasCoordinates(const SPK::Particle & particle) const
	static int _bind_public_computeAtlasCoordinates(lua_State *L) {
		if (!_lg_typecheck_public_computeAtlasCoordinates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::QuadRendererInterface::public_computeAtlasCoordinates(const SPK::Particle & particle) const function, expected prototype:\nvoid SPK::QuadRendererInterface::public_computeAtlasCoordinates(const SPK::Particle & particle) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		const SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::QuadRendererInterface::public_computeAtlasCoordinates function");
		}
		const SPK::Particle & particle=*particle_ptr;

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::QuadRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::QuadRendererInterface::public_computeAtlasCoordinates(const SPK::Particle &) const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		self->public_computeAtlasCoordinates(particle);

		return 0;
	}

	// float SPK::QuadRendererInterface::public_textureAtlasU0() const
	static int _bind_public_textureAtlasU0(lua_State *L) {
		if (!_lg_typecheck_public_textureAtlasU0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::QuadRendererInterface::public_textureAtlasU0() const function, expected prototype:\nfloat SPK::QuadRendererInterface::public_textureAtlasU0() const\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< SPK::QuadRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::QuadRendererInterface::public_textureAtlasU0() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		float lret = self->public_textureAtlasU0();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::QuadRendererInterface::public_textureAtlasU1() const
	static int _bind_public_textureAtlasU1(lua_State *L) {
		if (!_lg_typecheck_public_textureAtlasU1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::QuadRendererInterface::public_textureAtlasU1() const function, expected prototype:\nfloat SPK::QuadRendererInterface::public_textureAtlasU1() const\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< SPK::QuadRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::QuadRendererInterface::public_textureAtlasU1() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		float lret = self->public_textureAtlasU1();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::QuadRendererInterface::public_textureAtlasV0() const
	static int _bind_public_textureAtlasV0(lua_State *L) {
		if (!_lg_typecheck_public_textureAtlasV0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::QuadRendererInterface::public_textureAtlasV0() const function, expected prototype:\nfloat SPK::QuadRendererInterface::public_textureAtlasV0() const\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< SPK::QuadRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::QuadRendererInterface::public_textureAtlasV0() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		float lret = self->public_textureAtlasV0();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::QuadRendererInterface::public_textureAtlasV1() const
	static int _bind_public_textureAtlasV1(lua_State *L) {
		if (!_lg_typecheck_public_textureAtlasV1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::QuadRendererInterface::public_textureAtlasV1() const function, expected prototype:\nfloat SPK::QuadRendererInterface::public_textureAtlasV1() const\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< SPK::QuadRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::QuadRendererInterface::public_textureAtlasV1() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		float lret = self->public_textureAtlasV1();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Oriented3DRendererInterface::public_precomputeOrientation3D(const SPK::Group & group, const SPK::Vector3D & look, const SPK::Vector3D & up, const SPK::Vector3D & pos)
	static int _bind_public_precomputeOrientation3D(lua_State *L) {
		if (!_lg_typecheck_public_precomputeOrientation3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Oriented3DRendererInterface::public_precomputeOrientation3D(const SPK::Group & group, const SPK::Vector3D & look, const SPK::Vector3D & up, const SPK::Vector3D & pos) function, expected prototype:\nbool SPK::Oriented3DRendererInterface::public_precomputeOrientation3D(const SPK::Group & group, const SPK::Vector3D & look, const SPK::Vector3D & up, const SPK::Vector3D & pos)\nClass arguments details:\narg 1 ID = 31337102\narg 2 ID = 70092749\narg 3 ID = 70092749\narg 4 ID = 70092749\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Oriented3DRendererInterface::public_precomputeOrientation3D function");
		}
		const SPK::Group & group=*group_ptr;
		const SPK::Vector3D* look_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !look_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg look in SPK::Oriented3DRendererInterface::public_precomputeOrientation3D function");
		}
		const SPK::Vector3D & look=*look_ptr;
		const SPK::Vector3D* up_ptr=(Luna< SPK::Vector3D >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in SPK::Oriented3DRendererInterface::public_precomputeOrientation3D function");
		}
		const SPK::Vector3D & up=*up_ptr;
		const SPK::Vector3D* pos_ptr=(Luna< SPK::Vector3D >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in SPK::Oriented3DRendererInterface::public_precomputeOrientation3D function");
		}
		const SPK::Vector3D & pos=*pos_ptr;

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Oriented3DRendererInterface::public_precomputeOrientation3D(const SPK::Group &, const SPK::Vector3D &, const SPK::Vector3D &, const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name());
		}
		bool lret = self->public_precomputeOrientation3D(group, look, up, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Oriented3DRendererInterface::public_computeGlobalOrientation3D()
	static int _bind_public_computeGlobalOrientation3D(lua_State *L) {
		if (!_lg_typecheck_public_computeGlobalOrientation3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface::public_computeGlobalOrientation3D() function, expected prototype:\nvoid SPK::Oriented3DRendererInterface::public_computeGlobalOrientation3D()\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Oriented3DRendererInterface::public_computeGlobalOrientation3D(). Got : '%s'",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name());
		}
		self->public_computeGlobalOrientation3D();

		return 0;
	}

	// void SPK::Oriented3DRendererInterface::public_computeSingleOrientation3D(const SPK::Particle & particle)
	static int _bind_public_computeSingleOrientation3D(lua_State *L) {
		if (!_lg_typecheck_public_computeSingleOrientation3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface::public_computeSingleOrientation3D(const SPK::Particle & particle) function, expected prototype:\nvoid SPK::Oriented3DRendererInterface::public_computeSingleOrientation3D(const SPK::Particle & particle)\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		const SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Oriented3DRendererInterface::public_computeSingleOrientation3D function");
		}
		const SPK::Particle & particle=*particle_ptr;

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Oriented3DRendererInterface::public_computeSingleOrientation3D(const SPK::Particle &). Got : '%s'",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name());
		}
		self->public_computeSingleOrientation3D(particle);

		return 0;
	}

	// void SPK::Oriented3DRendererInterface::public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	static int _bind_public_scaleQuadVectors(lua_State *L) {
		if (!_lg_typecheck_public_scaleQuadVectors(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface::public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const function, expected prototype:\nvoid SPK::Oriented3DRendererInterface::public_scaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		const SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Oriented3DRendererInterface::public_scaleQuadVectors function");
		}
		const SPK::Particle & particle=*particle_ptr;
		float scaleX=(float)lua_tonumber(L,3);
		float scaleY=(float)lua_tonumber(L,4);

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Oriented3DRendererInterface::public_scaleQuadVectors(const SPK::Particle &, float, float) const. Got : '%s'",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name());
		}
		self->public_scaleQuadVectors(particle, scaleX, scaleY);

		return 0;
	}

	// void SPK::Oriented3DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const
	static int _bind_public_rotateAndScaleQuadVectors(lua_State *L) {
		if (!_lg_typecheck_public_rotateAndScaleQuadVectors(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const function, expected prototype:\nvoid SPK::Oriented3DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle & particle, float scaleX, float scaleY) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		const SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in SPK::Oriented3DRendererInterface::public_rotateAndScaleQuadVectors function");
		}
		const SPK::Particle & particle=*particle_ptr;
		float scaleX=(float)lua_tonumber(L,3);
		float scaleY=(float)lua_tonumber(L,4);

		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Oriented3DRendererInterface::public_rotateAndScaleQuadVectors(const SPK::Particle &, float, float) const. Got : '%s'",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name());
		}
		self->public_rotateAndScaleQuadVectors(particle, scaleX, scaleY);

		return 0;
	}

	// const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadUp() const
	static int _bind_public_quadUp(lua_State *L) {
		if (!_lg_typecheck_public_quadUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadUp() const function, expected prototype:\nconst SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadUp() const\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadUp() const. Got : '%s'",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->public_quadUp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadSide() const
	static int _bind_public_quadSide(lua_State *L) {
		if (!_lg_typecheck_public_quadSide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadSide() const function, expected prototype:\nconst SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadSide() const\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< SPK::Oriented3DRendererInterface >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Oriented3DRendererInterface::public_quadSide() const. Got : '%s'",typeid(Luna< SPK::Oriented3DRendererInterface >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->public_quadSide();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// static void * GL::GLExtHandler::public_glGetProcAddress(const char * name)
	static int _bind_public_glGetProcAddress(lua_State *L) {
		if (!_lg_typecheck_public_glGetProcAddress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void * GL::GLExtHandler::public_glGetProcAddress(const char * name) function, expected prototype:\nstatic void * GL::GLExtHandler::public_glGetProcAddress(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,1);

		wrapper_GL_GLQuadRenderer* self=Luna< GL::GLExtHandler >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void * GL::GLExtHandler::public_glGetProcAddress(const char *). Got : '%s'",typeid(Luna< GL::GLExtHandler >::check(L,1)).name());
		}
		void * lret = self->public_glGetProcAddress(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// static GLExtension GL::GLExtHandler::public_getPointSpriteGLExt()
	static int _bind_public_getPointSpriteGLExt(lua_State *L) {
		if (!_lg_typecheck_public_getPointSpriteGLExt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static GLExtension GL::GLExtHandler::public_getPointSpriteGLExt() function, expected prototype:\nstatic GLExtension GL::GLExtHandler::public_getPointSpriteGLExt()\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< GL::GLExtHandler >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static GLExtension GL::GLExtHandler::public_getPointSpriteGLExt(). Got : '%s'",typeid(Luna< GL::GLExtHandler >::check(L,1)).name());
		}
		GLExtension lret = self->public_getPointSpriteGLExt();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void GL::GLExtHandler::public_enablePointSpriteGLExt()
	static int _bind_public_enablePointSpriteGLExt(lua_State *L) {
		if (!_lg_typecheck_public_enablePointSpriteGLExt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void GL::GLExtHandler::public_enablePointSpriteGLExt() function, expected prototype:\nstatic void GL::GLExtHandler::public_enablePointSpriteGLExt()\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< GL::GLExtHandler >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void GL::GLExtHandler::public_enablePointSpriteGLExt(). Got : '%s'",typeid(Luna< GL::GLExtHandler >::check(L,1)).name());
		}
		self->public_enablePointSpriteGLExt();

		return 0;
	}

	// static void GL::GLExtHandler::public_disablePointSpriteGLExt()
	static int _bind_public_disablePointSpriteGLExt(lua_State *L) {
		if (!_lg_typecheck_public_disablePointSpriteGLExt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void GL::GLExtHandler::public_disablePointSpriteGLExt() function, expected prototype:\nstatic void GL::GLExtHandler::public_disablePointSpriteGLExt()\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< GL::GLExtHandler >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void GL::GLExtHandler::public_disablePointSpriteGLExt(). Got : '%s'",typeid(Luna< GL::GLExtHandler >::check(L,1)).name());
		}
		self->public_disablePointSpriteGLExt();

		return 0;
	}

	// static GLExtension GL::GLExtHandler::public_getPointParameterGLExt()
	static int _bind_public_getPointParameterGLExt(lua_State *L) {
		if (!_lg_typecheck_public_getPointParameterGLExt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static GLExtension GL::GLExtHandler::public_getPointParameterGLExt() function, expected prototype:\nstatic GLExtension GL::GLExtHandler::public_getPointParameterGLExt()\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< GL::GLExtHandler >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static GLExtension GL::GLExtHandler::public_getPointParameterGLExt(). Got : '%s'",typeid(Luna< GL::GLExtHandler >::check(L,1)).name());
		}
		GLExtension lret = self->public_getPointParameterGLExt();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void GL::GLExtHandler::public_enablePointParameterGLExt(float size, bool distance)
	static int _bind_public_enablePointParameterGLExt(lua_State *L) {
		if (!_lg_typecheck_public_enablePointParameterGLExt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void GL::GLExtHandler::public_enablePointParameterGLExt(float size, bool distance) function, expected prototype:\nstatic void GL::GLExtHandler::public_enablePointParameterGLExt(float size, bool distance)\nClass arguments details:\n");
		}

		float size=(float)lua_tonumber(L,1);
		bool distance=(bool)(lua_toboolean(L,2)==1);

		wrapper_GL_GLQuadRenderer* self=Luna< GL::GLExtHandler >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void GL::GLExtHandler::public_enablePointParameterGLExt(float, bool). Got : '%s'",typeid(Luna< GL::GLExtHandler >::check(L,1)).name());
		}
		self->public_enablePointParameterGLExt(size, distance);

		return 0;
	}

	// static void GL::GLExtHandler::public_disablePointParameterGLExt()
	static int _bind_public_disablePointParameterGLExt(lua_State *L) {
		if (!_lg_typecheck_public_disablePointParameterGLExt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void GL::GLExtHandler::public_disablePointParameterGLExt() function, expected prototype:\nstatic void GL::GLExtHandler::public_disablePointParameterGLExt()\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< GL::GLExtHandler >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void GL::GLExtHandler::public_disablePointParameterGLExt(). Got : '%s'",typeid(Luna< GL::GLExtHandler >::check(L,1)).name());
		}
		self->public_disablePointParameterGLExt();

		return 0;
	}

	// static GLExtension GL::GLExtHandler::public_getTexture3DGLExt()
	static int _bind_public_getTexture3DGLExt(lua_State *L) {
		if (!_lg_typecheck_public_getTexture3DGLExt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static GLExtension GL::GLExtHandler::public_getTexture3DGLExt() function, expected prototype:\nstatic GLExtension GL::GLExtHandler::public_getTexture3DGLExt()\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< GL::GLExtHandler >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static GLExtension GL::GLExtHandler::public_getTexture3DGLExt(). Got : '%s'",typeid(Luna< GL::GLExtHandler >::check(L,1)).name());
		}
		GLExtension lret = self->public_getTexture3DGLExt();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static GLExtension GL::GLExtHandler::public_getShaderGLExt()
	static int _bind_public_getShaderGLExt(lua_State *L) {
		if (!_lg_typecheck_public_getShaderGLExt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static GLExtension GL::GLExtHandler::public_getShaderGLExt() function, expected prototype:\nstatic GLExtension GL::GLExtHandler::public_getShaderGLExt()\nClass arguments details:\n");
		}


		wrapper_GL_GLQuadRenderer* self=Luna< GL::GLExtHandler >::checkSubType< wrapper_GL_GLQuadRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static GLExtension GL::GLExtHandler::public_getShaderGLExt(). Got : '%s'",typeid(Luna< GL::GLExtHandler >::check(L,1)).name());
		}
		GLExtension lret = self->public_getShaderGLExt();
		lua_pushnumber(L,lret);

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
		{"computeAtlasCoordinates",_bind_public_computeAtlasCoordinates},
		{"textureAtlasU0",_bind_public_textureAtlasU0},
		{"textureAtlasU1",_bind_public_textureAtlasU1},
		{"textureAtlasV0",_bind_public_textureAtlasV0},
		{"textureAtlasV1",_bind_public_textureAtlasV1},
		{"precomputeOrientation3D",_bind_public_precomputeOrientation3D},
		{"computeGlobalOrientation3D",_bind_public_computeGlobalOrientation3D},
		{"computeSingleOrientation3D",_bind_public_computeSingleOrientation3D},
		{"scaleQuadVectors",_bind_public_scaleQuadVectors},
		{"rotateAndScaleQuadVectors",_bind_public_rotateAndScaleQuadVectors},
		{"quadUp",_bind_public_quadUp},
		{"quadSide",_bind_public_quadSide},
		{"glGetProcAddress",_bind_public_glGetProcAddress},
		{"getPointSpriteGLExt",_bind_public_getPointSpriteGLExt},
		{"enablePointSpriteGLExt",_bind_public_enablePointSpriteGLExt},
		{"disablePointSpriteGLExt",_bind_public_disablePointSpriteGLExt},
		{"getPointParameterGLExt",_bind_public_getPointParameterGLExt},
		{"enablePointParameterGLExt",_bind_public_enablePointParameterGLExt},
		{"disablePointParameterGLExt",_bind_public_disablePointParameterGLExt},
		{"getTexture3DGLExt",_bind_public_getTexture3DGLExt},
		{"getShaderGLExt",_bind_public_getShaderGLExt},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

