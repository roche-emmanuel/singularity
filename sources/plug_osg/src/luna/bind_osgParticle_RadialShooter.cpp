#include <plug_common.h>

class luna_wrapper_osgParticle_RadialShooter {
public:
	typedef Luna< osgParticle::RadialShooter > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::RadialShooter* ptr= dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::RadialShooter >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getThetaRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setThetaRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13510606) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setThetaRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPhiRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPhiRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13510606) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPhiRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInitialSpeedRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInitialSpeedRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13510606) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInitialSpeedRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInitialRotationalSpeedRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInitialRotationalSpeedRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18829253) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInitialRotationalSpeedRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_shoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::RadialShooter::RadialShooter()
	static osgParticle::RadialShooter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::RadialShooter::RadialShooter() function, expected prototype:\nosgParticle::RadialShooter::RadialShooter()\nClass arguments details:\n");
		}


		return new osgParticle::RadialShooter();
	}

	// osgParticle::RadialShooter::RadialShooter(const osgParticle::RadialShooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::RadialShooter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::RadialShooter::RadialShooter(const osgParticle::RadialShooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::RadialShooter::RadialShooter(const osgParticle::RadialShooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::RadialShooter* copy_ptr=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::RadialShooter::RadialShooter function");
		}
		const osgParticle::RadialShooter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::RadialShooter::RadialShooter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::RadialShooter(copy, copyop);
	}

	// Overload binder for osgParticle::RadialShooter::RadialShooter
	static osgParticle::RadialShooter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RadialShooter, cannot match any of the overloads for function RadialShooter:\n  RadialShooter()\n  RadialShooter(const osgParticle::RadialShooter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::RadialShooter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::RadialShooter::cloneType() const function, expected prototype:\nosg::Object * osgParticle::RadialShooter::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::RadialShooter::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::RadialShooter::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::RadialShooter::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::RadialShooter::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::RadialShooter::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::RadialShooter::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::RadialShooter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::RadialShooter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::RadialShooter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::RadialShooter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::RadialShooter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::RadialShooter::libraryName() const function, expected prototype:\nconst char * osgParticle::RadialShooter::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::RadialShooter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::RadialShooter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::RadialShooter::className() const function, expected prototype:\nconst char * osgParticle::RadialShooter::className() const\nClass arguments details:\n");
		}


		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::RadialShooter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const osgParticle::rangef & osgParticle::RadialShooter::getThetaRange() const
	static int _bind_getThetaRange(lua_State *L) {
		if (!_lg_typecheck_getThetaRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::RadialShooter::getThetaRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::RadialShooter::getThetaRange() const\nClass arguments details:\n");
		}


		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::RadialShooter::getThetaRange() const");
		}
		const osgParticle::rangef* lret = &self->getThetaRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::RadialShooter::setThetaRange(const osgParticle::rangef & r)
	static int _bind_setThetaRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setThetaRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setThetaRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::RadialShooter::setThetaRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n");
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::rangef >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::RadialShooter::setThetaRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setThetaRange(const osgParticle::rangef &)");
		}
		self->setThetaRange(r);

		return 0;
	}

	// void osgParticle::RadialShooter::setThetaRange(float r1, float r2)
	static int _bind_setThetaRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setThetaRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setThetaRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::RadialShooter::setThetaRange(float r1, float r2)\nClass arguments details:\n");
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setThetaRange(float, float)");
		}
		self->setThetaRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::RadialShooter::setThetaRange
	static int _bind_setThetaRange(lua_State *L) {
		if (_lg_typecheck_setThetaRange_overload_1(L)) return _bind_setThetaRange_overload_1(L);
		if (_lg_typecheck_setThetaRange_overload_2(L)) return _bind_setThetaRange_overload_2(L);

		luaL_error(L, "error in function setThetaRange, cannot match any of the overloads for function setThetaRange:\n  setThetaRange(const osgParticle::rangef &)\n  setThetaRange(float, float)\n");
		return 0;
	}

	// const osgParticle::rangef & osgParticle::RadialShooter::getPhiRange() const
	static int _bind_getPhiRange(lua_State *L) {
		if (!_lg_typecheck_getPhiRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::RadialShooter::getPhiRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::RadialShooter::getPhiRange() const\nClass arguments details:\n");
		}


		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::RadialShooter::getPhiRange() const");
		}
		const osgParticle::rangef* lret = &self->getPhiRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::RadialShooter::setPhiRange(const osgParticle::rangef & r)
	static int _bind_setPhiRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setPhiRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setPhiRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::RadialShooter::setPhiRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n");
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::rangef >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::RadialShooter::setPhiRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setPhiRange(const osgParticle::rangef &)");
		}
		self->setPhiRange(r);

		return 0;
	}

	// void osgParticle::RadialShooter::setPhiRange(float r1, float r2)
	static int _bind_setPhiRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setPhiRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setPhiRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::RadialShooter::setPhiRange(float r1, float r2)\nClass arguments details:\n");
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setPhiRange(float, float)");
		}
		self->setPhiRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::RadialShooter::setPhiRange
	static int _bind_setPhiRange(lua_State *L) {
		if (_lg_typecheck_setPhiRange_overload_1(L)) return _bind_setPhiRange_overload_1(L);
		if (_lg_typecheck_setPhiRange_overload_2(L)) return _bind_setPhiRange_overload_2(L);

		luaL_error(L, "error in function setPhiRange, cannot match any of the overloads for function setPhiRange:\n  setPhiRange(const osgParticle::rangef &)\n  setPhiRange(float, float)\n");
		return 0;
	}

	// const osgParticle::rangef & osgParticle::RadialShooter::getInitialSpeedRange() const
	static int _bind_getInitialSpeedRange(lua_State *L) {
		if (!_lg_typecheck_getInitialSpeedRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::RadialShooter::getInitialSpeedRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::RadialShooter::getInitialSpeedRange() const\nClass arguments details:\n");
		}


		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::RadialShooter::getInitialSpeedRange() const");
		}
		const osgParticle::rangef* lret = &self->getInitialSpeedRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::RadialShooter::setInitialSpeedRange(const osgParticle::rangef & r)
	static int _bind_setInitialSpeedRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setInitialSpeedRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setInitialSpeedRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::RadialShooter::setInitialSpeedRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n");
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::rangef >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::RadialShooter::setInitialSpeedRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setInitialSpeedRange(const osgParticle::rangef &)");
		}
		self->setInitialSpeedRange(r);

		return 0;
	}

	// void osgParticle::RadialShooter::setInitialSpeedRange(float r1, float r2)
	static int _bind_setInitialSpeedRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setInitialSpeedRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setInitialSpeedRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::RadialShooter::setInitialSpeedRange(float r1, float r2)\nClass arguments details:\n");
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setInitialSpeedRange(float, float)");
		}
		self->setInitialSpeedRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::RadialShooter::setInitialSpeedRange
	static int _bind_setInitialSpeedRange(lua_State *L) {
		if (_lg_typecheck_setInitialSpeedRange_overload_1(L)) return _bind_setInitialSpeedRange_overload_1(L);
		if (_lg_typecheck_setInitialSpeedRange_overload_2(L)) return _bind_setInitialSpeedRange_overload_2(L);

		luaL_error(L, "error in function setInitialSpeedRange, cannot match any of the overloads for function setInitialSpeedRange:\n  setInitialSpeedRange(const osgParticle::rangef &)\n  setInitialSpeedRange(float, float)\n");
		return 0;
	}

	// const osgParticle::rangev3 & osgParticle::RadialShooter::getInitialRotationalSpeedRange() const
	static int _bind_getInitialRotationalSpeedRange(lua_State *L) {
		if (!_lg_typecheck_getInitialRotationalSpeedRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::rangev3 & osgParticle::RadialShooter::getInitialRotationalSpeedRange() const function, expected prototype:\nconst osgParticle::rangev3 & osgParticle::RadialShooter::getInitialRotationalSpeedRange() const\nClass arguments details:\n");
		}


		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::rangev3 & osgParticle::RadialShooter::getInitialRotationalSpeedRange() const");
		}
		const osgParticle::rangev3* lret = &self->getInitialRotationalSpeedRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangev3 >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osgParticle::rangev3 & r)
	static int _bind_setInitialRotationalSpeedRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setInitialRotationalSpeedRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osgParticle::rangev3 & r) function, expected prototype:\nvoid osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osgParticle::rangev3 & r)\nClass arguments details:\narg 1 ID = 18829253\n");
		}

		const osgParticle::rangev3* r_ptr=(Luna< osgParticle::rangev3 >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::RadialShooter::setInitialRotationalSpeedRange function");
		}
		const osgParticle::rangev3 & r=*r_ptr;

		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osgParticle::rangev3 &)");
		}
		self->setInitialRotationalSpeedRange(r);

		return 0;
	}

	// void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osg::Vec3f & r1, const osg::Vec3f & r2)
	static int _bind_setInitialRotationalSpeedRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setInitialRotationalSpeedRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osg::Vec3f & r1, const osg::Vec3f & r2) function, expected prototype:\nvoid osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osg::Vec3f & r1, const osg::Vec3f & r2)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n");
		}

		const osg::Vec3f* r1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !r1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r1 in osgParticle::RadialShooter::setInitialRotationalSpeedRange function");
		}
		const osg::Vec3f & r1=*r1_ptr;
		const osg::Vec3f* r2_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !r2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r2 in osgParticle::RadialShooter::setInitialRotationalSpeedRange function");
		}
		const osg::Vec3f & r2=*r2_ptr;

		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osg::Vec3f &, const osg::Vec3f &)");
		}
		self->setInitialRotationalSpeedRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::RadialShooter::setInitialRotationalSpeedRange
	static int _bind_setInitialRotationalSpeedRange(lua_State *L) {
		if (_lg_typecheck_setInitialRotationalSpeedRange_overload_1(L)) return _bind_setInitialRotationalSpeedRange_overload_1(L);
		if (_lg_typecheck_setInitialRotationalSpeedRange_overload_2(L)) return _bind_setInitialRotationalSpeedRange_overload_2(L);

		luaL_error(L, "error in function setInitialRotationalSpeedRange, cannot match any of the overloads for function setInitialRotationalSpeedRange:\n  setInitialRotationalSpeedRange(const osgParticle::rangev3 &)\n  setInitialRotationalSpeedRange(const osg::Vec3f &, const osg::Vec3f &)\n");
		return 0;
	}

	// void osgParticle::RadialShooter::shoot(osgParticle::Particle * P) const
	static int _bind_shoot(lua_State *L) {
		if (!_lg_typecheck_shoot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::shoot(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::RadialShooter::shoot(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::RadialShooter* self=dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::shoot(osgParticle::Particle *) const");
		}
		self->shoot(P);

		return 0;
	}


	// Operator binds:

};

osgParticle::RadialShooter* LunaTraits< osgParticle::RadialShooter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_RadialShooter::_bind_ctor(L);
}

void LunaTraits< osgParticle::RadialShooter >::_bind_dtor(osgParticle::RadialShooter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::RadialShooter >::className[] = "RadialShooter";
const char LunaTraits< osgParticle::RadialShooter >::fullName[] = "osgParticle::RadialShooter";
const char LunaTraits< osgParticle::RadialShooter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::RadialShooter >::parents[] = {"osgParticle.Shooter", 0};
const int LunaTraits< osgParticle::RadialShooter >::hash = 71386251;
const int LunaTraits< osgParticle::RadialShooter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::RadialShooter >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_RadialShooter::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_RadialShooter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_RadialShooter::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_RadialShooter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_RadialShooter::_bind_className},
	{"getThetaRange", &luna_wrapper_osgParticle_RadialShooter::_bind_getThetaRange},
	{"setThetaRange", &luna_wrapper_osgParticle_RadialShooter::_bind_setThetaRange},
	{"getPhiRange", &luna_wrapper_osgParticle_RadialShooter::_bind_getPhiRange},
	{"setPhiRange", &luna_wrapper_osgParticle_RadialShooter::_bind_setPhiRange},
	{"getInitialSpeedRange", &luna_wrapper_osgParticle_RadialShooter::_bind_getInitialSpeedRange},
	{"setInitialSpeedRange", &luna_wrapper_osgParticle_RadialShooter::_bind_setInitialSpeedRange},
	{"getInitialRotationalSpeedRange", &luna_wrapper_osgParticle_RadialShooter::_bind_getInitialRotationalSpeedRange},
	{"setInitialRotationalSpeedRange", &luna_wrapper_osgParticle_RadialShooter::_bind_setInitialRotationalSpeedRange},
	{"shoot", &luna_wrapper_osgParticle_RadialShooter::_bind_shoot},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::RadialShooter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_RadialShooter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::RadialShooter >::enumValues[] = {
	{0,0}
};

