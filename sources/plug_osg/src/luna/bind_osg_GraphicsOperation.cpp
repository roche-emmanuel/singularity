#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GraphicsOperation.h>

class luna_wrapper_osg_GraphicsOperation {
public:
	typedef Luna< osg::GraphicsOperation > luna_t;

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
		osg::GraphicsOperation* ptr= dynamic_cast< osg::GraphicsOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsOperation >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_call_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}


	// Function binds:

	// Operator binds:
	// void osg::GraphicsOperation::operator()(osg::Object * object)
	static int _bind_op_call_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsOperation::operator()(osg::Object * object) function, expected prototype:\nvoid osg::GraphicsOperation::operator()(osg::Object * object)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Object* object=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsOperation* self=dynamic_cast< osg::GraphicsOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsOperation::operator()(osg::Object *)");
		}
		self->operator()(object);

		return 0;
	}

	// void osg::GraphicsOperation::operator()(osg::GraphicsContext * context)
	static int _bind_op_call_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsOperation::operator()(osg::GraphicsContext * context) function, expected prototype:\nvoid osg::GraphicsOperation::operator()(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* context=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsOperation* self=dynamic_cast< osg::GraphicsOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsOperation::operator()(osg::GraphicsContext *)");
		}
		self->operator()(context);

		return 0;
	}

	// Overload binder for osg::GraphicsOperation::operator()
	static int _bind_op_call(lua_State *L) {
		if (_lg_typecheck_op_call_overload_1(L)) return _bind_op_call_overload_1(L);
		if (_lg_typecheck_op_call_overload_2(L)) return _bind_op_call_overload_2(L);

		luaL_error(L, "error in function operator(), cannot match any of the overloads for function operator():\n  operator()(osg::Object *)\n  operator()(osg::GraphicsContext *)\n");
		return 0;
	}


};

osg::GraphicsOperation* LunaTraits< osg::GraphicsOperation >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::GraphicsOperation::operator()(osg::GraphicsContext * context)
}

void LunaTraits< osg::GraphicsOperation >::_bind_dtor(osg::GraphicsOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsOperation >::className[] = "GraphicsOperation";
const char LunaTraits< osg::GraphicsOperation >::fullName[] = "osg::GraphicsOperation";
const char LunaTraits< osg::GraphicsOperation >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsOperation >::parents[] = {"osg.Operation", 0};
const int LunaTraits< osg::GraphicsOperation >::hash = 64493298;
const int LunaTraits< osg::GraphicsOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsOperation >::methods[] = {
	{"op_call", &luna_wrapper_osg_GraphicsOperation::_bind_op_call},
	{"__eq", &luna_wrapper_osg_GraphicsOperation::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsOperation >::enumValues[] = {
	{0,0}
};


