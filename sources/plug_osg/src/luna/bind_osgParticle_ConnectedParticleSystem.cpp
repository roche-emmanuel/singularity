#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_ConnectedParticleSystem.h>

class luna_wrapper_osgParticle_ConnectedParticleSystem {
public:
	typedef Luna< osgParticle::ConnectedParticleSystem > luna_t;

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
		osgParticle::ConnectedParticleSystem* ptr= dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ConnectedParticleSystem >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reuseParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStartParticle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStartParticle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxNumberOfParticlesToSkip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxNumberOfParticlesToSkip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ConnectedParticleSystem::ConnectedParticleSystem()
	static osgParticle::ConnectedParticleSystem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem() function, expected prototype:\nosgParticle::ConnectedParticleSystem::ConnectedParticleSystem()\nClass arguments details:\n");
		}


		return new osgParticle::ConnectedParticleSystem();
	}

	// osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ConnectedParticleSystem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ConnectedParticleSystem::ConnectedParticleSystem(const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ConnectedParticleSystem* copy_ptr=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem function");
		}
		const osgParticle::ConnectedParticleSystem & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ConnectedParticleSystem(copy, copyop);
	}

	// osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data)
	static osgParticle::ConnectedParticleSystem* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data) function, expected prototype:\nosgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgParticle_ConnectedParticleSystem(L,NULL);
	}

	// osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data, const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ConnectedParticleSystem* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data, const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data, const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ConnectedParticleSystem* copy_ptr=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem function");
		}
		const osgParticle::ConnectedParticleSystem & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_ConnectedParticleSystem(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::ConnectedParticleSystem::ConnectedParticleSystem
	static osgParticle::ConnectedParticleSystem* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ConnectedParticleSystem, cannot match any of the overloads for function ConnectedParticleSystem:\n  ConnectedParticleSystem()\n  ConnectedParticleSystem(const osgParticle::ConnectedParticleSystem &, const osg::CopyOp &)\n  ConnectedParticleSystem(lua_Table *)\n  ConnectedParticleSystem(lua_Table *, const osgParticle::ConnectedParticleSystem &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ConnectedParticleSystem::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConnectedParticleSystem::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ConnectedParticleSystem::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConnectedParticleSystem::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ConnectedParticleSystem::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConnectedParticleSystem::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::ConnectedParticleSystem::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ConnectedParticleSystem::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConnectedParticleSystem::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ConnectedParticleSystem::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ConnectedParticleSystem::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ConnectedParticleSystem::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ConnectedParticleSystem::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ConnectedParticleSystem::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConnectedParticleSystem::libraryName() const function, expected prototype:\nconst char * osgParticle::ConnectedParticleSystem::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConnectedParticleSystem::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ConnectedParticleSystem::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConnectedParticleSystem::className() const function, expected prototype:\nconst char * osgParticle::ConnectedParticleSystem::className() const\nClass arguments details:\n");
		}


		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConnectedParticleSystem::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgParticle::Particle * osgParticle::ConnectedParticleSystem::createParticle(const osgParticle::Particle * ptemplate)
	static int _bind_createParticle(lua_State *L) {
		if (!_lg_typecheck_createParticle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Particle * osgParticle::ConnectedParticleSystem::createParticle(const osgParticle::Particle * ptemplate) function, expected prototype:\nosgParticle::Particle * osgParticle::ConnectedParticleSystem::createParticle(const osgParticle::Particle * ptemplate)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		const osgParticle::Particle* ptemplate=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Particle * osgParticle::ConnectedParticleSystem::createParticle(const osgParticle::Particle *)");
		}
		osgParticle::Particle * lret = self->createParticle(ptemplate);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ConnectedParticleSystem::reuseParticle(int i)
	static int _bind_reuseParticle(lua_State *L) {
		if (!_lg_typecheck_reuseParticle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::reuseParticle(int i) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::reuseParticle(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::reuseParticle(int)");
		}
		self->reuseParticle(i);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::ConnectedParticleSystem::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::drawImplementation(osg::RenderInfo &) const");
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// const osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle() const
	static int _bind_getStartParticle_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStartParticle_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle() const function, expected prototype:\nconst osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle() const\nClass arguments details:\n");
		}


		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle() const");
		}
		const osgParticle::Particle * lret = self->getStartParticle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle()
	static int _bind_getStartParticle_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStartParticle_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle() function, expected prototype:\nosgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle()\nClass arguments details:\n");
		}


		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle()");
		}
		osgParticle::Particle * lret = self->getStartParticle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ConnectedParticleSystem::getStartParticle
	static int _bind_getStartParticle(lua_State *L) {
		if (_lg_typecheck_getStartParticle_overload_1(L)) return _bind_getStartParticle_overload_1(L);
		if (_lg_typecheck_getStartParticle_overload_2(L)) return _bind_getStartParticle_overload_2(L);

		luaL_error(L, "error in function getStartParticle, cannot match any of the overloads for function getStartParticle:\n  getStartParticle()\n  getStartParticle()\n");
		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::setMaxNumberOfParticlesToSkip(unsigned int maxNumberofParticlesToSkip)
	static int _bind_setMaxNumberOfParticlesToSkip(lua_State *L) {
		if (!_lg_typecheck_setMaxNumberOfParticlesToSkip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::setMaxNumberOfParticlesToSkip(unsigned int maxNumberofParticlesToSkip) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::setMaxNumberOfParticlesToSkip(unsigned int maxNumberofParticlesToSkip)\nClass arguments details:\n");
		}

		unsigned int maxNumberofParticlesToSkip=(unsigned int)lua_tointeger(L,2);

		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::setMaxNumberOfParticlesToSkip(unsigned int)");
		}
		self->setMaxNumberOfParticlesToSkip(maxNumberofParticlesToSkip);

		return 0;
	}

	// unsigned int osgParticle::ConnectedParticleSystem::getMaxNumberOfParticlesToSkip()
	static int _bind_getMaxNumberOfParticlesToSkip(lua_State *L) {
		if (!_lg_typecheck_getMaxNumberOfParticlesToSkip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::ConnectedParticleSystem::getMaxNumberOfParticlesToSkip() function, expected prototype:\nunsigned int osgParticle::ConnectedParticleSystem::getMaxNumberOfParticlesToSkip()\nClass arguments details:\n");
		}


		osgParticle::ConnectedParticleSystem* self=dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::ConnectedParticleSystem::getMaxNumberOfParticlesToSkip()");
		}
		unsigned int lret = self->getMaxNumberOfParticlesToSkip();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgParticle::ConnectedParticleSystem* LunaTraits< osgParticle::ConnectedParticleSystem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_ctor(L);
}

void LunaTraits< osgParticle::ConnectedParticleSystem >::_bind_dtor(osgParticle::ConnectedParticleSystem* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ConnectedParticleSystem >::className[] = "ConnectedParticleSystem";
const char LunaTraits< osgParticle::ConnectedParticleSystem >::fullName[] = "osgParticle::ConnectedParticleSystem";
const char LunaTraits< osgParticle::ConnectedParticleSystem >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ConnectedParticleSystem >::parents[] = {"osgParticle.ParticleSystem", 0};
const int LunaTraits< osgParticle::ConnectedParticleSystem >::hash = 7321592;
const int LunaTraits< osgParticle::ConnectedParticleSystem >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ConnectedParticleSystem >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_className},
	{"createParticle", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_createParticle},
	{"reuseParticle", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_reuseParticle},
	{"drawImplementation", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_drawImplementation},
	{"getStartParticle", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_getStartParticle},
	{"setMaxNumberOfParticlesToSkip", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_setMaxNumberOfParticlesToSkip},
	{"getMaxNumberOfParticlesToSkip", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_getMaxNumberOfParticlesToSkip},
	{"__eq", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ConnectedParticleSystem >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ConnectedParticleSystem::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ConnectedParticleSystem >::enumValues[] = {
	{0,0}
};


