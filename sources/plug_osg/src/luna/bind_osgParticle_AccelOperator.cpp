#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_AccelOperator.h>

class luna_wrapper_osgParticle_AccelOperator {
public:
	typedef Luna< osgParticle::AccelOperator > luna_t;

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
		osgParticle::AccelOperator* ptr= dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::AccelOperator >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( (!dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getAcceleration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAcceleration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setToGravity(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
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
	// osgParticle::AccelOperator::AccelOperator()
	static osgParticle::AccelOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::AccelOperator::AccelOperator() function, expected prototype:\nosgParticle::AccelOperator::AccelOperator()\nClass arguments details:\n");
		}


		return new osgParticle::AccelOperator();
	}

	// osgParticle::AccelOperator::AccelOperator(const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::AccelOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::AccelOperator::AccelOperator(const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::AccelOperator::AccelOperator(const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::AccelOperator* copy_ptr=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::AccelOperator::AccelOperator function");
		}
		const osgParticle::AccelOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::AccelOperator::AccelOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::AccelOperator(copy, copyop);
	}

	// osgParticle::AccelOperator::AccelOperator(lua_Table * data)
	static osgParticle::AccelOperator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::AccelOperator::AccelOperator(lua_Table * data) function, expected prototype:\nosgParticle::AccelOperator::AccelOperator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgParticle_AccelOperator(L,NULL);
	}

	// osgParticle::AccelOperator::AccelOperator(lua_Table * data, const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::AccelOperator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::AccelOperator::AccelOperator(lua_Table * data, const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::AccelOperator::AccelOperator(lua_Table * data, const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::AccelOperator* copy_ptr=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::AccelOperator::AccelOperator function");
		}
		const osgParticle::AccelOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::AccelOperator::AccelOperator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_AccelOperator(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::AccelOperator::AccelOperator
	static osgParticle::AccelOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function AccelOperator, cannot match any of the overloads for function AccelOperator:\n  AccelOperator()\n  AccelOperator(const osgParticle::AccelOperator &, const osg::CopyOp &)\n  AccelOperator(lua_Table *)\n  AccelOperator(lua_Table *, const osgParticle::AccelOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::AccelOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::AccelOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::AccelOperator::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::AccelOperator* self=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::AccelOperator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::AccelOperator::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::AccelOperator::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::AccelOperator::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::AccelOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::AccelOperator* self=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::AccelOperator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::AccelOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::AccelOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::AccelOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::AccelOperator* self=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::AccelOperator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::AccelOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::AccelOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::AccelOperator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::AccelOperator* self=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::AccelOperator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::AccelOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::AccelOperator::className() const function, expected prototype:\nconst char * osgParticle::AccelOperator::className() const\nClass arguments details:\n");
		}


		osgParticle::AccelOperator* self=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::AccelOperator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const osg::Vec3f & osgParticle::AccelOperator::getAcceleration() const
	static int _bind_getAcceleration(lua_State *L) {
		if (!_lg_typecheck_getAcceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::AccelOperator::getAcceleration() const function, expected prototype:\nconst osg::Vec3f & osgParticle::AccelOperator::getAcceleration() const\nClass arguments details:\n");
		}


		osgParticle::AccelOperator* self=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::AccelOperator::getAcceleration() const");
		}
		const osg::Vec3f* lret = &self->getAcceleration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::AccelOperator::setAcceleration(const osg::Vec3f & v)
	static int _bind_setAcceleration(lua_State *L) {
		if (!_lg_typecheck_setAcceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::setAcceleration(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::AccelOperator::setAcceleration(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::AccelOperator::setAcceleration function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::AccelOperator* self=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::setAcceleration(const osg::Vec3f &)");
		}
		self->setAcceleration(v);

		return 0;
	}

	// void osgParticle::AccelOperator::setToGravity(float scale = 1)
	static int _bind_setToGravity(lua_State *L) {
		if (!_lg_typecheck_setToGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::setToGravity(float scale = 1) function, expected prototype:\nvoid osgParticle::AccelOperator::setToGravity(float scale = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float scale=luatop>1 ? (float)lua_tonumber(L,2) : 1;

		osgParticle::AccelOperator* self=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::setToGravity(float)");
		}
		self->setToGravity(scale);

		return 0;
	}

	// void osgParticle::AccelOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::AccelOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::AccelOperator* self=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::operate(osgParticle::Particle *, double)");
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::AccelOperator::beginOperate(osgParticle::Program * prg)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::AccelOperator::beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Program* prg=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::AccelOperator* self=dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::beginOperate(osgParticle::Program *)");
		}
		self->beginOperate(prg);

		return 0;
	}


	// Operator binds:

};

osgParticle::AccelOperator* LunaTraits< osgParticle::AccelOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_AccelOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::AccelOperator >::_bind_dtor(osgParticle::AccelOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::AccelOperator >::className[] = "AccelOperator";
const char LunaTraits< osgParticle::AccelOperator >::fullName[] = "osgParticle::AccelOperator";
const char LunaTraits< osgParticle::AccelOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::AccelOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::AccelOperator >::hash = 6494541;
const int LunaTraits< osgParticle::AccelOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::AccelOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_AccelOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_AccelOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_AccelOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_AccelOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_AccelOperator::_bind_className},
	{"getAcceleration", &luna_wrapper_osgParticle_AccelOperator::_bind_getAcceleration},
	{"setAcceleration", &luna_wrapper_osgParticle_AccelOperator::_bind_setAcceleration},
	{"setToGravity", &luna_wrapper_osgParticle_AccelOperator::_bind_setToGravity},
	{"operate", &luna_wrapper_osgParticle_AccelOperator::_bind_operate},
	{"beginOperate", &luna_wrapper_osgParticle_AccelOperator::_bind_beginOperate},
	{"__eq", &luna_wrapper_osgParticle_AccelOperator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::AccelOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_AccelOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::AccelOperator >::enumValues[] = {
	{0,0}
};


