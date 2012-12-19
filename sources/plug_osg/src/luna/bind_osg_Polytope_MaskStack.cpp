#include <plug_common.h>

class luna_wrapper_osg_Polytope_MaskStack {
public:
	typedef Luna< osg::Polytope::MaskStack > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95628403) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Polytope::MaskStack*)");
		}

		osg::Polytope::MaskStack* rhs =(Luna< osg::Polytope::MaskStack >::check(L,2));
		osg::Polytope::MaskStack* self=(Luna< osg::Polytope::MaskStack >::check(L,1));
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

		osg::Polytope::MaskStack* self=(Luna< osg::Polytope::MaskStack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Polytope::MaskStack");
		
		return luna_dynamicCast(L,converters,"osg::Polytope::MaskStack",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Polytope::MaskStack* LunaTraits< osg::Polytope::MaskStack >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Polytope::MaskStack >::_bind_dtor(osg::Polytope::MaskStack* obj) {
	delete obj;
}

const char LunaTraits< osg::Polytope::MaskStack >::className[] = "MaskStack";
const char LunaTraits< osg::Polytope::MaskStack >::fullName[] = "osg::Polytope::MaskStack";
const char LunaTraits< osg::Polytope::MaskStack >::moduleName[] = "osg";
const char* LunaTraits< osg::Polytope::MaskStack >::parents[] = {0};
const int LunaTraits< osg::Polytope::MaskStack >::hash = 95628403;
const int LunaTraits< osg::Polytope::MaskStack >::uniqueIDs[] = {95628403,0};

luna_RegType LunaTraits< osg::Polytope::MaskStack >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Polytope_MaskStack::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Polytope_MaskStack::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Polytope::MaskStack >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Polytope::MaskStack >::enumValues[] = {
	{0,0}
};


