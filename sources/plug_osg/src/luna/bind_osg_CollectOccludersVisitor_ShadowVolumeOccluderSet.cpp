#include <plug_common.h>

class luna_wrapper_osg_CollectOccludersVisitor_ShadowVolumeOccluderSet {
public:
	typedef Luna< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet > luna_t;

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

		osg::CollectOccludersVisitor::ShadowVolumeOccluderSet* self=(Luna< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::CollectOccludersVisitor::ShadowVolumeOccluderSet");
		
		return luna_dynamicCast(L,converters,"osg::CollectOccludersVisitor::ShadowVolumeOccluderSet",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::CollectOccludersVisitor::ShadowVolumeOccluderSet* LunaTraits< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::_bind_dtor(osg::CollectOccludersVisitor::ShadowVolumeOccluderSet* obj) {
	delete obj;
}

const char LunaTraits< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::className[] = "ShadowVolumeOccluderSet";
const char LunaTraits< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::fullName[] = "osg::CollectOccludersVisitor::ShadowVolumeOccluderSet";
const char LunaTraits< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::moduleName[] = "osg";
const char* LunaTraits< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::parents[] = {0};
const int LunaTraits< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::hash = 26463029;
const int LunaTraits< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::uniqueIDs[] = {26463029,0};

luna_RegType LunaTraits< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::methods[] = {
	{"dynCast", &luna_wrapper_osg_CollectOccludersVisitor_ShadowVolumeOccluderSet::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::enumValues[] = {
	{0,0}
};


