#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_RenderBin_DrawCallback.h>

class luna_wrapper_osgUtil_RenderBin_DrawCallback {
public:
	typedef Luna< osgUtil::RenderBin::DrawCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgUtil::RenderBin::DrawCallback* ptr= dynamic_cast< osgUtil::RenderBin::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::RenderBin::DrawCallback* ptr= luna_caster< osg::Referenced, osgUtil::RenderBin::DrawCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::RenderBin::DrawCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

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

	// Constructor binds:

	// Function binds:
	// void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2286263\narg 3 ID = 50169651\n");
		}

		osgUtil::RenderBin* bin=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderBin >(L,2));
		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,3));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderBin::DrawCallback::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,4));

		osgUtil::RenderBin::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderBin::DrawCallback >(L,1);
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
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
}

void LunaTraits< osgUtil::RenderBin::DrawCallback >::_bind_dtor(osgUtil::RenderBin::DrawCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::RenderBin::DrawCallback >::className[] = "DrawCallback";
const char LunaTraits< osgUtil::RenderBin::DrawCallback >::fullName[] = "osgUtil::RenderBin::DrawCallback";
const char LunaTraits< osgUtil::RenderBin::DrawCallback >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::RenderBin::DrawCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::RenderBin::DrawCallback >::hash = 94600367;
const int LunaTraits< osgUtil::RenderBin::DrawCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::RenderBin::DrawCallback >::methods[] = {
	{"drawImplementation", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_bind_drawImplementation},
	{"__eq", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderBin::DrawCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderBin::DrawCallback >::enumValues[] = {
	{0,0}
};


