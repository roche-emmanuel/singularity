#include <plug_common.h>

class luna_wrapper_osg_AnimationPath_TimeControlPointMap {
public:
	typedef Luna< osg::AnimationPath::TimeControlPointMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87612809) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::AnimationPath::TimeControlPointMap*)");
		}

		osg::AnimationPath::TimeControlPointMap* rhs =(Luna< osg::AnimationPath::TimeControlPointMap >::check(L,2));
		osg::AnimationPath::TimeControlPointMap* self=(Luna< osg::AnimationPath::TimeControlPointMap >::check(L,1));
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

		osg::AnimationPath::TimeControlPointMap* self=(Luna< osg::AnimationPath::TimeControlPointMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::AnimationPath::TimeControlPointMap");
		
		return luna_dynamicCast(L,converters,"osg::AnimationPath::TimeControlPointMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::AnimationPath::TimeControlPointMap* LunaTraits< osg::AnimationPath::TimeControlPointMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::AnimationPath::TimeControlPointMap >::_bind_dtor(osg::AnimationPath::TimeControlPointMap* obj) {
	delete obj;
}

const char LunaTraits< osg::AnimationPath::TimeControlPointMap >::className[] = "TimeControlPointMap";
const char LunaTraits< osg::AnimationPath::TimeControlPointMap >::fullName[] = "osg::AnimationPath::TimeControlPointMap";
const char LunaTraits< osg::AnimationPath::TimeControlPointMap >::moduleName[] = "osg";
const char* LunaTraits< osg::AnimationPath::TimeControlPointMap >::parents[] = {0};
const int LunaTraits< osg::AnimationPath::TimeControlPointMap >::hash = 87612809;
const int LunaTraits< osg::AnimationPath::TimeControlPointMap >::uniqueIDs[] = {87612809,0};

luna_RegType LunaTraits< osg::AnimationPath::TimeControlPointMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_AnimationPath_TimeControlPointMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_AnimationPath_TimeControlPointMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AnimationPath::TimeControlPointMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AnimationPath::TimeControlPointMap >::enumValues[] = {
	{0,0}
};


