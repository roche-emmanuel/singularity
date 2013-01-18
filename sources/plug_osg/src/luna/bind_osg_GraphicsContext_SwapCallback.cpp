#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GraphicsContext_SwapCallback.h>

class luna_wrapper_osg_GraphicsContext_SwapCallback {
public:
	typedef Luna< osg::GraphicsContext::SwapCallback > luna_t;

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

		osg::GraphicsContext::SwapCallback* self= (osg::GraphicsContext::SwapCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::GraphicsContext::SwapCallback >::push(L,self,false);
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
		//osg::GraphicsContext::SwapCallback* ptr= dynamic_cast< osg::GraphicsContext::SwapCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::GraphicsContext::SwapCallback* ptr= luna_caster< osg::Referenced, osg::GraphicsContext::SwapCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsContext::SwapCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_swapBuffersImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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
	// osg::GraphicsContext::SwapCallback::SwapCallback(lua_Table * data)
	static osg::GraphicsContext::SwapCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::SwapCallback::SwapCallback(lua_Table * data) function, expected prototype:\nosg::GraphicsContext::SwapCallback::SwapCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_GraphicsContext_SwapCallback(L,NULL);
	}


	// Function binds:
	// void osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext * gc)
	static int _bind_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext * gc) function, expected prototype:\nvoid osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext * gc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* gc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osg::GraphicsContext::SwapCallback* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::SwapCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->swapBuffersImplementation(gc);

		return 0;
	}

	// void osg::GraphicsContext::SwapCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::SwapCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::GraphicsContext::SwapCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::SwapCallback* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::SwapCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::SwapCallback::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->SwapCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::GraphicsContext::SwapCallback* LunaTraits< osg::GraphicsContext::SwapCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsContext_SwapCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext * gc)
}

void LunaTraits< osg::GraphicsContext::SwapCallback >::_bind_dtor(osg::GraphicsContext::SwapCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsContext::SwapCallback >::className[] = "GraphicsContext_SwapCallback";
const char LunaTraits< osg::GraphicsContext::SwapCallback >::fullName[] = "osg::GraphicsContext::SwapCallback";
const char LunaTraits< osg::GraphicsContext::SwapCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::SwapCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GraphicsContext::SwapCallback >::hash = 36704844;
const int LunaTraits< osg::GraphicsContext::SwapCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsContext::SwapCallback >::methods[] = {
	{"swapBuffersImplementation", &luna_wrapper_osg_GraphicsContext_SwapCallback::_bind_swapBuffersImplementation},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_GraphicsContext_SwapCallback::_bind_base_setThreadSafeRefUnref},
	{"__eq", &luna_wrapper_osg_GraphicsContext_SwapCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_GraphicsContext_SwapCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_GraphicsContext_SwapCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_GraphicsContext_SwapCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::SwapCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsContext_SwapCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::SwapCallback >::enumValues[] = {
	{0,0}
};


