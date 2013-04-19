#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_Timer.h>

class luna_wrapper_sgt_Timer {
public:
	typedef Luna< sgt::Timer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<sgt::Timer,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44969924) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::Timer*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Timer* rhs =(Luna< sgt::Timer >::check(L,2));
		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Timer* self= (sgt::Timer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::Timer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44969924) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::Timer");
		
		return luna_dynamicCast(L,converters,"sgt::Timer",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_start(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAvgTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumCycles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinDuration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxDuration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDateTimeString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDateString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeOfTheDayString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_start(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAvgTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::Timer::Timer()
	static sgt::Timer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Timer::Timer() function, expected prototype:\nsgt::Timer::Timer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::Timer();
	}

	// sgt::Timer::Timer(lua_Table * data)
	static sgt::Timer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Timer::Timer(lua_Table * data) function, expected prototype:\nsgt::Timer::Timer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_sgt_Timer(L,NULL);
	}

	// Overload binder for sgt::Timer::Timer
	static sgt::Timer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Timer, cannot match any of the overloads for function Timer:\n  Timer()\n  Timer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// double sgt::Timer::start()
	static int _bind_start(lua_State *L) {
		if (!_lg_typecheck_start(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::Timer::start() function, expected prototype:\ndouble sgt::Timer::start()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::Timer::start(). Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->start();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::Timer::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::Timer::end() function, expected prototype:\ndouble sgt::Timer::end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::Timer::end(). Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->end();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::Timer::getTime()
	static int _bind_getTime(lua_State *L) {
		if (!_lg_typecheck_getTime(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::Timer::getTime() function, expected prototype:\ndouble sgt::Timer::getTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::Timer::getTime(). Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::Timer::getAvgTime()
	static int _bind_getAvgTime(lua_State *L) {
		if (!_lg_typecheck_getAvgTime(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::Timer::getAvgTime() function, expected prototype:\ndouble sgt::Timer::getAvgTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::Timer::getAvgTime(). Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getAvgTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::Timer::getNumCycles() const
	static int _bind_getNumCycles(lua_State *L) {
		if (!_lg_typecheck_getNumCycles(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::Timer::getNumCycles() const function, expected prototype:\nint sgt::Timer::getNumCycles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::Timer::getNumCycles() const. Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumCycles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::Timer::getMinDuration() const
	static int _bind_getMinDuration(lua_State *L) {
		if (!_lg_typecheck_getMinDuration(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::Timer::getMinDuration() const function, expected prototype:\ndouble sgt::Timer::getMinDuration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::Timer::getMinDuration() const. Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMinDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::Timer::getMaxDuration() const
	static int _bind_getMaxDuration(lua_State *L) {
		if (!_lg_typecheck_getMaxDuration(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::Timer::getMaxDuration() const function, expected prototype:\ndouble sgt::Timer::getMaxDuration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::Timer::getMaxDuration() const. Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMaxDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::Timer::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::Timer::reset() function, expected prototype:\nvoid sgt::Timer::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::Timer::reset(). Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// static void sgt::Timer::getDateTimeString(char * buffer, int bufSize)
	static int _bind_getDateTimeString(lua_State *L) {
		if (!_lg_typecheck_getDateTimeString(L)) {
			luaL_error(L, "luna typecheck failed in static void sgt::Timer::getDateTimeString(char * buffer, int bufSize) function, expected prototype:\nstatic void sgt::Timer::getDateTimeString(char * buffer, int bufSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char* buffer=(char*)Luna< void >::check(L,1);
		int bufSize=(int)lua_tointeger(L,2);

		sgt::Timer::getDateTimeString(buffer, bufSize);

		return 0;
	}

	// static void sgt::Timer::getDateString(char * buffer, int bufSize)
	static int _bind_getDateString(lua_State *L) {
		if (!_lg_typecheck_getDateString(L)) {
			luaL_error(L, "luna typecheck failed in static void sgt::Timer::getDateString(char * buffer, int bufSize) function, expected prototype:\nstatic void sgt::Timer::getDateString(char * buffer, int bufSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char* buffer=(char*)Luna< void >::check(L,1);
		int bufSize=(int)lua_tointeger(L,2);

		sgt::Timer::getDateString(buffer, bufSize);

		return 0;
	}

	// static void sgt::Timer::getTimeOfTheDayString(char * buffer, int bufSize)
	static int _bind_getTimeOfTheDayString(lua_State *L) {
		if (!_lg_typecheck_getTimeOfTheDayString(L)) {
			luaL_error(L, "luna typecheck failed in static void sgt::Timer::getTimeOfTheDayString(char * buffer, int bufSize) function, expected prototype:\nstatic void sgt::Timer::getTimeOfTheDayString(char * buffer, int bufSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char* buffer=(char*)Luna< void >::check(L,1);
		int bufSize=(int)lua_tointeger(L,2);

		sgt::Timer::getTimeOfTheDayString(buffer, bufSize);

		return 0;
	}

	// double sgt::Timer::base_start()
	static int _bind_base_start(lua_State *L) {
		if (!_lg_typecheck_base_start(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::Timer::base_start() function, expected prototype:\ndouble sgt::Timer::base_start()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::Timer::base_start(). Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Timer::start();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::Timer::base_end()
	static int _bind_base_end(lua_State *L) {
		if (!_lg_typecheck_base_end(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::Timer::base_end() function, expected prototype:\ndouble sgt::Timer::base_end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::Timer::base_end(). Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Timer::end();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::Timer::base_getTime()
	static int _bind_base_getTime(lua_State *L) {
		if (!_lg_typecheck_base_getTime(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::Timer::base_getTime() function, expected prototype:\ndouble sgt::Timer::base_getTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::Timer::base_getTime(). Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Timer::getTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::Timer::base_getAvgTime()
	static int _bind_base_getAvgTime(lua_State *L) {
		if (!_lg_typecheck_base_getAvgTime(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::Timer::base_getAvgTime() function, expected prototype:\ndouble sgt::Timer::base_getAvgTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::Timer::base_getAvgTime(). Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Timer::getAvgTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::Timer::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::Timer::base_reset() function, expected prototype:\nvoid sgt::Timer::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Timer* self=(Luna< sgt::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::Timer::base_reset(). Got : '%s'\n%s",typeid(Luna< sgt::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Timer::reset();

		return 0;
	}


	// Operator binds:

};

sgt::Timer* LunaTraits< sgt::Timer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_Timer::_bind_ctor(L);
}

void LunaTraits< sgt::Timer >::_bind_dtor(sgt::Timer* obj) {
	delete obj;
}

const char LunaTraits< sgt::Timer >::className[] = "Timer";
const char LunaTraits< sgt::Timer >::fullName[] = "sgt::Timer";
const char LunaTraits< sgt::Timer >::moduleName[] = "sgt";
const char* LunaTraits< sgt::Timer >::parents[] = {0};
const int LunaTraits< sgt::Timer >::hash = 44969924;
const int LunaTraits< sgt::Timer >::uniqueIDs[] = {44969924,0};

luna_RegType LunaTraits< sgt::Timer >::methods[] = {
	{"start", &luna_wrapper_sgt_Timer::_bind_start},
	{"end", &luna_wrapper_sgt_Timer::_bind_end},
	{"getTime", &luna_wrapper_sgt_Timer::_bind_getTime},
	{"getAvgTime", &luna_wrapper_sgt_Timer::_bind_getAvgTime},
	{"getNumCycles", &luna_wrapper_sgt_Timer::_bind_getNumCycles},
	{"getMinDuration", &luna_wrapper_sgt_Timer::_bind_getMinDuration},
	{"getMaxDuration", &luna_wrapper_sgt_Timer::_bind_getMaxDuration},
	{"reset", &luna_wrapper_sgt_Timer::_bind_reset},
	{"getDateTimeString", &luna_wrapper_sgt_Timer::_bind_getDateTimeString},
	{"getDateString", &luna_wrapper_sgt_Timer::_bind_getDateString},
	{"getTimeOfTheDayString", &luna_wrapper_sgt_Timer::_bind_getTimeOfTheDayString},
	{"base_start", &luna_wrapper_sgt_Timer::_bind_base_start},
	{"base_end", &luna_wrapper_sgt_Timer::_bind_base_end},
	{"base_getTime", &luna_wrapper_sgt_Timer::_bind_base_getTime},
	{"base_getAvgTime", &luna_wrapper_sgt_Timer::_bind_base_getAvgTime},
	{"base_reset", &luna_wrapper_sgt_Timer::_bind_base_reset},
	{"dynCast", &luna_wrapper_sgt_Timer::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_Timer::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_Timer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_Timer::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_Timer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Timer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Timer >::enumValues[] = {
	{0,0}
};


