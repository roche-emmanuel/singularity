#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GraphicsContext_Traits.h>

class luna_wrapper_osg_GraphicsContext_Traits {
public:
	typedef Luna< osg::GraphicsContext::Traits > luna_t;

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
		//osg::GraphicsContext::Traits* ptr= dynamic_cast< osg::GraphicsContext::Traits* >(Luna< osg::Referenced >::check(L,1));
		osg::GraphicsContext::Traits* ptr= luna_caster< osg::Referenced, osg::GraphicsContext::Traits >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsContext::Traits >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !dynamic_cast< osg::DisplaySettings* >(Luna< osg::Referenced >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !dynamic_cast< osg::DisplaySettings* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GraphicsContext::Traits::Traits(osg::DisplaySettings * ds = 0)
	static osg::GraphicsContext::Traits* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::Traits::Traits(osg::DisplaySettings * ds = 0) function, expected prototype:\nosg::GraphicsContext::Traits::Traits(osg::DisplaySettings * ds = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::DisplaySettings* ds=luatop>0 ? (Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1)) : (osg::DisplaySettings*)0;

		return new osg::GraphicsContext::Traits(ds);
	}

	// osg::GraphicsContext::Traits::Traits(lua_Table * data, osg::DisplaySettings * ds = 0)
	static osg::GraphicsContext::Traits* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::Traits::Traits(lua_Table * data, osg::DisplaySettings * ds = 0) function, expected prototype:\nosg::GraphicsContext::Traits::Traits(lua_Table * data, osg::DisplaySettings * ds = 0)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::DisplaySettings* ds=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2)) : (osg::DisplaySettings*)0;

		return new wrapper_osg_GraphicsContext_Traits(L,NULL, ds);
	}

	// Overload binder for osg::GraphicsContext::Traits::Traits
	static osg::GraphicsContext::Traits* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Traits, cannot match any of the overloads for function Traits:\n  Traits(osg::DisplaySettings *)\n  Traits(lua_Table *, osg::DisplaySettings *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osg::GraphicsContext::Traits* LunaTraits< osg::GraphicsContext::Traits >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsContext_Traits::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::GraphicsContext::Traits >::_bind_dtor(osg::GraphicsContext::Traits* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsContext::Traits >::className[] = "Traits";
const char LunaTraits< osg::GraphicsContext::Traits >::fullName[] = "osg::GraphicsContext::Traits";
const char LunaTraits< osg::GraphicsContext::Traits >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::Traits >::parents[] = {"osg.Referenced", "osg.ScreenIdentifier", 0};
const int LunaTraits< osg::GraphicsContext::Traits >::hash = 19159633;
const int LunaTraits< osg::GraphicsContext::Traits >::uniqueIDs[] = {50169651, 83590106,0};

luna_RegType LunaTraits< osg::GraphicsContext::Traits >::methods[] = {
	{"__eq", &luna_wrapper_osg_GraphicsContext_Traits::_bind___eq},
	{"getTable", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::Traits >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsContext_Traits::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::Traits >::enumValues[] = {
	{0,0}
};


