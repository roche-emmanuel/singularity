#include <plug_common.h>

class luna_wrapper_osgParticle_ExplosionOperator {
public:
	typedef Luna< osgParticle::ExplosionOperator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::ExplosionOperator* ptr= dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ExplosionOperator >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMagnitude(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMagnitude(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEpsilon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEpsilon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSigma(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSigma(lua_State *L) {
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
	// osgParticle::ExplosionOperator::ExplosionOperator()
	static osgParticle::ExplosionOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ExplosionOperator::ExplosionOperator() function, expected prototype:\nosgParticle::ExplosionOperator::ExplosionOperator()\nClass arguments details:\n");
		}


		return new osgParticle::ExplosionOperator();
	}

	// osgParticle::ExplosionOperator::ExplosionOperator(const osgParticle::ExplosionOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ExplosionOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ExplosionOperator::ExplosionOperator(const osgParticle::ExplosionOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ExplosionOperator::ExplosionOperator(const osgParticle::ExplosionOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ExplosionOperator* copy_ptr=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ExplosionOperator::ExplosionOperator function");
		}
		const osgParticle::ExplosionOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ExplosionOperator::ExplosionOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ExplosionOperator(copy, copyop);
	}

	// Overload binder for osgParticle::ExplosionOperator::ExplosionOperator
	static osgParticle::ExplosionOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ExplosionOperator, cannot match any of the overloads for function ExplosionOperator:\n  ExplosionOperator()\n  ExplosionOperator(const osgParticle::ExplosionOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ExplosionOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ExplosionOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ExplosionOperator::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ExplosionOperator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ExplosionOperator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ExplosionOperator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::ExplosionOperator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ExplosionOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ExplosionOperator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ExplosionOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ExplosionOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ExplosionOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ExplosionOperator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ExplosionOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ExplosionOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::ExplosionOperator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ExplosionOperator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ExplosionOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ExplosionOperator::className() const function, expected prototype:\nconst char * osgParticle::ExplosionOperator::className() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ExplosionOperator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ExplosionOperator::setCenter(const osg::Vec3f & c)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ExplosionOperator::setCenter(const osg::Vec3f & c) function, expected prototype:\nvoid osgParticle::ExplosionOperator::setCenter(const osg::Vec3f & c)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* c_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in osgParticle::ExplosionOperator::setCenter function");
		}
		const osg::Vec3f & c=*c_ptr;

		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ExplosionOperator::setCenter(const osg::Vec3f &)");
		}
		self->setCenter(c);

		return 0;
	}

	// const osg::Vec3f & osgParticle::ExplosionOperator::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::ExplosionOperator::getCenter() const function, expected prototype:\nconst osg::Vec3f & osgParticle::ExplosionOperator::getCenter() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::ExplosionOperator::getCenter() const");
		}
		const osg::Vec3f* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ExplosionOperator::setRadius(float r)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ExplosionOperator::setRadius(float r) function, expected prototype:\nvoid osgParticle::ExplosionOperator::setRadius(float r)\nClass arguments details:\n");
		}

		float r=(float)lua_tonumber(L,2);

		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ExplosionOperator::setRadius(float)");
		}
		self->setRadius(r);

		return 0;
	}

	// float osgParticle::ExplosionOperator::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::ExplosionOperator::getRadius() const function, expected prototype:\nfloat osgParticle::ExplosionOperator::getRadius() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::ExplosionOperator::getRadius() const");
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ExplosionOperator::setMagnitude(float mag)
	static int _bind_setMagnitude(lua_State *L) {
		if (!_lg_typecheck_setMagnitude(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ExplosionOperator::setMagnitude(float mag) function, expected prototype:\nvoid osgParticle::ExplosionOperator::setMagnitude(float mag)\nClass arguments details:\n");
		}

		float mag=(float)lua_tonumber(L,2);

		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ExplosionOperator::setMagnitude(float)");
		}
		self->setMagnitude(mag);

		return 0;
	}

	// float osgParticle::ExplosionOperator::getMagnitude() const
	static int _bind_getMagnitude(lua_State *L) {
		if (!_lg_typecheck_getMagnitude(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::ExplosionOperator::getMagnitude() const function, expected prototype:\nfloat osgParticle::ExplosionOperator::getMagnitude() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::ExplosionOperator::getMagnitude() const");
		}
		float lret = self->getMagnitude();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ExplosionOperator::setEpsilon(float eps)
	static int _bind_setEpsilon(lua_State *L) {
		if (!_lg_typecheck_setEpsilon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ExplosionOperator::setEpsilon(float eps) function, expected prototype:\nvoid osgParticle::ExplosionOperator::setEpsilon(float eps)\nClass arguments details:\n");
		}

		float eps=(float)lua_tonumber(L,2);

		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ExplosionOperator::setEpsilon(float)");
		}
		self->setEpsilon(eps);

		return 0;
	}

	// float osgParticle::ExplosionOperator::getEpsilon() const
	static int _bind_getEpsilon(lua_State *L) {
		if (!_lg_typecheck_getEpsilon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::ExplosionOperator::getEpsilon() const function, expected prototype:\nfloat osgParticle::ExplosionOperator::getEpsilon() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::ExplosionOperator::getEpsilon() const");
		}
		float lret = self->getEpsilon();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ExplosionOperator::setSigma(float s)
	static int _bind_setSigma(lua_State *L) {
		if (!_lg_typecheck_setSigma(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ExplosionOperator::setSigma(float s) function, expected prototype:\nvoid osgParticle::ExplosionOperator::setSigma(float s)\nClass arguments details:\n");
		}

		float s=(float)lua_tonumber(L,2);

		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ExplosionOperator::setSigma(float)");
		}
		self->setSigma(s);

		return 0;
	}

	// float osgParticle::ExplosionOperator::getSigma() const
	static int _bind_getSigma(lua_State *L) {
		if (!_lg_typecheck_getSigma(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::ExplosionOperator::getSigma() const function, expected prototype:\nfloat osgParticle::ExplosionOperator::getSigma() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::ExplosionOperator::getSigma() const");
		}
		float lret = self->getSigma();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ExplosionOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ExplosionOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::ExplosionOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ExplosionOperator::operate(osgParticle::Particle *, double)");
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::ExplosionOperator::beginOperate(osgParticle::Program * prg)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ExplosionOperator::beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::ExplosionOperator::beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Program* prg=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ExplosionOperator* self=dynamic_cast< osgParticle::ExplosionOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ExplosionOperator::beginOperate(osgParticle::Program *)");
		}
		self->beginOperate(prg);

		return 0;
	}


	// Operator binds:

};

osgParticle::ExplosionOperator* LunaTraits< osgParticle::ExplosionOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ExplosionOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::ExplosionOperator >::_bind_dtor(osgParticle::ExplosionOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ExplosionOperator >::className[] = "ExplosionOperator";
const char LunaTraits< osgParticle::ExplosionOperator >::fullName[] = "osgParticle::ExplosionOperator";
const char LunaTraits< osgParticle::ExplosionOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ExplosionOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::ExplosionOperator >::hash = 63291798;
const int LunaTraits< osgParticle::ExplosionOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ExplosionOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ExplosionOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ExplosionOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ExplosionOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_ExplosionOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ExplosionOperator::_bind_className},
	{"setCenter", &luna_wrapper_osgParticle_ExplosionOperator::_bind_setCenter},
	{"getCenter", &luna_wrapper_osgParticle_ExplosionOperator::_bind_getCenter},
	{"setRadius", &luna_wrapper_osgParticle_ExplosionOperator::_bind_setRadius},
	{"getRadius", &luna_wrapper_osgParticle_ExplosionOperator::_bind_getRadius},
	{"setMagnitude", &luna_wrapper_osgParticle_ExplosionOperator::_bind_setMagnitude},
	{"getMagnitude", &luna_wrapper_osgParticle_ExplosionOperator::_bind_getMagnitude},
	{"setEpsilon", &luna_wrapper_osgParticle_ExplosionOperator::_bind_setEpsilon},
	{"getEpsilon", &luna_wrapper_osgParticle_ExplosionOperator::_bind_getEpsilon},
	{"setSigma", &luna_wrapper_osgParticle_ExplosionOperator::_bind_setSigma},
	{"getSigma", &luna_wrapper_osgParticle_ExplosionOperator::_bind_getSigma},
	{"operate", &luna_wrapper_osgParticle_ExplosionOperator::_bind_operate},
	{"beginOperate", &luna_wrapper_osgParticle_ExplosionOperator::_bind_beginOperate},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ExplosionOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ExplosionOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ExplosionOperator >::enumValues[] = {
	{0,0}
};

