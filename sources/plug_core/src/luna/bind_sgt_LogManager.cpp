#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_LogManager.h>

class luna_wrapper_sgt_LogManager {
public:
	typedef Luna< sgt::LogManager > luna_t;

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
		//sgt::LogManager* ptr= dynamic_cast< sgt::LogManager* >(Luna< osg::Referenced >::check(L,1));
		sgt::LogManager* ptr= luna_caster< osg::Referenced, sgt::LogManager >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::LogManager >::push(L,ptr,false);
		return 1;
	};


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
	inline static bool _lg_typecheck_log(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLevelFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLevelFlags(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addLevelFlags(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeLevelFlags(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTraceFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTraceFlags(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addSink(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeSink(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSink(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNotifyLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNotifyLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVerbose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVerbose(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLevelString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeStamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultTraceFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultLevelFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_instance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_destroy(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::LogManager::LogManager()
	static sgt::LogManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::LogManager::LogManager() function, expected prototype:\nsgt::LogManager::LogManager()\nClass arguments details:\n");
		}


		return new sgt::LogManager();
	}

	// sgt::LogManager::LogManager(lua_Table * data)
	static sgt::LogManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::LogManager::LogManager(lua_Table * data) function, expected prototype:\nsgt::LogManager::LogManager(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_sgt_LogManager(L,NULL);
	}

	// Overload binder for sgt::LogManager::LogManager
	static sgt::LogManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LogManager, cannot match any of the overloads for function LogManager:\n  LogManager()\n  LogManager(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void sgt::LogManager::log(int level, std::string trace, std::string msg)
	static int _bind_log(lua_State *L) {
		if (!_lg_typecheck_log(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::log(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::LogManager::log(int level, std::string trace, std::string msg)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogManager::log(int, std::string, std::string)");
		}
		self->log(level, trace, msg);

		return 0;
	}

	// int sgt::LogManager::getLevelFlags(int level)
	static int _bind_getLevelFlags(lua_State *L) {
		if (!_lg_typecheck_getLevelFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::LogManager::getLevelFlags(int level) function, expected prototype:\nint sgt::LogManager::getLevelFlags(int level)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::LogManager::getLevelFlags(int)");
		}
		int lret = self->getLevelFlags(level);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::LogManager::setLevelFlags(int level, int flags)
	static int _bind_setLevelFlags(lua_State *L) {
		if (!_lg_typecheck_setLevelFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::setLevelFlags(int level, int flags) function, expected prototype:\nvoid sgt::LogManager::setLevelFlags(int level, int flags)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);
		int flags=(int)lua_tointeger(L,3);

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogManager::setLevelFlags(int, int)");
		}
		self->setLevelFlags(level, flags);

		return 0;
	}

	// void sgt::LogManager::addLevelFlags(int level, int flags)
	static int _bind_addLevelFlags(lua_State *L) {
		if (!_lg_typecheck_addLevelFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::addLevelFlags(int level, int flags) function, expected prototype:\nvoid sgt::LogManager::addLevelFlags(int level, int flags)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);
		int flags=(int)lua_tointeger(L,3);

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogManager::addLevelFlags(int, int)");
		}
		self->addLevelFlags(level, flags);

		return 0;
	}

	// void sgt::LogManager::removeLevelFlags(int level, int flags)
	static int _bind_removeLevelFlags(lua_State *L) {
		if (!_lg_typecheck_removeLevelFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::removeLevelFlags(int level, int flags) function, expected prototype:\nvoid sgt::LogManager::removeLevelFlags(int level, int flags)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);
		int flags=(int)lua_tointeger(L,3);

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogManager::removeLevelFlags(int, int)");
		}
		self->removeLevelFlags(level, flags);

		return 0;
	}

	// int sgt::LogManager::getTraceFlags(std::string trace)
	static int _bind_getTraceFlags(lua_State *L) {
		if (!_lg_typecheck_getTraceFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::LogManager::getTraceFlags(std::string trace) function, expected prototype:\nint sgt::LogManager::getTraceFlags(std::string trace)\nClass arguments details:\n");
		}

		std::string trace(lua_tostring(L,2),lua_objlen(L,2));

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::LogManager::getTraceFlags(std::string)");
		}
		int lret = self->getTraceFlags(trace);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::LogManager::setTraceFlags(std::string trace, int flags)
	static int _bind_setTraceFlags(lua_State *L) {
		if (!_lg_typecheck_setTraceFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::setTraceFlags(std::string trace, int flags) function, expected prototype:\nvoid sgt::LogManager::setTraceFlags(std::string trace, int flags)\nClass arguments details:\n");
		}

		std::string trace(lua_tostring(L,2),lua_objlen(L,2));
		int flags=(int)lua_tointeger(L,3);

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogManager::setTraceFlags(std::string, int)");
		}
		self->setTraceFlags(trace, flags);

		return 0;
	}

	// void sgt::LogManager::addSink(sgt::LogSink * sink)
	static int _bind_addSink(lua_State *L) {
		if (!_lg_typecheck_addSink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::addSink(sgt::LogSink * sink) function, expected prototype:\nvoid sgt::LogManager::addSink(sgt::LogSink * sink)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		sgt::LogSink* sink=(Luna< osg::Referenced >::checkSubType< sgt::LogSink >(L,2));

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogManager::addSink(sgt::LogSink *)");
		}
		self->addSink(sink);

		return 0;
	}

	// bool sgt::LogManager::removeSink(const std::string & name)
	static int _bind_removeSink(lua_State *L) {
		if (!_lg_typecheck_removeSink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::LogManager::removeSink(const std::string & name) function, expected prototype:\nbool sgt::LogManager::removeSink(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::LogManager::removeSink(const std::string &)");
		}
		bool lret = self->removeSink(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::LogSink * sgt::LogManager::getSink(const std::string & name)
	static int _bind_getSink(lua_State *L) {
		if (!_lg_typecheck_getSink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::LogSink * sgt::LogManager::getSink(const std::string & name) function, expected prototype:\nsgt::LogSink * sgt::LogManager::getSink(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::LogSink * sgt::LogManager::getSink(const std::string &)");
		}
		sgt::LogSink * lret = self->getSink(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::LogSink >::push(L,lret,false);

		return 1;
	}

	// int sgt::LogManager::getNotifyLevel()
	static int _bind_getNotifyLevel(lua_State *L) {
		if (!_lg_typecheck_getNotifyLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::LogManager::getNotifyLevel() function, expected prototype:\nint sgt::LogManager::getNotifyLevel()\nClass arguments details:\n");
		}


		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::LogManager::getNotifyLevel()");
		}
		int lret = self->getNotifyLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::LogManager::setNotifyLevel(int level)
	static int _bind_setNotifyLevel(lua_State *L) {
		if (!_lg_typecheck_setNotifyLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::setNotifyLevel(int level) function, expected prototype:\nvoid sgt::LogManager::setNotifyLevel(int level)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogManager::setNotifyLevel(int)");
		}
		self->setNotifyLevel(level);

		return 0;
	}

	// bool sgt::LogManager::getVerbose()
	static int _bind_getVerbose(lua_State *L) {
		if (!_lg_typecheck_getVerbose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::LogManager::getVerbose() function, expected prototype:\nbool sgt::LogManager::getVerbose()\nClass arguments details:\n");
		}


		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::LogManager::getVerbose()");
		}
		bool lret = self->getVerbose();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::LogManager::setVerbose(bool verbose)
	static int _bind_setVerbose(lua_State *L) {
		if (!_lg_typecheck_setVerbose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::setVerbose(bool verbose) function, expected prototype:\nvoid sgt::LogManager::setVerbose(bool verbose)\nClass arguments details:\n");
		}

		bool verbose=(bool)(lua_toboolean(L,2)==1);

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogManager::setVerbose(bool)");
		}
		self->setVerbose(verbose);

		return 0;
	}

	// std::string sgt::LogManager::getLevelString(int level)
	static int _bind_getLevelString(lua_State *L) {
		if (!_lg_typecheck_getLevelString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string sgt::LogManager::getLevelString(int level) function, expected prototype:\nstd::string sgt::LogManager::getLevelString(int level)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string sgt::LogManager::getLevelString(int)");
		}
		std::string lret = self->getLevelString(level);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string sgt::LogManager::getTimeStamp()
	static int _bind_getTimeStamp(lua_State *L) {
		if (!_lg_typecheck_getTimeStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string sgt::LogManager::getTimeStamp() function, expected prototype:\nstd::string sgt::LogManager::getTimeStamp()\nClass arguments details:\n");
		}


		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string sgt::LogManager::getTimeStamp()");
		}
		std::string lret = self->getTimeStamp();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void sgt::LogManager::setDefaultTraceFlags(int val)
	static int _bind_setDefaultTraceFlags(lua_State *L) {
		if (!_lg_typecheck_setDefaultTraceFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::setDefaultTraceFlags(int val) function, expected prototype:\nvoid sgt::LogManager::setDefaultTraceFlags(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogManager::setDefaultTraceFlags(int)");
		}
		self->setDefaultTraceFlags(val);

		return 0;
	}

	// void sgt::LogManager::setDefaultLevelFlags(int val)
	static int _bind_setDefaultLevelFlags(lua_State *L) {
		if (!_lg_typecheck_setDefaultLevelFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::setDefaultLevelFlags(int val) function, expected prototype:\nvoid sgt::LogManager::setDefaultLevelFlags(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogManager::setDefaultLevelFlags(int)");
		}
		self->setDefaultLevelFlags(val);

		return 0;
	}

	// static sgt::LogManager & sgt::LogManager::instance()
	static int _bind_instance(lua_State *L) {
		if (!_lg_typecheck_instance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::LogManager & sgt::LogManager::instance() function, expected prototype:\nstatic sgt::LogManager & sgt::LogManager::instance()\nClass arguments details:\n");
		}


		const sgt::LogManager* lret = &sgt::LogManager::instance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::LogManager >::push(L,lret,false);

		return 1;
	}

	// static void sgt::LogManager::destroy()
	static int _bind_destroy(lua_State *L) {
		if (!_lg_typecheck_destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void sgt::LogManager::destroy() function, expected prototype:\nstatic void sgt::LogManager::destroy()\nClass arguments details:\n");
		}


		sgt::LogManager::destroy();

		return 0;
	}

	// void sgt::LogManager::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid sgt::LogManager::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		sgt::LogManager* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::LogManager::base_setThreadSafeRefUnref(bool)");
		}
		self->LogManager::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

sgt::LogManager* LunaTraits< sgt::LogManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_LogManager::_bind_ctor(L);
}

void LunaTraits< sgt::LogManager >::_bind_dtor(sgt::LogManager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::LogManager >::className[] = "LogManager";
const char LunaTraits< sgt::LogManager >::fullName[] = "sgt::LogManager";
const char LunaTraits< sgt::LogManager >::moduleName[] = "sgt";
const char* LunaTraits< sgt::LogManager >::parents[] = {"sgt.Referenced", 0};
const int LunaTraits< sgt::LogManager >::hash = 36134915;
const int LunaTraits< sgt::LogManager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::LogManager >::methods[] = {
	{"log", &luna_wrapper_sgt_LogManager::_bind_log},
	{"getLevelFlags", &luna_wrapper_sgt_LogManager::_bind_getLevelFlags},
	{"setLevelFlags", &luna_wrapper_sgt_LogManager::_bind_setLevelFlags},
	{"addLevelFlags", &luna_wrapper_sgt_LogManager::_bind_addLevelFlags},
	{"removeLevelFlags", &luna_wrapper_sgt_LogManager::_bind_removeLevelFlags},
	{"getTraceFlags", &luna_wrapper_sgt_LogManager::_bind_getTraceFlags},
	{"setTraceFlags", &luna_wrapper_sgt_LogManager::_bind_setTraceFlags},
	{"addSink", &luna_wrapper_sgt_LogManager::_bind_addSink},
	{"removeSink", &luna_wrapper_sgt_LogManager::_bind_removeSink},
	{"getSink", &luna_wrapper_sgt_LogManager::_bind_getSink},
	{"getNotifyLevel", &luna_wrapper_sgt_LogManager::_bind_getNotifyLevel},
	{"setNotifyLevel", &luna_wrapper_sgt_LogManager::_bind_setNotifyLevel},
	{"getVerbose", &luna_wrapper_sgt_LogManager::_bind_getVerbose},
	{"setVerbose", &luna_wrapper_sgt_LogManager::_bind_setVerbose},
	{"getLevelString", &luna_wrapper_sgt_LogManager::_bind_getLevelString},
	{"getTimeStamp", &luna_wrapper_sgt_LogManager::_bind_getTimeStamp},
	{"setDefaultTraceFlags", &luna_wrapper_sgt_LogManager::_bind_setDefaultTraceFlags},
	{"setDefaultLevelFlags", &luna_wrapper_sgt_LogManager::_bind_setDefaultLevelFlags},
	{"instance", &luna_wrapper_sgt_LogManager::_bind_instance},
	{"destroy", &luna_wrapper_sgt_LogManager::_bind_destroy},
	{"base_setThreadSafeRefUnref", &luna_wrapper_sgt_LogManager::_bind_base_setThreadSafeRefUnref},
	{"__eq", &luna_wrapper_sgt_LogManager::_bind___eq},
	{"getTable", &luna_wrapper_sgt_LogManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::LogManager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_LogManager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::LogManager >::enumValues[] = {
	{"FILE_NAME", sgt::LogManager::FILE_NAME},
	{"LINE_NUMBER", sgt::LogManager::LINE_NUMBER},
	{"THREAD_ID", sgt::LogManager::THREAD_ID},
	{"TIME_STAMP", sgt::LogManager::TIME_STAMP},
	{"FATAL", sgt::LogManager::FATAL},
	{"ERROR", sgt::LogManager::ERROR},
	{"WARNING", sgt::LogManager::WARNING},
	{"NOTICE", sgt::LogManager::NOTICE},
	{"INFO", sgt::LogManager::INFO},
	{"DEBUG0", sgt::LogManager::DEBUG0},
	{"DEBUG1", sgt::LogManager::DEBUG1},
	{"DEBUG2", sgt::LogManager::DEBUG2},
	{"DEBUG3", sgt::LogManager::DEBUG3},
	{"DEBUG4", sgt::LogManager::DEBUG4},
	{"DEBUG5", sgt::LogManager::DEBUG5},
	{0,0}
};


