#include <plug_common.h>

class luna_wrapper_osgParticle_OrbitOperator {
public:
	typedef Luna< osgParticle::OrbitOperator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::OrbitOperator* ptr= dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::OrbitOperator >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setMaxRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxRadius(lua_State *L) {
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
	// osgParticle::OrbitOperator::OrbitOperator()
	static osgParticle::OrbitOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::OrbitOperator::OrbitOperator() function, expected prototype:\nosgParticle::OrbitOperator::OrbitOperator()\nClass arguments details:\n");
		}


		return new osgParticle::OrbitOperator();
	}

	// osgParticle::OrbitOperator::OrbitOperator(const osgParticle::OrbitOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::OrbitOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::OrbitOperator::OrbitOperator(const osgParticle::OrbitOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::OrbitOperator::OrbitOperator(const osgParticle::OrbitOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::OrbitOperator* copy_ptr=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::OrbitOperator::OrbitOperator function");
		}
		const osgParticle::OrbitOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::OrbitOperator::OrbitOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::OrbitOperator(copy, copyop);
	}

	// Overload binder for osgParticle::OrbitOperator::OrbitOperator
	static osgParticle::OrbitOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function OrbitOperator, cannot match any of the overloads for function OrbitOperator:\n  OrbitOperator()\n  OrbitOperator(const osgParticle::OrbitOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::OrbitOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::OrbitOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::OrbitOperator::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::OrbitOperator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::OrbitOperator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::OrbitOperator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::OrbitOperator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::OrbitOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::OrbitOperator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::OrbitOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::OrbitOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::OrbitOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::OrbitOperator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::OrbitOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::OrbitOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::OrbitOperator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::OrbitOperator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::OrbitOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::OrbitOperator::className() const function, expected prototype:\nconst char * osgParticle::OrbitOperator::className() const\nClass arguments details:\n");
		}


		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::OrbitOperator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::OrbitOperator::setCenter(const osg::Vec3f & c)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::setCenter(const osg::Vec3f & c) function, expected prototype:\nvoid osgParticle::OrbitOperator::setCenter(const osg::Vec3f & c)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* c_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in osgParticle::OrbitOperator::setCenter function");
		}
		const osg::Vec3f & c=*c_ptr;

		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::setCenter(const osg::Vec3f &)");
		}
		self->setCenter(c);

		return 0;
	}

	// const osg::Vec3f & osgParticle::OrbitOperator::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::OrbitOperator::getCenter() const function, expected prototype:\nconst osg::Vec3f & osgParticle::OrbitOperator::getCenter() const\nClass arguments details:\n");
		}


		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::OrbitOperator::getCenter() const");
		}
		const osg::Vec3f* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::OrbitOperator::setMagnitude(float mag)
	static int _bind_setMagnitude(lua_State *L) {
		if (!_lg_typecheck_setMagnitude(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::setMagnitude(float mag) function, expected prototype:\nvoid osgParticle::OrbitOperator::setMagnitude(float mag)\nClass arguments details:\n");
		}

		float mag=(float)lua_tonumber(L,2);

		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::setMagnitude(float)");
		}
		self->setMagnitude(mag);

		return 0;
	}

	// float osgParticle::OrbitOperator::getMagnitude() const
	static int _bind_getMagnitude(lua_State *L) {
		if (!_lg_typecheck_getMagnitude(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::OrbitOperator::getMagnitude() const function, expected prototype:\nfloat osgParticle::OrbitOperator::getMagnitude() const\nClass arguments details:\n");
		}


		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::OrbitOperator::getMagnitude() const");
		}
		float lret = self->getMagnitude();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::OrbitOperator::setEpsilon(float eps)
	static int _bind_setEpsilon(lua_State *L) {
		if (!_lg_typecheck_setEpsilon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::setEpsilon(float eps) function, expected prototype:\nvoid osgParticle::OrbitOperator::setEpsilon(float eps)\nClass arguments details:\n");
		}

		float eps=(float)lua_tonumber(L,2);

		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::setEpsilon(float)");
		}
		self->setEpsilon(eps);

		return 0;
	}

	// float osgParticle::OrbitOperator::getEpsilon() const
	static int _bind_getEpsilon(lua_State *L) {
		if (!_lg_typecheck_getEpsilon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::OrbitOperator::getEpsilon() const function, expected prototype:\nfloat osgParticle::OrbitOperator::getEpsilon() const\nClass arguments details:\n");
		}


		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::OrbitOperator::getEpsilon() const");
		}
		float lret = self->getEpsilon();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::OrbitOperator::setMaxRadius(float max)
	static int _bind_setMaxRadius(lua_State *L) {
		if (!_lg_typecheck_setMaxRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::setMaxRadius(float max) function, expected prototype:\nvoid osgParticle::OrbitOperator::setMaxRadius(float max)\nClass arguments details:\n");
		}

		float max=(float)lua_tonumber(L,2);

		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::setMaxRadius(float)");
		}
		self->setMaxRadius(max);

		return 0;
	}

	// float osgParticle::OrbitOperator::getMaxRadius() const
	static int _bind_getMaxRadius(lua_State *L) {
		if (!_lg_typecheck_getMaxRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::OrbitOperator::getMaxRadius() const function, expected prototype:\nfloat osgParticle::OrbitOperator::getMaxRadius() const\nClass arguments details:\n");
		}


		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::OrbitOperator::getMaxRadius() const");
		}
		float lret = self->getMaxRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::OrbitOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::OrbitOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::operate(osgParticle::Particle *, double)");
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::OrbitOperator::beginOperate(osgParticle::Program * prg)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::OrbitOperator::beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Program* prg=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::OrbitOperator* self=dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::beginOperate(osgParticle::Program *)");
		}
		self->beginOperate(prg);

		return 0;
	}


	// Operator binds:

};

osgParticle::OrbitOperator* LunaTraits< osgParticle::OrbitOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_OrbitOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::OrbitOperator >::_bind_dtor(osgParticle::OrbitOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::OrbitOperator >::className[] = "OrbitOperator";
const char LunaTraits< osgParticle::OrbitOperator >::fullName[] = "osgParticle::OrbitOperator";
const char LunaTraits< osgParticle::OrbitOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::OrbitOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::OrbitOperator >::hash = 25921605;
const int LunaTraits< osgParticle::OrbitOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::OrbitOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_OrbitOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_OrbitOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_OrbitOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_OrbitOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_OrbitOperator::_bind_className},
	{"setCenter", &luna_wrapper_osgParticle_OrbitOperator::_bind_setCenter},
	{"getCenter", &luna_wrapper_osgParticle_OrbitOperator::_bind_getCenter},
	{"setMagnitude", &luna_wrapper_osgParticle_OrbitOperator::_bind_setMagnitude},
	{"getMagnitude", &luna_wrapper_osgParticle_OrbitOperator::_bind_getMagnitude},
	{"setEpsilon", &luna_wrapper_osgParticle_OrbitOperator::_bind_setEpsilon},
	{"getEpsilon", &luna_wrapper_osgParticle_OrbitOperator::_bind_getEpsilon},
	{"setMaxRadius", &luna_wrapper_osgParticle_OrbitOperator::_bind_setMaxRadius},
	{"getMaxRadius", &luna_wrapper_osgParticle_OrbitOperator::_bind_getMaxRadius},
	{"operate", &luna_wrapper_osgParticle_OrbitOperator::_bind_operate},
	{"beginOperate", &luna_wrapper_osgParticle_OrbitOperator::_bind_beginOperate},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::OrbitOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_OrbitOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::OrbitOperator >::enumValues[] = {
	{0,0}
};


