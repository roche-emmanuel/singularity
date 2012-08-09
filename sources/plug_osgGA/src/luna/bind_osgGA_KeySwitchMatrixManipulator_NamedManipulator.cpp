#include <plug_common.h>

class luna_wrapper_osgGA_KeySwitchMatrixManipulator_NamedManipulator {
public:
	typedef Luna< osgGA::KeySwitchMatrixManipulator::NamedManipulator > luna_t;

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

		osgGA::KeySwitchMatrixManipulator::NamedManipulator* self=(Luna< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgGA::KeySwitchMatrixManipulator::NamedManipulator");
		
		return luna_dynamicCast(L,converters,"osgGA::KeySwitchMatrixManipulator::NamedManipulator",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgGA::KeySwitchMatrixManipulator::NamedManipulator* LunaTraits< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::_bind_dtor(osgGA::KeySwitchMatrixManipulator::NamedManipulator* obj) {
	delete obj;
}

const char LunaTraits< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::className[] = "NamedManipulator";
const char LunaTraits< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::fullName[] = "osgGA::KeySwitchMatrixManipulator::NamedManipulator";
const char LunaTraits< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::parents[] = {0};
const int LunaTraits< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::hash = 44319162;
const int LunaTraits< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::uniqueIDs[] = {44319162,0};

luna_RegType LunaTraits< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::methods[] = {
	{"dynCast", &luna_wrapper_osgGA_KeySwitchMatrixManipulator_NamedManipulator::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::KeySwitchMatrixManipulator::NamedManipulator >::enumValues[] = {
	{0,0}
};

