#include <plug_common.h>

class luna_wrapper_osg_ShadowVolumeOccluderList {
public:
	typedef Luna< osg::ShadowVolumeOccluderList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39369741) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ShadowVolumeOccluderList*)");
		}

		osg::ShadowVolumeOccluderList* rhs =(Luna< osg::ShadowVolumeOccluderList >::check(L,2));
		osg::ShadowVolumeOccluderList* self=(Luna< osg::ShadowVolumeOccluderList >::check(L,1));
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

		osg::ShadowVolumeOccluderList* self=(Luna< osg::ShadowVolumeOccluderList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ShadowVolumeOccluderList");
		
		return luna_dynamicCast(L,converters,"osg::ShadowVolumeOccluderList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ShadowVolumeOccluderList* LunaTraits< osg::ShadowVolumeOccluderList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ShadowVolumeOccluderList >::_bind_dtor(osg::ShadowVolumeOccluderList* obj) {
	delete obj;
}

const char LunaTraits< osg::ShadowVolumeOccluderList >::className[] = "ShadowVolumeOccluderList";
const char LunaTraits< osg::ShadowVolumeOccluderList >::fullName[] = "osg::ShadowVolumeOccluderList";
const char LunaTraits< osg::ShadowVolumeOccluderList >::moduleName[] = "osg";
const char* LunaTraits< osg::ShadowVolumeOccluderList >::parents[] = {0};
const int LunaTraits< osg::ShadowVolumeOccluderList >::hash = 39369741;
const int LunaTraits< osg::ShadowVolumeOccluderList >::uniqueIDs[] = {39369741,0};

luna_RegType LunaTraits< osg::ShadowVolumeOccluderList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ShadowVolumeOccluderList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ShadowVolumeOccluderList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShadowVolumeOccluderList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShadowVolumeOccluderList >::enumValues[] = {
	{0,0}
};


