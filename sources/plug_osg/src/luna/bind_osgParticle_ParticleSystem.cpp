#include <plug_common.h>

class luna_wrapper_osgParticle_ParticleSystem {
public:
	typedef Luna< osgParticle::ParticleSystem > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::ParticleSystem* ptr= dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ParticleSystem >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticleAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAlignVectorX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAlignVectorX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAlignVectorY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAlignVectorY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlignVectors(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParticleScaleReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleScaleReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefaultBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82744899) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseVertexArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseVertexArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseShaders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseShaders(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoublePassRendering(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDoublePassRendering(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrozen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFrozen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrozen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_numParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_numDeadParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_areAllParticlesDead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroyParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reuseParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLastFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeltaTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefaultParticleTemplate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefaultParticleTemplate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultParticleTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81629555) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFreezeOnCull(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFreezeOnCull(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultAttributes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultAttributesUsingShaders(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLevelOfDetail(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLevelOfDetail(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSortMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSortMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibilityDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVisibilityDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ParticleSystem::ParticleSystem()
	static osgParticle::ParticleSystem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::ParticleSystem() function, expected prototype:\nosgParticle::ParticleSystem::ParticleSystem()\nClass arguments details:\n");
		}


		return new osgParticle::ParticleSystem();
	}

	// osgParticle::ParticleSystem::ParticleSystem(const osgParticle::ParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ParticleSystem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::ParticleSystem(const osgParticle::ParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ParticleSystem::ParticleSystem(const osgParticle::ParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ParticleSystem* copy_ptr=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ParticleSystem::ParticleSystem function");
		}
		const osgParticle::ParticleSystem & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleSystem::ParticleSystem function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ParticleSystem(copy, copyop);
	}

	// Overload binder for osgParticle::ParticleSystem::ParticleSystem
	static osgParticle::ParticleSystem* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ParticleSystem, cannot match any of the overloads for function ParticleSystem:\n  ParticleSystem()\n  ParticleSystem(const osgParticle::ParticleSystem &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ParticleSystem::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystem::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ParticleSystem::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystem::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ParticleSystem::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystem::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::ParticleSystem::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ParticleSystem::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystem::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ParticleSystem::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleSystem::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ParticleSystem::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystem::libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleSystem::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystem::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleSystem::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystem::className() const function, expected prototype:\nconst char * osgParticle::ParticleSystem::className() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystem::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgParticle::ParticleSystem::Alignment osgParticle::ParticleSystem::getParticleAlignment() const
	static int _bind_getParticleAlignment(lua_State *L) {
		if (!_lg_typecheck_getParticleAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::Alignment osgParticle::ParticleSystem::getParticleAlignment() const function, expected prototype:\nosgParticle::ParticleSystem::Alignment osgParticle::ParticleSystem::getParticleAlignment() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem::Alignment osgParticle::ParticleSystem::getParticleAlignment() const");
		}
		osgParticle::ParticleSystem::Alignment lret = self->getParticleAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystem::setParticleAlignment(osgParticle::ParticleSystem::Alignment a)
	static int _bind_setParticleAlignment(lua_State *L) {
		if (!_lg_typecheck_setParticleAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setParticleAlignment(osgParticle::ParticleSystem::Alignment a) function, expected prototype:\nvoid osgParticle::ParticleSystem::setParticleAlignment(osgParticle::ParticleSystem::Alignment a)\nClass arguments details:\n");
		}

		osgParticle::ParticleSystem::Alignment a=(osgParticle::ParticleSystem::Alignment)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setParticleAlignment(osgParticle::ParticleSystem::Alignment)");
		}
		self->setParticleAlignment(a);

		return 0;
	}

	// const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorX() const
	static int _bind_getAlignVectorX(lua_State *L) {
		if (!_lg_typecheck_getAlignVectorX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorX() const function, expected prototype:\nconst osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorX() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorX() const");
		}
		const osg::Vec3f* lret = &self->getAlignVectorX();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleSystem::setAlignVectorX(const osg::Vec3f & v)
	static int _bind_setAlignVectorX(lua_State *L) {
		if (!_lg_typecheck_setAlignVectorX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setAlignVectorX(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setAlignVectorX(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::ParticleSystem::setAlignVectorX function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setAlignVectorX(const osg::Vec3f &)");
		}
		self->setAlignVectorX(v);

		return 0;
	}

	// const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorY() const
	static int _bind_getAlignVectorY(lua_State *L) {
		if (!_lg_typecheck_getAlignVectorY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorY() const function, expected prototype:\nconst osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorY() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorY() const");
		}
		const osg::Vec3f* lret = &self->getAlignVectorY();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleSystem::setAlignVectorY(const osg::Vec3f & v)
	static int _bind_setAlignVectorY(lua_State *L) {
		if (!_lg_typecheck_setAlignVectorY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setAlignVectorY(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setAlignVectorY(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::ParticleSystem::setAlignVectorY function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setAlignVectorY(const osg::Vec3f &)");
		}
		self->setAlignVectorY(v);

		return 0;
	}

	// void osgParticle::ParticleSystem::setAlignVectors(const osg::Vec3f & X, const osg::Vec3f & Y)
	static int _bind_setAlignVectors(lua_State *L) {
		if (!_lg_typecheck_setAlignVectors(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setAlignVectors(const osg::Vec3f & X, const osg::Vec3f & Y) function, expected prototype:\nvoid osgParticle::ParticleSystem::setAlignVectors(const osg::Vec3f & X, const osg::Vec3f & Y)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n");
		}

		const osg::Vec3f* X_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !X_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg X in osgParticle::ParticleSystem::setAlignVectors function");
		}
		const osg::Vec3f & X=*X_ptr;
		const osg::Vec3f* Y_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !Y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg Y in osgParticle::ParticleSystem::setAlignVectors function");
		}
		const osg::Vec3f & Y=*Y_ptr;

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setAlignVectors(const osg::Vec3f &, const osg::Vec3f &)");
		}
		self->setAlignVectors(X, Y);

		return 0;
	}

	// void osgParticle::ParticleSystem::setParticleScaleReferenceFrame(osgParticle::ParticleSystem::ParticleScaleReferenceFrame rf)
	static int _bind_setParticleScaleReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setParticleScaleReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setParticleScaleReferenceFrame(osgParticle::ParticleSystem::ParticleScaleReferenceFrame rf) function, expected prototype:\nvoid osgParticle::ParticleSystem::setParticleScaleReferenceFrame(osgParticle::ParticleSystem::ParticleScaleReferenceFrame rf)\nClass arguments details:\n");
		}

		osgParticle::ParticleSystem::ParticleScaleReferenceFrame rf=(osgParticle::ParticleSystem::ParticleScaleReferenceFrame)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setParticleScaleReferenceFrame(osgParticle::ParticleSystem::ParticleScaleReferenceFrame)");
		}
		self->setParticleScaleReferenceFrame(rf);

		return 0;
	}

	// osgParticle::ParticleSystem::ParticleScaleReferenceFrame osgParticle::ParticleSystem::getParticleScaleReferenceFrame() const
	static int _bind_getParticleScaleReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getParticleScaleReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::ParticleScaleReferenceFrame osgParticle::ParticleSystem::getParticleScaleReferenceFrame() const function, expected prototype:\nosgParticle::ParticleSystem::ParticleScaleReferenceFrame osgParticle::ParticleSystem::getParticleScaleReferenceFrame() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem::ParticleScaleReferenceFrame osgParticle::ParticleSystem::getParticleScaleReferenceFrame() const");
		}
		osgParticle::ParticleSystem::ParticleScaleReferenceFrame lret = self->getParticleScaleReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::BoundingBoxf & osgParticle::ParticleSystem::getDefaultBoundingBox() const
	static int _bind_getDefaultBoundingBox(lua_State *L) {
		if (!_lg_typecheck_getDefaultBoundingBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::BoundingBoxf & osgParticle::ParticleSystem::getDefaultBoundingBox() const function, expected prototype:\nconst osg::BoundingBoxf & osgParticle::ParticleSystem::getDefaultBoundingBox() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::BoundingBoxf & osgParticle::ParticleSystem::getDefaultBoundingBox() const");
		}
		const osg::BoundingBoxf* lret = &self->getDefaultBoundingBox();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxf >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleSystem::setDefaultBoundingBox(const osg::BoundingBoxf & bbox)
	static int _bind_setDefaultBoundingBox(lua_State *L) {
		if (!_lg_typecheck_setDefaultBoundingBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setDefaultBoundingBox(const osg::BoundingBoxf & bbox) function, expected prototype:\nvoid osgParticle::ParticleSystem::setDefaultBoundingBox(const osg::BoundingBoxf & bbox)\nClass arguments details:\narg 1 ID = 82744899\n");
		}

		const osg::BoundingBoxf* bbox_ptr=(Luna< osg::BoundingBoxf >::check(L,2));
		if( !bbox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bbox in osgParticle::ParticleSystem::setDefaultBoundingBox function");
		}
		const osg::BoundingBoxf & bbox=*bbox_ptr;

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setDefaultBoundingBox(const osg::BoundingBoxf &)");
		}
		self->setDefaultBoundingBox(bbox);

		return 0;
	}

	// bool osgParticle::ParticleSystem::getUseVertexArray() const
	static int _bind_getUseVertexArray(lua_State *L) {
		if (!_lg_typecheck_getUseVertexArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::getUseVertexArray() const function, expected prototype:\nbool osgParticle::ParticleSystem::getUseVertexArray() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::getUseVertexArray() const");
		}
		bool lret = self->getUseVertexArray();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleSystem::setUseVertexArray(bool v)
	static int _bind_setUseVertexArray(lua_State *L) {
		if (!_lg_typecheck_setUseVertexArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setUseVertexArray(bool v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setUseVertexArray(bool v)\nClass arguments details:\n");
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setUseVertexArray(bool)");
		}
		self->setUseVertexArray(v);

		return 0;
	}

	// bool osgParticle::ParticleSystem::getUseShaders() const
	static int _bind_getUseShaders(lua_State *L) {
		if (!_lg_typecheck_getUseShaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::getUseShaders() const function, expected prototype:\nbool osgParticle::ParticleSystem::getUseShaders() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::getUseShaders() const");
		}
		bool lret = self->getUseShaders();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleSystem::setUseShaders(bool v)
	static int _bind_setUseShaders(lua_State *L) {
		if (!_lg_typecheck_setUseShaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setUseShaders(bool v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setUseShaders(bool v)\nClass arguments details:\n");
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setUseShaders(bool)");
		}
		self->setUseShaders(v);

		return 0;
	}

	// bool osgParticle::ParticleSystem::getDoublePassRendering() const
	static int _bind_getDoublePassRendering(lua_State *L) {
		if (!_lg_typecheck_getDoublePassRendering(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::getDoublePassRendering() const function, expected prototype:\nbool osgParticle::ParticleSystem::getDoublePassRendering() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::getDoublePassRendering() const");
		}
		bool lret = self->getDoublePassRendering();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleSystem::setDoublePassRendering(bool v)
	static int _bind_setDoublePassRendering(lua_State *L) {
		if (!_lg_typecheck_setDoublePassRendering(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setDoublePassRendering(bool v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setDoublePassRendering(bool v)\nClass arguments details:\n");
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setDoublePassRendering(bool)");
		}
		self->setDoublePassRendering(v);

		return 0;
	}

	// bool osgParticle::ParticleSystem::getFrozen() const
	static int _bind_getFrozen(lua_State *L) {
		if (!_lg_typecheck_getFrozen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::getFrozen() const function, expected prototype:\nbool osgParticle::ParticleSystem::getFrozen() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::getFrozen() const");
		}
		bool lret = self->getFrozen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleSystem::isFrozen() const
	static int _bind_isFrozen(lua_State *L) {
		if (!_lg_typecheck_isFrozen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::isFrozen() const function, expected prototype:\nbool osgParticle::ParticleSystem::isFrozen() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::isFrozen() const");
		}
		bool lret = self->isFrozen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleSystem::setFrozen(bool v)
	static int _bind_setFrozen(lua_State *L) {
		if (!_lg_typecheck_setFrozen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setFrozen(bool v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setFrozen(bool v)\nClass arguments details:\n");
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setFrozen(bool)");
		}
		self->setFrozen(v);

		return 0;
	}

	// int osgParticle::ParticleSystem::numParticles() const
	static int _bind_numParticles(lua_State *L) {
		if (!_lg_typecheck_numParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgParticle::ParticleSystem::numParticles() const function, expected prototype:\nint osgParticle::ParticleSystem::numParticles() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgParticle::ParticleSystem::numParticles() const");
		}
		int lret = self->numParticles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgParticle::ParticleSystem::numDeadParticles() const
	static int _bind_numDeadParticles(lua_State *L) {
		if (!_lg_typecheck_numDeadParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgParticle::ParticleSystem::numDeadParticles() const function, expected prototype:\nint osgParticle::ParticleSystem::numDeadParticles() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgParticle::ParticleSystem::numDeadParticles() const");
		}
		int lret = self->numDeadParticles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgParticle::ParticleSystem::areAllParticlesDead() const
	static int _bind_areAllParticlesDead(lua_State *L) {
		if (!_lg_typecheck_areAllParticlesDead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::areAllParticlesDead() const function, expected prototype:\nbool osgParticle::ParticleSystem::areAllParticlesDead() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::areAllParticlesDead() const");
		}
		bool lret = self->areAllParticlesDead();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i)
	static int _bind_getParticle_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParticle_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i) function, expected prototype:\nosgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int)");
		}
		osgParticle::Particle * lret = self->getParticle(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i) const
	static int _bind_getParticle_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParticle_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i) const function, expected prototype:\nconst osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int) const");
		}
		const osgParticle::Particle * lret = self->getParticle(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystem::getParticle
	static int _bind_getParticle(lua_State *L) {
		if (_lg_typecheck_getParticle_overload_1(L)) return _bind_getParticle_overload_1(L);
		if (_lg_typecheck_getParticle_overload_2(L)) return _bind_getParticle_overload_2(L);

		luaL_error(L, "error in function getParticle, cannot match any of the overloads for function getParticle:\n  getParticle(int)\n  getParticle(int)\n");
		return 0;
	}

	// osgParticle::Particle * osgParticle::ParticleSystem::createParticle(const osgParticle::Particle * ptemplate)
	static int _bind_createParticle(lua_State *L) {
		if (!_lg_typecheck_createParticle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Particle * osgParticle::ParticleSystem::createParticle(const osgParticle::Particle * ptemplate) function, expected prototype:\nosgParticle::Particle * osgParticle::ParticleSystem::createParticle(const osgParticle::Particle * ptemplate)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		const osgParticle::Particle* ptemplate=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Particle * osgParticle::ParticleSystem::createParticle(const osgParticle::Particle *)");
		}
		osgParticle::Particle * lret = self->createParticle(ptemplate);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleSystem::destroyParticle(int i)
	static int _bind_destroyParticle(lua_State *L) {
		if (!_lg_typecheck_destroyParticle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::destroyParticle(int i) function, expected prototype:\nvoid osgParticle::ParticleSystem::destroyParticle(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::destroyParticle(int)");
		}
		self->destroyParticle(i);

		return 0;
	}

	// void osgParticle::ParticleSystem::reuseParticle(int i)
	static int _bind_reuseParticle(lua_State *L) {
		if (!_lg_typecheck_reuseParticle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::reuseParticle(int i) function, expected prototype:\nvoid osgParticle::ParticleSystem::reuseParticle(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::reuseParticle(int)");
		}
		self->reuseParticle(i);

		return 0;
	}

	// unsigned int osgParticle::ParticleSystem::getLastFrameNumber() const
	static int _bind_getLastFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getLastFrameNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::ParticleSystem::getLastFrameNumber() const function, expected prototype:\nunsigned int osgParticle::ParticleSystem::getLastFrameNumber() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::ParticleSystem::getLastFrameNumber() const");
		}
		unsigned int lret = self->getLastFrameNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double & osgParticle::ParticleSystem::getDeltaTime(double currentTime)
	static int _bind_getDeltaTime(lua_State *L) {
		if (!_lg_typecheck_getDeltaTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double & osgParticle::ParticleSystem::getDeltaTime(double currentTime) function, expected prototype:\ndouble & osgParticle::ParticleSystem::getDeltaTime(double currentTime)\nClass arguments details:\n");
		}

		double currentTime=(double)lua_tonumber(L,2);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double & osgParticle::ParticleSystem::getDeltaTime(double)");
		}
		double & lret = self->getDeltaTime(currentTime);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate()
	static int _bind_getDefaultParticleTemplate_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDefaultParticleTemplate_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate() function, expected prototype:\nosgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate()\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate()");
		}
		const osgParticle::Particle* lret = &self->getDefaultParticleTemplate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate() const
	static int _bind_getDefaultParticleTemplate_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDefaultParticleTemplate_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate() const function, expected prototype:\nconst osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate() const");
		}
		const osgParticle::Particle* lret = &self->getDefaultParticleTemplate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystem::getDefaultParticleTemplate
	static int _bind_getDefaultParticleTemplate(lua_State *L) {
		if (_lg_typecheck_getDefaultParticleTemplate_overload_1(L)) return _bind_getDefaultParticleTemplate_overload_1(L);
		if (_lg_typecheck_getDefaultParticleTemplate_overload_2(L)) return _bind_getDefaultParticleTemplate_overload_2(L);

		luaL_error(L, "error in function getDefaultParticleTemplate, cannot match any of the overloads for function getDefaultParticleTemplate:\n  getDefaultParticleTemplate()\n  getDefaultParticleTemplate()\n");
		return 0;
	}

	// void osgParticle::ParticleSystem::setDefaultParticleTemplate(const osgParticle::Particle & p)
	static int _bind_setDefaultParticleTemplate(lua_State *L) {
		if (!_lg_typecheck_setDefaultParticleTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setDefaultParticleTemplate(const osgParticle::Particle & p) function, expected prototype:\nvoid osgParticle::ParticleSystem::setDefaultParticleTemplate(const osgParticle::Particle & p)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		const osgParticle::Particle* p_ptr=(Luna< osgParticle::Particle >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osgParticle::ParticleSystem::setDefaultParticleTemplate function");
		}
		const osgParticle::Particle & p=*p_ptr;

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setDefaultParticleTemplate(const osgParticle::Particle &)");
		}
		self->setDefaultParticleTemplate(p);

		return 0;
	}

	// bool osgParticle::ParticleSystem::getFreezeOnCull() const
	static int _bind_getFreezeOnCull(lua_State *L) {
		if (!_lg_typecheck_getFreezeOnCull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::getFreezeOnCull() const function, expected prototype:\nbool osgParticle::ParticleSystem::getFreezeOnCull() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::getFreezeOnCull() const");
		}
		bool lret = self->getFreezeOnCull();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleSystem::setFreezeOnCull(bool v)
	static int _bind_setFreezeOnCull(lua_State *L) {
		if (!_lg_typecheck_setFreezeOnCull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setFreezeOnCull(bool v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setFreezeOnCull(bool v)\nClass arguments details:\n");
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setFreezeOnCull(bool)");
		}
		self->setFreezeOnCull(v);

		return 0;
	}

	// void osgParticle::ParticleSystem::setDefaultAttributes(const std::string & texturefile = "", bool emissive_particles = true, bool lighting = false, int texture_unit = 0)
	static int _bind_setDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_setDefaultAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setDefaultAttributes(const std::string & texturefile = \"\", bool emissive_particles = true, bool lighting = false, int texture_unit = 0) function, expected prototype:\nvoid osgParticle::ParticleSystem::setDefaultAttributes(const std::string & texturefile = \"\", bool emissive_particles = true, bool lighting = false, int texture_unit = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string texturefile(lua_tostring(L,2),lua_objlen(L,2));
		bool emissive_particles=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;
		bool lighting=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;
		int texture_unit=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setDefaultAttributes(const std::string &, bool, bool, int)");
		}
		self->setDefaultAttributes(texturefile, emissive_particles, lighting, texture_unit);

		return 0;
	}

	// void osgParticle::ParticleSystem::setDefaultAttributesUsingShaders(const std::string & texturefile = "", bool emissive_particles = true, int texture_unit = 0)
	static int _bind_setDefaultAttributesUsingShaders(lua_State *L) {
		if (!_lg_typecheck_setDefaultAttributesUsingShaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setDefaultAttributesUsingShaders(const std::string & texturefile = \"\", bool emissive_particles = true, int texture_unit = 0) function, expected prototype:\nvoid osgParticle::ParticleSystem::setDefaultAttributesUsingShaders(const std::string & texturefile = \"\", bool emissive_particles = true, int texture_unit = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string texturefile(lua_tostring(L,2),lua_objlen(L,2));
		bool emissive_particles=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;
		int texture_unit=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setDefaultAttributesUsingShaders(const std::string &, bool, int)");
		}
		self->setDefaultAttributesUsingShaders(texturefile, emissive_particles, texture_unit);

		return 0;
	}

	// int osgParticle::ParticleSystem::getLevelOfDetail() const
	static int _bind_getLevelOfDetail(lua_State *L) {
		if (!_lg_typecheck_getLevelOfDetail(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgParticle::ParticleSystem::getLevelOfDetail() const function, expected prototype:\nint osgParticle::ParticleSystem::getLevelOfDetail() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgParticle::ParticleSystem::getLevelOfDetail() const");
		}
		int lret = self->getLevelOfDetail();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystem::setLevelOfDetail(int v)
	static int _bind_setLevelOfDetail(lua_State *L) {
		if (!_lg_typecheck_setLevelOfDetail(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setLevelOfDetail(int v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setLevelOfDetail(int v)\nClass arguments details:\n");
		}

		int v=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setLevelOfDetail(int)");
		}
		self->setLevelOfDetail(v);

		return 0;
	}

	// osgParticle::ParticleSystem::SortMode osgParticle::ParticleSystem::getSortMode() const
	static int _bind_getSortMode(lua_State *L) {
		if (!_lg_typecheck_getSortMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::SortMode osgParticle::ParticleSystem::getSortMode() const function, expected prototype:\nosgParticle::ParticleSystem::SortMode osgParticle::ParticleSystem::getSortMode() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem::SortMode osgParticle::ParticleSystem::getSortMode() const");
		}
		osgParticle::ParticleSystem::SortMode lret = self->getSortMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystem::setSortMode(osgParticle::ParticleSystem::SortMode mode)
	static int _bind_setSortMode(lua_State *L) {
		if (!_lg_typecheck_setSortMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setSortMode(osgParticle::ParticleSystem::SortMode mode) function, expected prototype:\nvoid osgParticle::ParticleSystem::setSortMode(osgParticle::ParticleSystem::SortMode mode)\nClass arguments details:\n");
		}

		osgParticle::ParticleSystem::SortMode mode=(osgParticle::ParticleSystem::SortMode)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setSortMode(osgParticle::ParticleSystem::SortMode)");
		}
		self->setSortMode(mode);

		return 0;
	}

	// double osgParticle::ParticleSystem::getVisibilityDistance() const
	static int _bind_getVisibilityDistance(lua_State *L) {
		if (!_lg_typecheck_getVisibilityDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleSystem::getVisibilityDistance() const function, expected prototype:\ndouble osgParticle::ParticleSystem::getVisibilityDistance() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleSystem::getVisibilityDistance() const");
		}
		double lret = self->getVisibilityDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystem::setVisibilityDistance(double distance)
	static int _bind_setVisibilityDistance(lua_State *L) {
		if (!_lg_typecheck_setVisibilityDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setVisibilityDistance(double distance) function, expected prototype:\nvoid osgParticle::ParticleSystem::setVisibilityDistance(double distance)\nClass arguments details:\n");
		}

		double distance=(double)lua_tonumber(L,2);

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setVisibilityDistance(double)");
		}
		self->setVisibilityDistance(distance);

		return 0;
	}

	// void osgParticle::ParticleSystem::update(double dt, osg::NodeVisitor & nv)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::update(double dt, osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleSystem::update(double dt, osg::NodeVisitor & nv)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		double dt=(double)lua_tonumber(L,2);
		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleSystem::update function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::update(double, osg::NodeVisitor &)");
		}
		self->update(dt, nv);

		return 0;
	}

	// void osgParticle::ParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::ParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::ParticleSystem::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::drawImplementation(osg::RenderInfo &) const");
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// osg::BoundingBoxf osgParticle::ParticleSystem::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxf osgParticle::ParticleSystem::computeBound() const function, expected prototype:\nosg::BoundingBoxf osgParticle::ParticleSystem::computeBound() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystem* self=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingBoxf osgParticle::ParticleSystem::computeBound() const");
		}
		osg::BoundingBoxf stack_lret = self->computeBound();
		osg::BoundingBoxf* lret = new osg::BoundingBoxf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxf >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::ParticleSystem* LunaTraits< osgParticle::ParticleSystem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ParticleSystem::_bind_ctor(L);
}

void LunaTraits< osgParticle::ParticleSystem >::_bind_dtor(osgParticle::ParticleSystem* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ParticleSystem >::className[] = "ParticleSystem";
const char LunaTraits< osgParticle::ParticleSystem >::fullName[] = "osgParticle::ParticleSystem";
const char LunaTraits< osgParticle::ParticleSystem >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ParticleSystem >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< osgParticle::ParticleSystem >::hash = 84994826;
const int LunaTraits< osgParticle::ParticleSystem >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ParticleSystem >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ParticleSystem::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ParticleSystem::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ParticleSystem::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_ParticleSystem::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ParticleSystem::_bind_className},
	{"getParticleAlignment", &luna_wrapper_osgParticle_ParticleSystem::_bind_getParticleAlignment},
	{"setParticleAlignment", &luna_wrapper_osgParticle_ParticleSystem::_bind_setParticleAlignment},
	{"getAlignVectorX", &luna_wrapper_osgParticle_ParticleSystem::_bind_getAlignVectorX},
	{"setAlignVectorX", &luna_wrapper_osgParticle_ParticleSystem::_bind_setAlignVectorX},
	{"getAlignVectorY", &luna_wrapper_osgParticle_ParticleSystem::_bind_getAlignVectorY},
	{"setAlignVectorY", &luna_wrapper_osgParticle_ParticleSystem::_bind_setAlignVectorY},
	{"setAlignVectors", &luna_wrapper_osgParticle_ParticleSystem::_bind_setAlignVectors},
	{"setParticleScaleReferenceFrame", &luna_wrapper_osgParticle_ParticleSystem::_bind_setParticleScaleReferenceFrame},
	{"getParticleScaleReferenceFrame", &luna_wrapper_osgParticle_ParticleSystem::_bind_getParticleScaleReferenceFrame},
	{"getDefaultBoundingBox", &luna_wrapper_osgParticle_ParticleSystem::_bind_getDefaultBoundingBox},
	{"setDefaultBoundingBox", &luna_wrapper_osgParticle_ParticleSystem::_bind_setDefaultBoundingBox},
	{"getUseVertexArray", &luna_wrapper_osgParticle_ParticleSystem::_bind_getUseVertexArray},
	{"setUseVertexArray", &luna_wrapper_osgParticle_ParticleSystem::_bind_setUseVertexArray},
	{"getUseShaders", &luna_wrapper_osgParticle_ParticleSystem::_bind_getUseShaders},
	{"setUseShaders", &luna_wrapper_osgParticle_ParticleSystem::_bind_setUseShaders},
	{"getDoublePassRendering", &luna_wrapper_osgParticle_ParticleSystem::_bind_getDoublePassRendering},
	{"setDoublePassRendering", &luna_wrapper_osgParticle_ParticleSystem::_bind_setDoublePassRendering},
	{"getFrozen", &luna_wrapper_osgParticle_ParticleSystem::_bind_getFrozen},
	{"isFrozen", &luna_wrapper_osgParticle_ParticleSystem::_bind_isFrozen},
	{"setFrozen", &luna_wrapper_osgParticle_ParticleSystem::_bind_setFrozen},
	{"numParticles", &luna_wrapper_osgParticle_ParticleSystem::_bind_numParticles},
	{"numDeadParticles", &luna_wrapper_osgParticle_ParticleSystem::_bind_numDeadParticles},
	{"areAllParticlesDead", &luna_wrapper_osgParticle_ParticleSystem::_bind_areAllParticlesDead},
	{"getParticle", &luna_wrapper_osgParticle_ParticleSystem::_bind_getParticle},
	{"createParticle", &luna_wrapper_osgParticle_ParticleSystem::_bind_createParticle},
	{"destroyParticle", &luna_wrapper_osgParticle_ParticleSystem::_bind_destroyParticle},
	{"reuseParticle", &luna_wrapper_osgParticle_ParticleSystem::_bind_reuseParticle},
	{"getLastFrameNumber", &luna_wrapper_osgParticle_ParticleSystem::_bind_getLastFrameNumber},
	{"getDeltaTime", &luna_wrapper_osgParticle_ParticleSystem::_bind_getDeltaTime},
	{"getDefaultParticleTemplate", &luna_wrapper_osgParticle_ParticleSystem::_bind_getDefaultParticleTemplate},
	{"setDefaultParticleTemplate", &luna_wrapper_osgParticle_ParticleSystem::_bind_setDefaultParticleTemplate},
	{"getFreezeOnCull", &luna_wrapper_osgParticle_ParticleSystem::_bind_getFreezeOnCull},
	{"setFreezeOnCull", &luna_wrapper_osgParticle_ParticleSystem::_bind_setFreezeOnCull},
	{"setDefaultAttributes", &luna_wrapper_osgParticle_ParticleSystem::_bind_setDefaultAttributes},
	{"setDefaultAttributesUsingShaders", &luna_wrapper_osgParticle_ParticleSystem::_bind_setDefaultAttributesUsingShaders},
	{"getLevelOfDetail", &luna_wrapper_osgParticle_ParticleSystem::_bind_getLevelOfDetail},
	{"setLevelOfDetail", &luna_wrapper_osgParticle_ParticleSystem::_bind_setLevelOfDetail},
	{"getSortMode", &luna_wrapper_osgParticle_ParticleSystem::_bind_getSortMode},
	{"setSortMode", &luna_wrapper_osgParticle_ParticleSystem::_bind_setSortMode},
	{"getVisibilityDistance", &luna_wrapper_osgParticle_ParticleSystem::_bind_getVisibilityDistance},
	{"setVisibilityDistance", &luna_wrapper_osgParticle_ParticleSystem::_bind_setVisibilityDistance},
	{"update", &luna_wrapper_osgParticle_ParticleSystem::_bind_update},
	{"drawImplementation", &luna_wrapper_osgParticle_ParticleSystem::_bind_drawImplementation},
	{"computeBound", &luna_wrapper_osgParticle_ParticleSystem::_bind_computeBound},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ParticleSystem >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ParticleSystem::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ParticleSystem >::enumValues[] = {
	{"BILLBOARD", osgParticle::ParticleSystem::BILLBOARD},
	{"FIXED", osgParticle::ParticleSystem::FIXED},
	{"LOCAL_COORDINATES", osgParticle::ParticleSystem::LOCAL_COORDINATES},
	{"WORLD_COORDINATES", osgParticle::ParticleSystem::WORLD_COORDINATES},
	{"NO_SORT", osgParticle::ParticleSystem::NO_SORT},
	{"SORT_FRONT_TO_BACK", osgParticle::ParticleSystem::SORT_FRONT_TO_BACK},
	{"SORT_BACK_TO_FRONT", osgParticle::ParticleSystem::SORT_BACK_TO_FRONT},
	{0,0}
};

