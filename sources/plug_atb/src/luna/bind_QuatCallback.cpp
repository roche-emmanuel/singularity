#include <plug_common.h>

#include <luna/wrappers/wrapper_QuatCallback.h>

class luna_wrapper_QuatCallback {
public:
	typedef Luna< QuatCallback > luna_t;

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
		//QuatCallback* ptr= dynamic_cast< QuatCallback* >(Luna< osg::Referenced >::check(L,1));
		QuatCallback* ptr= luna_caster< osg::Referenced, QuatCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< QuatCallback >::push(L,ptr,false);
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

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// QuatCallback::QuatCallback(lua_Table * data)
	static QuatCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in QuatCallback::QuatCallback(lua_Table * data) function, expected prototype:\nQuatCallback::QuatCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_QuatCallback(L,NULL);
	}


	// Function binds:
	// static void TW_CALL QuatCallback::setCallback(const void * value, void * clientData)
	static int _bind_setCallback(lua_State *L) {
		if (!_lg_typecheck_setCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void TW_CALL QuatCallback::setCallback(const void * value, void * clientData) function, expected prototype:\nstatic void TW_CALL QuatCallback::setCallback(const void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		QuatCallback::setCallback(value, clientData);

		return 0;
	}

	// static void TW_CALL QuatCallback::getCallback(void * value, void * clientData)
	static int _bind_getCallback(lua_State *L) {
		if (!_lg_typecheck_getCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void TW_CALL QuatCallback::getCallback(void * value, void * clientData) function, expected prototype:\nstatic void TW_CALL QuatCallback::getCallback(void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		QuatCallback::getCallback(value, clientData);

		return 0;
	}

	// void QuatCallback::setValue(osg::Quat val)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void QuatCallback::setValue(osg::Quat val) function, expected prototype:\nvoid QuatCallback::setValue(osg::Quat val)\nClass arguments details:\n");
		}

		osg::Quat* val_ptr=(Luna< osg::Quat >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in QuatCallback::setValue function");
		}
		osg::Quat val=*val_ptr;

		QuatCallback* self=Luna< osg::Referenced >::checkSubType< QuatCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void QuatCallback::setValue(osg::Quat). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setValue(val);

		return 0;
	}

	// osg::Quat QuatCallback::getValue()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Quat QuatCallback::getValue() function, expected prototype:\nosg::Quat QuatCallback::getValue()\nClass arguments details:\n");
		}


		QuatCallback* self=Luna< osg::Referenced >::checkSubType< QuatCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Quat QuatCallback::getValue(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Quat stack_lret = self->getValue();
		osg::Quat* lret = new osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

QuatCallback* LunaTraits< QuatCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_QuatCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void QuatCallback::setValue(osg::Quat val)
	// osg::Quat QuatCallback::getValue()
}

void LunaTraits< QuatCallback >::_bind_dtor(QuatCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< QuatCallback >::className[] = "QuatCallback";
const char LunaTraits< QuatCallback >::fullName[] = "QuatCallback";
const char LunaTraits< QuatCallback >::moduleName[] = "atb";
const char* LunaTraits< QuatCallback >::parents[] = {"atb.BasicVariableCallback", 0};
const int LunaTraits< QuatCallback >::hash = 48708222;
const int LunaTraits< QuatCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< QuatCallback >::methods[] = {
	{"setCallback", &luna_wrapper_QuatCallback::_bind_setCallback},
	{"getCallback", &luna_wrapper_QuatCallback::_bind_getCallback},
	{"setValue", &luna_wrapper_QuatCallback::_bind_setValue},
	{"getValue", &luna_wrapper_QuatCallback::_bind_getValue},
	{"__eq", &luna_wrapper_QuatCallback::_bind___eq},
	{"getTable", &luna_wrapper_QuatCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< QuatCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_QuatCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< QuatCallback >::enumValues[] = {
	{0,0}
};


