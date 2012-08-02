#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext_ResizedCallback {
public:
	typedef Luna< osg::GraphicsContext::ResizedCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::GraphicsContext::ResizedCallback* ptr= dynamic_cast< osg::GraphicsContext::ResizedCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsContext::ResizedCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_resizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osg::GraphicsContext::ResizedCallback::resizedImplementation(osg::GraphicsContext * gc, int x, int y, int width, int height)
	static int _bind_resizedImplementation(lua_State *L) {
		if (!_lg_typecheck_resizedImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::ResizedCallback::resizedImplementation(osg::GraphicsContext * gc, int x, int y, int width, int height) function, expected prototype:\nvoid osg::GraphicsContext::ResizedCallback::resizedImplementation(osg::GraphicsContext * gc, int x, int y, int width, int height)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* gc=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);

		osg::GraphicsContext::ResizedCallback* self=dynamic_cast< osg::GraphicsContext::ResizedCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::ResizedCallback::resizedImplementation(osg::GraphicsContext *, int, int, int, int)");
		}
		self->resizedImplementation(gc, x, y, width, height);

		return 0;
	}


	// Operator binds:

};

osg::GraphicsContext::ResizedCallback* LunaTraits< osg::GraphicsContext::ResizedCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::GraphicsContext::ResizedCallback::resizedImplementation(osg::GraphicsContext * gc, int x, int y, int width, int height)

	// Abstract operators:
}

void LunaTraits< osg::GraphicsContext::ResizedCallback >::_bind_dtor(osg::GraphicsContext::ResizedCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsContext::ResizedCallback >::className[] = "ResizedCallback";
const char LunaTraits< osg::GraphicsContext::ResizedCallback >::fullName[] = "osg::GraphicsContext::ResizedCallback";
const char LunaTraits< osg::GraphicsContext::ResizedCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::ResizedCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GraphicsContext::ResizedCallback >::hash = 62903875;
const int LunaTraits< osg::GraphicsContext::ResizedCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsContext::ResizedCallback >::methods[] = {
	{"resizedImplementation", &luna_wrapper_osg_GraphicsContext_ResizedCallback::_bind_resizedImplementation},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::ResizedCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsContext_ResizedCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::ResizedCallback >::enumValues[] = {
	{0,0}
};


