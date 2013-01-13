#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GraphicsThread.h>

class luna_wrapper_osg_GraphicsThread {
public:
	typedef Luna< osg::GraphicsThread > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//osg::GraphicsThread* ptr= dynamic_cast< osg::GraphicsThread* >(Luna< osg::Referenced >::check(L,1));
		osg::GraphicsThread* ptr= luna_caster< osg::Referenced, osg::GraphicsThread >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsThread >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Thread(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::GraphicsThread* ptr= dynamic_cast< osg::GraphicsThread* >(Luna< OpenThreads::Thread >::check(L,1));
		osg::GraphicsThread* ptr= luna_caster< OpenThreads::Thread, osg::GraphicsThread >::cast(Luna< OpenThreads::Thread >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsThread >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cancelCleanup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GraphicsThread::GraphicsThread()
	static osg::GraphicsThread* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsThread::GraphicsThread() function, expected prototype:\nosg::GraphicsThread::GraphicsThread()\nClass arguments details:\n");
		}


		return new osg::GraphicsThread();
	}

	// osg::GraphicsThread::GraphicsThread(lua_Table * data)
	static osg::GraphicsThread* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsThread::GraphicsThread(lua_Table * data) function, expected prototype:\nosg::GraphicsThread::GraphicsThread(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_GraphicsThread(L,NULL);
	}

	// Overload binder for osg::GraphicsThread::GraphicsThread
	static osg::GraphicsThread* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GraphicsThread, cannot match any of the overloads for function GraphicsThread:\n  GraphicsThread()\n  GraphicsThread(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::GraphicsThread::run()
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsThread::run() function, expected prototype:\nvoid osg::GraphicsThread::run()\nClass arguments details:\n");
		}


		osg::GraphicsThread* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsThread >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsThread::run(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->run();

		return 0;
	}

	// void osg::GraphicsThread::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsThread::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::GraphicsThread::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsThread* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsThread >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsThread::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->GraphicsThread::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::GraphicsThread::base_cancelCleanup()
	static int _bind_base_cancelCleanup(lua_State *L) {
		if (!_lg_typecheck_base_cancelCleanup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsThread::base_cancelCleanup() function, expected prototype:\nvoid osg::GraphicsThread::base_cancelCleanup()\nClass arguments details:\n");
		}


		osg::GraphicsThread* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsThread >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsThread::base_cancelCleanup(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->GraphicsThread::cancelCleanup();

		return 0;
	}

	// int osg::GraphicsThread::base_cancel()
	static int _bind_base_cancel(lua_State *L) {
		if (!_lg_typecheck_base_cancel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::GraphicsThread::base_cancel() function, expected prototype:\nint osg::GraphicsThread::base_cancel()\nClass arguments details:\n");
		}


		osg::GraphicsThread* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsThread >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::GraphicsThread::base_cancel(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->GraphicsThread::cancel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GraphicsThread::base_run()
	static int _bind_base_run(lua_State *L) {
		if (!_lg_typecheck_base_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsThread::base_run() function, expected prototype:\nvoid osg::GraphicsThread::base_run()\nClass arguments details:\n");
		}


		osg::GraphicsThread* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsThread >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsThread::base_run(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->GraphicsThread::run();

		return 0;
	}


	// Operator binds:

};

osg::GraphicsThread* LunaTraits< osg::GraphicsThread >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsThread::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::GraphicsThread >::_bind_dtor(osg::GraphicsThread* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsThread >::className[] = "GraphicsThread";
const char LunaTraits< osg::GraphicsThread >::fullName[] = "osg::GraphicsThread";
const char LunaTraits< osg::GraphicsThread >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsThread >::parents[] = {"osg.OperationThread", 0};
const int LunaTraits< osg::GraphicsThread >::hash = 55022762;
const int LunaTraits< osg::GraphicsThread >::uniqueIDs[] = {50169651, 86558172,0};

luna_RegType LunaTraits< osg::GraphicsThread >::methods[] = {
	{"run", &luna_wrapper_osg_GraphicsThread::_bind_run},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_GraphicsThread::_bind_base_setThreadSafeRefUnref},
	{"base_cancelCleanup", &luna_wrapper_osg_GraphicsThread::_bind_base_cancelCleanup},
	{"base_cancel", &luna_wrapper_osg_GraphicsThread::_bind_base_cancel},
	{"base_run", &luna_wrapper_osg_GraphicsThread::_bind_base_run},
	{"__eq", &luna_wrapper_osg_GraphicsThread::_bind___eq},
	{"getTable", &luna_wrapper_osg_GraphicsThread::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsThread >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsThread::_cast_from_Referenced},
	{"OpenThreads::Thread", &luna_wrapper_osg_GraphicsThread::_cast_from_Thread},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsThread >::enumValues[] = {
	{0,0}
};


