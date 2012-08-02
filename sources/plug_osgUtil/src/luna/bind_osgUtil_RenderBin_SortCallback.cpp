#include <plug_common.h>

class luna_wrapper_osgUtil_RenderBin_SortCallback {
public:
	typedef Luna< osgUtil::RenderBin::SortCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::RenderBin::SortCallback* ptr= dynamic_cast< osgUtil::RenderBin::SortCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::RenderBin::SortCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_sortImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * )
	static int _bind_sortImplementation(lua_State *L) {
		if (!_lg_typecheck_sortImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * ) function, expected prototype:\nvoid osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::RenderBin* _arg1=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderBin::SortCallback* self=dynamic_cast< osgUtil::RenderBin::SortCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin *)");
		}
		self->sortImplementation(_arg1);

		return 0;
	}


	// Operator binds:

};

osgUtil::RenderBin::SortCallback* LunaTraits< osgUtil::RenderBin::SortCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * )

	// Abstract operators:
}

void LunaTraits< osgUtil::RenderBin::SortCallback >::_bind_dtor(osgUtil::RenderBin::SortCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::RenderBin::SortCallback >::className[] = "SortCallback";
const char LunaTraits< osgUtil::RenderBin::SortCallback >::fullName[] = "osgUtil::RenderBin::SortCallback";
const char LunaTraits< osgUtil::RenderBin::SortCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderBin::SortCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::RenderBin::SortCallback >::hash = 60083473;
const int LunaTraits< osgUtil::RenderBin::SortCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::RenderBin::SortCallback >::methods[] = {
	{"sortImplementation", &luna_wrapper_osgUtil_RenderBin_SortCallback::_bind_sortImplementation},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderBin::SortCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_RenderBin_SortCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderBin::SortCallback >::enumValues[] = {
	{0,0}
};


