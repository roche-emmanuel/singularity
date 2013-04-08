#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_OpenGLQuerySupport.h>

class luna_wrapper_osgViewer_OpenGLQuerySupport {
public:
	typedef Luna< osgViewer::OpenGLQuerySupport > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		osgViewer::OpenGLQuerySupport* self= (osgViewer::OpenGLQuerySupport*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::OpenGLQuerySupport >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgViewer::OpenGLQuerySupport* ptr= dynamic_cast< osgViewer::OpenGLQuerySupport* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::OpenGLQuerySupport* ptr= luna_caster< osg::Referenced, osgViewer::OpenGLQuerySupport >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::OpenGLQuerySupport >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_checkQuery(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,32973728) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginQuery(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endQuery(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_initialize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_initialize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::OpenGLQuerySupport::OpenGLQuerySupport(lua_Table * data)
	static osgViewer::OpenGLQuerySupport* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::OpenGLQuerySupport::OpenGLQuerySupport(lua_Table * data) function, expected prototype:\nosgViewer::OpenGLQuerySupport::OpenGLQuerySupport(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgViewer_OpenGLQuerySupport(L,NULL);
	}


	// Function binds:
	// void osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats * stats, osg::State * state, __int64 startTick)
	static int _bind_checkQuery(lua_State *L) {
		if (!_lg_typecheck_checkQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats * stats, osg::State * state, __int64 startTick) function, expected prototype:\nvoid osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats * stats, osg::State * state, __int64 startTick)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 32973728\n");
		}

		osg::Stats* stats=(Luna< osg::Referenced >::checkSubType< osg::Stats >(L,2));
		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		__int64* startTick_ptr=(Luna< __int64 >::check(L,4));
		if( !startTick_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg startTick in osgViewer::OpenGLQuerySupport::checkQuery function");
		}
		__int64 startTick=*startTick_ptr;

		osgViewer::OpenGLQuerySupport* self=Luna< osg::Referenced >::checkSubType< osgViewer::OpenGLQuerySupport >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats *, osg::State *, __int64). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->checkQuery(stats, state, startTick);

		return 0;
	}

	// void osgViewer::OpenGLQuerySupport::beginQuery(unsigned int frameNumber, osg::State * state)
	static int _bind_beginQuery(lua_State *L) {
		if (!_lg_typecheck_beginQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::OpenGLQuerySupport::beginQuery(unsigned int frameNumber, osg::State * state) function, expected prototype:\nvoid osgViewer::OpenGLQuerySupport::beginQuery(unsigned int frameNumber, osg::State * state)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int frameNumber=(unsigned int)lua_tointeger(L,2);
		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));

		osgViewer::OpenGLQuerySupport* self=Luna< osg::Referenced >::checkSubType< osgViewer::OpenGLQuerySupport >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::OpenGLQuerySupport::beginQuery(unsigned int, osg::State *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->beginQuery(frameNumber, state);

		return 0;
	}

	// void osgViewer::OpenGLQuerySupport::endQuery(osg::State * state)
	static int _bind_endQuery(lua_State *L) {
		if (!_lg_typecheck_endQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::OpenGLQuerySupport::endQuery(osg::State * state) function, expected prototype:\nvoid osgViewer::OpenGLQuerySupport::endQuery(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osgViewer::OpenGLQuerySupport* self=Luna< osg::Referenced >::checkSubType< osgViewer::OpenGLQuerySupport >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::OpenGLQuerySupport::endQuery(osg::State *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->endQuery(state);

		return 0;
	}

	// void osgViewer::OpenGLQuerySupport::initialize(osg::State * state, __int64 startTick)
	static int _bind_initialize(lua_State *L) {
		if (!_lg_typecheck_initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::OpenGLQuerySupport::initialize(osg::State * state, __int64 startTick) function, expected prototype:\nvoid osgViewer::OpenGLQuerySupport::initialize(osg::State * state, __int64 startTick)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 32973728\n");
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		__int64* startTick_ptr=(Luna< __int64 >::check(L,3));
		if( !startTick_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg startTick in osgViewer::OpenGLQuerySupport::initialize function");
		}
		__int64 startTick=*startTick_ptr;

		osgViewer::OpenGLQuerySupport* self=Luna< osg::Referenced >::checkSubType< osgViewer::OpenGLQuerySupport >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::OpenGLQuerySupport::initialize(osg::State *, __int64). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->initialize(state, startTick);

		return 0;
	}

	// void osgViewer::OpenGLQuerySupport::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::OpenGLQuerySupport::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::OpenGLQuerySupport::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::OpenGLQuerySupport* self=Luna< osg::Referenced >::checkSubType< osgViewer::OpenGLQuerySupport >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::OpenGLQuerySupport::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->OpenGLQuerySupport::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::OpenGLQuerySupport::base_initialize(osg::State * state, __int64 startTick)
	static int _bind_base_initialize(lua_State *L) {
		if (!_lg_typecheck_base_initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::OpenGLQuerySupport::base_initialize(osg::State * state, __int64 startTick) function, expected prototype:\nvoid osgViewer::OpenGLQuerySupport::base_initialize(osg::State * state, __int64 startTick)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 32973728\n");
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		__int64* startTick_ptr=(Luna< __int64 >::check(L,3));
		if( !startTick_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg startTick in osgViewer::OpenGLQuerySupport::base_initialize function");
		}
		__int64 startTick=*startTick_ptr;

		osgViewer::OpenGLQuerySupport* self=Luna< osg::Referenced >::checkSubType< osgViewer::OpenGLQuerySupport >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::OpenGLQuerySupport::base_initialize(osg::State *, __int64). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->OpenGLQuerySupport::initialize(state, startTick);

		return 0;
	}


	// Operator binds:

};

osgViewer::OpenGLQuerySupport* LunaTraits< osgViewer::OpenGLQuerySupport >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_OpenGLQuerySupport::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats * stats, osg::State * state, __int64 startTick)
	// void osgViewer::OpenGLQuerySupport::beginQuery(unsigned int frameNumber, osg::State * state)
	// void osgViewer::OpenGLQuerySupport::endQuery(osg::State * state)
}

void LunaTraits< osgViewer::OpenGLQuerySupport >::_bind_dtor(osgViewer::OpenGLQuerySupport* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::OpenGLQuerySupport >::className[] = "OpenGLQuerySupport";
const char LunaTraits< osgViewer::OpenGLQuerySupport >::fullName[] = "osgViewer::OpenGLQuerySupport";
const char LunaTraits< osgViewer::OpenGLQuerySupport >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::OpenGLQuerySupport >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgViewer::OpenGLQuerySupport >::hash = 95882896;
const int LunaTraits< osgViewer::OpenGLQuerySupport >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::OpenGLQuerySupport >::methods[] = {
	{"checkQuery", &luna_wrapper_osgViewer_OpenGLQuerySupport::_bind_checkQuery},
	{"beginQuery", &luna_wrapper_osgViewer_OpenGLQuerySupport::_bind_beginQuery},
	{"endQuery", &luna_wrapper_osgViewer_OpenGLQuerySupport::_bind_endQuery},
	{"initialize", &luna_wrapper_osgViewer_OpenGLQuerySupport::_bind_initialize},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_OpenGLQuerySupport::_bind_base_setThreadSafeRefUnref},
	{"base_initialize", &luna_wrapper_osgViewer_OpenGLQuerySupport::_bind_base_initialize},
	{"fromVoid", &luna_wrapper_osgViewer_OpenGLQuerySupport::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_OpenGLQuerySupport::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_OpenGLQuerySupport::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::OpenGLQuerySupport >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_OpenGLQuerySupport::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::OpenGLQuerySupport >::enumValues[] = {
	{0,0}
};


