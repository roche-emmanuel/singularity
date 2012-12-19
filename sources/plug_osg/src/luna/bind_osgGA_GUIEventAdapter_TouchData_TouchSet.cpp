#include <plug_common.h>

class luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchSet {
public:
	typedef Luna< osgGA::GUIEventAdapter::TouchData::TouchSet > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77825770) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgGA::GUIEventAdapter::TouchData::TouchSet*)");
		}

		osgGA::GUIEventAdapter::TouchData::TouchSet* rhs =(Luna< osgGA::GUIEventAdapter::TouchData::TouchSet >::check(L,2));
		osgGA::GUIEventAdapter::TouchData::TouchSet* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchSet >::check(L,1));
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

		osgGA::GUIEventAdapter::TouchData::TouchSet* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgGA::GUIEventAdapter::TouchData::TouchSet");
		
		return luna_dynamicCast(L,converters,"osgGA::GUIEventAdapter::TouchData::TouchSet",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgGA::GUIEventAdapter::TouchData::TouchSet* LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchSet >::_bind_dtor(osgGA::GUIEventAdapter::TouchData::TouchSet* obj) {
	delete obj;
}

const char LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchSet >::className[] = "TouchSet";
const char LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchSet >::fullName[] = "osgGA::GUIEventAdapter::TouchData::TouchSet";
const char LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchSet >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchSet >::parents[] = {0};
const int LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchSet >::hash = 77825770;
const int LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchSet >::uniqueIDs[] = {77825770,0};

luna_RegType LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchSet >::methods[] = {
	{"dynCast", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchSet::_bind_dynCast},
	{"__eq", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchSet::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchSet >::enumValues[] = {
	{0,0}
};


