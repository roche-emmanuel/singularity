#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_StandardNotifyHandler.h>

class luna_wrapper_osg_StandardNotifyHandler {
public:
	typedef Luna< osg::StandardNotifyHandler > luna_t;

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
		//osg::StandardNotifyHandler* ptr= dynamic_cast< osg::StandardNotifyHandler* >(Luna< osg::Referenced >::check(L,1));
		osg::StandardNotifyHandler* ptr= luna_caster< osg::Referenced, osg::StandardNotifyHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::StandardNotifyHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_notify(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_notify(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void osg::StandardNotifyHandler::notify(osg::NotifySeverity severity, const char * message)
	static int _bind_notify(lua_State *L) {
		if (!_lg_typecheck_notify(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StandardNotifyHandler::notify(osg::NotifySeverity severity, const char * message) function, expected prototype:\nvoid osg::StandardNotifyHandler::notify(osg::NotifySeverity severity, const char * message)\nClass arguments details:\n");
		}

		osg::NotifySeverity severity=(osg::NotifySeverity)lua_tointeger(L,2);
		const char * message=(const char *)lua_tostring(L,3);

		osg::StandardNotifyHandler* self=Luna< osg::Referenced >::checkSubType< osg::StandardNotifyHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StandardNotifyHandler::notify(osg::NotifySeverity, const char *)");
		}
		self->notify(severity, message);

		return 0;
	}

	// void osg::StandardNotifyHandler::base_notify(osg::NotifySeverity severity, const char * message)
	static int _bind_base_notify(lua_State *L) {
		if (!_lg_typecheck_base_notify(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StandardNotifyHandler::base_notify(osg::NotifySeverity severity, const char * message) function, expected prototype:\nvoid osg::StandardNotifyHandler::base_notify(osg::NotifySeverity severity, const char * message)\nClass arguments details:\n");
		}

		osg::NotifySeverity severity=(osg::NotifySeverity)lua_tointeger(L,2);
		const char * message=(const char *)lua_tostring(L,3);

		osg::StandardNotifyHandler* self=Luna< osg::Referenced >::checkSubType< osg::StandardNotifyHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StandardNotifyHandler::base_notify(osg::NotifySeverity, const char *)");
		}
		self->StandardNotifyHandler::notify(severity, message);

		return 0;
	}


	// Operator binds:

};

osg::StandardNotifyHandler* LunaTraits< osg::StandardNotifyHandler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::StandardNotifyHandler >::_bind_dtor(osg::StandardNotifyHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::StandardNotifyHandler >::className[] = "StandardNotifyHandler";
const char LunaTraits< osg::StandardNotifyHandler >::fullName[] = "osg::StandardNotifyHandler";
const char LunaTraits< osg::StandardNotifyHandler >::moduleName[] = "osg";
const char* LunaTraits< osg::StandardNotifyHandler >::parents[] = {"osg.NotifyHandler", 0};
const int LunaTraits< osg::StandardNotifyHandler >::hash = 14159557;
const int LunaTraits< osg::StandardNotifyHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::StandardNotifyHandler >::methods[] = {
	{"notify", &luna_wrapper_osg_StandardNotifyHandler::_bind_notify},
	{"base_notify", &luna_wrapper_osg_StandardNotifyHandler::_bind_base_notify},
	{"__eq", &luna_wrapper_osg_StandardNotifyHandler::_bind___eq},
	{"getTable", &luna_wrapper_osg_StandardNotifyHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StandardNotifyHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_StandardNotifyHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StandardNotifyHandler >::enumValues[] = {
	{0,0}
};


