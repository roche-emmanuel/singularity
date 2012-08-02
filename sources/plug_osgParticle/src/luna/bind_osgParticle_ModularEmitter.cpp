#include <plug_common.h>

class luna_wrapper_osgParticle_ModularEmitter {
public:
	typedef Luna< osgParticle::ModularEmitter > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::ModularEmitter* ptr= dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ModularEmitter >::push(L,ptr,false);
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
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCounter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCounter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCounter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumParticlesToCreateMovementCompensationRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumParticlesToCreateMovementCompensationRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPlacer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlacer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPlacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShooter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShooter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShooter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ModularEmitter::ModularEmitter()
	static osgParticle::ModularEmitter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ModularEmitter::ModularEmitter() function, expected prototype:\nosgParticle::ModularEmitter::ModularEmitter()\nClass arguments details:\n");
		}


		return new osgParticle::ModularEmitter();
	}

	// osgParticle::ModularEmitter::ModularEmitter(const osgParticle::ModularEmitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ModularEmitter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ModularEmitter::ModularEmitter(const osgParticle::ModularEmitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ModularEmitter::ModularEmitter(const osgParticle::ModularEmitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ModularEmitter* copy_ptr=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ModularEmitter::ModularEmitter function");
		}
		const osgParticle::ModularEmitter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ModularEmitter::ModularEmitter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ModularEmitter(copy, copyop);
	}

	// Overload binder for osgParticle::ModularEmitter::ModularEmitter
	static osgParticle::ModularEmitter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ModularEmitter, cannot match any of the overloads for function ModularEmitter:\n  ModularEmitter()\n  ModularEmitter(const osgParticle::ModularEmitter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ModularEmitter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ModularEmitter::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ModularEmitter::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ModularEmitter::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ModularEmitter::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ModularEmitter::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::ModularEmitter::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ModularEmitter::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ModularEmitter::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ModularEmitter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ModularEmitter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ModularEmitter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ModularEmitter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ModularEmitter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ModularEmitter::className() const function, expected prototype:\nconst char * osgParticle::ModularEmitter::className() const\nClass arguments details:\n");
		}


		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ModularEmitter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ModularEmitter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ModularEmitter::libraryName() const function, expected prototype:\nconst char * osgParticle::ModularEmitter::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ModularEmitter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ModularEmitter::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ModularEmitter::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ModularEmitter::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// osgParticle::Counter * osgParticle::ModularEmitter::getCounter()
	static int _bind_getCounter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCounter_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Counter * osgParticle::ModularEmitter::getCounter() function, expected prototype:\nosgParticle::Counter * osgParticle::ModularEmitter::getCounter()\nClass arguments details:\n");
		}


		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Counter * osgParticle::ModularEmitter::getCounter()");
		}
		osgParticle::Counter * lret = self->getCounter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Counter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Counter * osgParticle::ModularEmitter::getCounter() const
	static int _bind_getCounter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCounter_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Counter * osgParticle::ModularEmitter::getCounter() const function, expected prototype:\nconst osgParticle::Counter * osgParticle::ModularEmitter::getCounter() const\nClass arguments details:\n");
		}


		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Counter * osgParticle::ModularEmitter::getCounter() const");
		}
		const osgParticle::Counter * lret = self->getCounter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Counter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::getCounter
	static int _bind_getCounter(lua_State *L) {
		if (_lg_typecheck_getCounter_overload_1(L)) return _bind_getCounter_overload_1(L);
		if (_lg_typecheck_getCounter_overload_2(L)) return _bind_getCounter_overload_2(L);

		luaL_error(L, "error in function getCounter, cannot match any of the overloads for function getCounter:\n  getCounter()\n  getCounter()\n");
		return 0;
	}

	// void osgParticle::ModularEmitter::setCounter(osgParticle::Counter * c)
	static int _bind_setCounter(lua_State *L) {
		if (!_lg_typecheck_setCounter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::setCounter(osgParticle::Counter * c) function, expected prototype:\nvoid osgParticle::ModularEmitter::setCounter(osgParticle::Counter * c)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Counter* c=dynamic_cast< osgParticle::Counter* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::setCounter(osgParticle::Counter *)");
		}
		self->setCounter(c);

		return 0;
	}

	// float osgParticle::ModularEmitter::getNumParticlesToCreateMovementCompensationRatio() const
	static int _bind_getNumParticlesToCreateMovementCompensationRatio(lua_State *L) {
		if (!_lg_typecheck_getNumParticlesToCreateMovementCompensationRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::ModularEmitter::getNumParticlesToCreateMovementCompensationRatio() const function, expected prototype:\nfloat osgParticle::ModularEmitter::getNumParticlesToCreateMovementCompensationRatio() const\nClass arguments details:\n");
		}


		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::ModularEmitter::getNumParticlesToCreateMovementCompensationRatio() const");
		}
		float lret = self->getNumParticlesToCreateMovementCompensationRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ModularEmitter::setNumParticlesToCreateMovementCompensationRatio(float r)
	static int _bind_setNumParticlesToCreateMovementCompensationRatio(lua_State *L) {
		if (!_lg_typecheck_setNumParticlesToCreateMovementCompensationRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::setNumParticlesToCreateMovementCompensationRatio(float r) function, expected prototype:\nvoid osgParticle::ModularEmitter::setNumParticlesToCreateMovementCompensationRatio(float r)\nClass arguments details:\n");
		}

		float r=(float)lua_tonumber(L,2);

		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::setNumParticlesToCreateMovementCompensationRatio(float)");
		}
		self->setNumParticlesToCreateMovementCompensationRatio(r);

		return 0;
	}

	// osgParticle::Placer * osgParticle::ModularEmitter::getPlacer()
	static int _bind_getPlacer_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPlacer_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Placer * osgParticle::ModularEmitter::getPlacer() function, expected prototype:\nosgParticle::Placer * osgParticle::ModularEmitter::getPlacer()\nClass arguments details:\n");
		}


		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Placer * osgParticle::ModularEmitter::getPlacer()");
		}
		osgParticle::Placer * lret = self->getPlacer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Placer >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Placer * osgParticle::ModularEmitter::getPlacer() const
	static int _bind_getPlacer_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPlacer_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Placer * osgParticle::ModularEmitter::getPlacer() const function, expected prototype:\nconst osgParticle::Placer * osgParticle::ModularEmitter::getPlacer() const\nClass arguments details:\n");
		}


		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Placer * osgParticle::ModularEmitter::getPlacer() const");
		}
		const osgParticle::Placer * lret = self->getPlacer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Placer >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::getPlacer
	static int _bind_getPlacer(lua_State *L) {
		if (_lg_typecheck_getPlacer_overload_1(L)) return _bind_getPlacer_overload_1(L);
		if (_lg_typecheck_getPlacer_overload_2(L)) return _bind_getPlacer_overload_2(L);

		luaL_error(L, "error in function getPlacer, cannot match any of the overloads for function getPlacer:\n  getPlacer()\n  getPlacer()\n");
		return 0;
	}

	// void osgParticle::ModularEmitter::setPlacer(osgParticle::Placer * p)
	static int _bind_setPlacer(lua_State *L) {
		if (!_lg_typecheck_setPlacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::setPlacer(osgParticle::Placer * p) function, expected prototype:\nvoid osgParticle::ModularEmitter::setPlacer(osgParticle::Placer * p)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Placer* p=dynamic_cast< osgParticle::Placer* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::setPlacer(osgParticle::Placer *)");
		}
		self->setPlacer(p);

		return 0;
	}

	// osgParticle::Shooter * osgParticle::ModularEmitter::getShooter()
	static int _bind_getShooter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShooter_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Shooter * osgParticle::ModularEmitter::getShooter() function, expected prototype:\nosgParticle::Shooter * osgParticle::ModularEmitter::getShooter()\nClass arguments details:\n");
		}


		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Shooter * osgParticle::ModularEmitter::getShooter()");
		}
		osgParticle::Shooter * lret = self->getShooter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Shooter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Shooter * osgParticle::ModularEmitter::getShooter() const
	static int _bind_getShooter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShooter_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Shooter * osgParticle::ModularEmitter::getShooter() const function, expected prototype:\nconst osgParticle::Shooter * osgParticle::ModularEmitter::getShooter() const\nClass arguments details:\n");
		}


		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Shooter * osgParticle::ModularEmitter::getShooter() const");
		}
		const osgParticle::Shooter * lret = self->getShooter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Shooter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::getShooter
	static int _bind_getShooter(lua_State *L) {
		if (_lg_typecheck_getShooter_overload_1(L)) return _bind_getShooter_overload_1(L);
		if (_lg_typecheck_getShooter_overload_2(L)) return _bind_getShooter_overload_2(L);

		luaL_error(L, "error in function getShooter, cannot match any of the overloads for function getShooter:\n  getShooter()\n  getShooter()\n");
		return 0;
	}

	// void osgParticle::ModularEmitter::setShooter(osgParticle::Shooter * s)
	static int _bind_setShooter(lua_State *L) {
		if (!_lg_typecheck_setShooter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::setShooter(osgParticle::Shooter * s) function, expected prototype:\nvoid osgParticle::ModularEmitter::setShooter(osgParticle::Shooter * s)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Shooter* s=dynamic_cast< osgParticle::Shooter* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ModularEmitter* self=dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::setShooter(osgParticle::Shooter *)");
		}
		self->setShooter(s);

		return 0;
	}


	// Operator binds:

};

osgParticle::ModularEmitter* LunaTraits< osgParticle::ModularEmitter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ModularEmitter::_bind_ctor(L);
}

void LunaTraits< osgParticle::ModularEmitter >::_bind_dtor(osgParticle::ModularEmitter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ModularEmitter >::className[] = "ModularEmitter";
const char LunaTraits< osgParticle::ModularEmitter >::fullName[] = "osgParticle::ModularEmitter";
const char LunaTraits< osgParticle::ModularEmitter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ModularEmitter >::parents[] = {"osgParticle.Emitter", 0};
const int LunaTraits< osgParticle::ModularEmitter >::hash = 79450830;
const int LunaTraits< osgParticle::ModularEmitter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ModularEmitter >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ModularEmitter::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ModularEmitter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ModularEmitter::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_ModularEmitter::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_ModularEmitter::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_ModularEmitter::_bind_accept},
	{"getCounter", &luna_wrapper_osgParticle_ModularEmitter::_bind_getCounter},
	{"setCounter", &luna_wrapper_osgParticle_ModularEmitter::_bind_setCounter},
	{"getNumParticlesToCreateMovementCompensationRatio", &luna_wrapper_osgParticle_ModularEmitter::_bind_getNumParticlesToCreateMovementCompensationRatio},
	{"setNumParticlesToCreateMovementCompensationRatio", &luna_wrapper_osgParticle_ModularEmitter::_bind_setNumParticlesToCreateMovementCompensationRatio},
	{"getPlacer", &luna_wrapper_osgParticle_ModularEmitter::_bind_getPlacer},
	{"setPlacer", &luna_wrapper_osgParticle_ModularEmitter::_bind_setPlacer},
	{"getShooter", &luna_wrapper_osgParticle_ModularEmitter::_bind_getShooter},
	{"setShooter", &luna_wrapper_osgParticle_ModularEmitter::_bind_setShooter},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ModularEmitter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ModularEmitter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ModularEmitter >::enumValues[] = {
	{0,0}
};


