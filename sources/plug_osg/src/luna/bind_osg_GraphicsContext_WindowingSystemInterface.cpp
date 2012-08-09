#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext_WindowingSystemInterface {
public:
	typedef Luna< osg::GraphicsContext::WindowingSystemInterface > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::GraphicsContext::WindowingSystemInterface* ptr= dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsContext::WindowingSystemInterface >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_createGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)
	static int _bind_createGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_createGraphicsContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits) function, expected prototype:\nosg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext::Traits* traits=dynamic_cast< osg::GraphicsContext::Traits* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext::WindowingSystemInterface* self=dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits *)");
		}
		osg::GraphicsContext * lret = self->createGraphicsContext(traits);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osg::GraphicsContext::WindowingSystemInterface* LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// unsigned int osg::GraphicsContext::WindowingSystemInterface::getNumScreens(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier = osg::GraphicsContext::ScreenIdentifier ())
	// void osg::GraphicsContext::WindowingSystemInterface::getScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettings & resolution)
	// void osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettingsList & resolutionList)
	// osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)

	// Abstract operators:
}

void LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::_bind_dtor(osg::GraphicsContext::WindowingSystemInterface* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::className[] = "WindowingSystemInterface";
const char LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::fullName[] = "osg::GraphicsContext::WindowingSystemInterface";
const char LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::hash = 67801403;
const int LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::methods[] = {
	{"createGraphicsContext", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_createGraphicsContext},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::enumValues[] = {
	{0,0}
};


