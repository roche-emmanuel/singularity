#include <plug_common.h>

class luna_wrapper_osgGA_KeySwitchMatrixManipulator_KeyManipMap {
public:
	typedef Luna< osgGA::KeySwitchMatrixManipulator::KeyManipMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71456208) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgGA::KeySwitchMatrixManipulator::KeyManipMap*)");
		}

		osgGA::KeySwitchMatrixManipulator::KeyManipMap* rhs =(Luna< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::check(L,2));
		osgGA::KeySwitchMatrixManipulator::KeyManipMap* self=(Luna< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::check(L,1));
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

		osgGA::KeySwitchMatrixManipulator::KeyManipMap* self=(Luna< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgGA::KeySwitchMatrixManipulator::KeyManipMap");
		
		return luna_dynamicCast(L,converters,"osgGA::KeySwitchMatrixManipulator::KeyManipMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgGA::KeySwitchMatrixManipulator::KeyManipMap* LunaTraits< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::_bind_dtor(osgGA::KeySwitchMatrixManipulator::KeyManipMap* obj) {
	delete obj;
}

const char LunaTraits< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::className[] = "KeyManipMap";
const char LunaTraits< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::fullName[] = "osgGA::KeySwitchMatrixManipulator::KeyManipMap";
const char LunaTraits< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::moduleName[] = "osg";
const char* LunaTraits< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::parents[] = {0};
const int LunaTraits< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::hash = 71456208;
const int LunaTraits< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::uniqueIDs[] = {71456208,0};

luna_RegType LunaTraits< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgGA_KeySwitchMatrixManipulator_KeyManipMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgGA_KeySwitchMatrixManipulator_KeyManipMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::enumValues[] = {
	{0,0}
};


