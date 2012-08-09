#include <plug_common.h>

class luna_wrapper_osg_State_DynamicObjectRenderingCompletedCallback {
public:
	typedef Luna< osg::State::DynamicObjectRenderingCompletedCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::State::DynamicObjectRenderingCompletedCallback* ptr= dynamic_cast< osg::State::DynamicObjectRenderingCompletedCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::State::DynamicObjectRenderingCompletedCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_completed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osg::State::DynamicObjectRenderingCompletedCallback::completed(osg::State * )
	static int _bind_completed(lua_State *L) {
		if (!_lg_typecheck_completed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::State::DynamicObjectRenderingCompletedCallback::completed(osg::State * ) function, expected prototype:\nvoid osg::State::DynamicObjectRenderingCompletedCallback::completed(osg::State * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));

		osg::State::DynamicObjectRenderingCompletedCallback* self=dynamic_cast< osg::State::DynamicObjectRenderingCompletedCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::State::DynamicObjectRenderingCompletedCallback::completed(osg::State *)");
		}
		self->completed(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::State::DynamicObjectRenderingCompletedCallback* LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::State::DynamicObjectRenderingCompletedCallback::completed(osg::State * )

	// Abstract operators:
}

void LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::_bind_dtor(osg::State::DynamicObjectRenderingCompletedCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::className[] = "DynamicObjectRenderingCompletedCallback";
const char LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::fullName[] = "osg::State::DynamicObjectRenderingCompletedCallback";
const char LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::hash = 27574193;
const int LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::methods[] = {
	{"completed", &luna_wrapper_osg_State_DynamicObjectRenderingCompletedCallback::_bind_completed},
	{0,0}
};

luna_ConverterType LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_State_DynamicObjectRenderingCompletedCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::enumValues[] = {
	{0,0}
};

