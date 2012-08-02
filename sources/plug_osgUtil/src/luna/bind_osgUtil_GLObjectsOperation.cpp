#include <plug_common.h>

class luna_wrapper_osgUtil_GLObjectsOperation {
public:
	typedef Luna< osgUtil::GLObjectsOperation > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::GLObjectsOperation* ptr= dynamic_cast< osgUtil::GLObjectsOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::GLObjectsOperation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// osgUtil::GLObjectsOperation::GLObjectsOperation(unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)
	static osgUtil::GLObjectsOperation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::GLObjectsOperation::GLObjectsOperation(unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) function, expected prototype:\nosgUtil::GLObjectsOperation::GLObjectsOperation(unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES;

		return new osgUtil::GLObjectsOperation(mode);
	}

	// osgUtil::GLObjectsOperation::GLObjectsOperation(osg::Node * subgraph, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)
	static osgUtil::GLObjectsOperation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::GLObjectsOperation::GLObjectsOperation(osg::Node * subgraph, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) function, expected prototype:\nosgUtil::GLObjectsOperation::GLObjectsOperation(osg::Node * subgraph, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Node* subgraph=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,1));
		unsigned int mode=luatop>1 ? (unsigned int)lua_tointeger(L,2) : osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES;

		return new osgUtil::GLObjectsOperation(subgraph, mode);
	}

	// Overload binder for osgUtil::GLObjectsOperation::GLObjectsOperation
	static osgUtil::GLObjectsOperation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GLObjectsOperation, cannot match any of the overloads for function GLObjectsOperation:\n  GLObjectsOperation(unsigned int)\n  GLObjectsOperation(osg::Node *, unsigned int)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:
	// void osgUtil::GLObjectsOperation::operator()(osg::GraphicsContext * context)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsOperation::operator()(osg::GraphicsContext * context) function, expected prototype:\nvoid osgUtil::GLObjectsOperation::operator()(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* context=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::GLObjectsOperation* self=dynamic_cast< osgUtil::GLObjectsOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsOperation::operator()(osg::GraphicsContext *)");
		}
		self->operator()(context);

		return 0;
	}


};

osgUtil::GLObjectsOperation* LunaTraits< osgUtil::GLObjectsOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_GLObjectsOperation::_bind_ctor(L);
}

void LunaTraits< osgUtil::GLObjectsOperation >::_bind_dtor(osgUtil::GLObjectsOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::GLObjectsOperation >::className[] = "GLObjectsOperation";
const char LunaTraits< osgUtil::GLObjectsOperation >::fullName[] = "osgUtil::GLObjectsOperation";
const char LunaTraits< osgUtil::GLObjectsOperation >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::GLObjectsOperation >::parents[] = {"osg.GraphicsOperation", 0};
const int LunaTraits< osgUtil::GLObjectsOperation >::hash = 41072322;
const int LunaTraits< osgUtil::GLObjectsOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::GLObjectsOperation >::methods[] = {
	{"op_call", &luna_wrapper_osgUtil_GLObjectsOperation::_bind_op_call},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::GLObjectsOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_GLObjectsOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::GLObjectsOperation >::enumValues[] = {
	{0,0}
};


