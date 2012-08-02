#include <plug_common.h>

class luna_wrapper_osgUtil_RenderBin_DrawCallback {
public:
	typedef Luna< osgUtil::RenderBin::DrawCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::RenderBin::DrawCallback* ptr= dynamic_cast< osgUtil::RenderBin::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::RenderBin::DrawCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2286263) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2286263\narg 3 ID = 50169651\n");
		}

		osgUtil::RenderBin* bin=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,2));
		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,3));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderBin::DrawCallback::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=dynamic_cast< osgUtil::RenderLeaf* >(Luna< osg::Referenced >::check(L,4));

		osgUtil::RenderBin::DrawCallback* self=dynamic_cast< osgUtil::RenderBin::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin *, osg::RenderInfo &, osgUtil::RenderLeaf *&)");
		}
		self->drawImplementation(bin, renderInfo, previous);

		return 0;
	}


	// Operator binds:

};

osgUtil::RenderBin::DrawCallback* LunaTraits< osgUtil::RenderBin::DrawCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)

	// Abstract operators:
}

void LunaTraits< osgUtil::RenderBin::DrawCallback >::_bind_dtor(osgUtil::RenderBin::DrawCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::RenderBin::DrawCallback >::className[] = "DrawCallback";
const char LunaTraits< osgUtil::RenderBin::DrawCallback >::fullName[] = "osgUtil::RenderBin::DrawCallback";
const char LunaTraits< osgUtil::RenderBin::DrawCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderBin::DrawCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::RenderBin::DrawCallback >::hash = 94600367;
const int LunaTraits< osgUtil::RenderBin::DrawCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::RenderBin::DrawCallback >::methods[] = {
	{"drawImplementation", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_bind_drawImplementation},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderBin::DrawCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderBin::DrawCallback >::enumValues[] = {
	{0,0}
};


