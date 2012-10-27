#include <plug_common.h>

class luna_wrapper_osgParticle_FluidFrictionOperator {
public:
	typedef Luna< osgParticle::FluidFrictionOperator > luna_t;

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
		osgParticle::FluidFrictionOperator* ptr= dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::FluidFrictionOperator >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setFluidDensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFluidDensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFluidViscosity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFluidViscosity(lua_State *L) {
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

	inline static bool _lg_typecheck_setOverrideRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOverrideRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFluidToAir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFluidToWater(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_operate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginOperate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::FluidFrictionOperator::FluidFrictionOperator()
	static osgParticle::FluidFrictionOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::FluidFrictionOperator::FluidFrictionOperator() function, expected prototype:\nosgParticle::FluidFrictionOperator::FluidFrictionOperator()\nClass arguments details:\n");
		}


		return new osgParticle::FluidFrictionOperator();
	}

	// osgParticle::FluidFrictionOperator::FluidFrictionOperator(const osgParticle::FluidFrictionOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::FluidFrictionOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::FluidFrictionOperator::FluidFrictionOperator(const osgParticle::FluidFrictionOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::FluidFrictionOperator::FluidFrictionOperator(const osgParticle::FluidFrictionOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::FluidFrictionOperator* copy_ptr=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::FluidFrictionOperator::FluidFrictionOperator function");
		}
		const osgParticle::FluidFrictionOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::FluidFrictionOperator::FluidFrictionOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::FluidFrictionOperator(copy, copyop);
	}

	// Overload binder for osgParticle::FluidFrictionOperator::FluidFrictionOperator
	static osgParticle::FluidFrictionOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FluidFrictionOperator, cannot match any of the overloads for function FluidFrictionOperator:\n  FluidFrictionOperator()\n  FluidFrictionOperator(const osgParticle::FluidFrictionOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::FluidFrictionOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FluidFrictionOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::FluidFrictionOperator::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FluidFrictionOperator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::FluidFrictionOperator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FluidFrictionOperator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::FluidFrictionOperator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::FluidFrictionOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FluidFrictionOperator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::FluidFrictionOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::FluidFrictionOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::FluidFrictionOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::FluidFrictionOperator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::FluidFrictionOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FluidFrictionOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::FluidFrictionOperator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::FluidFrictionOperator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::FluidFrictionOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FluidFrictionOperator::className() const function, expected prototype:\nconst char * osgParticle::FluidFrictionOperator::className() const\nClass arguments details:\n");
		}


		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::FluidFrictionOperator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::FluidFrictionOperator::setFluidDensity(float d)
	static int _bind_setFluidDensity(lua_State *L) {
		if (!_lg_typecheck_setFluidDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidFrictionOperator::setFluidDensity(float d) function, expected prototype:\nvoid osgParticle::FluidFrictionOperator::setFluidDensity(float d)\nClass arguments details:\n");
		}

		float d=(float)lua_tonumber(L,2);

		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidFrictionOperator::setFluidDensity(float)");
		}
		self->setFluidDensity(d);

		return 0;
	}

	// float osgParticle::FluidFrictionOperator::getFluidDensity() const
	static int _bind_getFluidDensity(lua_State *L) {
		if (!_lg_typecheck_getFluidDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::FluidFrictionOperator::getFluidDensity() const function, expected prototype:\nfloat osgParticle::FluidFrictionOperator::getFluidDensity() const\nClass arguments details:\n");
		}


		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::FluidFrictionOperator::getFluidDensity() const");
		}
		float lret = self->getFluidDensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::FluidFrictionOperator::setFluidViscosity(float v)
	static int _bind_setFluidViscosity(lua_State *L) {
		if (!_lg_typecheck_setFluidViscosity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidFrictionOperator::setFluidViscosity(float v) function, expected prototype:\nvoid osgParticle::FluidFrictionOperator::setFluidViscosity(float v)\nClass arguments details:\n");
		}

		float v=(float)lua_tonumber(L,2);

		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidFrictionOperator::setFluidViscosity(float)");
		}
		self->setFluidViscosity(v);

		return 0;
	}

	// float osgParticle::FluidFrictionOperator::getFluidViscosity() const
	static int _bind_getFluidViscosity(lua_State *L) {
		if (!_lg_typecheck_getFluidViscosity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::FluidFrictionOperator::getFluidViscosity() const function, expected prototype:\nfloat osgParticle::FluidFrictionOperator::getFluidViscosity() const\nClass arguments details:\n");
		}


		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::FluidFrictionOperator::getFluidViscosity() const");
		}
		float lret = self->getFluidViscosity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::FluidFrictionOperator::setWind(const osg::Vec3f & wind)
	static int _bind_setWind(lua_State *L) {
		if (!_lg_typecheck_setWind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidFrictionOperator::setWind(const osg::Vec3f & wind) function, expected prototype:\nvoid osgParticle::FluidFrictionOperator::setWind(const osg::Vec3f & wind)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* wind_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !wind_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wind in osgParticle::FluidFrictionOperator::setWind function");
		}
		const osg::Vec3f & wind=*wind_ptr;

		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidFrictionOperator::setWind(const osg::Vec3f &)");
		}
		self->setWind(wind);

		return 0;
	}

	// const osg::Vec3f & osgParticle::FluidFrictionOperator::getWind() const
	static int _bind_getWind(lua_State *L) {
		if (!_lg_typecheck_getWind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::FluidFrictionOperator::getWind() const function, expected prototype:\nconst osg::Vec3f & osgParticle::FluidFrictionOperator::getWind() const\nClass arguments details:\n");
		}


		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::FluidFrictionOperator::getWind() const");
		}
		const osg::Vec3f* lret = &self->getWind();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::FluidFrictionOperator::setOverrideRadius(float r)
	static int _bind_setOverrideRadius(lua_State *L) {
		if (!_lg_typecheck_setOverrideRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidFrictionOperator::setOverrideRadius(float r) function, expected prototype:\nvoid osgParticle::FluidFrictionOperator::setOverrideRadius(float r)\nClass arguments details:\n");
		}

		float r=(float)lua_tonumber(L,2);

		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidFrictionOperator::setOverrideRadius(float)");
		}
		self->setOverrideRadius(r);

		return 0;
	}

	// float osgParticle::FluidFrictionOperator::getOverrideRadius() const
	static int _bind_getOverrideRadius(lua_State *L) {
		if (!_lg_typecheck_getOverrideRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::FluidFrictionOperator::getOverrideRadius() const function, expected prototype:\nfloat osgParticle::FluidFrictionOperator::getOverrideRadius() const\nClass arguments details:\n");
		}


		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::FluidFrictionOperator::getOverrideRadius() const");
		}
		float lret = self->getOverrideRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::FluidFrictionOperator::setFluidToAir()
	static int _bind_setFluidToAir(lua_State *L) {
		if (!_lg_typecheck_setFluidToAir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidFrictionOperator::setFluidToAir() function, expected prototype:\nvoid osgParticle::FluidFrictionOperator::setFluidToAir()\nClass arguments details:\n");
		}


		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidFrictionOperator::setFluidToAir()");
		}
		self->setFluidToAir();

		return 0;
	}

	// void osgParticle::FluidFrictionOperator::setFluidToWater()
	static int _bind_setFluidToWater(lua_State *L) {
		if (!_lg_typecheck_setFluidToWater(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidFrictionOperator::setFluidToWater() function, expected prototype:\nvoid osgParticle::FluidFrictionOperator::setFluidToWater()\nClass arguments details:\n");
		}


		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidFrictionOperator::setFluidToWater()");
		}
		self->setFluidToWater();

		return 0;
	}

	// void osgParticle::FluidFrictionOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidFrictionOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::FluidFrictionOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidFrictionOperator::operate(osgParticle::Particle *, double)");
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::FluidFrictionOperator::beginOperate(osgParticle::Program * prg)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidFrictionOperator::beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::FluidFrictionOperator::beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Program* prg=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::FluidFrictionOperator* self=dynamic_cast< osgParticle::FluidFrictionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidFrictionOperator::beginOperate(osgParticle::Program *)");
		}
		self->beginOperate(prg);

		return 0;
	}


	// Operator binds:

};

osgParticle::FluidFrictionOperator* LunaTraits< osgParticle::FluidFrictionOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_FluidFrictionOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::FluidFrictionOperator >::_bind_dtor(osgParticle::FluidFrictionOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::FluidFrictionOperator >::className[] = "FluidFrictionOperator";
const char LunaTraits< osgParticle::FluidFrictionOperator >::fullName[] = "osgParticle::FluidFrictionOperator";
const char LunaTraits< osgParticle::FluidFrictionOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::FluidFrictionOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::FluidFrictionOperator >::hash = 68690173;
const int LunaTraits< osgParticle::FluidFrictionOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::FluidFrictionOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_className},
	{"setFluidDensity", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_setFluidDensity},
	{"getFluidDensity", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_getFluidDensity},
	{"setFluidViscosity", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_setFluidViscosity},
	{"getFluidViscosity", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_getFluidViscosity},
	{"setWind", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_setWind},
	{"getWind", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_getWind},
	{"setOverrideRadius", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_setOverrideRadius},
	{"getOverrideRadius", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_getOverrideRadius},
	{"setFluidToAir", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_setFluidToAir},
	{"setFluidToWater", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_setFluidToWater},
	{"operate", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_operate},
	{"beginOperate", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind_beginOperate},
	{"__eq", &luna_wrapper_osgParticle_FluidFrictionOperator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::FluidFrictionOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_FluidFrictionOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::FluidFrictionOperator >::enumValues[] = {
	{0,0}
};


