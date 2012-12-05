#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_View_Slave_UpdateSlaveCallback.h>

class luna_wrapper_osg_View_Slave_UpdateSlaveCallback {
public:
	typedef Luna< osg::View::Slave::UpdateSlaveCallback > luna_t;

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
		osg::View::Slave::UpdateSlaveCallback* ptr= dynamic_cast< osg::View::Slave::UpdateSlaveCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::View::Slave::UpdateSlaveCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_updateSlave(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,94812983) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osg::View::Slave::UpdateSlaveCallback::updateSlave(osg::View & view, osg::View::Slave & slave)
	static int _bind_updateSlave(lua_State *L) {
		if (!_lg_typecheck_updateSlave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::UpdateSlaveCallback::updateSlave(osg::View & view, osg::View::Slave & slave) function, expected prototype:\nvoid osg::View::Slave::UpdateSlaveCallback::updateSlave(osg::View & view, osg::View::Slave & slave)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 94812983\n");
		}

		osg::View* view_ptr=dynamic_cast< osg::View* >(Luna< osg::Referenced >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osg::View::Slave::UpdateSlaveCallback::updateSlave function");
		}
		osg::View & view=*view_ptr;
		osg::View::Slave* slave_ptr=(Luna< osg::View::Slave >::check(L,3));
		if( !slave_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg slave in osg::View::Slave::UpdateSlaveCallback::updateSlave function");
		}
		osg::View::Slave & slave=*slave_ptr;

		osg::View::Slave::UpdateSlaveCallback* self=dynamic_cast< osg::View::Slave::UpdateSlaveCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::View::Slave::UpdateSlaveCallback::updateSlave(osg::View &, osg::View::Slave &)");
		}
		self->updateSlave(view, slave);

		return 0;
	}


	// Operator binds:

};

osg::View::Slave::UpdateSlaveCallback* LunaTraits< osg::View::Slave::UpdateSlaveCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::View::Slave::UpdateSlaveCallback::updateSlave(osg::View & view, osg::View::Slave & slave)
}

void LunaTraits< osg::View::Slave::UpdateSlaveCallback >::_bind_dtor(osg::View::Slave::UpdateSlaveCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::View::Slave::UpdateSlaveCallback >::className[] = "UpdateSlaveCallback";
const char LunaTraits< osg::View::Slave::UpdateSlaveCallback >::fullName[] = "osg::View::Slave::UpdateSlaveCallback";
const char LunaTraits< osg::View::Slave::UpdateSlaveCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::View::Slave::UpdateSlaveCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::View::Slave::UpdateSlaveCallback >::hash = 42673855;
const int LunaTraits< osg::View::Slave::UpdateSlaveCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::View::Slave::UpdateSlaveCallback >::methods[] = {
	{"updateSlave", &luna_wrapper_osg_View_Slave_UpdateSlaveCallback::_bind_updateSlave},
	{"__eq", &luna_wrapper_osg_View_Slave_UpdateSlaveCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::View::Slave::UpdateSlaveCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_View_Slave_UpdateSlaveCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::View::Slave::UpdateSlaveCallback >::enumValues[] = {
	{0,0}
};


