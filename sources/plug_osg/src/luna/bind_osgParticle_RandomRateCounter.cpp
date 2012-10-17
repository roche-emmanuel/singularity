#include <plug_common.h>

class luna_wrapper_osgParticle_RandomRateCounter {
public:
	typedef Luna< osgParticle::RandomRateCounter > luna_t;

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
		osgParticle::RandomRateCounter* ptr= dynamic_cast< osgParticle::RandomRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::RandomRateCounter >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_numParticlesToCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::RandomRateCounter::RandomRateCounter()
	static osgParticle::RandomRateCounter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::RandomRateCounter::RandomRateCounter() function, expected prototype:\nosgParticle::RandomRateCounter::RandomRateCounter()\nClass arguments details:\n");
		}


		return new osgParticle::RandomRateCounter();
	}

	// osgParticle::RandomRateCounter::RandomRateCounter(const osgParticle::RandomRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::RandomRateCounter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::RandomRateCounter::RandomRateCounter(const osgParticle::RandomRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::RandomRateCounter::RandomRateCounter(const osgParticle::RandomRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::RandomRateCounter* copy_ptr=dynamic_cast< osgParticle::RandomRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::RandomRateCounter::RandomRateCounter function");
		}
		const osgParticle::RandomRateCounter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::RandomRateCounter::RandomRateCounter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::RandomRateCounter(copy, copyop);
	}

	// Overload binder for osgParticle::RandomRateCounter::RandomRateCounter
	static osgParticle::RandomRateCounter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RandomRateCounter, cannot match any of the overloads for function RandomRateCounter:\n  RandomRateCounter()\n  RandomRateCounter(const osgParticle::RandomRateCounter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::RandomRateCounter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::RandomRateCounter::cloneType() const function, expected prototype:\nosg::Object * osgParticle::RandomRateCounter::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::RandomRateCounter* self=dynamic_cast< osgParticle::RandomRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::RandomRateCounter::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::RandomRateCounter::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::RandomRateCounter::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::RandomRateCounter::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::RandomRateCounter::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::RandomRateCounter* self=dynamic_cast< osgParticle::RandomRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::RandomRateCounter::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::RandomRateCounter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::RandomRateCounter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::RandomRateCounter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::RandomRateCounter* self=dynamic_cast< osgParticle::RandomRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::RandomRateCounter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::RandomRateCounter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::RandomRateCounter::libraryName() const function, expected prototype:\nconst char * osgParticle::RandomRateCounter::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::RandomRateCounter* self=dynamic_cast< osgParticle::RandomRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::RandomRateCounter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::RandomRateCounter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::RandomRateCounter::className() const function, expected prototype:\nconst char * osgParticle::RandomRateCounter::className() const\nClass arguments details:\n");
		}


		osgParticle::RandomRateCounter* self=dynamic_cast< osgParticle::RandomRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::RandomRateCounter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osgParticle::RandomRateCounter::numParticlesToCreate(double dt) const
	static int _bind_numParticlesToCreate(lua_State *L) {
		if (!_lg_typecheck_numParticlesToCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgParticle::RandomRateCounter::numParticlesToCreate(double dt) const function, expected prototype:\nint osgParticle::RandomRateCounter::numParticlesToCreate(double dt) const\nClass arguments details:\n");
		}

		double dt=(double)lua_tonumber(L,2);

		osgParticle::RandomRateCounter* self=dynamic_cast< osgParticle::RandomRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgParticle::RandomRateCounter::numParticlesToCreate(double) const");
		}
		int lret = self->numParticlesToCreate(dt);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgParticle::RandomRateCounter* LunaTraits< osgParticle::RandomRateCounter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_RandomRateCounter::_bind_ctor(L);
}

void LunaTraits< osgParticle::RandomRateCounter >::_bind_dtor(osgParticle::RandomRateCounter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::RandomRateCounter >::className[] = "RandomRateCounter";
const char LunaTraits< osgParticle::RandomRateCounter >::fullName[] = "osgParticle::RandomRateCounter";
const char LunaTraits< osgParticle::RandomRateCounter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::RandomRateCounter >::parents[] = {"osgParticle.VariableRateCounter", 0};
const int LunaTraits< osgParticle::RandomRateCounter >::hash = 39423889;
const int LunaTraits< osgParticle::RandomRateCounter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::RandomRateCounter >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_RandomRateCounter::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_RandomRateCounter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_RandomRateCounter::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_RandomRateCounter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_RandomRateCounter::_bind_className},
	{"numParticlesToCreate", &luna_wrapper_osgParticle_RandomRateCounter::_bind_numParticlesToCreate},
	{"__eq", &luna_wrapper_osgParticle_RandomRateCounter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::RandomRateCounter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_RandomRateCounter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::RandomRateCounter >::enumValues[] = {
	{0,0}
};


