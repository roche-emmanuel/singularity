#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BarrierOperation.h>

class luna_wrapper_osg_BarrierOperation {
public:
	typedef Luna< osg::BarrierOperation > luna_t;

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
		//osg::BarrierOperation* ptr= dynamic_cast< osg::BarrierOperation* >(Luna< osg::Referenced >::check(L,1));
		osg::BarrierOperation* ptr= luna_caster< osg::Referenced, osg::BarrierOperation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BarrierOperation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:
	// void osg::BarrierOperation::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::release() function, expected prototype:\nvoid osg::BarrierOperation::release()\nClass arguments details:\n");
		}


		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::release()");
		}
		self->release();

		return 0;
	}

	// void osg::BarrierOperation::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::base_release() function, expected prototype:\nvoid osg::BarrierOperation::base_release()\nClass arguments details:\n");
		}


		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::base_release()");
		}
		self->BarrierOperation::release();

		return 0;
	}


	// Operator binds:
	// void osg::BarrierOperation::operator()(osg::Object * arg1)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::operator()(osg::Object * arg1) function, expected prototype:\nvoid osg::BarrierOperation::operator()(osg::Object * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Object* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::operator()(osg::Object *)");
		}
		self->operator()(_arg1);

		return 0;
	}


};

osg::BarrierOperation* LunaTraits< osg::BarrierOperation >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::BarrierOperation >::_bind_dtor(osg::BarrierOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BarrierOperation >::className[] = "BarrierOperation";
const char LunaTraits< osg::BarrierOperation >::fullName[] = "osg::BarrierOperation";
const char LunaTraits< osg::BarrierOperation >::moduleName[] = "osg";
const char* LunaTraits< osg::BarrierOperation >::parents[] = {"osg.Operation", 0};
const int LunaTraits< osg::BarrierOperation >::hash = 64442474;
const int LunaTraits< osg::BarrierOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BarrierOperation >::methods[] = {
	{"release", &luna_wrapper_osg_BarrierOperation::_bind_release},
	{"base_release", &luna_wrapper_osg_BarrierOperation::_bind_base_release},
	{"op_call", &luna_wrapper_osg_BarrierOperation::_bind_op_call},
	{"__eq", &luna_wrapper_osg_BarrierOperation::_bind___eq},
	{"getTable", &luna_wrapper_osg_BarrierOperation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BarrierOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BarrierOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BarrierOperation >::enumValues[] = {
	{"NO_OPERATION", osg::BarrierOperation::NO_OPERATION},
	{"GL_FLUSH", osg::BarrierOperation::GL_FLUSH},
	{"GL_FINISH", osg::BarrierOperation::GL_FINISH},
	{0,0}
};


