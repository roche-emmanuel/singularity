#include <plug_common.h>

class luna_wrapper_osg_TransferFunction1D_ColorMap {
public:
	typedef Luna< osg::TransferFunction1D::ColorMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93067344) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TransferFunction1D::ColorMap*)");
		}

		osg::TransferFunction1D::ColorMap* rhs =(Luna< osg::TransferFunction1D::ColorMap >::check(L,2));
		osg::TransferFunction1D::ColorMap* self=(Luna< osg::TransferFunction1D::ColorMap >::check(L,1));
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

		osg::TransferFunction1D::ColorMap* self=(Luna< osg::TransferFunction1D::ColorMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TransferFunction1D::ColorMap");
		
		return luna_dynamicCast(L,converters,"osg::TransferFunction1D::ColorMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::TransferFunction1D::ColorMap* LunaTraits< osg::TransferFunction1D::ColorMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::TransferFunction1D::ColorMap >::_bind_dtor(osg::TransferFunction1D::ColorMap* obj) {
	delete obj;
}

const char LunaTraits< osg::TransferFunction1D::ColorMap >::className[] = "ColorMap";
const char LunaTraits< osg::TransferFunction1D::ColorMap >::fullName[] = "osg::TransferFunction1D::ColorMap";
const char LunaTraits< osg::TransferFunction1D::ColorMap >::moduleName[] = "osg";
const char* LunaTraits< osg::TransferFunction1D::ColorMap >::parents[] = {0};
const int LunaTraits< osg::TransferFunction1D::ColorMap >::hash = 93067344;
const int LunaTraits< osg::TransferFunction1D::ColorMap >::uniqueIDs[] = {93067344,0};

luna_RegType LunaTraits< osg::TransferFunction1D::ColorMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TransferFunction1D_ColorMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TransferFunction1D_ColorMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TransferFunction1D::ColorMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TransferFunction1D::ColorMap >::enumValues[] = {
	{0,0}
};


