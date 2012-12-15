#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_NotifyHandler.h>

class luna_wrapper_osg_NotifyHandler {
public:
	typedef Luna< osg::NotifyHandler > luna_t;

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
		//osg::NotifyHandler* ptr= dynamic_cast< osg::NotifyHandler* >(Luna< osg::Referenced >::check(L,1));
		osg::NotifyHandler* ptr= luna_caster< osg::Referenced, osg::NotifyHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::NotifyHandler >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_notify(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osg::NotifyHandler::notify(osg::NotifySeverity severity, const char * message)
	static int _bind_notify(lua_State *L) {
		if (!_lg_typecheck_notify(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NotifyHandler::notify(osg::NotifySeverity severity, const char * message) function, expected prototype:\nvoid osg::NotifyHandler::notify(osg::NotifySeverity severity, const char * message)\nClass arguments details:\n");
		}

		osg::NotifySeverity severity=(osg::NotifySeverity)lua_tointeger(L,2);
		const char * message=(const char *)lua_tostring(L,3);

		osg::NotifyHandler* self=Luna< osg::Referenced >::checkSubType< osg::NotifyHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NotifyHandler::notify(osg::NotifySeverity, const char *)");
		}
		self->notify(severity, message);

		return 0;
	}


	// Operator binds:

};

osg::NotifyHandler* LunaTraits< osg::NotifyHandler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::NotifyHandler::notify(osg::NotifySeverity severity, const char * message)
}

void LunaTraits< osg::NotifyHandler >::_bind_dtor(osg::NotifyHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::NotifyHandler >::className[] = "NotifyHandler";
const char LunaTraits< osg::NotifyHandler >::fullName[] = "osg::NotifyHandler";
const char LunaTraits< osg::NotifyHandler >::moduleName[] = "osg";
const char* LunaTraits< osg::NotifyHandler >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::NotifyHandler >::hash = 63022068;
const int LunaTraits< osg::NotifyHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::NotifyHandler >::methods[] = {
	{"notify", &luna_wrapper_osg_NotifyHandler::_bind_notify},
	{"__eq", &luna_wrapper_osg_NotifyHandler::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NotifyHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_NotifyHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NotifyHandler >::enumValues[] = {
	{0,0}
};


