#include <plug_common.h>

class luna_wrapper_osgUtil_TransformCallback {
public:
	typedef Luna< osgUtil::TransformCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::TransformCallback* ptr= dynamic_cast< osgUtil::TransformCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::TransformCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setPause(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::TransformCallback::TransformCallback(const osg::Vec3f & pivot, const osg::Vec3f & axis, float angularVelocity)
	static osgUtil::TransformCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::TransformCallback::TransformCallback(const osg::Vec3f & pivot, const osg::Vec3f & axis, float angularVelocity) function, expected prototype:\nosgUtil::TransformCallback::TransformCallback(const osg::Vec3f & pivot, const osg::Vec3f & axis, float angularVelocity)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n");
		}

		const osg::Vec3f* pivot_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !pivot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivot in osgUtil::TransformCallback::TransformCallback function");
		}
		const osg::Vec3f & pivot=*pivot_ptr;
		const osg::Vec3f* axis_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osgUtil::TransformCallback::TransformCallback function");
		}
		const osg::Vec3f & axis=*axis_ptr;
		float angularVelocity=(float)lua_tonumber(L,3);

		return new osgUtil::TransformCallback(pivot, axis, angularVelocity);
	}


	// Function binds:
	// void osgUtil::TransformCallback::setPause(bool pause)
	static int _bind_setPause(lua_State *L) {
		if (!_lg_typecheck_setPause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TransformCallback::setPause(bool pause) function, expected prototype:\nvoid osgUtil::TransformCallback::setPause(bool pause)\nClass arguments details:\n");
		}

		bool pause=(bool)(lua_toboolean(L,2)==1);

		osgUtil::TransformCallback* self=dynamic_cast< osgUtil::TransformCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TransformCallback::setPause(bool)");
		}
		self->setPause(pause);

		return 0;
	}


	// Operator binds:
	// void osgUtil::TransformCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TransformCallback::operator()(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osgUtil::TransformCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osgUtil::TransformCallback* self=dynamic_cast< osgUtil::TransformCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TransformCallback::operator()(osg::Node *, osg::NodeVisitor *)");
		}
		self->operator()(node, nv);

		return 0;
	}


};

osgUtil::TransformCallback* LunaTraits< osgUtil::TransformCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_TransformCallback::_bind_ctor(L);
}

void LunaTraits< osgUtil::TransformCallback >::_bind_dtor(osgUtil::TransformCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::TransformCallback >::className[] = "TransformCallback";
const char LunaTraits< osgUtil::TransformCallback >::fullName[] = "osgUtil::TransformCallback";
const char LunaTraits< osgUtil::TransformCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::TransformCallback >::parents[] = {"osg.NodeCallback", 0};
const int LunaTraits< osgUtil::TransformCallback >::hash = 26178532;
const int LunaTraits< osgUtil::TransformCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::TransformCallback >::methods[] = {
	{"setPause", &luna_wrapper_osgUtil_TransformCallback::_bind_setPause},
	{"op_call", &luna_wrapper_osgUtil_TransformCallback::_bind_op_call},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::TransformCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_TransformCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::TransformCallback >::enumValues[] = {
	{0,0}
};


