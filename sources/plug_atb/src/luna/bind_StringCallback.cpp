#include <plug_common.h>

#include <luna/wrappers/wrapper_StringCallback.h>

class luna_wrapper_StringCallback {
public:
	typedef Luna< StringCallback > luna_t;

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

		StringCallback* self= (StringCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< StringCallback >::push(L,self,false);
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
		//StringCallback* ptr= dynamic_cast< StringCallback* >(Luna< osg::Referenced >::check(L,1));
		StringCallback* ptr= luna_caster< osg::Referenced, StringCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< StringCallback >::push(L,ptr,false);
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

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// StringCallback::StringCallback(lua_Table * data)
	static StringCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in StringCallback::StringCallback(lua_Table * data) function, expected prototype:\nStringCallback::StringCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_StringCallback(L,NULL);
	}


	// Function binds:
	// static void StringCallback::setCallback(const void * value, void * clientData)
	static int _bind_setCallback(lua_State *L) {
		if (!_lg_typecheck_setCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void StringCallback::setCallback(const void * value, void * clientData) function, expected prototype:\nstatic void StringCallback::setCallback(const void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		StringCallback::setCallback(value, clientData);

		return 0;
	}

	// static void StringCallback::getCallback(void * value, void * clientData)
	static int _bind_getCallback(lua_State *L) {
		if (!_lg_typecheck_getCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void StringCallback::getCallback(void * value, void * clientData) function, expected prototype:\nstatic void StringCallback::getCallback(void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		StringCallback::getCallback(value, clientData);

		return 0;
	}

	// void StringCallback::setValue(const std::string & val)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void StringCallback::setValue(const std::string & val) function, expected prototype:\nvoid StringCallback::setValue(const std::string & val)\nClass arguments details:\n");
		}

		std::string val(lua_tostring(L,2),lua_objlen(L,2));

		StringCallback* self=Luna< osg::Referenced >::checkSubType< StringCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void StringCallback::setValue(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setValue(val);

		return 0;
	}

	// std::string StringCallback::getValue()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string StringCallback::getValue() function, expected prototype:\nstd::string StringCallback::getValue()\nClass arguments details:\n");
		}


		StringCallback* self=Luna< osg::Referenced >::checkSubType< StringCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string StringCallback::getValue(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		std::string lret = self->getValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

StringCallback* LunaTraits< StringCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_StringCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void StringCallback::setValue(const std::string & val)
	// std::string StringCallback::getValue()
}

void LunaTraits< StringCallback >::_bind_dtor(StringCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< StringCallback >::className[] = "StringCallback";
const char LunaTraits< StringCallback >::fullName[] = "StringCallback";
const char LunaTraits< StringCallback >::moduleName[] = "atb";
const char* LunaTraits< StringCallback >::parents[] = {"atb.BasicVariableCallback", 0};
const int LunaTraits< StringCallback >::hash = 70709851;
const int LunaTraits< StringCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< StringCallback >::methods[] = {
	{"setCallback", &luna_wrapper_StringCallback::_bind_setCallback},
	{"getCallback", &luna_wrapper_StringCallback::_bind_getCallback},
	{"setValue", &luna_wrapper_StringCallback::_bind_setValue},
	{"getValue", &luna_wrapper_StringCallback::_bind_getValue},
	{"__eq", &luna_wrapper_StringCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_StringCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_StringCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_StringCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< StringCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_StringCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< StringCallback >::enumValues[] = {
	{0,0}
};


