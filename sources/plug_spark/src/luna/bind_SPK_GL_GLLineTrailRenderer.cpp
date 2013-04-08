#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_GL_GLLineTrailRenderer.h>

class luna_wrapper_SPK_GL_GLLineTrailRenderer {
public:
	typedef Luna< SPK::GL::GLLineTrailRenderer > luna_t;

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

		SPK::GL::GLLineTrailRenderer* self= (SPK::GL::GLLineTrailRenderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::GL::GLLineTrailRenderer >::push(L,self,false);
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
		//SPK::GL::GLLineTrailRenderer* ptr= dynamic_cast< SPK::GL::GLLineTrailRenderer* >(Luna< SPK::Registerable >::check(L,1));
		SPK::GL::GLLineTrailRenderer* ptr= luna_caster< SPK::Registerable, SPK::GL::GLLineTrailRenderer >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLLineTrailRenderer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::GL::GLLineTrailRenderer* ptr= dynamic_cast< SPK::GL::GLLineTrailRenderer* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::GL::GLLineTrailRenderer* ptr= luna_caster< SPK::BufferHandler, SPK::GL::GLLineTrailRenderer >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::GL::GLLineTrailRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNbSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDuration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDegeneratedLines(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNbSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDuration(lua_State *L) {
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

	inline static bool _lg_typecheck_init(lua_State *L) {
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
		if( lua_gettop(L)!=0 ) return false;

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

	inline static bool _lg_typecheck_base_setBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_enableBlending(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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
	// SPK::GL::GLLineTrailRenderer::GLLineTrailRenderer(lua_Table * data)
	static SPK::GL::GLLineTrailRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::GL::GLLineTrailRenderer::GLLineTrailRenderer(lua_Table * data) function, expected prototype:\nSPK::GL::GLLineTrailRenderer::GLLineTrailRenderer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_SPK_GL_GLLineTrailRenderer(L,NULL);
	}


	// Function binds:
	// std::string SPK::GL::GLLineTrailRenderer::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::GL::GLLineTrailRenderer::getClassName() const function, expected prototype:\nstd::string SPK::GL::GLLineTrailRenderer::getClassName() const\nClass arguments details:\n");
		}


		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::GL::GLLineTrailRenderer::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::GL::GLLineTrailRenderer::setNbSamples(size_t nbSamples)
	static int _bind_setNbSamples(lua_State *L) {
		if (!_lg_typecheck_setNbSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::setNbSamples(size_t nbSamples) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::setNbSamples(size_t nbSamples)\nClass arguments details:\n");
		}

		size_t nbSamples=(size_t)lua_tointeger(L,2);

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::setNbSamples(size_t). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setNbSamples(nbSamples);

		return 0;
	}

	// void SPK::GL::GLLineTrailRenderer::setWidth(float width)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::setWidth(float width) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::setWidth(float width)\nClass arguments details:\n");
		}

		float width=(float)lua_tonumber(L,2);

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::setWidth(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setWidth(width);

		return 0;
	}

	// void SPK::GL::GLLineTrailRenderer::setDuration(float duration)
	static int _bind_setDuration(lua_State *L) {
		if (!_lg_typecheck_setDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::setDuration(float duration) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::setDuration(float duration)\nClass arguments details:\n");
		}

		float duration=(float)lua_tonumber(L,2);

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::setDuration(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setDuration(duration);

		return 0;
	}

	// void SPK::GL::GLLineTrailRenderer::setDegeneratedLines(float r, float g, float b, float a)
	static int _bind_setDegeneratedLines(lua_State *L) {
		if (!_lg_typecheck_setDegeneratedLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::setDegeneratedLines(float r, float g, float b, float a) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::setDegeneratedLines(float r, float g, float b, float a)\nClass arguments details:\n");
		}

		float r=(float)lua_tonumber(L,2);
		float g=(float)lua_tonumber(L,3);
		float b=(float)lua_tonumber(L,4);
		float a=(float)lua_tonumber(L,5);

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::setDegeneratedLines(float, float, float, float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setDegeneratedLines(r, g, b, a);

		return 0;
	}

	// void SPK::GL::GLLineTrailRenderer::enableBlending(bool blendingEnabled)
	static int _bind_enableBlending(lua_State *L) {
		if (!_lg_typecheck_enableBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::enableBlending(bool blendingEnabled) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::enableBlending(bool blendingEnabled)\nClass arguments details:\n");
		}

		bool blendingEnabled=(bool)(lua_toboolean(L,2)==1);

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::enableBlending(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->enableBlending(blendingEnabled);

		return 0;
	}

	// size_t SPK::GL::GLLineTrailRenderer::getNbSamples() const
	static int _bind_getNbSamples(lua_State *L) {
		if (!_lg_typecheck_getNbSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::GL::GLLineTrailRenderer::getNbSamples() const function, expected prototype:\nsize_t SPK::GL::GLLineTrailRenderer::getNbSamples() const\nClass arguments details:\n");
		}


		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::GL::GLLineTrailRenderer::getNbSamples() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		size_t lret = self->getNbSamples();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::GL::GLLineTrailRenderer::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::GL::GLLineTrailRenderer::getWidth() const function, expected prototype:\nfloat SPK::GL::GLLineTrailRenderer::getWidth() const\nClass arguments details:\n");
		}


		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::GL::GLLineTrailRenderer::getWidth() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::GL::GLLineTrailRenderer::getDuration() const
	static int _bind_getDuration(lua_State *L) {
		if (!_lg_typecheck_getDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::GL::GLLineTrailRenderer::getDuration() const function, expected prototype:\nfloat SPK::GL::GLLineTrailRenderer::getDuration() const\nClass arguments details:\n");
		}


		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::GL::GLLineTrailRenderer::getDuration() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SPK::GL::GLLineTrailRenderer::createBuffers(const SPK::Group & group)
	static int _bind_createBuffers(lua_State *L) {
		if (!_lg_typecheck_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineTrailRenderer::createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->createBuffers(group);

		return 0;
	}

	// void SPK::GL::GLLineTrailRenderer::destroyBuffers(const SPK::Group & group)
	static int _bind_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineTrailRenderer::destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->destroyBuffers(group);

		return 0;
	}

	// void SPK::GL::GLLineTrailRenderer::init(const SPK::Group & group)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::init(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::init(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineTrailRenderer::init function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::init(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->init(group);

		return 0;
	}

	// void SPK::GL::GLLineTrailRenderer::render(const SPK::Group & group)
	static int _bind_render(lua_State *L) {
		if (!_lg_typecheck_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::render(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineTrailRenderer::render function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::render(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->render(group);

		return 0;
	}

	// static SPK::GL::GLLineTrailRenderer * SPK::GL::GLLineTrailRenderer::create()
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::GL::GLLineTrailRenderer * SPK::GL::GLLineTrailRenderer::create() function, expected prototype:\nstatic SPK::GL::GLLineTrailRenderer * SPK::GL::GLLineTrailRenderer::create()\nClass arguments details:\n");
		}


		SPK::GL::GLLineTrailRenderer * lret = SPK::GL::GLLineTrailRenderer::create();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::GL::GLLineTrailRenderer >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::GL::GLLineTrailRenderer::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::GL::GLLineTrailRenderer::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::GL::GLLineTrailRenderer::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::GL::GLLineTrailRenderer::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->GLLineTrailRenderer::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// void SPK::GL::GLLineTrailRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)
	static int _bind_base_enableRenderingHint(lua_State *L) {
		if (!_lg_typecheck_base_enableRenderingHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::base_enableRenderingHint(SPK::RenderingHint renderingHint, bool enable)\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::base_enableRenderingHint(SPK::RenderingHint, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineTrailRenderer::enableRenderingHint(renderingHint, enable);

		return 0;
	}

	// void SPK::GL::GLLineTrailRenderer::base_setAlphaTestThreshold(float alphaThreshold)
	static int _bind_base_setAlphaTestThreshold(lua_State *L) {
		if (!_lg_typecheck_base_setAlphaTestThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::base_setAlphaTestThreshold(float alphaThreshold) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::base_setAlphaTestThreshold(float alphaThreshold)\nClass arguments details:\n");
		}

		float alphaThreshold=(float)lua_tonumber(L,2);

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::base_setAlphaTestThreshold(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineTrailRenderer::setAlphaTestThreshold(alphaThreshold);

		return 0;
	}

	// bool SPK::GL::GLLineTrailRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const
	static int _bind_base_isRenderingHintEnabled(lua_State *L) {
		if (!_lg_typecheck_base_isRenderingHintEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::GL::GLLineTrailRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const function, expected prototype:\nbool SPK::GL::GLLineTrailRenderer::base_isRenderingHintEnabled(SPK::RenderingHint renderingHint) const\nClass arguments details:\n");
		}

		SPK::RenderingHint renderingHint=(SPK::RenderingHint)lua_tointeger(L,2);

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::GL::GLLineTrailRenderer::base_isRenderingHintEnabled(SPK::RenderingHint) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->GLLineTrailRenderer::isRenderingHintEnabled(renderingHint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::GL::GLLineTrailRenderer::base_setBlending(SPK::BlendingMode blendMode)
	static int _bind_base_setBlending(lua_State *L) {
		if (!_lg_typecheck_base_setBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::base_setBlending(SPK::BlendingMode blendMode) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::base_setBlending(SPK::BlendingMode blendMode)\nClass arguments details:\n");
		}

		SPK::BlendingMode blendMode=(SPK::BlendingMode)lua_tointeger(L,2);

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::base_setBlending(SPK::BlendingMode). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineTrailRenderer::setBlending(blendMode);

		return 0;
	}

	// std::string SPK::GL::GLLineTrailRenderer::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::GL::GLLineTrailRenderer::base_getClassName() const function, expected prototype:\nstd::string SPK::GL::GLLineTrailRenderer::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::GL::GLLineTrailRenderer::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->GLLineTrailRenderer::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::GL::GLLineTrailRenderer::base_enableBlending(bool blendingEnabled)
	static int _bind_base_enableBlending(lua_State *L) {
		if (!_lg_typecheck_base_enableBlending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::base_enableBlending(bool blendingEnabled) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::base_enableBlending(bool blendingEnabled)\nClass arguments details:\n");
		}

		bool blendingEnabled=(bool)(lua_toboolean(L,2)==1);

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::base_enableBlending(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineTrailRenderer::enableBlending(blendingEnabled);

		return 0;
	}

	// void SPK::GL::GLLineTrailRenderer::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineTrailRenderer::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::base_createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineTrailRenderer::createBuffers(group);

		return 0;
	}

	// void SPK::GL::GLLineTrailRenderer::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineTrailRenderer::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::base_destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineTrailRenderer::destroyBuffers(group);

		return 0;
	}

	// void SPK::GL::GLLineTrailRenderer::base_render(const SPK::Group & group)
	static int _bind_base_render(lua_State *L) {
		if (!_lg_typecheck_base_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::GL::GLLineTrailRenderer::base_render(const SPK::Group & group) function, expected prototype:\nvoid SPK::GL::GLLineTrailRenderer::base_render(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::GL::GLLineTrailRenderer::base_render function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::GL::GLLineTrailRenderer* self=Luna< SPK::Registerable >::checkSubType< SPK::GL::GLLineTrailRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::GL::GLLineTrailRenderer::base_render(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->GLLineTrailRenderer::render(group);

		return 0;
	}


	// Operator binds:

};

SPK::GL::GLLineTrailRenderer* LunaTraits< SPK::GL::GLLineTrailRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::GL::GLLineTrailRenderer >::_bind_dtor(SPK::GL::GLLineTrailRenderer* obj) {
	delete obj;
}

const char LunaTraits< SPK::GL::GLLineTrailRenderer >::className[] = "GLLineTrailRenderer";
const char LunaTraits< SPK::GL::GLLineTrailRenderer >::fullName[] = "SPK::GL::GLLineTrailRenderer";
const char LunaTraits< SPK::GL::GLLineTrailRenderer >::moduleName[] = "spark";
const char* LunaTraits< SPK::GL::GLLineTrailRenderer >::parents[] = {"spark.GLRenderer", 0};
const int LunaTraits< SPK::GL::GLLineTrailRenderer >::hash = 99561569;
const int LunaTraits< SPK::GL::GLLineTrailRenderer >::uniqueIDs[] = {31337102, 81662222,0};

luna_RegType LunaTraits< SPK::GL::GLLineTrailRenderer >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_getClassName},
	{"setNbSamples", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_setNbSamples},
	{"setWidth", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_setWidth},
	{"setDuration", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_setDuration},
	{"setDegeneratedLines", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_setDegeneratedLines},
	{"enableBlending", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_enableBlending},
	{"getNbSamples", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_getNbSamples},
	{"getWidth", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_getWidth},
	{"getDuration", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_getDuration},
	{"createBuffers", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_createBuffers},
	{"destroyBuffers", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_destroyBuffers},
	{"init", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_init},
	{"render", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_render},
	{"create", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_create},
	{"base_findByName", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_base_findByName},
	{"base_enableRenderingHint", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_base_enableRenderingHint},
	{"base_setAlphaTestThreshold", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_base_setAlphaTestThreshold},
	{"base_isRenderingHintEnabled", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_base_isRenderingHintEnabled},
	{"base_setBlending", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_base_setBlending},
	{"base_getClassName", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_base_getClassName},
	{"base_enableBlending", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_base_enableBlending},
	{"base_createBuffers", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_base_destroyBuffers},
	{"base_render", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_base_render},
	{"fromVoid", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::GL::GLLineTrailRenderer >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_cast_from_Registerable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_GL_GLLineTrailRenderer::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::GL::GLLineTrailRenderer >::enumValues[] = {
	{0,0}
};


