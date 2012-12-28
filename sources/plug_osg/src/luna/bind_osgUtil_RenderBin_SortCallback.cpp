#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_RenderBin_SortCallback.h>

class luna_wrapper_osgUtil_RenderBin_SortCallback {
public:
	typedef Luna< osgUtil::RenderBin::SortCallback > luna_t;

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
		//osgUtil::RenderBin::SortCallback* ptr= dynamic_cast< osgUtil::RenderBin::SortCallback* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::RenderBin::SortCallback* ptr= luna_caster< osg::Referenced, osgUtil::RenderBin::SortCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::RenderBin::SortCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_sortImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * arg1)
	static int _bind_sortImplementation(lua_State *L) {
		if (!_lg_typecheck_sortImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * arg1) function, expected prototype:\nvoid osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::RenderBin* _arg1=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderBin >(L,2));

		osgUtil::RenderBin::SortCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderBin::SortCallback >(L,1);
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
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * arg1)
}

void LunaTraits< osgUtil::RenderBin::SortCallback >::_bind_dtor(osgUtil::RenderBin::SortCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::RenderBin::SortCallback >::className[] = "SortCallback";
const char LunaTraits< osgUtil::RenderBin::SortCallback >::fullName[] = "osgUtil::RenderBin::SortCallback";
const char LunaTraits< osgUtil::RenderBin::SortCallback >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::RenderBin::SortCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::RenderBin::SortCallback >::hash = 60083473;
const int LunaTraits< osgUtil::RenderBin::SortCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::RenderBin::SortCallback >::methods[] = {
	{"sortImplementation", &luna_wrapper_osgUtil_RenderBin_SortCallback::_bind_sortImplementation},
	{"__eq", &luna_wrapper_osgUtil_RenderBin_SortCallback::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_RenderBin_SortCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderBin::SortCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_RenderBin_SortCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderBin::SortCallback >::enumValues[] = {
	{0,0}
};


