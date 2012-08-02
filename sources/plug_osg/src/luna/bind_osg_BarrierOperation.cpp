#include <plug_common.h>

class luna_wrapper_osg_BarrierOperation {
public:
	typedef Luna< osg::BarrierOperation > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::BarrierOperation* ptr= dynamic_cast< osg::BarrierOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BarrierOperation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
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
	// osg::BarrierOperation::BarrierOperation(int numThreads, osg::BarrierOperation::PreBlockOp op = osg::BarrierOperation::NO_OPERATION, bool keep = true)
	static osg::BarrierOperation* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BarrierOperation::BarrierOperation(int numThreads, osg::BarrierOperation::PreBlockOp op = osg::BarrierOperation::NO_OPERATION, bool keep = true) function, expected prototype:\nosg::BarrierOperation::BarrierOperation(int numThreads, osg::BarrierOperation::PreBlockOp op = osg::BarrierOperation::NO_OPERATION, bool keep = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int numThreads=(int)lua_tointeger(L,1);
		osg::BarrierOperation::PreBlockOp op=luatop>1 ? (osg::BarrierOperation::PreBlockOp)lua_tointeger(L,2) : osg::BarrierOperation::NO_OPERATION;
		bool keep=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		return new osg::BarrierOperation(numThreads, op, keep);
	}


	// Function binds:
	// void osg::BarrierOperation::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::release() function, expected prototype:\nvoid osg::BarrierOperation::release()\nClass arguments details:\n");
		}


		osg::BarrierOperation* self=dynamic_cast< osg::BarrierOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::release()");
		}
		self->release();

		return 0;
	}


	// Operator binds:
	// void osg::BarrierOperation::operator()(osg::Object * )
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::operator()(osg::Object * ) function, expected prototype:\nvoid osg::BarrierOperation::operator()(osg::Object * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Object* _arg1=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::BarrierOperation* self=dynamic_cast< osg::BarrierOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::operator()(osg::Object *)");
		}
		self->operator()(_arg1);

		return 0;
	}


};

osg::BarrierOperation* LunaTraits< osg::BarrierOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BarrierOperation::_bind_ctor(L);
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
	{"op_call", &luna_wrapper_osg_BarrierOperation::_bind_op_call},
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


