#include <plug_common.h>

#include <luna/wrappers/wrapper_IntCallback.h>

class luna_wrapper_IntCallback {
public:
	typedef Luna< IntCallback > luna_t;

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
		//IntCallback* ptr= dynamic_cast< IntCallback* >(Luna< osg::Referenced >::check(L,1));
		IntCallback* ptr= luna_caster< osg::Referenced, IntCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IntCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IntCallback::IntCallback(lua_Table * data)
	static IntCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IntCallback::IntCallback(lua_Table * data) function, expected prototype:\nIntCallback::IntCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_IntCallback(L,NULL);
	}


	// Function binds:
	// static void IntCallback::setCallback(const void * value, void * clientData)
	static int _bind_setCallback(lua_State *L) {
		if (!_lg_typecheck_setCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void IntCallback::setCallback(const void * value, void * clientData) function, expected prototype:\nstatic void IntCallback::setCallback(const void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		IntCallback::setCallback(value, clientData);

		return 0;
	}

	// static void IntCallback::getCallback(void * value, void * clientData)
	static int _bind_getCallback(lua_State *L) {
		if (!_lg_typecheck_getCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void IntCallback::getCallback(void * value, void * clientData) function, expected prototype:\nstatic void IntCallback::getCallback(void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		IntCallback::getCallback(value, clientData);

		return 0;
	}

	// void IntCallback::setValue(int val)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void IntCallback::setValue(int val) function, expected prototype:\nvoid IntCallback::setValue(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		IntCallback* self=Luna< osg::Referenced >::checkSubType< IntCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void IntCallback::setValue(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setValue(val);

		return 0;
	}

	// int IntCallback::getValue()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int IntCallback::getValue() function, expected prototype:\nint IntCallback::getValue()\nClass arguments details:\n");
		}


		IntCallback* self=Luna< osg::Referenced >::checkSubType< IntCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int IntCallback::getValue(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->getValue();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IntCallback* LunaTraits< IntCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IntCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void IntCallback::setValue(int val)
	// int IntCallback::getValue()
}

void LunaTraits< IntCallback >::_bind_dtor(IntCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< IntCallback >::className[] = "IntCallback";
const char LunaTraits< IntCallback >::fullName[] = "IntCallback";
const char LunaTraits< IntCallback >::moduleName[] = "atb";
const char* LunaTraits< IntCallback >::parents[] = {"atb.BasicVariableCallback", 0};
const int LunaTraits< IntCallback >::hash = 77151474;
const int LunaTraits< IntCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< IntCallback >::methods[] = {
	{"setCallback", &luna_wrapper_IntCallback::_bind_setCallback},
	{"getCallback", &luna_wrapper_IntCallback::_bind_getCallback},
	{"setValue", &luna_wrapper_IntCallback::_bind_setValue},
	{"getValue", &luna_wrapper_IntCallback::_bind_getValue},
	{"__eq", &luna_wrapper_IntCallback::_bind___eq},
	{"getTable", &luna_wrapper_IntCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IntCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_IntCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< IntCallback >::enumValues[] = {
	{0,0}
};


