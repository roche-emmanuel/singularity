#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_FrameStamp.h>

class luna_wrapper_osg_FrameStamp {
public:
	typedef Luna< osg::FrameStamp > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osg::FrameStamp* ptr= dynamic_cast< osg::FrameStamp* >(Luna< osg::Referenced >::check(L,1));
		osg::FrameStamp* ptr= luna_caster< osg::Referenced, osg::FrameStamp >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FrameStamp >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSimulationTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSimulationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::FrameStamp::FrameStamp()
	static osg::FrameStamp* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrameStamp::FrameStamp() function, expected prototype:\nosg::FrameStamp::FrameStamp()\nClass arguments details:\n");
		}


		return new osg::FrameStamp();
	}

	// osg::FrameStamp::FrameStamp(const osg::FrameStamp & fs)
	static osg::FrameStamp* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrameStamp::FrameStamp(const osg::FrameStamp & fs) function, expected prototype:\nosg::FrameStamp::FrameStamp(const osg::FrameStamp & fs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::FrameStamp* fs_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1));
		if( !fs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fs in osg::FrameStamp::FrameStamp function");
		}
		const osg::FrameStamp & fs=*fs_ptr;

		return new osg::FrameStamp(fs);
	}

	// osg::FrameStamp::FrameStamp(lua_Table * data)
	static osg::FrameStamp* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrameStamp::FrameStamp(lua_Table * data) function, expected prototype:\nosg::FrameStamp::FrameStamp(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_FrameStamp(L,NULL);
	}

	// osg::FrameStamp::FrameStamp(lua_Table * data, const osg::FrameStamp & fs)
	static osg::FrameStamp* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrameStamp::FrameStamp(lua_Table * data, const osg::FrameStamp & fs) function, expected prototype:\nosg::FrameStamp::FrameStamp(lua_Table * data, const osg::FrameStamp & fs)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		const osg::FrameStamp* fs_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));
		if( !fs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fs in osg::FrameStamp::FrameStamp function");
		}
		const osg::FrameStamp & fs=*fs_ptr;

		return new wrapper_osg_FrameStamp(L,NULL, fs);
	}

	// Overload binder for osg::FrameStamp::FrameStamp
	static osg::FrameStamp* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FrameStamp, cannot match any of the overloads for function FrameStamp:\n  FrameStamp()\n  FrameStamp(const osg::FrameStamp &)\n  FrameStamp(lua_Table *)\n  FrameStamp(lua_Table *, const osg::FrameStamp &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::FrameStamp::setFrameNumber(unsigned int fnum)
	static int _bind_setFrameNumber(lua_State *L) {
		if (!_lg_typecheck_setFrameNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FrameStamp::setFrameNumber(unsigned int fnum) function, expected prototype:\nvoid osg::FrameStamp::setFrameNumber(unsigned int fnum)\nClass arguments details:\n");
		}

		unsigned int fnum=(unsigned int)lua_tointeger(L,2);

		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FrameStamp::setFrameNumber(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setFrameNumber(fnum);

		return 0;
	}

	// unsigned int osg::FrameStamp::getFrameNumber() const
	static int _bind_getFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getFrameNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::FrameStamp::getFrameNumber() const function, expected prototype:\nunsigned int osg::FrameStamp::getFrameNumber() const\nClass arguments details:\n");
		}


		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::FrameStamp::getFrameNumber() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getFrameNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrameStamp::setReferenceTime(double refTime)
	static int _bind_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_setReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FrameStamp::setReferenceTime(double refTime) function, expected prototype:\nvoid osg::FrameStamp::setReferenceTime(double refTime)\nClass arguments details:\n");
		}

		double refTime=(double)lua_tonumber(L,2);

		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FrameStamp::setReferenceTime(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setReferenceTime(refTime);

		return 0;
	}

	// double osg::FrameStamp::getReferenceTime() const
	static int _bind_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_getReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::FrameStamp::getReferenceTime() const function, expected prototype:\ndouble osg::FrameStamp::getReferenceTime() const\nClass arguments details:\n");
		}


		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::FrameStamp::getReferenceTime() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrameStamp::setSimulationTime(double refTime)
	static int _bind_setSimulationTime(lua_State *L) {
		if (!_lg_typecheck_setSimulationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FrameStamp::setSimulationTime(double refTime) function, expected prototype:\nvoid osg::FrameStamp::setSimulationTime(double refTime)\nClass arguments details:\n");
		}

		double refTime=(double)lua_tonumber(L,2);

		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FrameStamp::setSimulationTime(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setSimulationTime(refTime);

		return 0;
	}

	// double osg::FrameStamp::getSimulationTime() const
	static int _bind_getSimulationTime(lua_State *L) {
		if (!_lg_typecheck_getSimulationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::FrameStamp::getSimulationTime() const function, expected prototype:\ndouble osg::FrameStamp::getSimulationTime() const\nClass arguments details:\n");
		}


		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::FrameStamp::getSimulationTime() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->getSimulationTime();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::FrameStamp* LunaTraits< osg::FrameStamp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FrameStamp::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::FrameStamp >::_bind_dtor(osg::FrameStamp* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FrameStamp >::className[] = "FrameStamp";
const char LunaTraits< osg::FrameStamp >::fullName[] = "osg::FrameStamp";
const char LunaTraits< osg::FrameStamp >::moduleName[] = "osg";
const char* LunaTraits< osg::FrameStamp >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::FrameStamp >::hash = 50044858;
const int LunaTraits< osg::FrameStamp >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FrameStamp >::methods[] = {
	{"setFrameNumber", &luna_wrapper_osg_FrameStamp::_bind_setFrameNumber},
	{"getFrameNumber", &luna_wrapper_osg_FrameStamp::_bind_getFrameNumber},
	{"setReferenceTime", &luna_wrapper_osg_FrameStamp::_bind_setReferenceTime},
	{"getReferenceTime", &luna_wrapper_osg_FrameStamp::_bind_getReferenceTime},
	{"setSimulationTime", &luna_wrapper_osg_FrameStamp::_bind_setSimulationTime},
	{"getSimulationTime", &luna_wrapper_osg_FrameStamp::_bind_getSimulationTime},
	{"__eq", &luna_wrapper_osg_FrameStamp::_bind___eq},
	{"getTable", &luna_wrapper_osg_FrameStamp::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FrameStamp >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FrameStamp::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FrameStamp >::enumValues[] = {
	{0,0}
};


