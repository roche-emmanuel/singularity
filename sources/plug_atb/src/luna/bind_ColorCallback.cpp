#include <plug_common.h>

#include <luna/wrappers/wrapper_ColorCallback.h>

class luna_wrapper_ColorCallback {
public:
	typedef Luna< ColorCallback > luna_t;

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
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		ColorCallback* self= (ColorCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ColorCallback >::push(L,self,false);
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
		//ColorCallback* ptr= dynamic_cast< ColorCallback* >(Luna< osg::Referenced >::check(L,1));
		ColorCallback* ptr= luna_caster< osg::Referenced, ColorCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ColorCallback >::push(L,ptr,false);
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

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ColorCallback::ColorCallback(lua_Table * data)
	static ColorCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ColorCallback::ColorCallback(lua_Table * data) function, expected prototype:\nColorCallback::ColorCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_ColorCallback(L,NULL);
	}


	// Function binds:
	// static void ColorCallback::setCallback(const void * value, void * clientData)
	static int _bind_setCallback(lua_State *L) {
		if (!_lg_typecheck_setCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void ColorCallback::setCallback(const void * value, void * clientData) function, expected prototype:\nstatic void ColorCallback::setCallback(const void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		ColorCallback::setCallback(value, clientData);

		return 0;
	}

	// static void ColorCallback::getCallback(void * value, void * clientData)
	static int _bind_getCallback(lua_State *L) {
		if (!_lg_typecheck_getCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void ColorCallback::getCallback(void * value, void * clientData) function, expected prototype:\nstatic void ColorCallback::getCallback(void * value, void * clientData)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,1));
		void* clientData=(Luna< void >::check(L,2));

		ColorCallback::getCallback(value, clientData);

		return 0;
	}

	// void ColorCallback::setValue(osg::Vec4f val)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ColorCallback::setValue(osg::Vec4f val) function, expected prototype:\nvoid ColorCallback::setValue(osg::Vec4f val)\nClass arguments details:\n");
		}

		osg::Vec4f* val_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in ColorCallback::setValue function");
		}
		osg::Vec4f val=*val_ptr;

		ColorCallback* self=Luna< osg::Referenced >::checkSubType< ColorCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ColorCallback::setValue(osg::Vec4f). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setValue(val);

		return 0;
	}

	// osg::Vec4f ColorCallback::getValue()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4f ColorCallback::getValue() function, expected prototype:\nosg::Vec4f ColorCallback::getValue()\nClass arguments details:\n");
		}


		ColorCallback* self=Luna< osg::Referenced >::checkSubType< ColorCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec4f ColorCallback::getValue(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec4f stack_lret = self->getValue();
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

ColorCallback* LunaTraits< ColorCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ColorCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void ColorCallback::setValue(osg::Vec4f val)
	// osg::Vec4f ColorCallback::getValue()
}

void LunaTraits< ColorCallback >::_bind_dtor(ColorCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< ColorCallback >::className[] = "ColorCallback";
const char LunaTraits< ColorCallback >::fullName[] = "ColorCallback";
const char LunaTraits< ColorCallback >::moduleName[] = "atb";
const char* LunaTraits< ColorCallback >::parents[] = {"atb.BasicVariableCallback", 0};
const int LunaTraits< ColorCallback >::hash = 70454318;
const int LunaTraits< ColorCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< ColorCallback >::methods[] = {
	{"setCallback", &luna_wrapper_ColorCallback::_bind_setCallback},
	{"getCallback", &luna_wrapper_ColorCallback::_bind_getCallback},
	{"setValue", &luna_wrapper_ColorCallback::_bind_setValue},
	{"getValue", &luna_wrapper_ColorCallback::_bind_getValue},
	{"__eq", &luna_wrapper_ColorCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_ColorCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ColorCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_ColorCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ColorCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_ColorCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< ColorCallback >::enumValues[] = {
	{0,0}
};


