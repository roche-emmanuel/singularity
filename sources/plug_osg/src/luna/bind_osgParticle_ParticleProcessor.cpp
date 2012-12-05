#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_ParticleProcessor.h>

class luna_wrapper_osgParticle_ParticleProcessor {
public:
	typedef Luna< osgParticle::ParticleProcessor > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::ParticleProcessor* ptr= dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ParticleProcessor >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_setParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEndless(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEndless(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isEndless(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLifeTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLifeTime(lua_State *L) {
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

	inline static bool _lg_typecheck_setCurrentTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setResetTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getResetTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isAlive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalToWorldMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldToLocalMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreviousLocalToWorldMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreviousWorldToLocalMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_transformLocalToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotateLocalToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transformWorldToLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotateWorldToLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::ParticleProcessor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleProcessor::libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleProcessor::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleProcessor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleProcessor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleProcessor::className() const function, expected prototype:\nconst char * osgParticle::ParticleProcessor::className() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleProcessor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::ParticleProcessor::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleProcessor::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleProcessor::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleProcessor::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleProcessor::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// osgParticle::ParticleProcessor::ReferenceFrame osgParticle::ParticleProcessor::getReferenceFrame() const
	static int _bind_getReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleProcessor::ReferenceFrame osgParticle::ParticleProcessor::getReferenceFrame() const function, expected prototype:\nosgParticle::ParticleProcessor::ReferenceFrame osgParticle::ParticleProcessor::getReferenceFrame() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::ParticleProcessor::ReferenceFrame osgParticle::ParticleProcessor::getReferenceFrame() const");
		}
		osgParticle::ParticleProcessor::ReferenceFrame lret = self->getReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setReferenceFrame(osgParticle::ParticleProcessor::ReferenceFrame rf)
	static int _bind_setReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setReferenceFrame(osgParticle::ParticleProcessor::ReferenceFrame rf) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setReferenceFrame(osgParticle::ParticleProcessor::ReferenceFrame rf)\nClass arguments details:\n");
		}

		osgParticle::ParticleProcessor::ReferenceFrame rf=(osgParticle::ParticleProcessor::ReferenceFrame)lua_tointeger(L,2);

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setReferenceFrame(osgParticle::ParticleProcessor::ReferenceFrame)");
		}
		self->setReferenceFrame(rf);

		return 0;
	}

	// bool osgParticle::ParticleProcessor::getEnabled() const
	static int _bind_getEnabled(lua_State *L) {
		if (!_lg_typecheck_getEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::getEnabled() const function, expected prototype:\nbool osgParticle::ParticleProcessor::getEnabled() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::getEnabled() const");
		}
		bool lret = self->getEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleProcessor::isEnabled() const
	static int _bind_isEnabled(lua_State *L) {
		if (!_lg_typecheck_isEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::isEnabled() const function, expected prototype:\nbool osgParticle::ParticleProcessor::isEnabled() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::isEnabled() const");
		}
		bool lret = self->isEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setEnabled(bool v)
	static int _bind_setEnabled(lua_State *L) {
		if (!_lg_typecheck_setEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setEnabled(bool v) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setEnabled(bool v)\nClass arguments details:\n");
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setEnabled(bool)");
		}
		self->setEnabled(v);

		return 0;
	}

	// osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem()
	static int _bind_getParticleSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem() function, expected prototype:\nosgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem()\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem()");
		}
		osgParticle::ParticleSystem * lret = self->getParticleSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem() const
	static int _bind_getParticleSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem() const function, expected prototype:\nconst osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem() const");
		}
		const osgParticle::ParticleSystem * lret = self->getParticleSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleProcessor::getParticleSystem
	static int _bind_getParticleSystem(lua_State *L) {
		if (_lg_typecheck_getParticleSystem_overload_1(L)) return _bind_getParticleSystem_overload_1(L);
		if (_lg_typecheck_getParticleSystem_overload_2(L)) return _bind_getParticleSystem_overload_2(L);

		luaL_error(L, "error in function getParticleSystem, cannot match any of the overloads for function getParticleSystem:\n  getParticleSystem()\n  getParticleSystem()\n");
		return 0;
	}

	// void osgParticle::ParticleProcessor::setParticleSystem(osgParticle::ParticleSystem * ps)
	static int _bind_setParticleSystem(lua_State *L) {
		if (!_lg_typecheck_setParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setParticleSystem(osgParticle::ParticleSystem * ps) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setParticleSystem(osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::ParticleSystem* ps=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setParticleSystem(osgParticle::ParticleSystem *)");
		}
		self->setParticleSystem(ps);

		return 0;
	}

	// void osgParticle::ParticleProcessor::setEndless(bool type)
	static int _bind_setEndless(lua_State *L) {
		if (!_lg_typecheck_setEndless(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setEndless(bool type) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setEndless(bool type)\nClass arguments details:\n");
		}

		bool type=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setEndless(bool)");
		}
		self->setEndless(type);

		return 0;
	}

	// bool osgParticle::ParticleProcessor::getEndless() const
	static int _bind_getEndless(lua_State *L) {
		if (!_lg_typecheck_getEndless(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::getEndless() const function, expected prototype:\nbool osgParticle::ParticleProcessor::getEndless() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::getEndless() const");
		}
		bool lret = self->getEndless();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleProcessor::isEndless() const
	static int _bind_isEndless(lua_State *L) {
		if (!_lg_typecheck_isEndless(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::isEndless() const function, expected prototype:\nbool osgParticle::ParticleProcessor::isEndless() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::isEndless() const");
		}
		bool lret = self->isEndless();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setLifeTime(double t)
	static int _bind_setLifeTime(lua_State *L) {
		if (!_lg_typecheck_setLifeTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setLifeTime(double t) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setLifeTime(double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setLifeTime(double)");
		}
		self->setLifeTime(t);

		return 0;
	}

	// double osgParticle::ParticleProcessor::getLifeTime() const
	static int _bind_getLifeTime(lua_State *L) {
		if (!_lg_typecheck_getLifeTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleProcessor::getLifeTime() const function, expected prototype:\ndouble osgParticle::ParticleProcessor::getLifeTime() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleProcessor::getLifeTime() const");
		}
		double lret = self->getLifeTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setStartTime(double t)
	static int _bind_setStartTime(lua_State *L) {
		if (!_lg_typecheck_setStartTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setStartTime(double t) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setStartTime(double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setStartTime(double)");
		}
		self->setStartTime(t);

		return 0;
	}

	// double osgParticle::ParticleProcessor::getStartTime() const
	static int _bind_getStartTime(lua_State *L) {
		if (!_lg_typecheck_getStartTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleProcessor::getStartTime() const function, expected prototype:\ndouble osgParticle::ParticleProcessor::getStartTime() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleProcessor::getStartTime() const");
		}
		double lret = self->getStartTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setCurrentTime(double t)
	static int _bind_setCurrentTime(lua_State *L) {
		if (!_lg_typecheck_setCurrentTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setCurrentTime(double t) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setCurrentTime(double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setCurrentTime(double)");
		}
		self->setCurrentTime(t);

		return 0;
	}

	// double osgParticle::ParticleProcessor::getCurrentTime() const
	static int _bind_getCurrentTime(lua_State *L) {
		if (!_lg_typecheck_getCurrentTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleProcessor::getCurrentTime() const function, expected prototype:\ndouble osgParticle::ParticleProcessor::getCurrentTime() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleProcessor::getCurrentTime() const");
		}
		double lret = self->getCurrentTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setResetTime(double t)
	static int _bind_setResetTime(lua_State *L) {
		if (!_lg_typecheck_setResetTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setResetTime(double t) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setResetTime(double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setResetTime(double)");
		}
		self->setResetTime(t);

		return 0;
	}

	// double osgParticle::ParticleProcessor::getResetTime() const
	static int _bind_getResetTime(lua_State *L) {
		if (!_lg_typecheck_getResetTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleProcessor::getResetTime() const function, expected prototype:\ndouble osgParticle::ParticleProcessor::getResetTime() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleProcessor::getResetTime() const");
		}
		double lret = self->getResetTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgParticle::ParticleProcessor::isAlive() const
	static int _bind_isAlive(lua_State *L) {
		if (!_lg_typecheck_isAlive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::isAlive() const function, expected prototype:\nbool osgParticle::ParticleProcessor::isAlive() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::isAlive() const");
		}
		bool lret = self->isAlive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleProcessor::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::ParticleProcessor::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ParticleProcessor::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::traverse(osg::NodeVisitor &)");
		}
		self->traverse(_arg1);

		return 0;
	}

	// const osg::Matrixd & osgParticle::ParticleProcessor::getLocalToWorldMatrix()
	static int _bind_getLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_getLocalToWorldMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osgParticle::ParticleProcessor::getLocalToWorldMatrix() function, expected prototype:\nconst osg::Matrixd & osgParticle::ParticleProcessor::getLocalToWorldMatrix()\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osgParticle::ParticleProcessor::getLocalToWorldMatrix()");
		}
		const osg::Matrixd* lret = &self->getLocalToWorldMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osgParticle::ParticleProcessor::getWorldToLocalMatrix()
	static int _bind_getWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_getWorldToLocalMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osgParticle::ParticleProcessor::getWorldToLocalMatrix() function, expected prototype:\nconst osg::Matrixd & osgParticle::ParticleProcessor::getWorldToLocalMatrix()\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osgParticle::ParticleProcessor::getWorldToLocalMatrix()");
		}
		const osg::Matrixd* lret = &self->getWorldToLocalMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousLocalToWorldMatrix()
	static int _bind_getPreviousLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_getPreviousLocalToWorldMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousLocalToWorldMatrix() function, expected prototype:\nconst osg::Matrixd & osgParticle::ParticleProcessor::getPreviousLocalToWorldMatrix()\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousLocalToWorldMatrix()");
		}
		const osg::Matrixd* lret = &self->getPreviousLocalToWorldMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousWorldToLocalMatrix()
	static int _bind_getPreviousWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_getPreviousWorldToLocalMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousWorldToLocalMatrix() function, expected prototype:\nconst osg::Matrixd & osgParticle::ParticleProcessor::getPreviousWorldToLocalMatrix()\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousWorldToLocalMatrix()");
		}
		const osg::Matrixd* lret = &self->getPreviousWorldToLocalMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osgParticle::ParticleProcessor::transformLocalToWorld(const osg::Vec3f & P)
	static int _bind_transformLocalToWorld(lua_State *L) {
		if (!_lg_typecheck_transformLocalToWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::ParticleProcessor::transformLocalToWorld(const osg::Vec3f & P) function, expected prototype:\nosg::Vec3f osgParticle::ParticleProcessor::transformLocalToWorld(const osg::Vec3f & P)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* P_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !P_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg P in osgParticle::ParticleProcessor::transformLocalToWorld function");
		}
		const osg::Vec3f & P=*P_ptr;

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::ParticleProcessor::transformLocalToWorld(const osg::Vec3f &)");
		}
		osg::Vec3f stack_lret = self->transformLocalToWorld(P);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgParticle::ParticleProcessor::rotateLocalToWorld(const osg::Vec3f & P)
	static int _bind_rotateLocalToWorld(lua_State *L) {
		if (!_lg_typecheck_rotateLocalToWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::ParticleProcessor::rotateLocalToWorld(const osg::Vec3f & P) function, expected prototype:\nosg::Vec3f osgParticle::ParticleProcessor::rotateLocalToWorld(const osg::Vec3f & P)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* P_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !P_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg P in osgParticle::ParticleProcessor::rotateLocalToWorld function");
		}
		const osg::Vec3f & P=*P_ptr;

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::ParticleProcessor::rotateLocalToWorld(const osg::Vec3f &)");
		}
		osg::Vec3f stack_lret = self->rotateLocalToWorld(P);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgParticle::ParticleProcessor::transformWorldToLocal(const osg::Vec3f & P)
	static int _bind_transformWorldToLocal(lua_State *L) {
		if (!_lg_typecheck_transformWorldToLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::ParticleProcessor::transformWorldToLocal(const osg::Vec3f & P) function, expected prototype:\nosg::Vec3f osgParticle::ParticleProcessor::transformWorldToLocal(const osg::Vec3f & P)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* P_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !P_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg P in osgParticle::ParticleProcessor::transformWorldToLocal function");
		}
		const osg::Vec3f & P=*P_ptr;

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::ParticleProcessor::transformWorldToLocal(const osg::Vec3f &)");
		}
		osg::Vec3f stack_lret = self->transformWorldToLocal(P);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgParticle::ParticleProcessor::rotateWorldToLocal(const osg::Vec3f & P)
	static int _bind_rotateWorldToLocal(lua_State *L) {
		if (!_lg_typecheck_rotateWorldToLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::ParticleProcessor::rotateWorldToLocal(const osg::Vec3f & P) function, expected prototype:\nosg::Vec3f osgParticle::ParticleProcessor::rotateWorldToLocal(const osg::Vec3f & P)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* P_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !P_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg P in osgParticle::ParticleProcessor::rotateWorldToLocal function");
		}
		const osg::Vec3f & P=*P_ptr;

		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::ParticleProcessor::rotateWorldToLocal(const osg::Vec3f &)");
		}
		osg::Vec3f stack_lret = self->rotateWorldToLocal(P);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::BoundingSphered osgParticle::ParticleProcessor::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::ParticleProcessor::computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::ParticleProcessor::computeBound() const\nClass arguments details:\n");
		}


		osgParticle::ParticleProcessor* self=dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::ParticleProcessor::computeBound() const");
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::ParticleProcessor* LunaTraits< osgParticle::ParticleProcessor >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgParticle::ParticleProcessor::process(double dt)
}

void LunaTraits< osgParticle::ParticleProcessor >::_bind_dtor(osgParticle::ParticleProcessor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ParticleProcessor >::className[] = "ParticleProcessor";
const char LunaTraits< osgParticle::ParticleProcessor >::fullName[] = "osgParticle::ParticleProcessor";
const char LunaTraits< osgParticle::ParticleProcessor >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ParticleProcessor >::parents[] = {"osg.Node", 0};
const int LunaTraits< osgParticle::ParticleProcessor >::hash = 83064844;
const int LunaTraits< osgParticle::ParticleProcessor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ParticleProcessor >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_ParticleProcessor::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ParticleProcessor::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_ParticleProcessor::_bind_isSameKindAs},
	{"accept", &luna_wrapper_osgParticle_ParticleProcessor::_bind_accept},
	{"getReferenceFrame", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getReferenceFrame},
	{"setReferenceFrame", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setReferenceFrame},
	{"getEnabled", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getEnabled},
	{"isEnabled", &luna_wrapper_osgParticle_ParticleProcessor::_bind_isEnabled},
	{"setEnabled", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setEnabled},
	{"getParticleSystem", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getParticleSystem},
	{"setParticleSystem", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setParticleSystem},
	{"setEndless", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setEndless},
	{"getEndless", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getEndless},
	{"isEndless", &luna_wrapper_osgParticle_ParticleProcessor::_bind_isEndless},
	{"setLifeTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setLifeTime},
	{"getLifeTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getLifeTime},
	{"setStartTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setStartTime},
	{"getStartTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getStartTime},
	{"setCurrentTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setCurrentTime},
	{"getCurrentTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getCurrentTime},
	{"setResetTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setResetTime},
	{"getResetTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getResetTime},
	{"isAlive", &luna_wrapper_osgParticle_ParticleProcessor::_bind_isAlive},
	{"traverse", &luna_wrapper_osgParticle_ParticleProcessor::_bind_traverse},
	{"getLocalToWorldMatrix", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getLocalToWorldMatrix},
	{"getWorldToLocalMatrix", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getWorldToLocalMatrix},
	{"getPreviousLocalToWorldMatrix", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getPreviousLocalToWorldMatrix},
	{"getPreviousWorldToLocalMatrix", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getPreviousWorldToLocalMatrix},
	{"transformLocalToWorld", &luna_wrapper_osgParticle_ParticleProcessor::_bind_transformLocalToWorld},
	{"rotateLocalToWorld", &luna_wrapper_osgParticle_ParticleProcessor::_bind_rotateLocalToWorld},
	{"transformWorldToLocal", &luna_wrapper_osgParticle_ParticleProcessor::_bind_transformWorldToLocal},
	{"rotateWorldToLocal", &luna_wrapper_osgParticle_ParticleProcessor::_bind_rotateWorldToLocal},
	{"computeBound", &luna_wrapper_osgParticle_ParticleProcessor::_bind_computeBound},
	{"__eq", &luna_wrapper_osgParticle_ParticleProcessor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ParticleProcessor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ParticleProcessor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ParticleProcessor >::enumValues[] = {
	{"RELATIVE_RF", osgParticle::ParticleProcessor::RELATIVE_RF},
	{"ABSOLUTE_RF", osgParticle::ParticleProcessor::ABSOLUTE_RF},
	{0,0}
};


