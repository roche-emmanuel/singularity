#include <plug_common.h>

class luna_wrapper_osgParticle_BoxPlacer {
public:
	typedef Luna< osgParticle::BoxPlacer > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::BoxPlacer* ptr= dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::BoxPlacer >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getXRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setXRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13510606) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setXRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getYRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setYRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13510606) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getZRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setZRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13510606) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck_place(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_volume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getControlPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::BoxPlacer::BoxPlacer()
	static osgParticle::BoxPlacer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::BoxPlacer::BoxPlacer() function, expected prototype:\nosgParticle::BoxPlacer::BoxPlacer()\nClass arguments details:\n");
		}


		return new osgParticle::BoxPlacer();
	}

	// osgParticle::BoxPlacer::BoxPlacer(const osgParticle::BoxPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::BoxPlacer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::BoxPlacer::BoxPlacer(const osgParticle::BoxPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::BoxPlacer::BoxPlacer(const osgParticle::BoxPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::BoxPlacer* copy_ptr=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::BoxPlacer::BoxPlacer function");
		}
		const osgParticle::BoxPlacer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::BoxPlacer::BoxPlacer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::BoxPlacer(copy, copyop);
	}

	// Overload binder for osgParticle::BoxPlacer::BoxPlacer
	static osgParticle::BoxPlacer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BoxPlacer, cannot match any of the overloads for function BoxPlacer:\n  BoxPlacer()\n  BoxPlacer(const osgParticle::BoxPlacer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const osgParticle::rangef & osgParticle::BoxPlacer::getXRange() const
	static int _bind_getXRange(lua_State *L) {
		if (!_lg_typecheck_getXRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::BoxPlacer::getXRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::BoxPlacer::getXRange() const\nClass arguments details:\n");
		}


		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::BoxPlacer::getXRange() const");
		}
		const osgParticle::rangef* lret = &self->getXRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::BoxPlacer::setXRange(const osgParticle::rangef & r)
	static int _bind_setXRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setXRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setXRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::BoxPlacer::setXRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n");
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::rangef >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::BoxPlacer::setXRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setXRange(const osgParticle::rangef &)");
		}
		self->setXRange(r);

		return 0;
	}

	// void osgParticle::BoxPlacer::setXRange(float r1, float r2)
	static int _bind_setXRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setXRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setXRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::BoxPlacer::setXRange(float r1, float r2)\nClass arguments details:\n");
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setXRange(float, float)");
		}
		self->setXRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::BoxPlacer::setXRange
	static int _bind_setXRange(lua_State *L) {
		if (_lg_typecheck_setXRange_overload_1(L)) return _bind_setXRange_overload_1(L);
		if (_lg_typecheck_setXRange_overload_2(L)) return _bind_setXRange_overload_2(L);

		luaL_error(L, "error in function setXRange, cannot match any of the overloads for function setXRange:\n  setXRange(const osgParticle::rangef &)\n  setXRange(float, float)\n");
		return 0;
	}

	// const osgParticle::rangef & osgParticle::BoxPlacer::getYRange() const
	static int _bind_getYRange(lua_State *L) {
		if (!_lg_typecheck_getYRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::BoxPlacer::getYRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::BoxPlacer::getYRange() const\nClass arguments details:\n");
		}


		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::BoxPlacer::getYRange() const");
		}
		const osgParticle::rangef* lret = &self->getYRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::BoxPlacer::setYRange(const osgParticle::rangef & r)
	static int _bind_setYRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setYRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setYRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::BoxPlacer::setYRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n");
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::rangef >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::BoxPlacer::setYRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setYRange(const osgParticle::rangef &)");
		}
		self->setYRange(r);

		return 0;
	}

	// void osgParticle::BoxPlacer::setYRange(float r1, float r2)
	static int _bind_setYRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setYRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setYRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::BoxPlacer::setYRange(float r1, float r2)\nClass arguments details:\n");
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setYRange(float, float)");
		}
		self->setYRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::BoxPlacer::setYRange
	static int _bind_setYRange(lua_State *L) {
		if (_lg_typecheck_setYRange_overload_1(L)) return _bind_setYRange_overload_1(L);
		if (_lg_typecheck_setYRange_overload_2(L)) return _bind_setYRange_overload_2(L);

		luaL_error(L, "error in function setYRange, cannot match any of the overloads for function setYRange:\n  setYRange(const osgParticle::rangef &)\n  setYRange(float, float)\n");
		return 0;
	}

	// const osgParticle::rangef & osgParticle::BoxPlacer::getZRange() const
	static int _bind_getZRange(lua_State *L) {
		if (!_lg_typecheck_getZRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::BoxPlacer::getZRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::BoxPlacer::getZRange() const\nClass arguments details:\n");
		}


		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::BoxPlacer::getZRange() const");
		}
		const osgParticle::rangef* lret = &self->getZRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::BoxPlacer::setZRange(const osgParticle::rangef & r)
	static int _bind_setZRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setZRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setZRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::BoxPlacer::setZRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n");
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::rangef >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::BoxPlacer::setZRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setZRange(const osgParticle::rangef &)");
		}
		self->setZRange(r);

		return 0;
	}

	// void osgParticle::BoxPlacer::setZRange(float r1, float r2)
	static int _bind_setZRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setZRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setZRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::BoxPlacer::setZRange(float r1, float r2)\nClass arguments details:\n");
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setZRange(float, float)");
		}
		self->setZRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::BoxPlacer::setZRange
	static int _bind_setZRange(lua_State *L) {
		if (_lg_typecheck_setZRange_overload_1(L)) return _bind_setZRange_overload_1(L);
		if (_lg_typecheck_setZRange_overload_2(L)) return _bind_setZRange_overload_2(L);

		luaL_error(L, "error in function setZRange, cannot match any of the overloads for function setZRange:\n  setZRange(const osgParticle::rangef &)\n  setZRange(float, float)\n");
		return 0;
	}

	// osg::Object * osgParticle::BoxPlacer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::BoxPlacer::cloneType() const function, expected prototype:\nosg::Object * osgParticle::BoxPlacer::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::BoxPlacer::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::BoxPlacer::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::BoxPlacer::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::BoxPlacer::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::BoxPlacer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::BoxPlacer::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::BoxPlacer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::BoxPlacer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::BoxPlacer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::BoxPlacer::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::BoxPlacer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::BoxPlacer::libraryName() const function, expected prototype:\nconst char * osgParticle::BoxPlacer::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::BoxPlacer::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::BoxPlacer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::BoxPlacer::className() const function, expected prototype:\nconst char * osgParticle::BoxPlacer::className() const\nClass arguments details:\n");
		}


		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::BoxPlacer::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::BoxPlacer::place(osgParticle::Particle * P) const
	static int _bind_place(lua_State *L) {
		if (!_lg_typecheck_place(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::BoxPlacer::place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::place(osgParticle::Particle *) const");
		}
		self->place(P);

		return 0;
	}

	// float osgParticle::BoxPlacer::volume() const
	static int _bind_volume(lua_State *L) {
		if (!_lg_typecheck_volume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::BoxPlacer::volume() const function, expected prototype:\nfloat osgParticle::BoxPlacer::volume() const\nClass arguments details:\n");
		}


		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::BoxPlacer::volume() const");
		}
		float lret = self->volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::BoxPlacer::getControlPosition() const
	static int _bind_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_getControlPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::BoxPlacer::getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::BoxPlacer::getControlPosition() const\nClass arguments details:\n");
		}


		osgParticle::BoxPlacer* self=dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::BoxPlacer::getControlPosition() const");
		}
		osg::Vec3f stack_lret = self->getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::BoxPlacer* LunaTraits< osgParticle::BoxPlacer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_BoxPlacer::_bind_ctor(L);
}

void LunaTraits< osgParticle::BoxPlacer >::_bind_dtor(osgParticle::BoxPlacer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::BoxPlacer >::className[] = "BoxPlacer";
const char LunaTraits< osgParticle::BoxPlacer >::fullName[] = "osgParticle::BoxPlacer";
const char LunaTraits< osgParticle::BoxPlacer >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::BoxPlacer >::parents[] = {"osgParticle.CenteredPlacer", 0};
const int LunaTraits< osgParticle::BoxPlacer >::hash = 31855361;
const int LunaTraits< osgParticle::BoxPlacer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::BoxPlacer >::methods[] = {
	{"getXRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_getXRange},
	{"setXRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_setXRange},
	{"getYRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_getYRange},
	{"setYRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_setYRange},
	{"getZRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_getZRange},
	{"setZRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_setZRange},
	{"cloneType", &luna_wrapper_osgParticle_BoxPlacer::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_BoxPlacer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_BoxPlacer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_BoxPlacer::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_BoxPlacer::_bind_className},
	{"place", &luna_wrapper_osgParticle_BoxPlacer::_bind_place},
	{"volume", &luna_wrapper_osgParticle_BoxPlacer::_bind_volume},
	{"getControlPosition", &luna_wrapper_osgParticle_BoxPlacer::_bind_getControlPosition},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::BoxPlacer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_BoxPlacer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::BoxPlacer >::enumValues[] = {
	{0,0}
};


