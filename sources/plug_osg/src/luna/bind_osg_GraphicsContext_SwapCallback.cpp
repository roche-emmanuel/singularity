#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext_SwapCallback {
public:
	typedef Luna< osg::GraphicsContext::SwapCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::GraphicsContext::SwapCallback* ptr= dynamic_cast< osg::GraphicsContext::SwapCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsContext::SwapCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_swapBuffersImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext * gc)
	static int _bind_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext * gc) function, expected prototype:\nvoid osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext * gc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* gc=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext::SwapCallback* self=dynamic_cast< osg::GraphicsContext::SwapCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext *)");
		}
		self->swapBuffersImplementation(gc);

		return 0;
	}


	// Operator binds:

};

osg::GraphicsContext::SwapCallback* LunaTraits< osg::GraphicsContext::SwapCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext * gc)

	// Abstract operators:
}

void LunaTraits< osg::GraphicsContext::SwapCallback >::_bind_dtor(osg::GraphicsContext::SwapCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsContext::SwapCallback >::className[] = "SwapCallback";
const char LunaTraits< osg::GraphicsContext::SwapCallback >::fullName[] = "osg::GraphicsContext::SwapCallback";
const char LunaTraits< osg::GraphicsContext::SwapCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::SwapCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GraphicsContext::SwapCallback >::hash = 36704844;
const int LunaTraits< osg::GraphicsContext::SwapCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsContext::SwapCallback >::methods[] = {
	{"swapBuffersImplementation", &luna_wrapper_osg_GraphicsContext_SwapCallback::_bind_swapBuffersImplementation},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::SwapCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsContext_SwapCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::SwapCallback >::enumValues[] = {
	{0,0}
};

