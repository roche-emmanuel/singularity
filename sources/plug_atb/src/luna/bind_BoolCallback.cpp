#include <plug_common.h>

#include <luna/wrappers/wrapper_BoolCallback.h>

class luna_wrapper_BoolCallback {
public:
	typedef Luna< BoolCallback > luna_t;

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

		BoolCallback* self= (BoolCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< BoolCallback >::push(L,self,false);
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
		//BoolCallback* ptr= dynamic_cast< BoolCallback* >(Luna< osg::Referenced >::check(L,1));
		BoolCallback* ptr= luna_caster< osg::Referenced, BoolCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< BoolCallback >::push(L,ptr,false);
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
	// BoolCallback::BoolCallback(lua_Table * data)
	static BoolCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in BoolCallback::BoolCallback(lua_Table * data) function, expected prototype:\nBoolCallback::BoolCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_BoolCallback(L,NULL);
	}


	// Function binds:
	// static void BoolCallback::setCallback(const void * value, void * clientData)
	static int _bind_setCallback(lua_State *L) {
		if (!_lg_typecheck_setCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void BoolCallback::setCallback(const void * value, void * clientData) function, expected prototype:\nstatic void BoolCallback::setCallback(const void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		BoolCallback::setCallback(value, clientData);

		return 0;
	}

	// static void BoolCallback::getCallback(void * value, void * clientData)
	static int _bind_getCallback(lua_State *L) {
		if (!_lg_typecheck_getCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void BoolCallback::getCallback(void * value, void * clientData) function, expected prototype:\nstatic void BoolCallback::getCallback(void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		BoolCallback::getCallback(value, clientData);

		return 0;
	}

	// void BoolCallback::setValue(bool val)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void BoolCallback::setValue(bool val) function, expected prototype:\nvoid BoolCallback::setValue(bool val)\nClass arguments details:\n");
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		BoolCallback* self=Luna< osg::Referenced >::checkSubType< BoolCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void BoolCallback::setValue(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setValue(val);

		return 0;
	}

	// bool BoolCallback::getValue()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool BoolCallback::getValue() function, expected prototype:\nbool BoolCallback::getValue()\nClass arguments details:\n");
		}


		BoolCallback* self=Luna< osg::Referenced >::checkSubType< BoolCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool BoolCallback::getValue(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getValue();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

BoolCallback* LunaTraits< BoolCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_BoolCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void BoolCallback::setValue(bool val)
	// bool BoolCallback::getValue()
}

void LunaTraits< BoolCallback >::_bind_dtor(BoolCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< BoolCallback >::className[] = "BoolCallback";
const char LunaTraits< BoolCallback >::fullName[] = "BoolCallback";
const char LunaTraits< BoolCallback >::moduleName[] = "atb";
const char* LunaTraits< BoolCallback >::parents[] = {"atb.BasicVariableCallback", 0};
const int LunaTraits< BoolCallback >::hash = 14948764;
const int LunaTraits< BoolCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< BoolCallback >::methods[] = {
	{"setCallback", &luna_wrapper_BoolCallback::_bind_setCallback},
	{"getCallback", &luna_wrapper_BoolCallback::_bind_getCallback},
	{"setValue", &luna_wrapper_BoolCallback::_bind_setValue},
	{"getValue", &luna_wrapper_BoolCallback::_bind_getValue},
	{"fromVoid", &luna_wrapper_BoolCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_BoolCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_BoolCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< BoolCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_BoolCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< BoolCallback >::enumValues[] = {
	{0,0}
};


