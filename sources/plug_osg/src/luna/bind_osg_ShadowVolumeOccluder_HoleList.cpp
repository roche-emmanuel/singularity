#include <plug_common.h>

class luna_wrapper_osg_ShadowVolumeOccluder_HoleList {
public:
	typedef Luna< osg::ShadowVolumeOccluder::HoleList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59079133) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ShadowVolumeOccluder::HoleList*)");
		}

		osg::ShadowVolumeOccluder::HoleList* rhs =(Luna< osg::ShadowVolumeOccluder::HoleList >::check(L,2));
		osg::ShadowVolumeOccluder::HoleList* self=(Luna< osg::ShadowVolumeOccluder::HoleList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ShadowVolumeOccluder::HoleList* self=(Luna< osg::ShadowVolumeOccluder::HoleList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ShadowVolumeOccluder::HoleList");
		
		return luna_dynamicCast(L,converters,"osg::ShadowVolumeOccluder::HoleList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ShadowVolumeOccluder::HoleList* LunaTraits< osg::ShadowVolumeOccluder::HoleList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ShadowVolumeOccluder::HoleList >::_bind_dtor(osg::ShadowVolumeOccluder::HoleList* obj) {
	delete obj;
}

const char LunaTraits< osg::ShadowVolumeOccluder::HoleList >::className[] = "HoleList";
const char LunaTraits< osg::ShadowVolumeOccluder::HoleList >::fullName[] = "osg::ShadowVolumeOccluder::HoleList";
const char LunaTraits< osg::ShadowVolumeOccluder::HoleList >::moduleName[] = "osg";
const char* LunaTraits< osg::ShadowVolumeOccluder::HoleList >::parents[] = {0};
const int LunaTraits< osg::ShadowVolumeOccluder::HoleList >::hash = 59079133;
const int LunaTraits< osg::ShadowVolumeOccluder::HoleList >::uniqueIDs[] = {59079133,0};

luna_RegType LunaTraits< osg::ShadowVolumeOccluder::HoleList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ShadowVolumeOccluder_HoleList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ShadowVolumeOccluder_HoleList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShadowVolumeOccluder::HoleList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShadowVolumeOccluder::HoleList >::enumValues[] = {
	{0,0}
};


