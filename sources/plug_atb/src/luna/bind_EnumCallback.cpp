#include <plug_common.h>

#include <luna/wrappers/wrapper_EnumCallback.h>

class luna_wrapper_EnumCallback {
public:
	typedef Luna< EnumCallback > luna_t;

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
		//EnumCallback* ptr= dynamic_cast< EnumCallback* >(Luna< osg::Referenced >::check(L,1));
		EnumCallback* ptr= luna_caster< osg::Referenced, EnumCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< EnumCallback >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setEnumType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnumType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// EnumCallback::EnumCallback(lua_Table * data)
	static EnumCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in EnumCallback::EnumCallback(lua_Table * data) function, expected prototype:\nEnumCallback::EnumCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_EnumCallback(L,NULL);
	}


	// Function binds:
	// static void EnumCallback::setCallback(const void * value, void * clientData)
	static int _bind_setCallback(lua_State *L) {
		if (!_lg_typecheck_setCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void EnumCallback::setCallback(const void * value, void * clientData) function, expected prototype:\nstatic void EnumCallback::setCallback(const void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		EnumCallback::setCallback(value, clientData);

		return 0;
	}

	// static void EnumCallback::getCallback(void * value, void * clientData)
	static int _bind_getCallback(lua_State *L) {
		if (!_lg_typecheck_getCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void EnumCallback::getCallback(void * value, void * clientData) function, expected prototype:\nstatic void EnumCallback::getCallback(void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		EnumCallback::getCallback(value, clientData);

		return 0;
	}

	// void EnumCallback::setEnumType(int etype)
	static int _bind_setEnumType(lua_State *L) {
		if (!_lg_typecheck_setEnumType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void EnumCallback::setEnumType(int etype) function, expected prototype:\nvoid EnumCallback::setEnumType(int etype)\nClass arguments details:\n");
		}

		int etype=(int)lua_tointeger(L,2);

		EnumCallback* self=Luna< osg::Referenced >::checkSubType< EnumCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void EnumCallback::setEnumType(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setEnumType(etype);

		return 0;
	}

	// int EnumCallback::getEnumType()
	static int _bind_getEnumType(lua_State *L) {
		if (!_lg_typecheck_getEnumType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int EnumCallback::getEnumType() function, expected prototype:\nint EnumCallback::getEnumType()\nClass arguments details:\n");
		}


		EnumCallback* self=Luna< osg::Referenced >::checkSubType< EnumCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int EnumCallback::getEnumType(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->getEnumType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void EnumCallback::setValue(int val)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void EnumCallback::setValue(int val) function, expected prototype:\nvoid EnumCallback::setValue(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		EnumCallback* self=Luna< osg::Referenced >::checkSubType< EnumCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void EnumCallback::setValue(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setValue(val);

		return 0;
	}

	// int EnumCallback::getValue()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int EnumCallback::getValue() function, expected prototype:\nint EnumCallback::getValue()\nClass arguments details:\n");
		}


		EnumCallback* self=Luna< osg::Referenced >::checkSubType< EnumCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int EnumCallback::getValue(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->getValue();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

EnumCallback* LunaTraits< EnumCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_EnumCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void EnumCallback::setValue(int val)
	// int EnumCallback::getValue()
}

void LunaTraits< EnumCallback >::_bind_dtor(EnumCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< EnumCallback >::className[] = "EnumCallback";
const char LunaTraits< EnumCallback >::fullName[] = "EnumCallback";
const char LunaTraits< EnumCallback >::moduleName[] = "atb";
const char* LunaTraits< EnumCallback >::parents[] = {"atb.BasicVariableCallback", 0};
const int LunaTraits< EnumCallback >::hash = 27605250;
const int LunaTraits< EnumCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< EnumCallback >::methods[] = {
	{"setCallback", &luna_wrapper_EnumCallback::_bind_setCallback},
	{"getCallback", &luna_wrapper_EnumCallback::_bind_getCallback},
	{"setEnumType", &luna_wrapper_EnumCallback::_bind_setEnumType},
	{"getEnumType", &luna_wrapper_EnumCallback::_bind_getEnumType},
	{"setValue", &luna_wrapper_EnumCallback::_bind_setValue},
	{"getValue", &luna_wrapper_EnumCallback::_bind_getValue},
	{"__eq", &luna_wrapper_EnumCallback::_bind___eq},
	{"getTable", &luna_wrapper_EnumCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< EnumCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_EnumCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< EnumCallback >::enumValues[] = {
	{0,0}
};


