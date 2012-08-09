#include <plug_common.h>

class luna_wrapper_osgParticle_ParticleEffect {
public:
	typedef Luna< osgParticle::ParticleEffect > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::ParticleEffect* ptr= dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ParticleEffect >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAutomaticSetup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutomaticSetup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseLocalParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseLocalParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureFileName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultParticleTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81629555) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefaultParticleTemplate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIntensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStartTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStartTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEmitterDuration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEmitterDuration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleDuration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleDuration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_areAllParticlesDead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmitter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmitter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgram_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgram_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSystem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticleSystem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpEmitterAndProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_buildEffect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::ParticleEffect::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleEffect::libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleEffect::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleEffect::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleEffect::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleEffect::className() const function, expected prototype:\nconst char * osgParticle::ParticleEffect::className() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleEffect::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::ParticleEffect::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleEffect::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleEffect::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleEffect::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleEffect::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osgParticle::ParticleEffect::setAutomaticSetup(bool flag)
	static int _bind_setAutomaticSetup(lua_State *L) {
		if (!_lg_typecheck_setAutomaticSetup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setAutomaticSetup(bool flag) function, expected prototype:\nvoid osgParticle::ParticleEffect::setAutomaticSetup(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setAutomaticSetup(bool)");
		}
		self->setAutomaticSetup(flag);

		return 0;
	}

	// bool osgParticle::ParticleEffect::getAutomaticSetup() const
	static int _bind_getAutomaticSetup(lua_State *L) {
		if (!_lg_typecheck_getAutomaticSetup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::getAutomaticSetup() const function, expected prototype:\nbool osgParticle::ParticleEffect::getAutomaticSetup() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::getAutomaticSetup() const");
		}
		bool lret = self->getAutomaticSetup();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleEffect::setUseLocalParticleSystem(bool local)
	static int _bind_setUseLocalParticleSystem(lua_State *L) {
		if (!_lg_typecheck_setUseLocalParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setUseLocalParticleSystem(bool local) function, expected prototype:\nvoid osgParticle::ParticleEffect::setUseLocalParticleSystem(bool local)\nClass arguments details:\n");
		}

		bool local=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setUseLocalParticleSystem(bool)");
		}
		self->setUseLocalParticleSystem(local);

		return 0;
	}

	// bool osgParticle::ParticleEffect::getUseLocalParticleSystem() const
	static int _bind_getUseLocalParticleSystem(lua_State *L) {
		if (!_lg_typecheck_getUseLocalParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::getUseLocalParticleSystem() const function, expected prototype:\nbool osgParticle::ParticleEffect::getUseLocalParticleSystem() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::getUseLocalParticleSystem() const");
		}
		bool lret = self->getUseLocalParticleSystem();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleEffect::setTextureFileName(const std::string & filename)
	static int _bind_setTextureFileName(lua_State *L) {
		if (!_lg_typecheck_setTextureFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setTextureFileName(const std::string & filename) function, expected prototype:\nvoid osgParticle::ParticleEffect::setTextureFileName(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setTextureFileName(const std::string &)");
		}
		self->setTextureFileName(filename);

		return 0;
	}

	// const std::string & osgParticle::ParticleEffect::getTextureFileName() const
	static int _bind_getTextureFileName(lua_State *L) {
		if (!_lg_typecheck_getTextureFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgParticle::ParticleEffect::getTextureFileName() const function, expected prototype:\nconst std::string & osgParticle::ParticleEffect::getTextureFileName() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgParticle::ParticleEffect::getTextureFileName() const");
		}
		const std::string & lret = self->getTextureFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgParticle::ParticleEffect::setDefaultParticleTemplate(const osgParticle::Particle & p)
	static int _bind_setDefaultParticleTemplate(lua_State *L) {
		if (!_lg_typecheck_setDefaultParticleTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setDefaultParticleTemplate(const osgParticle::Particle & p) function, expected prototype:\nvoid osgParticle::ParticleEffect::setDefaultParticleTemplate(const osgParticle::Particle & p)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		const osgParticle::Particle* p_ptr=(Luna< osgParticle::Particle >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osgParticle::ParticleEffect::setDefaultParticleTemplate function");
		}
		const osgParticle::Particle & p=*p_ptr;

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setDefaultParticleTemplate(const osgParticle::Particle &)");
		}
		self->setDefaultParticleTemplate(p);

		return 0;
	}

	// const osgParticle::Particle & osgParticle::ParticleEffect::getDefaultParticleTemplate() const
	static int _bind_getDefaultParticleTemplate(lua_State *L) {
		if (!_lg_typecheck_getDefaultParticleTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Particle & osgParticle::ParticleEffect::getDefaultParticleTemplate() const function, expected prototype:\nconst osgParticle::Particle & osgParticle::ParticleEffect::getDefaultParticleTemplate() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Particle & osgParticle::ParticleEffect::getDefaultParticleTemplate() const");
		}
		const osgParticle::Particle* lret = &self->getDefaultParticleTemplate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleEffect::setPosition(const osg::Vec3f & position)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setPosition(const osg::Vec3f & position) function, expected prototype:\nvoid osgParticle::ParticleEffect::setPosition(const osg::Vec3f & position)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::ParticleEffect::setPosition function");
		}
		const osg::Vec3f & position=*position_ptr;

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setPosition(const osg::Vec3f &)");
		}
		self->setPosition(position);

		return 0;
	}

	// const osg::Vec3f & osgParticle::ParticleEffect::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::ParticleEffect::getPosition() const function, expected prototype:\nconst osg::Vec3f & osgParticle::ParticleEffect::getPosition() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::ParticleEffect::getPosition() const");
		}
		const osg::Vec3f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleEffect::setScale(float scale)
	static int _bind_setScale(lua_State *L) {
		if (!_lg_typecheck_setScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setScale(float scale) function, expected prototype:\nvoid osgParticle::ParticleEffect::setScale(float scale)\nClass arguments details:\n");
		}

		float scale=(float)lua_tonumber(L,2);

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setScale(float)");
		}
		self->setScale(scale);

		return 0;
	}

	// float osgParticle::ParticleEffect::getScale() const
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::ParticleEffect::getScale() const function, expected prototype:\nfloat osgParticle::ParticleEffect::getScale() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::ParticleEffect::getScale() const");
		}
		float lret = self->getScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleEffect::setIntensity(float intensity)
	static int _bind_setIntensity(lua_State *L) {
		if (!_lg_typecheck_setIntensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setIntensity(float intensity) function, expected prototype:\nvoid osgParticle::ParticleEffect::setIntensity(float intensity)\nClass arguments details:\n");
		}

		float intensity=(float)lua_tonumber(L,2);

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setIntensity(float)");
		}
		self->setIntensity(intensity);

		return 0;
	}

	// float osgParticle::ParticleEffect::getIntensity() const
	static int _bind_getIntensity(lua_State *L) {
		if (!_lg_typecheck_getIntensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::ParticleEffect::getIntensity() const function, expected prototype:\nfloat osgParticle::ParticleEffect::getIntensity() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::ParticleEffect::getIntensity() const");
		}
		float lret = self->getIntensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleEffect::setStartTime(double startTime)
	static int _bind_setStartTime(lua_State *L) {
		if (!_lg_typecheck_setStartTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setStartTime(double startTime) function, expected prototype:\nvoid osgParticle::ParticleEffect::setStartTime(double startTime)\nClass arguments details:\n");
		}

		double startTime=(double)lua_tonumber(L,2);

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setStartTime(double)");
		}
		self->setStartTime(startTime);

		return 0;
	}

	// double osgParticle::ParticleEffect::getStartTime() const
	static int _bind_getStartTime(lua_State *L) {
		if (!_lg_typecheck_getStartTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleEffect::getStartTime() const function, expected prototype:\ndouble osgParticle::ParticleEffect::getStartTime() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleEffect::getStartTime() const");
		}
		double lret = self->getStartTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleEffect::setEmitterDuration(double duration)
	static int _bind_setEmitterDuration(lua_State *L) {
		if (!_lg_typecheck_setEmitterDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setEmitterDuration(double duration) function, expected prototype:\nvoid osgParticle::ParticleEffect::setEmitterDuration(double duration)\nClass arguments details:\n");
		}

		double duration=(double)lua_tonumber(L,2);

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setEmitterDuration(double)");
		}
		self->setEmitterDuration(duration);

		return 0;
	}

	// double osgParticle::ParticleEffect::getEmitterDuration() const
	static int _bind_getEmitterDuration(lua_State *L) {
		if (!_lg_typecheck_getEmitterDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleEffect::getEmitterDuration() const function, expected prototype:\ndouble osgParticle::ParticleEffect::getEmitterDuration() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleEffect::getEmitterDuration() const");
		}
		double lret = self->getEmitterDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleEffect::setParticleDuration(double duration)
	static int _bind_setParticleDuration(lua_State *L) {
		if (!_lg_typecheck_setParticleDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setParticleDuration(double duration) function, expected prototype:\nvoid osgParticle::ParticleEffect::setParticleDuration(double duration)\nClass arguments details:\n");
		}

		double duration=(double)lua_tonumber(L,2);

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setParticleDuration(double)");
		}
		self->setParticleDuration(duration);

		return 0;
	}

	// double osgParticle::ParticleEffect::getParticleDuration() const
	static int _bind_getParticleDuration(lua_State *L) {
		if (!_lg_typecheck_getParticleDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleEffect::getParticleDuration() const function, expected prototype:\ndouble osgParticle::ParticleEffect::getParticleDuration() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleEffect::getParticleDuration() const");
		}
		double lret = self->getParticleDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleEffect::setWind(const osg::Vec3f & wind)
	static int _bind_setWind(lua_State *L) {
		if (!_lg_typecheck_setWind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setWind(const osg::Vec3f & wind) function, expected prototype:\nvoid osgParticle::ParticleEffect::setWind(const osg::Vec3f & wind)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* wind_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !wind_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wind in osgParticle::ParticleEffect::setWind function");
		}
		const osg::Vec3f & wind=*wind_ptr;

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setWind(const osg::Vec3f &)");
		}
		self->setWind(wind);

		return 0;
	}

	// const osg::Vec3f & osgParticle::ParticleEffect::getWind() const
	static int _bind_getWind(lua_State *L) {
		if (!_lg_typecheck_getWind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::ParticleEffect::getWind() const function, expected prototype:\nconst osg::Vec3f & osgParticle::ParticleEffect::getWind() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::ParticleEffect::getWind() const");
		}
		const osg::Vec3f* lret = &self->getWind();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ParticleEffect::areAllParticlesDead() const
	static int _bind_areAllParticlesDead(lua_State *L) {
		if (!_lg_typecheck_areAllParticlesDead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::areAllParticlesDead() const function, expected prototype:\nbool osgParticle::ParticleEffect::areAllParticlesDead() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::areAllParticlesDead() const");
		}
		bool lret = self->areAllParticlesDead();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter()
	static int _bind_getEmitter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() function, expected prototype:\nosgParticle::Emitter * osgParticle::ParticleEffect::getEmitter()\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter()");
		}
		osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() const
	static int _bind_getEmitter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() const function, expected prototype:\nconst osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() const");
		}
		const osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::getEmitter
	static int _bind_getEmitter(lua_State *L) {
		if (_lg_typecheck_getEmitter_overload_1(L)) return _bind_getEmitter_overload_1(L);
		if (_lg_typecheck_getEmitter_overload_2(L)) return _bind_getEmitter_overload_2(L);

		luaL_error(L, "error in function getEmitter, cannot match any of the overloads for function getEmitter:\n  getEmitter()\n  getEmitter()\n");
		return 0;
	}

	// osgParticle::Program * osgParticle::ParticleEffect::getProgram()
	static int _bind_getProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Program * osgParticle::ParticleEffect::getProgram() function, expected prototype:\nosgParticle::Program * osgParticle::ParticleEffect::getProgram()\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Program * osgParticle::ParticleEffect::getProgram()");
		}
		osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Program * osgParticle::ParticleEffect::getProgram() const
	static int _bind_getProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Program * osgParticle::ParticleEffect::getProgram() const function, expected prototype:\nconst osgParticle::Program * osgParticle::ParticleEffect::getProgram() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Program * osgParticle::ParticleEffect::getProgram() const");
		}
		const osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::getProgram
	static int _bind_getProgram(lua_State *L) {
		if (_lg_typecheck_getProgram_overload_1(L)) return _bind_getProgram_overload_1(L);
		if (_lg_typecheck_getProgram_overload_2(L)) return _bind_getProgram_overload_2(L);

		luaL_error(L, "error in function getProgram, cannot match any of the overloads for function getProgram:\n  getProgram()\n  getProgram()\n");
		return 0;
	}

	// void osgParticle::ParticleEffect::setParticleSystem(osgParticle::ParticleSystem * ps)
	static int _bind_setParticleSystem(lua_State *L) {
		if (!_lg_typecheck_setParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setParticleSystem(osgParticle::ParticleSystem * ps) function, expected prototype:\nvoid osgParticle::ParticleEffect::setParticleSystem(osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::ParticleSystem* ps=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setParticleSystem(osgParticle::ParticleSystem *)");
		}
		self->setParticleSystem(ps);

		return 0;
	}

	// osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem()
	static int _bind_getParticleSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem() function, expected prototype:\nosgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem()\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem()");
		}
		osgParticle::ParticleSystem * lret = self->getParticleSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem() const
	static int _bind_getParticleSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem() const function, expected prototype:\nconst osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem() const\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem() const");
		}
		const osgParticle::ParticleSystem * lret = self->getParticleSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::getParticleSystem
	static int _bind_getParticleSystem(lua_State *L) {
		if (_lg_typecheck_getParticleSystem_overload_1(L)) return _bind_getParticleSystem_overload_1(L);
		if (_lg_typecheck_getParticleSystem_overload_2(L)) return _bind_getParticleSystem_overload_2(L);

		luaL_error(L, "error in function getParticleSystem, cannot match any of the overloads for function getParticleSystem:\n  getParticleSystem()\n  getParticleSystem()\n");
		return 0;
	}

	// void osgParticle::ParticleEffect::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setDefaults() function, expected prototype:\nvoid osgParticle::ParticleEffect::setDefaults()\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setDefaults()");
		}
		self->setDefaults();

		return 0;
	}

	// void osgParticle::ParticleEffect::setUpEmitterAndProgram()
	static int _bind_setUpEmitterAndProgram(lua_State *L) {
		if (!_lg_typecheck_setUpEmitterAndProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setUpEmitterAndProgram() function, expected prototype:\nvoid osgParticle::ParticleEffect::setUpEmitterAndProgram()\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setUpEmitterAndProgram()");
		}
		self->setUpEmitterAndProgram();

		return 0;
	}

	// void osgParticle::ParticleEffect::buildEffect()
	static int _bind_buildEffect(lua_State *L) {
		if (!_lg_typecheck_buildEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::buildEffect() function, expected prototype:\nvoid osgParticle::ParticleEffect::buildEffect()\nClass arguments details:\n");
		}


		osgParticle::ParticleEffect* self=dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::buildEffect()");
		}
		self->buildEffect();

		return 0;
	}


	// Operator binds:

};

osgParticle::ParticleEffect* LunaTraits< osgParticle::ParticleEffect >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter()
	// const osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() const
	// osgParticle::Program * osgParticle::ParticleEffect::getProgram()
	// const osgParticle::Program * osgParticle::ParticleEffect::getProgram() const
	// void osgParticle::ParticleEffect::setUpEmitterAndProgram()

	// Abstract operators:
}

void LunaTraits< osgParticle::ParticleEffect >::_bind_dtor(osgParticle::ParticleEffect* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ParticleEffect >::className[] = "ParticleEffect";
const char LunaTraits< osgParticle::ParticleEffect >::fullName[] = "osgParticle::ParticleEffect";
const char LunaTraits< osgParticle::ParticleEffect >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ParticleEffect >::parents[] = {"osg.Group", 0};
const int LunaTraits< osgParticle::ParticleEffect >::hash = 66238168;
const int LunaTraits< osgParticle::ParticleEffect >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ParticleEffect >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_ParticleEffect::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ParticleEffect::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_ParticleEffect::_bind_isSameKindAs},
	{"accept", &luna_wrapper_osgParticle_ParticleEffect::_bind_accept},
	{"setAutomaticSetup", &luna_wrapper_osgParticle_ParticleEffect::_bind_setAutomaticSetup},
	{"getAutomaticSetup", &luna_wrapper_osgParticle_ParticleEffect::_bind_getAutomaticSetup},
	{"setUseLocalParticleSystem", &luna_wrapper_osgParticle_ParticleEffect::_bind_setUseLocalParticleSystem},
	{"getUseLocalParticleSystem", &luna_wrapper_osgParticle_ParticleEffect::_bind_getUseLocalParticleSystem},
	{"setTextureFileName", &luna_wrapper_osgParticle_ParticleEffect::_bind_setTextureFileName},
	{"getTextureFileName", &luna_wrapper_osgParticle_ParticleEffect::_bind_getTextureFileName},
	{"setDefaultParticleTemplate", &luna_wrapper_osgParticle_ParticleEffect::_bind_setDefaultParticleTemplate},
	{"getDefaultParticleTemplate", &luna_wrapper_osgParticle_ParticleEffect::_bind_getDefaultParticleTemplate},
	{"setPosition", &luna_wrapper_osgParticle_ParticleEffect::_bind_setPosition},
	{"getPosition", &luna_wrapper_osgParticle_ParticleEffect::_bind_getPosition},
	{"setScale", &luna_wrapper_osgParticle_ParticleEffect::_bind_setScale},
	{"getScale", &luna_wrapper_osgParticle_ParticleEffect::_bind_getScale},
	{"setIntensity", &luna_wrapper_osgParticle_ParticleEffect::_bind_setIntensity},
	{"getIntensity", &luna_wrapper_osgParticle_ParticleEffect::_bind_getIntensity},
	{"setStartTime", &luna_wrapper_osgParticle_ParticleEffect::_bind_setStartTime},
	{"getStartTime", &luna_wrapper_osgParticle_ParticleEffect::_bind_getStartTime},
	{"setEmitterDuration", &luna_wrapper_osgParticle_ParticleEffect::_bind_setEmitterDuration},
	{"getEmitterDuration", &luna_wrapper_osgParticle_ParticleEffect::_bind_getEmitterDuration},
	{"setParticleDuration", &luna_wrapper_osgParticle_ParticleEffect::_bind_setParticleDuration},
	{"getParticleDuration", &luna_wrapper_osgParticle_ParticleEffect::_bind_getParticleDuration},
	{"setWind", &luna_wrapper_osgParticle_ParticleEffect::_bind_setWind},
	{"getWind", &luna_wrapper_osgParticle_ParticleEffect::_bind_getWind},
	{"areAllParticlesDead", &luna_wrapper_osgParticle_ParticleEffect::_bind_areAllParticlesDead},
	{"getEmitter", &luna_wrapper_osgParticle_ParticleEffect::_bind_getEmitter},
	{"getProgram", &luna_wrapper_osgParticle_ParticleEffect::_bind_getProgram},
	{"setParticleSystem", &luna_wrapper_osgParticle_ParticleEffect::_bind_setParticleSystem},
	{"getParticleSystem", &luna_wrapper_osgParticle_ParticleEffect::_bind_getParticleSystem},
	{"setDefaults", &luna_wrapper_osgParticle_ParticleEffect::_bind_setDefaults},
	{"setUpEmitterAndProgram", &luna_wrapper_osgParticle_ParticleEffect::_bind_setUpEmitterAndProgram},
	{"buildEffect", &luna_wrapper_osgParticle_ParticleEffect::_bind_buildEffect},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ParticleEffect >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ParticleEffect::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ParticleEffect >::enumValues[] = {
	{0,0}
};


