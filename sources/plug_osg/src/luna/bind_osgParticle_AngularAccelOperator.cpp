#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_AngularAccelOperator.h>

class luna_wrapper_osgParticle_AngularAccelOperator {
public:
	typedef Luna< osgParticle::AngularAccelOperator > luna_t;

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
		osgParticle::AngularAccelOperator* ptr= dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::AngularAccelOperator >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( (!dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getAngularAcceleration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAngularAcceleration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
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
	// osgParticle::AngularAccelOperator::AngularAccelOperator()
	static osgParticle::AngularAccelOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::AngularAccelOperator::AngularAccelOperator() function, expected prototype:\nosgParticle::AngularAccelOperator::AngularAccelOperator()\nClass arguments details:\n");
		}


		return new osgParticle::AngularAccelOperator();
	}

	// osgParticle::AngularAccelOperator::AngularAccelOperator(const osgParticle::AngularAccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::AngularAccelOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::AngularAccelOperator::AngularAccelOperator(const osgParticle::AngularAccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::AngularAccelOperator::AngularAccelOperator(const osgParticle::AngularAccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::AngularAccelOperator* copy_ptr=dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::AngularAccelOperator::AngularAccelOperator function");
		}
		const osgParticle::AngularAccelOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::AngularAccelOperator::AngularAccelOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::AngularAccelOperator(copy, copyop);
	}

	// osgParticle::AngularAccelOperator::AngularAccelOperator(lua_Table * data)
	static osgParticle::AngularAccelOperator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::AngularAccelOperator::AngularAccelOperator(lua_Table * data) function, expected prototype:\nosgParticle::AngularAccelOperator::AngularAccelOperator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgParticle_AngularAccelOperator(L,NULL);
	}

	// osgParticle::AngularAccelOperator::AngularAccelOperator(lua_Table * data, const osgParticle::AngularAccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::AngularAccelOperator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::AngularAccelOperator::AngularAccelOperator(lua_Table * data, const osgParticle::AngularAccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::AngularAccelOperator::AngularAccelOperator(lua_Table * data, const osgParticle::AngularAccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::AngularAccelOperator* copy_ptr=dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::AngularAccelOperator::AngularAccelOperator function");
		}
		const osgParticle::AngularAccelOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::AngularAccelOperator::AngularAccelOperator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_AngularAccelOperator(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::AngularAccelOperator::AngularAccelOperator
	static osgParticle::AngularAccelOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function AngularAccelOperator, cannot match any of the overloads for function AngularAccelOperator:\n  AngularAccelOperator()\n  AngularAccelOperator(const osgParticle::AngularAccelOperator &, const osg::CopyOp &)\n  AngularAccelOperator(lua_Table *)\n  AngularAccelOperator(lua_Table *, const osgParticle::AngularAccelOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::AngularAccelOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::AngularAccelOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::AngularAccelOperator::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::AngularAccelOperator* self=dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::AngularAccelOperator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::AngularAccelOperator::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::AngularAccelOperator::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::AngularAccelOperator::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::AngularAccelOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::AngularAccelOperator* self=dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::AngularAccelOperator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::AngularAccelOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::AngularAccelOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::AngularAccelOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::AngularAccelOperator* self=dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::AngularAccelOperator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::AngularAccelOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::AngularAccelOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::AngularAccelOperator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::AngularAccelOperator* self=dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::AngularAccelOperator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::AngularAccelOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::AngularAccelOperator::className() const function, expected prototype:\nconst char * osgParticle::AngularAccelOperator::className() const\nClass arguments details:\n");
		}


		osgParticle::AngularAccelOperator* self=dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::AngularAccelOperator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const osg::Vec3f & osgParticle::AngularAccelOperator::getAngularAcceleration() const
	static int _bind_getAngularAcceleration(lua_State *L) {
		if (!_lg_typecheck_getAngularAcceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::AngularAccelOperator::getAngularAcceleration() const function, expected prototype:\nconst osg::Vec3f & osgParticle::AngularAccelOperator::getAngularAcceleration() const\nClass arguments details:\n");
		}


		osgParticle::AngularAccelOperator* self=dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::AngularAccelOperator::getAngularAcceleration() const");
		}
		const osg::Vec3f* lret = &self->getAngularAcceleration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::AngularAccelOperator::setAngularAcceleration(const osg::Vec3f & v)
	static int _bind_setAngularAcceleration(lua_State *L) {
		if (!_lg_typecheck_setAngularAcceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularAccelOperator::setAngularAcceleration(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::AngularAccelOperator::setAngularAcceleration(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::AngularAccelOperator::setAngularAcceleration function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::AngularAccelOperator* self=dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularAccelOperator::setAngularAcceleration(const osg::Vec3f &)");
		}
		self->setAngularAcceleration(v);

		return 0;
	}

	// void osgParticle::AngularAccelOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularAccelOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::AngularAccelOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::AngularAccelOperator* self=dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularAccelOperator::operate(osgParticle::Particle *, double)");
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::AngularAccelOperator::beginOperate(osgParticle::Program * prg)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularAccelOperator::beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::AngularAccelOperator::beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Program* prg=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::AngularAccelOperator* self=dynamic_cast< osgParticle::AngularAccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularAccelOperator::beginOperate(osgParticle::Program *)");
		}
		self->beginOperate(prg);

		return 0;
	}


	// Operator binds:

};

osgParticle::AngularAccelOperator* LunaTraits< osgParticle::AngularAccelOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_AngularAccelOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::AngularAccelOperator >::_bind_dtor(osgParticle::AngularAccelOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::AngularAccelOperator >::className[] = "AngularAccelOperator";
const char LunaTraits< osgParticle::AngularAccelOperator >::fullName[] = "osgParticle::AngularAccelOperator";
const char LunaTraits< osgParticle::AngularAccelOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::AngularAccelOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::AngularAccelOperator >::hash = 34917760;
const int LunaTraits< osgParticle::AngularAccelOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::AngularAccelOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_AngularAccelOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_AngularAccelOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_AngularAccelOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_AngularAccelOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_AngularAccelOperator::_bind_className},
	{"getAngularAcceleration", &luna_wrapper_osgParticle_AngularAccelOperator::_bind_getAngularAcceleration},
	{"setAngularAcceleration", &luna_wrapper_osgParticle_AngularAccelOperator::_bind_setAngularAcceleration},
	{"operate", &luna_wrapper_osgParticle_AngularAccelOperator::_bind_operate},
	{"beginOperate", &luna_wrapper_osgParticle_AngularAccelOperator::_bind_beginOperate},
	{"__eq", &luna_wrapper_osgParticle_AngularAccelOperator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::AngularAccelOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_AngularAccelOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::AngularAccelOperator >::enumValues[] = {
	{0,0}
};


