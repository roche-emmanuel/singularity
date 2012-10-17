#include <plug_common.h>

class luna_wrapper_osgParticle_ConstantRateCounter {
public:
	typedef Luna< osgParticle::ConstantRateCounter > luna_t;

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
		osgParticle::ConstantRateCounter* ptr= dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ConstantRateCounter >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setMinimumNumberOfParticlesToCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinimumNumberOfParticlesToCreate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumberOfParticlesPerSecondToCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberOfParticlesPerSecondToCreate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_numParticlesToCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ConstantRateCounter::ConstantRateCounter()
	static osgParticle::ConstantRateCounter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ConstantRateCounter::ConstantRateCounter() function, expected prototype:\nosgParticle::ConstantRateCounter::ConstantRateCounter()\nClass arguments details:\n");
		}


		return new osgParticle::ConstantRateCounter();
	}

	// osgParticle::ConstantRateCounter::ConstantRateCounter(const osgParticle::ConstantRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ConstantRateCounter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ConstantRateCounter::ConstantRateCounter(const osgParticle::ConstantRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ConstantRateCounter::ConstantRateCounter(const osgParticle::ConstantRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ConstantRateCounter* copy_ptr=dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ConstantRateCounter::ConstantRateCounter function");
		}
		const osgParticle::ConstantRateCounter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ConstantRateCounter::ConstantRateCounter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ConstantRateCounter(copy, copyop);
	}

	// Overload binder for osgParticle::ConstantRateCounter::ConstantRateCounter
	static osgParticle::ConstantRateCounter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ConstantRateCounter, cannot match any of the overloads for function ConstantRateCounter:\n  ConstantRateCounter()\n  ConstantRateCounter(const osgParticle::ConstantRateCounter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ConstantRateCounter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConstantRateCounter::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ConstantRateCounter::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::ConstantRateCounter* self=dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConstantRateCounter::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ConstantRateCounter::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConstantRateCounter::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::ConstantRateCounter::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ConstantRateCounter::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::ConstantRateCounter* self=dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConstantRateCounter::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ConstantRateCounter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ConstantRateCounter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ConstantRateCounter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ConstantRateCounter* self=dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ConstantRateCounter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ConstantRateCounter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConstantRateCounter::libraryName() const function, expected prototype:\nconst char * osgParticle::ConstantRateCounter::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ConstantRateCounter* self=dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConstantRateCounter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ConstantRateCounter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConstantRateCounter::className() const function, expected prototype:\nconst char * osgParticle::ConstantRateCounter::className() const\nClass arguments details:\n");
		}


		osgParticle::ConstantRateCounter* self=dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConstantRateCounter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ConstantRateCounter::setMinimumNumberOfParticlesToCreate(int minNumToCreate)
	static int _bind_setMinimumNumberOfParticlesToCreate(lua_State *L) {
		if (!_lg_typecheck_setMinimumNumberOfParticlesToCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ConstantRateCounter::setMinimumNumberOfParticlesToCreate(int minNumToCreate) function, expected prototype:\nvoid osgParticle::ConstantRateCounter::setMinimumNumberOfParticlesToCreate(int minNumToCreate)\nClass arguments details:\n");
		}

		int minNumToCreate=(int)lua_tointeger(L,2);

		osgParticle::ConstantRateCounter* self=dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ConstantRateCounter::setMinimumNumberOfParticlesToCreate(int)");
		}
		self->setMinimumNumberOfParticlesToCreate(minNumToCreate);

		return 0;
	}

	// int osgParticle::ConstantRateCounter::getMinimumNumberOfParticlesToCreate() const
	static int _bind_getMinimumNumberOfParticlesToCreate(lua_State *L) {
		if (!_lg_typecheck_getMinimumNumberOfParticlesToCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgParticle::ConstantRateCounter::getMinimumNumberOfParticlesToCreate() const function, expected prototype:\nint osgParticle::ConstantRateCounter::getMinimumNumberOfParticlesToCreate() const\nClass arguments details:\n");
		}


		osgParticle::ConstantRateCounter* self=dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgParticle::ConstantRateCounter::getMinimumNumberOfParticlesToCreate() const");
		}
		int lret = self->getMinimumNumberOfParticlesToCreate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ConstantRateCounter::setNumberOfParticlesPerSecondToCreate(double numPerSecond)
	static int _bind_setNumberOfParticlesPerSecondToCreate(lua_State *L) {
		if (!_lg_typecheck_setNumberOfParticlesPerSecondToCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ConstantRateCounter::setNumberOfParticlesPerSecondToCreate(double numPerSecond) function, expected prototype:\nvoid osgParticle::ConstantRateCounter::setNumberOfParticlesPerSecondToCreate(double numPerSecond)\nClass arguments details:\n");
		}

		double numPerSecond=(double)lua_tonumber(L,2);

		osgParticle::ConstantRateCounter* self=dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ConstantRateCounter::setNumberOfParticlesPerSecondToCreate(double)");
		}
		self->setNumberOfParticlesPerSecondToCreate(numPerSecond);

		return 0;
	}

	// double osgParticle::ConstantRateCounter::getNumberOfParticlesPerSecondToCreate() const
	static int _bind_getNumberOfParticlesPerSecondToCreate(lua_State *L) {
		if (!_lg_typecheck_getNumberOfParticlesPerSecondToCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgParticle::ConstantRateCounter::getNumberOfParticlesPerSecondToCreate() const function, expected prototype:\ndouble osgParticle::ConstantRateCounter::getNumberOfParticlesPerSecondToCreate() const\nClass arguments details:\n");
		}


		osgParticle::ConstantRateCounter* self=dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgParticle::ConstantRateCounter::getNumberOfParticlesPerSecondToCreate() const");
		}
		double lret = self->getNumberOfParticlesPerSecondToCreate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgParticle::ConstantRateCounter::numParticlesToCreate(double dt) const
	static int _bind_numParticlesToCreate(lua_State *L) {
		if (!_lg_typecheck_numParticlesToCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgParticle::ConstantRateCounter::numParticlesToCreate(double dt) const function, expected prototype:\nint osgParticle::ConstantRateCounter::numParticlesToCreate(double dt) const\nClass arguments details:\n");
		}

		double dt=(double)lua_tonumber(L,2);

		osgParticle::ConstantRateCounter* self=dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgParticle::ConstantRateCounter::numParticlesToCreate(double) const");
		}
		int lret = self->numParticlesToCreate(dt);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgParticle::ConstantRateCounter* LunaTraits< osgParticle::ConstantRateCounter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ConstantRateCounter::_bind_ctor(L);
}

void LunaTraits< osgParticle::ConstantRateCounter >::_bind_dtor(osgParticle::ConstantRateCounter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ConstantRateCounter >::className[] = "ConstantRateCounter";
const char LunaTraits< osgParticle::ConstantRateCounter >::fullName[] = "osgParticle::ConstantRateCounter";
const char LunaTraits< osgParticle::ConstantRateCounter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ConstantRateCounter >::parents[] = {"osgParticle.Counter", 0};
const int LunaTraits< osgParticle::ConstantRateCounter >::hash = 65979983;
const int LunaTraits< osgParticle::ConstantRateCounter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ConstantRateCounter >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_className},
	{"setMinimumNumberOfParticlesToCreate", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_setMinimumNumberOfParticlesToCreate},
	{"getMinimumNumberOfParticlesToCreate", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_getMinimumNumberOfParticlesToCreate},
	{"setNumberOfParticlesPerSecondToCreate", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_setNumberOfParticlesPerSecondToCreate},
	{"getNumberOfParticlesPerSecondToCreate", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_getNumberOfParticlesPerSecondToCreate},
	{"numParticlesToCreate", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_numParticlesToCreate},
	{"__eq", &luna_wrapper_osgParticle_ConstantRateCounter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ConstantRateCounter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ConstantRateCounter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ConstantRateCounter >::enumValues[] = {
	{0,0}
};


