#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_OpenGLQuerySupport.h>

class luna_wrapper_osgViewer_OpenGLQuerySupport {
public:
	typedef Luna< osgViewer::OpenGLQuerySupport > luna_t;

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
		//osgViewer::OpenGLQuerySupport* ptr= dynamic_cast< osgViewer::OpenGLQuerySupport* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::OpenGLQuerySupport* ptr= luna_caster< osg::Referenced, osgViewer::OpenGLQuerySupport >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::OpenGLQuerySupport >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_checkQuery(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_initialize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats * stats, osg::State * state, unsigned long long startTick)
	static int _bind_checkQuery(lua_State *L) {
		if (!_lg_typecheck_checkQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats * stats, osg::State * state, unsigned long long startTick) function, expected prototype:\nvoid osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats * stats, osg::State * state, unsigned long long startTick)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Stats* stats=(Luna< osg::Referenced >::checkSubType< osg::Stats >(L,2));
		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		unsigned long long startTick=(unsigned long long)lua_tointeger(L,4);

		osgViewer::OpenGLQuerySupport* self=Luna< osg::Referenced >::checkSubType< osgViewer::OpenGLQuerySupport >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats *, osg::State *, unsigned long long)");
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
			luaL_error(L, "Invalid object in function call void osgViewer::OpenGLQuerySupport::beginQuery(unsigned int, osg::State *)");
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
			luaL_error(L, "Invalid object in function call void osgViewer::OpenGLQuerySupport::endQuery(osg::State *)");
		}
		self->endQuery(state);

		return 0;
	}

	// void osgViewer::OpenGLQuerySupport::initialize(osg::State * state, unsigned long long startTick)
	static int _bind_initialize(lua_State *L) {
		if (!_lg_typecheck_initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::OpenGLQuerySupport::initialize(osg::State * state, unsigned long long startTick) function, expected prototype:\nvoid osgViewer::OpenGLQuerySupport::initialize(osg::State * state, unsigned long long startTick)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		unsigned long long startTick=(unsigned long long)lua_tointeger(L,3);

		osgViewer::OpenGLQuerySupport* self=Luna< osg::Referenced >::checkSubType< osgViewer::OpenGLQuerySupport >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::OpenGLQuerySupport::initialize(osg::State *, unsigned long long)");
		}
		self->initialize(state, startTick);

		return 0;
	}

	// void osgViewer::OpenGLQuerySupport::base_initialize(osg::State * state, unsigned long long startTick)
	static int _bind_base_initialize(lua_State *L) {
		if (!_lg_typecheck_base_initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::OpenGLQuerySupport::base_initialize(osg::State * state, unsigned long long startTick) function, expected prototype:\nvoid osgViewer::OpenGLQuerySupport::base_initialize(osg::State * state, unsigned long long startTick)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		unsigned long long startTick=(unsigned long long)lua_tointeger(L,3);

		osgViewer::OpenGLQuerySupport* self=Luna< osg::Referenced >::checkSubType< osgViewer::OpenGLQuerySupport >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::OpenGLQuerySupport::base_initialize(osg::State *, unsigned long long)");
		}
		self->OpenGLQuerySupport::initialize(state, startTick);

		return 0;
	}


	// Operator binds:

};

osgViewer::OpenGLQuerySupport* LunaTraits< osgViewer::OpenGLQuerySupport >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats * stats, osg::State * state, unsigned long long startTick)
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
	{"base_initialize", &luna_wrapper_osgViewer_OpenGLQuerySupport::_bind_base_initialize},
	{"__eq", &luna_wrapper_osgViewer_OpenGLQuerySupport::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::OpenGLQuerySupport >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_OpenGLQuerySupport::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::OpenGLQuerySupport >::enumValues[] = {
	{0,0}
};


