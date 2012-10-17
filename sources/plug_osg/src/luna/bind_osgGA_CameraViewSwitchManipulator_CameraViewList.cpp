#include <plug_common.h>

class luna_wrapper_osgGA_CameraViewSwitchManipulator_CameraViewList {
public:
	typedef Luna< osgGA::CameraViewSwitchManipulator::CameraViewList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14581426) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgGA::CameraViewSwitchManipulator::CameraViewList*)");
		}

		osgGA::CameraViewSwitchManipulator::CameraViewList* rhs =(Luna< osgGA::CameraViewSwitchManipulator::CameraViewList >::check(L,2));
		osgGA::CameraViewSwitchManipulator::CameraViewList* self=(Luna< osgGA::CameraViewSwitchManipulator::CameraViewList >::check(L,1));
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

		osgGA::CameraViewSwitchManipulator::CameraViewList* self=(Luna< osgGA::CameraViewSwitchManipulator::CameraViewList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgGA::CameraViewSwitchManipulator::CameraViewList");
		
		return luna_dynamicCast(L,converters,"osgGA::CameraViewSwitchManipulator::CameraViewList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgGA::CameraViewSwitchManipulator::CameraViewList* LunaTraits< osgGA::CameraViewSwitchManipulator::CameraViewList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgGA::CameraViewSwitchManipulator::CameraViewList >::_bind_dtor(osgGA::CameraViewSwitchManipulator::CameraViewList* obj) {
	delete obj;
}

const char LunaTraits< osgGA::CameraViewSwitchManipulator::CameraViewList >::className[] = "CameraViewList";
const char LunaTraits< osgGA::CameraViewSwitchManipulator::CameraViewList >::fullName[] = "osgGA::CameraViewSwitchManipulator::CameraViewList";
const char LunaTraits< osgGA::CameraViewSwitchManipulator::CameraViewList >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::CameraViewSwitchManipulator::CameraViewList >::parents[] = {0};
const int LunaTraits< osgGA::CameraViewSwitchManipulator::CameraViewList >::hash = 14581426;
const int LunaTraits< osgGA::CameraViewSwitchManipulator::CameraViewList >::uniqueIDs[] = {14581426,0};

luna_RegType LunaTraits< osgGA::CameraViewSwitchManipulator::CameraViewList >::methods[] = {
	{"dynCast", &luna_wrapper_osgGA_CameraViewSwitchManipulator_CameraViewList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgGA_CameraViewSwitchManipulator_CameraViewList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::CameraViewSwitchManipulator::CameraViewList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::CameraViewSwitchManipulator::CameraViewList >::enumValues[] = {
	{0,0}
};


