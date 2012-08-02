#include <plug_common.h>

class luna_wrapper_osg_Image_UpdateCallback {
public:
	typedef Luna< osg::Image::UpdateCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Image::UpdateCallback* ptr= dynamic_cast< osg::Image::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Image::UpdateCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:

	// Operator binds:
	// void osg::Image::UpdateCallback::operator()(osg::StateAttribute * , osg::NodeVisitor * )
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Image::UpdateCallback::operator()(osg::StateAttribute * , osg::NodeVisitor * ) function, expected prototype:\nvoid osg::Image::UpdateCallback::operator()(osg::StateAttribute * , osg::NodeVisitor * )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::StateAttribute* _arg1=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		osg::NodeVisitor* _arg2=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::Image::UpdateCallback* self=dynamic_cast< osg::Image::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Image::UpdateCallback::operator()(osg::StateAttribute *, osg::NodeVisitor *)");
		}
		self->operator()(_arg1, _arg2);

		return 0;
	}


};

osg::Image::UpdateCallback* LunaTraits< osg::Image::UpdateCallback >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Image::UpdateCallback >::_bind_dtor(osg::Image::UpdateCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Image::UpdateCallback >::className[] = "UpdateCallback";
const char LunaTraits< osg::Image::UpdateCallback >::fullName[] = "osg::Image::UpdateCallback";
const char LunaTraits< osg::Image::UpdateCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Image::UpdateCallback >::parents[] = {"osg.StateAttributeCallback", 0};
const int LunaTraits< osg::Image::UpdateCallback >::hash = 67242554;
const int LunaTraits< osg::Image::UpdateCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Image::UpdateCallback >::methods[] = {
	{"op_call", &luna_wrapper_osg_Image_UpdateCallback::_bind_op_call},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Image::UpdateCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Image_UpdateCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Image::UpdateCallback >::enumValues[] = {
	{0,0}
};


