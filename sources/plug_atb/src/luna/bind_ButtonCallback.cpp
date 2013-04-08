#include <plug_common.h>

#include <luna/wrappers/wrapper_ButtonCallback.h>

class luna_wrapper_ButtonCallback {
public:
	typedef Luna< ButtonCallback > luna_t;

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

		ButtonCallback* self= (ButtonCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ButtonCallback >::push(L,self,false);
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
		//ButtonCallback* ptr= dynamic_cast< ButtonCallback* >(Luna< osg::Referenced >::check(L,1));
		ButtonCallback* ptr= luna_caster< osg::Referenced, ButtonCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ButtonCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_doExecute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_execute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ButtonCallback::ButtonCallback(lua_Table * data)
	static ButtonCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ButtonCallback::ButtonCallback(lua_Table * data) function, expected prototype:\nButtonCallback::ButtonCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_ButtonCallback(L,NULL);
	}


	// Function binds:
	// static void ButtonCallback::doExecute(void * clientData)
	static int _bind_doExecute(lua_State *L) {
		if (!_lg_typecheck_doExecute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void ButtonCallback::doExecute(void * clientData) function, expected prototype:\nstatic void ButtonCallback::doExecute(void * clientData)\nClass arguments details:\n");
		}

		void* clientData=(Luna< void >::check(L,1));

		ButtonCallback::doExecute(clientData);

		return 0;
	}

	// void ButtonCallback::execute()
	static int _bind_execute(lua_State *L) {
		if (!_lg_typecheck_execute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ButtonCallback::execute() function, expected prototype:\nvoid ButtonCallback::execute()\nClass arguments details:\n");
		}


		ButtonCallback* self=Luna< osg::Referenced >::checkSubType< ButtonCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ButtonCallback::execute(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->execute();

		return 0;
	}


	// Operator binds:

};

ButtonCallback* LunaTraits< ButtonCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ButtonCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void ButtonCallback::execute()
}

void LunaTraits< ButtonCallback >::_bind_dtor(ButtonCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< ButtonCallback >::className[] = "ButtonCallback";
const char LunaTraits< ButtonCallback >::fullName[] = "ButtonCallback";
const char LunaTraits< ButtonCallback >::moduleName[] = "atb";
const char* LunaTraits< ButtonCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< ButtonCallback >::hash = 15715260;
const int LunaTraits< ButtonCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< ButtonCallback >::methods[] = {
	{"doExecute", &luna_wrapper_ButtonCallback::_bind_doExecute},
	{"execute", &luna_wrapper_ButtonCallback::_bind_execute},
	{"fromVoid", &luna_wrapper_ButtonCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ButtonCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_ButtonCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ButtonCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_ButtonCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< ButtonCallback >::enumValues[] = {
	{0,0}
};


