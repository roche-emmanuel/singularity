#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_FlushDeletedGLObjectsOperation.h>

class luna_wrapper_osg_FlushDeletedGLObjectsOperation {
public:
	typedef Luna< osg::FlushDeletedGLObjectsOperation > luna_t;

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
		osg::FlushDeletedGLObjectsOperation* ptr= dynamic_cast< osg::FlushDeletedGLObjectsOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FlushDeletedGLObjectsOperation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
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
	// osg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(double availableTime, bool keep = false)
	static osg::FlushDeletedGLObjectsOperation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(double availableTime, bool keep = false) function, expected prototype:\nosg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(double availableTime, bool keep = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double availableTime=(double)lua_tonumber(L,1);
		bool keep=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		return new osg::FlushDeletedGLObjectsOperation(availableTime, keep);
	}

	// osg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(lua_Table * data, double availableTime, bool keep = false)
	static osg::FlushDeletedGLObjectsOperation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(lua_Table * data, double availableTime, bool keep = false) function, expected prototype:\nosg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(lua_Table * data, double availableTime, bool keep = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double availableTime=(double)lua_tonumber(L,2);
		bool keep=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		return new wrapper_osg_FlushDeletedGLObjectsOperation(L,NULL, availableTime, keep);
	}

	// Overload binder for osg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation
	static osg::FlushDeletedGLObjectsOperation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FlushDeletedGLObjectsOperation, cannot match any of the overloads for function FlushDeletedGLObjectsOperation:\n  FlushDeletedGLObjectsOperation(double, bool)\n  FlushDeletedGLObjectsOperation(lua_Table *, double, bool)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:
	// void osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * arg1)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * arg1) function, expected prototype:\nvoid osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* _arg1=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osg::FlushDeletedGLObjectsOperation* self=dynamic_cast< osg::FlushDeletedGLObjectsOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext *)");
		}
		self->operator()(_arg1);

		return 0;
	}


};

osg::FlushDeletedGLObjectsOperation* LunaTraits< osg::FlushDeletedGLObjectsOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind_ctor(L);
}

void LunaTraits< osg::FlushDeletedGLObjectsOperation >::_bind_dtor(osg::FlushDeletedGLObjectsOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FlushDeletedGLObjectsOperation >::className[] = "FlushDeletedGLObjectsOperation";
const char LunaTraits< osg::FlushDeletedGLObjectsOperation >::fullName[] = "osg::FlushDeletedGLObjectsOperation";
const char LunaTraits< osg::FlushDeletedGLObjectsOperation >::moduleName[] = "osg";
const char* LunaTraits< osg::FlushDeletedGLObjectsOperation >::parents[] = {"osg.GraphicsOperation", 0};
const int LunaTraits< osg::FlushDeletedGLObjectsOperation >::hash = 15266697;
const int LunaTraits< osg::FlushDeletedGLObjectsOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FlushDeletedGLObjectsOperation >::methods[] = {
	{"op_call", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind_op_call},
	{"__eq", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FlushDeletedGLObjectsOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FlushDeletedGLObjectsOperation >::enumValues[] = {
	{0,0}
};


