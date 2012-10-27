#include <plug_common.h>

class luna_wrapper_osgParticle_VariableRateCounter {
public:
	typedef Luna< osgParticle::VariableRateCounter > luna_t;

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
		osgParticle::VariableRateCounter* ptr= dynamic_cast< osgParticle::VariableRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::VariableRateCounter >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRateRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRateRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13510606) ) return false;
		if( (!dynamic_cast< osgParticle::rangef* >(Luna< osgParticle::rangef >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRateRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::VariableRateCounter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::VariableRateCounter::libraryName() const function, expected prototype:\nconst char * osgParticle::VariableRateCounter::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::VariableRateCounter* self=dynamic_cast< osgParticle::VariableRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::VariableRateCounter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::VariableRateCounter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::VariableRateCounter::className() const function, expected prototype:\nconst char * osgParticle::VariableRateCounter::className() const\nClass arguments details:\n");
		}


		osgParticle::VariableRateCounter* self=dynamic_cast< osgParticle::VariableRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::VariableRateCounter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::VariableRateCounter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::VariableRateCounter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::VariableRateCounter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::VariableRateCounter* self=dynamic_cast< osgParticle::VariableRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::VariableRateCounter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osgParticle::rangef & osgParticle::VariableRateCounter::getRateRange() const
	static int _bind_getRateRange(lua_State *L) {
		if (!_lg_typecheck_getRateRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::VariableRateCounter::getRateRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::VariableRateCounter::getRateRange() const\nClass arguments details:\n");
		}


		osgParticle::VariableRateCounter* self=dynamic_cast< osgParticle::VariableRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::VariableRateCounter::getRateRange() const");
		}
		const osgParticle::rangef* lret = &self->getRateRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::VariableRateCounter::setRateRange(const osgParticle::rangef & r)
	static int _bind_setRateRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setRateRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::VariableRateCounter::setRateRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::VariableRateCounter::setRateRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n");
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::rangef >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::VariableRateCounter::setRateRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::VariableRateCounter* self=dynamic_cast< osgParticle::VariableRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::VariableRateCounter::setRateRange(const osgParticle::rangef &)");
		}
		self->setRateRange(r);

		return 0;
	}

	// void osgParticle::VariableRateCounter::setRateRange(float minrange, float maxrange)
	static int _bind_setRateRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setRateRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::VariableRateCounter::setRateRange(float minrange, float maxrange) function, expected prototype:\nvoid osgParticle::VariableRateCounter::setRateRange(float minrange, float maxrange)\nClass arguments details:\n");
		}

		float minrange=(float)lua_tonumber(L,2);
		float maxrange=(float)lua_tonumber(L,3);

		osgParticle::VariableRateCounter* self=dynamic_cast< osgParticle::VariableRateCounter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::VariableRateCounter::setRateRange(float, float)");
		}
		self->setRateRange(minrange, maxrange);

		return 0;
	}

	// Overload binder for osgParticle::VariableRateCounter::setRateRange
	static int _bind_setRateRange(lua_State *L) {
		if (_lg_typecheck_setRateRange_overload_1(L)) return _bind_setRateRange_overload_1(L);
		if (_lg_typecheck_setRateRange_overload_2(L)) return _bind_setRateRange_overload_2(L);

		luaL_error(L, "error in function setRateRange, cannot match any of the overloads for function setRateRange:\n  setRateRange(const osgParticle::rangef &)\n  setRateRange(float, float)\n");
		return 0;
	}


	// Operator binds:

};

osgParticle::VariableRateCounter* LunaTraits< osgParticle::VariableRateCounter >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int osgParticle::Counter::numParticlesToCreate(double dt) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osgParticle::VariableRateCounter >::_bind_dtor(osgParticle::VariableRateCounter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::VariableRateCounter >::className[] = "VariableRateCounter";
const char LunaTraits< osgParticle::VariableRateCounter >::fullName[] = "osgParticle::VariableRateCounter";
const char LunaTraits< osgParticle::VariableRateCounter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::VariableRateCounter >::parents[] = {"osgParticle.Counter", 0};
const int LunaTraits< osgParticle::VariableRateCounter >::hash = 7113933;
const int LunaTraits< osgParticle::VariableRateCounter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::VariableRateCounter >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_VariableRateCounter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_VariableRateCounter::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_VariableRateCounter::_bind_isSameKindAs},
	{"getRateRange", &luna_wrapper_osgParticle_VariableRateCounter::_bind_getRateRange},
	{"setRateRange", &luna_wrapper_osgParticle_VariableRateCounter::_bind_setRateRange},
	{"__eq", &luna_wrapper_osgParticle_VariableRateCounter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::VariableRateCounter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_VariableRateCounter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::VariableRateCounter >::enumValues[] = {
	{0,0}
};


