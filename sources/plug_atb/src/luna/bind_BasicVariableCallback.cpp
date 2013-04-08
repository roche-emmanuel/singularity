#include <plug_common.h>

#include <luna/wrappers/wrapper_BasicVariableCallback.h>

class luna_wrapper_BasicVariableCallback {
public:
	typedef Luna< BasicVariableCallback > luna_t;

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

		BasicVariableCallback* self= (BasicVariableCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< BasicVariableCallback >::push(L,self,false);
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
		//BasicVariableCallback* ptr= dynamic_cast< BasicVariableCallback* >(Luna< osg::Referenced >::check(L,1));
		BasicVariableCallback* ptr= luna_caster< osg::Referenced, BasicVariableCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< BasicVariableCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setReadOnly(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReadOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// BasicVariableCallback::BasicVariableCallback()
	static BasicVariableCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in BasicVariableCallback::BasicVariableCallback() function, expected prototype:\nBasicVariableCallback::BasicVariableCallback()\nClass arguments details:\n");
		}


		return new BasicVariableCallback();
	}

	// BasicVariableCallback::BasicVariableCallback(lua_Table * data)
	static BasicVariableCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in BasicVariableCallback::BasicVariableCallback(lua_Table * data) function, expected prototype:\nBasicVariableCallback::BasicVariableCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_BasicVariableCallback(L,NULL);
	}

	// Overload binder for BasicVariableCallback::BasicVariableCallback
	static BasicVariableCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BasicVariableCallback, cannot match any of the overloads for function BasicVariableCallback:\n  BasicVariableCallback()\n  BasicVariableCallback(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void BasicVariableCallback::setReadOnly(bool ro)
	static int _bind_setReadOnly(lua_State *L) {
		if (!_lg_typecheck_setReadOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void BasicVariableCallback::setReadOnly(bool ro) function, expected prototype:\nvoid BasicVariableCallback::setReadOnly(bool ro)\nClass arguments details:\n");
		}

		bool ro=(bool)(lua_toboolean(L,2)==1);

		BasicVariableCallback* self=Luna< osg::Referenced >::checkSubType< BasicVariableCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void BasicVariableCallback::setReadOnly(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setReadOnly(ro);

		return 0;
	}

	// bool BasicVariableCallback::getReadOnly()
	static int _bind_getReadOnly(lua_State *L) {
		if (!_lg_typecheck_getReadOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool BasicVariableCallback::getReadOnly() function, expected prototype:\nbool BasicVariableCallback::getReadOnly()\nClass arguments details:\n");
		}


		BasicVariableCallback* self=Luna< osg::Referenced >::checkSubType< BasicVariableCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool BasicVariableCallback::getReadOnly(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getReadOnly();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

BasicVariableCallback* LunaTraits< BasicVariableCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_BasicVariableCallback::_bind_ctor(L);
}

void LunaTraits< BasicVariableCallback >::_bind_dtor(BasicVariableCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< BasicVariableCallback >::className[] = "BasicVariableCallback";
const char LunaTraits< BasicVariableCallback >::fullName[] = "BasicVariableCallback";
const char LunaTraits< BasicVariableCallback >::moduleName[] = "atb";
const char* LunaTraits< BasicVariableCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< BasicVariableCallback >::hash = 36707283;
const int LunaTraits< BasicVariableCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< BasicVariableCallback >::methods[] = {
	{"setReadOnly", &luna_wrapper_BasicVariableCallback::_bind_setReadOnly},
	{"getReadOnly", &luna_wrapper_BasicVariableCallback::_bind_getReadOnly},
	{"fromVoid", &luna_wrapper_BasicVariableCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_BasicVariableCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_BasicVariableCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< BasicVariableCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_BasicVariableCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< BasicVariableCallback >::enumValues[] = {
	{0,0}
};


