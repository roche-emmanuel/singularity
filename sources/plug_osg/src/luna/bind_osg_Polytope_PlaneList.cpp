#include <plug_common.h>

class luna_wrapper_osg_Polytope_PlaneList {
public:
	typedef Luna< osg::Polytope::PlaneList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,33161232) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Polytope::PlaneList*)");
		}

		osg::Polytope::PlaneList* rhs =(Luna< osg::Polytope::PlaneList >::check(L,2));
		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
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

		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Polytope::PlaneList");
		
		return luna_dynamicCast(L,converters,"osg::Polytope::PlaneList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Polytope::PlaneList* LunaTraits< osg::Polytope::PlaneList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Polytope::PlaneList >::_bind_dtor(osg::Polytope::PlaneList* obj) {
	delete obj;
}

const char LunaTraits< osg::Polytope::PlaneList >::className[] = "PlaneList";
const char LunaTraits< osg::Polytope::PlaneList >::fullName[] = "osg::Polytope::PlaneList";
const char LunaTraits< osg::Polytope::PlaneList >::moduleName[] = "osg";
const char* LunaTraits< osg::Polytope::PlaneList >::parents[] = {0};
const int LunaTraits< osg::Polytope::PlaneList >::hash = 33161232;
const int LunaTraits< osg::Polytope::PlaneList >::uniqueIDs[] = {33161232,0};

luna_RegType LunaTraits< osg::Polytope::PlaneList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Polytope_PlaneList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Polytope_PlaneList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Polytope::PlaneList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Polytope::PlaneList >::enumValues[] = {
	{0,0}
};


