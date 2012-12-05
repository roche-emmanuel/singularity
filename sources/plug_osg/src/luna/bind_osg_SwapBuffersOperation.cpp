#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_SwapBuffersOperation.h>

class luna_wrapper_osg_SwapBuffersOperation {
public:
	typedef Luna< osg::SwapBuffersOperation > luna_t;

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
		osg::SwapBuffersOperation* ptr= dynamic_cast< osg::SwapBuffersOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::SwapBuffersOperation >::push(L,ptr,false);
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

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::SwapBuffersOperation::SwapBuffersOperation()
	static osg::SwapBuffersOperation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::SwapBuffersOperation::SwapBuffersOperation() function, expected prototype:\nosg::SwapBuffersOperation::SwapBuffersOperation()\nClass arguments details:\n");
		}


		return new osg::SwapBuffersOperation();
	}

	// osg::SwapBuffersOperation::SwapBuffersOperation(lua_Table * data)
	static osg::SwapBuffersOperation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::SwapBuffersOperation::SwapBuffersOperation(lua_Table * data) function, expected prototype:\nosg::SwapBuffersOperation::SwapBuffersOperation(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_SwapBuffersOperation(L,NULL);
	}

	// Overload binder for osg::SwapBuffersOperation::SwapBuffersOperation
	static osg::SwapBuffersOperation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SwapBuffersOperation, cannot match any of the overloads for function SwapBuffersOperation:\n  SwapBuffersOperation()\n  SwapBuffersOperation(lua_Table *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:
	// void osg::SwapBuffersOperation::operator()(osg::GraphicsContext * context)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::SwapBuffersOperation::operator()(osg::GraphicsContext * context) function, expected prototype:\nvoid osg::SwapBuffersOperation::operator()(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* context=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osg::SwapBuffersOperation* self=dynamic_cast< osg::SwapBuffersOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::SwapBuffersOperation::operator()(osg::GraphicsContext *)");
		}
		self->operator()(context);

		return 0;
	}


};

osg::SwapBuffersOperation* LunaTraits< osg::SwapBuffersOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_SwapBuffersOperation::_bind_ctor(L);
}

void LunaTraits< osg::SwapBuffersOperation >::_bind_dtor(osg::SwapBuffersOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::SwapBuffersOperation >::className[] = "SwapBuffersOperation";
const char LunaTraits< osg::SwapBuffersOperation >::fullName[] = "osg::SwapBuffersOperation";
const char LunaTraits< osg::SwapBuffersOperation >::moduleName[] = "osg";
const char* LunaTraits< osg::SwapBuffersOperation >::parents[] = {"osg.GraphicsOperation", 0};
const int LunaTraits< osg::SwapBuffersOperation >::hash = 11954890;
const int LunaTraits< osg::SwapBuffersOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::SwapBuffersOperation >::methods[] = {
	{"op_call", &luna_wrapper_osg_SwapBuffersOperation::_bind_op_call},
	{"__eq", &luna_wrapper_osg_SwapBuffersOperation::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::SwapBuffersOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_SwapBuffersOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::SwapBuffersOperation >::enumValues[] = {
	{0,0}
};


