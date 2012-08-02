#include <plug_common.h>

class luna_wrapper_osg_FlushDeletedGLObjectsOperation {
public:
	typedef Luna< osg::FlushDeletedGLObjectsOperation > luna_t;

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
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
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
	static osg::FlushDeletedGLObjectsOperation* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(double availableTime, bool keep = false) function, expected prototype:\nosg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(double availableTime, bool keep = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double availableTime=(double)lua_tonumber(L,1);
		bool keep=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		return new osg::FlushDeletedGLObjectsOperation(availableTime, keep);
	}


	// Function binds:

	// Operator binds:
	// void osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * )
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * ) function, expected prototype:\nvoid osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * )\nClass arguments details:\narg 1 ID = 50169651\n");
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
	{0,0}
};

luna_ConverterType LunaTraits< osg::FlushDeletedGLObjectsOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FlushDeletedGLObjectsOperation >::enumValues[] = {
	{0,0}
};


