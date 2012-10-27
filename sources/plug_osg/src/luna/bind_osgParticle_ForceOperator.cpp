#include <plug_common.h>

class luna_wrapper_osgParticle_ForceOperator {
public:
	typedef Luna< osgParticle::ForceOperator > luna_t;

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
		osgParticle::ForceOperator* ptr= dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ForceOperator >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_getForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setForce(lua_State *L) {
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
	// osgParticle::ForceOperator::ForceOperator()
	static osgParticle::ForceOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ForceOperator::ForceOperator() function, expected prototype:\nosgParticle::ForceOperator::ForceOperator()\nClass arguments details:\n");
		}


		return new osgParticle::ForceOperator();
	}

	// osgParticle::ForceOperator::ForceOperator(const osgParticle::ForceOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ForceOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ForceOperator::ForceOperator(const osgParticle::ForceOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ForceOperator::ForceOperator(const osgParticle::ForceOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ForceOperator* copy_ptr=dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ForceOperator::ForceOperator function");
		}
		const osgParticle::ForceOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ForceOperator::ForceOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ForceOperator(copy, copyop);
	}

	// Overload binder for osgParticle::ForceOperator::ForceOperator
	static osgParticle::ForceOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ForceOperator, cannot match any of the overloads for function ForceOperator:\n  ForceOperator()\n  ForceOperator(const osgParticle::ForceOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ForceOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ForceOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ForceOperator::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::ForceOperator* self=dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ForceOperator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ForceOperator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ForceOperator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::ForceOperator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ForceOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::ForceOperator* self=dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ForceOperator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ForceOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ForceOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ForceOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ForceOperator* self=dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ForceOperator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ForceOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ForceOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::ForceOperator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ForceOperator* self=dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ForceOperator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ForceOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ForceOperator::className() const function, expected prototype:\nconst char * osgParticle::ForceOperator::className() const\nClass arguments details:\n");
		}


		osgParticle::ForceOperator* self=dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ForceOperator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const osg::Vec3f & osgParticle::ForceOperator::getForce() const
	static int _bind_getForce(lua_State *L) {
		if (!_lg_typecheck_getForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::ForceOperator::getForce() const function, expected prototype:\nconst osg::Vec3f & osgParticle::ForceOperator::getForce() const\nClass arguments details:\n");
		}


		osgParticle::ForceOperator* self=dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::ForceOperator::getForce() const");
		}
		const osg::Vec3f* lret = &self->getForce();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ForceOperator::setForce(const osg::Vec3f & f)
	static int _bind_setForce(lua_State *L) {
		if (!_lg_typecheck_setForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ForceOperator::setForce(const osg::Vec3f & f) function, expected prototype:\nvoid osgParticle::ForceOperator::setForce(const osg::Vec3f & f)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* f_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !f_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg f in osgParticle::ForceOperator::setForce function");
		}
		const osg::Vec3f & f=*f_ptr;

		osgParticle::ForceOperator* self=dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ForceOperator::setForce(const osg::Vec3f &)");
		}
		self->setForce(f);

		return 0;
	}

	// void osgParticle::ForceOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ForceOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::ForceOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::ForceOperator* self=dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ForceOperator::operate(osgParticle::Particle *, double)");
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::ForceOperator::beginOperate(osgParticle::Program * prg)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ForceOperator::beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::ForceOperator::beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Program* prg=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ForceOperator* self=dynamic_cast< osgParticle::ForceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ForceOperator::beginOperate(osgParticle::Program *)");
		}
		self->beginOperate(prg);

		return 0;
	}


	// Operator binds:

};

osgParticle::ForceOperator* LunaTraits< osgParticle::ForceOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ForceOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::ForceOperator >::_bind_dtor(osgParticle::ForceOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ForceOperator >::className[] = "ForceOperator";
const char LunaTraits< osgParticle::ForceOperator >::fullName[] = "osgParticle::ForceOperator";
const char LunaTraits< osgParticle::ForceOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ForceOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::ForceOperator >::hash = 86276304;
const int LunaTraits< osgParticle::ForceOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ForceOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ForceOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ForceOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ForceOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_ForceOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ForceOperator::_bind_className},
	{"getForce", &luna_wrapper_osgParticle_ForceOperator::_bind_getForce},
	{"setForce", &luna_wrapper_osgParticle_ForceOperator::_bind_setForce},
	{"operate", &luna_wrapper_osgParticle_ForceOperator::_bind_operate},
	{"beginOperate", &luna_wrapper_osgParticle_ForceOperator::_bind_beginOperate},
	{"__eq", &luna_wrapper_osgParticle_ForceOperator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ForceOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ForceOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ForceOperator >::enumValues[] = {
	{0,0}
};


