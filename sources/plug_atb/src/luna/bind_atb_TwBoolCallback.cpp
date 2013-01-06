#include <plug_common.h>

#include <luna/wrappers/wrapper_atb_TwBoolCallback.h>

class luna_wrapper_atb_TwBoolCallback {
public:
	typedef Luna< atb::TwBoolCallback > luna_t;

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
		//atb::TwBoolCallback* ptr= dynamic_cast< atb::TwBoolCallback* >(Luna< osg::Referenced >::check(L,1));
		atb::TwBoolCallback* ptr= luna_caster< osg::Referenced, atb::TwBoolCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< atb::TwBoolCallback >::push(L,ptr,false);
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

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// atb::TwBoolCallback::TwBoolCallback(lua_Table * data)
	static atb::TwBoolCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in atb::TwBoolCallback::TwBoolCallback(lua_Table * data) function, expected prototype:\natb::TwBoolCallback::TwBoolCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_atb_TwBoolCallback(L,NULL);
	}


	// Function binds:
	// static void atb::TwBoolCallback::setCallback(const void * value, void * clientData)
	static int _bind_setCallback(lua_State *L) {
		if (!_lg_typecheck_setCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void atb::TwBoolCallback::setCallback(const void * value, void * clientData) function, expected prototype:\nstatic void atb::TwBoolCallback::setCallback(const void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		atb::TwBoolCallback::setCallback(value, clientData);

		return 0;
	}

	// static void atb::TwBoolCallback::getCallback(void * value, void * clientData)
	static int _bind_getCallback(lua_State *L) {
		if (!_lg_typecheck_getCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void atb::TwBoolCallback::getCallback(void * value, void * clientData) function, expected prototype:\nstatic void atb::TwBoolCallback::getCallback(void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		atb::TwBoolCallback::getCallback(value, clientData);

		return 0;
	}

	// void atb::TwBoolCallback::setValue(bool val)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void atb::TwBoolCallback::setValue(bool val) function, expected prototype:\nvoid atb::TwBoolCallback::setValue(bool val)\nClass arguments details:\n");
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		atb::TwBoolCallback* self=Luna< osg::Referenced >::checkSubType< atb::TwBoolCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void atb::TwBoolCallback::setValue(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setValue(val);

		return 0;
	}

	// bool atb::TwBoolCallback::getValue()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool atb::TwBoolCallback::getValue() function, expected prototype:\nbool atb::TwBoolCallback::getValue()\nClass arguments details:\n");
		}


		atb::TwBoolCallback* self=Luna< osg::Referenced >::checkSubType< atb::TwBoolCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool atb::TwBoolCallback::getValue(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getValue();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

atb::TwBoolCallback* LunaTraits< atb::TwBoolCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_atb_TwBoolCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void atb::TwBoolCallback::setValue(bool val)
	// bool atb::TwBoolCallback::getValue()
}

void LunaTraits< atb::TwBoolCallback >::_bind_dtor(atb::TwBoolCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< atb::TwBoolCallback >::className[] = "TwBoolCallback";
const char LunaTraits< atb::TwBoolCallback >::fullName[] = "atb::TwBoolCallback";
const char LunaTraits< atb::TwBoolCallback >::moduleName[] = "atb";
const char* LunaTraits< atb::TwBoolCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< atb::TwBoolCallback >::hash = 31104176;
const int LunaTraits< atb::TwBoolCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< atb::TwBoolCallback >::methods[] = {
	{"setCallback", &luna_wrapper_atb_TwBoolCallback::_bind_setCallback},
	{"getCallback", &luna_wrapper_atb_TwBoolCallback::_bind_getCallback},
	{"setValue", &luna_wrapper_atb_TwBoolCallback::_bind_setValue},
	{"getValue", &luna_wrapper_atb_TwBoolCallback::_bind_getValue},
	{"__eq", &luna_wrapper_atb_TwBoolCallback::_bind___eq},
	{"getTable", &luna_wrapper_atb_TwBoolCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< atb::TwBoolCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_atb_TwBoolCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< atb::TwBoolCallback >::enumValues[] = {
	{0,0}
};


