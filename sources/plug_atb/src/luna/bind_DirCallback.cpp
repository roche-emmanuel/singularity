#include <plug_common.h>

#include <luna/wrappers/wrapper_DirCallback.h>

class luna_wrapper_DirCallback {
public:
	typedef Luna< DirCallback > luna_t;

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

		DirCallback* self= (DirCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< DirCallback >::push(L,self,false);
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
		//DirCallback* ptr= dynamic_cast< DirCallback* >(Luna< osg::Referenced >::check(L,1));
		DirCallback* ptr= luna_caster< osg::Referenced, DirCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< DirCallback >::push(L,ptr,false);
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

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// DirCallback::DirCallback(lua_Table * data)
	static DirCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in DirCallback::DirCallback(lua_Table * data) function, expected prototype:\nDirCallback::DirCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_DirCallback(L,NULL);
	}


	// Function binds:
	// static void DirCallback::setCallback(const void * value, void * clientData)
	static int _bind_setCallback(lua_State *L) {
		if (!_lg_typecheck_setCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void DirCallback::setCallback(const void * value, void * clientData) function, expected prototype:\nstatic void DirCallback::setCallback(const void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		DirCallback::setCallback(value, clientData);

		return 0;
	}

	// static void DirCallback::getCallback(void * value, void * clientData)
	static int _bind_getCallback(lua_State *L) {
		if (!_lg_typecheck_getCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void DirCallback::getCallback(void * value, void * clientData) function, expected prototype:\nstatic void DirCallback::getCallback(void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		DirCallback::getCallback(value, clientData);

		return 0;
	}

	// void DirCallback::setValue(osg::Vec3d val)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void DirCallback::setValue(osg::Vec3d val) function, expected prototype:\nvoid DirCallback::setValue(osg::Vec3d val)\nClass arguments details:\n");
		}

		osg::Vec3d* val_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in DirCallback::setValue function");
		}
		osg::Vec3d val=*val_ptr;

		DirCallback* self=Luna< osg::Referenced >::checkSubType< DirCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void DirCallback::setValue(osg::Vec3d). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setValue(val);

		return 0;
	}

	// osg::Vec3d DirCallback::getValue()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d DirCallback::getValue() function, expected prototype:\nosg::Vec3d DirCallback::getValue()\nClass arguments details:\n");
		}


		DirCallback* self=Luna< osg::Referenced >::checkSubType< DirCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3d DirCallback::getValue(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec3d stack_lret = self->getValue();
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

DirCallback* LunaTraits< DirCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_DirCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void DirCallback::setValue(osg::Vec3d val)
	// osg::Vec3d DirCallback::getValue()
}

void LunaTraits< DirCallback >::_bind_dtor(DirCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< DirCallback >::className[] = "DirCallback";
const char LunaTraits< DirCallback >::fullName[] = "DirCallback";
const char LunaTraits< DirCallback >::moduleName[] = "atb";
const char* LunaTraits< DirCallback >::parents[] = {"atb.BasicVariableCallback", 0};
const int LunaTraits< DirCallback >::hash = 16809080;
const int LunaTraits< DirCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< DirCallback >::methods[] = {
	{"setCallback", &luna_wrapper_DirCallback::_bind_setCallback},
	{"getCallback", &luna_wrapper_DirCallback::_bind_getCallback},
	{"setValue", &luna_wrapper_DirCallback::_bind_setValue},
	{"getValue", &luna_wrapper_DirCallback::_bind_getValue},
	{"fromVoid", &luna_wrapper_DirCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_DirCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_DirCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< DirCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_DirCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< DirCallback >::enumValues[] = {
	{0,0}
};


