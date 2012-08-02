#include <plug_common.h>

class luna_wrapper_osg_BlockAndFlushOperation {
public:
	typedef Luna< osg::BlockAndFlushOperation > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::BlockAndFlushOperation* ptr= dynamic_cast< osg::BlockAndFlushOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlockAndFlushOperation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_release(lua_State *L) {
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
	// osg::BlockAndFlushOperation::BlockAndFlushOperation()
	static osg::BlockAndFlushOperation* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlockAndFlushOperation::BlockAndFlushOperation() function, expected prototype:\nosg::BlockAndFlushOperation::BlockAndFlushOperation()\nClass arguments details:\n");
		}


		return new osg::BlockAndFlushOperation();
	}


	// Function binds:
	// void osg::BlockAndFlushOperation::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlockAndFlushOperation::release() function, expected prototype:\nvoid osg::BlockAndFlushOperation::release()\nClass arguments details:\n");
		}


		osg::BlockAndFlushOperation* self=dynamic_cast< osg::BlockAndFlushOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlockAndFlushOperation::release()");
		}
		self->release();

		return 0;
	}


	// Operator binds:
	// void osg::BlockAndFlushOperation::operator()(osg::GraphicsContext * )
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlockAndFlushOperation::operator()(osg::GraphicsContext * ) function, expected prototype:\nvoid osg::BlockAndFlushOperation::operator()(osg::GraphicsContext * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* _arg1=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osg::BlockAndFlushOperation* self=dynamic_cast< osg::BlockAndFlushOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlockAndFlushOperation::operator()(osg::GraphicsContext *)");
		}
		self->operator()(_arg1);

		return 0;
	}


};

osg::BlockAndFlushOperation* LunaTraits< osg::BlockAndFlushOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlockAndFlushOperation::_bind_ctor(L);
}

void LunaTraits< osg::BlockAndFlushOperation >::_bind_dtor(osg::BlockAndFlushOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlockAndFlushOperation >::className[] = "BlockAndFlushOperation";
const char LunaTraits< osg::BlockAndFlushOperation >::fullName[] = "osg::BlockAndFlushOperation";
const char LunaTraits< osg::BlockAndFlushOperation >::moduleName[] = "osg";
const char* LunaTraits< osg::BlockAndFlushOperation >::parents[] = {"osg.GraphicsOperation", 0};
const int LunaTraits< osg::BlockAndFlushOperation >::hash = 75998919;
const int LunaTraits< osg::BlockAndFlushOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BlockAndFlushOperation >::methods[] = {
	{"release", &luna_wrapper_osg_BlockAndFlushOperation::_bind_release},
	{"op_call", &luna_wrapper_osg_BlockAndFlushOperation::_bind_op_call},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlockAndFlushOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlockAndFlushOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlockAndFlushOperation >::enumValues[] = {
	{0,0}
};


